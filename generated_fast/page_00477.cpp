#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_457(u8* __restrict R,Cpu& c);
u32 body_459(u8* __restrict R,Cpu& c);
u32 body_464(u8* __restrict R,Cpu& c);
u32 body_465(u8* __restrict R,Cpu& c);
u32 body_466(u8* __restrict R,Cpu& c);
u32 body_467(u8* __restrict R,Cpu& c);
u32 body_468(u8* __restrict R,Cpu& c);
u32 body_469(u8* __restrict R,Cpu& c);
u32 body_46b(u8* __restrict R,Cpu& c);
u32 body_475(u8* __restrict R,Cpu& c);
u32 body_478(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_6f5(u8* __restrict R,Cpu& c);
u32 body_6f7(u8* __restrict R,Cpu& c);
u32 body_6fa(u8* __restrict R,Cpu& c);
u32 body_721(u8* __restrict R,Cpu& c);
u32 body_723(u8* __restrict R,Cpu& c);
u32 body_724(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x477,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x477,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_477(u8* __restrict R,Cpu& c);
u32 page_477(Cpu& c){return body_477(c.regs.data(),c);}
__attribute__((noinline)) u32 body_477(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x477000:goto L477000;
case 0x477003:c.instructions+=12;goto B477003;
case 0x477006:c.instructions+=11;goto B477006;
case 0x477009:c.instructions+=10;goto B477009;
case 0x47700c:c.instructions+=9;goto B47700c;
case 0x47700f:c.instructions+=8;goto B47700f;
case 0x477012:c.instructions+=7;goto B477012;
case 0x477015:c.instructions+=6;goto B477015;
case 0x477018:c.instructions+=5;goto B477018;
case 0x47701b:c.instructions+=4;goto B47701b;
case 0x47701e:c.instructions+=3;goto B47701e;
case 0x477024:c.instructions+=2;goto B477024;
case 0x477027:c.instructions+=1;goto B477027;
case 0x477030:goto L477030;
case 0x477032:c.instructions+=15;goto B477032;
case 0x477034:c.instructions+=14;goto B477034;
case 0x477037:c.instructions+=13;goto B477037;
case 0x47703a:c.instructions+=12;goto B47703a;
case 0x47703d:c.instructions+=11;goto B47703d;
case 0x477040:c.instructions+=10;goto B477040;
case 0x477043:c.instructions+=9;goto B477043;
case 0x477046:c.instructions+=8;goto B477046;
case 0x477049:c.instructions+=7;goto B477049;
case 0x47704c:c.instructions+=6;goto B47704c;
case 0x47704f:c.instructions+=5;goto B47704f;
case 0x477052:c.instructions+=4;goto B477052;
case 0x477055:c.instructions+=3;goto B477055;
case 0x477058:c.instructions+=2;goto B477058;
case 0x47705e:c.instructions+=1;goto B47705e;
case 0x477060:goto L477060;
case 0x477062:c.instructions+=11;goto B477062;
case 0x477067:c.instructions+=10;goto B477067;
case 0x47706d:c.instructions+=9;goto B47706d;
case 0x47706e:c.instructions+=8;goto B47706e;
case 0x477075:c.instructions+=7;goto B477075;
case 0x477076:c.instructions+=6;goto B477076;
case 0x477077:c.instructions+=5;goto B477077;
case 0x477079:c.instructions+=4;goto B477079;
case 0x47707d:c.instructions+=3;goto B47707d;
case 0x477083:c.instructions+=2;goto B477083;
case 0x47708b:c.instructions+=1;goto B47708b;
case 0x477090:goto L477090;
case 0x477094:c.instructions+=5;goto B477094;
case 0x47709a:c.instructions+=4;goto B47709a;
case 0x47709b:c.instructions+=3;goto B47709b;
case 0x4770a2:c.instructions+=2;goto B4770a2;
case 0x4770a5:c.instructions+=1;goto B4770a5;
case 0x4770b0:goto L4770b0;
case 0x4770b2:c.instructions+=23;goto B4770b2;
case 0x4770b4:c.instructions+=22;goto B4770b4;
case 0x4770b7:c.instructions+=21;goto B4770b7;
case 0x4770ba:c.instructions+=20;goto B4770ba;
case 0x4770bd:c.instructions+=19;goto B4770bd;
case 0x4770c0:c.instructions+=18;goto B4770c0;
case 0x4770c3:c.instructions+=17;goto B4770c3;
case 0x4770c6:c.instructions+=16;goto B4770c6;
case 0x4770c9:c.instructions+=15;goto B4770c9;
case 0x4770cc:c.instructions+=14;goto B4770cc;
case 0x4770cf:c.instructions+=13;goto B4770cf;
case 0x4770d2:c.instructions+=12;goto B4770d2;
case 0x4770d5:c.instructions+=11;goto B4770d5;
case 0x4770d8:c.instructions+=10;goto B4770d8;
case 0x4770db:c.instructions+=9;goto B4770db;
case 0x4770de:c.instructions+=8;goto B4770de;
case 0x4770e4:c.instructions+=7;goto B4770e4;
case 0x4770eb:c.instructions+=6;goto B4770eb;
case 0x4770ee:c.instructions+=5;goto B4770ee;
case 0x4770f1:c.instructions+=4;goto B4770f1;
case 0x4770f4:c.instructions+=3;goto B4770f4;
case 0x4770f7:c.instructions+=2;goto B4770f7;
case 0x4770fa:c.instructions+=1;goto B4770fa;
case 0x477100:goto L477100;
case 0x477104:c.instructions+=19;goto B477104;
case 0x477106:c.instructions+=18;goto B477106;
case 0x477109:c.instructions+=17;goto B477109;
case 0x47710c:c.instructions+=16;goto B47710c;
case 0x47710f:c.instructions+=15;goto B47710f;
case 0x477112:c.instructions+=14;goto B477112;
case 0x477115:c.instructions+=13;goto B477115;
case 0x477118:c.instructions+=12;goto B477118;
case 0x47711b:c.instructions+=11;goto B47711b;
case 0x47711e:c.instructions+=10;goto B47711e;
case 0x477120:c.instructions+=9;goto B477120;
case 0x477123:c.instructions+=8;goto B477123;
case 0x477126:c.instructions+=7;goto B477126;
case 0x477127:c.instructions+=6;goto B477127;
case 0x47712a:c.instructions+=5;goto B47712a;
case 0x47712d:c.instructions+=4;goto B47712d;
case 0x47712f:c.instructions+=3;goto B47712f;
case 0x477132:c.instructions+=2;goto B477132;
case 0x477136:c.instructions+=1;goto B477136;
case 0x477138:goto L477138;
case 0x47713a:c.instructions+=2;goto B47713a;
case 0x47713c:c.instructions+=1;goto B47713c;
case 0x47713f:goto L47713f;
case 0x477142:c.instructions+=2;goto B477142;
case 0x477144:c.instructions+=1;goto B477144;
case 0x477146:goto L477146;
case 0x477147:c.instructions+=1;goto B477147;
case 0x477150:goto L477150;
case 0x477151:c.instructions+=8;goto B477151;
case 0x477152:c.instructions+=7;goto B477152;
case 0x477156:c.instructions+=6;goto B477156;
case 0x47715b:c.instructions+=5;goto B47715b;
case 0x477160:c.instructions+=4;goto B477160;
case 0x477161:c.instructions+=3;goto B477161;
case 0x477164:c.instructions+=2;goto B477164;
case 0x477167:c.instructions+=1;goto B477167;
case 0x477169:goto L477169;
case 0x47716f:c.instructions+=7;goto B47716f;
case 0x477175:c.instructions+=6;goto B477175;
case 0x47717b:c.instructions+=5;goto B47717b;
case 0x47717d:c.instructions+=4;goto B47717d;
case 0x47717f:c.instructions+=3;goto B47717f;
case 0x477181:c.instructions+=2;goto B477181;
case 0x477184:c.instructions+=1;goto B477184;
case 0x477186:goto L477186;
case 0x47718c:c.instructions+=2;goto B47718c;
case 0x47718d:c.instructions+=1;goto B47718d;
case 0x477192:goto L477192;
case 0x477198:c.instructions+=4;goto B477198;
case 0x47719a:c.instructions+=3;goto B47719a;
case 0x47719d:c.instructions+=2;goto B47719d;
case 0x47719f:c.instructions+=1;goto B47719f;
case 0x4771a2:goto L4771a2;
case 0x4771a8:c.instructions+=7;goto B4771a8;
case 0x4771ab:c.instructions+=6;goto B4771ab;
case 0x4771ad:c.instructions+=5;goto B4771ad;
case 0x4771af:c.instructions+=4;goto B4771af;
case 0x4771b1:c.instructions+=3;goto B4771b1;
case 0x4771b7:c.instructions+=2;goto B4771b7;
case 0x4771ba:c.instructions+=1;goto B4771ba;
case 0x4771bf:goto L4771bf;
case 0x4771c3:c.instructions+=1;goto B4771c3;
case 0x4771c5:goto L4771c5;
case 0x4771c8:c.instructions+=3;goto B4771c8;
case 0x4771c9:c.instructions+=2;goto B4771c9;
case 0x4771ca:c.instructions+=1;goto B4771ca;
case 0x4771cf:goto L4771cf;
case 0x4771d2:c.instructions+=4;goto B4771d2;
case 0x4771d3:c.instructions+=3;goto B4771d3;
case 0x4771d4:c.instructions+=2;goto B4771d4;
case 0x4771d5:c.instructions+=1;goto B4771d5;
case 0x4771d6:goto L4771d6;
case 0x4771d8:c.instructions+=1;goto B4771d8;
case 0x4771da:goto L4771da;
case 0x4771dc:c.instructions+=1;goto B4771dc;
case 0x4771de:goto L4771de;
case 0x4771e1:c.instructions+=4;goto B4771e1;
case 0x4771e2:c.instructions+=3;goto B4771e2;
case 0x4771e3:c.instructions+=2;goto B4771e3;
case 0x4771e4:c.instructions+=1;goto B4771e4;
case 0x4771e9:goto L4771e9;
case 0x4771ec:c.instructions+=4;goto B4771ec;
case 0x4771ed:c.instructions+=3;goto B4771ed;
case 0x4771ee:c.instructions+=2;goto B4771ee;
case 0x4771ef:c.instructions+=1;goto B4771ef;
case 0x4771f0:goto L4771f0;
case 0x4771f3:c.instructions+=2;goto B4771f3;
case 0x4771f5:c.instructions+=1;goto B4771f5;
case 0x4771fa:goto L4771fa;
case 0x4771fe:c.instructions+=1;goto B4771fe;
case 0x477200:goto L477200;
case 0x477207:goto L477207;
case 0x477209:c.instructions+=1;goto B477209;
case 0x47720e:goto L47720e;
case 0x477211:c.instructions+=3;goto B477211;
case 0x477212:c.instructions+=2;goto B477212;
case 0x477213:c.instructions+=1;goto B477213;
case 0x477218:goto L477218;
case 0x47721b:c.instructions+=4;goto B47721b;
case 0x47721c:c.instructions+=3;goto B47721c;
case 0x47721d:c.instructions+=2;goto B47721d;
case 0x47721e:c.instructions+=1;goto B47721e;
case 0x477220:goto L477220;
case 0x477221:c.instructions+=7;goto B477221;
case 0x477222:c.instructions+=6;goto B477222;
case 0x477223:c.instructions+=5;goto B477223;
case 0x477227:c.instructions+=4;goto B477227;
case 0x47722a:c.instructions+=3;goto B47722a;
case 0x47722d:c.instructions+=2;goto B47722d;
case 0x47722e:c.instructions+=1;goto B47722e;
case 0x477230:goto L477230;
case 0x477233:c.instructions+=3;goto B477233;
case 0x477235:c.instructions+=2;goto B477235;
case 0x477238:c.instructions+=1;goto B477238;
case 0x47723a:goto L47723a;
case 0x47723d:c.instructions+=2;goto B47723d;
case 0x477240:c.instructions+=1;goto B477240;
case 0x477242:goto L477242;
case 0x477245:c.instructions+=1;goto B477245;
case 0x477247:goto L477247;
case 0x47724a:c.instructions+=2;goto B47724a;
case 0x47724c:c.instructions+=1;goto B47724c;
case 0x47724f:goto L47724f;
case 0x477252:c.instructions+=2;goto B477252;
case 0x477255:c.instructions+=1;goto B477255;
case 0x477257:goto L477257;
case 0x47725a:c.instructions+=2;goto B47725a;
case 0x47725c:c.instructions+=1;goto B47725c;
case 0x477261:goto L477261;
case 0x477264:c.instructions+=3;goto B477264;
case 0x477267:c.instructions+=2;goto B477267;
case 0x477269:c.instructions+=1;goto B477269;
case 0x47726b:goto L47726b;
case 0x477270:goto L477270;
case 0x477273:c.instructions+=2;goto B477273;
case 0x477277:c.instructions+=1;goto B477277;
case 0x477279:goto L477279;
case 0x47727f:c.instructions+=5;goto B47727f;
case 0x477282:c.instructions+=4;goto B477282;
case 0x477285:c.instructions+=3;goto B477285;
case 0x477286:c.instructions+=2;goto B477286;
case 0x477288:c.instructions+=1;goto B477288;
case 0x47728a:goto L47728a;
case 0x47728c:c.instructions+=1;goto B47728c;
case 0x47728e:goto L47728e;
case 0x477290:goto L477290;
case 0x477292:c.instructions+=1;goto B477292;
case 0x477294:goto L477294;
case 0x477296:c.instructions+=1;goto B477296;
case 0x477298:goto L477298;
case 0x47729b:c.instructions+=1;goto B47729b;
case 0x47729d:goto L47729d;
case 0x4772a0:c.instructions+=1;goto B4772a0;
case 0x4772a2:goto L4772a2;
case 0x4772a5:c.instructions+=1;goto B4772a5;
case 0x4772a8:goto L4772a8;
case 0x4772ab:c.instructions+=2;goto B4772ab;
case 0x4772ae:c.instructions+=1;goto B4772ae;
case 0x4772b0:goto L4772b0;
case 0x4772b3:c.instructions+=1;goto B4772b3;
case 0x4772b5:goto L4772b5;
case 0x4772b8:c.instructions+=1;goto B4772b8;
case 0x4772bb:goto L4772bb;
case 0x4772be:c.instructions+=1;goto B4772be;
case 0x4772c0:goto L4772c0;
case 0x4772c3:c.instructions+=2;goto B4772c3;
case 0x4772c5:c.instructions+=1;goto B4772c5;
case 0x4772c7:goto L4772c7;
case 0x4772ca:goto L4772ca;
case 0x4772cd:goto L4772cd;
case 0x4772d4:c.instructions+=7;goto B4772d4;
case 0x4772d7:c.instructions+=6;goto B4772d7;
case 0x4772da:c.instructions+=5;goto B4772da;
case 0x4772dd:c.instructions+=4;goto B4772dd;
case 0x4772e0:c.instructions+=3;goto B4772e0;
case 0x4772e3:c.instructions+=2;goto B4772e3;
case 0x4772e5:c.instructions+=1;goto B4772e5;
case 0x4772e7:goto L4772e7;
case 0x4772e9:c.instructions+=1;goto B4772e9;
case 0x4772ee:goto L4772ee;
case 0x4772f1:c.instructions+=3;goto B4772f1;
case 0x4772f4:c.instructions+=2;goto B4772f4;
case 0x4772f6:c.instructions+=1;goto B4772f6;
case 0x4772f8:goto L4772f8;
case 0x4772fa:c.instructions+=3;goto B4772fa;
case 0x4772fd:c.instructions+=2;goto B4772fd;
case 0x4772ff:c.instructions+=1;goto B4772ff;
case 0x477304:goto L477304;
case 0x477307:c.instructions+=5;goto B477307;
case 0x47730d:c.instructions+=4;goto B47730d;
case 0x47730f:c.instructions+=3;goto B47730f;
case 0x477312:c.instructions+=2;goto B477312;
case 0x477314:c.instructions+=1;goto B477314;
case 0x47731a:goto L47731a;
case 0x47731d:c.instructions+=5;goto B47731d;
case 0x47731f:c.instructions+=4;goto B47731f;
case 0x477322:c.instructions+=3;goto B477322;
case 0x477325:c.instructions+=2;goto B477325;
case 0x477328:c.instructions+=1;goto B477328;
case 0x47732a:goto L47732a;
case 0x47732d:goto L47732d;
case 0x477330:c.instructions+=2;goto B477330;
case 0x477332:c.instructions+=1;goto B477332;
case 0x477334:goto L477334;
case 0x47733b:goto L47733b;
case 0x47733c:c.instructions+=4;goto B47733c;
case 0x47733d:c.instructions+=3;goto B47733d;
case 0x47733e:c.instructions+=2;goto B47733e;
case 0x47733f:c.instructions+=1;goto B47733f;
case 0x477340:goto L477340;
case 0x477343:c.instructions+=2;goto B477343;
case 0x477346:c.instructions+=1;goto B477346;
case 0x477348:goto L477348;
case 0x47734a:c.instructions+=2;goto B47734a;
case 0x47734f:c.instructions+=1;goto B47734f;
case 0x477351:goto L477351;
case 0x477352:c.instructions+=2;goto B477352;
case 0x477355:c.instructions+=1;goto B477355;
case 0x477356:goto L477356;
case 0x477358:goto L477358;
case 0x47735b:c.instructions+=1;goto B47735b;
case 0x47735d:goto L47735d;
case 0x477360:c.instructions+=4;goto B477360;
case 0x477362:c.instructions+=3;goto B477362;
case 0x477365:c.instructions+=2;goto B477365;
case 0x477368:c.instructions+=1;goto B477368;
case 0x47736a:goto L47736a;
case 0x47736d:c.instructions+=1;goto B47736d;
case 0x477370:goto L477370;
case 0x477373:c.instructions+=5;goto B477373;
case 0x477376:c.instructions+=4;goto B477376;
case 0x477377:c.instructions+=3;goto B477377;
case 0x477378:c.instructions+=2;goto B477378;
case 0x477379:c.instructions+=1;goto B477379;
case 0x47737e:goto L47737e;
case 0x477381:c.instructions+=11;goto B477381;
case 0x477387:c.instructions+=10;goto B477387;
case 0x47738e:c.instructions+=9;goto B47738e;
case 0x477391:c.instructions+=8;goto B477391;
case 0x477394:c.instructions+=7;goto B477394;
case 0x477397:c.instructions+=6;goto B477397;
case 0x47739a:c.instructions+=5;goto B47739a;
case 0x47739d:c.instructions+=4;goto B47739d;
case 0x47739f:c.instructions+=3;goto B47739f;
case 0x4773a2:c.instructions+=2;goto B4773a2;
case 0x4773a5:c.instructions+=1;goto B4773a5;
case 0x4773a7:goto L4773a7;
case 0x4773aa:c.instructions+=4;goto B4773aa;
case 0x4773ac:c.instructions+=3;goto B4773ac;
case 0x4773af:c.instructions+=2;goto B4773af;
case 0x4773b2:c.instructions+=1;goto B4773b2;
case 0x4773b4:goto L4773b4;
case 0x4773b6:c.instructions+=1;goto B4773b6;
case 0x4773b7:goto L4773b7;
case 0x4773ba:c.instructions+=3;goto B4773ba;
case 0x4773bc:c.instructions+=2;goto B4773bc;
case 0x4773c0:c.instructions+=1;goto B4773c0;
case 0x4773c2:goto L4773c2;
case 0x4773c5:c.instructions+=1;goto B4773c5;
case 0x4773c7:goto L4773c7;
case 0x4773ca:c.instructions+=2;goto B4773ca;
case 0x4773cb:c.instructions+=1;goto B4773cb;
case 0x4773d0:goto L4773d0;
case 0x4773d3:c.instructions+=2;goto B4773d3;
case 0x4773d5:c.instructions+=1;goto B4773d5;
case 0x4773d7:goto L4773d7;
case 0x4773d8:c.instructions+=6;goto B4773d8;
case 0x4773df:c.instructions+=5;goto B4773df;
case 0x4773e6:c.instructions+=4;goto B4773e6;
case 0x4773e7:c.instructions+=3;goto B4773e7;
case 0x4773e8:c.instructions+=2;goto B4773e8;
case 0x4773e9:c.instructions+=1;goto B4773e9;
case 0x4773ea:goto L4773ea;
case 0x4773ef:c.instructions+=2;goto B4773ef;
case 0x4773f1:c.instructions+=1;goto B4773f1;
case 0x4773f3:goto L4773f3;
case 0x4773f8:c.instructions+=2;goto B4773f8;
case 0x4773fa:c.instructions+=1;goto B4773fa;
case 0x4773fc:goto L4773fc;
case 0x477403:c.instructions+=1;goto B477403;
case 0x477405:goto L477405;
case 0x47740c:goto L47740c;
case 0x477413:c.instructions+=3;goto B477413;
case 0x477419:c.instructions+=2;goto B477419;
case 0x47741b:c.instructions+=1;goto B47741b;
case 0x477421:goto L477421;
case 0x477424:c.instructions+=2;goto B477424;
case 0x477428:c.instructions+=1;goto B477428;
case 0x47742a:goto L47742a;
case 0x477430:c.instructions+=4;goto B477430;
case 0x477436:c.instructions+=3;goto B477436;
case 0x477439:c.instructions+=2;goto B477439;
case 0x47743b:c.instructions+=1;goto B47743b;
case 0x47743d:goto L47743d;
case 0x47743f:c.instructions+=2;goto B47743f;
case 0x477445:c.instructions+=1;goto B477445;
case 0x477447:goto L477447;
case 0x47744d:goto L47744d;
case 0x477453:c.instructions+=6;goto B477453;
case 0x477459:c.instructions+=5;goto B477459;
case 0x47745c:c.instructions+=4;goto B47745c;
case 0x47745d:c.instructions+=3;goto B47745d;
case 0x47745e:c.instructions+=2;goto B47745e;
case 0x47745f:c.instructions+=1;goto B47745f;
case 0x477464:goto L477464;
case 0x47746a:c.instructions+=7;goto B47746a;
case 0x477470:c.instructions+=6;goto B477470;
case 0x477471:c.instructions+=5;goto B477471;
case 0x477473:c.instructions+=4;goto B477473;
case 0x477475:c.instructions+=3;goto B477475;
case 0x477477:c.instructions+=2;goto B477477;
case 0x47747d:c.instructions+=1;goto B47747d;
case 0x477482:goto L477482;
case 0x477485:c.instructions+=5;goto B477485;
case 0x477486:c.instructions+=4;goto B477486;
case 0x477487:c.instructions+=3;goto B477487;
case 0x477488:c.instructions+=2;goto B477488;
case 0x477489:c.instructions+=1;goto B477489;
case 0x47748a:goto L47748a;
case 0x47748c:c.instructions+=1;goto B47748c;
case 0x47748e:goto L47748e;
case 0x477490:c.instructions+=5;goto B477490;
case 0x477491:c.instructions+=4;goto B477491;
case 0x477493:c.instructions+=3;goto B477493;
case 0x477496:c.instructions+=2;goto B477496;
case 0x47749c:c.instructions+=1;goto B47749c;
case 0x47749e:goto L47749e;
case 0x4774a4:goto L4774a4;
case 0x4774a5:c.instructions+=11;goto B4774a5;
case 0x4774ac:c.instructions+=10;goto B4774ac;
case 0x4774b2:c.instructions+=9;goto B4774b2;
case 0x4774b5:c.instructions+=8;goto B4774b5;
case 0x4774bb:c.instructions+=7;goto B4774bb;
case 0x4774bc:c.instructions+=6;goto B4774bc;
case 0x4774bd:c.instructions+=5;goto B4774bd;
case 0x4774c3:c.instructions+=4;goto B4774c3;
case 0x4774c4:c.instructions+=3;goto B4774c4;
case 0x4774c5:c.instructions+=2;goto B4774c5;
case 0x4774c6:c.instructions+=1;goto B4774c6;
case 0x4774cb:goto L4774cb;
case 0x4774ce:c.instructions+=3;goto B4774ce;
case 0x4774d0:c.instructions+=2;goto B4774d0;
case 0x4774d6:c.instructions+=1;goto B4774d6;
case 0x4774dc:goto L4774dc;
case 0x4774dd:c.instructions+=6;goto B4774dd;
case 0x4774de:c.instructions+=5;goto B4774de;
case 0x4774df:c.instructions+=4;goto B4774df;
case 0x4774e0:c.instructions+=3;goto B4774e0;
case 0x4774e8:c.instructions+=2;goto B4774e8;
case 0x4774ec:c.instructions+=1;goto B4774ec;
case 0x477500:goto L477500;
case 0x477504:c.instructions+=19;goto B477504;
case 0x477505:c.instructions+=18;goto B477505;
case 0x477509:c.instructions+=17;goto B477509;
case 0x47750a:c.instructions+=16;goto B47750a;
case 0x47750e:c.instructions+=15;goto B47750e;
case 0x477510:c.instructions+=14;goto B477510;
case 0x477516:c.instructions+=13;goto B477516;
case 0x477517:c.instructions+=12;goto B477517;
case 0x47751b:c.instructions+=11;goto B47751b;
case 0x47751c:c.instructions+=10;goto B47751c;
case 0x47751f:c.instructions+=9;goto B47751f;
case 0x477522:c.instructions+=8;goto B477522;
case 0x477525:c.instructions+=7;goto B477525;
case 0x477528:c.instructions+=6;goto B477528;
case 0x47752a:c.instructions+=5;goto B47752a;
case 0x47752c:c.instructions+=4;goto B47752c;
case 0x47752e:c.instructions+=3;goto B47752e;
case 0x477534:c.instructions+=2;goto B477534;
case 0x477538:c.instructions+=1;goto B477538;
case 0x47753e:goto L47753e;
case 0x477541:c.instructions+=1;goto B477541;
case 0x477547:goto L477547;
case 0x47754d:c.instructions+=1;goto B47754d;
case 0x477553:goto L477553;
case 0x477556:c.instructions+=1;goto B477556;
case 0x47755c:goto L47755c;
case 0x47755f:c.instructions+=1;goto B47755f;
case 0x477565:goto L477565;
case 0x477568:c.instructions+=1;goto B477568;
case 0x47756e:goto L47756e;
case 0x477570:c.instructions+=1;goto B477570;
case 0x477576:goto L477576;
case 0x47757a:c.instructions+=3;goto B47757a;
case 0x47757d:c.instructions+=2;goto B47757d;
case 0x477583:c.instructions+=1;goto B477583;
case 0x477588:goto L477588;
case 0x47758c:c.instructions+=38;goto B47758c;
case 0x477590:c.instructions+=37;goto B477590;
case 0x477593:c.instructions+=36;goto B477593;
case 0x477597:c.instructions+=35;goto B477597;
case 0x47759d:c.instructions+=34;goto B47759d;
case 0x47759f:c.instructions+=33;goto B47759f;
case 0x4775a2:c.instructions+=32;goto B4775a2;
case 0x4775a5:c.instructions+=31;goto B4775a5;
case 0x4775a7:c.instructions+=30;goto B4775a7;
case 0x4775aa:c.instructions+=29;goto B4775aa;
case 0x4775ac:c.instructions+=28;goto B4775ac;
case 0x4775af:c.instructions+=27;goto B4775af;
case 0x4775b2:c.instructions+=26;goto B4775b2;
case 0x4775b5:c.instructions+=25;goto B4775b5;
case 0x4775b9:c.instructions+=24;goto B4775b9;
case 0x4775bb:c.instructions+=23;goto B4775bb;
case 0x4775be:c.instructions+=22;goto B4775be;
case 0x4775c1:c.instructions+=21;goto B4775c1;
case 0x4775c4:c.instructions+=20;goto B4775c4;
case 0x4775c7:c.instructions+=19;goto B4775c7;
case 0x4775ca:c.instructions+=18;goto B4775ca;
case 0x4775cd:c.instructions+=17;goto B4775cd;
case 0x4775cf:c.instructions+=16;goto B4775cf;
case 0x4775d4:c.instructions+=15;goto B4775d4;
case 0x4775d5:c.instructions+=14;goto B4775d5;
case 0x4775d8:c.instructions+=13;goto B4775d8;
case 0x4775db:c.instructions+=12;goto B4775db;
case 0x4775de:c.instructions+=11;goto B4775de;
case 0x4775e1:c.instructions+=10;goto B4775e1;
case 0x4775e8:c.instructions+=9;goto B4775e8;
case 0x4775ef:c.instructions+=8;goto B4775ef;
case 0x4775f2:c.instructions+=7;goto B4775f2;
case 0x4775f5:c.instructions+=6;goto B4775f5;
case 0x4775f8:c.instructions+=5;goto B4775f8;
case 0x4775fb:c.instructions+=4;goto B4775fb;
case 0x4775fe:c.instructions+=3;goto B4775fe;
case 0x477601:c.instructions+=2;goto B477601;
case 0x477604:c.instructions+=1;goto B477604;
case 0x477609:goto L477609;
case 0x47760c:c.instructions+=3;goto B47760c;
case 0x477612:c.instructions+=2;goto B477612;
case 0x477618:c.instructions+=1;goto B477618;
case 0x47761a:goto L47761a;
case 0x477624:c.instructions+=1;goto B477624;
case 0x477626:goto L477626;
case 0x47762b:c.instructions+=2;goto B47762b;
case 0x47762d:c.instructions+=1;goto B47762d;
case 0x47762f:goto L47762f;
case 0x477639:c.instructions+=1;goto B477639;
case 0x47763b:goto L47763b;
case 0x477641:c.instructions+=1;goto B477641;
case 0x477643:goto L477643;
case 0x47764d:c.instructions+=1;goto B47764d;
case 0x47764f:goto L47764f;
case 0x477655:c.instructions+=1;goto B477655;
case 0x477657:goto L477657;
case 0x477661:c.instructions+=1;goto B477661;
case 0x477663:goto L477663;
case 0x477669:goto L477669;
case 0x47766b:c.instructions+=2;goto B47766b;
case 0x47766d:c.instructions+=1;goto B47766d;
case 0x47766f:goto L47766f;
case 0x477671:goto L477671;
case 0x477674:c.instructions+=10;goto B477674;
case 0x477676:c.instructions+=9;goto B477676;
case 0x477678:c.instructions+=8;goto B477678;
case 0x47767b:c.instructions+=7;goto B47767b;
case 0x47767e:c.instructions+=6;goto B47767e;
case 0x477685:c.instructions+=5;goto B477685;
case 0x477686:c.instructions+=4;goto B477686;
case 0x47768c:c.instructions+=3;goto B47768c;
case 0x47768e:c.instructions+=2;goto B47768e;
case 0x477691:c.instructions+=1;goto B477691;
case 0x477693:goto L477693;
case 0x477697:c.instructions+=5;goto B477697;
case 0x47769a:c.instructions+=4;goto B47769a;
case 0x4776a1:c.instructions+=3;goto B4776a1;
case 0x4776a5:c.instructions+=2;goto B4776a5;
case 0x4776a7:c.instructions+=1;goto B4776a7;
case 0x4776a9:goto L4776a9;
case 0x4776ab:c.instructions+=1;goto B4776ab;
case 0x4776b0:goto L4776b0;
case 0x4776b3:c.instructions+=7;goto B4776b3;
case 0x4776b5:c.instructions+=6;goto B4776b5;
case 0x4776b8:c.instructions+=5;goto B4776b8;
case 0x4776b9:c.instructions+=4;goto B4776b9;
case 0x4776bb:c.instructions+=3;goto B4776bb;
case 0x4776be:c.instructions+=2;goto B4776be;
case 0x4776c5:c.instructions+=1;goto B4776c5;
case 0x4776c7:goto L4776c7;
case 0x4776cb:c.instructions+=3;goto B4776cb;
case 0x4776cd:c.instructions+=2;goto B4776cd;
case 0x4776cf:c.instructions+=1;goto B4776cf;
case 0x4776d1:goto L4776d1;
case 0x4776d3:goto L4776d3;
case 0x4776d6:c.instructions+=8;goto B4776d6;
case 0x4776d8:c.instructions+=7;goto B4776d8;
case 0x4776d9:c.instructions+=6;goto B4776d9;
case 0x4776dc:c.instructions+=5;goto B4776dc;
case 0x4776de:c.instructions+=4;goto B4776de;
case 0x4776e0:c.instructions+=3;goto B4776e0;
case 0x4776e3:c.instructions+=2;goto B4776e3;
case 0x4776e6:c.instructions+=1;goto B4776e6;
case 0x4776e8:goto L4776e8;
case 0x4776eb:c.instructions+=2;goto B4776eb;
case 0x4776ec:c.instructions+=1;goto B4776ec;
case 0x4776f1:goto L4776f1;
case 0x4776f4:c.instructions+=6;goto B4776f4;
case 0x4776f7:c.instructions+=5;goto B4776f7;
case 0x4776f8:c.instructions+=4;goto B4776f8;
case 0x4776f9:c.instructions+=3;goto B4776f9;
case 0x4776fa:c.instructions+=2;goto B4776fa;
case 0x4776fb:c.instructions+=1;goto B4776fb;
case 0x4776fc:goto L4776fc;
case 0x4776fd:c.instructions+=5;goto B4776fd;
case 0x4776fe:c.instructions+=4;goto B4776fe;
case 0x4776ff:c.instructions+=3;goto B4776ff;
case 0x477701:c.instructions+=2;goto B477701;
case 0x477702:c.instructions+=1;goto B477702;
case 0x477710:goto L477710;
case 0x477711:c.instructions+=3;goto B477711;
case 0x477715:c.instructions+=2;goto B477715;
case 0x477717:c.instructions+=1;goto B477717;
case 0x477719:goto L477719;
case 0x47771b:c.instructions+=2;goto B47771b;
case 0x477721:c.instructions+=1;goto B477721;
case 0x477723:goto L477723;
case 0x477727:c.instructions+=14;goto B477727;
case 0x477729:c.instructions+=13;goto B477729;
case 0x47772a:c.instructions+=12;goto B47772a;
case 0x47772d:c.instructions+=11;goto B47772d;
case 0x477730:c.instructions+=10;goto B477730;
case 0x477733:c.instructions+=9;goto B477733;
case 0x477735:c.instructions+=8;goto B477735;
case 0x477738:c.instructions+=7;goto B477738;
case 0x47773a:c.instructions+=6;goto B47773a;
case 0x47773c:c.instructions+=5;goto B47773c;
case 0x47773e:c.instructions+=4;goto B47773e;
case 0x477741:c.instructions+=3;goto B477741;
case 0x477742:c.instructions+=2;goto B477742;
case 0x477744:c.instructions+=1;goto B477744;
case 0x477746:goto L477746;
case 0x477747:c.instructions+=2;goto B477747;
case 0x477748:c.instructions+=1;goto B477748;
case 0x47774d:goto L47774d;
case 0x477750:goto L477750;
case 0x477751:c.instructions+=1;goto B477751;
case 0x477760:goto L477760;
case 0x477764:c.instructions+=2;goto B477764;
case 0x477766:c.instructions+=1;goto B477766;
case 0x47776c:goto L47776c;
case 0x47776d:c.instructions+=3;goto B47776d;
case 0x47776f:c.instructions+=2;goto B47776f;
case 0x477775:c.instructions+=1;goto B477775;
case 0x477777:goto L477777;
case 0x47777b:c.instructions+=2;goto B47777b;
case 0x47777e:c.instructions+=1;goto B47777e;
case 0x477780:goto L477780;
case 0x477783:c.instructions+=3;goto B477783;
case 0x477786:c.instructions+=2;goto B477786;
case 0x477788:c.instructions+=1;goto B477788;
case 0x47778a:goto L47778a;
case 0x47778d:c.instructions+=1;goto B47778d;
case 0x47778f:goto L47778f;
case 0x477792:c.instructions+=5;goto B477792;
case 0x477793:c.instructions+=4;goto B477793;
case 0x477794:c.instructions+=3;goto B477794;
case 0x477795:c.instructions+=2;goto B477795;
case 0x47779b:c.instructions+=1;goto B47779b;
case 0x4777a0:goto L4777a0;
case 0x4777a3:c.instructions+=3;goto B4777a3;
case 0x4777a6:c.instructions+=2;goto B4777a6;
case 0x4777a8:c.instructions+=1;goto B4777a8;
case 0x4777ad:goto L4777ad;
case 0x4777b0:c.instructions+=2;goto B4777b0;
case 0x4777b3:c.instructions+=1;goto B4777b3;
case 0x4777b5:goto L4777b5;
case 0x4777bc:goto L4777bc;
case 0x4777be:c.instructions+=1;goto B4777be;
case 0x4777c3:goto L4777c3;
case 0x4777c4:c.instructions+=3;goto B4777c4;
case 0x4777c7:c.instructions+=2;goto B4777c7;
case 0x4777c8:c.instructions+=1;goto B4777c8;
case 0x4777ca:goto L4777ca;
case 0x4777cd:c.instructions+=2;goto B4777cd;
case 0x4777cf:c.instructions+=1;goto B4777cf;
case 0x4777d1:goto L4777d1;
case 0x4777d4:c.instructions+=3;goto B4777d4;
case 0x4777d5:c.instructions+=2;goto B4777d5;
case 0x4777d6:c.instructions+=1;goto B4777d6;
case 0x4777db:goto L4777db;
case 0x4777de:c.instructions+=2;goto B4777de;
case 0x4777df:c.instructions+=1;goto B4777df;
case 0x4777e0:goto L4777e0;
case 0x4777e3:c.instructions+=3;goto B4777e3;
case 0x4777e4:c.instructions+=2;goto B4777e4;
case 0x4777e5:c.instructions+=1;goto B4777e5;
case 0x4777ea:goto L4777ea;
case 0x4777ed:goto L4777ed;
case 0x4777ee:goto L4777ee;
case 0x4777f0:goto L4777f0;
case 0x4777f4:c.instructions+=3;goto B4777f4;
case 0x4777f8:c.instructions+=2;goto B4777f8;
case 0x4777f9:c.instructions+=1;goto B4777f9;
case 0x4777fe:goto L4777fe;
case 0x477800:goto L477800;
case 0x477801:c.instructions+=7;goto B477801;
case 0x477803:c.instructions+=6;goto B477803;
case 0x477805:c.instructions+=5;goto B477805;
case 0x47780b:c.instructions+=4;goto B47780b;
case 0x477812:c.instructions+=3;goto B477812;
case 0x477819:c.instructions+=2;goto B477819;
case 0x477820:c.instructions+=1;goto B477820;
case 0x477825:goto L477825;
case 0x477829:c.instructions+=7;goto B477829;
case 0x47782b:c.instructions+=6;goto B47782b;
case 0x47782e:c.instructions+=5;goto B47782e;
case 0x477830:c.instructions+=4;goto B477830;
case 0x477833:c.instructions+=3;goto B477833;
case 0x477836:c.instructions+=2;goto B477836;
case 0x477839:c.instructions+=1;goto B477839;
case 0x47783b:goto L47783b;
case 0x47783f:c.instructions+=11;goto B47783f;
case 0x477840:c.instructions+=10;goto B477840;
case 0x477841:c.instructions+=9;goto B477841;
case 0x477844:c.instructions+=8;goto B477844;
case 0x477847:c.instructions+=7;goto B477847;
case 0x477848:c.instructions+=6;goto B477848;
case 0x477849:c.instructions+=5;goto B477849;
case 0x47784b:c.instructions+=4;goto B47784b;
case 0x477850:c.instructions+=3;goto B477850;
case 0x477853:c.instructions+=2;goto B477853;
case 0x477856:c.instructions+=1;goto B477856;
case 0x47785b:goto L47785b;
case 0x47785e:c.instructions+=2;goto B47785e;
case 0x477861:c.instructions+=1;goto B477861;
case 0x477862:goto L477862;
case 0x477864:c.instructions+=2;goto B477864;
case 0x477865:c.instructions+=1;goto B477865;
case 0x477870:goto L477870;
case 0x477871:c.instructions+=5;goto B477871;
case 0x477873:c.instructions+=4;goto B477873;
case 0x477876:c.instructions+=3;goto B477876;
case 0x477878:c.instructions+=2;goto B477878;
case 0x47787e:c.instructions+=1;goto B47787e;
case 0x477880:goto L477880;
case 0x477885:goto L477885;
case 0x477888:c.instructions+=2;goto B477888;
case 0x477889:c.instructions+=1;goto B477889;
case 0x47788e:goto L47788e;
case 0x477891:c.instructions+=1;goto B477891;
case 0x477896:goto L477896;
case 0x47789d:goto L47789d;
case 0x4778a0:c.instructions+=2;goto B4778a0;
case 0x4778a1:c.instructions+=1;goto B4778a1;
case 0x4778a6:goto L4778a6;
case 0x4778a9:c.instructions+=3;goto B4778a9;
case 0x4778af:c.instructions+=2;goto B4778af;
case 0x4778b0:c.instructions+=1;goto B4778b0;
case 0x4778c0:goto L4778c0;
case 0x4778c6:c.instructions+=5;goto B4778c6;
case 0x4778c7:c.instructions+=4;goto B4778c7;
case 0x4778c9:c.instructions+=3;goto B4778c9;
case 0x4778cc:c.instructions+=2;goto B4778cc;
case 0x4778ce:c.instructions+=1;goto B4778ce;
case 0x4778d4:goto L4778d4;
case 0x4778d7:c.instructions+=2;goto B4778d7;
case 0x4778d9:c.instructions+=1;goto B4778d9;
case 0x4778df:goto L4778df;
case 0x4778e2:c.instructions+=2;goto B4778e2;
case 0x4778e4:c.instructions+=1;goto B4778e4;
case 0x4778e6:goto L4778e6;
case 0x4778eb:goto L4778eb;
case 0x4778ee:c.instructions+=2;goto B4778ee;
case 0x4778ef:c.instructions+=1;goto B4778ef;
case 0x4778f4:goto L4778f4;
case 0x4778f7:c.instructions+=1;goto B4778f7;
case 0x4778fc:goto L4778fc;
case 0x477903:goto L477903;
case 0x47790a:c.instructions+=3;goto B47790a;
case 0x47790b:c.instructions+=2;goto B47790b;
case 0x47790e:c.instructions+=1;goto B47790e;
case 0x477913:goto L477913;
case 0x477916:c.instructions+=8;goto B477916;
case 0x477919:c.instructions+=7;goto B477919;
case 0x47791a:c.instructions+=6;goto B47791a;
case 0x47791d:c.instructions+=5;goto B47791d;
case 0x477920:c.instructions+=4;goto B477920;
case 0x477923:c.instructions+=3;goto B477923;
case 0x47792a:c.instructions+=2;goto B47792a;
case 0x47792d:c.instructions+=1;goto B47792d;
case 0x477932:goto L477932;
case 0x477935:c.instructions+=8;goto B477935;
case 0x477938:c.instructions+=7;goto B477938;
case 0x47793c:c.instructions+=6;goto B47793c;
case 0x477940:c.instructions+=5;goto B477940;
case 0x477941:c.instructions+=4;goto B477941;
case 0x477946:c.instructions+=3;goto B477946;
case 0x47794b:c.instructions+=2;goto B47794b;
case 0x477950:c.instructions+=1;goto B477950;
case 0x477955:goto L477955;
case 0x477959:c.instructions+=3;goto B477959;
case 0x47795a:c.instructions+=2;goto B47795a;
case 0x477961:c.instructions+=1;goto B477961;
case 0x477966:goto L477966;
case 0x47796b:c.instructions+=1;goto B47796b;
case 0x477970:goto L477970;
case 0x477974:c.instructions+=8;goto B477974;
case 0x477975:c.instructions+=7;goto B477975;
case 0x477978:c.instructions+=6;goto B477978;
case 0x47797c:c.instructions+=5;goto B47797c;
case 0x47797d:c.instructions+=4;goto B47797d;
case 0x477981:c.instructions+=3;goto B477981;
case 0x477982:c.instructions+=2;goto B477982;
case 0x477983:c.instructions+=1;goto B477983;
case 0x477988:goto L477988;
case 0x47798b:c.instructions+=3;goto B47798b;
case 0x47798d:c.instructions+=2;goto B47798d;
case 0x477990:c.instructions+=1;goto B477990;
case 0x477992:goto L477992;
case 0x477995:c.instructions+=6;goto B477995;
case 0x477997:c.instructions+=5;goto B477997;
case 0x477999:c.instructions+=4;goto B477999;
case 0x47799c:c.instructions+=3;goto B47799c;
case 0x47799d:c.instructions+=2;goto B47799d;
case 0x4779a0:c.instructions+=1;goto B4779a0;
case 0x4779a2:goto L4779a2;
case 0x4779a4:goto L4779a4;
case 0x4779a6:c.instructions+=1;goto B4779a6;
case 0x4779a9:goto L4779a9;
case 0x4779ab:goto L4779ab;
case 0x4779ae:c.instructions+=5;goto B4779ae;
case 0x4779b1:c.instructions+=4;goto B4779b1;
case 0x4779b3:c.instructions+=3;goto B4779b3;
case 0x4779b5:c.instructions+=2;goto B4779b5;
case 0x4779b8:c.instructions+=1;goto B4779b8;
case 0x4779ba:goto L4779ba;
case 0x4779bc:goto L4779bc;
case 0x4779be:c.instructions+=1;goto B4779be;
case 0x4779c1:goto L4779c1;
case 0x4779c3:goto L4779c3;
case 0x4779c6:c.instructions+=15;goto B4779c6;
case 0x4779c9:c.instructions+=14;goto B4779c9;
case 0x4779cd:c.instructions+=13;goto B4779cd;
case 0x4779d0:c.instructions+=12;goto B4779d0;
case 0x4779d2:c.instructions+=11;goto B4779d2;
case 0x4779d8:c.instructions+=10;goto B4779d8;
case 0x4779da:c.instructions+=9;goto B4779da;
case 0x4779dd:c.instructions+=8;goto B4779dd;
case 0x4779e0:c.instructions+=7;goto B4779e0;
case 0x4779e4:c.instructions+=6;goto B4779e4;
case 0x4779e8:c.instructions+=5;goto B4779e8;
case 0x4779eb:c.instructions+=4;goto B4779eb;
case 0x4779ec:c.instructions+=3;goto B4779ec;
case 0x4779ed:c.instructions+=2;goto B4779ed;
case 0x4779f1:c.instructions+=1;goto B4779f1;
case 0x4779f6:goto L4779f6;
case 0x4779f9:c.instructions+=6;goto B4779f9;
case 0x4779fc:c.instructions+=5;goto B4779fc;
case 0x477a00:c.instructions+=4;goto B477a00;
case 0x477a01:c.instructions+=3;goto B477a01;
case 0x477a02:c.instructions+=2;goto B477a02;
case 0x477a06:c.instructions+=1;goto B477a06;
case 0x477a0b:goto L477a0b;
case 0x477a0e:c.instructions+=1;goto B477a0e;
case 0x477a0f:goto L477a0f;
case 0x477a14:goto L477a14;
case 0x477a17:c.instructions+=3;goto B477a17;
case 0x477a18:c.instructions+=2;goto B477a18;
case 0x477a1e:c.instructions+=1;goto B477a1e;
case 0x477a21:goto L477a21;
case 0x477a24:c.instructions+=3;goto B477a24;
case 0x477a25:c.instructions+=2;goto B477a25;
case 0x477a2b:c.instructions+=1;goto B477a2b;
case 0x477a30:goto L477a30;
case 0x477a31:c.instructions+=2;goto B477a31;
case 0x477a33:c.instructions+=1;goto B477a33;
case 0x477a38:goto L477a38;
case 0x477a3d:c.instructions+=1;goto B477a3d;
case 0x477a3f:goto L477a3f;
case 0x477a40:c.instructions+=1;goto B477a40;
case 0x477a45:goto L477a45;
case 0x477a48:goto L477a48;
case 0x477a4a:c.instructions+=2;goto B477a4a;
case 0x477a4b:c.instructions+=1;goto B477a4b;
case 0x477a50:goto L477a50;
case 0x477a54:c.instructions+=20;goto B477a54;
case 0x477a57:c.instructions+=19;goto B477a57;
case 0x477a5b:c.instructions+=18;goto B477a5b;
case 0x477a5d:c.instructions+=17;goto B477a5d;
case 0x477a63:c.instructions+=16;goto B477a63;
case 0x477a66:c.instructions+=15;goto B477a66;
case 0x477a6b:c.instructions+=14;goto B477a6b;
case 0x477a71:c.instructions+=13;goto B477a71;
case 0x477a74:c.instructions+=12;goto B477a74;
case 0x477a76:c.instructions+=11;goto B477a76;
case 0x477a7a:c.instructions+=10;goto B477a7a;
case 0x477a7d:c.instructions+=9;goto B477a7d;
case 0x477a80:c.instructions+=8;goto B477a80;
case 0x477a83:c.instructions+=7;goto B477a83;
case 0x477a85:c.instructions+=6;goto B477a85;
case 0x477a88:c.instructions+=5;goto B477a88;
case 0x477a8b:c.instructions+=4;goto B477a8b;
case 0x477a8e:c.instructions+=3;goto B477a8e;
case 0x477a91:c.instructions+=2;goto B477a91;
case 0x477a98:c.instructions+=1;goto B477a98;
case 0x477aa0:goto L477aa0;
case 0x477aa1:c.instructions+=5;goto B477aa1;
case 0x477aa2:c.instructions+=4;goto B477aa2;
case 0x477aa4:c.instructions+=3;goto B477aa4;
case 0x477aa7:c.instructions+=2;goto B477aa7;
case 0x477aa9:c.instructions+=1;goto B477aa9;
case 0x477aaf:goto L477aaf;
case 0x477ab0:c.instructions+=1;goto B477ab0;
case 0x477ab5:goto L477ab5;
case 0x477ab8:c.instructions+=5;goto B477ab8;
case 0x477aba:c.instructions+=4;goto B477aba;
case 0x477abd:c.instructions+=3;goto B477abd;
case 0x477ac0:c.instructions+=2;goto B477ac0;
case 0x477ac2:c.instructions+=1;goto B477ac2;
case 0x477ac8:goto L477ac8;
case 0x477ac9:c.instructions+=3;goto B477ac9;
case 0x477acd:c.instructions+=2;goto B477acd;
case 0x477ace:c.instructions+=1;goto B477ace;
case 0x477ad0:goto L477ad0;
case 0x477ad2:c.instructions+=12;goto B477ad2;
case 0x477ad5:c.instructions+=11;goto B477ad5;
case 0x477ad7:c.instructions+=10;goto B477ad7;
case 0x477ada:c.instructions+=9;goto B477ada;
case 0x477add:c.instructions+=8;goto B477add;
case 0x477ae0:c.instructions+=7;goto B477ae0;
case 0x477ae3:c.instructions+=6;goto B477ae3;
case 0x477ae6:c.instructions+=5;goto B477ae6;
case 0x477ae9:c.instructions+=4;goto B477ae9;
case 0x477aec:c.instructions+=3;goto B477aec;
case 0x477aee:c.instructions+=2;goto B477aee;
case 0x477af3:c.instructions+=1;goto B477af3;
case 0x477af5:goto L477af5;
case 0x477af8:c.instructions+=8;goto B477af8;
case 0x477afb:c.instructions+=7;goto B477afb;
case 0x477afe:c.instructions+=6;goto B477afe;
case 0x477b01:c.instructions+=5;goto B477b01;
case 0x477b03:c.instructions+=4;goto B477b03;
case 0x477b05:c.instructions+=3;goto B477b05;
case 0x477b07:c.instructions+=2;goto B477b07;
case 0x477b0a:c.instructions+=1;goto B477b0a;
case 0x477b0c:goto L477b0c;
case 0x477b0f:c.instructions+=2;goto B477b0f;
case 0x477b12:c.instructions+=1;goto B477b12;
case 0x477b14:goto L477b14;
case 0x477b19:c.instructions+=1;goto B477b19;
case 0x477b1b:goto L477b1b;
case 0x477b21:c.instructions+=1;goto B477b21;
case 0x477b23:goto L477b23;
case 0x477b25:c.instructions+=1;goto B477b25;
case 0x477b27:goto L477b27;
case 0x477b2d:c.instructions+=1;goto B477b2d;
case 0x477b2f:goto L477b2f;
case 0x477b30:c.instructions+=1;goto B477b30;
case 0x477b35:goto L477b35;
case 0x477b38:c.instructions+=1;goto B477b38;
case 0x477b3a:goto L477b3a;
case 0x477b3d:c.instructions+=9;goto B477b3d;
case 0x477b3f:c.instructions+=8;goto B477b3f;
case 0x477b43:c.instructions+=7;goto B477b43;
case 0x477b46:c.instructions+=6;goto B477b46;
case 0x477b48:c.instructions+=5;goto B477b48;
case 0x477b4b:c.instructions+=4;goto B477b4b;
case 0x477b4c:c.instructions+=3;goto B477b4c;
case 0x477b4e:c.instructions+=2;goto B477b4e;
case 0x477b52:c.instructions+=1;goto B477b52;
case 0x477b58:goto L477b58;
case 0x477b59:c.instructions+=1;goto B477b59;
case 0x477b5a:goto L477b5a;
case 0x477b5b:goto L477b5b;
case 0x477b5c:c.instructions+=2;goto B477b5c;
case 0x477b5d:c.instructions+=1;goto B477b5d;
case 0x477b60:goto L477b60;
case 0x477b61:c.instructions+=8;goto B477b61;
case 0x477b63:c.instructions+=7;goto B477b63;
case 0x477b66:c.instructions+=6;goto B477b66;
case 0x477b68:c.instructions+=5;goto B477b68;
case 0x477b6b:c.instructions+=4;goto B477b6b;
case 0x477b6e:c.instructions+=3;goto B477b6e;
case 0x477b71:c.instructions+=2;goto B477b71;
case 0x477b73:c.instructions+=1;goto B477b73;
case 0x477b75:goto L477b75;
case 0x477b7a:c.instructions+=4;goto B477b7a;
case 0x477b7d:c.instructions+=3;goto B477b7d;
case 0x477b7f:c.instructions+=2;goto B477b7f;
case 0x477b80:c.instructions+=1;goto B477b80;
case 0x477b85:goto L477b85;
case 0x477b8b:c.instructions+=6;goto B477b8b;
case 0x477b8e:c.instructions+=5;goto B477b8e;
case 0x477b93:c.instructions+=4;goto B477b93;
case 0x477b95:c.instructions+=3;goto B477b95;
case 0x477b98:c.instructions+=2;goto B477b98;
case 0x477b99:c.instructions+=1;goto B477b99;
case 0x477b9c:goto L477b9c;
case 0x477b9f:c.instructions+=4;goto B477b9f;
case 0x477ba2:c.instructions+=3;goto B477ba2;
case 0x477ba7:c.instructions+=2;goto B477ba7;
case 0x477ba8:c.instructions+=1;goto B477ba8;
case 0x477bad:goto L477bad;
case 0x477bb3:c.instructions+=6;goto B477bb3;
case 0x477bb8:c.instructions+=5;goto B477bb8;
case 0x477bba:c.instructions+=4;goto B477bba;
case 0x477bbd:c.instructions+=3;goto B477bbd;
case 0x477bc0:c.instructions+=2;goto B477bc0;
case 0x477bc1:c.instructions+=1;goto B477bc1;
case 0x477bd0:goto L477bd0;
case 0x477bd1:c.instructions+=11;goto B477bd1;
case 0x477bd3:c.instructions+=10;goto B477bd3;
case 0x477bd6:c.instructions+=9;goto B477bd6;
case 0x477bd9:c.instructions+=8;goto B477bd9;
case 0x477bde:c.instructions+=7;goto B477bde;
case 0x477be0:c.instructions+=6;goto B477be0;
case 0x477be4:c.instructions+=5;goto B477be4;
case 0x477be7:c.instructions+=4;goto B477be7;
case 0x477bec:c.instructions+=3;goto B477bec;
case 0x477bee:c.instructions+=2;goto B477bee;
case 0x477bef:c.instructions+=1;goto B477bef;
case 0x477bf4:goto L477bf4;
case 0x477bf7:c.instructions+=9;goto B477bf7;
case 0x477bfa:c.instructions+=8;goto B477bfa;
case 0x477bfc:c.instructions+=7;goto B477bfc;
case 0x477bff:c.instructions+=6;goto B477bff;
case 0x477c05:c.instructions+=5;goto B477c05;
case 0x477c08:c.instructions+=4;goto B477c08;
case 0x477c0e:c.instructions+=3;goto B477c0e;
case 0x477c11:c.instructions+=2;goto B477c11;
case 0x477c13:c.instructions+=1;goto B477c13;
case 0x477c15:goto L477c15;
case 0x477c16:c.instructions+=1;goto B477c16;
case 0x477c1b:goto L477c1b;
case 0x477c1e:goto L477c1e;
case 0x477c21:c.instructions+=5;goto B477c21;
case 0x477c24:c.instructions+=4;goto B477c24;
case 0x477c27:c.instructions+=3;goto B477c27;
case 0x477c2a:c.instructions+=2;goto B477c2a;
case 0x477c2b:c.instructions+=1;goto B477c2b;
case 0x477c30:goto L477c30;
case 0x477c31:c.instructions+=5;goto B477c31;
case 0x477c33:c.instructions+=4;goto B477c33;
case 0x477c36:c.instructions+=3;goto B477c36;
case 0x477c38:c.instructions+=2;goto B477c38;
case 0x477c3a:c.instructions+=1;goto B477c3a;
case 0x477c3c:goto L477c3c;
case 0x477c3e:c.instructions+=1;goto B477c3e;
case 0x477c40:goto L477c40;
case 0x477c45:c.instructions+=1;goto B477c45;
case 0x477c47:goto L477c47;
case 0x477c4c:goto L477c4c;
case 0x477c4f:c.instructions+=4;goto B477c4f;
case 0x477c51:c.instructions+=3;goto B477c51;
case 0x477c52:c.instructions+=2;goto B477c52;
case 0x477c53:c.instructions+=1;goto B477c53;
case 0x477c58:goto L477c58;
case 0x477c59:c.instructions+=2;goto B477c59;
case 0x477c5c:c.instructions+=1;goto B477c5c;
case 0x477c61:goto L477c61;
case 0x477c64:c.instructions+=3;goto B477c64;
case 0x477c67:c.instructions+=2;goto B477c67;
case 0x477c68:c.instructions+=1;goto B477c68;
case 0x477c70:goto L477c70;
case 0x477c74:c.instructions+=16;goto B477c74;
case 0x477c75:c.instructions+=15;goto B477c75;
case 0x477c76:c.instructions+=14;goto B477c76;
case 0x477c78:c.instructions+=13;goto B477c78;
case 0x477c7b:c.instructions+=12;goto B477c7b;
case 0x477c7f:c.instructions+=11;goto B477c7f;
case 0x477c82:c.instructions+=10;goto B477c82;
case 0x477c85:c.instructions+=9;goto B477c85;
case 0x477c87:c.instructions+=8;goto B477c87;
case 0x477c8a:c.instructions+=7;goto B477c8a;
case 0x477c90:c.instructions+=6;goto B477c90;
case 0x477c91:c.instructions+=5;goto B477c91;
case 0x477c94:c.instructions+=4;goto B477c94;
case 0x477c95:c.instructions+=3;goto B477c95;
case 0x477c98:c.instructions+=2;goto B477c98;
case 0x477c9a:c.instructions+=1;goto B477c9a;
case 0x477c9f:goto L477c9f;
case 0x477ca5:c.instructions+=3;goto B477ca5;
case 0x477ca8:c.instructions+=2;goto B477ca8;
case 0x477caa:c.instructions+=1;goto B477caa;
case 0x477cac:goto L477cac;
case 0x477cb2:c.instructions+=5;goto B477cb2;
case 0x477cb5:c.instructions+=4;goto B477cb5;
case 0x477cbb:c.instructions+=3;goto B477cbb;
case 0x477cbc:c.instructions+=2;goto B477cbc;
case 0x477cbd:c.instructions+=1;goto B477cbd;
case 0x477cc2:goto L477cc2;
case 0x477cc5:c.instructions+=1;goto B477cc5;
case 0x477cc7:goto L477cc7;
case 0x477cca:c.instructions+=6;goto B477cca;
case 0x477ccd:c.instructions+=5;goto B477ccd;
case 0x477cd4:c.instructions+=4;goto B477cd4;
case 0x477cd7:c.instructions+=3;goto B477cd7;
case 0x477cd9:c.instructions+=2;goto B477cd9;
case 0x477cdb:c.instructions+=1;goto B477cdb;
case 0x477cdd:goto L477cdd;
case 0x477ce0:goto L477ce0;
case 0x477ce3:c.instructions+=8;goto B477ce3;
case 0x477cea:c.instructions+=7;goto B477cea;
case 0x477cf0:c.instructions+=6;goto B477cf0;
case 0x477cf3:c.instructions+=5;goto B477cf3;
case 0x477cf6:c.instructions+=4;goto B477cf6;
case 0x477cf7:c.instructions+=3;goto B477cf7;
case 0x477cfa:c.instructions+=2;goto B477cfa;
case 0x477cfc:c.instructions+=1;goto B477cfc;
case 0x477cfe:goto L477cfe;
case 0x477d00:c.instructions+=1;goto B477d00;
case 0x477d05:goto L477d05;
case 0x477d06:c.instructions+=3;goto B477d06;
case 0x477d07:c.instructions+=2;goto B477d07;
case 0x477d08:c.instructions+=1;goto B477d08;
case 0x477d10:goto L477d10;
case 0x477d11:c.instructions+=10;goto B477d11;
case 0x477d12:c.instructions+=9;goto B477d12;
case 0x477d14:c.instructions+=8;goto B477d14;
case 0x477d1a:c.instructions+=7;goto B477d1a;
case 0x477d20:c.instructions+=6;goto B477d20;
case 0x477d21:c.instructions+=5;goto B477d21;
case 0x477d23:c.instructions+=4;goto B477d23;
case 0x477d24:c.instructions+=3;goto B477d24;
case 0x477d29:c.instructions+=2;goto B477d29;
case 0x477d2b:c.instructions+=1;goto B477d2b;
case 0x477d30:goto L477d30;
case 0x477d34:c.instructions+=9;goto B477d34;
case 0x477d3b:c.instructions+=8;goto B477d3b;
case 0x477d41:c.instructions+=7;goto B477d41;
case 0x477d43:c.instructions+=6;goto B477d43;
case 0x477d46:c.instructions+=5;goto B477d46;
case 0x477d4c:c.instructions+=4;goto B477d4c;
case 0x477d4e:c.instructions+=3;goto B477d4e;
case 0x477d4f:c.instructions+=2;goto B477d4f;
case 0x477d50:c.instructions+=1;goto B477d50;
case 0x477d60:goto L477d60;
case 0x477d61:c.instructions+=5;goto B477d61;
case 0x477d62:c.instructions+=4;goto B477d62;
case 0x477d66:c.instructions+=3;goto B477d66;
case 0x477d68:c.instructions+=2;goto B477d68;
case 0x477d6a:c.instructions+=1;goto B477d6a;
case 0x477d6c:goto L477d6c;
case 0x477d6f:c.instructions+=8;goto B477d6f;
case 0x477d71:c.instructions+=7;goto B477d71;
case 0x477d74:c.instructions+=6;goto B477d74;
case 0x477d77:c.instructions+=5;goto B477d77;
case 0x477d78:c.instructions+=4;goto B477d78;
case 0x477d79:c.instructions+=3;goto B477d79;
case 0x477d7c:c.instructions+=2;goto B477d7c;
case 0x477d7d:c.instructions+=1;goto B477d7d;
case 0x477d80:goto L477d80;
case 0x477d86:c.instructions+=2;goto B477d86;
case 0x477d87:c.instructions+=1;goto B477d87;
case 0x477d8c:goto L477d8c;
case 0x477d8f:c.instructions+=2;goto B477d8f;
case 0x477d91:c.instructions+=1;goto B477d91;
case 0x477d93:goto L477d93;
case 0x477d99:c.instructions+=1;goto B477d99;
case 0x477d9b:goto L477d9b;
case 0x477d9d:goto L477d9d;
case 0x477da0:c.instructions+=11;goto B477da0;
case 0x477da3:c.instructions+=10;goto B477da3;
case 0x477da6:c.instructions+=9;goto B477da6;
case 0x477da9:c.instructions+=8;goto B477da9;
case 0x477dac:c.instructions+=7;goto B477dac;
case 0x477dae:c.instructions+=6;goto B477dae;
case 0x477daf:c.instructions+=5;goto B477daf;
case 0x477db1:c.instructions+=4;goto B477db1;
case 0x477db2:c.instructions+=3;goto B477db2;
case 0x477db5:c.instructions+=2;goto B477db5;
case 0x477db6:c.instructions+=1;goto B477db6;
case 0x477db9:goto L477db9;
case 0x477dbc:c.instructions+=6;goto B477dbc;
case 0x477dbf:c.instructions+=5;goto B477dbf;
case 0x477dc0:c.instructions+=4;goto B477dc0;
case 0x477dc1:c.instructions+=3;goto B477dc1;
case 0x477dc4:c.instructions+=2;goto B477dc4;
case 0x477dc5:c.instructions+=1;goto B477dc5;
case 0x477dd0:goto L477dd0;
case 0x477dd1:c.instructions+=2;goto B477dd1;
case 0x477dd3:c.instructions+=1;goto B477dd3;
case 0x477dd8:goto L477dd8;
case 0x477ddd:c.instructions+=1;goto B477ddd;
case 0x477ddf:goto L477ddf;
case 0x477de0:c.instructions+=1;goto B477de0;
case 0x477de5:goto L477de5;
case 0x477de8:goto L477de8;
case 0x477dea:c.instructions+=2;goto B477dea;
case 0x477deb:c.instructions+=1;goto B477deb;
case 0x477df0:goto L477df0;
case 0x477df1:c.instructions+=7;goto B477df1;
case 0x477df2:c.instructions+=6;goto B477df2;
case 0x477df4:c.instructions+=5;goto B477df4;
case 0x477df7:c.instructions+=4;goto B477df7;
case 0x477dfa:c.instructions+=3;goto B477dfa;
case 0x477dfc:c.instructions+=2;goto B477dfc;
case 0x477dfe:c.instructions+=1;goto B477dfe;
case 0x477e00:goto L477e00;
case 0x477e03:c.instructions+=3;goto B477e03;
case 0x477e04:c.instructions+=2;goto B477e04;
case 0x477e05:c.instructions+=1;goto B477e05;
case 0x477e06:goto L477e06;
case 0x477e08:c.instructions+=6;goto B477e08;
case 0x477e09:c.instructions+=5;goto B477e09;
case 0x477e0a:c.instructions+=4;goto B477e0a;
case 0x477e0d:c.instructions+=3;goto B477e0d;
case 0x477e0f:c.instructions+=2;goto B477e0f;
case 0x477e11:c.instructions+=1;goto B477e11;
case 0x477e17:goto L477e17;
case 0x477e1a:c.instructions+=11;goto B477e1a;
case 0x477e1d:c.instructions+=10;goto B477e1d;
case 0x477e23:c.instructions+=9;goto B477e23;
case 0x477e29:c.instructions+=8;goto B477e29;
case 0x477e2b:c.instructions+=7;goto B477e2b;
case 0x477e2e:c.instructions+=6;goto B477e2e;
case 0x477e34:c.instructions+=5;goto B477e34;
case 0x477e37:c.instructions+=4;goto B477e37;
case 0x477e39:c.instructions+=3;goto B477e39;
case 0x477e3c:c.instructions+=2;goto B477e3c;
case 0x477e3f:c.instructions+=1;goto B477e3f;
case 0x477e41:goto L477e41;
case 0x477e44:c.instructions+=1;goto B477e44;
case 0x477e46:goto L477e46;
case 0x477e49:c.instructions+=4;goto B477e49;
case 0x477e4b:c.instructions+=3;goto B477e4b;
case 0x477e4d:c.instructions+=2;goto B477e4d;
case 0x477e4f:c.instructions+=1;goto B477e4f;
case 0x477e51:goto L477e51;
case 0x477e57:c.instructions+=2;goto B477e57;
case 0x477e58:c.instructions+=1;goto B477e58;
case 0x477e5d:goto L477e5d;
case 0x477e60:c.instructions+=2;goto B477e60;
case 0x477e62:c.instructions+=1;goto B477e62;
case 0x477e64:goto L477e64;
case 0x477e6a:c.instructions+=3;goto B477e6a;
case 0x477e71:c.instructions+=2;goto B477e71;
case 0x477e75:c.instructions+=1;goto B477e75;
case 0x477e77:goto L477e77;
case 0x477e79:goto L477e79;
case 0x477e7c:c.instructions+=10;goto B477e7c;
case 0x477e7f:c.instructions+=9;goto B477e7f;
case 0x477e82:c.instructions+=8;goto B477e82;
case 0x477e85:c.instructions+=7;goto B477e85;
case 0x477e88:c.instructions+=6;goto B477e88;
case 0x477e8a:c.instructions+=5;goto B477e8a;
case 0x477e8b:c.instructions+=4;goto B477e8b;
case 0x477e8c:c.instructions+=3;goto B477e8c;
case 0x477e8d:c.instructions+=2;goto B477e8d;
case 0x477e8e:c.instructions+=1;goto B477e8e;
case 0x477e91:goto L477e91;
case 0x477e94:c.instructions+=6;goto B477e94;
case 0x477e97:c.instructions+=5;goto B477e97;
case 0x477e99:c.instructions+=4;goto B477e99;
case 0x477e9c:c.instructions+=3;goto B477e9c;
case 0x477e9d:c.instructions+=2;goto B477e9d;
case 0x477e9f:c.instructions+=1;goto B477e9f;
case 0x477ea1:goto L477ea1;
case 0x477ea2:c.instructions+=4;goto B477ea2;
case 0x477ea3:c.instructions+=3;goto B477ea3;
case 0x477ea4:c.instructions+=2;goto B477ea4;
case 0x477ea5:c.instructions+=1;goto B477ea5;
case 0x477eb0:goto L477eb0;
case 0x477eb1:c.instructions+=7;goto B477eb1;
case 0x477eb2:c.instructions+=6;goto B477eb2;
case 0x477eb4:c.instructions+=5;goto B477eb4;
case 0x477eb7:c.instructions+=4;goto B477eb7;
case 0x477eba:c.instructions+=3;goto B477eba;
case 0x477ebc:c.instructions+=2;goto B477ebc;
case 0x477ebe:c.instructions+=1;goto B477ebe;
case 0x477ec0:goto L477ec0;
case 0x477ec3:c.instructions+=3;goto B477ec3;
case 0x477ec4:c.instructions+=2;goto B477ec4;
case 0x477ec5:c.instructions+=1;goto B477ec5;
case 0x477ec6:goto L477ec6;
case 0x477ec8:c.instructions+=6;goto B477ec8;
case 0x477ec9:c.instructions+=5;goto B477ec9;
case 0x477ecc:c.instructions+=4;goto B477ecc;
case 0x477ece:c.instructions+=3;goto B477ece;
case 0x477ed0:c.instructions+=2;goto B477ed0;
case 0x477ed1:c.instructions+=1;goto B477ed1;
case 0x477ed7:goto L477ed7;
case 0x477eda:c.instructions+=11;goto B477eda;
case 0x477edd:c.instructions+=10;goto B477edd;
case 0x477ee3:c.instructions+=9;goto B477ee3;
case 0x477ee9:c.instructions+=8;goto B477ee9;
case 0x477eeb:c.instructions+=7;goto B477eeb;
case 0x477eee:c.instructions+=6;goto B477eee;
case 0x477ef4:c.instructions+=5;goto B477ef4;
case 0x477ef7:c.instructions+=4;goto B477ef7;
case 0x477ef9:c.instructions+=3;goto B477ef9;
case 0x477efc:c.instructions+=2;goto B477efc;
case 0x477eff:c.instructions+=1;goto B477eff;
case 0x477f01:goto L477f01;
case 0x477f04:c.instructions+=1;goto B477f04;
case 0x477f06:goto L477f06;
case 0x477f09:c.instructions+=4;goto B477f09;
case 0x477f0b:c.instructions+=3;goto B477f0b;
case 0x477f0d:c.instructions+=2;goto B477f0d;
case 0x477f0f:c.instructions+=1;goto B477f0f;
case 0x477f11:goto L477f11;
case 0x477f17:c.instructions+=2;goto B477f17;
case 0x477f18:c.instructions+=1;goto B477f18;
case 0x477f1d:goto L477f1d;
case 0x477f1f:c.instructions+=3;goto B477f1f;
case 0x477f22:c.instructions+=2;goto B477f22;
case 0x477f24:c.instructions+=1;goto B477f24;
case 0x477f26:goto L477f26;
case 0x477f2c:c.instructions+=3;goto B477f2c;
case 0x477f32:c.instructions+=2;goto B477f32;
case 0x477f38:c.instructions+=1;goto B477f38;
case 0x477f3a:goto L477f3a;
case 0x477f3c:goto L477f3c;
case 0x477f3f:c.instructions+=9;goto B477f3f;
case 0x477f42:c.instructions+=8;goto B477f42;
case 0x477f45:c.instructions+=7;goto B477f45;
case 0x477f48:c.instructions+=6;goto B477f48;
case 0x477f4b:c.instructions+=5;goto B477f4b;
case 0x477f4d:c.instructions+=4;goto B477f4d;
case 0x477f4e:c.instructions+=3;goto B477f4e;
case 0x477f4f:c.instructions+=2;goto B477f4f;
case 0x477f50:c.instructions+=1;goto B477f50;
case 0x477f53:goto L477f53;
case 0x477f56:c.instructions+=12;goto B477f56;
case 0x477f58:c.instructions+=11;goto B477f58;
case 0x477f5b:c.instructions+=10;goto B477f5b;
case 0x477f5e:c.instructions+=9;goto B477f5e;
case 0x477f5f:c.instructions+=8;goto B477f5f;
case 0x477f62:c.instructions+=7;goto B477f62;
case 0x477f65:c.instructions+=6;goto B477f65;
case 0x477f68:c.instructions+=5;goto B477f68;
case 0x477f6a:c.instructions+=4;goto B477f6a;
case 0x477f6b:c.instructions+=3;goto B477f6b;
case 0x477f6d:c.instructions+=2;goto B477f6d;
case 0x477f71:c.instructions+=1;goto B477f71;
case 0x477f73:goto L477f73;
case 0x477f74:c.instructions+=4;goto B477f74;
case 0x477f75:c.instructions+=3;goto B477f75;
case 0x477f76:c.instructions+=2;goto B477f76;
case 0x477f77:c.instructions+=1;goto B477f77;
case 0x477f80:goto L477f80;
case 0x477f81:c.instructions+=8;goto B477f81;
case 0x477f82:c.instructions+=7;goto B477f82;
case 0x477f84:c.instructions+=6;goto B477f84;
case 0x477f87:c.instructions+=5;goto B477f87;
case 0x477f8a:c.instructions+=4;goto B477f8a;
case 0x477f8b:c.instructions+=3;goto B477f8b;
case 0x477f8d:c.instructions+=2;goto B477f8d;
case 0x477f8f:c.instructions+=1;goto B477f8f;
case 0x477f91:goto L477f91;
case 0x477f94:c.instructions+=5;goto B477f94;
case 0x477f97:c.instructions+=4;goto B477f97;
case 0x477f98:c.instructions+=3;goto B477f98;
case 0x477f99:c.instructions+=2;goto B477f99;
case 0x477f9a:c.instructions+=1;goto B477f9a;
case 0x477f9b:goto L477f9b;
case 0x477f9c:c.instructions+=6;goto B477f9c;
case 0x477f9f:c.instructions+=5;goto B477f9f;
case 0x477fa2:c.instructions+=4;goto B477fa2;
case 0x477fa4:c.instructions+=3;goto B477fa4;
case 0x477fa6:c.instructions+=2;goto B477fa6;
case 0x477fa7:c.instructions+=1;goto B477fa7;
case 0x477fad:goto L477fad;
case 0x477fb2:c.instructions+=5;goto B477fb2;
case 0x477fb5:c.instructions+=4;goto B477fb5;
case 0x477fb6:c.instructions+=3;goto B477fb6;
case 0x477fb8:c.instructions+=2;goto B477fb8;
case 0x477fbb:c.instructions+=1;goto B477fbb;
case 0x477fc0:goto L477fc0;
case 0x477fc3:c.instructions+=4;goto B477fc3;
case 0x477fc6:c.instructions+=3;goto B477fc6;
case 0x477fc9:c.instructions+=2;goto B477fc9;
case 0x477fcb:c.instructions+=1;goto B477fcb;
case 0x477fcd:goto L477fcd;
case 0x477fd2:c.instructions+=4;goto B477fd2;
case 0x477fd9:c.instructions+=3;goto B477fd9;
case 0x477fda:c.instructions+=2;goto B477fda;
case 0x477fdc:c.instructions+=1;goto B477fdc;
case 0x477fe1:goto L477fe1;
case 0x477fe4:goto L477fe4;
case 0x477fe7:c.instructions+=7;goto B477fe7;
case 0x477fea:c.instructions+=6;goto B477fea;
case 0x477fed:c.instructions+=5;goto B477fed;
case 0x477fef:c.instructions+=4;goto B477fef;
case 0x477ff1:c.instructions+=3;goto B477ff1;
case 0x477ff3:c.instructions+=2;goto B477ff3;
case 0x477ff7:c.instructions+=1;goto B477ff7;
case 0x477ffd:goto L477ffd;
case 0x477fff:goto L477fff;
default:missing_instruction(c.pc);}
B477000:L477000:{c.instructions+=13;NFSU2_TR(0x477000);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477003:{NFSU2_TR(0x477003);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477006:{NFSU2_TR(0x477006);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477009:{NFSU2_TR(0x477009);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47700c:{NFSU2_TR(0x47700c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47700f:{NFSU2_TR(0x47700f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477012:{NFSU2_TR(0x477012);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477015:{NFSU2_TR(0x477015);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477018:{NFSU2_TR(0x477018);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47701b:{NFSU2_TR(0x47701b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B47701e:{NFSU2_TR(0x47701e);
u8 U[4];
w4(U+0,u32(0x78b694ull));
s4(u32(r4(R+0)),r4(U+0));
}
B477024:{NFSU2_TR(0x477024);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477027:{NFSU2_TR(0x477027);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B477030:L477030:{c.instructions+=16;NFSU2_TR(0x477030);
__builtin_memmove((R+0),(R+4),4);
}
B477032:{NFSU2_TR(0x477032);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B477034:{NFSU2_TR(0x477034);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477037:{NFSU2_TR(0x477037);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47703a:{NFSU2_TR(0x47703a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47703d:{NFSU2_TR(0x47703d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477040:{NFSU2_TR(0x477040);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477043:{NFSU2_TR(0x477043);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477046:{NFSU2_TR(0x477046);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477049:{NFSU2_TR(0x477049);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47704c:{NFSU2_TR(0x47704c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47704f:{NFSU2_TR(0x47704f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477052:{NFSU2_TR(0x477052);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477055:{NFSU2_TR(0x477055);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477058:{NFSU2_TR(0x477058);
u8 U[4];
w4(U+0,u32(0x78b6c4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B47705e:{NFSU2_TR(0x47705e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B477060:L477060:{c.instructions+=12;NFSU2_TR(0x477060);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477062:{NFSU2_TR(0x477062);
u8 U[4];
w4(U+0,u32(0x772268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477067:{NFSU2_TR(0x477067);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47706d:{NFSU2_TR(0x47706d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47706e:{NFSU2_TR(0x47706e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477075:{NFSU2_TR(0x477075);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477076:{NFSU2_TR(0x477076);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477077:{NFSU2_TR(0x477077);
__builtin_memmove((R+24),(R+4),4);
}
B477079:{NFSU2_TR(0x477079);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47707d:{NFSU2_TR(0x47707d);
u8 U[4];
w4(U+0,u32(0x78a588ull));
s4(u32(r4(R+24)),r4(U+0));
}
B477083:{NFSU2_TR(0x477083);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47708b:{NFSU2_TR(0x47708b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477090ull));
TAIL_STATIC(0x464c80u,464);
}
B477090:L477090:{c.instructions+=6;NFSU2_TR(0x477090);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B477094:{NFSU2_TR(0x477094);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47709a:{NFSU2_TR(0x47709a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47709b:{NFSU2_TR(0x47709b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4770a2:{NFSU2_TR(0x4770a2);
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
B4770a5:{NFSU2_TR(0x4770a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4770b0:L4770b0:{c.instructions+=24;NFSU2_TR(0x4770b0);
__builtin_memmove((R+0),(R+4),4);
}
B4770b2:{NFSU2_TR(0x4770b2);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4770b4:{NFSU2_TR(0x4770b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4770b7:{NFSU2_TR(0x4770b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4770ba:{NFSU2_TR(0x4770ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4770bd:{NFSU2_TR(0x4770bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4770c0:{NFSU2_TR(0x4770c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4770c3:{NFSU2_TR(0x4770c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4770c6:{NFSU2_TR(0x4770c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4770c9:{NFSU2_TR(0x4770c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4770cc:{NFSU2_TR(0x4770cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4770cf:{NFSU2_TR(0x4770cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4770d2:{NFSU2_TR(0x4770d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4770d5:{NFSU2_TR(0x4770d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4770d8:{NFSU2_TR(0x4770d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4770db:{NFSU2_TR(0x4770db);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4770de:{NFSU2_TR(0x4770de);
u8 U[4];
w4(U+0,u32(0x78b6ecull));
s4(u32(r4(R+0)),r4(U+0));
}
B4770e4:{NFSU2_TR(0x4770e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4770eb:{NFSU2_TR(0x4770eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4770ee:{NFSU2_TR(0x4770ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4770f1:{NFSU2_TR(0x4770f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4770f4:{NFSU2_TR(0x4770f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4770f7:{NFSU2_TR(0x4770f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4770fa:{NFSU2_TR(0x4770fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B477100:L477100:{c.instructions+=20;NFSU2_TR(0x477100);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477104:{NFSU2_TR(0x477104);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B477106:{NFSU2_TR(0x477106);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477109:{NFSU2_TR(0x477109);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47710c:{NFSU2_TR(0x47710c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47710f:{NFSU2_TR(0x47710f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B477112:{NFSU2_TR(0x477112);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477115:{NFSU2_TR(0x477115);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B477118:{NFSU2_TR(0x477118);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47711b:{NFSU2_TR(0x47711b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47711e:{NFSU2_TR(0x47711e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B477120:{NFSU2_TR(0x477120);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477123:{NFSU2_TR(0x477123);
{u32 ea_=u32(r4(R+4)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B477126:{NFSU2_TR(0x477126);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477127:{NFSU2_TR(0x477127);
{u32 ea_=u32(r4(R+4)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47712a:{NFSU2_TR(0x47712a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B47712d:{NFSU2_TR(0x47712d);
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
B47712f:{NFSU2_TR(0x47712f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477132:{NFSU2_TR(0x477132);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B477136:{NFSU2_TR(0x477136);
if(r1(R+518)){{goto L477146;}}
}
B477138:L477138:{c.instructions+=3;NFSU2_TR(0x477138);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47713a:{NFSU2_TR(0x47713a);
__builtin_memmove((R+4),(R+24),4);
}
B47713c:{NFSU2_TR(0x47713c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47713full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47713f:L47713f:{c.instructions+=3;NFSU2_TR(0x47713f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B477142:{NFSU2_TR(0x477142);
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
B477144:{NFSU2_TR(0x477144);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x477138u);}goto L477138;}}
}
B477146:L477146:{c.instructions+=2;NFSU2_TR(0x477146);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B477147:{NFSU2_TR(0x477147);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B477150:L477150:{c.instructions+=9;NFSU2_TR(0x477150);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477151:{NFSU2_TR(0x477151);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477152:{NFSU2_TR(0x477152);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B477156:{NFSU2_TR(0x477156);
w4(R+0,u32(0x1ull));
}
B47715b:{NFSU2_TR(0x47715b);
__builtin_memmove(gp(0x82bc5d),(R+0),1);
}
B477160:{NFSU2_TR(0x477160);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477161:{NFSU2_TR(0x477161);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B477164:{NFSU2_TR(0x477164);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B477167:{NFSU2_TR(0x477167);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L477186;}}
}
B477169:L477169:{c.instructions+=8;NFSU2_TR(0x477169);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47716f:{NFSU2_TR(0x47716f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B477175:{NFSU2_TR(0x477175);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47717b:{NFSU2_TR(0x47717b);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B47717d:{NFSU2_TR(0x47717d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B47717f:{NFSU2_TR(0x47717f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B477181:{NFSU2_TR(0x477181);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+12),(U+0),1);
}
B477184:{NFSU2_TR(0x477184);
{goto L4771a2;}
}
B477186:L477186:{c.instructions+=3;NFSU2_TR(0x477186);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47718c:{NFSU2_TR(0x47718c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47718d:{NFSU2_TR(0x47718d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477192ull));
TAIL_STATIC(0x6f767cu,6f7);
}
B477192:L477192:{c.instructions+=5;NFSU2_TR(0x477192);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B477198:{NFSU2_TR(0x477198);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B47719a:{NFSU2_TR(0x47719a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47719d:{NFSU2_TR(0x47719d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B47719f:{NFSU2_TR(0x47719f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
__builtin_memmove((R+12),(U+0),1);
}
B4771a2:L4771a2:{c.instructions+=8;NFSU2_TR(0x4771a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4771a8:{NFSU2_TR(0x4771a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4771ab:{NFSU2_TR(0x4771ab);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B4771ad:{NFSU2_TR(0x4771ad);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B4771af:{NFSU2_TR(0x4771af);
__builtin_memmove((R+0),(R+24),4);
}
B4771b1:{NFSU2_TR(0x4771b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4771b7:{NFSU2_TR(0x4771b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4771ba:{NFSU2_TR(0x4771ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4771bfull));
TAIL_STATIC(0x464fc0u,464);
}
B4771bf:L4771bf:{c.instructions+=2;NFSU2_TR(0x4771bf);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4771c3:{NFSU2_TR(0x4771c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4771d6;}}
}
B4771c5:L4771c5:{c.instructions+=4;NFSU2_TR(0x4771c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4771c8:{NFSU2_TR(0x4771c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4771c9:{NFSU2_TR(0x4771c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4771ca:{NFSU2_TR(0x4771ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4771cfull));
TAIL_STATIC(0x465220u,465);
}
B4771cf:L4771cf:{c.instructions+=5;NFSU2_TR(0x4771cf);
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
B4771d2:{NFSU2_TR(0x4771d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4771d3:{NFSU2_TR(0x4771d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4771d4:{NFSU2_TR(0x4771d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4771d5:{NFSU2_TR(0x4771d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4771d6:L4771d6:{c.instructions+=2;NFSU2_TR(0x4771d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4771d8:{NFSU2_TR(0x4771d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4771f0;}}
}
B4771da:L4771da:{c.instructions+=2;NFSU2_TR(0x4771da);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4771dc:{NFSU2_TR(0x4771dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4771f0;}}
}
B4771de:L4771de:{c.instructions+=5;NFSU2_TR(0x4771de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4771e1:{NFSU2_TR(0x4771e1);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B4771e2:{NFSU2_TR(0x4771e2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4771e3:{NFSU2_TR(0x4771e3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4771e4:{NFSU2_TR(0x4771e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4771e9ull));
{goto L477220;}
}
B4771e9:L4771e9:{c.instructions+=5;NFSU2_TR(0x4771e9);
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
B4771ec:{NFSU2_TR(0x4771ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4771ed:{NFSU2_TR(0x4771ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4771ee:{NFSU2_TR(0x4771ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4771ef:{NFSU2_TR(0x4771ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4771f0:L4771f0:{c.instructions+=3;NFSU2_TR(0x4771f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4771f3:{NFSU2_TR(0x4771f3);
__builtin_memmove((R+4),(R+12),4);
}
B4771f5:{NFSU2_TR(0x4771f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4771faull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B4771fa:L4771fa:{c.instructions+=2;NFSU2_TR(0x4771fa);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4771fe:{NFSU2_TR(0x4771fe);
if(r1(R+518)){{goto L477207;}}
}
B477200:L477200:{c.instructions+=1;NFSU2_TR(0x477200);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B477207:L477207:{c.instructions+=2;NFSU2_TR(0x477207);
__builtin_memmove((R+4),(R+12),4);
}
B477209:{NFSU2_TR(0x477209);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47720eull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B47720e:L47720e:{c.instructions+=4;NFSU2_TR(0x47720e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B477211:{NFSU2_TR(0x477211);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477212:{NFSU2_TR(0x477212);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477213:{NFSU2_TR(0x477213);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477218ull));
TAIL_STATIC(0x465220u,465);
}
B477218:L477218:{c.instructions+=5;NFSU2_TR(0x477218);
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
B47721b:{NFSU2_TR(0x47721b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47721c:{NFSU2_TR(0x47721c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47721d:{NFSU2_TR(0x47721d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47721e:{NFSU2_TR(0x47721e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B477220:L477220:{c.instructions+=8;NFSU2_TR(0x477220);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477221:{NFSU2_TR(0x477221);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477222:{NFSU2_TR(0x477222);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477223:{NFSU2_TR(0x477223);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B477227:{NFSU2_TR(0x477227);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47722a:{NFSU2_TR(0x47722a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B47722d:{NFSU2_TR(0x47722d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47722e:{NFSU2_TR(0x47722e);
if(r1(R+518)){{goto L477257;}}
}
B477230:L477230:{c.instructions+=4;NFSU2_TR(0x477230);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477233:{NFSU2_TR(0x477233);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B477235:{NFSU2_TR(0x477235);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B477238:{NFSU2_TR(0x477238);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L477242;}}
}
B47723a:L47723a:{c.instructions+=3;NFSU2_TR(0x47723a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47723d:{NFSU2_TR(0x47723d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477240:{NFSU2_TR(0x477240);
{goto L47724f;}
}
B477242:L477242:{c.instructions+=2;NFSU2_TR(0x477242);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B477245:{NFSU2_TR(0x477245);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L477257;}}
}
B477247:L477247:{c.instructions+=3;NFSU2_TR(0x477247);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47724a:{NFSU2_TR(0x47724a);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B47724c:{NFSU2_TR(0x47724c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47724f:L47724f:{c.instructions+=3;NFSU2_TR(0x47724f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477252:{NFSU2_TR(0x477252);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B477255:{NFSU2_TR(0x477255);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x477230u);}goto L477230;}}
}
B477257:L477257:{c.instructions+=3;NFSU2_TR(0x477257);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47725a:{NFSU2_TR(0x47725a);
__builtin_memmove((R+4),(R+12),4);
}
B47725c:{NFSU2_TR(0x47725c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477261ull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B477261:L477261:{c.instructions+=4;NFSU2_TR(0x477261);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477264:{NFSU2_TR(0x477264);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B477267:{NFSU2_TR(0x477267);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B477269:{NFSU2_TR(0x477269);
if(r1(R+518)){{goto L4772e7;}}
}
B47726b:L47726b:{c.instructions+=1;NFSU2_TR(0x47726b);
{goto L477270;}
}
B477270:L477270:{c.instructions+=3;NFSU2_TR(0x477270);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B477273:{NFSU2_TR(0x477273);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B477277:{NFSU2_TR(0x477277);
if(r1(R+518)){{goto L4772e7;}}
}
B477279:L477279:{c.instructions+=6;NFSU2_TR(0x477279);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47727f:{NFSU2_TR(0x47727f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B477282:{NFSU2_TR(0x477282);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B477285:{NFSU2_TR(0x477285);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B477286:{NFSU2_TR(0x477286);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B477288:{NFSU2_TR(0x477288);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L477290;}}
}
B47728a:L47728a:{c.instructions+=2;NFSU2_TR(0x47728a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B47728c:{NFSU2_TR(0x47728c);
if(r1(R+512)){{goto L477298;}}
}
B47728e:L47728e:{c.instructions+=1;NFSU2_TR(0x47728e);
{goto L477294;}
}
B477290:L477290:{c.instructions+=2;NFSU2_TR(0x477290);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B477292:{NFSU2_TR(0x477292);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L4772e7;}}
}
B477294:L477294:{c.instructions+=2;NFSU2_TR(0x477294);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B477296:{NFSU2_TR(0x477296);
if(r1(R+512)){{goto L4772e7;}}
}
B477298:L477298:{c.instructions+=2;NFSU2_TR(0x477298);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B47729b:{NFSU2_TR(0x47729b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4772a2;}}
}
B47729d:L47729d:{c.instructions+=2;NFSU2_TR(0x47729d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4772a0:{NFSU2_TR(0x4772a0);
{goto L4772a8;}
}
B4772a2:L4772a2:{c.instructions+=2;NFSU2_TR(0x4772a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4772a5:{NFSU2_TR(0x4772a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4772a8:L4772a8:{c.instructions+=3;NFSU2_TR(0x4772a8);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4772ab:{NFSU2_TR(0x4772ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4772ae:{NFSU2_TR(0x4772ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4772b5;}}
}
B4772b0:L4772b0:{c.instructions+=2;NFSU2_TR(0x4772b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4772b3:{NFSU2_TR(0x4772b3);
{goto L4772bb;}
}
B4772b5:L4772b5:{c.instructions+=2;NFSU2_TR(0x4772b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4772b8:{NFSU2_TR(0x4772b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4772bb:L4772bb:{c.instructions+=2;NFSU2_TR(0x4772bb);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4772be:{NFSU2_TR(0x4772be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4772cd;}}
}
B4772c0:L4772c0:{c.instructions+=3;NFSU2_TR(0x4772c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4772c3:{NFSU2_TR(0x4772c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4772c5:{NFSU2_TR(0x4772c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4772ca;}}
}
B4772c7:L4772c7:{c.instructions+=1;NFSU2_TR(0x4772c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4772ca:L4772ca:{c.instructions+=1;NFSU2_TR(0x4772ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4772cd:L4772cd:{c.instructions+=8;NFSU2_TR(0x4772cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4772d4:{NFSU2_TR(0x4772d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4772d7:{NFSU2_TR(0x4772d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4772da:{NFSU2_TR(0x4772da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4772dd:{NFSU2_TR(0x4772dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4772e0:{NFSU2_TR(0x4772e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4772e3:{NFSU2_TR(0x4772e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4772e5:{NFSU2_TR(0x4772e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x477270u);}goto L477270;}}
}
B4772e7:L4772e7:{c.instructions+=2;NFSU2_TR(0x4772e7);
__builtin_memmove((R+4),(R+12),4);
}
B4772e9:{NFSU2_TR(0x4772e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4772eeull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B4772ee:L4772ee:{c.instructions+=4;NFSU2_TR(0x4772ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4772f1:{NFSU2_TR(0x4772f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4772f4:{NFSU2_TR(0x4772f4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4772f6:{NFSU2_TR(0x4772f6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L477304;}}
}
B4772f8:L4772f8:{c.instructions+=4;NFSU2_TR(0x4772f8);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B4772fa:{NFSU2_TR(0x4772fa);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x41ull))));
}
B4772fd:{NFSU2_TR(0x4772fd);
__builtin_memmove((R+28),(R+0),4);
}
B4772ff:{NFSU2_TR(0x4772ff);
{goto L4773b7;}
}
B477304:L477304:{c.instructions+=6;NFSU2_TR(0x477304);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B477307:{NFSU2_TR(0x477307);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47730d:{NFSU2_TR(0x47730d);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B47730f:{NFSU2_TR(0x47730f);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x40ull))));
}
B477312:{NFSU2_TR(0x477312);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B477314:{NFSU2_TR(0x477314);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4773b7;}}
}
B47731a:L47731a:{c.instructions+=6;NFSU2_TR(0x47731a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B47731d:{NFSU2_TR(0x47731d);
__builtin_memmove((R+28),(R+4),4);
}
B47731f:{NFSU2_TR(0x47731f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B477322:{NFSU2_TR(0x477322);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B477325:{NFSU2_TR(0x477325);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B477328:{NFSU2_TR(0x477328);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L477340;}}
}
B47732a:L47732a:{c.instructions+=1;NFSU2_TR(0x47732a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B47732d:L47732d:{c.instructions+=3;NFSU2_TR(0x47732d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B477330:{NFSU2_TR(0x477330);
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
B477332:{NFSU2_TR(0x477332);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L477348;}}
}
B477334:L477334:{c.instructions+=1;NFSU2_TR(0x477334);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47733b:L47733b:{c.instructions+=5;NFSU2_TR(0x47733b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47733c:{NFSU2_TR(0x47733c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47733d:{NFSU2_TR(0x47733d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B47733e:{NFSU2_TR(0x47733e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47733f:{NFSU2_TR(0x47733f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B477340:L477340:{c.instructions+=3;NFSU2_TR(0x477340);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B477343:{NFSU2_TR(0x477343);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x40ull))));
}
B477346:{NFSU2_TR(0x477346);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47732du);}goto L47732d;}
}
B477348:L477348:{c.instructions+=3;NFSU2_TR(0x477348);
__builtin_memmove((R+0),(R+28),4);
}
B47734a:{NFSU2_TR(0x47734a);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x8000003full))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47734f:{NFSU2_TR(0x47734f);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L477356;}}
}
B477351:L477351:{c.instructions+=3;NFSU2_TR(0x477351);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B477352:{NFSU2_TR(0x477352);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffc0ull))));
}
B477355:{NFSU2_TR(0x477355);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B477356:L477356:{c.instructions+=1;NFSU2_TR(0x477356);
if(r1(R+518)){{goto L47736a;}}
}
B477358:L477358:{c.instructions+=2;NFSU2_TR(0x477358);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B47735b:{NFSU2_TR(0x47735b);
if(r1(R+518)){{goto L47736a;}}
}
B47735d:L47735d:{c.instructions+=5;NFSU2_TR(0x47735d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B477360:{NFSU2_TR(0x477360);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B477362:{NFSU2_TR(0x477362);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x40ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B477365:{NFSU2_TR(0x477365);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477368:{NFSU2_TR(0x477368);
{goto L477370;}
}
B47736a:L47736a:{c.instructions+=2;NFSU2_TR(0x47736a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47736d:{NFSU2_TR(0x47736d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477370:L477370:{c.instructions+=6;NFSU2_TR(0x477370);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477373:{NFSU2_TR(0x477373);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B477376:{NFSU2_TR(0x477376);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477377:{NFSU2_TR(0x477377);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477378:{NFSU2_TR(0x477378);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477379:{NFSU2_TR(0x477379);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47737eull));
TAIL_STATIC(0x6fafe3u,6fa);
}
B47737e:L47737e:{c.instructions+=12;NFSU2_TR(0x47737e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477381:{NFSU2_TR(0x477381);
u8 U[4];
w4(U+0,u32(0xffffffffull));
s4(u32(r4(R+0)),r4(U+0));
}
B477387:{NFSU2_TR(0x477387);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47738e:{NFSU2_TR(0x47738e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477391:{NFSU2_TR(0x477391);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B477394:{NFSU2_TR(0x477394);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B477397:{NFSU2_TR(0x477397);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47739a:{NFSU2_TR(0x47739a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47739d:{NFSU2_TR(0x47739d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47739f:{NFSU2_TR(0x47739f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4773a2:{NFSU2_TR(0x4773a2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4773a5:{NFSU2_TR(0x4773a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4773b4;}}
}
B4773a7:L4773a7:{c.instructions+=5;NFSU2_TR(0x4773a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4773aa:{NFSU2_TR(0x4773aa);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B4773ac:{NFSU2_TR(0x4773ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4773af:{NFSU2_TR(0x4773af);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x40ull))));
}
B4773b2:{NFSU2_TR(0x4773b2);
{goto L4773b7;}
}
B4773b4:L4773b4:{c.instructions+=2;NFSU2_TR(0x4773b4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B4773b6:{NFSU2_TR(0x4773b6);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B4773b7:L4773b7:{c.instructions+=4;NFSU2_TR(0x4773b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4773ba:{NFSU2_TR(0x4773ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4773bc:{NFSU2_TR(0x4773bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4773c0:{NFSU2_TR(0x4773c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4773ea;}}
}
B4773c2:L4773c2:{c.instructions+=2;NFSU2_TR(0x4773c2);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4773c5:{NFSU2_TR(0x4773c5);
if(r1(R+518)){{goto L4773ea;}}
}
B4773c7:L4773c7:{c.instructions+=3;NFSU2_TR(0x4773c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4773ca:{NFSU2_TR(0x4773ca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4773cb:{NFSU2_TR(0x4773cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4773d0ull));
TAIL_STATIC(0x459e00u,459);
}
B4773d0:L4773d0:{c.instructions+=3;NFSU2_TR(0x4773d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4773d3:{NFSU2_TR(0x4773d3);
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
B4773d5:{NFSU2_TR(0x4773d5);
if(r1(R+518)){{goto L4773ea;}}
}
B4773d7:L4773d7:{c.instructions+=7;NFSU2_TR(0x4773d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4773d8:{NFSU2_TR(0x4773d8);
s1(0x82bc64,u8(0x1ull));
}
B4773df:{NFSU2_TR(0x4773df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4773e6:{NFSU2_TR(0x4773e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4773e7:{NFSU2_TR(0x4773e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4773e8:{NFSU2_TR(0x4773e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4773e9:{NFSU2_TR(0x4773e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4773ea:L4773ea:{c.instructions+=3;NFSU2_TR(0x4773ea);
__builtin_memmove((R+0),gp(0x8a329c),4);
}
B4773ef:{NFSU2_TR(0x4773ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4773f1:{NFSU2_TR(0x4773f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4773fc;}}
}
B4773f3:L4773f3:{c.instructions+=3;NFSU2_TR(0x4773f3);
__builtin_memmove((R+0),gp(0x88ec68),4);
}
B4773f8:{NFSU2_TR(0x4773f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4773fa:{NFSU2_TR(0x4773fa);
if(r1(R+518)){{goto L477405;}}
}
B4773fc:L4773fc:{c.instructions+=2;NFSU2_TR(0x4773fc);
s1(0x82bc65,u8(0x1ull));
}
B477403:{NFSU2_TR(0x477403);
{goto L47740c;}
}
B477405:L477405:{c.instructions+=1;NFSU2_TR(0x477405);
s1(0x82bc65,u8(0x0ull));
}
B47740c:L47740c:{c.instructions+=4;NFSU2_TR(0x47740c);
s1(0x82bc64,u8(0x0ull));
}
B477413:{NFSU2_TR(0x477413);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B477419:{NFSU2_TR(0x477419);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B47741b:{NFSU2_TR(0x47741b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x477334u);}goto L477334;}}
}
B477421:L477421:{c.instructions+=3;NFSU2_TR(0x477421);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B477424:{NFSU2_TR(0x477424);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B477428:{NFSU2_TR(0x477428);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47748a;}}
}
B47742a:L47742a:{c.instructions+=5;NFSU2_TR(0x47742a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B477430:{NFSU2_TR(0x477430);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477436:{NFSU2_TR(0x477436);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B477439:{NFSU2_TR(0x477439);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B47743b:{NFSU2_TR(0x47743b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L477447;}}
}
B47743d:L47743d:{c.instructions+=3;NFSU2_TR(0x47743d);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47743f:{NFSU2_TR(0x47743f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477445:{NFSU2_TR(0x477445);
{goto L47744d;}
}
B477447:L477447:{c.instructions+=1;NFSU2_TR(0x477447);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47744d:L47744d:{c.instructions+=7;NFSU2_TR(0x47744d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477453:{NFSU2_TR(0x477453);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B477459:{NFSU2_TR(0x477459);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47745c:{NFSU2_TR(0x47745c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47745d:{NFSU2_TR(0x47745d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47745e:{NFSU2_TR(0x47745e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47745f:{NFSU2_TR(0x47745f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477464ull));
TAIL_STATIC(0x6fafe3u,6fa);
}
B477464:L477464:{c.instructions+=8;NFSU2_TR(0x477464);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47746a:{NFSU2_TR(0x47746a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B477470:{NFSU2_TR(0x477470);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477471:{NFSU2_TR(0x477471);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B477473:{NFSU2_TR(0x477473);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477475:{NFSU2_TR(0x477475);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477477:{NFSU2_TR(0x477477);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47747d:{NFSU2_TR(0x47747d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477482ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x477150u);}goto L477150;}
}
B477482:L477482:{c.instructions+=6;NFSU2_TR(0x477482);
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
B477485:{NFSU2_TR(0x477485);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B477486:{NFSU2_TR(0x477486);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B477487:{NFSU2_TR(0x477487);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B477488:{NFSU2_TR(0x477488);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B477489:{NFSU2_TR(0x477489);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47748a:L47748a:{c.instructions+=2;NFSU2_TR(0x47748a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47748c:{NFSU2_TR(0x47748c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47749e;}}
}
B47748e:L47748e:{c.instructions+=6;NFSU2_TR(0x47748e);
__builtin_memmove((R+0),(R+28),4);
}
B477490:{NFSU2_TR(0x477490);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B477491:{NFSU2_TR(0x477491);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x477491);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x477491);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B477493:{NFSU2_TR(0x477493);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B477496:{NFSU2_TR(0x477496);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47749c:{NFSU2_TR(0x47749c);
{goto L4774a4;}
}
B47749e:L47749e:{c.instructions+=1;NFSU2_TR(0x47749e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4774a4:L4774a4:{c.instructions+=12;NFSU2_TR(0x4774a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4774a5:{NFSU2_TR(0x4774a5);
s1(0x82bc5d,u8(0x0ull));
}
B4774ac:{NFSU2_TR(0x4774ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4774b2:{NFSU2_TR(0x4774b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4774b5:{NFSU2_TR(0x4774b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4774bb:{NFSU2_TR(0x4774bb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4774bc:{NFSU2_TR(0x4774bc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4774bd:{NFSU2_TR(0x4774bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4774c3:{NFSU2_TR(0x4774c3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4774c4:{NFSU2_TR(0x4774c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4774c5:{NFSU2_TR(0x4774c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4774c6:{NFSU2_TR(0x4774c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4774cbull));
TAIL_STATIC(0x6f77bcu,6f7);
}
B4774cb:L4774cb:{c.instructions+=4;NFSU2_TR(0x4774cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4774ce:{NFSU2_TR(0x4774ce);
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
B4774d0:{NFSU2_TR(0x4774d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4774d6:{NFSU2_TR(0x4774d6);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47733bu);}goto L47733b;}}
}
B4774dc:L4774dc:{c.instructions+=7;NFSU2_TR(0x4774dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4774dd:{NFSU2_TR(0x4774dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4774de:{NFSU2_TR(0x4774de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4774df:{NFSU2_TR(0x4774df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4774e0:{NFSU2_TR(0x4774e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x477150ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4774e8:{NFSU2_TR(0x4774e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4774ec:{NFSU2_TR(0x4774ec);
TAIL_STATIC(0x6f76f2u,6f7);
}
B477500:L477500:{c.instructions+=20;NFSU2_TR(0x477500);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B477504:{NFSU2_TR(0x477504);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477505:{NFSU2_TR(0x477505);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B477509:{NFSU2_TR(0x477509);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47750a:{NFSU2_TR(0x47750a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B47750e:{NFSU2_TR(0x47750e);
__builtin_memmove((R+4),(R+20),4);
}
B477510:{NFSU2_TR(0x477510);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x128ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B477516:{NFSU2_TR(0x477516);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477517:{NFSU2_TR(0x477517);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B47751b:{NFSU2_TR(0x47751b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47751c:{NFSU2_TR(0x47751c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B47751f:{NFSU2_TR(0x47751f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dull))));
__builtin_memmove((R+0),(U+0),4);
}
B477522:{NFSU2_TR(0x477522);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B477525:{NFSU2_TR(0x477525);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B477528:{NFSU2_TR(0x477528);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B47752a:{NFSU2_TR(0x47752a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B47752c:{NFSU2_TR(0x47752c);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B47752e:{NFSU2_TR(0x47752e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1800ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1800ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B477534:{NFSU2_TR(0x477534);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477538:{NFSU2_TR(0x477538);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4776fc;}}
}
B47753e:L47753e:{c.instructions+=2;NFSU2_TR(0x47753e);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B477541:{NFSU2_TR(0x477541);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4776fc;}}
}
B477547:L477547:{c.instructions+=2;NFSU2_TR(0x477547);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x100ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47754d:{NFSU2_TR(0x47754d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4776fc;}}
}
B477553:L477553:{c.instructions+=2;NFSU2_TR(0x477553);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B477556:{NFSU2_TR(0x477556);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4776fc;}}
}
B47755c:L47755c:{c.instructions+=2;NFSU2_TR(0x47755c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47755f:{NFSU2_TR(0x47755f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4776fc;}}
}
B477565:L477565:{c.instructions+=2;NFSU2_TR(0x477565);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B477568:{NFSU2_TR(0x477568);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4776fc;}}
}
B47756e:L47756e:{c.instructions+=2;NFSU2_TR(0x47756e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B477570:{NFSU2_TR(0x477570);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4776fc;}}
}
B477576:L477576:{c.instructions+=4;NFSU2_TR(0x477576);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B47757a:{NFSU2_TR(0x47757a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47757d:{NFSU2_TR(0x47757d);
u8 U[4];
w4(U+0,u32(0x4d525453ull));
s4(u32(r4(R+24)),r4(U+0));
}
B477583:{NFSU2_TR(0x477583);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477588ull));
TAIL_STATIC(0x6f55c7u,6f5);
}
B477588:L477588:{c.instructions+=39;NFSU2_TR(0x477588);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47758c:{NFSU2_TR(0x47758c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477590:{NFSU2_TR(0x477590);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477593:{NFSU2_TR(0x477593);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B477597:{NFSU2_TR(0x477597);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x190ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47759d:{NFSU2_TR(0x47759d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B47759f:{NFSU2_TR(0x47759f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4775a2:{NFSU2_TR(0x4775a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4775a5:{NFSU2_TR(0x4775a5);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B4775a7:{NFSU2_TR(0x4775a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B4775aa:{NFSU2_TR(0x4775aa);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B4775ac:{NFSU2_TR(0x4775ac);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffffffc0ull))));
}
B4775af:{NFSU2_TR(0x4775af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4775b2:{NFSU2_TR(0x4775b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4775b5:{NFSU2_TR(0x4775b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4775b9:{NFSU2_TR(0x4775b9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4775bb:{NFSU2_TR(0x4775bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4775be:{NFSU2_TR(0x4775be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4775c1:{NFSU2_TR(0x4775c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4775c4:{NFSU2_TR(0x4775c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4775c7:{NFSU2_TR(0x4775c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4775ca:{NFSU2_TR(0x4775ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4775cd:{NFSU2_TR(0x4775cd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),r4(R+24)));
w1(R+523,scarry<u32>(r4(R+8),r4(R+24)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4775cf:{NFSU2_TR(0x4775cf);
u8 U[4];
w4(U+0,u32(0x104ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4775d4:{NFSU2_TR(0x4775d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4775d5:{NFSU2_TR(0x4775d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4775d8:{NFSU2_TR(0x4775d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4775db:{NFSU2_TR(0x4775db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4775de:{NFSU2_TR(0x4775de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4775e1:{NFSU2_TR(0x4775e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
w4(U+4,u32(0x96ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4775e8:{NFSU2_TR(0x4775e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x32ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4775ef:{NFSU2_TR(0x4775ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4775f2:{NFSU2_TR(0x4775f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4775f5:{NFSU2_TR(0x4775f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4775f8:{NFSU2_TR(0x4775f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4775fb:{NFSU2_TR(0x4775fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4775fe:{NFSU2_TR(0x4775fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477601:{NFSU2_TR(0x477601);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477604:{NFSU2_TR(0x477604);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477609ull));
TAIL_STATIC(0x6fafedu,6fa);
}
B477609:L477609:{c.instructions+=4;NFSU2_TR(0x477609);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47760c:{NFSU2_TR(0x47760c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4000ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4000ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B477612:{NFSU2_TR(0x477612);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477618:{NFSU2_TR(0x477618);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L477626;}}
}
B47761a:L47761a:{c.instructions+=2;NFSU2_TR(0x47761a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
w4(U+4,u32(0x800ull));
s4(u32(r4(U+0)),r4(U+4));
}
B477624:{NFSU2_TR(0x477624);
{goto L477669;}
}
B477626:L477626:{c.instructions+=3;NFSU2_TR(0x477626);
w4(R+0,u32(0x8000ull));
}
B47762b:{NFSU2_TR(0x47762b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B47762d:{NFSU2_TR(0x47762d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L47763b;}}
}
B47762f:L47762f:{c.instructions+=2;NFSU2_TR(0x47762f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
w4(U+4,u32(0x1000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B477639:{NFSU2_TR(0x477639);
{goto L477669;}
}
B47763b:L47763b:{c.instructions+=2;NFSU2_TR(0x47763b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10000ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10000ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B477641:{NFSU2_TR(0x477641);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L47764f;}}
}
B477643:L477643:{c.instructions+=2;NFSU2_TR(0x477643);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
w4(U+4,u32(0x2000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47764d:{NFSU2_TR(0x47764d);
{goto L477669;}
}
B47764f:L47764f:{c.instructions+=2;NFSU2_TR(0x47764f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x18000ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18000ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B477655:{NFSU2_TR(0x477655);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L477663;}}
}
B477657:L477657:{c.instructions+=2;NFSU2_TR(0x477657);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
w4(U+4,u32(0x4000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B477661:{NFSU2_TR(0x477661);
{goto L477669;}
}
B477663:L477663:{c.instructions+=1;NFSU2_TR(0x477663);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477669:L477669:{c.instructions+=3;NFSU2_TR(0x477669);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B47766b:{NFSU2_TR(0x47766b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47766d:{NFSU2_TR(0x47766d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L477693;}}
}
B47766f:L47766f:{c.instructions+=1;NFSU2_TR(0x47766f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B477671:L477671:{c.instructions+=11;NFSU2_TR(0x477671);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477674:{NFSU2_TR(0x477674);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B477676:{NFSU2_TR(0x477676);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B477678:{NFSU2_TR(0x477678);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47767b:{NFSU2_TR(0x47767b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B47767e:{NFSU2_TR(0x47767e);
u8 U[12];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B477685:{NFSU2_TR(0x477685);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B477686:{NFSU2_TR(0x477686);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x128ull))));
}
B47768c:{NFSU2_TR(0x47768c);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B47768e:{NFSU2_TR(0x47768e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477691:{NFSU2_TR(0x477691);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x477671u);}goto L477671;}}
}
B477693:L477693:{c.instructions+=6;NFSU2_TR(0x477693);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B477697:{NFSU2_TR(0x477697);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47769a:{NFSU2_TR(0x47769a);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffee4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4776a1:{NFSU2_TR(0x4776a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4776a5:{NFSU2_TR(0x4776a5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4776a7:{NFSU2_TR(0x4776a7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4776c7;}}
}
B4776a9:L4776a9:{c.instructions+=2;NFSU2_TR(0x4776a9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4776ab:{NFSU2_TR(0x4776ab);
{goto L4776b0;}
}
B4776b0:L4776b0:{c.instructions+=8;NFSU2_TR(0x4776b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4776b3:{NFSU2_TR(0x4776b3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B4776b5:{NFSU2_TR(0x4776b5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B4776b8:{NFSU2_TR(0x4776b8);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B4776b9:{NFSU2_TR(0x4776b9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4776bb:{NFSU2_TR(0x4776bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4776be:{NFSU2_TR(0x4776be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4776c5:{NFSU2_TR(0x4776c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4776b0u);}goto L4776b0;}}
}
B4776c7:L4776c7:{c.instructions+=4;NFSU2_TR(0x4776c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4776cb:{NFSU2_TR(0x4776cb);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4776cd:{NFSU2_TR(0x4776cd);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4776cf:{NFSU2_TR(0x4776cf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4776e8;}}
}
B4776d1:L4776d1:{c.instructions+=1;NFSU2_TR(0x4776d1);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4776d3:L4776d3:{c.instructions+=9;NFSU2_TR(0x4776d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4776d6:{NFSU2_TR(0x4776d6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B4776d8:{NFSU2_TR(0x4776d8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4776d9:{NFSU2_TR(0x4776d9);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B4776dc:{NFSU2_TR(0x4776dc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4776de:{NFSU2_TR(0x4776de);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4776e0:{NFSU2_TR(0x4776e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4776e3:{NFSU2_TR(0x4776e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4776e6:{NFSU2_TR(0x4776e6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4776d3u);}goto L4776d3;}}
}
B4776e8:L4776e8:{c.instructions+=3;NFSU2_TR(0x4776e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4776eb:{NFSU2_TR(0x4776eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4776ec:{NFSU2_TR(0x4776ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4776f1ull));
TAIL_STATIC(0x46bb10u,46b);
}
B4776f1:L4776f1:{c.instructions+=7;NFSU2_TR(0x4776f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4776f4:{NFSU2_TR(0x4776f4);
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
B4776f7:{NFSU2_TR(0x4776f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4776f8:{NFSU2_TR(0x4776f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4776f9:{NFSU2_TR(0x4776f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4776fa:{NFSU2_TR(0x4776fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4776fb:{NFSU2_TR(0x4776fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4776fc:L4776fc:{c.instructions+=6;NFSU2_TR(0x4776fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4776fd:{NFSU2_TR(0x4776fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4776fe:{NFSU2_TR(0x4776fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4776ff:{NFSU2_TR(0x4776ff);
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
B477701:{NFSU2_TR(0x477701);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B477702:{NFSU2_TR(0x477702);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B477710:L477710:{c.instructions+=4;NFSU2_TR(0x477710);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477711:{NFSU2_TR(0x477711);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B477715:{NFSU2_TR(0x477715);
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
B477717:{NFSU2_TR(0x477717);
if(r1(R+518)){{goto L477750;}}
}
B477719:L477719:{c.instructions+=3;NFSU2_TR(0x477719);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47771b:{NFSU2_TR(0x47771b);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x4d525453ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x4d525453ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x4d525453ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B477721:{NFSU2_TR(0x477721);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L477750;}}
}
B477723:L477723:{c.instructions+=15;NFSU2_TR(0x477723);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B477727:{NFSU2_TR(0x477727);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B477729:{NFSU2_TR(0x477729);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47772a:{NFSU2_TR(0x47772a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B47772d:{NFSU2_TR(0x47772d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477730:{NFSU2_TR(0x477730);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477733:{NFSU2_TR(0x477733);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B477735:{NFSU2_TR(0x477735);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
__builtin_memmove((R+8),(U+0),1);
}
B477738:{NFSU2_TR(0x477738);
__builtin_memmove((R+4),(R+8),4);
}
B47773a:{NFSU2_TR(0x47773a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B47773c:{NFSU2_TR(0x47773c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B47773e:{NFSU2_TR(0x47773e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
__builtin_memmove((R+8),(U+0),1);
}
B477741:{NFSU2_TR(0x477741);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B477742:{NFSU2_TR(0x477742);
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
B477744:{NFSU2_TR(0x477744);
if(r1(R+518)){{goto L477750;}}
}
B477746:L477746:{c.instructions+=3;NFSU2_TR(0x477746);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477747:{NFSU2_TR(0x477747);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477748:{NFSU2_TR(0x477748);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47774dull));
TAIL_STATIC(0x465430u,465);
}
B47774d:L47774d:{c.instructions+=1;NFSU2_TR(0x47774d);
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
B477750:L477750:{c.instructions+=2;NFSU2_TR(0x477750);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B477751:{NFSU2_TR(0x477751);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B477760:L477760:{c.instructions+=3;NFSU2_TR(0x477760);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477764:{NFSU2_TR(0x477764);
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
B477766:{NFSU2_TR(0x477766);
if(r1(R+518)){{goto L4777ee;}}
}
B47776c:L47776c:{c.instructions+=4;NFSU2_TR(0x47776c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47776d:{NFSU2_TR(0x47776d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B47776f:{NFSU2_TR(0x47776f);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x4d525453ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x4d525453ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x4d525453ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B477775:{NFSU2_TR(0x477775);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4777ed;}}
}
B477777:L477777:{c.instructions+=3;NFSU2_TR(0x477777);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47777b:{NFSU2_TR(0x47777b);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B47777e:{NFSU2_TR(0x47777e);
if(r1(R+512)){{goto L4777ed;}}
}
B477780:L477780:{c.instructions+=4;NFSU2_TR(0x477780);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B477783:{NFSU2_TR(0x477783);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x8ull))));
}
B477786:{NFSU2_TR(0x477786);
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
B477788:{NFSU2_TR(0x477788);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4777ed;}}
}
B47778a:L47778a:{c.instructions+=2;NFSU2_TR(0x47778a);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0xfffffffeull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0xfffffffeull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0xfffffffeull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B47778d:{NFSU2_TR(0x47778d);
if(r1(R+518)){{goto L4777ed;}}
}
B47778f:L47778f:{c.instructions+=6;NFSU2_TR(0x47778f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B477792:{NFSU2_TR(0x477792);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477793:{NFSU2_TR(0x477793);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477794:{NFSU2_TR(0x477794);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477795:{NFSU2_TR(0x477795);
u8 U[4];
w4(U+0,u32(0xfffffffeull));
s4(u32(r4(R+0)),r4(U+0));
}
B47779b:{NFSU2_TR(0x47779b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4777a0ull));
TAIL_STATIC(0x464e50u,464);
}
B4777a0:L4777a0:{c.instructions+=4;NFSU2_TR(0x4777a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4777a3:{NFSU2_TR(0x4777a3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4777a6:{NFSU2_TR(0x4777a6);
__builtin_memmove((R+4),(R+28),4);
}
B4777a8:{NFSU2_TR(0x4777a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4777adull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B4777ad:L4777ad:{c.instructions+=3;NFSU2_TR(0x4777ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4777b0:{NFSU2_TR(0x4777b0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4777b3:{NFSU2_TR(0x4777b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4777bc;}}
}
B4777b5:L4777b5:{c.instructions+=1;NFSU2_TR(0x4777b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4777bc:L4777bc:{c.instructions+=2;NFSU2_TR(0x4777bc);
__builtin_memmove((R+4),(R+28),4);
}
B4777be:{NFSU2_TR(0x4777be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4777c3ull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B4777c3:L4777c3:{c.instructions+=4;NFSU2_TR(0x4777c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4777c4:{NFSU2_TR(0x4777c4);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B4777c7:{NFSU2_TR(0x4777c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4777c8:{NFSU2_TR(0x4777c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4777ed;}}
}
B4777ca:L4777ca:{c.instructions+=3;NFSU2_TR(0x4777ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4777cd:{NFSU2_TR(0x4777cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4777cf:{NFSU2_TR(0x4777cf);
if(r1(R+518)){{goto L4777e0;}}
}
B4777d1:L4777d1:{c.instructions+=4;NFSU2_TR(0x4777d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4777d4:{NFSU2_TR(0x4777d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4777d5:{NFSU2_TR(0x4777d5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4777d6:{NFSU2_TR(0x4777d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4777dbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x477220u);}goto L477220;}
}
B4777db:L4777db:{c.instructions+=3;NFSU2_TR(0x4777db);
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
B4777de:{NFSU2_TR(0x4777de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4777df:{NFSU2_TR(0x4777df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4777e0:L4777e0:{c.instructions+=4;NFSU2_TR(0x4777e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4777e3:{NFSU2_TR(0x4777e3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4777e4:{NFSU2_TR(0x4777e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4777e5:{NFSU2_TR(0x4777e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4777eaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x477220u);}goto L477220;}
}
B4777ea:L4777ea:{c.instructions+=1;NFSU2_TR(0x4777ea);
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
B4777ed:L4777ed:{c.instructions+=1;NFSU2_TR(0x4777ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4777ee:L4777ee:{c.instructions+=1;NFSU2_TR(0x4777ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4777f0:L4777f0:{c.instructions+=4;NFSU2_TR(0x4777f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4777f4:{NFSU2_TR(0x4777f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4777f8:{NFSU2_TR(0x4777f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4777f9:{NFSU2_TR(0x4777f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4777feull));
TAIL_STATIC(0x466d30u,466);
}
B4777fe:L4777fe:{c.instructions+=1;NFSU2_TR(0x4777fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B477800:L477800:{c.instructions+=8;NFSU2_TR(0x477800);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477801:{NFSU2_TR(0x477801);
__builtin_memmove((R+24),(R+4),4);
}
B477803:{NFSU2_TR(0x477803);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477805:{NFSU2_TR(0x477805);
u8 U[4];
w4(U+0,u32(0x78b71cull));
s4(u32(r4(R+24)),r4(U+0));
}
B47780b:{NFSU2_TR(0x47780b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B477812:{NFSU2_TR(0x477812);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B477819:{NFSU2_TR(0x477819);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B477820:{NFSU2_TR(0x477820);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477825ull));
TAIL_STATIC(0x723124u,723);
}
B477825:L477825:{c.instructions+=8;NFSU2_TR(0x477825);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B477829:{NFSU2_TR(0x477829);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B47782b:{NFSU2_TR(0x47782b);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B47782e:{NFSU2_TR(0x47782e);
w4(R+4,shl<u32>(r4(R+4),u64(u32(0x1ull))));
}
B477830:{NFSU2_TR(0x477830);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B477833:{NFSU2_TR(0x477833);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x50ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x50ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x50ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B477836:{NFSU2_TR(0x477836);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477839:{NFSU2_TR(0x477839);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L477862;}}
}
B47783b:L47783b:{c.instructions+=12;NFSU2_TR(0x47783b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47783f:{NFSU2_TR(0x47783f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477840:{NFSU2_TR(0x477840);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477841:{NFSU2_TR(0x477841);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B477844:{NFSU2_TR(0x477844);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B477847:{NFSU2_TR(0x477847);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477848:{NFSU2_TR(0x477848);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477849:{NFSU2_TR(0x477849);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47784b:{NFSU2_TR(0x47784b);
u8 U[4];
w4(U+0,u32(0x4777f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477850:{NFSU2_TR(0x477850);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477853:{NFSU2_TR(0x477853);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477856:{NFSU2_TR(0x477856);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47785bull));
TAIL_STATIC(0x723138u,723);
}
B47785b:L47785b:{c.instructions+=3;NFSU2_TR(0x47785b);
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
B47785e:{NFSU2_TR(0x47785e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477861:{NFSU2_TR(0x477861);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B477862:L477862:{c.instructions+=3;NFSU2_TR(0x477862);
__builtin_memmove((R+0),(R+24),4);
}
B477864:{NFSU2_TR(0x477864);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B477865:{NFSU2_TR(0x477865);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B477870:L477870:{c.instructions+=6;NFSU2_TR(0x477870);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477871:{NFSU2_TR(0x477871);
__builtin_memmove((R+24),(R+4),4);
}
B477873:{NFSU2_TR(0x477873);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477876:{NFSU2_TR(0x477876);
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
B477878:{NFSU2_TR(0x477878);
u8 U[4];
w4(U+0,u32(0x78b71cull));
s4(u32(r4(R+24)),r4(U+0));
}
B47787e:{NFSU2_TR(0x47787e);
if(r1(R+518)){{goto L47789d;}}
}
B477880:L477880:{c.instructions+=1;NFSU2_TR(0x477880);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477885ull));
TAIL_STATIC(0x721f99u,721);
}
B477885:L477885:{c.instructions+=3;NFSU2_TR(0x477885);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477888:{NFSU2_TR(0x477888);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477889:{NFSU2_TR(0x477889);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47788eull));
TAIL_STATIC(0x72387bu,723);
}
B47788e:L47788e:{c.instructions+=2;NFSU2_TR(0x47788e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B477891:{NFSU2_TR(0x477891);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477896ull));
TAIL_STATIC(0x721fa7u,721);
}
B477896:L477896:{c.instructions+=1;NFSU2_TR(0x477896);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47789d:L47789d:{c.instructions+=3;NFSU2_TR(0x47789d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4778a0:{NFSU2_TR(0x4778a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4778a1:{NFSU2_TR(0x4778a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4778a6ull));
TAIL_STATIC(0x72366au,723);
}
B4778a6:L4778a6:{c.instructions+=4;NFSU2_TR(0x4778a6);
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
B4778a9:{NFSU2_TR(0x4778a9);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4778af:{NFSU2_TR(0x4778af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4778b0:{NFSU2_TR(0x4778b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4778c0:L4778c0:{c.instructions+=6;NFSU2_TR(0x4778c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xa8ull))));
}
B4778c6:{NFSU2_TR(0x4778c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4778c7:{NFSU2_TR(0x4778c7);
__builtin_memmove((R+24),(R+4),4);
}
B4778c9:{NFSU2_TR(0x4778c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4778cc:{NFSU2_TR(0x4778cc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4778ce:{NFSU2_TR(0x4778ce);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L477a21;}}
}
B4778d4:L4778d4:{c.instructions+=3;NFSU2_TR(0x4778d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4778d7:{NFSU2_TR(0x4778d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4778d9:{NFSU2_TR(0x4778d9);
if(r1(R+518)){{goto L477a21;}}
}
B4778df:L4778df:{c.instructions+=3;NFSU2_TR(0x4778df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4778e2:{NFSU2_TR(0x4778e2);
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
B4778e4:{NFSU2_TR(0x4778e4);
if(r1(R+518)){{goto L477903;}}
}
B4778e6:L4778e6:{c.instructions+=1;NFSU2_TR(0x4778e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4778ebull));
TAIL_STATIC(0x721f99u,721);
}
B4778eb:L4778eb:{c.instructions+=3;NFSU2_TR(0x4778eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4778ee:{NFSU2_TR(0x4778ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4778ef:{NFSU2_TR(0x4778ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4778f4ull));
TAIL_STATIC(0x72387bu,723);
}
B4778f4:L4778f4:{c.instructions+=2;NFSU2_TR(0x4778f4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4778f7:{NFSU2_TR(0x4778f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4778fcull));
TAIL_STATIC(0x721fa7u,721);
}
B4778fc:L4778fc:{c.instructions+=1;NFSU2_TR(0x4778fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B477903:L477903:{c.instructions+=4;NFSU2_TR(0x477903);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47790a:{NFSU2_TR(0x47790a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47790b:{NFSU2_TR(0x47790b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47790e:{NFSU2_TR(0x47790e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477913ull));
TAIL_STATIC(0x466840u,466);
}
B477913:L477913:{c.instructions+=9;NFSU2_TR(0x477913);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B477916:{NFSU2_TR(0x477916);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B477919:{NFSU2_TR(0x477919);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47791a:{NFSU2_TR(0x47791a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47791d:{NFSU2_TR(0x47791d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477920:{NFSU2_TR(0x477920);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477923:{NFSU2_TR(0x477923);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47792a:{NFSU2_TR(0x47792a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47792d:{NFSU2_TR(0x47792d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477932ull));
TAIL_STATIC(0x466af0u,466);
}
B477932:L477932:{c.instructions+=9;NFSU2_TR(0x477932);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B477935:{NFSU2_TR(0x477935);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477938:{NFSU2_TR(0x477938);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B47793c:{NFSU2_TR(0x47793c);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B477940:{NFSU2_TR(0x477940);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477941:{NFSU2_TR(0x477941);
u8 U[6];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B477946:{NFSU2_TR(0x477946);
u8 U[5];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47794b:{NFSU2_TR(0x47794b);
u8 U[5];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+16))));
w1(U+4,u8(0x8ull));
s1(u32(r4(U+0)),r1(U+4));
}
B477950:{NFSU2_TR(0x477950);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477955ull));
TAIL_STATIC(0x72423eu,724);
}
B477955:L477955:{c.instructions+=4;NFSU2_TR(0x477955);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B477959:{NFSU2_TR(0x477959);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47795a:{NFSU2_TR(0x47795a);
u8 U[6];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w2(U+4,u16(0x4ull));
s2(u32(r4(U+0)),r2(U+4));
}
B477961:{NFSU2_TR(0x477961);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477966ull));
TAIL_STATIC(0x721a6bu,721);
}
B477966:L477966:{c.instructions+=2;NFSU2_TR(0x477966);
u8 U[5];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47796b:{NFSU2_TR(0x47796b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477970ull));
TAIL_STATIC(0x721f99u,721);
}
B477970:L477970:{c.instructions+=9;NFSU2_TR(0x477970);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B477974:{NFSU2_TR(0x477974);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477975:{NFSU2_TR(0x477975);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B477978:{NFSU2_TR(0x477978);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B47797c:{NFSU2_TR(0x47797c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47797d:{NFSU2_TR(0x47797d);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B477981:{NFSU2_TR(0x477981);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477982:{NFSU2_TR(0x477982);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477983:{NFSU2_TR(0x477983);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477988ull));
TAIL_STATIC(0x7231d4u,723);
}
B477988:L477988:{c.instructions+=4;NFSU2_TR(0x477988);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B47798b:{NFSU2_TR(0x47798b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47798d:{NFSU2_TR(0x47798d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477990:{NFSU2_TR(0x477990);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L477a0f;}}
}
B477992:L477992:{c.instructions+=7;NFSU2_TR(0x477992);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B477995:{NFSU2_TR(0x477995);
w4(R+4,shl<u32>(r4(R+4),u64(u32(0x1ull))));
}
B477997:{NFSU2_TR(0x477997);
__builtin_memmove((R+8),(R+4),4);
}
B477999:{NFSU2_TR(0x477999);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B47799c:{NFSU2_TR(0x47799c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47799d:{NFSU2_TR(0x47799d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4779a0:{NFSU2_TR(0x4779a0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4779a2:L4779a2:{c.instructions+=1;NFSU2_TR(0x4779a2);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4779a4;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4779a2u);}goto L4779a2;}
}
B4779a4:L4779a4:{c.instructions+=2;NFSU2_TR(0x4779a4);
__builtin_memmove((R+4),(R+8),4);
}
B4779a6:{NFSU2_TR(0x4779a6);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B4779a9:L4779a9:{c.instructions+=1;NFSU2_TR(0x4779a9);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L4779ab;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4779a9u);}goto L4779a9;}
}
B4779ab:L4779ab:{c.instructions+=6;NFSU2_TR(0x4779ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4779ae:{NFSU2_TR(0x4779ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4779b1:{NFSU2_TR(0x4779b1);
w4(R+4,shl<u32>(r4(R+4),u64(u32(0x1ull))));
}
B4779b3:{NFSU2_TR(0x4779b3);
__builtin_memmove((R+8),(R+4),4);
}
B4779b5:{NFSU2_TR(0x4779b5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B4779b8:{NFSU2_TR(0x4779b8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4779ba:L4779ba:{c.instructions+=1;NFSU2_TR(0x4779ba);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4779bc;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4779bau);}goto L4779ba;}
}
B4779bc:L4779bc:{c.instructions+=2;NFSU2_TR(0x4779bc);
__builtin_memmove((R+4),(R+8),4);
}
B4779be:{NFSU2_TR(0x4779be);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B4779c1:L4779c1:{c.instructions+=1;NFSU2_TR(0x4779c1);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L4779c3;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4779c1u);}goto L4779c1;}
}
B4779c3:L4779c3:{c.instructions+=16;NFSU2_TR(0x4779c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4779c6:{NFSU2_TR(0x4779c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4779c9:{NFSU2_TR(0x4779c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4779cd:{NFSU2_TR(0x4779cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4779d0:{NFSU2_TR(0x4779d0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+0))));
}
B4779d2:{NFSU2_TR(0x4779d2);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7fffffffull))));
}
B4779d8:{NFSU2_TR(0x4779d8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B4779da:{NFSU2_TR(0x4779da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4779dd:{NFSU2_TR(0x4779dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4779e0:{NFSU2_TR(0x4779e0);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4779e4:{NFSU2_TR(0x4779e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4779e8:{NFSU2_TR(0x4779e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4779eb:{NFSU2_TR(0x4779eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4779ec:{NFSU2_TR(0x4779ec);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4779ed:{NFSU2_TR(0x4779ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4779f1:{NFSU2_TR(0x4779f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4779f6ull));
TAIL_STATIC(0x723515u,723);
}
B4779f6:L4779f6:{c.instructions+=7;NFSU2_TR(0x4779f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4779f9:{NFSU2_TR(0x4779f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4779fc:{NFSU2_TR(0x4779fc);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B477a00:{NFSU2_TR(0x477a00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477a01:{NFSU2_TR(0x477a01);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477a02:{NFSU2_TR(0x477a02);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477a06:{NFSU2_TR(0x477a06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477a0bull));
TAIL_STATIC(0x723515u,723);
}
B477a0b:L477a0b:{c.instructions+=2;NFSU2_TR(0x477a0b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B477a0e:{NFSU2_TR(0x477a0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B477a0f:L477a0f:{c.instructions+=1;NFSU2_TR(0x477a0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477a14ull));
TAIL_STATIC(0x721fa7u,721);
}
B477a14:L477a14:{c.instructions+=4;NFSU2_TR(0x477a14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477a17:{NFSU2_TR(0x477a17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B477a18:{NFSU2_TR(0x477a18);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xa8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xa8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xa8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B477a1e:{NFSU2_TR(0x477a1e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B477a21:L477a21:{c.instructions+=4;NFSU2_TR(0x477a21);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B477a24:{NFSU2_TR(0x477a24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B477a25:{NFSU2_TR(0x477a25);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xa8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xa8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xa8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B477a2b:{NFSU2_TR(0x477a2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B477a30:L477a30:{c.instructions+=3;NFSU2_TR(0x477a30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477a31:{NFSU2_TR(0x477a31);
__builtin_memmove((R+24),(R+4),4);
}
B477a33:{NFSU2_TR(0x477a33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477a38ull));
TAIL_STATIC(0x467430u,467);
}
B477a38:L477a38:{c.instructions+=2;NFSU2_TR(0x477a38);
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
B477a3d:{NFSU2_TR(0x477a3d);
if(r1(R+518)){{goto L477a48;}}
}
B477a3f:L477a3f:{c.instructions+=2;NFSU2_TR(0x477a3f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477a40:{NFSU2_TR(0x477a40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477a45ull));
TAIL_STATIC(0x575630u,575);
}
B477a45:L477a45:{c.instructions+=1;NFSU2_TR(0x477a45);
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
B477a48:L477a48:{c.instructions+=3;NFSU2_TR(0x477a48);
__builtin_memmove((R+0),(R+24),4);
}
B477a4a:{NFSU2_TR(0x477a4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B477a4b:{NFSU2_TR(0x477a4b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B477a50:L477a50:{c.instructions+=21;NFSU2_TR(0x477a50);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477a54:{NFSU2_TR(0x477a54);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477a57:{NFSU2_TR(0x477a57);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477a5b:{NFSU2_TR(0x477a5b);
__builtin_memmove((R+8),(R+0),4);
}
B477a5d:{NFSU2_TR(0x477a5d);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xff00ull))));
}
B477a63:{NFSU2_TR(0x477a63);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477a66:{NFSU2_TR(0x477a66);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x100000ffull))));
}
B477a6b:{NFSU2_TR(0x477a6b);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x200000ull))));
}
B477a71:{NFSU2_TR(0x477a71);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B477a74:{NFSU2_TR(0x477a74);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B477a76:{NFSU2_TR(0x477a76);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477a7a:{NFSU2_TR(0x477a7a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B477a7d:{NFSU2_TR(0x477a7d);
w4(R+0,u32(r1(R+0)));
}
B477a80:{NFSU2_TR(0x477a80);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477a83:{NFSU2_TR(0x477a83);
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
B477a85:{NFSU2_TR(0x477a85);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477a88:{NFSU2_TR(0x477a88);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477a8b:{NFSU2_TR(0x477a8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477a8e:{NFSU2_TR(0x477a8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477a91:{NFSU2_TR(0x477a91);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
w4(U+4,u32(0x7fffull));
s4(u32(r4(U+0)),r4(U+4));
}
B477a98:{NFSU2_TR(0x477a98);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B477aa0:L477aa0:{c.instructions+=6;NFSU2_TR(0x477aa0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477aa1:{NFSU2_TR(0x477aa1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477aa2:{NFSU2_TR(0x477aa2);
__builtin_memmove((R+24),(R+4),4);
}
B477aa4:{NFSU2_TR(0x477aa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477aa7:{NFSU2_TR(0x477aa7);
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
B477aa9:{NFSU2_TR(0x477aa9);
if(r1(R+518)){{goto L477b5b;}}
}
B477aaf:L477aaf:{c.instructions+=2;NFSU2_TR(0x477aaf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477ab0:{NFSU2_TR(0x477ab0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477ab5ull));
TAIL_STATIC(0x467460u,467);
}
B477ab5:L477ab5:{c.instructions+=6;NFSU2_TR(0x477ab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B477ab8:{NFSU2_TR(0x477ab8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B477aba:{NFSU2_TR(0x477aba);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B477abd:{NFSU2_TR(0x477abd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B477ac0:{NFSU2_TR(0x477ac0);
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
B477ac2:{NFSU2_TR(0x477ac2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L477b5a;}}
}
B477ac8:L477ac8:{c.instructions+=4;NFSU2_TR(0x477ac8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477ac9:{NFSU2_TR(0x477ac9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477acd:{NFSU2_TR(0x477acd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477ace:{NFSU2_TR(0x477ace);
__builtin_memmove((R+28),(R+28),4);
}
B477ad0:L477ad0:{c.instructions+=13;NFSU2_TR(0x477ad0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B477ad2:{NFSU2_TR(0x477ad2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B477ad5:{NFSU2_TR(0x477ad5);
__builtin_memmove((R+4),(R+0),4);
}
B477ad7:{NFSU2_TR(0x477ad7);
__builtin_memmove((R+8),(R+0),2);
}
B477ada:{NFSU2_TR(0x477ada);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B477add:{NFSU2_TR(0x477add);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B477ae0:{NFSU2_TR(0x477ae0);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B477ae3:{NFSU2_TR(0x477ae3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B477ae6:{NFSU2_TR(0x477ae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477ae9:{NFSU2_TR(0x477ae9);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
}
B477aec:{NFSU2_TR(0x477aec);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B477aee:{NFSU2_TR(0x477aee);
w4(R+20,u32(0x82bc7cull));
}
B477af3:{NFSU2_TR(0x477af3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L477b0c;}}
}
B477af5:L477af5:{c.instructions+=9;NFSU2_TR(0x477af5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477af8:{NFSU2_TR(0x477af8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B477afb:{NFSU2_TR(0x477afb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B477afe:{NFSU2_TR(0x477afe);
w4(R+0,u32(s32(s16(r2(R+8)))));
}
B477b01:{NFSU2_TR(0x477b01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B477b03:{NFSU2_TR(0x477b03);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B477b05:{NFSU2_TR(0x477b05);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B477b07:{NFSU2_TR(0x477b07);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B477b0a:{NFSU2_TR(0x477b0a);
{goto L477b14;}
}
B477b0c:L477b0c:{c.instructions+=3;NFSU2_TR(0x477b0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B477b0f:{NFSU2_TR(0x477b0f);
w4(R+0,u32(s32(s16(r2(R+8)))));
}
B477b12:{NFSU2_TR(0x477b12);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B477b14:L477b14:{c.instructions+=2;NFSU2_TR(0x477b14);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffd8f0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffd8f0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B477b19:{NFSU2_TR(0x477b19);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L477b23;}}
}
B477b1b:L477b1b:{c.instructions+=2;NFSU2_TR(0x477b1b);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+12)),r4(U+0));
}
B477b21:{NFSU2_TR(0x477b21);
{goto L477b3a;}
}
B477b23:L477b23:{c.instructions+=2;NFSU2_TR(0x477b23);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B477b25:{NFSU2_TR(0x477b25);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L477b2f;}}
}
B477b27:L477b27:{c.instructions+=2;NFSU2_TR(0x477b27);
u8 U[4];
w4(U+0,u32(0x7fffull));
s4(u32(r4(R+12)),r4(U+0));
}
B477b2d:{NFSU2_TR(0x477b2d);
{goto L477b3a;}
}
B477b2f:L477b2f:{c.instructions+=2;NFSU2_TR(0x477b2f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477b30:{NFSU2_TR(0x477b30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477b35ull));
TAIL_STATIC(0x467ff0u,467);
}
B477b35:L477b35:{c.instructions+=2;NFSU2_TR(0x477b35);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B477b38:{NFSU2_TR(0x477b38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B477b3a:L477b3a:{c.instructions+=10;NFSU2_TR(0x477b3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B477b3d:{NFSU2_TR(0x477b3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B477b3f:{NFSU2_TR(0x477b3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477b43:{NFSU2_TR(0x477b43);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B477b46:{NFSU2_TR(0x477b46);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+4))));
}
B477b48:{NFSU2_TR(0x477b48);
w1(R+512,carry<u32>(r4(R+28),u32(0x4ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B477b4b:{NFSU2_TR(0x477b4b);
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
B477b4c:{NFSU2_TR(0x477b4c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+12)),r4(U+0));
}
B477b4e:{NFSU2_TR(0x477b4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477b52:{NFSU2_TR(0x477b52);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x477ad0u);}goto L477ad0;}}
}
B477b58:L477b58:{c.instructions+=2;NFSU2_TR(0x477b58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B477b59:{NFSU2_TR(0x477b59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B477b5a:L477b5a:{c.instructions+=1;NFSU2_TR(0x477b5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B477b5b:L477b5b:{c.instructions+=3;NFSU2_TR(0x477b5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B477b5c:{NFSU2_TR(0x477b5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B477b5d:{NFSU2_TR(0x477b5d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B477b60:L477b60:{c.instructions+=9;NFSU2_TR(0x477b60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477b61:{NFSU2_TR(0x477b61);
__builtin_memmove((R+24),(R+4),4);
}
B477b63:{NFSU2_TR(0x477b63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B477b66:{NFSU2_TR(0x477b66);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B477b68:{NFSU2_TR(0x477b68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477b6b:{NFSU2_TR(0x477b6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477b6e:{NFSU2_TR(0x477b6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477b71:{NFSU2_TR(0x477b71);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(r1(R+1))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B477b73:{NFSU2_TR(0x477b73);
if(r1(R+519)){{goto L477b9c;}}
}
B477b75:L477b75:{c.instructions+=5;NFSU2_TR(0x477b75);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fffull))));
}
B477b7a:{NFSU2_TR(0x477b7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477b7d:{NFSU2_TR(0x477b7d);
w4(R+0,u32(0-u32(r4(R+0))));
}
B477b7f:{NFSU2_TR(0x477b7f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477b80:{NFSU2_TR(0x477b80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477b85ull));
TAIL_STATIC(0x467ff0u,467);
}
B477b85:L477b85:{c.instructions+=7;NFSU2_TR(0x477b85);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B477b8b:{NFSU2_TR(0x477b8b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B477b8e:{NFSU2_TR(0x477b8e);
w4(R+4,u32(0x7fffull));
}
B477b93:{NFSU2_TR(0x477b93);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+0)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B477b95:{NFSU2_TR(0x477b95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477b98:{NFSU2_TR(0x477b98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B477b99:{NFSU2_TR(0x477b99);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B477b9c:L477b9c:{c.instructions+=5;NFSU2_TR(0x477b9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477b9f:{NFSU2_TR(0x477b9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477ba2:{NFSU2_TR(0x477ba2);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffff0000ull))));
}
B477ba7:{NFSU2_TR(0x477ba7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477ba8:{NFSU2_TR(0x477ba8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477badull));
TAIL_STATIC(0x467ff0u,467);
}
B477bad:L477bad:{c.instructions+=7;NFSU2_TR(0x477bad);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B477bb3:{NFSU2_TR(0x477bb3);
w4(R+8,u32(0x7fffull));
}
B477bb8:{NFSU2_TR(0x477bb8);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B477bba:{NFSU2_TR(0x477bba);
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
B477bbd:{NFSU2_TR(0x477bbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477bc0:{NFSU2_TR(0x477bc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B477bc1:{NFSU2_TR(0x477bc1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B477bd0:L477bd0:{c.instructions+=12;NFSU2_TR(0x477bd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477bd1:{NFSU2_TR(0x477bd1);
__builtin_memmove((R+24),(R+4),4);
}
B477bd3:{NFSU2_TR(0x477bd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477bd6:{NFSU2_TR(0x477bd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B477bd9:{NFSU2_TR(0x477bd9);
w4(R+4,u32(0x7fffull));
}
B477bde:{NFSU2_TR(0x477bde);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B477be0:{NFSU2_TR(0x477be0);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B477be4:{NFSU2_TR(0x477be4);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B477be7:{NFSU2_TR(0x477be7);
w4(R+0,u32(0x7fffull));
}
B477bec:{NFSU2_TR(0x477bec);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B477bee:{NFSU2_TR(0x477bee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477bef:{NFSU2_TR(0x477bef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477bf4ull));
TAIL_STATIC(0x468050u,468);
}
B477bf4:L477bf4:{c.instructions+=10;NFSU2_TR(0x477bf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B477bf7:{NFSU2_TR(0x477bf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B477bfa:{NFSU2_TR(0x477bfa);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B477bfc:{NFSU2_TR(0x477bfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B477bff:{NFSU2_TR(0x477bff);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xe0000000ull))));
}
B477c05:{NFSU2_TR(0x477c05);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B477c08:{NFSU2_TR(0x477c08);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x80000000ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B477c0e:{NFSU2_TR(0x477c0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477c11:{NFSU2_TR(0x477c11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B477c13:{NFSU2_TR(0x477c13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L477c1e;}}
}
B477c15:L477c15:{c.instructions+=2;NFSU2_TR(0x477c15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477c16:{NFSU2_TR(0x477c16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477c1bull));
TAIL_STATIC(0x467ff0u,467);
}
B477c1b:L477c1b:{c.instructions+=1;NFSU2_TR(0x477c1b);
u8 U[6];
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B477c1e:L477c1e:{c.instructions+=6;NFSU2_TR(0x477c1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B477c21:{NFSU2_TR(0x477c21);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(s64(s32(r4(R+0)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+8)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B477c24:{NFSU2_TR(0x477c24);
u8 U[47];
w4(U+39,u32(u32(u32(0xfull))&u32(u32(0x1full))));
__builtin_memmove((U+43),(R+8),4);
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+39))));
w1(U+24,u8((r4(U+39))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+39))-u32(u32(0x1ull))));
w4(U+29,sar<u32>(r4(U+43),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+39))==(u32(0x1ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+39))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B477c27:{NFSU2_TR(0x477c27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477c2a:{NFSU2_TR(0x477c2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B477c2b:{NFSU2_TR(0x477c2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B477c30:L477c30:{c.instructions+=6;NFSU2_TR(0x477c30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477c31:{NFSU2_TR(0x477c31);
__builtin_memmove((R+24),(R+4),4);
}
B477c33:{NFSU2_TR(0x477c33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477c36:{NFSU2_TR(0x477c36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B477c38:{NFSU2_TR(0x477c38);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B477c3a:{NFSU2_TR(0x477c3a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L477c40;}}
}
B477c3c:L477c3c:{c.instructions+=2;NFSU2_TR(0x477c3c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B477c3e:{NFSU2_TR(0x477c3e);
{goto L477c4c;}
}
B477c40:L477c40:{c.instructions+=2;NFSU2_TR(0x477c40);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B477c45:{NFSU2_TR(0x477c45);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L477c4c;}}
}
B477c47:L477c47:{c.instructions+=1;NFSU2_TR(0x477c47);
w4(R+0,u32(0x7fffull));
}
B477c4c:L477c4c:{c.instructions+=5;NFSU2_TR(0x477c4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B477c4f:{NFSU2_TR(0x477c4f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477c51:{NFSU2_TR(0x477c51);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477c52:{NFSU2_TR(0x477c52);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477c53:{NFSU2_TR(0x477c53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477c58ull));
TAIL_STATIC(0x468160u,468);
}
B477c58:L477c58:{c.instructions+=3;NFSU2_TR(0x477c58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477c59:{NFSU2_TR(0x477c59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477c5c:{NFSU2_TR(0x477c5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477c61ull));
TAIL_STATIC(0x468050u,468);
}
B477c61:L477c61:{c.instructions+=4;NFSU2_TR(0x477c61);
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
B477c64:{NFSU2_TR(0x477c64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477c67:{NFSU2_TR(0x477c67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B477c68:{NFSU2_TR(0x477c68);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B477c70:L477c70:{c.instructions+=17;NFSU2_TR(0x477c70);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477c74:{NFSU2_TR(0x477c74);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477c75:{NFSU2_TR(0x477c75);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477c76:{NFSU2_TR(0x477c76);
__builtin_memmove((R+24),(R+4),4);
}
B477c78:{NFSU2_TR(0x477c78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477c7b:{NFSU2_TR(0x477c7b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477c7f:{NFSU2_TR(0x477c7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477c82:{NFSU2_TR(0x477c82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477c85:{NFSU2_TR(0x477c85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B477c87:{NFSU2_TR(0x477c87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477c8a:{NFSU2_TR(0x477c8a);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B477c90:{NFSU2_TR(0x477c90);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477c91:{NFSU2_TR(0x477c91);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B477c94:{NFSU2_TR(0x477c94);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477c95:{NFSU2_TR(0x477c95);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B477c98:{NFSU2_TR(0x477c98);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B477c9a:{NFSU2_TR(0x477c9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477c9full));
TAIL_STATIC(0x43e910u,43e);
}
B477c9f:L477c9f:{c.instructions+=4;NFSU2_TR(0x477c9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x400ull))));
__builtin_memmove((R+4),(U+0),4);
}
B477ca5:{NFSU2_TR(0x477ca5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B477ca8:{NFSU2_TR(0x477ca8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B477caa:{NFSU2_TR(0x477caa);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L477cc7;}}
}
B477cac:L477cac:{c.instructions+=6;NFSU2_TR(0x477cac);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B477cb2:{NFSU2_TR(0x477cb2);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B477cb5:{NFSU2_TR(0x477cb5);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x1000ull))));
}
B477cbb:{NFSU2_TR(0x477cbb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477cbc:{NFSU2_TR(0x477cbc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477cbd:{NFSU2_TR(0x477cbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477cc2ull));
TAIL_STATIC(0x440820u,440);
}
B477cc2:L477cc2:{c.instructions+=2;NFSU2_TR(0x477cc2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B477cc5:{NFSU2_TR(0x477cc5);
__builtin_memmove((R+12),(R+0),4);
}
B477cc7:L477cc7:{c.instructions+=7;NFSU2_TR(0x477cc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B477cca:{NFSU2_TR(0x477cca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477ccd:{NFSU2_TR(0x477ccd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B477cd4:{NFSU2_TR(0x477cd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B477cd7:{NFSU2_TR(0x477cd7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B477cd9:{NFSU2_TR(0x477cd9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B477cdb:{NFSU2_TR(0x477cdb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L477cfe;}}
}
B477cdd:L477cdd:{c.instructions+=1;NFSU2_TR(0x477cdd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B477ce0:L477ce0:{c.instructions+=9;NFSU2_TR(0x477ce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B477ce3:{NFSU2_TR(0x477ce3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B477cea:{NFSU2_TR(0x477cea);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B477cf0:{NFSU2_TR(0x477cf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B477cf3:{NFSU2_TR(0x477cf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B477cf6:{NFSU2_TR(0x477cf6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B477cf7:{NFSU2_TR(0x477cf7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B477cfa:{NFSU2_TR(0x477cfa);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B477cfc:{NFSU2_TR(0x477cfc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x477ce0u);}goto L477ce0;}}
}
B477cfe:L477cfe:{c.instructions+=2;NFSU2_TR(0x477cfe);
__builtin_memmove((R+4),(R+24),4);
}
B477d00:{NFSU2_TR(0x477d00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477d05ull));
TAIL_STATIC(0x467610u,467);
}
B477d05:L477d05:{c.instructions+=4;NFSU2_TR(0x477d05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B477d06:{NFSU2_TR(0x477d06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B477d07:{NFSU2_TR(0x477d07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B477d08:{NFSU2_TR(0x477d08);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B477d10:L477d10:{c.instructions+=11;NFSU2_TR(0x477d10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477d11:{NFSU2_TR(0x477d11);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477d12:{NFSU2_TR(0x477d12);
__builtin_memmove((R+24),(R+4),4);
}
B477d14:{NFSU2_TR(0x477d14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477d1a:{NFSU2_TR(0x477d1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B477d20:{NFSU2_TR(0x477d20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477d21:{NFSU2_TR(0x477d21);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B477d23:{NFSU2_TR(0x477d23);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477d24:{NFSU2_TR(0x477d24);
u8 U[4];
w4(U+0,u32(0x78b73cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477d29:{NFSU2_TR(0x477d29);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477d2b:{NFSU2_TR(0x477d2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477d30ull));
TAIL_STATIC(0x4691c0u,469);
}
B477d30:L477d30:{c.instructions+=10;NFSU2_TR(0x477d30);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477d34:{NFSU2_TR(0x477d34);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B477d3b:{NFSU2_TR(0x477d3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477d41:{NFSU2_TR(0x477d41);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B477d43:{NFSU2_TR(0x477d43);
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
B477d46:{NFSU2_TR(0x477d46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477d4c:{NFSU2_TR(0x477d4c);
__builtin_memmove((R+0),(R+28),4);
}
B477d4e:{NFSU2_TR(0x477d4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B477d4f:{NFSU2_TR(0x477d4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B477d50:{NFSU2_TR(0x477d50);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B477d60:L477d60:{c.instructions+=6;NFSU2_TR(0x477d60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477d61:{NFSU2_TR(0x477d61);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477d62:{NFSU2_TR(0x477d62);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B477d66:{NFSU2_TR(0x477d66);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B477d68:{NFSU2_TR(0x477d68);
__builtin_memmove((R+24),(R+4),4);
}
B477d6a:{NFSU2_TR(0x477d6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L477d80;}}
}
B477d6c:L477d6c:{c.instructions+=9;NFSU2_TR(0x477d6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477d6f:{NFSU2_TR(0x477d6f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B477d71:{NFSU2_TR(0x477d71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477d74:{NFSU2_TR(0x477d74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477d77:{NFSU2_TR(0x477d77);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B477d78:{NFSU2_TR(0x477d78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B477d79:{NFSU2_TR(0x477d79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477d7c:{NFSU2_TR(0x477d7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B477d7d:{NFSU2_TR(0x477d7d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B477d80:L477d80:{c.instructions+=3;NFSU2_TR(0x477d80);
__builtin_memmove((R+4),gp(0x82af48),4);
}
B477d86:{NFSU2_TR(0x477d86);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477d87:{NFSU2_TR(0x477d87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477d8cull));
TAIL_STATIC(0x440e50u,440);
}
B477d8c:L477d8c:{c.instructions+=3;NFSU2_TR(0x477d8c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B477d8f:{NFSU2_TR(0x477d8f);
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
B477d91:{NFSU2_TR(0x477d91);
if(r1(R+518)){{goto L477d9b;}}
}
B477d93:L477d93:{c.instructions+=2;NFSU2_TR(0x477d93);
u8 U[4];
w4(U+0,u32(0x78a6bcull));
s4(u32(r4(R+0)),r4(U+0));
}
B477d99:{NFSU2_TR(0x477d99);
{goto L477d9d;}
}
B477d9b:L477d9b:{c.instructions+=1;NFSU2_TR(0x477d9b);
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
B477d9d:L477d9d:{c.instructions+=12;NFSU2_TR(0x477d9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B477da0:{NFSU2_TR(0x477da0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B477da3:{NFSU2_TR(0x477da3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477da6:{NFSU2_TR(0x477da6);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B477da9:{NFSU2_TR(0x477da9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477dac:{NFSU2_TR(0x477dac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B477dae:{NFSU2_TR(0x477dae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477daf:{NFSU2_TR(0x477daf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477db1:{NFSU2_TR(0x477db1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477db2:{NFSU2_TR(0x477db2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477db5:{NFSU2_TR(0x477db5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477db6:{NFSU2_TR(0x477db6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477db9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B477db9:L477db9:{c.instructions+=7;NFSU2_TR(0x477db9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477dbc:{NFSU2_TR(0x477dbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477dbf:{NFSU2_TR(0x477dbf);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B477dc0:{NFSU2_TR(0x477dc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B477dc1:{NFSU2_TR(0x477dc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477dc4:{NFSU2_TR(0x477dc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B477dc5:{NFSU2_TR(0x477dc5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B477dd0:L477dd0:{c.instructions+=3;NFSU2_TR(0x477dd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477dd1:{NFSU2_TR(0x477dd1);
__builtin_memmove((R+24),(R+4),4);
}
B477dd3:{NFSU2_TR(0x477dd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477dd8ull));
TAIL_STATIC(0x475240u,475);
}
B477dd8:L477dd8:{c.instructions+=2;NFSU2_TR(0x477dd8);
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
B477ddd:{NFSU2_TR(0x477ddd);
if(r1(R+518)){{goto L477de8;}}
}
B477ddf:L477ddf:{c.instructions+=2;NFSU2_TR(0x477ddf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477de0:{NFSU2_TR(0x477de0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477de5ull));
TAIL_STATIC(0x575630u,575);
}
B477de5:L477de5:{c.instructions+=1;NFSU2_TR(0x477de5);
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
B477de8:L477de8:{c.instructions+=3;NFSU2_TR(0x477de8);
__builtin_memmove((R+0),(R+24),4);
}
B477dea:{NFSU2_TR(0x477dea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B477deb:{NFSU2_TR(0x477deb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B477df0:L477df0:{c.instructions+=8;NFSU2_TR(0x477df0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477df1:{NFSU2_TR(0x477df1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477df2:{NFSU2_TR(0x477df2);
__builtin_memmove((R+24),(R+4),4);
}
B477df4:{NFSU2_TR(0x477df4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477df7:{NFSU2_TR(0x477df7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B477dfa:{NFSU2_TR(0x477dfa);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B477dfc:{NFSU2_TR(0x477dfc);
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
B477dfe:{NFSU2_TR(0x477dfe);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L477e06;}}
}
B477e00:L477e00:{c.instructions+=4;NFSU2_TR(0x477e00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477e03:{NFSU2_TR(0x477e03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B477e04:{NFSU2_TR(0x477e04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B477e05:{NFSU2_TR(0x477e05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B477e06:L477e06:{c.instructions+=7;NFSU2_TR(0x477e06);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B477e08:{NFSU2_TR(0x477e08);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477e09:{NFSU2_TR(0x477e09);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477e0a:{NFSU2_TR(0x477e0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477e0d:{NFSU2_TR(0x477e0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B477e0f:{NFSU2_TR(0x477e0f);
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
B477e11:{NFSU2_TR(0x477e11);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L477ea1;}}
}
B477e17:L477e17:{c.instructions+=12;NFSU2_TR(0x477e17);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+20),(U+0),4);
}
B477e1a:{NFSU2_TR(0x477e1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477e1d:{NFSU2_TR(0x477e1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B477e23:{NFSU2_TR(0x477e23);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B477e29:{NFSU2_TR(0x477e29);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B477e2b:{NFSU2_TR(0x477e2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B477e2e:{NFSU2_TR(0x477e2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477e34:{NFSU2_TR(0x477e34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477e37:{NFSU2_TR(0x477e37);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B477e39:{NFSU2_TR(0x477e39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477e3c:{NFSU2_TR(0x477e3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477e3f:{NFSU2_TR(0x477e3f);
if(r1(R+518)){{goto L477e46;}}
}
B477e41:L477e41:{c.instructions+=2;NFSU2_TR(0x477e41);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B477e44:{NFSU2_TR(0x477e44);
__builtin_memmove((R+12),(R+0),4);
}
B477e46:L477e46:{c.instructions+=5;NFSU2_TR(0x477e46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477e49:{NFSU2_TR(0x477e49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B477e4b:{NFSU2_TR(0x477e4b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B477e4d:{NFSU2_TR(0x477e4d);
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
B477e4f:{NFSU2_TR(0x477e4f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L477ea1;}}
}
B477e51:L477e51:{c.instructions+=3;NFSU2_TR(0x477e51);
__builtin_memmove((R+4),gp(0x82af4c),4);
}
B477e57:{NFSU2_TR(0x477e57);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477e58:{NFSU2_TR(0x477e58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477e5dull));
TAIL_STATIC(0x440e50u,440);
}
B477e5d:L477e5d:{c.instructions+=3;NFSU2_TR(0x477e5d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B477e60:{NFSU2_TR(0x477e60);
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
B477e62:{NFSU2_TR(0x477e62);
if(r1(R+518)){{goto L477e77;}}
}
B477e64:L477e64:{c.instructions+=4;NFSU2_TR(0x477e64);
u8 U[4];
w4(U+0,u32(0x78a6ecull));
s4(u32(r4(R+0)),r4(U+0));
}
B477e6a:{NFSU2_TR(0x477e6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B477e71:{NFSU2_TR(0x477e71);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B477e75:{NFSU2_TR(0x477e75);
{goto L477e79;}
}
B477e77:L477e77:{c.instructions+=1;NFSU2_TR(0x477e77);
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
B477e79:L477e79:{c.instructions+=11;NFSU2_TR(0x477e79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B477e7c:{NFSU2_TR(0x477e7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B477e7f:{NFSU2_TR(0x477e7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477e82:{NFSU2_TR(0x477e82);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B477e85:{NFSU2_TR(0x477e85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477e88:{NFSU2_TR(0x477e88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B477e8a:{NFSU2_TR(0x477e8a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477e8b:{NFSU2_TR(0x477e8b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477e8c:{NFSU2_TR(0x477e8c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477e8d:{NFSU2_TR(0x477e8d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477e8e:{NFSU2_TR(0x477e8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477e91ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B477e91:L477e91:{c.instructions+=7;NFSU2_TR(0x477e91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B477e94:{NFSU2_TR(0x477e94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B477e97:{NFSU2_TR(0x477e97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B477e99:{NFSU2_TR(0x477e99);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1cull))));
}
B477e9c:{NFSU2_TR(0x477e9c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B477e9d:{NFSU2_TR(0x477e9d);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B477e9f:{NFSU2_TR(0x477e9f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x477e51u);}goto L477e51;}}
}
B477ea1:L477ea1:{c.instructions+=5;NFSU2_TR(0x477ea1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B477ea2:{NFSU2_TR(0x477ea2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B477ea3:{NFSU2_TR(0x477ea3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B477ea4:{NFSU2_TR(0x477ea4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B477ea5:{NFSU2_TR(0x477ea5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B477eb0:L477eb0:{c.instructions+=8;NFSU2_TR(0x477eb0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477eb1:{NFSU2_TR(0x477eb1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477eb2:{NFSU2_TR(0x477eb2);
__builtin_memmove((R+24),(R+4),4);
}
B477eb4:{NFSU2_TR(0x477eb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477eb7:{NFSU2_TR(0x477eb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B477eba:{NFSU2_TR(0x477eba);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B477ebc:{NFSU2_TR(0x477ebc);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B477ebe:{NFSU2_TR(0x477ebe);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L477ec6;}}
}
B477ec0:L477ec0:{c.instructions+=4;NFSU2_TR(0x477ec0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477ec3:{NFSU2_TR(0x477ec3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B477ec4:{NFSU2_TR(0x477ec4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B477ec5:{NFSU2_TR(0x477ec5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B477ec6:L477ec6:{c.instructions+=7;NFSU2_TR(0x477ec6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B477ec8:{NFSU2_TR(0x477ec8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477ec9:{NFSU2_TR(0x477ec9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477ecc:{NFSU2_TR(0x477ecc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B477ece:{NFSU2_TR(0x477ece);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B477ed0:{NFSU2_TR(0x477ed0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477ed1:{NFSU2_TR(0x477ed1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L477f73;}}
}
B477ed7:L477ed7:{c.instructions+=12;NFSU2_TR(0x477ed7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B477eda:{NFSU2_TR(0x477eda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477edd:{NFSU2_TR(0x477edd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B477ee3:{NFSU2_TR(0x477ee3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B477ee9:{NFSU2_TR(0x477ee9);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B477eeb:{NFSU2_TR(0x477eeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B477eee:{NFSU2_TR(0x477eee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477ef4:{NFSU2_TR(0x477ef4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477ef7:{NFSU2_TR(0x477ef7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B477ef9:{NFSU2_TR(0x477ef9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477efc:{NFSU2_TR(0x477efc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477eff:{NFSU2_TR(0x477eff);
if(r1(R+518)){{goto L477f06;}}
}
B477f01:L477f01:{c.instructions+=2;NFSU2_TR(0x477f01);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B477f04:{NFSU2_TR(0x477f04);
__builtin_memmove((R+20),(R+0),4);
}
B477f06:L477f06:{c.instructions+=5;NFSU2_TR(0x477f06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477f09:{NFSU2_TR(0x477f09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B477f0b:{NFSU2_TR(0x477f0b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B477f0d:{NFSU2_TR(0x477f0d);
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
B477f0f:{NFSU2_TR(0x477f0f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L477f73;}}
}
B477f11:L477f11:{c.instructions+=3;NFSU2_TR(0x477f11);
__builtin_memmove((R+4),gp(0x82af3c),4);
}
B477f17:{NFSU2_TR(0x477f17);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477f18:{NFSU2_TR(0x477f18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477f1dull));
TAIL_STATIC(0x440e50u,440);
}
B477f1d:L477f1d:{c.instructions+=4;NFSU2_TR(0x477f1d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B477f1f:{NFSU2_TR(0x477f1f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B477f22:{NFSU2_TR(0x477f22);
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
B477f24:{NFSU2_TR(0x477f24);
if(r1(R+518)){{goto L477f3a;}}
}
B477f26:L477f26:{c.instructions+=4;NFSU2_TR(0x477f26);
u8 U[4];
w4(U+0,u32(0x78a6ccull));
s4(u32(r4(R+0)),r4(U+0));
}
B477f2c:{NFSU2_TR(0x477f2c);
__builtin_memmove(gp(0x82bc9c),(R+4),4);
}
B477f32:{NFSU2_TR(0x477f32);
__builtin_memmove(gp(0x82bca0),(R+4),4);
}
B477f38:{NFSU2_TR(0x477f38);
{goto L477f3c;}
}
B477f3a:L477f3a:{c.instructions+=1;NFSU2_TR(0x477f3a);
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
B477f3c:L477f3c:{c.instructions+=10;NFSU2_TR(0x477f3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B477f3f:{NFSU2_TR(0x477f3f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B477f42:{NFSU2_TR(0x477f42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477f45:{NFSU2_TR(0x477f45);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B477f48:{NFSU2_TR(0x477f48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477f4b:{NFSU2_TR(0x477f4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B477f4d:{NFSU2_TR(0x477f4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477f4e:{NFSU2_TR(0x477f4e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477f4f:{NFSU2_TR(0x477f4f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477f50:{NFSU2_TR(0x477f50);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477f53ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B477f53:L477f53:{c.instructions+=13;NFSU2_TR(0x477f53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B477f56:{NFSU2_TR(0x477f56);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B477f58:{NFSU2_TR(0x477f58);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B477f5b:{NFSU2_TR(0x477f5b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B477f5e:{NFSU2_TR(0x477f5e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B477f5f:{NFSU2_TR(0x477f5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477f62:{NFSU2_TR(0x477f62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B477f65:{NFSU2_TR(0x477f65);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B477f68:{NFSU2_TR(0x477f68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B477f6a:{NFSU2_TR(0x477f6a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B477f6b:{NFSU2_TR(0x477f6b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B477f6d:{NFSU2_TR(0x477f6d);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B477f71:{NFSU2_TR(0x477f71);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x477f11u);}goto L477f11;}}
}
B477f73:L477f73:{c.instructions+=5;NFSU2_TR(0x477f73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B477f74:{NFSU2_TR(0x477f74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B477f75:{NFSU2_TR(0x477f75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B477f76:{NFSU2_TR(0x477f76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B477f77:{NFSU2_TR(0x477f77);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B477f80:L477f80:{c.instructions+=9;NFSU2_TR(0x477f80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477f81:{NFSU2_TR(0x477f81);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477f82:{NFSU2_TR(0x477f82);
__builtin_memmove((R+24),(R+4),4);
}
B477f84:{NFSU2_TR(0x477f84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477f87:{NFSU2_TR(0x477f87);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B477f8a:{NFSU2_TR(0x477f8a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477f8b:{NFSU2_TR(0x477f8b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B477f8d:{NFSU2_TR(0x477f8d);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B477f8f:{NFSU2_TR(0x477f8f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L477f9b;}}
}
B477f91:L477f91:{c.instructions+=6;NFSU2_TR(0x477f91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477f94:{NFSU2_TR(0x477f94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477f97:{NFSU2_TR(0x477f97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B477f98:{NFSU2_TR(0x477f98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B477f99:{NFSU2_TR(0x477f99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B477f9a:{NFSU2_TR(0x477f9a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B477f9b:L477f9b:{c.instructions+=7;NFSU2_TR(0x477f9b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477f9c:{NFSU2_TR(0x477f9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B477f9f:{NFSU2_TR(0x477f9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477fa2:{NFSU2_TR(0x477fa2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B477fa4:{NFSU2_TR(0x477fa4);
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
B477fa6:{NFSU2_TR(0x477fa6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477fa7:{NFSU2_TR(0x477fa7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x478119u,478);}
}
B477fad:L477fad:{c.instructions+=6;NFSU2_TR(0x477fad);
u8 U[4];
w4(U+0,u32(0x78b78cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477fb2:{NFSU2_TR(0x477fb2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B477fb5:{NFSU2_TR(0x477fb5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477fb6:{NFSU2_TR(0x477fb6);
__builtin_memmove((R+4),(R+24),4);
}
B477fb8:{NFSU2_TR(0x477fb8);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B477fbb:{NFSU2_TR(0x477fbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477fc0ull));
TAIL_STATIC(0x457a60u,457);
}
B477fc0:L477fc0:{c.instructions+=5;NFSU2_TR(0x477fc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B477fc3:{NFSU2_TR(0x477fc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477fc6:{NFSU2_TR(0x477fc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477fc9:{NFSU2_TR(0x477fc9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B477fcb:{NFSU2_TR(0x477fcb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L477fe4;}}
}
B477fcd:L477fcd:{c.instructions+=5;NFSU2_TR(0x477fcd);
u8 U[4];
w4(U+0,u32(0x78b774ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477fd2:{NFSU2_TR(0x477fd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B477fd9:{NFSU2_TR(0x477fd9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B477fda:{NFSU2_TR(0x477fda);
__builtin_memmove((R+4),(R+24),4);
}
B477fdc:{NFSU2_TR(0x477fdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x477fe1ull));
TAIL_STATIC(0x457a60u,457);
}
B477fe1:L477fe1:{c.instructions+=1;NFSU2_TR(0x477fe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477fe4:L477fe4:{c.instructions+=8;NFSU2_TR(0x477fe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B477fe7:{NFSU2_TR(0x477fe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477fea:{NFSU2_TR(0x477fea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477fed:{NFSU2_TR(0x477fed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B477fef:{NFSU2_TR(0x477fef);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B477ff1:{NFSU2_TR(0x477ff1);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B477ff3:{NFSU2_TR(0x477ff3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B477ff7:{NFSU2_TR(0x477ff7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x478119u,478);}
}
B477ffd:L477ffd:{c.instructions+=1;NFSU2_TR(0x477ffd);
TAIL_STATIC(0x478001u,478);
}
B477fff:L477fff:{c.instructions+=1;NFSU2_TR(0x477fff);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
TAIL_STATIC(0x478001u,478);
}
XIT:NFSU2_TR_EXIT(0x477,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
