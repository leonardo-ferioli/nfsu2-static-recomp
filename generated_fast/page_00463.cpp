#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_439(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_457(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_459(u8* __restrict R,Cpu& c);
u32 body_45d(u8* __restrict R,Cpu& c);
u32 body_45f(u8* __restrict R,Cpu& c);
u32 body_461(u8* __restrict R,Cpu& c);
u32 body_462(u8* __restrict R,Cpu& c);
u32 body_464(u8* __restrict R,Cpu& c);
u32 body_721(u8* __restrict R,Cpu& c);
u32 body_734(u8* __restrict R,Cpu& c);
u32 body_735(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x463,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x463,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_463(u8* __restrict R,Cpu& c);
u32 page_463(Cpu& c){return body_463(c.regs.data(),c);}
__attribute__((noinline)) u32 body_463(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x463004:goto L463004;
case 0x463005:c.instructions+=2;goto B463005;
case 0x46300a:c.instructions+=1;goto B46300a;
case 0x46300f:goto L46300f;
case 0x463012:c.instructions+=2;goto B463012;
case 0x463014:c.instructions+=1;goto B463014;
case 0x463016:goto L463016;
case 0x463018:c.instructions+=1;goto B463018;
case 0x46301d:goto L46301d;
case 0x46301f:c.instructions+=1;goto B46301f;
case 0x463020:goto L463020;
case 0x463022:c.instructions+=20;goto B463022;
case 0x463027:c.instructions+=19;goto B463027;
case 0x46302d:c.instructions+=18;goto B46302d;
case 0x46302e:c.instructions+=17;goto B46302e;
case 0x463035:c.instructions+=16;goto B463035;
case 0x463038:c.instructions+=15;goto B463038;
case 0x463039:c.instructions+=14;goto B463039;
case 0x46303a:c.instructions+=13;goto B46303a;
case 0x46303c:c.instructions+=12;goto B46303c;
case 0x46303f:c.instructions+=11;goto B46303f;
case 0x463042:c.instructions+=10;goto B463042;
case 0x463045:c.instructions+=9;goto B463045;
case 0x463047:c.instructions+=8;goto B463047;
case 0x463048:c.instructions+=7;goto B463048;
case 0x46304a:c.instructions+=6;goto B46304a;
case 0x46304b:c.instructions+=5;goto B46304b;
case 0x463051:c.instructions+=4;goto B463051;
case 0x463052:c.instructions+=3;goto B463052;
case 0x463053:c.instructions+=2;goto B463053;
case 0x463054:c.instructions+=1;goto B463054;
case 0x463059:goto L463059;
case 0x46305f:c.instructions+=4;goto B46305f;
case 0x463061:c.instructions+=3;goto B463061;
case 0x463064:c.instructions+=2;goto B463064;
case 0x463065:c.instructions+=1;goto B463065;
case 0x463068:goto L463068;
case 0x46306a:c.instructions+=11;goto B46306a;
case 0x46306d:c.instructions+=10;goto B46306d;
case 0x463070:c.instructions+=9;goto B463070;
case 0x463072:c.instructions+=8;goto B463072;
case 0x463074:c.instructions+=7;goto B463074;
case 0x46307a:c.instructions+=6;goto B46307a;
case 0x463080:c.instructions+=5;goto B463080;
case 0x463084:c.instructions+=4;goto B463084;
case 0x46308a:c.instructions+=3;goto B46308a;
case 0x463090:c.instructions+=2;goto B463090;
case 0x463092:c.instructions+=1;goto B463092;
case 0x463094:goto L463094;
case 0x463096:c.instructions+=2;goto B463096;
case 0x463098:c.instructions+=1;goto B463098;
case 0x46309a:goto L46309a;
case 0x46309f:goto L46309f;
case 0x4630a3:c.instructions+=2;goto B4630a3;
case 0x4630a4:c.instructions+=1;goto B4630a4;
case 0x4630a9:goto L4630a9;
case 0x4630ac:c.instructions+=1;goto B4630ac;
case 0x4630b1:goto L4630b1;
case 0x4630b5:c.instructions+=4;goto B4630b5;
case 0x4630b7:c.instructions+=3;goto B4630b7;
case 0x4630b8:c.instructions+=2;goto B4630b8;
case 0x4630b9:c.instructions+=1;goto B4630b9;
case 0x4630bc:goto L4630bc;
case 0x4630c1:goto L4630c1;
case 0x4630c7:goto L4630c7;
case 0x4630cb:c.instructions+=2;goto B4630cb;
case 0x4630cc:c.instructions+=1;goto B4630cc;
case 0x4630d1:goto L4630d1;
case 0x4630d4:c.instructions+=1;goto B4630d4;
case 0x4630d9:goto L4630d9;
case 0x4630dd:c.instructions+=8;goto B4630dd;
case 0x4630e1:c.instructions+=7;goto B4630e1;
case 0x4630e2:c.instructions+=6;goto B4630e2;
case 0x4630e6:c.instructions+=5;goto B4630e6;
case 0x4630ea:c.instructions+=4;goto B4630ea;
case 0x4630ee:c.instructions+=3;goto B4630ee;
case 0x4630f0:c.instructions+=2;goto B4630f0;
case 0x4630f2:c.instructions+=1;goto B4630f2;
case 0x4630f4:goto L4630f4;
case 0x4630f6:c.instructions+=1;goto B4630f6;
case 0x4630fb:goto L4630fb;
case 0x4630ff:c.instructions+=3;goto B4630ff;
case 0x463101:c.instructions+=2;goto B463101;
case 0x463105:c.instructions+=1;goto B463105;
case 0x463107:goto L463107;
case 0x463108:c.instructions+=10;goto B463108;
case 0x46310b:c.instructions+=9;goto B46310b;
case 0x46310c:c.instructions+=8;goto B46310c;
case 0x46310d:c.instructions+=7;goto B46310d;
case 0x463112:c.instructions+=6;goto B463112;
case 0x463115:c.instructions+=5;goto B463115;
case 0x463118:c.instructions+=4;goto B463118;
case 0x46311b:c.instructions+=3;goto B46311b;
case 0x46311e:c.instructions+=2;goto B46311e;
case 0x463121:c.instructions+=1;goto B463121;
case 0x463126:goto L463126;
case 0x463129:c.instructions+=2;goto B463129;
case 0x46312b:c.instructions+=1;goto B46312b;
case 0x46312d:goto L46312d;
case 0x463132:c.instructions+=2;goto B463132;
case 0x463137:c.instructions+=1;goto B463137;
case 0x46313c:goto L46313c;
case 0x46313d:c.instructions+=3;goto B46313d;
case 0x46313e:c.instructions+=2;goto B46313e;
case 0x463143:c.instructions+=1;goto B463143;
case 0x463148:goto L463148;
case 0x46314b:goto L46314b;
case 0x46314c:c.instructions+=8;goto B46314c;
case 0x463152:c.instructions+=7;goto B463152;
case 0x463153:c.instructions+=6;goto B463153;
case 0x463154:c.instructions+=5;goto B463154;
case 0x463155:c.instructions+=4;goto B463155;
case 0x463159:c.instructions+=3;goto B463159;
case 0x463160:c.instructions+=2;goto B463160;
case 0x463163:c.instructions+=1;goto B463163;
case 0x463164:goto L463164;
case 0x463168:c.instructions+=7;goto B463168;
case 0x46316e:c.instructions+=6;goto B46316e;
case 0x46316f:c.instructions+=5;goto B46316f;
case 0x463170:c.instructions+=4;goto B463170;
case 0x463171:c.instructions+=3;goto B463171;
case 0x463178:c.instructions+=2;goto B463178;
case 0x46317b:c.instructions+=1;goto B46317b;
case 0x463180:goto L463180;
case 0x463181:c.instructions+=7;goto B463181;
case 0x463182:c.instructions+=6;goto B463182;
case 0x463184:c.instructions+=5;goto B463184;
case 0x46318a:c.instructions+=4;goto B46318a;
case 0x46318c:c.instructions+=3;goto B46318c;
case 0x46318d:c.instructions+=2;goto B46318d;
case 0x46318f:c.instructions+=1;goto B46318f;
case 0x463192:goto L463192;
case 0x463198:c.instructions+=2;goto B463198;
case 0x46319a:c.instructions+=1;goto B46319a;
case 0x46319c:goto L46319c;
case 0x46319e:c.instructions+=2;goto B46319e;
case 0x4631a0:c.instructions+=1;goto B4631a0;
case 0x4631a2:goto L4631a2;
case 0x4631a7:goto L4631a7;
case 0x4631ab:c.instructions+=2;goto B4631ab;
case 0x4631ac:c.instructions+=1;goto B4631ac;
case 0x4631b1:goto L4631b1;
case 0x4631b4:c.instructions+=1;goto B4631b4;
case 0x4631b9:goto L4631b9;
case 0x4631bd:c.instructions+=4;goto B4631bd;
case 0x4631bf:c.instructions+=3;goto B4631bf;
case 0x4631c1:c.instructions+=2;goto B4631c1;
case 0x4631c2:c.instructions+=1;goto B4631c2;
case 0x4631c5:goto L4631c5;
case 0x4631ca:goto L4631ca;
case 0x4631cb:c.instructions+=4;goto B4631cb;
case 0x4631d5:c.instructions+=3;goto B4631d5;
case 0x4631d6:c.instructions+=2;goto B4631d6;
case 0x4631d7:c.instructions+=1;goto B4631d7;
case 0x4631e0:goto L4631e0;
case 0x4631e1:c.instructions+=4;goto B4631e1;
case 0x4631e3:c.instructions+=3;goto B4631e3;
case 0x4631e9:c.instructions+=2;goto B4631e9;
case 0x4631eb:c.instructions+=1;goto B4631eb;
case 0x4631ed:goto L4631ed;
case 0x4631f4:c.instructions+=3;goto B4631f4;
case 0x4631f6:c.instructions+=2;goto B4631f6;
case 0x4631f8:c.instructions+=1;goto B4631f8;
case 0x4631fb:goto L4631fb;
case 0x4631fd:c.instructions+=2;goto B4631fd;
case 0x463203:c.instructions+=1;goto B463203;
case 0x463205:goto L463205;
case 0x463207:c.instructions+=1;goto B463207;
case 0x463209:goto L463209;
case 0x46320e:c.instructions+=1;goto B46320e;
case 0x463210:goto L463210;
case 0x463215:goto L463215;
case 0x463218:c.instructions+=6;goto B463218;
case 0x46321e:c.instructions+=5;goto B46321e;
case 0x463225:c.instructions+=4;goto B463225;
case 0x463227:c.instructions+=3;goto B463227;
case 0x463229:c.instructions+=2;goto B463229;
case 0x46322b:c.instructions+=1;goto B46322b;
case 0x46322e:goto L46322e;
case 0x463230:c.instructions+=2;goto B463230;
case 0x463236:c.instructions+=1;goto B463236;
case 0x463238:goto L463238;
case 0x46323a:c.instructions+=1;goto B46323a;
case 0x46323c:goto L46323c;
case 0x463241:c.instructions+=1;goto B463241;
case 0x463243:goto L463243;
case 0x463248:goto L463248;
case 0x46324b:c.instructions+=4;goto B46324b;
case 0x463251:c.instructions+=3;goto B463251;
case 0x463253:c.instructions+=2;goto B463253;
case 0x463255:c.instructions+=1;goto B463255;
case 0x463257:goto L463257;
case 0x46325a:c.instructions+=2;goto B46325a;
case 0x46325b:c.instructions+=1;goto B46325b;
case 0x463260:goto L463260;
case 0x463261:c.instructions+=1;goto B463261;
case 0x463270:goto L463270;
case 0x463275:c.instructions+=1;goto B463275;
case 0x463280:goto L463280;
case 0x463285:c.instructions+=1;goto B463285;
case 0x463290:goto L463290;
case 0x463294:c.instructions+=5;goto B463294;
case 0x463296:c.instructions+=4;goto B463296;
case 0x463298:c.instructions+=3;goto B463298;
case 0x46329b:c.instructions+=2;goto B46329b;
case 0x4632a2:c.instructions+=1;goto B4632a2;
case 0x4632b0:goto L4632b0;
case 0x4632b5:c.instructions+=1;goto B4632b5;
case 0x4632b7:goto L4632b7;
case 0x4632be:goto L4632be;
case 0x4632c0:goto L4632c0;
case 0x4632c1:c.instructions+=7;goto B4632c1;
case 0x4632c2:c.instructions+=6;goto B4632c2;
case 0x4632c4:c.instructions+=5;goto B4632c4;
case 0x4632c7:c.instructions+=4;goto B4632c7;
case 0x4632ca:c.instructions+=3;goto B4632ca;
case 0x4632cc:c.instructions+=2;goto B4632cc;
case 0x4632ce:c.instructions+=1;goto B4632ce;
case 0x4632d4:goto L4632d4;
case 0x4632da:c.instructions+=1;goto B4632da;
case 0x4632e0:goto L4632e0;
case 0x4632e6:c.instructions+=3;goto B4632e6;
case 0x4632ec:c.instructions+=2;goto B4632ec;
case 0x4632f3:c.instructions+=1;goto B4632f3;
case 0x4632f9:goto L4632f9;
case 0x4632ff:c.instructions+=1;goto B4632ff;
case 0x463301:goto L463301;
case 0x463307:c.instructions+=1;goto B463307;
case 0x463309:goto L463309;
case 0x46330f:c.instructions+=2;goto B46330f;
case 0x463311:c.instructions+=1;goto B463311;
case 0x463313:goto L463313;
case 0x463318:goto L463318;
case 0x46331e:goto L46331e;
case 0x463323:c.instructions+=3;goto B463323;
case 0x463324:c.instructions+=2;goto B463324;
case 0x463325:c.instructions+=1;goto B463325;
case 0x46332a:goto L46332a;
case 0x463330:c.instructions+=4;goto B463330;
case 0x463336:c.instructions+=3;goto B463336;
case 0x463339:c.instructions+=2;goto B463339;
case 0x46333a:c.instructions+=1;goto B46333a;
case 0x46333f:goto L46333f;
case 0x463340:c.instructions+=2;goto B463340;
case 0x463341:c.instructions+=1;goto B463341;
case 0x463342:goto L463342;
case 0x463348:c.instructions+=2;goto B463348;
case 0x46334a:c.instructions+=1;goto B46334a;
case 0x46334c:goto L46334c;
case 0x463351:goto L463351;
case 0x463357:goto L463357;
case 0x46335c:c.instructions+=3;goto B46335c;
case 0x46335d:c.instructions+=2;goto B46335d;
case 0x46335e:c.instructions+=1;goto B46335e;
case 0x463363:goto L463363;
case 0x463368:c.instructions+=4;goto B463368;
case 0x46336e:c.instructions+=3;goto B46336e;
case 0x463371:c.instructions+=2;goto B463371;
case 0x463372:c.instructions+=1;goto B463372;
case 0x463377:goto L463377;
case 0x463378:c.instructions+=2;goto B463378;
case 0x463379:c.instructions+=1;goto B463379;
case 0x46337a:goto L46337a;
case 0x463380:c.instructions+=2;goto B463380;
case 0x463382:c.instructions+=1;goto B463382;
case 0x463384:goto L463384;
case 0x463389:goto L463389;
case 0x46338f:goto L46338f;
case 0x463394:c.instructions+=3;goto B463394;
case 0x463395:c.instructions+=2;goto B463395;
case 0x463396:c.instructions+=1;goto B463396;
case 0x46339b:goto L46339b;
case 0x4633a1:c.instructions+=4;goto B4633a1;
case 0x4633a4:c.instructions+=3;goto B4633a4;
case 0x4633a5:c.instructions+=2;goto B4633a5;
case 0x4633ab:c.instructions+=1;goto B4633ab;
case 0x4633b0:goto L4633b0;
case 0x4633b6:c.instructions+=3;goto B4633b6;
case 0x4633b7:c.instructions+=2;goto B4633b7;
case 0x4633b9:c.instructions+=1;goto B4633b9;
case 0x4633be:goto L4633be;
case 0x4633bf:c.instructions+=2;goto B4633bf;
case 0x4633c0:c.instructions+=1;goto B4633c0;
case 0x4633c1:goto L4633c1;
case 0x4633c7:c.instructions+=2;goto B4633c7;
case 0x4633ce:c.instructions+=1;goto B4633ce;
case 0x4633d0:goto L4633d0;
case 0x4633d6:c.instructions+=3;goto B4633d6;
case 0x4633d7:c.instructions+=2;goto B4633d7;
case 0x4633d9:c.instructions+=1;goto B4633d9;
case 0x4633de:goto L4633de;
case 0x4633df:c.instructions+=2;goto B4633df;
case 0x4633e0:c.instructions+=1;goto B4633e0;
case 0x4633f0:goto L4633f0;
case 0x4633f5:c.instructions+=2;goto B4633f5;
case 0x4633f7:c.instructions+=1;goto B4633f7;
case 0x4633f9:goto L4633f9;
case 0x4633fe:c.instructions+=2;goto B4633fe;
case 0x463400:c.instructions+=1;goto B463400;
case 0x463402:goto L463402;
case 0x463404:c.instructions+=1;goto B463404;
case 0x463407:goto L463407;
case 0x46340e:c.instructions+=1;goto B46340e;
case 0x46340f:goto L46340f;
case 0x463415:c.instructions+=3;goto B463415;
case 0x46341b:c.instructions+=2;goto B46341b;
case 0x46341d:c.instructions+=1;goto B46341d;
case 0x46341f:goto L46341f;
case 0x463425:c.instructions+=3;goto B463425;
case 0x46342b:c.instructions+=2;goto B46342b;
case 0x46342e:c.instructions+=1;goto B46342e;
case 0x463430:goto L463430;
case 0x463433:c.instructions+=1;goto B463433;
case 0x463435:goto L463435;
case 0x46343b:c.instructions+=2;goto B46343b;
case 0x46343d:c.instructions+=1;goto B46343d;
case 0x46343f:goto L46343f;
case 0x463444:c.instructions+=2;goto B463444;
case 0x463446:c.instructions+=1;goto B463446;
case 0x463448:goto L463448;
case 0x46344d:goto L46344d;
case 0x463453:c.instructions+=1;goto B463453;
case 0x463458:goto L463458;
case 0x46345d:c.instructions+=4;goto B46345d;
case 0x463464:c.instructions+=3;goto B463464;
case 0x463465:c.instructions+=2;goto B463465;
case 0x46346b:c.instructions+=1;goto B46346b;
case 0x463470:goto L463470;
case 0x463480:goto L463480;
case 0x463486:c.instructions+=2;goto B463486;
case 0x463488:c.instructions+=1;goto B463488;
case 0x46348a:goto L46348a;
case 0x46348f:goto L46348f;
case 0x463499:goto L463499;
case 0x46349f:c.instructions+=2;goto B46349f;
case 0x4634a1:c.instructions+=1;goto B4634a1;
case 0x4634a3:goto L4634a3;
case 0x4634a8:goto L4634a8;
case 0x4634b2:goto L4634b2;
case 0x4634b3:c.instructions+=1;goto B4634b3;
case 0x4634b8:goto L4634b8;
case 0x4634ba:c.instructions+=2;goto B4634ba;
case 0x4634bc:c.instructions+=1;goto B4634bc;
case 0x4634be:goto L4634be;
case 0x4634bf:c.instructions+=1;goto B4634bf;
case 0x4634c4:goto L4634c4;
case 0x4634c7:goto L4634c7;
case 0x4634cd:c.instructions+=3;goto B4634cd;
case 0x4634d0:c.instructions+=2;goto B4634d0;
case 0x4634d6:c.instructions+=1;goto B4634d6;
case 0x4634d8:goto L4634d8;
case 0x4634d9:c.instructions+=1;goto B4634d9;
case 0x4634e0:goto L4634e0;
case 0x4634e5:c.instructions+=1;goto B4634e5;
case 0x4634f0:goto L4634f0;
case 0x4634f5:c.instructions+=1;goto B4634f5;
case 0x463500:goto L463500;
case 0x463504:c.instructions+=3;goto B463504;
case 0x463507:c.instructions+=2;goto B463507;
case 0x46350a:c.instructions+=1;goto B46350a;
case 0x46350c:goto L46350c;
case 0x46350f:c.instructions+=1;goto B46350f;
case 0x463511:goto L463511;
case 0x46351b:c.instructions+=3;goto B46351b;
case 0x46351e:c.instructions+=2;goto B46351e;
case 0x463525:c.instructions+=1;goto B463525;
case 0x463528:goto L463528;
case 0x46352e:c.instructions+=3;goto B46352e;
case 0x463531:c.instructions+=2;goto B463531;
case 0x463538:c.instructions+=1;goto B463538;
case 0x463540:goto L463540;
case 0x463541:c.instructions+=6;goto B463541;
case 0x463542:c.instructions+=5;goto B463542;
case 0x463543:c.instructions+=4;goto B463543;
case 0x463545:c.instructions+=3;goto B463545;
case 0x46354b:c.instructions+=2;goto B46354b;
case 0x46354d:c.instructions+=1;goto B46354d;
case 0x46354f:goto L46354f;
case 0x463551:c.instructions+=2;goto B463551;
case 0x463553:c.instructions+=1;goto B463553;
case 0x463555:goto L463555;
case 0x46355a:goto L46355a;
case 0x46355e:c.instructions+=2;goto B46355e;
case 0x46355f:c.instructions+=1;goto B46355f;
case 0x463564:goto L463564;
case 0x463567:c.instructions+=1;goto B463567;
case 0x46356c:goto L46356c;
case 0x463570:c.instructions+=4;goto B463570;
case 0x463572:c.instructions+=3;goto B463572;
case 0x463574:c.instructions+=2;goto B463574;
case 0x463575:c.instructions+=1;goto B463575;
case 0x463578:goto L463578;
case 0x46357d:goto L46357d;
case 0x463587:c.instructions+=4;goto B463587;
case 0x463588:c.instructions+=3;goto B463588;
case 0x463589:c.instructions+=2;goto B463589;
case 0x46358a:c.instructions+=1;goto B46358a;
case 0x463590:goto L463590;
case 0x463594:c.instructions+=5;goto B463594;
case 0x463596:c.instructions+=4;goto B463596;
case 0x463598:c.instructions+=3;goto B463598;
case 0x46359b:c.instructions+=2;goto B46359b;
case 0x46359e:c.instructions+=1;goto B46359e;
case 0x4635b0:goto L4635b0;
case 0x4635b2:c.instructions+=12;goto B4635b2;
case 0x4635b7:c.instructions+=11;goto B4635b7;
case 0x4635bd:c.instructions+=10;goto B4635bd;
case 0x4635be:c.instructions+=9;goto B4635be;
case 0x4635c5:c.instructions+=8;goto B4635c5;
case 0x4635c6:c.instructions+=7;goto B4635c6;
case 0x4635c7:c.instructions+=6;goto B4635c7;
case 0x4635c8:c.instructions+=5;goto B4635c8;
case 0x4635ca:c.instructions+=4;goto B4635ca;
case 0x4635d0:c.instructions+=3;goto B4635d0;
case 0x4635d2:c.instructions+=2;goto B4635d2;
case 0x4635d4:c.instructions+=1;goto B4635d4;
case 0x4635da:goto L4635da;
case 0x4635dd:c.instructions+=2;goto B4635dd;
case 0x4635e0:c.instructions+=1;goto B4635e0;
case 0x4635e6:goto L4635e6;
case 0x4635ec:c.instructions+=3;goto B4635ec;
case 0x4635ee:c.instructions+=2;goto B4635ee;
case 0x4635ef:c.instructions+=1;goto B4635ef;
case 0x4635f1:goto L4635f1;
case 0x4635f3:c.instructions+=1;goto B4635f3;
case 0x4635f6:goto L4635f6;
case 0x4635f8:c.instructions+=1;goto B4635f8;
case 0x4635fe:goto L4635fe;
case 0x463604:c.instructions+=2;goto B463604;
case 0x463606:c.instructions+=1;goto B463606;
case 0x463608:goto L463608;
case 0x46360a:c.instructions+=1;goto B46360a;
case 0x46360f:goto L46360f;
case 0x463615:c.instructions+=6;goto B463615;
case 0x463616:c.instructions+=5;goto B463616;
case 0x463617:c.instructions+=4;goto B463617;
case 0x46361b:c.instructions+=3;goto B46361b;
case 0x463622:c.instructions+=2;goto B463622;
case 0x463625:c.instructions+=1;goto B463625;
case 0x463628:goto L463628;
case 0x46362a:c.instructions+=1;goto B46362a;
case 0x46362d:goto L46362d;
case 0x46362f:c.instructions+=1;goto B46362f;
case 0x463635:goto L463635;
case 0x463636:c.instructions+=5;goto B463636;
case 0x463637:c.instructions+=4;goto B463637;
case 0x463641:c.instructions+=3;goto B463641;
case 0x463648:c.instructions+=2;goto B463648;
case 0x46364a:c.instructions+=1;goto B46364a;
case 0x46364f:goto L46364f;
case 0x463651:c.instructions+=5;goto B463651;
case 0x463654:c.instructions+=4;goto B463654;
case 0x463658:c.instructions+=3;goto B463658;
case 0x46365a:c.instructions+=2;goto B46365a;
case 0x46365e:c.instructions+=1;goto B46365e;
case 0x463660:goto L463660;
case 0x463662:c.instructions+=2;goto B463662;
case 0x463664:c.instructions+=1;goto B463664;
case 0x463666:goto L463666;
case 0x463668:c.instructions+=1;goto B463668;
case 0x46366a:goto L46366a;
case 0x46366d:c.instructions+=1;goto B46366d;
case 0x46366f:goto L46366f;
case 0x463674:goto L463674;
case 0x463677:c.instructions+=9;goto B463677;
case 0x463678:c.instructions+=8;goto B463678;
case 0x463679:c.instructions+=7;goto B463679;
case 0x46367e:c.instructions+=6;goto B46367e;
case 0x463681:c.instructions+=5;goto B463681;
case 0x463684:c.instructions+=4;goto B463684;
case 0x463687:c.instructions+=3;goto B463687;
case 0x46368a:c.instructions+=2;goto B46368a;
case 0x46368d:c.instructions+=1;goto B46368d;
case 0x463692:goto L463692;
case 0x463695:c.instructions+=2;goto B463695;
case 0x463697:c.instructions+=1;goto B463697;
case 0x463699:goto L463699;
case 0x46369e:c.instructions+=2;goto B46369e;
case 0x4636a3:c.instructions+=1;goto B4636a3;
case 0x4636a8:goto L4636a8;
case 0x4636a9:c.instructions+=3;goto B4636a9;
case 0x4636aa:c.instructions+=2;goto B4636aa;
case 0x4636af:c.instructions+=1;goto B4636af;
case 0x4636b4:goto L4636b4;
case 0x4636b7:c.instructions+=1;goto B4636b7;
case 0x4636b9:goto L4636b9;
case 0x4636bb:goto L4636bb;
case 0x4636c1:c.instructions+=2;goto B4636c1;
case 0x4636c2:c.instructions+=1;goto B4636c2;
case 0x4636c3:goto L4636c3;
case 0x4636c7:c.instructions+=5;goto B4636c7;
case 0x4636c8:c.instructions+=4;goto B4636c8;
case 0x4636c9:c.instructions+=3;goto B4636c9;
case 0x4636d0:c.instructions+=2;goto B4636d0;
case 0x4636d3:c.instructions+=1;goto B4636d3;
case 0x4636e0:goto L4636e0;
case 0x4636e1:c.instructions+=4;goto B4636e1;
case 0x4636e3:c.instructions+=3;goto B4636e3;
case 0x4636e9:c.instructions+=2;goto B4636e9;
case 0x4636eb:c.instructions+=1;goto B4636eb;
case 0x4636ed:goto L4636ed;
case 0x4636ef:c.instructions+=2;goto B4636ef;
case 0x4636f1:c.instructions+=1;goto B4636f1;
case 0x4636f4:goto L4636f4;
case 0x4636f6:c.instructions+=2;goto B4636f6;
case 0x4636fc:c.instructions+=1;goto B4636fc;
case 0x4636fe:goto L4636fe;
case 0x463700:c.instructions+=1;goto B463700;
case 0x463702:goto L463702;
case 0x463707:c.instructions+=1;goto B463707;
case 0x463709:goto L463709;
case 0x46370e:goto L46370e;
case 0x463711:c.instructions+=4;goto B463711;
case 0x463713:c.instructions+=3;goto B463713;
case 0x463715:c.instructions+=2;goto B463715;
case 0x463717:c.instructions+=1;goto B463717;
case 0x46371a:goto L46371a;
case 0x46371c:c.instructions+=2;goto B46371c;
case 0x463722:c.instructions+=1;goto B463722;
case 0x463724:goto L463724;
case 0x463726:c.instructions+=1;goto B463726;
case 0x463728:goto L463728;
case 0x46372d:c.instructions+=1;goto B46372d;
case 0x46372f:goto L46372f;
case 0x463734:goto L463734;
case 0x463737:c.instructions+=6;goto B463737;
case 0x46373d:c.instructions+=5;goto B46373d;
case 0x463744:c.instructions+=4;goto B463744;
case 0x46374a:c.instructions+=3;goto B46374a;
case 0x46374c:c.instructions+=2;goto B46374c;
case 0x46374e:c.instructions+=1;goto B46374e;
case 0x463750:goto L463750;
case 0x463753:c.instructions+=2;goto B463753;
case 0x463754:c.instructions+=1;goto B463754;
case 0x463759:goto L463759;
case 0x46375a:c.instructions+=1;goto B46375a;
case 0x463760:goto L463760;
case 0x463765:c.instructions+=1;goto B463765;
case 0x463770:goto L463770;
case 0x463775:c.instructions+=1;goto B463775;
case 0x463780:goto L463780;
case 0x463781:c.instructions+=2;goto B463781;
case 0x463783:c.instructions+=1;goto B463783;
case 0x463788:goto L463788;
case 0x46378e:c.instructions+=3;goto B46378e;
case 0x463790:c.instructions+=2;goto B463790;
case 0x463791:c.instructions+=1;goto B463791;
case 0x4637a0:goto L4637a0;
case 0x4637a5:c.instructions+=1;goto B4637a5;
case 0x4637b0:goto L4637b0;
case 0x4637b5:c.instructions+=1;goto B4637b5;
case 0x4637c0:goto L4637c0;
case 0x4637c5:c.instructions+=2;goto B4637c5;
case 0x4637c6:c.instructions+=1;goto B4637c6;
case 0x4637cb:goto L4637cb;
case 0x4637ce:c.instructions+=2;goto B4637ce;
case 0x4637d3:c.instructions+=1;goto B4637d3;
case 0x4637d5:goto L4637d5;
case 0x4637db:c.instructions+=5;goto B4637db;
case 0x4637de:c.instructions+=4;goto B4637de;
case 0x4637e4:c.instructions+=3;goto B4637e4;
case 0x4637e5:c.instructions+=2;goto B4637e5;
case 0x4637ea:c.instructions+=1;goto B4637ea;
case 0x4637ef:goto L4637ef;
case 0x4637f2:c.instructions+=2;goto B4637f2;
case 0x4637f4:c.instructions+=1;goto B4637f4;
case 0x4637f6:goto L4637f6;
case 0x4637f8:c.instructions+=1;goto B4637f8;
case 0x4637fd:goto L4637fd;
case 0x4637ff:c.instructions+=1;goto B4637ff;
case 0x463800:goto L463800;
case 0x463805:c.instructions+=1;goto B463805;
case 0x463810:goto L463810;
case 0x463815:c.instructions+=1;goto B463815;
case 0x463820:goto L463820;
case 0x463821:c.instructions+=5;goto B463821;
case 0x463823:c.instructions+=4;goto B463823;
case 0x463826:c.instructions+=3;goto B463826;
case 0x463829:c.instructions+=2;goto B463829;
case 0x46382b:c.instructions+=1;goto B46382b;
case 0x463831:goto L463831;
case 0x463837:c.instructions+=2;goto B463837;
case 0x463839:c.instructions+=1;goto B463839;
case 0x46383f:goto L46383f;
case 0x463842:c.instructions+=4;goto B463842;
case 0x463844:c.instructions+=3;goto B463844;
case 0x463846:c.instructions+=2;goto B463846;
case 0x463848:c.instructions+=1;goto B463848;
case 0x46384a:goto L46384a;
case 0x46384c:c.instructions+=1;goto B46384c;
case 0x46384f:goto L46384f;
case 0x463851:c.instructions+=2;goto B463851;
case 0x463857:c.instructions+=1;goto B463857;
case 0x463859:goto L463859;
case 0x46385b:c.instructions+=1;goto B46385b;
case 0x46385d:goto L46385d;
case 0x463862:c.instructions+=1;goto B463862;
case 0x463864:goto L463864;
case 0x463869:goto L463869;
case 0x46386c:c.instructions+=4;goto B46386c;
case 0x463872:c.instructions+=3;goto B463872;
case 0x463879:c.instructions+=2;goto B463879;
case 0x46387b:c.instructions+=1;goto B46387b;
case 0x46387d:goto L46387d;
case 0x46387f:c.instructions+=1;goto B46387f;
case 0x463882:goto L463882;
case 0x463884:c.instructions+=2;goto B463884;
case 0x46388a:c.instructions+=1;goto B46388a;
case 0x46388c:goto L46388c;
case 0x46388e:c.instructions+=1;goto B46388e;
case 0x463890:goto L463890;
case 0x463895:c.instructions+=1;goto B463895;
case 0x463897:goto L463897;
case 0x46389c:goto L46389c;
case 0x46389f:c.instructions+=3;goto B46389f;
case 0x4638a5:c.instructions+=2;goto B4638a5;
case 0x4638ac:c.instructions+=1;goto B4638ac;
case 0x4638ae:goto L4638ae;
case 0x4638b0:c.instructions+=2;goto B4638b0;
case 0x4638b2:c.instructions+=1;goto B4638b2;
case 0x4638b5:goto L4638b5;
case 0x4638b7:c.instructions+=2;goto B4638b7;
case 0x4638bd:c.instructions+=1;goto B4638bd;
case 0x4638bf:goto L4638bf;
case 0x4638c1:c.instructions+=1;goto B4638c1;
case 0x4638c3:goto L4638c3;
case 0x4638c8:c.instructions+=1;goto B4638c8;
case 0x4638ca:goto L4638ca;
case 0x4638cf:goto L4638cf;
case 0x4638d2:c.instructions+=4;goto B4638d2;
case 0x4638d8:c.instructions+=3;goto B4638d8;
case 0x4638da:c.instructions+=2;goto B4638da;
case 0x4638dc:c.instructions+=1;goto B4638dc;
case 0x4638de:goto L4638de;
case 0x4638e1:c.instructions+=2;goto B4638e1;
case 0x4638e2:c.instructions+=1;goto B4638e2;
case 0x4638e7:goto L4638e7;
case 0x4638e8:c.instructions+=1;goto B4638e8;
case 0x4638f0:goto L4638f0;
case 0x4638f1:c.instructions+=6;goto B4638f1;
case 0x4638f5:c.instructions+=5;goto B4638f5;
case 0x4638f7:c.instructions+=4;goto B4638f7;
case 0x4638f8:c.instructions+=3;goto B4638f8;
case 0x4638fa:c.instructions+=2;goto B4638fa;
case 0x4638fc:c.instructions+=1;goto B4638fc;
case 0x4638ff:goto L4638ff;
case 0x463905:c.instructions+=1;goto B463905;
case 0x463907:goto L463907;
case 0x46390d:goto L46390d;
case 0x46390e:c.instructions+=2;goto B46390e;
case 0x46390f:c.instructions+=1;goto B46390f;
case 0x463920:goto L463920;
case 0x463926:c.instructions+=13;goto B463926;
case 0x463928:c.instructions+=12;goto B463928;
case 0x46392d:c.instructions+=11;goto B46392d;
case 0x46392e:c.instructions+=10;goto B46392e;
case 0x463935:c.instructions+=9;goto B463935;
case 0x463938:c.instructions+=8;goto B463938;
case 0x463939:c.instructions+=7;goto B463939;
case 0x46393a:c.instructions+=6;goto B46393a;
case 0x46393b:c.instructions+=5;goto B46393b;
case 0x46393d:c.instructions+=4;goto B46393d;
case 0x463943:c.instructions+=3;goto B463943;
case 0x463945:c.instructions+=2;goto B463945;
case 0x463947:c.instructions+=1;goto B463947;
case 0x463949:goto L463949;
case 0x46394b:c.instructions+=2;goto B46394b;
case 0x46394d:c.instructions+=1;goto B46394d;
case 0x46394f:goto L46394f;
case 0x463954:goto L463954;
case 0x463958:c.instructions+=2;goto B463958;
case 0x463959:c.instructions+=1;goto B463959;
case 0x46395e:goto L46395e;
case 0x463961:c.instructions+=1;goto B463961;
case 0x463966:goto L463966;
case 0x46396a:c.instructions+=4;goto B46396a;
case 0x46396c:c.instructions+=3;goto B46396c;
case 0x46396d:c.instructions+=2;goto B46396d;
case 0x46396e:c.instructions+=1;goto B46396e;
case 0x463971:goto L463971;
case 0x463976:goto L463976;
case 0x46397c:goto L46397c;
case 0x46397f:c.instructions+=5;goto B46397f;
case 0x463985:c.instructions+=4;goto B463985;
case 0x463988:c.instructions+=3;goto B463988;
case 0x46398a:c.instructions+=2;goto B46398a;
case 0x46398b:c.instructions+=1;goto B46398b;
case 0x46398e:goto L46398e;
case 0x463992:c.instructions+=3;goto B463992;
case 0x463993:c.instructions+=2;goto B463993;
case 0x46399d:c.instructions+=1;goto B46399d;
case 0x4639a2:goto L4639a2;
case 0x4639a5:c.instructions+=1;goto B4639a5;
case 0x4639aa:goto L4639aa;
case 0x4639ae:c.instructions+=8;goto B4639ae;
case 0x4639b2:c.instructions+=7;goto B4639b2;
case 0x4639b3:c.instructions+=6;goto B4639b3;
case 0x4639b7:c.instructions+=5;goto B4639b7;
case 0x4639bb:c.instructions+=4;goto B4639bb;
case 0x4639bf:c.instructions+=3;goto B4639bf;
case 0x4639c1:c.instructions+=2;goto B4639c1;
case 0x4639c3:c.instructions+=1;goto B4639c3;
case 0x4639c5:goto L4639c5;
case 0x4639c7:c.instructions+=1;goto B4639c7;
case 0x4639cc:goto L4639cc;
case 0x4639d0:c.instructions+=3;goto B4639d0;
case 0x4639d2:c.instructions+=2;goto B4639d2;
case 0x4639d6:c.instructions+=1;goto B4639d6;
case 0x4639d8:goto L4639d8;
case 0x4639d9:c.instructions+=10;goto B4639d9;
case 0x4639dc:c.instructions+=9;goto B4639dc;
case 0x4639dd:c.instructions+=8;goto B4639dd;
case 0x4639de:c.instructions+=7;goto B4639de;
case 0x4639e3:c.instructions+=6;goto B4639e3;
case 0x4639ea:c.instructions+=5;goto B4639ea;
case 0x4639ed:c.instructions+=4;goto B4639ed;
case 0x4639f0:c.instructions+=3;goto B4639f0;
case 0x4639f3:c.instructions+=2;goto B4639f3;
case 0x4639f6:c.instructions+=1;goto B4639f6;
case 0x4639fb:goto L4639fb;
case 0x4639fe:c.instructions+=2;goto B4639fe;
case 0x463a00:c.instructions+=1;goto B463a00;
case 0x463a02:goto L463a02;
case 0x463a07:c.instructions+=2;goto B463a07;
case 0x463a0c:c.instructions+=1;goto B463a0c;
case 0x463a11:goto L463a11;
case 0x463a12:c.instructions+=3;goto B463a12;
case 0x463a13:c.instructions+=2;goto B463a13;
case 0x463a18:c.instructions+=1;goto B463a18;
case 0x463a1d:goto L463a1d;
case 0x463a20:goto L463a20;
case 0x463a21:c.instructions+=8;goto B463a21;
case 0x463a27:c.instructions+=7;goto B463a27;
case 0x463a28:c.instructions+=6;goto B463a28;
case 0x463a29:c.instructions+=5;goto B463a29;
case 0x463a2a:c.instructions+=4;goto B463a2a;
case 0x463a2e:c.instructions+=3;goto B463a2e;
case 0x463a35:c.instructions+=2;goto B463a35;
case 0x463a38:c.instructions+=1;goto B463a38;
case 0x463a39:goto L463a39;
case 0x463a3d:c.instructions+=7;goto B463a3d;
case 0x463a43:c.instructions+=6;goto B463a43;
case 0x463a44:c.instructions+=5;goto B463a44;
case 0x463a45:c.instructions+=4;goto B463a45;
case 0x463a46:c.instructions+=3;goto B463a46;
case 0x463a4d:c.instructions+=2;goto B463a4d;
case 0x463a50:c.instructions+=1;goto B463a50;
case 0x463a60:goto L463a60;
case 0x463a61:c.instructions+=7;goto B463a61;
case 0x463a62:c.instructions+=6;goto B463a62;
case 0x463a64:c.instructions+=5;goto B463a64;
case 0x463a6a:c.instructions+=4;goto B463a6a;
case 0x463a6c:c.instructions+=3;goto B463a6c;
case 0x463a6d:c.instructions+=2;goto B463a6d;
case 0x463a6f:c.instructions+=1;goto B463a6f;
case 0x463a72:goto L463a72;
case 0x463a78:c.instructions+=2;goto B463a78;
case 0x463a7a:c.instructions+=1;goto B463a7a;
case 0x463a7c:goto L463a7c;
case 0x463a7e:c.instructions+=2;goto B463a7e;
case 0x463a80:c.instructions+=1;goto B463a80;
case 0x463a82:goto L463a82;
case 0x463a87:goto L463a87;
case 0x463a8b:c.instructions+=2;goto B463a8b;
case 0x463a8c:c.instructions+=1;goto B463a8c;
case 0x463a91:goto L463a91;
case 0x463a94:c.instructions+=1;goto B463a94;
case 0x463a99:goto L463a99;
case 0x463a9d:c.instructions+=4;goto B463a9d;
case 0x463a9f:c.instructions+=3;goto B463a9f;
case 0x463aa1:c.instructions+=2;goto B463aa1;
case 0x463aa2:c.instructions+=1;goto B463aa2;
case 0x463aa5:goto L463aa5;
case 0x463aaa:goto L463aaa;
case 0x463aab:c.instructions+=4;goto B463aab;
case 0x463ab5:c.instructions+=3;goto B463ab5;
case 0x463ab6:c.instructions+=2;goto B463ab6;
case 0x463ab7:c.instructions+=1;goto B463ab7;
case 0x463ac0:goto L463ac0;
case 0x463ac2:c.instructions+=1;goto B463ac2;
case 0x463ad0:goto L463ad0;
case 0x463ad4:c.instructions+=4;goto B463ad4;
case 0x463ad8:c.instructions+=3;goto B463ad8;
case 0x463adb:c.instructions+=2;goto B463adb;
case 0x463ade:c.instructions+=1;goto B463ade;
case 0x463af0:goto L463af0;
case 0x463af4:c.instructions+=7;goto B463af4;
case 0x463af5:c.instructions+=6;goto B463af5;
case 0x463af6:c.instructions+=5;goto B463af6;
case 0x463af8:c.instructions+=4;goto B463af8;
case 0x463afa:c.instructions+=3;goto B463afa;
case 0x463afb:c.instructions+=2;goto B463afb;
case 0x463afd:c.instructions+=1;goto B463afd;
case 0x463aff:goto L463aff;
case 0x463b00:c.instructions+=5;goto B463b00;
case 0x463b01:c.instructions+=4;goto B463b01;
case 0x463b03:c.instructions+=3;goto B463b03;
case 0x463b06:c.instructions+=2;goto B463b06;
case 0x463b0b:c.instructions+=1;goto B463b0b;
case 0x463b10:goto L463b10;
case 0x463b16:c.instructions+=4;goto B463b16;
case 0x463b19:c.instructions+=3;goto B463b19;
case 0x463b1a:c.instructions+=2;goto B463b1a;
case 0x463b1b:c.instructions+=1;goto B463b1b;
case 0x463b20:goto L463b20;
case 0x463b23:c.instructions+=2;goto B463b23;
case 0x463b25:c.instructions+=1;goto B463b25;
case 0x463b27:goto L463b27;
case 0x463b2d:c.instructions+=4;goto B463b2d;
case 0x463b2f:c.instructions+=3;goto B463b2f;
case 0x463b30:c.instructions+=2;goto B463b30;
case 0x463b31:c.instructions+=1;goto B463b31;
case 0x463b36:goto L463b36;
case 0x463b39:c.instructions+=2;goto B463b39;
case 0x463b3b:c.instructions+=1;goto B463b3b;
case 0x463b3d:goto L463b3d;
case 0x463b3e:c.instructions+=3;goto B463b3e;
case 0x463b41:c.instructions+=2;goto B463b41;
case 0x463b43:c.instructions+=1;goto B463b43;
case 0x463b45:goto L463b45;
case 0x463b46:c.instructions+=4;goto B463b46;
case 0x463b47:c.instructions+=3;goto B463b47;
case 0x463b48:c.instructions+=2;goto B463b48;
case 0x463b49:c.instructions+=1;goto B463b49;
case 0x463b4a:goto L463b4a;
case 0x463b4c:c.instructions+=11;goto B463b4c;
case 0x463b52:c.instructions+=10;goto B463b52;
case 0x463b58:c.instructions+=9;goto B463b58;
case 0x463b5e:c.instructions+=8;goto B463b5e;
case 0x463b64:c.instructions+=7;goto B463b64;
case 0x463b6a:c.instructions+=6;goto B463b6a;
case 0x463b6e:c.instructions+=5;goto B463b6e;
case 0x463b70:c.instructions+=4;goto B463b70;
case 0x463b71:c.instructions+=3;goto B463b71;
case 0x463b72:c.instructions+=2;goto B463b72;
case 0x463b74:c.instructions+=1;goto B463b74;
case 0x463b75:goto L463b75;
case 0x463b76:c.instructions+=2;goto B463b76;
case 0x463b77:c.instructions+=1;goto B463b77;
case 0x463b80:goto L463b80;
case 0x463b81:c.instructions+=3;goto B463b81;
case 0x463b84:c.instructions+=2;goto B463b84;
case 0x463b86:c.instructions+=1;goto B463b86;
case 0x463b88:goto L463b88;
case 0x463b89:c.instructions+=2;goto B463b89;
case 0x463b8d:c.instructions+=1;goto B463b8d;
case 0x463b90:goto L463b90;
case 0x463b92:c.instructions+=3;goto B463b92;
case 0x463b93:c.instructions+=2;goto B463b93;
case 0x463b95:c.instructions+=1;goto B463b95;
case 0x463b98:goto L463b98;
case 0x463b9b:c.instructions+=2;goto B463b9b;
case 0x463b9d:c.instructions+=1;goto B463b9d;
case 0x463b9f:goto L463b9f;
case 0x463ba0:goto L463ba0;
case 0x463ba1:c.instructions+=1;goto B463ba1;
case 0x463bb0:goto L463bb0;
case 0x463bb1:c.instructions+=4;goto B463bb1;
case 0x463bb4:c.instructions+=3;goto B463bb4;
case 0x463bb6:c.instructions+=2;goto B463bb6;
case 0x463bba:c.instructions+=1;goto B463bba;
case 0x463bbc:goto L463bbc;
case 0x463bc0:goto L463bc0;
case 0x463bc2:c.instructions+=2;goto B463bc2;
case 0x463bc4:c.instructions+=1;goto B463bc4;
case 0x463bc7:goto L463bc7;
case 0x463bca:c.instructions+=2;goto B463bca;
case 0x463bcc:c.instructions+=1;goto B463bcc;
case 0x463bce:goto L463bce;
case 0x463bcf:c.instructions+=1;goto B463bcf;
case 0x463bd0:goto L463bd0;
case 0x463bd3:c.instructions+=2;goto B463bd3;
case 0x463bd5:c.instructions+=1;goto B463bd5;
case 0x463bd7:goto L463bd7;
case 0x463bdc:c.instructions+=3;goto B463bdc;
case 0x463bdf:c.instructions+=2;goto B463bdf;
case 0x463be1:c.instructions+=1;goto B463be1;
case 0x463be3:goto L463be3;
case 0x463be7:c.instructions+=5;goto B463be7;
case 0x463beb:c.instructions+=4;goto B463beb;
case 0x463bee:c.instructions+=3;goto B463bee;
case 0x463bf1:c.instructions+=2;goto B463bf1;
case 0x463bf4:c.instructions+=1;goto B463bf4;
case 0x463bf6:goto L463bf6;
case 0x463bfd:goto L463bfd;
case 0x463bfe:c.instructions+=3;goto B463bfe;
case 0x463c01:c.instructions+=2;goto B463c01;
case 0x463c03:c.instructions+=1;goto B463c03;
case 0x463c05:goto L463c05;
case 0x463c06:c.instructions+=2;goto B463c06;
case 0x463c0a:c.instructions+=1;goto B463c0a;
case 0x463c10:goto L463c10;
case 0x463c12:c.instructions+=3;goto B463c12;
case 0x463c13:c.instructions+=2;goto B463c13;
case 0x463c15:c.instructions+=1;goto B463c15;
case 0x463c18:goto L463c18;
case 0x463c1b:c.instructions+=2;goto B463c1b;
case 0x463c1d:c.instructions+=1;goto B463c1d;
case 0x463c1f:goto L463c1f;
case 0x463c20:goto L463c20;
case 0x463c21:goto L463c21;
case 0x463c30:goto L463c30;
case 0x463c33:c.instructions+=2;goto B463c33;
case 0x463c35:c.instructions+=1;goto B463c35;
case 0x463c37:goto L463c37;
case 0x463c38:c.instructions+=3;goto B463c38;
case 0x463c3b:c.instructions+=2;goto B463c3b;
case 0x463c3d:c.instructions+=1;goto B463c3d;
case 0x463c3f:goto L463c3f;
case 0x463c40:goto L463c40;
case 0x463c42:c.instructions+=2;goto B463c42;
case 0x463c44:c.instructions+=1;goto B463c44;
case 0x463c47:goto L463c47;
case 0x463c4a:c.instructions+=2;goto B463c4a;
case 0x463c4c:c.instructions+=1;goto B463c4c;
case 0x463c4e:goto L463c4e;
case 0x463c4f:goto L463c4f;
case 0x463c50:goto L463c50;
case 0x463c53:c.instructions+=2;goto B463c53;
case 0x463c55:c.instructions+=1;goto B463c55;
case 0x463c57:goto L463c57;
case 0x463c5b:c.instructions+=1;goto B463c5b;
case 0x463c60:goto L463c60;
case 0x463c63:c.instructions+=1;goto B463c63;
case 0x463c65:goto L463c65;
case 0x463c68:c.instructions+=2;goto B463c68;
case 0x463c6a:c.instructions+=1;goto B463c6a;
case 0x463c6c:goto L463c6c;
case 0x463c6e:goto L463c6e;
case 0x463c80:goto L463c80;
case 0x463c81:c.instructions+=9;goto B463c81;
case 0x463c82:c.instructions+=8;goto B463c82;
case 0x463c83:c.instructions+=7;goto B463c83;
case 0x463c85:c.instructions+=6;goto B463c85;
case 0x463c88:c.instructions+=5;goto B463c88;
case 0x463c8a:c.instructions+=4;goto B463c8a;
case 0x463c8c:c.instructions+=3;goto B463c8c;
case 0x463c8f:c.instructions+=2;goto B463c8f;
case 0x463c92:c.instructions+=1;goto B463c92;
case 0x463c94:goto L463c94;
case 0x463c96:c.instructions+=4;goto B463c96;
case 0x463c98:c.instructions+=3;goto B463c98;
case 0x463c9b:c.instructions+=2;goto B463c9b;
case 0x463c9d:c.instructions+=1;goto B463c9d;
case 0x463c9f:goto L463c9f;
case 0x463ca1:c.instructions+=1;goto B463ca1;
case 0x463ca3:goto L463ca3;
case 0x463ca5:c.instructions+=7;goto B463ca5;
case 0x463ca8:c.instructions+=6;goto B463ca8;
case 0x463cab:c.instructions+=5;goto B463cab;
case 0x463cad:c.instructions+=4;goto B463cad;
case 0x463cae:c.instructions+=3;goto B463cae;
case 0x463caf:c.instructions+=2;goto B463caf;
case 0x463cb0:c.instructions+=1;goto B463cb0;
case 0x463cc0:goto L463cc0;
case 0x463cc1:c.instructions+=5;goto B463cc1;
case 0x463cc2:c.instructions+=4;goto B463cc2;
case 0x463cc5:c.instructions+=3;goto B463cc5;
case 0x463cc7:c.instructions+=2;goto B463cc7;
case 0x463cc8:c.instructions+=1;goto B463cc8;
case 0x463cca:goto L463cca;
case 0x463cce:c.instructions+=1;goto B463cce;
case 0x463cd0:goto L463cd0;
case 0x463cd2:c.instructions+=3;goto B463cd2;
case 0x463cd5:c.instructions+=2;goto B463cd5;
case 0x463cd7:c.instructions+=1;goto B463cd7;
case 0x463cda:goto L463cda;
case 0x463cdc:c.instructions+=1;goto B463cdc;
case 0x463cde:goto L463cde;
case 0x463ce1:c.instructions+=2;goto B463ce1;
case 0x463ce3:c.instructions+=1;goto B463ce3;
case 0x463ce5:goto L463ce5;
case 0x463ce8:c.instructions+=2;goto B463ce8;
case 0x463cea:c.instructions+=1;goto B463cea;
case 0x463cec:goto L463cec;
case 0x463ced:c.instructions+=4;goto B463ced;
case 0x463cee:c.instructions+=3;goto B463cee;
case 0x463cf0:c.instructions+=2;goto B463cf0;
case 0x463cf1:c.instructions+=1;goto B463cf1;
case 0x463cf4:goto L463cf4;
case 0x463cf6:c.instructions+=3;goto B463cf6;
case 0x463cf7:c.instructions+=2;goto B463cf7;
case 0x463cf9:c.instructions+=1;goto B463cf9;
case 0x463cfc:goto L463cfc;
case 0x463cfd:c.instructions+=4;goto B463cfd;
case 0x463cff:c.instructions+=3;goto B463cff;
case 0x463d00:c.instructions+=2;goto B463d00;
case 0x463d01:c.instructions+=1;goto B463d01;
case 0x463d10:goto L463d10;
case 0x463d11:c.instructions+=5;goto B463d11;
case 0x463d12:c.instructions+=4;goto B463d12;
case 0x463d14:c.instructions+=3;goto B463d14;
case 0x463d17:c.instructions+=2;goto B463d17;
case 0x463d19:c.instructions+=1;goto B463d19;
case 0x463d1b:goto L463d1b;
case 0x463d1f:c.instructions+=1;goto B463d1f;
case 0x463d20:goto L463d20;
case 0x463d23:c.instructions+=1;goto B463d23;
case 0x463d25:goto L463d25;
case 0x463d28:c.instructions+=2;goto B463d28;
case 0x463d2a:c.instructions+=1;goto B463d2a;
case 0x463d2c:goto L463d2c;
case 0x463d2d:c.instructions+=2;goto B463d2d;
case 0x463d2e:c.instructions+=1;goto B463d2e;
case 0x463d31:goto L463d31;
case 0x463d34:c.instructions+=1;goto B463d34;
case 0x463d36:goto L463d36;
case 0x463d39:c.instructions+=3;goto B463d39;
case 0x463d3b:c.instructions+=2;goto B463d3b;
case 0x463d3e:c.instructions+=1;goto B463d3e;
case 0x463d40:goto L463d40;
case 0x463d47:c.instructions+=1;goto B463d47;
case 0x463d49:goto L463d49;
case 0x463d4c:c.instructions+=5;goto B463d4c;
case 0x463d4f:c.instructions+=4;goto B463d4f;
case 0x463d52:c.instructions+=3;goto B463d52;
case 0x463d55:c.instructions+=2;goto B463d55;
case 0x463d57:c.instructions+=1;goto B463d57;
case 0x463d59:goto L463d59;
case 0x463d5c:c.instructions+=1;goto B463d5c;
case 0x463d5f:goto L463d5f;
case 0x463d61:c.instructions+=2;goto B463d61;
case 0x463d63:c.instructions+=1;goto B463d63;
case 0x463d66:goto L463d66;
case 0x463d68:c.instructions+=3;goto B463d68;
case 0x463d6a:c.instructions+=2;goto B463d6a;
case 0x463d6c:c.instructions+=1;goto B463d6c;
case 0x463d6e:goto L463d6e;
case 0x463d71:goto L463d71;
case 0x463d72:c.instructions+=2;goto B463d72;
case 0x463d73:c.instructions+=1;goto B463d73;
case 0x463d80:goto L463d80;
case 0x463d84:c.instructions+=2;goto B463d84;
case 0x463d85:c.instructions+=1;goto B463d85;
case 0x463d8a:goto L463d8a;
case 0x463d8f:c.instructions+=2;goto B463d8f;
case 0x463d92:c.instructions+=1;goto B463d92;
case 0x463d94:goto L463d94;
case 0x463d9b:c.instructions+=2;goto B463d9b;
case 0x463d9d:c.instructions+=1;goto B463d9d;
case 0x463d9f:goto L463d9f;
case 0x463da5:c.instructions+=2;goto B463da5;
case 0x463da7:c.instructions+=1;goto B463da7;
case 0x463da9:goto L463da9;
case 0x463dab:c.instructions+=1;goto B463dab;
case 0x463dae:goto L463dae;
case 0x463db1:goto L463db1;
case 0x463db6:goto L463db6;
case 0x463db8:c.instructions+=1;goto B463db8;
case 0x463dba:goto L463dba;
case 0x463dbf:c.instructions+=3;goto B463dbf;
case 0x463dca:c.instructions+=2;goto B463dca;
case 0x463dcb:c.instructions+=1;goto B463dcb;
case 0x463dd0:goto L463dd0;
case 0x463de0:goto L463de0;
case 0x463de1:c.instructions+=7;goto B463de1;
case 0x463de2:c.instructions+=6;goto B463de2;
case 0x463de4:c.instructions+=5;goto B463de4;
case 0x463de5:c.instructions+=4;goto B463de5;
case 0x463de6:c.instructions+=3;goto B463de6;
case 0x463de8:c.instructions+=2;goto B463de8;
case 0x463deb:c.instructions+=1;goto B463deb;
case 0x463df0:goto L463df0;
case 0x463df2:goto L463df2;
case 0x463df5:c.instructions+=6;goto B463df5;
case 0x463df7:c.instructions+=5;goto B463df7;
case 0x463df9:c.instructions+=4;goto B463df9;
case 0x463dfc:c.instructions+=3;goto B463dfc;
case 0x463dff:c.instructions+=2;goto B463dff;
case 0x463e02:c.instructions+=1;goto B463e02;
case 0x463e04:goto L463e04;
case 0x463e06:c.instructions+=4;goto B463e06;
case 0x463e08:c.instructions+=3;goto B463e08;
case 0x463e0b:c.instructions+=2;goto B463e0b;
case 0x463e0d:c.instructions+=1;goto B463e0d;
case 0x463e0f:goto L463e0f;
case 0x463e11:c.instructions+=1;goto B463e11;
case 0x463e13:goto L463e13;
case 0x463e16:c.instructions+=8;goto B463e16;
case 0x463e17:c.instructions+=7;goto B463e17;
case 0x463e18:c.instructions+=6;goto B463e18;
case 0x463e1b:c.instructions+=5;goto B463e1b;
case 0x463e1e:c.instructions+=4;goto B463e1e;
case 0x463e20:c.instructions+=3;goto B463e20;
case 0x463e21:c.instructions+=2;goto B463e21;
case 0x463e22:c.instructions+=1;goto B463e22;
case 0x463e30:goto L463e30;
case 0x463e31:c.instructions+=6;goto B463e31;
case 0x463e32:c.instructions+=5;goto B463e32;
case 0x463e33:c.instructions+=4;goto B463e33;
case 0x463e35:c.instructions+=3;goto B463e35;
case 0x463e38:c.instructions+=2;goto B463e38;
case 0x463e3d:c.instructions+=1;goto B463e3d;
case 0x463e40:goto L463e40;
case 0x463e42:c.instructions+=2;goto B463e42;
case 0x463e44:c.instructions+=1;goto B463e44;
case 0x463e46:goto L463e46;
case 0x463e49:c.instructions+=2;goto B463e49;
case 0x463e4a:c.instructions+=1;goto B463e4a;
case 0x463e4f:goto L463e4f;
case 0x463e51:c.instructions+=5;goto B463e51;
case 0x463e54:c.instructions+=4;goto B463e54;
case 0x463e57:c.instructions+=3;goto B463e57;
case 0x463e58:c.instructions+=2;goto B463e58;
case 0x463e59:c.instructions+=1;goto B463e59;
case 0x463e5e:goto L463e5e;
case 0x463e64:c.instructions+=4;goto B463e64;
case 0x463e67:c.instructions+=3;goto B463e67;
case 0x463e69:c.instructions+=2;goto B463e69;
case 0x463e6c:c.instructions+=1;goto B463e6c;
case 0x463e6e:goto L463e6e;
case 0x463e70:c.instructions+=1;goto B463e70;
case 0x463e72:goto L463e72;
case 0x463e74:goto L463e74;
case 0x463e77:c.instructions+=2;goto B463e77;
case 0x463e79:c.instructions+=1;goto B463e79;
case 0x463e7b:goto L463e7b;
case 0x463e80:goto L463e80;
case 0x463e83:c.instructions+=2;goto B463e83;
case 0x463e85:c.instructions+=1;goto B463e85;
case 0x463e87:goto L463e87;
case 0x463e8a:c.instructions+=2;goto B463e8a;
case 0x463e8c:c.instructions+=1;goto B463e8c;
case 0x463e8e:goto L463e8e;
case 0x463e91:c.instructions+=2;goto B463e91;
case 0x463e93:c.instructions+=1;goto B463e93;
case 0x463e95:goto L463e95;
case 0x463e97:c.instructions+=1;goto B463e97;
case 0x463e99:goto L463e99;
case 0x463e9b:c.instructions+=4;goto B463e9b;
case 0x463e9d:c.instructions+=3;goto B463e9d;
case 0x463e9e:c.instructions+=2;goto B463e9e;
case 0x463ea0:c.instructions+=1;goto B463ea0;
case 0x463ea3:goto L463ea3;
case 0x463ea5:c.instructions+=1;goto B463ea5;
case 0x463ea7:goto L463ea7;
case 0x463ea9:c.instructions+=4;goto B463ea9;
case 0x463eab:c.instructions+=3;goto B463eab;
case 0x463eac:c.instructions+=2;goto B463eac;
case 0x463eae:c.instructions+=1;goto B463eae;
case 0x463eb1:goto L463eb1;
case 0x463eb4:c.instructions+=2;goto B463eb4;
case 0x463eb5:c.instructions+=1;goto B463eb5;
case 0x463eb7:goto L463eb7;
case 0x463ebb:c.instructions+=3;goto B463ebb;
case 0x463ebc:c.instructions+=2;goto B463ebc;
case 0x463ebe:c.instructions+=1;goto B463ebe;
case 0x463ec3:goto L463ec3;
case 0x463ec4:c.instructions+=3;goto B463ec4;
case 0x463ec5:c.instructions+=2;goto B463ec5;
case 0x463ec6:c.instructions+=1;goto B463ec6;
case 0x463ec9:goto L463ec9;
case 0x463ecb:c.instructions+=1;goto B463ecb;
case 0x463ecd:goto L463ecd;
case 0x463ecf:c.instructions+=1;goto B463ecf;
case 0x463ed2:goto L463ed2;
case 0x463ee0:goto L463ee0;
case 0x463ee4:c.instructions+=3;goto B463ee4;
case 0x463ee7:c.instructions+=2;goto B463ee7;
case 0x463eec:c.instructions+=1;goto B463eec;
case 0x463ef0:goto L463ef0;
case 0x463ef2:c.instructions+=1;goto B463ef2;
case 0x463ef4:goto L463ef4;
case 0x463efa:goto L463efa;
case 0x463efd:c.instructions+=2;goto B463efd;
case 0x463efe:c.instructions+=1;goto B463efe;
case 0x463f00:goto L463f00;
case 0x463f10:goto L463f10;
case 0x463f13:c.instructions+=5;goto B463f13;
case 0x463f17:c.instructions+=4;goto B463f17;
case 0x463f1b:c.instructions+=3;goto B463f1b;
case 0x463f1e:c.instructions+=2;goto B463f1e;
case 0x463f20:c.instructions+=1;goto B463f20;
case 0x463f30:goto L463f30;
case 0x463f35:c.instructions+=4;goto B463f35;
case 0x463f36:c.instructions+=3;goto B463f36;
case 0x463f38:c.instructions+=2;goto B463f38;
case 0x463f3a:c.instructions+=1;goto B463f3a;
case 0x463f3c:goto L463f3c;
case 0x463f3e:goto L463f3e;
case 0x463f44:c.instructions+=5;goto B463f44;
case 0x463f48:c.instructions+=4;goto B463f48;
case 0x463f4b:c.instructions+=3;goto B463f4b;
case 0x463f4c:c.instructions+=2;goto B463f4c;
case 0x463f51:c.instructions+=1;goto B463f51;
case 0x463f56:goto L463f56;
case 0x463f5c:c.instructions+=2;goto B463f5c;
case 0x463f5d:c.instructions+=1;goto B463f5d;
case 0x463f60:goto L463f60;
case 0x463f63:c.instructions+=6;goto B463f63;
case 0x463f65:c.instructions+=5;goto B463f65;
case 0x463f68:c.instructions+=4;goto B463f68;
case 0x463f6a:c.instructions+=3;goto B463f6a;
case 0x463f6e:c.instructions+=2;goto B463f6e;
case 0x463f72:c.instructions+=1;goto B463f72;
case 0x463f78:goto L463f78;
case 0x463f7a:c.instructions+=14;goto B463f7a;
case 0x463f7f:c.instructions+=13;goto B463f7f;
case 0x463f82:c.instructions+=12;goto B463f82;
case 0x463f83:c.instructions+=11;goto B463f83;
case 0x463f86:c.instructions+=10;goto B463f86;
case 0x463f8a:c.instructions+=9;goto B463f8a;
case 0x463f8e:c.instructions+=8;goto B463f8e;
case 0x463f8f:c.instructions+=7;goto B463f8f;
case 0x463f90:c.instructions+=6;goto B463f90;
case 0x463f94:c.instructions+=5;goto B463f94;
case 0x463f98:c.instructions+=4;goto B463f98;
case 0x463f9c:c.instructions+=3;goto B463f9c;
case 0x463fa1:c.instructions+=2;goto B463fa1;
case 0x463fa6:c.instructions+=1;goto B463fa6;
case 0x463faa:goto L463faa;
case 0x463fac:goto L463fac;
case 0x463fae:c.instructions+=2;goto B463fae;
case 0x463fb0:c.instructions+=1;goto B463fb0;
case 0x463fb2:goto L463fb2;
case 0x463fb8:c.instructions+=4;goto B463fb8;
case 0x463fbb:c.instructions+=3;goto B463fbb;
case 0x463fbd:c.instructions+=2;goto B463fbd;
case 0x463fc2:c.instructions+=1;goto B463fc2;
case 0x463fc4:goto L463fc4;
case 0x463fc6:c.instructions+=3;goto B463fc6;
case 0x463fc8:c.instructions+=2;goto B463fc8;
case 0x463fc9:c.instructions+=1;goto B463fc9;
case 0x463fcf:goto L463fcf;
case 0x463fd0:c.instructions+=4;goto B463fd0;
case 0x463fd6:c.instructions+=3;goto B463fd6;
case 0x463fda:c.instructions+=2;goto B463fda;
case 0x463fdc:c.instructions+=1;goto B463fdc;
case 0x463fde:goto L463fde;
case 0x463fe2:c.instructions+=3;goto B463fe2;
case 0x463fe5:c.instructions+=2;goto B463fe5;
case 0x463fe9:c.instructions+=1;goto B463fe9;
case 0x463feb:goto L463feb;
case 0x463fee:c.instructions+=3;goto B463fee;
case 0x463fef:c.instructions+=2;goto B463fef;
case 0x463ff0:c.instructions+=1;goto B463ff0;
case 0x463ff5:goto L463ff5;
case 0x463ff8:c.instructions+=2;goto B463ff8;
case 0x463ffa:c.instructions+=1;goto B463ffa;
case 0x463ffc:goto L463ffc;
case 0x463ffe:c.instructions+=1;goto B463ffe;
default:missing_instruction(c.pc);}
B463004:L463004:{c.instructions+=3;NFSU2_TR(0x463004);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463005:{NFSU2_TR(0x463005);
u8 U[4];
w4(U+0,u32(0xd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46300a:{NFSU2_TR(0x46300a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46300full));
TAIL_STATIC(0x440820u,440);
}
B46300f:L46300f:{c.instructions+=3;NFSU2_TR(0x46300f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B463012:{NFSU2_TR(0x463012);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B463014:{NFSU2_TR(0x463014);
if(r1(R+518)){{goto L46301d;}}
}
B463016:L463016:{c.instructions+=2;NFSU2_TR(0x463016);
__builtin_memmove((R+4),(R+0),4);
}
B463018:{NFSU2_TR(0x463018);
TAIL_STATIC(0x462f80u,462);
}
B46301d:L46301d:{c.instructions+=2;NFSU2_TR(0x46301d);
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
B46301f:{NFSU2_TR(0x46301f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463020:L463020:{c.instructions+=21;NFSU2_TR(0x463020);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463022:{NFSU2_TR(0x463022);
u8 U[4];
w4(U+0,u32(0x77259bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463027:{NFSU2_TR(0x463027);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46302d:{NFSU2_TR(0x46302d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46302e:{NFSU2_TR(0x46302e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463035:{NFSU2_TR(0x463035);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B463038:{NFSU2_TR(0x463038);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463039:{NFSU2_TR(0x463039);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46303a:{NFSU2_TR(0x46303a);
__builtin_memmove((R+24),(R+4),4);
}
B46303c:{NFSU2_TR(0x46303c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46303f:{NFSU2_TR(0x46303f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B463042:{NFSU2_TR(0x463042);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B463045:{NFSU2_TR(0x463045);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B463047:{NFSU2_TR(0x463047);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463048:{NFSU2_TR(0x463048);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B46304a:{NFSU2_TR(0x46304a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46304b:{NFSU2_TR(0x46304b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B463051:{NFSU2_TR(0x463051);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463052:{NFSU2_TR(0x463052);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463053:{NFSU2_TR(0x463053);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463054:{NFSU2_TR(0x463054);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463059ull));
TAIL_STATIC(0x439f40u,439);
}
B463059:L463059:{c.instructions+=5;NFSU2_TR(0x463059);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46305f:{NFSU2_TR(0x46305f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B463061:{NFSU2_TR(0x463061);
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
B463064:{NFSU2_TR(0x463064);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463065:{NFSU2_TR(0x463065);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463068ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B463068:L463068:{c.instructions+=12;NFSU2_TR(0x463068);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46306a:{NFSU2_TR(0x46306a);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46306d:{NFSU2_TR(0x46306d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B463070:{NFSU2_TR(0x463070);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B463072:{NFSU2_TR(0x463072);
__builtin_memmove((R+8),(R+4),4);
}
B463074:{NFSU2_TR(0x463074);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46307a:{NFSU2_TR(0x46307a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463080:{NFSU2_TR(0x463080);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463084:{NFSU2_TR(0x463084);
{u32 ea_=u32(r4(R+24)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46308a:{NFSU2_TR(0x46308a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B463090:{NFSU2_TR(0x463090);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B463092:{NFSU2_TR(0x463092);
if(r1(R+518)){{goto L4630c7;}}
}
B463094:L463094:{c.instructions+=3;NFSU2_TR(0x463094);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B463096:{NFSU2_TR(0x463096);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B463098:{NFSU2_TR(0x463098);
if(r1(R+518)){{goto L46309f;}}
}
B46309a:L46309a:{c.instructions+=1;NFSU2_TR(0x46309a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46309full));
TAIL_STATIC(0x735550u,735);
}
B46309f:L46309f:{c.instructions+=3;NFSU2_TR(0x46309f);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4630a3:{NFSU2_TR(0x4630a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4630a4:{NFSU2_TR(0x4630a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4630a9ull));
TAIL_STATIC(0x734df0u,734);
}
B4630a9:L4630a9:{c.instructions+=2;NFSU2_TR(0x4630a9);
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
B4630ac:{NFSU2_TR(0x4630ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4630b1ull));
TAIL_STATIC(0x734e40u,734);
}
B4630b1:L4630b1:{c.instructions+=5;NFSU2_TR(0x4630b1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4630b5:{NFSU2_TR(0x4630b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4630b7:{NFSU2_TR(0x4630b7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4630b8:{NFSU2_TR(0x4630b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4630b9:{NFSU2_TR(0x4630b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4630bcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4630bc:L4630bc:{c.instructions+=1;NFSU2_TR(0x4630bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4630c1ull));
TAIL_STATIC(0x734e60u,734);
}
B4630c1:L4630c1:{c.instructions+=1;NFSU2_TR(0x4630c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4630c7:L4630c7:{c.instructions+=3;NFSU2_TR(0x4630c7);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4630cb:{NFSU2_TR(0x4630cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4630cc:{NFSU2_TR(0x4630cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4630d1ull));
TAIL_STATIC(0x734df0u,734);
}
B4630d1:L4630d1:{c.instructions+=2;NFSU2_TR(0x4630d1);
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
B4630d4:{NFSU2_TR(0x4630d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4630d9ull));
TAIL_STATIC(0x734e40u,734);
}
B4630d9:L4630d9:{c.instructions+=9;NFSU2_TR(0x4630d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4630dd:{NFSU2_TR(0x4630dd);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4630e1:{NFSU2_TR(0x4630e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4630e2:{NFSU2_TR(0x4630e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4630e6:{NFSU2_TR(0x4630e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4630ea:{NFSU2_TR(0x4630ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4630ee:{NFSU2_TR(0x4630ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4630f0:{NFSU2_TR(0x4630f0);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4630f2:{NFSU2_TR(0x4630f2);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4630f4ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4630f4:L4630f4:{c.instructions+=2;NFSU2_TR(0x4630f4);
__builtin_memmove((R+28),(R+0),4);
}
B4630f6:{NFSU2_TR(0x4630f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4630fbull));
TAIL_STATIC(0x734e60u,734);
}
B4630fb:L4630fb:{c.instructions+=4;NFSU2_TR(0x4630fb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4630ff:{NFSU2_TR(0x4630ff);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+6)));
w4(U+10,u32(u32(r4(R+28))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B463101:{NFSU2_TR(0x463101);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463105:{NFSU2_TR(0x463105);
if(r1(R+518)){{goto L463164;}}
}
B463107:L463107:{c.instructions+=11;NFSU2_TR(0x463107);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463108:{NFSU2_TR(0x463108);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46310b:{NFSU2_TR(0x46310b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46310c:{NFSU2_TR(0x46310c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46310d:{NFSU2_TR(0x46310d);
u8 U[4];
w4(U+0,u32(0x82c510ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463112:{NFSU2_TR(0x463112);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+20)),r4(U+0));
}
B463115:{NFSU2_TR(0x463115);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463118:{NFSU2_TR(0x463118);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46311b:{NFSU2_TR(0x46311b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46311e:{NFSU2_TR(0x46311e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463121:{NFSU2_TR(0x463121);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463126ull));
TAIL_STATIC(0x7358c0u,735);
}
B463126:L463126:{c.instructions+=3;NFSU2_TR(0x463126);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B463129:{NFSU2_TR(0x463129);
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
B46312b:{NFSU2_TR(0x46312b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46314b;}}
}
B46312d:L46312d:{c.instructions+=3;NFSU2_TR(0x46312d);
u8 U[4];
w4(U+0,u32(0x7edd60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463132:{NFSU2_TR(0x463132);
w4(R+4,u32(0x82c510ull));
}
B463137:{NFSU2_TR(0x463137);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46313cull));
TAIL_STATIC(0x735840u,735);
}
B46313c:L46313c:{c.instructions+=4;NFSU2_TR(0x46313c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46313d:{NFSU2_TR(0x46313d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46313e:{NFSU2_TR(0x46313e);
u8 U[4];
w4(U+0,u32(0x82c510ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463143:{NFSU2_TR(0x463143);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463148ull));
TAIL_STATIC(0x7358c0u,735);
}
B463148:L463148:{c.instructions+=1;NFSU2_TR(0x463148);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B46314b:L46314b:{c.instructions+=9;NFSU2_TR(0x46314b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46314c:{NFSU2_TR(0x46314c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463152:{NFSU2_TR(0x463152);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B463153:{NFSU2_TR(0x463153);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B463154:{NFSU2_TR(0x463154);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B463155:{NFSU2_TR(0x463155);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B463159:{NFSU2_TR(0x463159);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463160:{NFSU2_TR(0x463160);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B463163:{NFSU2_TR(0x463163);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463164:L463164:{c.instructions+=8;NFSU2_TR(0x463164);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B463168:{NFSU2_TR(0x463168);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46316e:{NFSU2_TR(0x46316e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46316f:{NFSU2_TR(0x46316f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B463170:{NFSU2_TR(0x463170);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B463171:{NFSU2_TR(0x463171);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463178:{NFSU2_TR(0x463178);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46317b:{NFSU2_TR(0x46317b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463180:L463180:{c.instructions+=8;NFSU2_TR(0x463180);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463181:{NFSU2_TR(0x463181);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463182:{NFSU2_TR(0x463182);
__builtin_memmove((R+24),(R+4),4);
}
B463184:{NFSU2_TR(0x463184);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46318a:{NFSU2_TR(0x46318a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46318c:{NFSU2_TR(0x46318c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46318d:{NFSU2_TR(0x46318d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46318f:{NFSU2_TR(0x46318f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463192ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B463192:L463192:{c.instructions+=3;NFSU2_TR(0x463192);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B463198:{NFSU2_TR(0x463198);
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
B46319a:{NFSU2_TR(0x46319a);
if(r1(R+518)){{goto L4631ca;}}
}
B46319c:L46319c:{c.instructions+=3;NFSU2_TR(0x46319c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B46319e:{NFSU2_TR(0x46319e);
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
B4631a0:{NFSU2_TR(0x4631a0);
if(r1(R+518)){{goto L4631a7;}}
}
B4631a2:L4631a2:{c.instructions+=1;NFSU2_TR(0x4631a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4631a7ull));
TAIL_STATIC(0x735550u,735);
}
B4631a7:L4631a7:{c.instructions+=3;NFSU2_TR(0x4631a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4631ab:{NFSU2_TR(0x4631ab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4631ac:{NFSU2_TR(0x4631ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4631b1ull));
TAIL_STATIC(0x734df0u,734);
}
B4631b1:L4631b1:{c.instructions+=2;NFSU2_TR(0x4631b1);
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
B4631b4:{NFSU2_TR(0x4631b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4631b9ull));
TAIL_STATIC(0x734e40u,734);
}
B4631b9:L4631b9:{c.instructions+=5;NFSU2_TR(0x4631b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4631bd:{NFSU2_TR(0x4631bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4631bf:{NFSU2_TR(0x4631bf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4631c1:{NFSU2_TR(0x4631c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4631c2:{NFSU2_TR(0x4631c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4631c5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4631c5:L4631c5:{c.instructions+=1;NFSU2_TR(0x4631c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4631caull));
TAIL_STATIC(0x734e60u,734);
}
B4631ca:L4631ca:{c.instructions+=5;NFSU2_TR(0x4631ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4631cb:{NFSU2_TR(0x4631cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4631d5:{NFSU2_TR(0x4631d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4631d6:{NFSU2_TR(0x4631d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4631d7:{NFSU2_TR(0x4631d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4631e0:L4631e0:{c.instructions+=5;NFSU2_TR(0x4631e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4631e1:{NFSU2_TR(0x4631e1);
__builtin_memmove((R+24),(R+4),4);
}
B4631e3:{NFSU2_TR(0x4631e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4631e9:{NFSU2_TR(0x4631e9);
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
B4631eb:{NFSU2_TR(0x4631eb);
if(r1(R+518)){{goto L463260;}}
}
B4631ed:L4631ed:{c.instructions+=4;NFSU2_TR(0x4631ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4631f4:{NFSU2_TR(0x4631f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4631f6:{NFSU2_TR(0x4631f6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4631f8:{NFSU2_TR(0x4631f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4631fbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4631fb:L4631fb:{c.instructions+=3;NFSU2_TR(0x4631fb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4631fd:{NFSU2_TR(0x4631fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B463203:{NFSU2_TR(0x463203);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L463209;}}
}
B463205:L463205:{c.instructions+=2;NFSU2_TR(0x463205);
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
B463207:{NFSU2_TR(0x463207);
{goto L463215;}
}
B463209:L463209:{c.instructions+=2;NFSU2_TR(0x463209);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46320e:{NFSU2_TR(0x46320e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L463215;}}
}
B463210:L463210:{c.instructions+=1;NFSU2_TR(0x463210);
w4(R+0,u32(0x7fffull));
}
B463215:L463215:{c.instructions+=7;NFSU2_TR(0x463215);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463218:{NFSU2_TR(0x463218);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46321e:{NFSU2_TR(0x46321e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x1000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B463225:{NFSU2_TR(0x463225);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B463227:{NFSU2_TR(0x463227);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463229:{NFSU2_TR(0x463229);
__builtin_memmove((R+4),(R+24),4);
}
B46322b:{NFSU2_TR(0x46322b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46322eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46322e:L46322e:{c.instructions+=3;NFSU2_TR(0x46322e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B463230:{NFSU2_TR(0x463230);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B463236:{NFSU2_TR(0x463236);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46323c;}}
}
B463238:L463238:{c.instructions+=2;NFSU2_TR(0x463238);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B46323a:{NFSU2_TR(0x46323a);
{goto L463248;}
}
B46323c:L46323c:{c.instructions+=2;NFSU2_TR(0x46323c);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B463241:{NFSU2_TR(0x463241);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L463248;}}
}
B463243:L463243:{c.instructions+=1;NFSU2_TR(0x463243);
w4(R+0,u32(0xffffull));
}
B463248:L463248:{c.instructions+=5;NFSU2_TR(0x463248);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46324b:{NFSU2_TR(0x46324b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B463251:{NFSU2_TR(0x463251);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B463253:{NFSU2_TR(0x463253);
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
B463255:{NFSU2_TR(0x463255);
if(r1(R+518)){{goto L463260;}}
}
B463257:L463257:{c.instructions+=3;NFSU2_TR(0x463257);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46325a:{NFSU2_TR(0x46325a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46325b:{NFSU2_TR(0x46325b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463260ull));
TAIL_STATIC(0x735580u,735);
}
B463260:L463260:{c.instructions+=2;NFSU2_TR(0x463260);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B463261:{NFSU2_TR(0x463261);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463270:L463270:{c.instructions+=2;NFSU2_TR(0x463270);
w4(R+0,u32(0x7ed5c8ull));
}
B463275:{NFSU2_TR(0x463275);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463280:L463280:{c.instructions+=2;NFSU2_TR(0x463280);
__builtin_memmove((R+0),gp(0x7ed5cc),4);
}
B463285:{NFSU2_TR(0x463285);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463290:L463290:{c.instructions+=6;NFSU2_TR(0x463290);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B463294:{NFSU2_TR(0x463294);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B463296:{NFSU2_TR(0x463296);
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
B463298:{NFSU2_TR(0x463298);
__builtin_memmove((R+0),(R+518),1);
}
B46329b:{NFSU2_TR(0x46329b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0xffffffffull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4632a2:{NFSU2_TR(0x4632a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4632b0:L4632b0:{c.instructions+=2;NFSU2_TR(0x4632b0);
u8 U[22];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xbull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xbull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xbull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4632b5:{NFSU2_TR(0x4632b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4632be;}}
}
B4632b7:L4632b7:{c.instructions+=1;NFSU2_TR(0x4632b7);
s1(0x82bc54,u8(0x1ull));
}
B4632be:L4632be:{c.instructions+=1;NFSU2_TR(0x4632be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4632c0:L4632c0:{c.instructions+=8;NFSU2_TR(0x4632c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4632c1:{NFSU2_TR(0x4632c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4632c2:{NFSU2_TR(0x4632c2);
__builtin_memmove((R+24),(R+4),4);
}
B4632c4:{NFSU2_TR(0x4632c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4632c7:{NFSU2_TR(0x4632c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4632ca:{NFSU2_TR(0x4632ca);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4632cc:{NFSU2_TR(0x4632cc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4632ce:{NFSU2_TR(0x4632ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4633c1;}}
}
B4632d4:L4632d4:{c.instructions+=2;NFSU2_TR(0x4632d4);
u8 U[5];
__builtin_memmove((U+3),gp(0x82bc54),1);
w1(R+512,u8((r1(U+3))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+12)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4632da:{NFSU2_TR(0x4632da);
if(r1(R+518)){{goto L4633de;}}
}
B4632e0:L4632e0:{c.instructions+=4;NFSU2_TR(0x4632e0);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B4632e6:{NFSU2_TR(0x4632e6);
__builtin_memmove(gp(0x7ed638),(R+12),1);
}
B4632ec:{NFSU2_TR(0x4632ec);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4632f3:{NFSU2_TR(0x4632f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46337a;}}
}
B4632f9:L4632f9:{c.instructions+=2;NFSU2_TR(0x4632f9);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7e5),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4632ff:{NFSU2_TR(0x4632ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L463309;}}
}
B463301:L463301:{c.instructions+=2;NFSU2_TR(0x463301);
u8 U[8];
__builtin_memmove((U+0),gp(0x836474),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B463307:{NFSU2_TR(0x463307);
if(r1(R+518)){{goto L463342;}}
}
B463309:L463309:{c.instructions+=3;NFSU2_TR(0x463309);
__builtin_memmove((R+4),gp(0x82b08c),4);
}
B46330f:{NFSU2_TR(0x46330f);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B463311:{NFSU2_TR(0x463311);
if(r1(R+518)){{goto L46331e;}}
}
B463313:L463313:{c.instructions+=1;NFSU2_TR(0x463313);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463318ull));
TAIL_STATIC(0x721a63u,721);
}
B463318:L463318:{c.instructions+=1;NFSU2_TR(0x463318);
__builtin_memmove(gp(0x82b08c),(R+12),4);
}
B46331e:L46331e:{c.instructions+=4;NFSU2_TR(0x46331e);
u8 U[4];
w4(U+0,u32(0x82b08cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463323:{NFSU2_TR(0x463323);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463324:{NFSU2_TR(0x463324);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463325:{NFSU2_TR(0x463325);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46332aull));
TAIL_STATIC(0x721990u,721);
}
B46332a:L46332a:{c.instructions+=5;NFSU2_TR(0x46332a);
__builtin_memmove((R+8),gp(0x82af60),4);
}
B463330:{NFSU2_TR(0x463330);
__builtin_memmove((R+4),gp(0x82b08c),4);
}
B463336:{NFSU2_TR(0x463336);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B463339:{NFSU2_TR(0x463339);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46333a:{NFSU2_TR(0x46333a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46333full));
TAIL_STATIC(0x721a3cu,721);
}
B46333f:L46333f:{c.instructions+=3;NFSU2_TR(0x46333f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B463340:{NFSU2_TR(0x463340);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B463341:{NFSU2_TR(0x463341);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463342:L463342:{c.instructions+=3;NFSU2_TR(0x463342);
__builtin_memmove((R+4),gp(0x82b08c),4);
}
B463348:{NFSU2_TR(0x463348);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B46334a:{NFSU2_TR(0x46334a);
if(r1(R+518)){{goto L463357;}}
}
B46334c:L46334c:{c.instructions+=1;NFSU2_TR(0x46334c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463351ull));
TAIL_STATIC(0x721a63u,721);
}
B463351:L463351:{c.instructions+=1;NFSU2_TR(0x463351);
__builtin_memmove(gp(0x82b08c),(R+12),4);
}
B463357:L463357:{c.instructions+=4;NFSU2_TR(0x463357);
u8 U[4];
w4(U+0,u32(0x82b08cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46335c:{NFSU2_TR(0x46335c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46335d:{NFSU2_TR(0x46335d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46335e:{NFSU2_TR(0x46335e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463363ull));
TAIL_STATIC(0x721990u,721);
}
B463363:L463363:{c.instructions+=5;NFSU2_TR(0x463363);
__builtin_memmove((R+0),gp(0x82af6c),4);
}
B463368:{NFSU2_TR(0x463368);
__builtin_memmove((R+4),gp(0x82b08c),4);
}
B46336e:{NFSU2_TR(0x46336e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B463371:{NFSU2_TR(0x463371);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463372:{NFSU2_TR(0x463372);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463377ull));
TAIL_STATIC(0x721a3cu,721);
}
B463377:L463377:{c.instructions+=3;NFSU2_TR(0x463377);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B463378:{NFSU2_TR(0x463378);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B463379:{NFSU2_TR(0x463379);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46337a:L46337a:{c.instructions+=3;NFSU2_TR(0x46337a);
__builtin_memmove((R+4),gp(0x82b08c),4);
}
B463380:{NFSU2_TR(0x463380);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B463382:{NFSU2_TR(0x463382);
if(r1(R+518)){{goto L46338f;}}
}
B463384:L463384:{c.instructions+=1;NFSU2_TR(0x463384);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463389ull));
TAIL_STATIC(0x721a63u,721);
}
B463389:L463389:{c.instructions+=1;NFSU2_TR(0x463389);
__builtin_memmove(gp(0x82b08c),(R+12),4);
}
B46338f:L46338f:{c.instructions+=4;NFSU2_TR(0x46338f);
u8 U[4];
w4(U+0,u32(0x82b08cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463394:{NFSU2_TR(0x463394);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463395:{NFSU2_TR(0x463395);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463396:{NFSU2_TR(0x463396);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46339bull));
TAIL_STATIC(0x721990u,721);
}
B46339b:L46339b:{c.instructions+=5;NFSU2_TR(0x46339b);
__builtin_memmove((R+4),gp(0x82af80),4);
}
B4633a1:{NFSU2_TR(0x4633a1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4633a4:{NFSU2_TR(0x4633a4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4633a5:{NFSU2_TR(0x4633a5);
__builtin_memmove((R+4),gp(0x82b08c),4);
}
B4633ab:{NFSU2_TR(0x4633ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4633b0ull));
TAIL_STATIC(0x721a3cu,721);
}
B4633b0:L4633b0:{c.instructions+=4;NFSU2_TR(0x4633b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4633b6:{NFSU2_TR(0x4633b6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4633b7:{NFSU2_TR(0x4633b7);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4633b9:{NFSU2_TR(0x4633b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4633beull));
TAIL_STATIC(0x45db90u,45d);
}
B4633be:L4633be:{c.instructions+=3;NFSU2_TR(0x4633be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4633bf:{NFSU2_TR(0x4633bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4633c0:{NFSU2_TR(0x4633c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4633c1:L4633c1:{c.instructions+=3;NFSU2_TR(0x4633c1);
__builtin_memmove((R+8),gp(0x82b884),4);
}
B4633c7:{NFSU2_TR(0x4633c7);
u8 U[22];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x90ull))));
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
B4633ce:{NFSU2_TR(0x4633ce);
if(r1(R+518)){{goto L4633de;}}
}
B4633d0:L4633d0:{c.instructions+=4;NFSU2_TR(0x4633d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4633d6:{NFSU2_TR(0x4633d6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4633d7:{NFSU2_TR(0x4633d7);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4633d9:{NFSU2_TR(0x4633d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4633deull));
TAIL_STATIC(0x45db90u,45d);
}
B4633de:L4633de:{c.instructions+=3;NFSU2_TR(0x4633de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4633df:{NFSU2_TR(0x4633df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4633e0:{NFSU2_TR(0x4633e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4633f0:L4633f0:{c.instructions+=3;NFSU2_TR(0x4633f0);
__builtin_memmove((R+0),gp(0x82bc54),1);
}
B4633f5:{NFSU2_TR(0x4633f5);
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
B4633f7:{NFSU2_TR(0x4633f7);
if(r1(R+518)){{goto L463470;}}
}
B4633f9:L4633f9:{c.instructions+=3;NFSU2_TR(0x4633f9);
__builtin_memmove((R+0),gp(0x7ed638),1);
}
B4633fe:{NFSU2_TR(0x4633fe);
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
B463400:{NFSU2_TR(0x463400);
if(r1(R+518)){{goto L46340f;}}
}
B463402:L463402:{c.instructions+=2;NFSU2_TR(0x463402);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B463404:{NFSU2_TR(0x463404);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463407ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B463407:L463407:{c.instructions+=2;NFSU2_TR(0x463407);
s1(0x7ed638,u8(0x0ull));
}
B46340e:{NFSU2_TR(0x46340e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46340f:L46340f:{c.instructions+=4;NFSU2_TR(0x46340f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B463415:{NFSU2_TR(0x463415);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46341b:{NFSU2_TR(0x46341b);
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
B46341d:{NFSU2_TR(0x46341d);
if(r1(R+518)){{goto L463470;}}
}
B46341f:L46341f:{c.instructions+=4;NFSU2_TR(0x46341f);
__builtin_memmove((R+8),gp(0x82b884),4);
}
B463425:{NFSU2_TR(0x463425);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46342b:{NFSU2_TR(0x46342b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46342e:{NFSU2_TR(0x46342e);
if(r1(R+518)){{goto L463470;}}
}
B463430:L463430:{c.instructions+=2;NFSU2_TR(0x463430);
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
B463433:{NFSU2_TR(0x463433);
if(r1(R+518)){{goto L463470;}}
}
B463435:L463435:{c.instructions+=3;NFSU2_TR(0x463435);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46343b:{NFSU2_TR(0x46343b);
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
B46343d:{NFSU2_TR(0x46343d);
if(r1(R+518)){{goto L463470;}}
}
B46343f:L46343f:{c.instructions+=3;NFSU2_TR(0x46343f);
__builtin_memmove((R+0),gp(0x82b08c),4);
}
B463444:{NFSU2_TR(0x463444);
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
B463446:{NFSU2_TR(0x463446);
if(r1(R+518)){{goto L463470;}}
}
B463448:L463448:{c.instructions+=1;NFSU2_TR(0x463448);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46344dull));
TAIL_STATIC(0x721515u,721);
}
B46344d:L46344d:{c.instructions+=2;NFSU2_TR(0x46344d);
__builtin_memmove((R+4),gp(0x82b08c),4);
}
B463453:{NFSU2_TR(0x463453);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463458ull));
TAIL_STATIC(0x7219ecu,721);
}
B463458:L463458:{c.instructions+=5;NFSU2_TR(0x463458);
__builtin_memmove((R+0),gp(0x82b060),4);
}
B46345d:{NFSU2_TR(0x46345d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82af60ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B463464:{NFSU2_TR(0x463464);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463465:{NFSU2_TR(0x463465);
__builtin_memmove((R+4),gp(0x82b08c),4);
}
B46346b:{NFSU2_TR(0x46346b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463470ull));
TAIL_STATIC(0x721a3cu,721);
}
B463470:L463470:{c.instructions+=1;NFSU2_TR(0x463470);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463480:L463480:{c.instructions+=3;NFSU2_TR(0x463480);
__builtin_memmove((R+4),gp(0x82b08c),4);
}
B463486:{NFSU2_TR(0x463486);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B463488:{NFSU2_TR(0x463488);
if(r1(R+518)){{goto L463499;}}
}
B46348a:L46348a:{c.instructions+=1;NFSU2_TR(0x46348a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46348full));
TAIL_STATIC(0x721a63u,721);
}
B46348f:L46348f:{c.instructions+=1;NFSU2_TR(0x46348f);
s4(0x82b08c,u32(0x0ull));
}
B463499:L463499:{c.instructions+=3;NFSU2_TR(0x463499);
__builtin_memmove((R+4),gp(0x82b090),4);
}
B46349f:{NFSU2_TR(0x46349f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4634a1:{NFSU2_TR(0x4634a1);
if(r1(R+518)){{goto L4634b2;}}
}
B4634a3:L4634a3:{c.instructions+=1;NFSU2_TR(0x4634a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4634a8ull));
TAIL_STATIC(0x721a63u,721);
}
B4634a8:L4634a8:{c.instructions+=1;NFSU2_TR(0x4634a8);
s4(0x82b090,u32(0x0ull));
}
B4634b2:L4634b2:{c.instructions+=2;NFSU2_TR(0x4634b2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4634b3:{NFSU2_TR(0x4634b3);
w4(R+24,u32(0x82af60ull));
}
B4634b8:L4634b8:{c.instructions+=3;NFSU2_TR(0x4634b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4634ba:{NFSU2_TR(0x4634ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4634bc:{NFSU2_TR(0x4634bc);
if(r1(R+518)){{goto L4634c7;}}
}
B4634be:L4634be:{c.instructions+=2;NFSU2_TR(0x4634be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4634bf:{NFSU2_TR(0x4634bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4634c4ull));
TAIL_STATIC(0x440540u,440);
}
B4634c4:L4634c4:{c.instructions+=1;NFSU2_TR(0x4634c4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4634c7:L4634c7:{c.instructions+=4;NFSU2_TR(0x4634c7);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4634cd:{NFSU2_TR(0x4634cd);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B4634d0:{NFSU2_TR(0x4634d0);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x82af90ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x82af90ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x82af90ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4634d6:{NFSU2_TR(0x4634d6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4634b8u);}goto L4634b8;}}
}
B4634d8:L4634d8:{c.instructions+=2;NFSU2_TR(0x4634d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4634d9:{NFSU2_TR(0x4634d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4634e0:L4634e0:{c.instructions+=2;NFSU2_TR(0x4634e0);
w4(R+0,u32(0x7ed63cull));
}
B4634e5:{NFSU2_TR(0x4634e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4634f0:L4634f0:{c.instructions+=2;NFSU2_TR(0x4634f0);
__builtin_memmove((R+0),gp(0x7ed640),4);
}
B4634f5:{NFSU2_TR(0x4634f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463500:L463500:{c.instructions+=4;NFSU2_TR(0x463500);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B463504:{NFSU2_TR(0x463504);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B463507:{NFSU2_TR(0x463507);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46350a:{NFSU2_TR(0x46350a);
if(r1(R+518)){{goto L463528;}}
}
B46350c:L46350c:{c.instructions+=2;NFSU2_TR(0x46350c);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46350f:{NFSU2_TR(0x46350f);
if(r1(R+518)){{goto L463528;}}
}
B463511:L463511:{c.instructions+=4;NFSU2_TR(0x463511);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46351b:{NFSU2_TR(0x46351b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46351e:{NFSU2_TR(0x46351e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B463525:{NFSU2_TR(0x463525);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463528:L463528:{c.instructions+=4;NFSU2_TR(0x463528);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46352e:{NFSU2_TR(0x46352e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463531:{NFSU2_TR(0x463531);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B463538:{NFSU2_TR(0x463538);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463540:L463540:{c.instructions+=7;NFSU2_TR(0x463540);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463541:{NFSU2_TR(0x463541);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463542:{NFSU2_TR(0x463542);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463543:{NFSU2_TR(0x463543);
__builtin_memmove((R+28),(R+4),4);
}
B463545:{NFSU2_TR(0x463545);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46354b:{NFSU2_TR(0x46354b);
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
B46354d:{NFSU2_TR(0x46354d);
if(r1(R+518)){{goto L46357d;}}
}
B46354f:L46354f:{c.instructions+=3;NFSU2_TR(0x46354f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B463551:{NFSU2_TR(0x463551);
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
B463553:{NFSU2_TR(0x463553);
if(r1(R+518)){{goto L46355a;}}
}
B463555:L463555:{c.instructions+=1;NFSU2_TR(0x463555);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46355aull));
TAIL_STATIC(0x735550u,735);
}
B46355a:L46355a:{c.instructions+=3;NFSU2_TR(0x46355a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B46355e:{NFSU2_TR(0x46355e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46355f:{NFSU2_TR(0x46355f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463564ull));
TAIL_STATIC(0x734df0u,734);
}
B463564:L463564:{c.instructions+=2;NFSU2_TR(0x463564);
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
B463567:{NFSU2_TR(0x463567);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46356cull));
TAIL_STATIC(0x734e40u,734);
}
B46356c:L46356c:{c.instructions+=5;NFSU2_TR(0x46356c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B463570:{NFSU2_TR(0x463570);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B463572:{NFSU2_TR(0x463572);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463574:{NFSU2_TR(0x463574);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463575:{NFSU2_TR(0x463575);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463578ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B463578:L463578:{c.instructions+=1;NFSU2_TR(0x463578);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46357dull));
TAIL_STATIC(0x734e60u,734);
}
B46357d:L46357d:{c.instructions+=5;NFSU2_TR(0x46357d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B463587:{NFSU2_TR(0x463587);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B463588:{NFSU2_TR(0x463588);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B463589:{NFSU2_TR(0x463589);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46358a:{NFSU2_TR(0x46358a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463590:L463590:{c.instructions+=6;NFSU2_TR(0x463590);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B463594:{NFSU2_TR(0x463594);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B463596:{NFSU2_TR(0x463596);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B463598:{NFSU2_TR(0x463598);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff7ull))));
}
B46359b:{NFSU2_TR(0x46359b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x8ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46359e:{NFSU2_TR(0x46359e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4635b0:L4635b0:{c.instructions+=13;NFSU2_TR(0x4635b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4635b2:{NFSU2_TR(0x4635b2);
u8 U[4];
w4(U+0,u32(0x77253bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4635b7:{NFSU2_TR(0x4635b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4635bd:{NFSU2_TR(0x4635bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4635be:{NFSU2_TR(0x4635be);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4635c5:{NFSU2_TR(0x4635c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4635c6:{NFSU2_TR(0x4635c6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4635c7:{NFSU2_TR(0x4635c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4635c8:{NFSU2_TR(0x4635c8);
__builtin_memmove((R+28),(R+4),4);
}
B4635ca:{NFSU2_TR(0x4635ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4635d0:{NFSU2_TR(0x4635d0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4635d2:{NFSU2_TR(0x4635d2);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4635d4:{NFSU2_TR(0x4635d4);
if(r1(R+518)){{goto L4636c3;}}
}
B4635da:L4635da:{c.instructions+=3;NFSU2_TR(0x4635da);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4635dd:{NFSU2_TR(0x4635dd);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4635e0:{NFSU2_TR(0x4635e0);
if(r1(R+518)){{goto L4636c3;}}
}
B4635e6:L4635e6:{c.instructions+=4;NFSU2_TR(0x4635e6);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4635ec:{NFSU2_TR(0x4635ec);
__builtin_memmove((R+4),(R+28),4);
}
B4635ee:{NFSU2_TR(0x4635ee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4635ef:{NFSU2_TR(0x4635ef);
if(r1(R+518)){{goto L463628;}}
}
B4635f1:L4635f1:{c.instructions+=2;NFSU2_TR(0x4635f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4635f3:{NFSU2_TR(0x4635f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4635f6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4635f6:L4635f6:{c.instructions+=2;NFSU2_TR(0x4635f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4635f8:{NFSU2_TR(0x4635f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4636c3;}}
}
B4635fe:L4635fe:{c.instructions+=3;NFSU2_TR(0x4635fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B463604:{NFSU2_TR(0x463604);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B463606:{NFSU2_TR(0x463606);
if(r1(R+518)){{goto L46360f;}}
}
B463608:L463608:{c.instructions+=2;NFSU2_TR(0x463608);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46360a:{NFSU2_TR(0x46360a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46360full));
TAIL_STATIC(0x45fa60u,45f);
}
B46360f:L46360f:{c.instructions+=7;NFSU2_TR(0x46360f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463615:{NFSU2_TR(0x463615);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B463616:{NFSU2_TR(0x463616);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B463617:{NFSU2_TR(0x463617);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46361b:{NFSU2_TR(0x46361b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463622:{NFSU2_TR(0x463622);
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
B463625:{NFSU2_TR(0x463625);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463628:L463628:{c.instructions+=2;NFSU2_TR(0x463628);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46362a:{NFSU2_TR(0x46362a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46362dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46362d:L46362d:{c.instructions+=2;NFSU2_TR(0x46362d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46362f:{NFSU2_TR(0x46362f);
if(r1(R+518)){{goto L4636c3;}}
}
B463635:L463635:{c.instructions+=6;NFSU2_TR(0x463635);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463636:{NFSU2_TR(0x463636);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463637:{NFSU2_TR(0x463637);
s4(0x7ec844,u32(0x78a358ull));
}
B463641:{NFSU2_TR(0x463641);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+20,u32(r1(U+4)));
}
B463648:{NFSU2_TR(0x463648);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46364a:{NFSU2_TR(0x46364a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46364full));
TAIL_STATIC(0x457e20u,457);
}
B46364f:L46364f:{c.instructions+=6;NFSU2_TR(0x46364f);
__builtin_memmove((R+24),(R+0),4);
}
B463651:{NFSU2_TR(0x463651);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B463654:{NFSU2_TR(0x463654);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463658:{NFSU2_TR(0x463658);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46365a:{NFSU2_TR(0x46365a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46365e:{NFSU2_TR(0x46365e);
if(r1(R+518)){{goto L4636b9;}}
}
B463660:L463660:{c.instructions+=3;NFSU2_TR(0x463660);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B463662:{NFSU2_TR(0x463662);
__builtin_memmove((R+0),(R+20),4);
}
B463664:{NFSU2_TR(0x463664);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46366a;}}
}
B463666:L463666:{c.instructions+=2;NFSU2_TR(0x463666);
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
B463668:{NFSU2_TR(0x463668);
{goto L463674;}
}
B46366a:L46366a:{c.instructions+=2;NFSU2_TR(0x46366a);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(U+6))<(u32(0x32ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x32ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x32ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46366d:{NFSU2_TR(0x46366d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L463674;}}
}
B46366f:L46366f:{c.instructions+=1;NFSU2_TR(0x46366f);
w4(R+0,u32(0x32ull));
}
B463674:L463674:{c.instructions+=10;NFSU2_TR(0x463674);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B463677:{NFSU2_TR(0x463677);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463678:{NFSU2_TR(0x463678);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463679:{NFSU2_TR(0x463679);
u8 U[4];
w4(U+0,u32(0x82c510ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46367e:{NFSU2_TR(0x46367e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B463681:{NFSU2_TR(0x463681);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463684:{NFSU2_TR(0x463684);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463687:{NFSU2_TR(0x463687);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46368a:{NFSU2_TR(0x46368a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46368d:{NFSU2_TR(0x46368d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463692ull));
TAIL_STATIC(0x7358c0u,735);
}
B463692:L463692:{c.instructions+=3;NFSU2_TR(0x463692);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B463695:{NFSU2_TR(0x463695);
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
B463697:{NFSU2_TR(0x463697);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4636bb;}}
}
B463699:L463699:{c.instructions+=3;NFSU2_TR(0x463699);
u8 U[4];
w4(U+0,u32(0x7edd60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46369e:{NFSU2_TR(0x46369e);
w4(R+4,u32(0x82c510ull));
}
B4636a3:{NFSU2_TR(0x4636a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4636a8ull));
TAIL_STATIC(0x735840u,735);
}
B4636a8:L4636a8:{c.instructions+=4;NFSU2_TR(0x4636a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4636a9:{NFSU2_TR(0x4636a9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4636aa:{NFSU2_TR(0x4636aa);
u8 U[4];
w4(U+0,u32(0x82c510ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4636af:{NFSU2_TR(0x4636af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4636b4ull));
TAIL_STATIC(0x7358c0u,735);
}
B4636b4:L4636b4:{c.instructions+=2;NFSU2_TR(0x4636b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4636b7:{NFSU2_TR(0x4636b7);
{goto L4636bb;}
}
B4636b9:L4636b9:{c.instructions+=1;NFSU2_TR(0x4636b9);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4636bb:L4636bb:{c.instructions+=3;NFSU2_TR(0x4636bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4636c1:{NFSU2_TR(0x4636c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4636c2:{NFSU2_TR(0x4636c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4636c3:L4636c3:{c.instructions+=6;NFSU2_TR(0x4636c3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4636c7:{NFSU2_TR(0x4636c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4636c8:{NFSU2_TR(0x4636c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4636c9:{NFSU2_TR(0x4636c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4636d0:{NFSU2_TR(0x4636d0);
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
B4636d3:{NFSU2_TR(0x4636d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4636e0:L4636e0:{c.instructions+=5;NFSU2_TR(0x4636e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4636e1:{NFSU2_TR(0x4636e1);
__builtin_memmove((R+24),(R+4),4);
}
B4636e3:{NFSU2_TR(0x4636e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4636e9:{NFSU2_TR(0x4636e9);
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
B4636eb:{NFSU2_TR(0x4636eb);
if(r1(R+518)){{goto L463759;}}
}
B4636ed:L4636ed:{c.instructions+=3;NFSU2_TR(0x4636ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4636ef:{NFSU2_TR(0x4636ef);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4636f1:{NFSU2_TR(0x4636f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4636f4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4636f4:L4636f4:{c.instructions+=3;NFSU2_TR(0x4636f4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4636f6:{NFSU2_TR(0x4636f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4636fc:{NFSU2_TR(0x4636fc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L463702;}}
}
B4636fe:L4636fe:{c.instructions+=2;NFSU2_TR(0x4636fe);
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
B463700:{NFSU2_TR(0x463700);
{goto L46370e;}
}
B463702:L463702:{c.instructions+=2;NFSU2_TR(0x463702);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B463707:{NFSU2_TR(0x463707);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46370e;}}
}
B463709:L463709:{c.instructions+=1;NFSU2_TR(0x463709);
w4(R+0,u32(0x7fffull));
}
B46370e:L46370e:{c.instructions+=5;NFSU2_TR(0x46370e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463711:{NFSU2_TR(0x463711);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B463713:{NFSU2_TR(0x463713);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463715:{NFSU2_TR(0x463715);
__builtin_memmove((R+4),(R+24),4);
}
B463717:{NFSU2_TR(0x463717);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46371aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46371a:L46371a:{c.instructions+=3;NFSU2_TR(0x46371a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B46371c:{NFSU2_TR(0x46371c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B463722:{NFSU2_TR(0x463722);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L463728;}}
}
B463724:L463724:{c.instructions+=2;NFSU2_TR(0x463724);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B463726:{NFSU2_TR(0x463726);
{goto L463734;}
}
B463728:L463728:{c.instructions+=2;NFSU2_TR(0x463728);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46372d:{NFSU2_TR(0x46372d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L463734;}}
}
B46372f:L46372f:{c.instructions+=1;NFSU2_TR(0x46372f);
w4(R+0,u32(0xffffull));
}
B463734:L463734:{c.instructions+=7;NFSU2_TR(0x463734);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463737:{NFSU2_TR(0x463737);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46373d:{NFSU2_TR(0x46373d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x1000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B463744:{NFSU2_TR(0x463744);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46374a:{NFSU2_TR(0x46374a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B46374c:{NFSU2_TR(0x46374c);
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
B46374e:{NFSU2_TR(0x46374e);
if(r1(R+518)){{goto L463759;}}
}
B463750:L463750:{c.instructions+=3;NFSU2_TR(0x463750);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B463753:{NFSU2_TR(0x463753);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463754:{NFSU2_TR(0x463754);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463759ull));
TAIL_STATIC(0x735580u,735);
}
B463759:L463759:{c.instructions+=2;NFSU2_TR(0x463759);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46375a:{NFSU2_TR(0x46375a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463760:L463760:{c.instructions+=2;NFSU2_TR(0x463760);
w4(R+0,u32(0x7ed64cull));
}
B463765:{NFSU2_TR(0x463765);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463770:L463770:{c.instructions+=2;NFSU2_TR(0x463770);
__builtin_memmove((R+0),gp(0x7ed650),4);
}
B463775:{NFSU2_TR(0x463775);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463780:L463780:{c.instructions+=3;NFSU2_TR(0x463780);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463781:{NFSU2_TR(0x463781);
__builtin_memmove((R+24),(R+4),4);
}
B463783:{NFSU2_TR(0x463783);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463788ull));
TAIL_STATIC(0x45dd60u,45d);
}
B463788:L463788:{c.instructions+=4;NFSU2_TR(0x463788);
u8 U[4];
w4(U+0,u32(0x78a368ull));
s4(u32(r4(R+24)),r4(U+0));
}
B46378e:{NFSU2_TR(0x46378e);
__builtin_memmove((R+0),(R+24),4);
}
B463790:{NFSU2_TR(0x463790);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B463791:{NFSU2_TR(0x463791);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4637a0:L4637a0:{c.instructions+=2;NFSU2_TR(0x4637a0);
w4(R+0,u32(0x7ed65cull));
}
B4637a5:{NFSU2_TR(0x4637a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4637b0:L4637b0:{c.instructions+=2;NFSU2_TR(0x4637b0);
__builtin_memmove((R+0),gp(0x7ed660),4);
}
B4637b5:{NFSU2_TR(0x4637b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4637c0:L4637c0:{c.instructions+=3;NFSU2_TR(0x4637c0);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B4637c5:{NFSU2_TR(0x4637c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4637c6:{NFSU2_TR(0x4637c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4637cbull));
TAIL_STATIC(0x43e910u,43e);
}
B4637cb:L4637cb:{c.instructions+=3;NFSU2_TR(0x4637cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4637ce:{NFSU2_TR(0x4637ce);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4d8ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4d8ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4637d3:{NFSU2_TR(0x4637d3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4637fd;}}
}
B4637d5:L4637d5:{c.instructions+=6;NFSU2_TR(0x4637d5);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B4637db:{NFSU2_TR(0x4637db);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B4637de:{NFSU2_TR(0x4637de);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B4637e4:{NFSU2_TR(0x4637e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4637e5:{NFSU2_TR(0x4637e5);
u8 U[4];
w4(U+0,u32(0xd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4637ea:{NFSU2_TR(0x4637ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4637efull));
TAIL_STATIC(0x440820u,440);
}
B4637ef:L4637ef:{c.instructions+=3;NFSU2_TR(0x4637ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4637f2:{NFSU2_TR(0x4637f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4637f4:{NFSU2_TR(0x4637f4);
if(r1(R+518)){{goto L4637fd;}}
}
B4637f6:L4637f6:{c.instructions+=2;NFSU2_TR(0x4637f6);
__builtin_memmove((R+4),(R+0),4);
}
B4637f8:{NFSU2_TR(0x4637f8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x463780u);}goto L463780;}
}
B4637fd:L4637fd:{c.instructions+=2;NFSU2_TR(0x4637fd);
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
B4637ff:{NFSU2_TR(0x4637ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463800:L463800:{c.instructions+=2;NFSU2_TR(0x463800);
w4(R+0,u32(0x7ed66cull));
}
B463805:{NFSU2_TR(0x463805);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463810:L463810:{c.instructions+=2;NFSU2_TR(0x463810);
__builtin_memmove((R+0),gp(0x7ed670),4);
}
B463815:{NFSU2_TR(0x463815);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463820:L463820:{c.instructions+=6;NFSU2_TR(0x463820);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463821:{NFSU2_TR(0x463821);
__builtin_memmove((R+24),(R+4),4);
}
B463823:{NFSU2_TR(0x463823);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B463826:{NFSU2_TR(0x463826);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B463829:{NFSU2_TR(0x463829);
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
B46382b:{NFSU2_TR(0x46382b);
if(r1(R+518)){{goto L4638e7;}}
}
B463831:L463831:{c.instructions+=3;NFSU2_TR(0x463831);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B463837:{NFSU2_TR(0x463837);
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
B463839:{NFSU2_TR(0x463839);
if(r1(R+518)){{goto L4638e7;}}
}
B46383f:L46383f:{c.instructions+=5;NFSU2_TR(0x46383f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B463842:{NFSU2_TR(0x463842);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B463844:{NFSU2_TR(0x463844);
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
B463846:{NFSU2_TR(0x463846);
__builtin_memmove((R+4),(R+24),4);
}
B463848:{NFSU2_TR(0x463848);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46387d;}}
}
B46384a:L46384a:{c.instructions+=2;NFSU2_TR(0x46384a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46384c:{NFSU2_TR(0x46384c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46384full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46384f:L46384f:{c.instructions+=3;NFSU2_TR(0x46384f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B463851:{NFSU2_TR(0x463851);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B463857:{NFSU2_TR(0x463857);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46385d;}}
}
B463859:L463859:{c.instructions+=2;NFSU2_TR(0x463859);
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
B46385b:{NFSU2_TR(0x46385b);
{goto L463869;}
}
B46385d:L46385d:{c.instructions+=2;NFSU2_TR(0x46385d);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B463862:{NFSU2_TR(0x463862);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L463869;}}
}
B463864:L463864:{c.instructions+=1;NFSU2_TR(0x463864);
w4(R+0,u32(0x7fffull));
}
B463869:L463869:{c.instructions+=5;NFSU2_TR(0x463869);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46386c:{NFSU2_TR(0x46386c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B463872:{NFSU2_TR(0x463872);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x1450ull));
s4(u32(r4(U+0)),r4(U+4));
}
B463879:{NFSU2_TR(0x463879);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46387b:{NFSU2_TR(0x46387b);
{goto L4638ae;}
}
B46387d:L46387d:{c.instructions+=2;NFSU2_TR(0x46387d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46387f:{NFSU2_TR(0x46387f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463882ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B463882:L463882:{c.instructions+=3;NFSU2_TR(0x463882);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B463884:{NFSU2_TR(0x463884);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46388a:{NFSU2_TR(0x46388a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L463890;}}
}
B46388c:L46388c:{c.instructions+=2;NFSU2_TR(0x46388c);
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
B46388e:{NFSU2_TR(0x46388e);
{goto L46389c;}
}
B463890:L463890:{c.instructions+=2;NFSU2_TR(0x463890);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B463895:{NFSU2_TR(0x463895);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46389c;}}
}
B463897:L463897:{c.instructions+=1;NFSU2_TR(0x463897);
w4(R+0,u32(0x7fffull));
}
B46389c:L46389c:{c.instructions+=4;NFSU2_TR(0x46389c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46389f:{NFSU2_TR(0x46389f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4638a5:{NFSU2_TR(0x4638a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0xfa0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4638ac:{NFSU2_TR(0x4638ac);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4638ae:L4638ae:{c.instructions+=3;NFSU2_TR(0x4638ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4638b0:{NFSU2_TR(0x4638b0);
__builtin_memmove((R+4),(R+24),4);
}
B4638b2:{NFSU2_TR(0x4638b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4638b5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4638b5:L4638b5:{c.instructions+=3;NFSU2_TR(0x4638b5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4638b7:{NFSU2_TR(0x4638b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4638bd:{NFSU2_TR(0x4638bd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4638c3;}}
}
B4638bf:L4638bf:{c.instructions+=2;NFSU2_TR(0x4638bf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4638c1:{NFSU2_TR(0x4638c1);
{goto L4638cf;}
}
B4638c3:L4638c3:{c.instructions+=2;NFSU2_TR(0x4638c3);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4638c8:{NFSU2_TR(0x4638c8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4638cf;}}
}
B4638ca:L4638ca:{c.instructions+=1;NFSU2_TR(0x4638ca);
w4(R+0,u32(0xffffull));
}
B4638cf:L4638cf:{c.instructions+=5;NFSU2_TR(0x4638cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4638d2:{NFSU2_TR(0x4638d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4638d8:{NFSU2_TR(0x4638d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4638da:{NFSU2_TR(0x4638da);
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
B4638dc:{NFSU2_TR(0x4638dc);
if(r1(R+518)){{goto L4638e7;}}
}
B4638de:L4638de:{c.instructions+=3;NFSU2_TR(0x4638de);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4638e1:{NFSU2_TR(0x4638e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4638e2:{NFSU2_TR(0x4638e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4638e7ull));
TAIL_STATIC(0x735580u,735);
}
B4638e7:L4638e7:{c.instructions+=2;NFSU2_TR(0x4638e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4638e8:{NFSU2_TR(0x4638e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4638f0:L4638f0:{c.instructions+=7;NFSU2_TR(0x4638f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4638f1:{NFSU2_TR(0x4638f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4638f5:{NFSU2_TR(0x4638f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4638f7:{NFSU2_TR(0x4638f7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4638f8:{NFSU2_TR(0x4638f8);
__builtin_memmove((R+28),(R+4),4);
}
B4638fa:{NFSU2_TR(0x4638fa);
__builtin_memmove((R+4),(R+24),4);
}
B4638fc:{NFSU2_TR(0x4638fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4638ffull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4638ff:L4638ff:{c.instructions+=2;NFSU2_TR(0x4638ff);
u8 U[14];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+10,u32(u32(r4(U+0))&u32(u32(0xfff0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B463905:{NFSU2_TR(0x463905);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46390d;}}
}
B463907:L463907:{c.instructions+=1;NFSU2_TR(0x463907);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46390d:L46390d:{c.instructions+=3;NFSU2_TR(0x46390d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46390e:{NFSU2_TR(0x46390e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46390f:{NFSU2_TR(0x46390f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463920:L463920:{c.instructions+=14;NFSU2_TR(0x463920);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B463926:{NFSU2_TR(0x463926);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463928:{NFSU2_TR(0x463928);
u8 U[4];
w4(U+0,u32(0x77259bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46392d:{NFSU2_TR(0x46392d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46392e:{NFSU2_TR(0x46392e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463935:{NFSU2_TR(0x463935);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B463938:{NFSU2_TR(0x463938);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463939:{NFSU2_TR(0x463939);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46393a:{NFSU2_TR(0x46393a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46393b:{NFSU2_TR(0x46393b);
__builtin_memmove((R+28),(R+4),4);
}
B46393d:{NFSU2_TR(0x46393d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B463943:{NFSU2_TR(0x463943);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B463945:{NFSU2_TR(0x463945);
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
B463947:{NFSU2_TR(0x463947);
if(r1(R+518)){{goto L46397c;}}
}
B463949:L463949:{c.instructions+=3;NFSU2_TR(0x463949);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B46394b:{NFSU2_TR(0x46394b);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B46394d:{NFSU2_TR(0x46394d);
if(r1(R+518)){{goto L463954;}}
}
B46394f:L46394f:{c.instructions+=1;NFSU2_TR(0x46394f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463954ull));
TAIL_STATIC(0x735550u,735);
}
B463954:L463954:{c.instructions+=3;NFSU2_TR(0x463954);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B463958:{NFSU2_TR(0x463958);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463959:{NFSU2_TR(0x463959);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46395eull));
TAIL_STATIC(0x734df0u,734);
}
B46395e:L46395e:{c.instructions+=2;NFSU2_TR(0x46395e);
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
B463961:{NFSU2_TR(0x463961);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463966ull));
TAIL_STATIC(0x734e40u,734);
}
B463966:L463966:{c.instructions+=5;NFSU2_TR(0x463966);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46396a:{NFSU2_TR(0x46396a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46396c:{NFSU2_TR(0x46396c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46396d:{NFSU2_TR(0x46396d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46396e:{NFSU2_TR(0x46396e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463971ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B463971:L463971:{c.instructions+=1;NFSU2_TR(0x463971);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463976ull));
TAIL_STATIC(0x734e60u,734);
}
B463976:L463976:{c.instructions+=1;NFSU2_TR(0x463976);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46397c:L46397c:{c.instructions+=6;NFSU2_TR(0x46397c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46397f:{NFSU2_TR(0x46397f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B463985:{NFSU2_TR(0x463985);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B463988:{NFSU2_TR(0x463988);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46398a:{NFSU2_TR(0x46398a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46398b:{NFSU2_TR(0x46398b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46398eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46398e:L46398e:{c.instructions+=4;NFSU2_TR(0x46398e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B463992:{NFSU2_TR(0x463992);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463993:{NFSU2_TR(0x463993);
s4(0x7ec844,u32(0x78a3a0ull));
}
B46399d:{NFSU2_TR(0x46399d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4639a2ull));
TAIL_STATIC(0x734df0u,734);
}
B4639a2:L4639a2:{c.instructions+=2;NFSU2_TR(0x4639a2);
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
B4639a5:{NFSU2_TR(0x4639a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4639aaull));
TAIL_STATIC(0x734e40u,734);
}
B4639aa:L4639aa:{c.instructions+=9;NFSU2_TR(0x4639aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4639ae:{NFSU2_TR(0x4639ae);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4639b2:{NFSU2_TR(0x4639b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4639b3:{NFSU2_TR(0x4639b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4639b7:{NFSU2_TR(0x4639b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4639bb:{NFSU2_TR(0x4639bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4639bf:{NFSU2_TR(0x4639bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4639c1:{NFSU2_TR(0x4639c1);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4639c3:{NFSU2_TR(0x4639c3);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4639c5ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4639c5:L4639c5:{c.instructions+=2;NFSU2_TR(0x4639c5);
__builtin_memmove((R+24),(R+0),4);
}
B4639c7:{NFSU2_TR(0x4639c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4639ccull));
TAIL_STATIC(0x734e60u,734);
}
B4639cc:L4639cc:{c.instructions+=4;NFSU2_TR(0x4639cc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4639d0:{NFSU2_TR(0x4639d0);
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
B4639d2:{NFSU2_TR(0x4639d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4639d6:{NFSU2_TR(0x4639d6);
if(r1(R+518)){{goto L463a39;}}
}
B4639d8:L4639d8:{c.instructions+=11;NFSU2_TR(0x4639d8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4639d9:{NFSU2_TR(0x4639d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4639dc:{NFSU2_TR(0x4639dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4639dd:{NFSU2_TR(0x4639dd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4639de:{NFSU2_TR(0x4639de);
u8 U[4];
w4(U+0,u32(0x82c510ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4639e3:{NFSU2_TR(0x4639e3);
u8 U[4];
w4(U+0,u32(0x4ull));
s4(u32(r4(R+20)),r4(U+0));
}
B4639ea:{NFSU2_TR(0x4639ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4639ed:{NFSU2_TR(0x4639ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4639f0:{NFSU2_TR(0x4639f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4639f3:{NFSU2_TR(0x4639f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4639f6:{NFSU2_TR(0x4639f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4639fbull));
TAIL_STATIC(0x7358c0u,735);
}
B4639fb:L4639fb:{c.instructions+=3;NFSU2_TR(0x4639fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4639fe:{NFSU2_TR(0x4639fe);
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
B463a00:{NFSU2_TR(0x463a00);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L463a20;}}
}
B463a02:L463a02:{c.instructions+=3;NFSU2_TR(0x463a02);
u8 U[4];
w4(U+0,u32(0x7edd60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463a07:{NFSU2_TR(0x463a07);
w4(R+4,u32(0x82c510ull));
}
B463a0c:{NFSU2_TR(0x463a0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463a11ull));
TAIL_STATIC(0x735840u,735);
}
B463a11:L463a11:{c.instructions+=4;NFSU2_TR(0x463a11);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463a12:{NFSU2_TR(0x463a12);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463a13:{NFSU2_TR(0x463a13);
u8 U[4];
w4(U+0,u32(0x82c510ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463a18:{NFSU2_TR(0x463a18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463a1dull));
TAIL_STATIC(0x7358c0u,735);
}
B463a1d:L463a1d:{c.instructions+=1;NFSU2_TR(0x463a1d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B463a20:L463a20:{c.instructions+=9;NFSU2_TR(0x463a20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B463a21:{NFSU2_TR(0x463a21);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463a27:{NFSU2_TR(0x463a27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B463a28:{NFSU2_TR(0x463a28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B463a29:{NFSU2_TR(0x463a29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B463a2a:{NFSU2_TR(0x463a2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B463a2e:{NFSU2_TR(0x463a2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463a35:{NFSU2_TR(0x463a35);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B463a38:{NFSU2_TR(0x463a38);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463a39:L463a39:{c.instructions+=8;NFSU2_TR(0x463a39);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B463a3d:{NFSU2_TR(0x463a3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463a43:{NFSU2_TR(0x463a43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B463a44:{NFSU2_TR(0x463a44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B463a45:{NFSU2_TR(0x463a45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B463a46:{NFSU2_TR(0x463a46);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463a4d:{NFSU2_TR(0x463a4d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B463a50:{NFSU2_TR(0x463a50);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463a60:L463a60:{c.instructions+=8;NFSU2_TR(0x463a60);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463a61:{NFSU2_TR(0x463a61);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463a62:{NFSU2_TR(0x463a62);
__builtin_memmove((R+24),(R+4),4);
}
B463a64:{NFSU2_TR(0x463a64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B463a6a:{NFSU2_TR(0x463a6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B463a6c:{NFSU2_TR(0x463a6c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463a6d:{NFSU2_TR(0x463a6d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463a6f:{NFSU2_TR(0x463a6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463a72ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B463a72:L463a72:{c.instructions+=3;NFSU2_TR(0x463a72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B463a78:{NFSU2_TR(0x463a78);
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
B463a7a:{NFSU2_TR(0x463a7a);
if(r1(R+518)){{goto L463aaa;}}
}
B463a7c:L463a7c:{c.instructions+=3;NFSU2_TR(0x463a7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B463a7e:{NFSU2_TR(0x463a7e);
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
B463a80:{NFSU2_TR(0x463a80);
if(r1(R+518)){{goto L463a87;}}
}
B463a82:L463a82:{c.instructions+=1;NFSU2_TR(0x463a82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463a87ull));
TAIL_STATIC(0x735550u,735);
}
B463a87:L463a87:{c.instructions+=3;NFSU2_TR(0x463a87);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B463a8b:{NFSU2_TR(0x463a8b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463a8c:{NFSU2_TR(0x463a8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463a91ull));
TAIL_STATIC(0x734df0u,734);
}
B463a91:L463a91:{c.instructions+=2;NFSU2_TR(0x463a91);
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
B463a94:{NFSU2_TR(0x463a94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463a99ull));
TAIL_STATIC(0x734e40u,734);
}
B463a99:L463a99:{c.instructions+=5;NFSU2_TR(0x463a99);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B463a9d:{NFSU2_TR(0x463a9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B463a9f:{NFSU2_TR(0x463a9f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463aa1:{NFSU2_TR(0x463aa1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463aa2:{NFSU2_TR(0x463aa2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463aa5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B463aa5:L463aa5:{c.instructions+=1;NFSU2_TR(0x463aa5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463aaaull));
TAIL_STATIC(0x734e60u,734);
}
B463aaa:L463aaa:{c.instructions+=5;NFSU2_TR(0x463aaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B463aab:{NFSU2_TR(0x463aab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B463ab5:{NFSU2_TR(0x463ab5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B463ab6:{NFSU2_TR(0x463ab6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B463ab7:{NFSU2_TR(0x463ab7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463ac0:L463ac0:{c.instructions+=2;NFSU2_TR(0x463ac0);
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
B463ac2:{NFSU2_TR(0x463ac2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463ad0:L463ad0:{c.instructions+=5;NFSU2_TR(0x463ad0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B463ad4:{NFSU2_TR(0x463ad4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B463ad8:{NFSU2_TR(0x463ad8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463adb:{NFSU2_TR(0x463adb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463ade:{NFSU2_TR(0x463ade);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463af0:L463af0:{c.instructions+=8;NFSU2_TR(0x463af0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B463af4:{NFSU2_TR(0x463af4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463af5:{NFSU2_TR(0x463af5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463af6:{NFSU2_TR(0x463af6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B463af8:{NFSU2_TR(0x463af8);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B463afa:{NFSU2_TR(0x463afa);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B463afb:{NFSU2_TR(0x463afb);
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
B463afd:{NFSU2_TR(0x463afd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L463b75;}}
}
B463aff:L463aff:{c.instructions+=6;NFSU2_TR(0x463aff);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463b00:{NFSU2_TR(0x463b00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463b01:{NFSU2_TR(0x463b01);
__builtin_memmove((R+24),(R+28),4);
}
B463b03:{NFSU2_TR(0x463b03);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x2cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B463b06:{NFSU2_TR(0x463b06);
w4(R+12,u32(0x82b0a4ull));
}
B463b0b:{NFSU2_TR(0x463b0b);
{goto L463b10;}
}
B463b10:L463b10:{c.instructions+=5;NFSU2_TR(0x463b10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x82b0a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B463b16:{NFSU2_TR(0x463b16);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B463b19:{NFSU2_TR(0x463b19);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463b1a:{NFSU2_TR(0x463b1a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463b1b:{NFSU2_TR(0x463b1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463b20ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B463b20:L463b20:{c.instructions+=3;NFSU2_TR(0x463b20);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B463b23:{NFSU2_TR(0x463b23);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B463b25:{NFSU2_TR(0x463b25);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L463b3d;}}
}
B463b27:L463b27:{c.instructions+=5;NFSU2_TR(0x463b27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x82b0a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B463b2d:{NFSU2_TR(0x463b2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B463b2f:{NFSU2_TR(0x463b2f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463b30:{NFSU2_TR(0x463b30);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463b31:{NFSU2_TR(0x463b31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463b36ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B463b36:L463b36:{c.instructions+=3;NFSU2_TR(0x463b36);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B463b39:{NFSU2_TR(0x463b39);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B463b3b:{NFSU2_TR(0x463b3b);
if(r1(R+518)){{goto L463b4a;}}
}
B463b3d:L463b3d:{c.instructions+=4;NFSU2_TR(0x463b3d);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B463b3e:{NFSU2_TR(0x463b3e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x2cull))));
}
B463b41:{NFSU2_TR(0x463b41);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B463b43:{NFSU2_TR(0x463b43);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x463b10u);}goto L463b10;}}
}
B463b45:L463b45:{c.instructions+=5;NFSU2_TR(0x463b45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B463b46:{NFSU2_TR(0x463b46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B463b47:{NFSU2_TR(0x463b47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B463b48:{NFSU2_TR(0x463b48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B463b49:{NFSU2_TR(0x463b49);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463b4a:L463b4a:{c.instructions+=12;NFSU2_TR(0x463b4a);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B463b4c:{NFSU2_TR(0x463b4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x82b0a0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463b52:{NFSU2_TR(0x463b52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x82b0a4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463b58:{NFSU2_TR(0x463b58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x82b0a8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463b5e:{NFSU2_TR(0x463b5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x82b0acull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463b64:{NFSU2_TR(0x463b64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x82b0b0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463b6a:{NFSU2_TR(0x463b6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B463b6e:{NFSU2_TR(0x463b6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B463b70:{NFSU2_TR(0x463b70);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B463b71:{NFSU2_TR(0x463b71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B463b72:{NFSU2_TR(0x463b72);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B463b74:{NFSU2_TR(0x463b74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B463b75:L463b75:{c.instructions+=3;NFSU2_TR(0x463b75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B463b76:{NFSU2_TR(0x463b76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B463b77:{NFSU2_TR(0x463b77);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463b80:L463b80:{c.instructions+=4;NFSU2_TR(0x463b80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463b81:{NFSU2_TR(0x463b81);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B463b84:{NFSU2_TR(0x463b84);
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
B463b86:{NFSU2_TR(0x463b86);
if(r1(R+518)){{goto L463ba0;}}
}
B463b88:L463b88:{c.instructions+=3;NFSU2_TR(0x463b88);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463b89:{NFSU2_TR(0x463b89);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B463b8d:{NFSU2_TR(0x463b8d);
__builtin_memmove((R+4),(R+4),4);
}
B463b90:L463b90:{c.instructions+=4;NFSU2_TR(0x463b90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B463b92:{NFSU2_TR(0x463b92);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463b93:{NFSU2_TR(0x463b93);
__builtin_memmove((R+4),(R+24),4);
}
B463b95:{NFSU2_TR(0x463b95);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463b98ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B463b98:L463b98:{c.instructions+=3;NFSU2_TR(0x463b98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B463b9b:{NFSU2_TR(0x463b9b);
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
B463b9d:{NFSU2_TR(0x463b9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x463b90u);}goto L463b90;}}
}
B463b9f:L463b9f:{c.instructions+=1;NFSU2_TR(0x463b9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B463ba0:L463ba0:{c.instructions+=2;NFSU2_TR(0x463ba0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B463ba1:{NFSU2_TR(0x463ba1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463bb0:L463bb0:{c.instructions+=5;NFSU2_TR(0x463bb0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463bb1:{NFSU2_TR(0x463bb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B463bb4:{NFSU2_TR(0x463bb4);
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
B463bb6:{NFSU2_TR(0x463bb6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B463bba:{NFSU2_TR(0x463bba);
if(r1(R+518)){{goto L463bce;}}
}
B463bbc:L463bbc:{c.instructions+=1;NFSU2_TR(0x463bbc);
__builtin_memmove((R+16),(R+16),4);
}
B463bc0:L463bc0:{c.instructions+=3;NFSU2_TR(0x463bc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B463bc2:{NFSU2_TR(0x463bc2);
__builtin_memmove((R+4),(R+24),4);
}
B463bc4:{NFSU2_TR(0x463bc4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463bc7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B463bc7:L463bc7:{c.instructions+=3;NFSU2_TR(0x463bc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B463bca:{NFSU2_TR(0x463bca);
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
B463bcc:{NFSU2_TR(0x463bcc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x463bc0u);}goto L463bc0;}}
}
B463bce:L463bce:{c.instructions+=2;NFSU2_TR(0x463bce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B463bcf:{NFSU2_TR(0x463bcf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463bd0:L463bd0:{c.instructions+=3;NFSU2_TR(0x463bd0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B463bd3:{NFSU2_TR(0x463bd3);
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
B463bd5:{NFSU2_TR(0x463bd5);
if(r1(R+518)){{goto L463c21;}}
}
B463bd7:L463bd7:{c.instructions+=4;NFSU2_TR(0x463bd7);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B463bdc:{NFSU2_TR(0x463bdc);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B463bdf:{NFSU2_TR(0x463bdf);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B463be1:{NFSU2_TR(0x463be1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L463bf6;}}
}
B463be3:L463be3:{c.instructions+=6;NFSU2_TR(0x463be3);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B463be7:{NFSU2_TR(0x463be7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B463beb:{NFSU2_TR(0x463beb);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B463bee:{NFSU2_TR(0x463bee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463bf1:{NFSU2_TR(0x463bf1);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B463bf4:{NFSU2_TR(0x463bf4);
{goto L463bfd;}
}
B463bf6:L463bf6:{c.instructions+=1;NFSU2_TR(0x463bf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B463bfd:L463bfd:{c.instructions+=4;NFSU2_TR(0x463bfd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463bfe:{NFSU2_TR(0x463bfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B463c01:{NFSU2_TR(0x463c01);
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
B463c03:{NFSU2_TR(0x463c03);
if(r1(R+518)){{goto L463c20;}}
}
B463c05:L463c05:{c.instructions+=3;NFSU2_TR(0x463c05);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463c06:{NFSU2_TR(0x463c06);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B463c0a:{NFSU2_TR(0x463c0a);
__builtin_memmove((R+12),(R+12),4);
}
B463c10:L463c10:{c.instructions+=4;NFSU2_TR(0x463c10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B463c12:{NFSU2_TR(0x463c12);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463c13:{NFSU2_TR(0x463c13);
__builtin_memmove((R+4),(R+24),4);
}
B463c15:{NFSU2_TR(0x463c15);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463c18ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B463c18:L463c18:{c.instructions+=3;NFSU2_TR(0x463c18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B463c1b:{NFSU2_TR(0x463c1b);
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
B463c1d:{NFSU2_TR(0x463c1d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x463c10u);}goto L463c10;}}
}
B463c1f:L463c1f:{c.instructions+=1;NFSU2_TR(0x463c1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B463c20:L463c20:{c.instructions+=1;NFSU2_TR(0x463c20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B463c21:L463c21:{c.instructions+=1;NFSU2_TR(0x463c21);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463c30:L463c30:{c.instructions+=3;NFSU2_TR(0x463c30);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B463c33:{NFSU2_TR(0x463c33);
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
B463c35:{NFSU2_TR(0x463c35);
if(r1(R+518)){{goto L463c4f;}}
}
B463c37:L463c37:{c.instructions+=4;NFSU2_TR(0x463c37);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463c38:{NFSU2_TR(0x463c38);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B463c3b:{NFSU2_TR(0x463c3b);
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
B463c3d:{NFSU2_TR(0x463c3d);
if(r1(R+518)){{goto L463c4e;}}
}
B463c3f:L463c3f:{c.instructions+=1;NFSU2_TR(0x463c3f);
}
B463c40:L463c40:{c.instructions+=3;NFSU2_TR(0x463c40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B463c42:{NFSU2_TR(0x463c42);
__builtin_memmove((R+4),(R+24),4);
}
B463c44:{NFSU2_TR(0x463c44);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463c47ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B463c47:L463c47:{c.instructions+=3;NFSU2_TR(0x463c47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B463c4a:{NFSU2_TR(0x463c4a);
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
B463c4c:{NFSU2_TR(0x463c4c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x463c40u);}goto L463c40;}}
}
B463c4e:L463c4e:{c.instructions+=1;NFSU2_TR(0x463c4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B463c4f:L463c4f:{c.instructions+=1;NFSU2_TR(0x463c4f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463c50:L463c50:{c.instructions+=3;NFSU2_TR(0x463c50);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B463c53:{NFSU2_TR(0x463c53);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B463c55:{NFSU2_TR(0x463c55);
if(r1(R+518)){{goto L463c6c;}}
}
B463c57:L463c57:{c.instructions+=2;NFSU2_TR(0x463c57);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B463c5b:{NFSU2_TR(0x463c5b);
{goto L463c60;}
}
B463c60:L463c60:{c.instructions+=2;NFSU2_TR(0x463c60);
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
B463c63:{NFSU2_TR(0x463c63);
if(r1(R+518)){{goto L463c6e;}}
}
B463c65:L463c65:{c.instructions+=3;NFSU2_TR(0x463c65);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B463c68:{NFSU2_TR(0x463c68);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B463c6a:{NFSU2_TR(0x463c6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x463c60u);}goto L463c60;}}
}
B463c6c:L463c6c:{c.instructions+=1;NFSU2_TR(0x463c6c);
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
B463c6e:L463c6e:{c.instructions+=1;NFSU2_TR(0x463c6e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463c80:L463c80:{c.instructions+=10;NFSU2_TR(0x463c80);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463c81:{NFSU2_TR(0x463c81);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463c82:{NFSU2_TR(0x463c82);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463c83:{NFSU2_TR(0x463c83);
__builtin_memmove((R+28),(R+4),4);
}
B463c85:{NFSU2_TR(0x463c85);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B463c88:{NFSU2_TR(0x463c88);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B463c8a:{NFSU2_TR(0x463c8a);
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
B463c8c:{NFSU2_TR(0x463c8c);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B463c8f:{NFSU2_TR(0x463c8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463c92:{NFSU2_TR(0x463c92);
if(r1(R+518)){{goto L463ca3;}}
}
B463c94:L463c94:{c.instructions+=5;NFSU2_TR(0x463c94);
__builtin_memmove((R+4),(R+24),4);
}
B463c96:{NFSU2_TR(0x463c96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B463c98:{NFSU2_TR(0x463c98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B463c9b:{NFSU2_TR(0x463c9b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463c9d:{NFSU2_TR(0x463c9d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463c9full));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B463c9f:L463c9f:{c.instructions+=2;NFSU2_TR(0x463c9f);
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
B463ca1:{NFSU2_TR(0x463ca1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x463c94u);}goto L463c94;}}
}
B463ca3:L463ca3:{c.instructions+=8;NFSU2_TR(0x463ca3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B463ca5:{NFSU2_TR(0x463ca5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463ca8:{NFSU2_TR(0x463ca8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463cab:{NFSU2_TR(0x463cab);
__builtin_memmove((R+4),(R+28),4);
}
B463cad:{NFSU2_TR(0x463cad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B463cae:{NFSU2_TR(0x463cae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B463caf:{NFSU2_TR(0x463caf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B463cb0:{NFSU2_TR(0x463cb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B463cc0:L463cc0:{c.instructions+=6;NFSU2_TR(0x463cc0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463cc1:{NFSU2_TR(0x463cc1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463cc2:{NFSU2_TR(0x463cc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B463cc5:{NFSU2_TR(0x463cc5);
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
B463cc7:{NFSU2_TR(0x463cc7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463cc8:{NFSU2_TR(0x463cc8);
if(r1(R+518)){{goto L463cec;}}
}
B463cca:L463cca:{c.instructions+=2;NFSU2_TR(0x463cca);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B463cce:{NFSU2_TR(0x463cce);
__builtin_memmove((R+28),(R+28),4);
}
B463cd0:L463cd0:{c.instructions+=4;NFSU2_TR(0x463cd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B463cd2:{NFSU2_TR(0x463cd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B463cd5:{NFSU2_TR(0x463cd5);
__builtin_memmove((R+4),(R+24),4);
}
B463cd7:{NFSU2_TR(0x463cd7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463cdaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B463cda:L463cda:{c.instructions+=2;NFSU2_TR(0x463cda);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B463cdc:{NFSU2_TR(0x463cdc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L463ce5;}}
}
B463cde:L463cde:{c.instructions+=3;NFSU2_TR(0x463cde);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B463ce1:{NFSU2_TR(0x463ce1);
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
B463ce3:{NFSU2_TR(0x463ce3);
if(r1(R+518)){{goto L463cf4;}}
}
B463ce5:L463ce5:{c.instructions+=3;NFSU2_TR(0x463ce5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B463ce8:{NFSU2_TR(0x463ce8);
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
B463cea:{NFSU2_TR(0x463cea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x463cd0u);}goto L463cd0;}}
}
B463cec:L463cec:{c.instructions+=5;NFSU2_TR(0x463cec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B463ced:{NFSU2_TR(0x463ced);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B463cee:{NFSU2_TR(0x463cee);
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
B463cf0:{NFSU2_TR(0x463cf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B463cf1:{NFSU2_TR(0x463cf1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463cf4:L463cf4:{c.instructions+=4;NFSU2_TR(0x463cf4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B463cf6:{NFSU2_TR(0x463cf6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463cf7:{NFSU2_TR(0x463cf7);
__builtin_memmove((R+4),(R+24),4);
}
B463cf9:{NFSU2_TR(0x463cf9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463cfcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B463cfc:L463cfc:{c.instructions+=5;NFSU2_TR(0x463cfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B463cfd:{NFSU2_TR(0x463cfd);
__builtin_memmove((R+0),(R+24),4);
}
B463cff:{NFSU2_TR(0x463cff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B463d00:{NFSU2_TR(0x463d00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B463d01:{NFSU2_TR(0x463d01);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463d10:L463d10:{c.instructions+=6;NFSU2_TR(0x463d10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463d11:{NFSU2_TR(0x463d11);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463d12:{NFSU2_TR(0x463d12);
__builtin_memmove((R+28),(R+4),4);
}
B463d14:{NFSU2_TR(0x463d14);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B463d17:{NFSU2_TR(0x463d17);
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
B463d19:{NFSU2_TR(0x463d19);
if(r1(R+518)){{goto L463d71;}}
}
B463d1b:L463d1b:{c.instructions+=2;NFSU2_TR(0x463d1b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B463d1f:{NFSU2_TR(0x463d1f);
}
B463d20:L463d20:{c.instructions+=2;NFSU2_TR(0x463d20);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B463d23:{NFSU2_TR(0x463d23);
if(r1(R+518)){{goto L463d31;}}
}
B463d25:L463d25:{c.instructions+=3;NFSU2_TR(0x463d25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B463d28:{NFSU2_TR(0x463d28);
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
B463d2a:{NFSU2_TR(0x463d2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x463d20u);}goto L463d20;}}
}
B463d2c:L463d2c:{c.instructions+=3;NFSU2_TR(0x463d2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B463d2d:{NFSU2_TR(0x463d2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B463d2e:{NFSU2_TR(0x463d2e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463d31:L463d31:{c.instructions+=2;NFSU2_TR(0x463d31);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B463d34:{NFSU2_TR(0x463d34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L463d49;}}
}
B463d36:L463d36:{c.instructions+=4;NFSU2_TR(0x463d36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B463d39:{NFSU2_TR(0x463d39);
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
B463d3b:{NFSU2_TR(0x463d3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463d3e:{NFSU2_TR(0x463d3e);
if(r1(R+518)){{goto L463d5f;}}
}
B463d40:L463d40:{c.instructions+=2;NFSU2_TR(0x463d40);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B463d47:{NFSU2_TR(0x463d47);
{goto L463d5f;}
}
B463d49:L463d49:{c.instructions+=6;NFSU2_TR(0x463d49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B463d4c:{NFSU2_TR(0x463d4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B463d4f:{NFSU2_TR(0x463d4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463d52:{NFSU2_TR(0x463d52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B463d55:{NFSU2_TR(0x463d55);
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
B463d57:{NFSU2_TR(0x463d57);
if(r1(R+518)){{goto L463d5f;}}
}
B463d59:L463d59:{c.instructions+=2;NFSU2_TR(0x463d59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B463d5c:{NFSU2_TR(0x463d5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463d5f:L463d5f:{c.instructions+=3;NFSU2_TR(0x463d5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B463d61:{NFSU2_TR(0x463d61);
__builtin_memmove((R+4),(R+24),4);
}
B463d63:{NFSU2_TR(0x463d63);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463d66ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B463d66:L463d66:{c.instructions+=4;NFSU2_TR(0x463d66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B463d68:{NFSU2_TR(0x463d68);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463d6a:{NFSU2_TR(0x463d6a);
__builtin_memmove((R+4),(R+24),4);
}
B463d6c:{NFSU2_TR(0x463d6c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463d6eull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B463d6e:L463d6e:{c.instructions+=1;NFSU2_TR(0x463d6e);
u8 U[14];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B463d71:L463d71:{c.instructions+=3;NFSU2_TR(0x463d71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B463d72:{NFSU2_TR(0x463d72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B463d73:{NFSU2_TR(0x463d73);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463d80:L463d80:{c.instructions+=3;NFSU2_TR(0x463d80);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B463d84:{NFSU2_TR(0x463d84);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463d85:{NFSU2_TR(0x463d85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463d8aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x463bd0u);}goto L463bd0;}
}
B463d8a:L463d8a:{c.instructions+=3;NFSU2_TR(0x463d8a);
__builtin_memmove((R+0),gp(0x7ed440),4);
}
B463d8f:{NFSU2_TR(0x463d8f);
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
B463d92:{NFSU2_TR(0x463d92);
if(r1(R+518)){{goto L463dd0;}}
}
B463d94:L463d94:{c.instructions+=3;NFSU2_TR(0x463d94);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82af90ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B463d9b:{NFSU2_TR(0x463d9b);
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
B463d9d:{NFSU2_TR(0x463d9d);
if(r1(R+518)){{goto L463dd0;}}
}
B463d9f:L463d9f:{c.instructions+=3;NFSU2_TR(0x463d9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B463da5:{NFSU2_TR(0x463da5);
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
B463da7:{NFSU2_TR(0x463da7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L463db1;}}
}
B463da9:L463da9:{c.instructions+=2;NFSU2_TR(0x463da9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B463dab:{NFSU2_TR(0x463dab);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463daeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B463dae:L463dae:{c.instructions+=1;NFSU2_TR(0x463dae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463db1:L463db1:{c.instructions+=1;NFSU2_TR(0x463db1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463db6ull));
TAIL_STATIC(0x461000u,461);
}
B463db6:L463db6:{c.instructions+=2;NFSU2_TR(0x463db6);
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
B463db8:{NFSU2_TR(0x463db8);
if(r1(R+518)){{goto L463dd0;}}
}
B463dba:L463dba:{c.instructions+=4;NFSU2_TR(0x463dba);
__builtin_memmove((R+0),gp(0x7ed440),4);
}
B463dbf:{NFSU2_TR(0x463dbf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82af90ull))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B463dca:{NFSU2_TR(0x463dca);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B463dcb:{NFSU2_TR(0x463dcb);
__builtin_memmove(gp(0x7ed440),(R+0),4);
}
B463dd0:L463dd0:{c.instructions+=1;NFSU2_TR(0x463dd0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463de0:L463de0:{c.instructions+=8;NFSU2_TR(0x463de0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463de1:{NFSU2_TR(0x463de1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463de2:{NFSU2_TR(0x463de2);
__builtin_memmove((R+20),(R+4),4);
}
B463de4:{NFSU2_TR(0x463de4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463de5:{NFSU2_TR(0x463de5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463de6:{NFSU2_TR(0x463de6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B463de8:{NFSU2_TR(0x463de8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((R+28),(U+0),4);
}
B463deb:{NFSU2_TR(0x463deb);
w4(R+4,u32(0x10ull));
}
B463df0:L463df0:{c.instructions+=1;NFSU2_TR(0x463df0);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L463df2;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x463df0u);}goto L463df0;}
}
B463df2:L463df2:{c.instructions+=7;NFSU2_TR(0x463df2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B463df5:{NFSU2_TR(0x463df5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B463df7:{NFSU2_TR(0x463df7);
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
B463df9:{NFSU2_TR(0x463df9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463dfc:{NFSU2_TR(0x463dfc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B463dff:{NFSU2_TR(0x463dff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463e02:{NFSU2_TR(0x463e02);
if(r1(R+518)){{goto L463e13;}}
}
B463e04:L463e04:{c.instructions+=5;NFSU2_TR(0x463e04);
__builtin_memmove((R+4),(R+24),4);
}
B463e06:{NFSU2_TR(0x463e06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B463e08:{NFSU2_TR(0x463e08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B463e0b:{NFSU2_TR(0x463e0b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463e0d:{NFSU2_TR(0x463e0d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463e0full));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B463e0f:L463e0f:{c.instructions+=2;NFSU2_TR(0x463e0f);
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
B463e11:{NFSU2_TR(0x463e11);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x463e04u);}goto L463e04;}}
}
B463e13:L463e13:{c.instructions+=9;NFSU2_TR(0x463e13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B463e16:{NFSU2_TR(0x463e16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B463e17:{NFSU2_TR(0x463e17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B463e18:{NFSU2_TR(0x463e18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463e1b:{NFSU2_TR(0x463e1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463e1e:{NFSU2_TR(0x463e1e);
__builtin_memmove((R+4),(R+20),4);
}
B463e20:{NFSU2_TR(0x463e20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B463e21:{NFSU2_TR(0x463e21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B463e22:{NFSU2_TR(0x463e22);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B463e30:L463e30:{c.instructions+=7;NFSU2_TR(0x463e30);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463e31:{NFSU2_TR(0x463e31);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463e32:{NFSU2_TR(0x463e32);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463e33:{NFSU2_TR(0x463e33);
__builtin_memmove((R+28),(R+4),4);
}
B463e35:{NFSU2_TR(0x463e35);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+24),(U+0),4);
}
B463e38:{NFSU2_TR(0x463e38);
w4(R+12,u32(0x10ull));
}
B463e3d:{NFSU2_TR(0x463e3d);
__builtin_memmove((R+4),(R+4),4);
}
B463e40:L463e40:{c.instructions+=3;NFSU2_TR(0x463e40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B463e42:{NFSU2_TR(0x463e42);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B463e44:{NFSU2_TR(0x463e44);
if(r1(R+518)){{goto L463eb1;}}
}
B463e46:L463e46:{c.instructions+=3;NFSU2_TR(0x463e46);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B463e49:{NFSU2_TR(0x463e49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463e4a:{NFSU2_TR(0x463e4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463e4full));
TAIL_STATIC(0x459a50u,459);
}
B463e4f:L463e4f:{c.instructions+=6;NFSU2_TR(0x463e4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B463e51:{NFSU2_TR(0x463e51);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B463e54:{NFSU2_TR(0x463e54);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x60ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B463e57:{NFSU2_TR(0x463e57);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463e58:{NFSU2_TR(0x463e58);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463e59:{NFSU2_TR(0x463e59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463e5eull));
TAIL_STATIC(0x43ce10u,43c);
}
B463e5e:L463e5e:{c.instructions+=5;NFSU2_TR(0x463e5e);
{u32 ea_=u32(u32(7906324u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B463e64:{NFSU2_TR(0x463e64);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B463e67:{NFSU2_TR(0x463e67);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B463e69:{NFSU2_TR(0x463e69);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B463e6c:{NFSU2_TR(0x463e6c);
if(r1(R+514)){{goto L463e72;}}
}
B463e6e:L463e6e:{c.instructions+=2;NFSU2_TR(0x463e6e);
w1(R+0,u8(0x1ull));
}
B463e70:{NFSU2_TR(0x463e70);
{goto L463e74;}
}
B463e72:L463e72:{c.instructions+=1;NFSU2_TR(0x463e72);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B463e74:L463e74:{c.instructions+=3;NFSU2_TR(0x463e74);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B463e77:{NFSU2_TR(0x463e77);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B463e79:{NFSU2_TR(0x463e79);
if(r1(R+518)){{goto L463e95;}}
}
B463e7b:L463e7b:{c.instructions+=1;NFSU2_TR(0x463e7b);
{goto L463e80;}
}
B463e80:L463e80:{c.instructions+=3;NFSU2_TR(0x463e80);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B463e83:{NFSU2_TR(0x463e83);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B463e85:{NFSU2_TR(0x463e85);
if(r1(R+518)){{goto L463e8e;}}
}
B463e87:L463e87:{c.instructions+=3;NFSU2_TR(0x463e87);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B463e8a:{NFSU2_TR(0x463e8a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B463e8c:{NFSU2_TR(0x463e8c);
if(r1(R+518)){{goto L463ec9;}}
}
B463e8e:L463e8e:{c.instructions+=3;NFSU2_TR(0x463e8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B463e91:{NFSU2_TR(0x463e91);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B463e93:{NFSU2_TR(0x463e93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x463e80u);}goto L463e80;}}
}
B463e95:L463e95:{c.instructions+=2;NFSU2_TR(0x463e95);
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
B463e97:{NFSU2_TR(0x463e97);
if(r1(R+518)){{goto L463eb1;}}
}
B463e99:L463e99:{c.instructions+=5;NFSU2_TR(0x463e99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B463e9b:{NFSU2_TR(0x463e9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B463e9d:{NFSU2_TR(0x463e9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463e9e:{NFSU2_TR(0x463e9e);
__builtin_memmove((R+4),(R+28),4);
}
B463ea0:{NFSU2_TR(0x463ea0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463ea3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B463ea3:L463ea3:{c.instructions+=2;NFSU2_TR(0x463ea3);
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
B463ea5:{NFSU2_TR(0x463ea5);
if(r1(R+518)){{goto L463eb1;}}
}
B463ea7:L463ea7:{c.instructions+=5;NFSU2_TR(0x463ea7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B463ea9:{NFSU2_TR(0x463ea9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B463eab:{NFSU2_TR(0x463eab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463eac:{NFSU2_TR(0x463eac);
__builtin_memmove((R+4),(R+0),4);
}
B463eae:{NFSU2_TR(0x463eae);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463eb1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B463eb1:L463eb1:{c.instructions+=3;NFSU2_TR(0x463eb1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B463eb4:{NFSU2_TR(0x463eb4);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B463eb5:{NFSU2_TR(0x463eb5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x463e40u);}goto L463e40;}}
}
B463eb7:L463eb7:{c.instructions+=4;NFSU2_TR(0x463eb7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B463ebb:{NFSU2_TR(0x463ebb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463ebc:{NFSU2_TR(0x463ebc);
__builtin_memmove((R+4),(R+28),4);
}
B463ebe:{NFSU2_TR(0x463ebe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463ec3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x463bd0u);}goto L463bd0;}
}
B463ec3:L463ec3:{c.instructions+=4;NFSU2_TR(0x463ec3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B463ec4:{NFSU2_TR(0x463ec4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B463ec5:{NFSU2_TR(0x463ec5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B463ec6:{NFSU2_TR(0x463ec6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463ec9:L463ec9:{c.instructions+=2;NFSU2_TR(0x463ec9);
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
B463ecb:{NFSU2_TR(0x463ecb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x463eb1u);}goto L463eb1;}}
}
B463ecd:L463ecd:{c.instructions+=2;NFSU2_TR(0x463ecd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B463ecf:{NFSU2_TR(0x463ecf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463ed2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B463ed2:L463ed2:{c.instructions+=1;NFSU2_TR(0x463ed2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x463eb1u);}goto L463eb1;}
}
B463ee0:L463ee0:{c.instructions+=4;NFSU2_TR(0x463ee0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B463ee4:{NFSU2_TR(0x463ee4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B463ee7:{NFSU2_TR(0x463ee7);
w4(R+4,u32(0x10ull));
}
B463eec:{NFSU2_TR(0x463eec);
__builtin_memmove((R+16),(R+16),4);
}
B463ef0:L463ef0:{c.instructions+=2;NFSU2_TR(0x463ef0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B463ef2:{NFSU2_TR(0x463ef2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L463efa;}}
}
B463ef4:L463ef4:{c.instructions+=1;NFSU2_TR(0x463ef4);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B463efa:L463efa:{c.instructions+=3;NFSU2_TR(0x463efa);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B463efd:{NFSU2_TR(0x463efd);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B463efe:{NFSU2_TR(0x463efe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x463ef0u);}goto L463ef0;}}
}
B463f00:L463f00:{c.instructions+=1;NFSU2_TR(0x463f00);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463f10:L463f10:{c.instructions+=6;NFSU2_TR(0x463f10);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B463f13:{NFSU2_TR(0x463f13);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B463f17:{NFSU2_TR(0x463f17);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B463f1b:{NFSU2_TR(0x463f1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B463f1e:{NFSU2_TR(0x463f1e);
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
B463f20:{NFSU2_TR(0x463f20);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463f30:L463f30:{c.instructions+=5;NFSU2_TR(0x463f30);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B463f35:{NFSU2_TR(0x463f35);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463f36:{NFSU2_TR(0x463f36);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B463f38:{NFSU2_TR(0x463f38);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B463f3a:{NFSU2_TR(0x463f3a);
if(r1(R+518)){{goto L463f3e;}}
}
B463f3c:L463f3c:{c.instructions+=1;NFSU2_TR(0x463f3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B463f3e:L463f3e:{c.instructions+=6;NFSU2_TR(0x463f3e);
u8 U[8];
__builtin_memmove((U+0),gp(0x82bc58),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B463f44:{NFSU2_TR(0x463f44);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B463f48:{NFSU2_TR(0x463f48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B463f4b:{NFSU2_TR(0x463f4b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463f4c:{NFSU2_TR(0x463f4c);
__builtin_memmove(gp(0x82bc5c),(R+0),1);
}
B463f51:{NFSU2_TR(0x463f51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463f56ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x463bd0u);}goto L463bd0;}
}
B463f56:L463f56:{c.instructions+=3;NFSU2_TR(0x463f56);
__builtin_memmove(gp(0x82bc58),(R+24),4);
}
B463f5c:{NFSU2_TR(0x463f5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B463f5d:{NFSU2_TR(0x463f5d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B463f60:L463f60:{c.instructions+=7;NFSU2_TR(0x463f60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x38ull))));
}
B463f63:{NFSU2_TR(0x463f63);
__builtin_memmove((R+8),(R+4),4);
}
B463f65:{NFSU2_TR(0x463f65);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B463f68:{NFSU2_TR(0x463f68);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B463f6a:{NFSU2_TR(0x463f6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463f6e:{NFSU2_TR(0x463f6e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463f72:{NFSU2_TR(0x463f72);
if(r1(R+518)){TAIL_STATIC(0x46433fu,464);}
}
B463f78:L463f78:{c.instructions+=15;NFSU2_TR(0x463f78);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B463f7a:{NFSU2_TR(0x463f7a);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+16)),r2(U+0));
}
B463f7f:{NFSU2_TR(0x463f7f);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B463f82:{NFSU2_TR(0x463f82);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463f83:{NFSU2_TR(0x463f83);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B463f86:{NFSU2_TR(0x463f86);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463f8a:{NFSU2_TR(0x463f8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463f8e:{NFSU2_TR(0x463f8e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463f8f:{NFSU2_TR(0x463f8f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463f90:{NFSU2_TR(0x463f90);
u8 U[5];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B463f94:{NFSU2_TR(0x463f94);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463f98:{NFSU2_TR(0x463f98);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B463f9c:{NFSU2_TR(0x463f9c);
w4(R+0,u32(0xffffffffull));
}
B463fa1:{NFSU2_TR(0x463fa1);
w4(R+4,u32(0x6ull));
}
B463fa6:{NFSU2_TR(0x463fa6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B463faa:L463faa:{c.instructions+=1;NFSU2_TR(0x463faa);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L463fac;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x463faau);}goto L463faa;}
}
B463fac:L463fac:{c.instructions+=3;NFSU2_TR(0x463fac);
__builtin_memmove((R+0),(R+12),4);
}
B463fae:{NFSU2_TR(0x463fae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B463fb0:{NFSU2_TR(0x463fb0);
if(r1(R+518)){{goto L463fc4;}}
}
B463fb2:L463fb2:{c.instructions+=5;NFSU2_TR(0x463fb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B463fb8:{NFSU2_TR(0x463fb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B463fbb:{NFSU2_TR(0x463fbb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B463fbd:{NFSU2_TR(0x463fbd);
u8 U[13];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x1ull));
s1(u32(r4(U+8)),r1(U+12));
}
B463fc2:{NFSU2_TR(0x463fc2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x463fb2u);}goto L463fb2;}}
}
B463fc4:L463fc4:{c.instructions+=4;NFSU2_TR(0x463fc4);
__builtin_memmove((R+28),(R+12),4);
}
B463fc6:{NFSU2_TR(0x463fc6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B463fc8:{NFSU2_TR(0x463fc8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463fc9:{NFSU2_TR(0x463fc9);
if(r1(R+518)){TAIL_STATIC(0x46404bu,464);}
}
B463fcf:L463fcf:{c.instructions+=5;NFSU2_TR(0x463fcf);
}
B463fd0:{NFSU2_TR(0x463fd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B463fd6:{NFSU2_TR(0x463fd6);
u8 U[13];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B463fda:{NFSU2_TR(0x463fda);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B463fdc:{NFSU2_TR(0x463fdc);
if(r1(R+518)){TAIL_STATIC(0x464039u,464);}
}
B463fde:L463fde:{c.instructions+=4;NFSU2_TR(0x463fde);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B463fe2:{NFSU2_TR(0x463fe2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B463fe5:{NFSU2_TR(0x463fe5);
u8 U[12];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B463fe9:{NFSU2_TR(0x463fe9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x464039u,464);}
}
B463feb:L463feb:{c.instructions+=4;NFSU2_TR(0x463feb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B463fee:{NFSU2_TR(0x463fee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463fef:{NFSU2_TR(0x463fef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B463ff0:{NFSU2_TR(0x463ff0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x463ff5ull));
TAIL_STATIC(0x458e70u,458);
}
B463ff5:L463ff5:{c.instructions+=3;NFSU2_TR(0x463ff5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B463ff8:{NFSU2_TR(0x463ff8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B463ffa:{NFSU2_TR(0x463ffa);
if(r1(R+518)){TAIL_STATIC(0x464039u,464);}
}
B463ffc:L463ffc:{c.instructions+=2;NFSU2_TR(0x463ffc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B463ffe:{NFSU2_TR(0x463ffe);
__builtin_memmove((R+28),(R+28),4);
TAIL_STATIC(0x464000u,464);
}
XIT:NFSU2_TR_EXIT(0x463,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
