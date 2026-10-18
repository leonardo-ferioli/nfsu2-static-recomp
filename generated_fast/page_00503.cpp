#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_501(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5b6(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_61c(u8* __restrict R,Cpu& c);
u32 body_631(u8* __restrict R,Cpu& c);
u32 body_637(u8* __restrict R,Cpu& c);
u32 body_639(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x503,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x503,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_503(u8* __restrict R,Cpu& c);
u32 page_503(Cpu& c){return body_503(c.regs.data(),c);}
__attribute__((noinline)) u32 body_503(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x503003:goto L503003;
case 0x503006:c.instructions+=1;goto B503006;
case 0x503008:goto L503008;
case 0x50300d:c.instructions+=1;goto B50300d;
case 0x503010:goto L503010;
case 0x503013:c.instructions+=1;goto B503013;
case 0x503015:goto L503015;
case 0x503018:c.instructions+=1;goto B503018;
case 0x50301a:goto L50301a;
case 0x50301f:c.instructions+=1;goto B50301f;
case 0x503022:goto L503022;
case 0x503025:c.instructions+=1;goto B503025;
case 0x503027:goto L503027;
case 0x50302d:c.instructions+=1;goto B50302d;
case 0x50302f:goto L50302f;
case 0x503034:goto L503034;
case 0x503040:goto L503040;
case 0x503044:c.instructions+=3;goto B503044;
case 0x503046:c.instructions+=2;goto B503046;
case 0x503050:c.instructions+=1;goto B503050;
case 0x503052:goto L503052;
case 0x503058:c.instructions+=8;goto B503058;
case 0x50305e:c.instructions+=7;goto B50305e;
case 0x503061:c.instructions+=6;goto B503061;
case 0x503064:c.instructions+=5;goto B503064;
case 0x503067:c.instructions+=4;goto B503067;
case 0x503068:c.instructions+=3;goto B503068;
case 0x50306a:c.instructions+=2;goto B50306a;
case 0x503070:c.instructions+=1;goto B503070;
case 0x503072:goto L503072;
case 0x503078:goto L503078;
case 0x503080:goto L503080;
case 0x503087:c.instructions+=1;goto B503087;
case 0x503089:goto L503089;
case 0x50308e:c.instructions+=2;goto B50308e;
case 0x503090:c.instructions+=1;goto B503090;
case 0x503092:goto L503092;
case 0x503098:c.instructions+=5;goto B503098;
case 0x50309e:c.instructions+=4;goto B50309e;
case 0x5030a3:c.instructions+=3;goto B5030a3;
case 0x5030a9:c.instructions+=2;goto B5030a9;
case 0x5030ab:c.instructions+=1;goto B5030ab;
case 0x5030ad:goto L5030ad;
case 0x5030af:c.instructions+=1;goto B5030af;
case 0x5030b1:goto L5030b1;
case 0x5030b3:c.instructions+=1;goto B5030b3;
case 0x5030b4:goto L5030b4;
case 0x5030b6:c.instructions+=1;goto B5030b6;
case 0x5030c0:goto L5030c0;
case 0x5030c6:c.instructions+=3;goto B5030c6;
case 0x5030cb:c.instructions+=2;goto B5030cb;
case 0x5030cd:c.instructions+=1;goto B5030cd;
case 0x5030cf:goto L5030cf;
case 0x5030d5:c.instructions+=2;goto B5030d5;
case 0x5030d7:c.instructions+=1;goto B5030d7;
case 0x5030d9:goto L5030d9;
case 0x5030db:goto L5030db;
case 0x5030e0:goto L5030e0;
case 0x5030e2:c.instructions+=63;goto B5030e2;
case 0x5030e5:c.instructions+=62;goto B5030e5;
case 0x5030e9:c.instructions+=61;goto B5030e9;
case 0x5030f0:c.instructions+=60;goto B5030f0;
case 0x5030f3:c.instructions+=59;goto B5030f3;
case 0x5030f6:c.instructions+=58;goto B5030f6;
case 0x5030f9:c.instructions+=57;goto B5030f9;
case 0x5030fc:c.instructions+=56;goto B5030fc;
case 0x5030ff:c.instructions+=55;goto B5030ff;
case 0x503102:c.instructions+=54;goto B503102;
case 0x503105:c.instructions+=53;goto B503105;
case 0x503108:c.instructions+=52;goto B503108;
case 0x50310b:c.instructions+=51;goto B50310b;
case 0x50310e:c.instructions+=50;goto B50310e;
case 0x503111:c.instructions+=49;goto B503111;
case 0x503118:c.instructions+=48;goto B503118;
case 0x50311b:c.instructions+=47;goto B50311b;
case 0x50311d:c.instructions+=46;goto B50311d;
case 0x503120:c.instructions+=45;goto B503120;
case 0x503123:c.instructions+=44;goto B503123;
case 0x503126:c.instructions+=43;goto B503126;
case 0x503129:c.instructions+=42;goto B503129;
case 0x50312c:c.instructions+=41;goto B50312c;
case 0x50312f:c.instructions+=40;goto B50312f;
case 0x503131:c.instructions+=39;goto B503131;
case 0x503134:c.instructions+=38;goto B503134;
case 0x503137:c.instructions+=37;goto B503137;
case 0x50313a:c.instructions+=36;goto B50313a;
case 0x50313d:c.instructions+=35;goto B50313d;
case 0x50313f:c.instructions+=34;goto B50313f;
case 0x503142:c.instructions+=33;goto B503142;
case 0x503145:c.instructions+=32;goto B503145;
case 0x503148:c.instructions+=31;goto B503148;
case 0x50314b:c.instructions+=30;goto B50314b;
case 0x50314d:c.instructions+=29;goto B50314d;
case 0x503150:c.instructions+=28;goto B503150;
case 0x503153:c.instructions+=27;goto B503153;
case 0x503156:c.instructions+=26;goto B503156;
case 0x503159:c.instructions+=25;goto B503159;
case 0x50315c:c.instructions+=24;goto B50315c;
case 0x50315e:c.instructions+=23;goto B50315e;
case 0x503161:c.instructions+=22;goto B503161;
case 0x503164:c.instructions+=21;goto B503164;
case 0x503167:c.instructions+=20;goto B503167;
case 0x50316a:c.instructions+=19;goto B50316a;
case 0x503170:c.instructions+=18;goto B503170;
case 0x503172:c.instructions+=17;goto B503172;
case 0x503175:c.instructions+=16;goto B503175;
case 0x503178:c.instructions+=15;goto B503178;
case 0x50317b:c.instructions+=14;goto B50317b;
case 0x50317e:c.instructions+=13;goto B50317e;
case 0x503184:c.instructions+=12;goto B503184;
case 0x503186:c.instructions+=11;goto B503186;
case 0x503189:c.instructions+=10;goto B503189;
case 0x50318c:c.instructions+=9;goto B50318c;
case 0x50318f:c.instructions+=8;goto B50318f;
case 0x503192:c.instructions+=7;goto B503192;
case 0x503198:c.instructions+=6;goto B503198;
case 0x50319a:c.instructions+=5;goto B50319a;
case 0x50319d:c.instructions+=4;goto B50319d;
case 0x5031a0:c.instructions+=3;goto B5031a0;
case 0x5031a3:c.instructions+=2;goto B5031a3;
case 0x5031a6:c.instructions+=1;goto B5031a6;
case 0x5031b0:goto L5031b0;
case 0x5031b3:c.instructions+=5;goto B5031b3;
case 0x5031b7:c.instructions+=4;goto B5031b7;
case 0x5031bb:c.instructions+=3;goto B5031bb;
case 0x5031be:c.instructions+=2;goto B5031be;
case 0x5031c1:c.instructions+=1;goto B5031c1;
case 0x5031d0:goto L5031d0;
case 0x5031da:c.instructions+=2;goto B5031da;
case 0x5031e0:c.instructions+=1;goto B5031e0;
case 0x5031e2:goto L5031e2;
case 0x5031e5:goto L5031e5;
case 0x5031f0:goto L5031f0;
case 0x5031fa:c.instructions+=2;goto B5031fa;
case 0x503200:c.instructions+=1;goto B503200;
case 0x503202:goto L503202;
case 0x503205:goto L503205;
case 0x503210:goto L503210;
case 0x50321a:c.instructions+=2;goto B50321a;
case 0x503220:c.instructions+=1;goto B503220;
case 0x503222:goto L503222;
case 0x503228:goto L503228;
case 0x503230:goto L503230;
case 0x503234:c.instructions+=2;goto B503234;
case 0x503236:c.instructions+=1;goto B503236;
case 0x503238:goto L503238;
case 0x503242:c.instructions+=2;goto B503242;
case 0x503248:c.instructions+=1;goto B503248;
case 0x50324a:goto L50324a;
case 0x50324d:goto L50324d;
case 0x50324f:c.instructions+=3;goto B50324f;
case 0x503250:c.instructions+=2;goto B503250;
case 0x503251:c.instructions+=1;goto B503251;
case 0x503256:goto L503256;
case 0x503259:goto L503259;
case 0x503260:goto L503260;
case 0x503264:c.instructions+=2;goto B503264;
case 0x503266:c.instructions+=1;goto B503266;
case 0x503268:goto L503268;
case 0x503272:c.instructions+=2;goto B503272;
case 0x503278:c.instructions+=1;goto B503278;
case 0x50327a:goto L50327a;
case 0x50327d:goto L50327d;
case 0x50327f:c.instructions+=3;goto B50327f;
case 0x503280:c.instructions+=2;goto B503280;
case 0x503281:c.instructions+=1;goto B503281;
case 0x503286:goto L503286;
case 0x503289:goto L503289;
case 0x503290:goto L503290;
case 0x503294:c.instructions+=2;goto B503294;
case 0x503296:c.instructions+=1;goto B503296;
case 0x503298:goto L503298;
case 0x5032a2:c.instructions+=2;goto B5032a2;
case 0x5032a8:c.instructions+=1;goto B5032a8;
case 0x5032aa:goto L5032aa;
case 0x5032b0:goto L5032b0;
case 0x5032b2:c.instructions+=3;goto B5032b2;
case 0x5032b3:c.instructions+=2;goto B5032b3;
case 0x5032b4:c.instructions+=1;goto B5032b4;
case 0x5032b9:goto L5032b9;
case 0x5032bc:goto L5032bc;
case 0x5032c0:goto L5032c0;
case 0x5032c1:c.instructions+=4;goto B5032c1;
case 0x5032c3:c.instructions+=3;goto B5032c3;
case 0x5032c9:c.instructions+=2;goto B5032c9;
case 0x5032cb:c.instructions+=1;goto B5032cb;
case 0x5032cd:goto L5032cd;
case 0x5032ce:c.instructions+=1;goto B5032ce;
case 0x5032d3:goto L5032d3;
case 0x5032d6:c.instructions+=1;goto B5032d6;
case 0x5032e0:goto L5032e0;
case 0x5032e1:c.instructions+=1;goto B5032e1;
case 0x5032f0:goto L5032f0;
case 0x5032f4:c.instructions+=15;goto B5032f4;
case 0x5032f7:c.instructions+=14;goto B5032f7;
case 0x5032fc:c.instructions+=13;goto B5032fc;
case 0x503300:c.instructions+=12;goto B503300;
case 0x503303:c.instructions+=11;goto B503303;
case 0x50330a:c.instructions+=10;goto B50330a;
case 0x50330b:c.instructions+=9;goto B50330b;
case 0x50330c:c.instructions+=8;goto B50330c;
case 0x503313:c.instructions+=7;goto B503313;
case 0x503315:c.instructions+=6;goto B503315;
case 0x503317:c.instructions+=5;goto B503317;
case 0x50331a:c.instructions+=4;goto B50331a;
case 0x50331b:c.instructions+=3;goto B50331b;
case 0x50331d:c.instructions+=2;goto B50331d;
case 0x50331e:c.instructions+=1;goto B50331e;
case 0x503320:goto L503320;
case 0x503321:c.instructions+=5;goto B503321;
case 0x503327:c.instructions+=4;goto B503327;
case 0x503329:c.instructions+=3;goto B503329;
case 0x50332b:c.instructions+=2;goto B50332b;
case 0x50332c:c.instructions+=1;goto B50332c;
case 0x50332e:goto L50332e;
case 0x503332:c.instructions+=1;goto B503332;
case 0x503335:goto L503335;
case 0x503337:c.instructions+=1;goto B503337;
case 0x503339:goto L503339;
case 0x50333a:c.instructions+=3;goto B50333a;
case 0x503340:c.instructions+=2;goto B503340;
case 0x503342:c.instructions+=1;goto B503342;
case 0x503344:goto L503344;
case 0x503345:c.instructions+=3;goto B503345;
case 0x503346:c.instructions+=2;goto B503346;
case 0x503348:c.instructions+=1;goto B503348;
case 0x50334b:goto L50334b;
case 0x503351:c.instructions+=4;goto B503351;
case 0x503352:c.instructions+=3;goto B503352;
case 0x503353:c.instructions+=2;goto B503353;
case 0x503355:c.instructions+=1;goto B503355;
case 0x503360:goto L503360;
case 0x503364:c.instructions+=19;goto B503364;
case 0x503368:c.instructions+=18;goto B503368;
case 0x50336b:c.instructions+=17;goto B50336b;
case 0x50336c:c.instructions+=16;goto B50336c;
case 0x50336d:c.instructions+=15;goto B50336d;
case 0x503370:c.instructions+=14;goto B503370;
case 0x503376:c.instructions+=13;goto B503376;
case 0x50337a:c.instructions+=12;goto B50337a;
case 0x50337e:c.instructions+=11;goto B50337e;
case 0x503382:c.instructions+=10;goto B503382;
case 0x503386:c.instructions+=9;goto B503386;
case 0x50338a:c.instructions+=8;goto B50338a;
case 0x503390:c.instructions+=7;goto B503390;
case 0x503391:c.instructions+=6;goto B503391;
case 0x503393:c.instructions+=5;goto B503393;
case 0x503399:c.instructions+=4;goto B503399;
case 0x50339b:c.instructions+=3;goto B50339b;
case 0x50339d:c.instructions+=2;goto B50339d;
case 0x5033a0:c.instructions+=1;goto B5033a0;
case 0x5033a2:goto L5033a2;
case 0x5033a7:goto L5033a7;
case 0x5033ab:c.instructions+=5;goto B5033ab;
case 0x5033b1:c.instructions+=4;goto B5033b1;
case 0x5033b7:c.instructions+=3;goto B5033b7;
case 0x5033b9:c.instructions+=2;goto B5033b9;
case 0x5033bc:c.instructions+=1;goto B5033bc;
case 0x5033be:goto L5033be;
case 0x5033c3:goto L5033c3;
case 0x5033c7:c.instructions+=2;goto B5033c7;
case 0x5033cb:c.instructions+=1;goto B5033cb;
case 0x5033cd:goto L5033cd;
case 0x5033ce:c.instructions+=7;goto B5033ce;
case 0x5033d0:c.instructions+=6;goto B5033d0;
case 0x5033d1:c.instructions+=5;goto B5033d1;
case 0x5033d3:c.instructions+=4;goto B5033d3;
case 0x5033d4:c.instructions+=3;goto B5033d4;
case 0x5033d5:c.instructions+=2;goto B5033d5;
case 0x5033d6:c.instructions+=1;goto B5033d6;
case 0x5033d7:goto L5033d7;
case 0x5033d8:c.instructions+=7;goto B5033d8;
case 0x5033da:c.instructions+=6;goto B5033da;
case 0x5033db:c.instructions+=5;goto B5033db;
case 0x5033dd:c.instructions+=4;goto B5033dd;
case 0x5033de:c.instructions+=3;goto B5033de;
case 0x5033df:c.instructions+=2;goto B5033df;
case 0x5033e0:c.instructions+=1;goto B5033e0;
case 0x5033f0:goto L5033f0;
case 0x5033f4:c.instructions+=14;goto B5033f4;
case 0x5033f8:c.instructions+=13;goto B5033f8;
case 0x5033fb:c.instructions+=12;goto B5033fb;
case 0x5033fc:c.instructions+=11;goto B5033fc;
case 0x5033fd:c.instructions+=10;goto B5033fd;
case 0x503400:c.instructions+=9;goto B503400;
case 0x503406:c.instructions+=8;goto B503406;
case 0x50340d:c.instructions+=7;goto B50340d;
case 0x503411:c.instructions+=6;goto B503411;
case 0x503418:c.instructions+=5;goto B503418;
case 0x503419:c.instructions+=4;goto B503419;
case 0x50341b:c.instructions+=3;goto B50341b;
case 0x50341d:c.instructions+=2;goto B50341d;
case 0x50341f:c.instructions+=1;goto B50341f;
case 0x503421:goto L503421;
case 0x503426:goto L503426;
case 0x50342a:c.instructions+=4;goto B50342a;
case 0x503430:c.instructions+=3;goto B503430;
case 0x503432:c.instructions+=2;goto B503432;
case 0x503435:c.instructions+=1;goto B503435;
case 0x503437:goto L503437;
case 0x50343c:goto L50343c;
case 0x503443:c.instructions+=2;goto B503443;
case 0x50344a:c.instructions+=1;goto B50344a;
case 0x50344c:goto L50344c;
case 0x50344d:c.instructions+=7;goto B50344d;
case 0x50344f:c.instructions+=6;goto B50344f;
case 0x503450:c.instructions+=5;goto B503450;
case 0x503452:c.instructions+=4;goto B503452;
case 0x503453:c.instructions+=3;goto B503453;
case 0x503454:c.instructions+=2;goto B503454;
case 0x503455:c.instructions+=1;goto B503455;
case 0x503456:goto L503456;
case 0x503457:c.instructions+=7;goto B503457;
case 0x503459:c.instructions+=6;goto B503459;
case 0x50345a:c.instructions+=5;goto B50345a;
case 0x50345c:c.instructions+=4;goto B50345c;
case 0x50345d:c.instructions+=3;goto B50345d;
case 0x50345e:c.instructions+=2;goto B50345e;
case 0x50345f:c.instructions+=1;goto B50345f;
case 0x503460:goto L503460;
case 0x503463:c.instructions+=2;goto B503463;
case 0x503464:c.instructions+=1;goto B503464;
case 0x503469:goto L503469;
case 0x50346c:c.instructions+=2;goto B50346c;
case 0x50346e:c.instructions+=1;goto B50346e;
case 0x503470:goto L503470;
case 0x503473:c.instructions+=2;goto B503473;
case 0x503474:c.instructions+=1;goto B503474;
case 0x503479:goto L503479;
case 0x50347a:c.instructions+=1;goto B50347a;
case 0x50347f:goto L50347f;
case 0x503485:c.instructions+=2;goto B503485;
case 0x503488:c.instructions+=1;goto B503488;
case 0x503489:goto L503489;
case 0x50348c:c.instructions+=1;goto B50348c;
case 0x503490:goto L503490;
case 0x503493:c.instructions+=2;goto B503493;
case 0x503494:c.instructions+=1;goto B503494;
case 0x503499:goto L503499;
case 0x50349c:c.instructions+=2;goto B50349c;
case 0x50349e:c.instructions+=1;goto B50349e;
case 0x5034a0:goto L5034a0;
case 0x5034a3:c.instructions+=2;goto B5034a3;
case 0x5034a4:c.instructions+=1;goto B5034a4;
case 0x5034a9:goto L5034a9;
case 0x5034ac:c.instructions+=1;goto B5034ac;
case 0x5034ad:goto L5034ad;
case 0x5034b0:c.instructions+=1;goto B5034b0;
case 0x5034c0:goto L5034c0;
case 0x5034c1:c.instructions+=8;goto B5034c1;
case 0x5034c2:c.instructions+=7;goto B5034c2;
case 0x5034c4:c.instructions+=6;goto B5034c4;
case 0x5034ca:c.instructions+=5;goto B5034ca;
case 0x5034cb:c.instructions+=4;goto B5034cb;
case 0x5034cd:c.instructions+=3;goto B5034cd;
case 0x5034cf:c.instructions+=2;goto B5034cf;
case 0x5034d0:c.instructions+=1;goto B5034d0;
case 0x5034d2:goto L5034d2;
case 0x5034d6:c.instructions+=1;goto B5034d6;
case 0x5034d8:goto L5034d8;
case 0x5034da:c.instructions+=2;goto B5034da;
case 0x5034dc:c.instructions+=1;goto B5034dc;
case 0x5034df:goto L5034df;
case 0x5034e1:c.instructions+=1;goto B5034e1;
case 0x5034e3:goto L5034e3;
case 0x5034e9:c.instructions+=4;goto B5034e9;
case 0x5034ea:c.instructions+=3;goto B5034ea;
case 0x5034ed:c.instructions+=2;goto B5034ed;
case 0x5034ef:c.instructions+=1;goto B5034ef;
case 0x5034f1:goto L5034f1;
case 0x5034f2:c.instructions+=5;goto B5034f2;
case 0x5034f3:c.instructions+=4;goto B5034f3;
case 0x5034f4:c.instructions+=3;goto B5034f4;
case 0x5034f6:c.instructions+=2;goto B5034f6;
case 0x5034f7:c.instructions+=1;goto B5034f7;
case 0x5034fa:goto L5034fa;
case 0x5034fc:c.instructions+=7;goto B5034fc;
case 0x5034ff:c.instructions+=6;goto B5034ff;
case 0x503500:c.instructions+=5;goto B503500;
case 0x503501:c.instructions+=4;goto B503501;
case 0x503502:c.instructions+=3;goto B503502;
case 0x503504:c.instructions+=2;goto B503504;
case 0x503505:c.instructions+=1;goto B503505;
case 0x503510:goto L503510;
case 0x503511:c.instructions+=5;goto B503511;
case 0x503512:c.instructions+=4;goto B503512;
case 0x503516:c.instructions+=3;goto B503516;
case 0x503518:c.instructions+=2;goto B503518;
case 0x50351e:c.instructions+=1;goto B50351e;
case 0x503520:goto L503520;
case 0x503522:c.instructions+=2;goto B503522;
case 0x503524:c.instructions+=1;goto B503524;
case 0x503526:goto L503526;
case 0x503529:c.instructions+=1;goto B503529;
case 0x50352b:goto L50352b;
case 0x50352c:c.instructions+=3;goto B50352c;
case 0x50352f:c.instructions+=2;goto B50352f;
case 0x503532:c.instructions+=1;goto B503532;
case 0x503534:goto L503534;
case 0x503535:c.instructions+=3;goto B503535;
case 0x503536:c.instructions+=2;goto B503536;
case 0x503538:c.instructions+=1;goto B503538;
case 0x50353b:goto L50353b;
case 0x503542:c.instructions+=3;goto B503542;
case 0x503543:c.instructions+=2;goto B503543;
case 0x503544:c.instructions+=1;goto B503544;
case 0x503550:goto L503550;
case 0x503551:c.instructions+=5;goto B503551;
case 0x503557:c.instructions+=4;goto B503557;
case 0x503559:c.instructions+=3;goto B503559;
case 0x50355b:c.instructions+=2;goto B50355b;
case 0x50355c:c.instructions+=1;goto B50355c;
case 0x50355e:goto L50355e;
case 0x503562:c.instructions+=1;goto B503562;
case 0x503565:goto L503565;
case 0x503567:c.instructions+=1;goto B503567;
case 0x503569:goto L503569;
case 0x50356a:c.instructions+=3;goto B50356a;
case 0x50356d:c.instructions+=2;goto B50356d;
case 0x50356f:c.instructions+=1;goto B50356f;
case 0x503571:goto L503571;
case 0x503572:c.instructions+=3;goto B503572;
case 0x503573:c.instructions+=2;goto B503573;
case 0x503575:c.instructions+=1;goto B503575;
case 0x503578:goto L503578;
case 0x50357b:c.instructions+=4;goto B50357b;
case 0x50357c:c.instructions+=3;goto B50357c;
case 0x50357d:c.instructions+=2;goto B50357d;
case 0x50357f:c.instructions+=1;goto B50357f;
case 0x503590:goto L503590;
case 0x503594:c.instructions+=3;goto B503594;
case 0x503596:c.instructions+=2;goto B503596;
case 0x50359c:c.instructions+=1;goto B50359c;
case 0x5035a0:goto L5035a0;
case 0x5035a2:c.instructions+=1;goto B5035a2;
case 0x5035a4:goto L5035a4;
case 0x5035a5:c.instructions+=3;goto B5035a5;
case 0x5035a8:c.instructions+=2;goto B5035a8;
case 0x5035ab:c.instructions+=1;goto B5035ab;
case 0x5035ad:goto L5035ad;
case 0x5035af:c.instructions+=1;goto B5035af;
case 0x5035b2:goto L5035b2;
case 0x5035b4:c.instructions+=1;goto B5035b4;
case 0x5035c0:goto L5035c0;
case 0x5035c1:c.instructions+=5;goto B5035c1;
case 0x5035c2:c.instructions+=4;goto B5035c2;
case 0x5035c6:c.instructions+=3;goto B5035c6;
case 0x5035c8:c.instructions+=2;goto B5035c8;
case 0x5035ce:c.instructions+=1;goto B5035ce;
case 0x5035d0:goto L5035d0;
case 0x5035d2:c.instructions+=2;goto B5035d2;
case 0x5035d4:c.instructions+=1;goto B5035d4;
case 0x5035d6:goto L5035d6;
case 0x5035d8:c.instructions+=1;goto B5035d8;
case 0x5035da:goto L5035da;
case 0x5035db:c.instructions+=3;goto B5035db;
case 0x5035e1:c.instructions+=2;goto B5035e1;
case 0x5035e4:c.instructions+=1;goto B5035e4;
case 0x5035e6:goto L5035e6;
case 0x5035ec:c.instructions+=3;goto B5035ec;
case 0x5035ee:c.instructions+=2;goto B5035ee;
case 0x5035f0:c.instructions+=1;goto B5035f0;
case 0x5035f2:goto L5035f2;
case 0x5035f8:goto L5035f8;
case 0x5035fa:c.instructions+=1;goto B5035fa;
case 0x5035fc:goto L5035fc;
case 0x5035fd:c.instructions+=3;goto B5035fd;
case 0x503603:c.instructions+=2;goto B503603;
case 0x503605:c.instructions+=1;goto B503605;
case 0x503607:goto L503607;
case 0x503608:c.instructions+=3;goto B503608;
case 0x50360a:c.instructions+=2;goto B50360a;
case 0x50360b:c.instructions+=1;goto B50360b;
case 0x50360e:goto L50360e;
case 0x503614:c.instructions+=4;goto B503614;
case 0x503615:c.instructions+=3;goto B503615;
case 0x50361c:c.instructions+=2;goto B50361c;
case 0x50361d:c.instructions+=1;goto B50361d;
case 0x503620:goto L503620;
case 0x503626:c.instructions+=4;goto B503626;
case 0x503627:c.instructions+=3;goto B503627;
case 0x50362e:c.instructions+=2;goto B50362e;
case 0x50362f:c.instructions+=1;goto B50362f;
case 0x503640:goto L503640;
case 0x503641:c.instructions+=5;goto B503641;
case 0x503642:c.instructions+=4;goto B503642;
case 0x503646:c.instructions+=3;goto B503646;
case 0x503648:c.instructions+=2;goto B503648;
case 0x50364e:c.instructions+=1;goto B50364e;
case 0x503650:goto L503650;
case 0x503652:c.instructions+=2;goto B503652;
case 0x503654:c.instructions+=1;goto B503654;
case 0x503656:goto L503656;
case 0x503658:c.instructions+=1;goto B503658;
case 0x50365a:goto L50365a;
case 0x50365b:c.instructions+=3;goto B50365b;
case 0x503661:c.instructions+=2;goto B503661;
case 0x503664:c.instructions+=1;goto B503664;
case 0x503666:goto L503666;
case 0x503667:c.instructions+=3;goto B503667;
case 0x503669:c.instructions+=2;goto B503669;
case 0x50366a:c.instructions+=1;goto B50366a;
case 0x50366d:goto L50366d;
case 0x503673:c.instructions+=4;goto B503673;
case 0x503674:c.instructions+=3;goto B503674;
case 0x50367b:c.instructions+=2;goto B50367b;
case 0x50367c:c.instructions+=1;goto B50367c;
case 0x503680:goto L503680;
case 0x503681:c.instructions+=5;goto B503681;
case 0x503687:c.instructions+=4;goto B503687;
case 0x503689:c.instructions+=3;goto B503689;
case 0x50368b:c.instructions+=2;goto B50368b;
case 0x50368c:c.instructions+=1;goto B50368c;
case 0x50368e:goto L50368e;
case 0x503692:c.instructions+=1;goto B503692;
case 0x503698:goto L503698;
case 0x50369a:c.instructions+=1;goto B50369a;
case 0x50369c:goto L50369c;
case 0x50369d:c.instructions+=3;goto B50369d;
case 0x5036a3:c.instructions+=2;goto B5036a3;
case 0x5036a5:c.instructions+=1;goto B5036a5;
case 0x5036a7:goto L5036a7;
case 0x5036a8:c.instructions+=3;goto B5036a8;
case 0x5036a9:c.instructions+=2;goto B5036a9;
case 0x5036ab:c.instructions+=1;goto B5036ab;
case 0x5036ae:goto L5036ae;
case 0x5036b4:c.instructions+=4;goto B5036b4;
case 0x5036b5:c.instructions+=3;goto B5036b5;
case 0x5036b6:c.instructions+=2;goto B5036b6;
case 0x5036bd:c.instructions+=1;goto B5036bd;
case 0x5036c0:goto L5036c0;
case 0x5036c2:c.instructions+=1;goto B5036c2;
case 0x5036c8:goto L5036c8;
case 0x5036cb:c.instructions+=1;goto B5036cb;
case 0x5036cd:goto L5036cd;
case 0x5036ce:c.instructions+=3;goto B5036ce;
case 0x5036d4:c.instructions+=2;goto B5036d4;
case 0x5036d7:c.instructions+=1;goto B5036d7;
case 0x5036d9:goto L5036d9;
case 0x5036db:c.instructions+=1;goto B5036db;
case 0x5036dc:goto L5036dc;
case 0x5036e2:c.instructions+=2;goto B5036e2;
case 0x5036e9:c.instructions+=1;goto B5036e9;
case 0x5036f0:goto L5036f0;
case 0x5036f2:c.instructions+=6;goto B5036f2;
case 0x5036f3:c.instructions+=5;goto B5036f3;
case 0x5036f9:c.instructions+=4;goto B5036f9;
case 0x5036fa:c.instructions+=3;goto B5036fa;
case 0x5036fc:c.instructions+=2;goto B5036fc;
case 0x5036fe:c.instructions+=1;goto B5036fe;
case 0x503703:goto L503703;
case 0x503705:goto L503705;
case 0x503707:c.instructions+=3;goto B503707;
case 0x503709:c.instructions+=2;goto B503709;
case 0x50370e:c.instructions+=1;goto B50370e;
case 0x503710:goto L503710;
case 0x503712:c.instructions+=4;goto B503712;
case 0x503715:c.instructions+=3;goto B503715;
case 0x503718:c.instructions+=2;goto B503718;
case 0x503719:c.instructions+=1;goto B503719;
case 0x50371b:goto L50371b;
case 0x503721:c.instructions+=3;goto B503721;
case 0x503727:c.instructions+=2;goto B503727;
case 0x50372c:c.instructions+=1;goto B50372c;
case 0x503730:goto L503730;
case 0x503732:c.instructions+=4;goto B503732;
case 0x503735:c.instructions+=3;goto B503735;
case 0x50373b:c.instructions+=2;goto B50373b;
case 0x50373c:c.instructions+=1;goto B50373c;
case 0x50373e:goto L50373e;
case 0x503744:c.instructions+=13;goto B503744;
case 0x50374a:c.instructions+=12;goto B50374a;
case 0x503750:c.instructions+=11;goto B503750;
case 0x503756:c.instructions+=10;goto B503756;
case 0x50375c:c.instructions+=9;goto B50375c;
case 0x503762:c.instructions+=8;goto B503762;
case 0x503768:c.instructions+=7;goto B503768;
case 0x50376e:c.instructions+=6;goto B50376e;
case 0x503774:c.instructions+=5;goto B503774;
case 0x50377a:c.instructions+=4;goto B50377a;
case 0x503780:c.instructions+=3;goto B503780;
case 0x503786:c.instructions+=2;goto B503786;
case 0x50378b:c.instructions+=1;goto B50378b;
case 0x503790:goto L503790;
case 0x503792:c.instructions+=4;goto B503792;
case 0x503795:c.instructions+=3;goto B503795;
case 0x503798:c.instructions+=2;goto B503798;
case 0x503799:c.instructions+=1;goto B503799;
case 0x50379b:goto L50379b;
case 0x5037a1:c.instructions+=14;goto B5037a1;
case 0x5037a7:c.instructions+=13;goto B5037a7;
case 0x5037ad:c.instructions+=12;goto B5037ad;
case 0x5037b3:c.instructions+=11;goto B5037b3;
case 0x5037b9:c.instructions+=10;goto B5037b9;
case 0x5037bf:c.instructions+=9;goto B5037bf;
case 0x5037c5:c.instructions+=8;goto B5037c5;
case 0x5037cb:c.instructions+=7;goto B5037cb;
case 0x5037d1:c.instructions+=6;goto B5037d1;
case 0x5037d7:c.instructions+=5;goto B5037d7;
case 0x5037d8:c.instructions+=4;goto B5037d8;
case 0x5037de:c.instructions+=3;goto B5037de;
case 0x5037e4:c.instructions+=2;goto B5037e4;
case 0x5037e5:c.instructions+=1;goto B5037e5;
case 0x5037f0:goto L5037f0;
case 0x5037f2:c.instructions+=1;goto B5037f2;
case 0x5037f5:goto L5037f5;
case 0x5037fb:c.instructions+=2;goto B5037fb;
case 0x503801:c.instructions+=1;goto B503801;
case 0x503803:goto L503803;
case 0x503809:c.instructions+=3;goto B503809;
case 0x50380b:c.instructions+=2;goto B50380b;
case 0x50380e:c.instructions+=1;goto B50380e;
case 0x50380f:goto L50380f;
case 0x503811:c.instructions+=1;goto B503811;
case 0x503820:goto L503820;
case 0x503821:c.instructions+=36;goto B503821;
case 0x503824:c.instructions+=35;goto B503824;
case 0x503826:c.instructions+=34;goto B503826;
case 0x503828:c.instructions+=33;goto B503828;
case 0x50382c:c.instructions+=32;goto B50382c;
case 0x50382e:c.instructions+=31;goto B50382e;
case 0x503832:c.instructions+=30;goto B503832;
case 0x503835:c.instructions+=29;goto B503835;
case 0x503838:c.instructions+=28;goto B503838;
case 0x50383a:c.instructions+=27;goto B50383a;
case 0x50383d:c.instructions+=26;goto B50383d;
case 0x50383f:c.instructions+=25;goto B50383f;
case 0x503842:c.instructions+=24;goto B503842;
case 0x503845:c.instructions+=23;goto B503845;
case 0x503847:c.instructions+=22;goto B503847;
case 0x50384a:c.instructions+=21;goto B50384a;
case 0x50384c:c.instructions+=20;goto B50384c;
case 0x50384f:c.instructions+=19;goto B50384f;
case 0x503851:c.instructions+=18;goto B503851;
case 0x503854:c.instructions+=17;goto B503854;
case 0x503857:c.instructions+=16;goto B503857;
case 0x503859:c.instructions+=15;goto B503859;
case 0x50385c:c.instructions+=14;goto B50385c;
case 0x50385e:c.instructions+=13;goto B50385e;
case 0x503861:c.instructions+=12;goto B503861;
case 0x503863:c.instructions+=11;goto B503863;
case 0x503866:c.instructions+=10;goto B503866;
case 0x503869:c.instructions+=9;goto B503869;
case 0x50386b:c.instructions+=8;goto B50386b;
case 0x50386e:c.instructions+=7;goto B50386e;
case 0x503870:c.instructions+=6;goto B503870;
case 0x503873:c.instructions+=5;goto B503873;
case 0x503875:c.instructions+=4;goto B503875;
case 0x503878:c.instructions+=3;goto B503878;
case 0x50387b:c.instructions+=2;goto B50387b;
case 0x50387c:c.instructions+=1;goto B50387c;
case 0x503880:goto L503880;
case 0x503881:c.instructions+=7;goto B503881;
case 0x503882:c.instructions+=6;goto B503882;
case 0x503883:c.instructions+=5;goto B503883;
case 0x503885:c.instructions+=4;goto B503885;
case 0x503888:c.instructions+=3;goto B503888;
case 0x503889:c.instructions+=2;goto B503889;
case 0x50388a:c.instructions+=1;goto B50388a;
case 0x50388f:goto L50388f;
case 0x503895:c.instructions+=8;goto B503895;
case 0x503899:c.instructions+=7;goto B503899;
case 0x50389c:c.instructions+=6;goto B50389c;
case 0x50389e:c.instructions+=5;goto B50389e;
case 0x5038a0:c.instructions+=4;goto B5038a0;
case 0x5038a2:c.instructions+=3;goto B5038a2;
case 0x5038a3:c.instructions+=2;goto B5038a3;
case 0x5038a5:c.instructions+=1;goto B5038a5;
case 0x5038aa:goto L5038aa;
case 0x5038ae:c.instructions+=3;goto B5038ae;
case 0x5038b3:c.instructions+=2;goto B5038b3;
case 0x5038b5:c.instructions+=1;goto B5038b5;
case 0x5038b7:goto L5038b7;
case 0x5038bc:goto L5038bc;
case 0x5038bd:c.instructions+=2;goto B5038bd;
case 0x5038bf:c.instructions+=1;goto B5038bf;
case 0x5038c4:goto L5038c4;
case 0x5038c6:c.instructions+=2;goto B5038c6;
case 0x5038c8:c.instructions+=1;goto B5038c8;
case 0x5038cd:goto L5038cd;
case 0x5038cf:c.instructions+=1;goto B5038cf;
case 0x5038d2:goto L5038d2;
case 0x5038d5:c.instructions+=3;goto B5038d5;
case 0x5038d6:c.instructions+=2;goto B5038d6;
case 0x5038d8:c.instructions+=1;goto B5038d8;
case 0x5038dd:goto L5038dd;
case 0x5038e3:c.instructions+=4;goto B5038e3;
case 0x5038e5:c.instructions+=3;goto B5038e5;
case 0x5038e8:c.instructions+=2;goto B5038e8;
case 0x5038ea:c.instructions+=1;goto B5038ea;
case 0x5038ec:goto L5038ec;
case 0x5038ee:c.instructions+=6;goto B5038ee;
case 0x5038ef:c.instructions+=5;goto B5038ef;
case 0x5038f0:c.instructions+=4;goto B5038f0;
case 0x5038f1:c.instructions+=3;goto B5038f1;
case 0x5038f2:c.instructions+=2;goto B5038f2;
case 0x5038f7:c.instructions+=1;goto B5038f7;
case 0x5038fc:goto L5038fc;
case 0x5038fe:goto L5038fe;
case 0x503902:c.instructions+=3;goto B503902;
case 0x503903:c.instructions+=2;goto B503903;
case 0x503904:c.instructions+=1;goto B503904;
case 0x503909:goto L503909;
case 0x50390a:c.instructions+=3;goto B50390a;
case 0x50390d:c.instructions+=2;goto B50390d;
case 0x503913:c.instructions+=1;goto B503913;
case 0x503915:goto L503915;
case 0x503919:c.instructions+=6;goto B503919;
case 0x50391b:c.instructions+=5;goto B50391b;
case 0x50391d:c.instructions+=4;goto B50391d;
case 0x503923:c.instructions+=3;goto B503923;
case 0x503929:c.instructions+=2;goto B503929;
case 0x50392e:c.instructions+=1;goto B50392e;
case 0x503930:goto L503930;
case 0x503932:goto L503932;
case 0x503934:c.instructions+=2;goto B503934;
case 0x503936:c.instructions+=1;goto B503936;
case 0x50393b:goto L50393b;
case 0x50393c:c.instructions+=4;goto B50393c;
case 0x50393d:c.instructions+=3;goto B50393d;
case 0x50393e:c.instructions+=2;goto B50393e;
case 0x50393f:c.instructions+=1;goto B50393f;
case 0x503950:goto L503950;
case 0x503951:c.instructions+=10;goto B503951;
case 0x503952:c.instructions+=9;goto B503952;
case 0x503956:c.instructions+=8;goto B503956;
case 0x503959:c.instructions+=7;goto B503959;
case 0x50395f:c.instructions+=6;goto B50395f;
case 0x503960:c.instructions+=5;goto B503960;
case 0x503966:c.instructions+=4;goto B503966;
case 0x503967:c.instructions+=3;goto B503967;
case 0x503968:c.instructions+=2;goto B503968;
case 0x50396a:c.instructions+=1;goto B50396a;
case 0x50396f:goto L50396f;
case 0x503972:c.instructions+=4;goto B503972;
case 0x503975:c.instructions+=3;goto B503975;
case 0x503977:c.instructions+=2;goto B503977;
case 0x50397a:c.instructions+=1;goto B50397a;
case 0x503980:goto L503980;
case 0x503981:c.instructions+=2;goto B503981;
case 0x503983:c.instructions+=1;goto B503983;
case 0x503988:goto L503988;
case 0x50398a:c.instructions+=1;goto B50398a;
case 0x50398c:goto L50398c;
case 0x503990:c.instructions+=5;goto B503990;
case 0x503993:c.instructions+=4;goto B503993;
case 0x503996:c.instructions+=3;goto B503996;
case 0x503998:c.instructions+=2;goto B503998;
case 0x50399a:c.instructions+=1;goto B50399a;
case 0x50399c:goto L50399c;
case 0x5039a2:goto L5039a2;
case 0x5039a3:c.instructions+=3;goto B5039a3;
case 0x5039a6:c.instructions+=2;goto B5039a6;
case 0x5039ac:c.instructions+=1;goto B5039ac;
case 0x5039ae:goto L5039ae;
case 0x5039b4:c.instructions+=2;goto B5039b4;
case 0x5039ba:c.instructions+=1;goto B5039ba;
case 0x5039bf:goto L5039bf;
case 0x5039c1:goto L5039c1;
case 0x5039c2:c.instructions+=5;goto B5039c2;
case 0x5039c3:c.instructions+=4;goto B5039c3;
case 0x5039c4:c.instructions+=3;goto B5039c4;
case 0x5039ca:c.instructions+=2;goto B5039ca;
case 0x5039cb:c.instructions+=1;goto B5039cb;
case 0x5039d0:goto L5039d0;
case 0x5039d1:c.instructions+=3;goto B5039d1;
case 0x5039d3:c.instructions+=2;goto B5039d3;
case 0x5039d5:c.instructions+=1;goto B5039d5;
case 0x5039d8:goto L5039d8;
case 0x5039db:c.instructions+=4;goto B5039db;
case 0x5039df:c.instructions+=3;goto B5039df;
case 0x5039e0:c.instructions+=2;goto B5039e0;
case 0x5039e2:c.instructions+=1;goto B5039e2;
case 0x5039e7:goto L5039e7;
case 0x5039eb:c.instructions+=4;goto B5039eb;
case 0x5039ec:c.instructions+=3;goto B5039ec;
case 0x5039ed:c.instructions+=2;goto B5039ed;
case 0x5039ef:c.instructions+=1;goto B5039ef;
case 0x5039f4:goto L5039f4;
case 0x5039f5:c.instructions+=1;goto B5039f5;
case 0x503a00:goto L503a00;
case 0x503a02:c.instructions+=9;goto B503a02;
case 0x503a04:c.instructions+=8;goto B503a04;
case 0x503a07:c.instructions+=7;goto B503a07;
case 0x503a0a:c.instructions+=6;goto B503a0a;
case 0x503a0d:c.instructions+=5;goto B503a0d;
case 0x503a10:c.instructions+=4;goto B503a10;
case 0x503a13:c.instructions+=3;goto B503a13;
case 0x503a19:c.instructions+=2;goto B503a19;
case 0x503a20:c.instructions+=1;goto B503a20;
case 0x503a30:goto L503a30;
case 0x503a33:c.instructions+=1;goto B503a33;
case 0x503a40:goto L503a40;
case 0x503a41:c.instructions+=2;goto B503a41;
case 0x503a43:c.instructions+=1;goto B503a43;
case 0x503a48:goto L503a48;
case 0x503a4d:c.instructions+=1;goto B503a4d;
case 0x503a4f:goto L503a4f;
case 0x503a50:c.instructions+=1;goto B503a50;
case 0x503a55:goto L503a55;
case 0x503a58:goto L503a58;
case 0x503a5a:c.instructions+=2;goto B503a5a;
case 0x503a5b:c.instructions+=1;goto B503a5b;
case 0x503a60:goto L503a60;
case 0x503a63:c.instructions+=4;goto B503a63;
case 0x503a69:c.instructions+=3;goto B503a69;
case 0x503a6f:c.instructions+=2;goto B503a6f;
case 0x503a71:c.instructions+=1;goto B503a71;
case 0x503a73:goto L503a73;
case 0x503a79:c.instructions+=1;goto B503a79;
case 0x503a7a:goto L503a7a;
case 0x503a7d:c.instructions+=1;goto B503a7d;
case 0x503a80:goto L503a80;
case 0x503a81:c.instructions+=11;goto B503a81;
case 0x503a82:c.instructions+=10;goto B503a82;
case 0x503a86:c.instructions+=9;goto B503a86;
case 0x503a87:c.instructions+=8;goto B503a87;
case 0x503a89:c.instructions+=7;goto B503a89;
case 0x503a8b:c.instructions+=6;goto B503a8b;
case 0x503a8e:c.instructions+=5;goto B503a8e;
case 0x503a90:c.instructions+=4;goto B503a90;
case 0x503a92:c.instructions+=3;goto B503a92;
case 0x503a93:c.instructions+=2;goto B503a93;
case 0x503a95:c.instructions+=1;goto B503a95;
case 0x503a9a:goto L503a9a;
case 0x503a9e:c.instructions+=4;goto B503a9e;
case 0x503aa1:c.instructions+=3;goto B503aa1;
case 0x503aa2:c.instructions+=2;goto B503aa2;
case 0x503aa4:c.instructions+=1;goto B503aa4;
case 0x503aa9:goto L503aa9;
case 0x503aaa:c.instructions+=2;goto B503aaa;
case 0x503aac:c.instructions+=1;goto B503aac;
case 0x503ab1:goto L503ab1;
case 0x503ab6:c.instructions+=3;goto B503ab6;
case 0x503ab8:c.instructions+=2;goto B503ab8;
case 0x503abb:c.instructions+=1;goto B503abb;
case 0x503ac0:goto L503ac0;
case 0x503ac3:c.instructions+=3;goto B503ac3;
case 0x503ac5:c.instructions+=2;goto B503ac5;
case 0x503ac7:c.instructions+=1;goto B503ac7;
case 0x503acc:goto L503acc;
case 0x503acd:c.instructions+=3;goto B503acd;
case 0x503ace:c.instructions+=2;goto B503ace;
case 0x503acf:c.instructions+=1;goto B503acf;
case 0x503ae0:goto L503ae0;
case 0x503ae3:c.instructions+=2;goto B503ae3;
case 0x503ae4:c.instructions+=1;goto B503ae4;
case 0x503ae9:goto L503ae9;
case 0x503aec:c.instructions+=2;goto B503aec;
case 0x503aee:c.instructions+=1;goto B503aee;
case 0x503af0:goto L503af0;
case 0x503af3:c.instructions+=1;goto B503af3;
case 0x503af4:goto L503af4;
case 0x503afa:c.instructions+=1;goto B503afa;
case 0x503b00:goto L503b00;
case 0x503b03:c.instructions+=1;goto B503b03;
case 0x503b10:goto L503b10;
case 0x503b11:c.instructions+=6;goto B503b11;
case 0x503b12:c.instructions+=5;goto B503b12;
case 0x503b13:c.instructions+=4;goto B503b13;
case 0x503b17:c.instructions+=3;goto B503b17;
case 0x503b19:c.instructions+=2;goto B503b19;
case 0x503b1b:c.instructions+=1;goto B503b1b;
case 0x503b20:goto L503b20;
case 0x503b21:c.instructions+=1;goto B503b21;
case 0x503b26:goto L503b26;
case 0x503b29:c.instructions+=3;goto B503b29;
case 0x503b2b:c.instructions+=2;goto B503b2b;
case 0x503b30:c.instructions+=1;goto B503b30;
case 0x503b32:goto L503b32;
case 0x503b38:goto L503b38;
case 0x503b39:c.instructions+=4;goto B503b39;
case 0x503b3d:c.instructions+=3;goto B503b3d;
case 0x503b3e:c.instructions+=2;goto B503b3e;
case 0x503b3f:c.instructions+=1;goto B503b3f;
case 0x503b44:goto L503b44;
case 0x503b47:c.instructions+=8;goto B503b47;
case 0x503b49:c.instructions+=7;goto B503b49;
case 0x503b4b:c.instructions+=6;goto B503b4b;
case 0x503b4c:c.instructions+=5;goto B503b4c;
case 0x503b4d:c.instructions+=4;goto B503b4d;
case 0x503b4e:c.instructions+=3;goto B503b4e;
case 0x503b53:c.instructions+=2;goto B503b53;
case 0x503b57:c.instructions+=1;goto B503b57;
case 0x503b5c:goto L503b5c;
case 0x503b5f:c.instructions+=3;goto B503b5f;
case 0x503b65:c.instructions+=2;goto B503b65;
case 0x503b66:c.instructions+=1;goto B503b66;
case 0x503b6c:goto L503b6c;
case 0x503b73:c.instructions+=1;goto B503b73;
case 0x503b7a:goto L503b7a;
case 0x503b7c:c.instructions+=2;goto B503b7c;
case 0x503b82:c.instructions+=1;goto B503b82;
case 0x503b84:goto L503b84;
case 0x503b85:c.instructions+=2;goto B503b85;
case 0x503b88:c.instructions+=1;goto B503b88;
case 0x503b89:goto L503b89;
case 0x503b8d:c.instructions+=10;goto B503b8d;
case 0x503b8f:c.instructions+=9;goto B503b8f;
case 0x503b90:c.instructions+=8;goto B503b90;
case 0x503b93:c.instructions+=7;goto B503b93;
case 0x503b95:c.instructions+=6;goto B503b95;
case 0x503b96:c.instructions+=5;goto B503b96;
case 0x503b99:c.instructions+=4;goto B503b99;
case 0x503b9a:c.instructions+=3;goto B503b9a;
case 0x503ba1:c.instructions+=2;goto B503ba1;
case 0x503ba2:c.instructions+=1;goto B503ba2;
case 0x503ba5:goto L503ba5;
case 0x503ba7:c.instructions+=2;goto B503ba7;
case 0x503bad:c.instructions+=1;goto B503bad;
case 0x503baf:goto L503baf;
case 0x503bb0:c.instructions+=2;goto B503bb0;
case 0x503bb3:c.instructions+=1;goto B503bb3;
case 0x503bb4:goto L503bb4;
case 0x503bb8:c.instructions+=10;goto B503bb8;
case 0x503bba:c.instructions+=9;goto B503bba;
case 0x503bbb:c.instructions+=8;goto B503bbb;
case 0x503bbe:c.instructions+=7;goto B503bbe;
case 0x503bc0:c.instructions+=6;goto B503bc0;
case 0x503bc1:c.instructions+=5;goto B503bc1;
case 0x503bc4:c.instructions+=4;goto B503bc4;
case 0x503bc5:c.instructions+=3;goto B503bc5;
case 0x503bcc:c.instructions+=2;goto B503bcc;
case 0x503bcd:c.instructions+=1;goto B503bcd;
case 0x503bd0:goto L503bd0;
case 0x503bd2:c.instructions+=2;goto B503bd2;
case 0x503bd8:c.instructions+=1;goto B503bd8;
case 0x503bda:goto L503bda;
case 0x503bdb:c.instructions+=2;goto B503bdb;
case 0x503bde:c.instructions+=1;goto B503bde;
case 0x503bdf:goto L503bdf;
case 0x503be3:c.instructions+=10;goto B503be3;
case 0x503be5:c.instructions+=9;goto B503be5;
case 0x503be6:c.instructions+=8;goto B503be6;
case 0x503be9:c.instructions+=7;goto B503be9;
case 0x503beb:c.instructions+=6;goto B503beb;
case 0x503bec:c.instructions+=5;goto B503bec;
case 0x503bef:c.instructions+=4;goto B503bef;
case 0x503bf0:c.instructions+=3;goto B503bf0;
case 0x503bf7:c.instructions+=2;goto B503bf7;
case 0x503bf8:c.instructions+=1;goto B503bf8;
case 0x503bfb:goto L503bfb;
case 0x503bfd:c.instructions+=2;goto B503bfd;
case 0x503c03:c.instructions+=1;goto B503c03;
case 0x503c05:goto L503c05;
case 0x503c06:c.instructions+=2;goto B503c06;
case 0x503c09:c.instructions+=1;goto B503c09;
case 0x503c0a:goto L503c0a;
case 0x503c0e:c.instructions+=10;goto B503c0e;
case 0x503c10:c.instructions+=9;goto B503c10;
case 0x503c11:c.instructions+=8;goto B503c11;
case 0x503c14:c.instructions+=7;goto B503c14;
case 0x503c16:c.instructions+=6;goto B503c16;
case 0x503c17:c.instructions+=5;goto B503c17;
case 0x503c1a:c.instructions+=4;goto B503c1a;
case 0x503c1b:c.instructions+=3;goto B503c1b;
case 0x503c22:c.instructions+=2;goto B503c22;
case 0x503c23:c.instructions+=1;goto B503c23;
case 0x503c26:goto L503c26;
case 0x503c28:c.instructions+=2;goto B503c28;
case 0x503c2e:c.instructions+=1;goto B503c2e;
case 0x503c30:goto L503c30;
case 0x503c31:c.instructions+=2;goto B503c31;
case 0x503c34:c.instructions+=1;goto B503c34;
case 0x503c35:goto L503c35;
case 0x503c39:c.instructions+=10;goto B503c39;
case 0x503c3b:c.instructions+=9;goto B503c3b;
case 0x503c3c:c.instructions+=8;goto B503c3c;
case 0x503c3f:c.instructions+=7;goto B503c3f;
case 0x503c41:c.instructions+=6;goto B503c41;
case 0x503c42:c.instructions+=5;goto B503c42;
case 0x503c45:c.instructions+=4;goto B503c45;
case 0x503c46:c.instructions+=3;goto B503c46;
case 0x503c4d:c.instructions+=2;goto B503c4d;
case 0x503c4e:c.instructions+=1;goto B503c4e;
case 0x503c51:goto L503c51;
case 0x503c53:c.instructions+=2;goto B503c53;
case 0x503c59:c.instructions+=1;goto B503c59;
case 0x503c5b:goto L503c5b;
case 0x503c5c:c.instructions+=2;goto B503c5c;
case 0x503c5f:c.instructions+=1;goto B503c5f;
case 0x503c60:goto L503c60;
case 0x503c64:c.instructions+=10;goto B503c64;
case 0x503c66:c.instructions+=9;goto B503c66;
case 0x503c67:c.instructions+=8;goto B503c67;
case 0x503c6a:c.instructions+=7;goto B503c6a;
case 0x503c6c:c.instructions+=6;goto B503c6c;
case 0x503c6d:c.instructions+=5;goto B503c6d;
case 0x503c70:c.instructions+=4;goto B503c70;
case 0x503c71:c.instructions+=3;goto B503c71;
case 0x503c78:c.instructions+=2;goto B503c78;
case 0x503c79:c.instructions+=1;goto B503c79;
case 0x503c7c:goto L503c7c;
case 0x503c80:c.instructions+=7;goto B503c80;
case 0x503c82:c.instructions+=6;goto B503c82;
case 0x503c86:c.instructions+=5;goto B503c86;
case 0x503c87:c.instructions+=4;goto B503c87;
case 0x503c88:c.instructions+=3;goto B503c88;
case 0x503c8b:c.instructions+=2;goto B503c8b;
case 0x503c8c:c.instructions+=1;goto B503c8c;
case 0x503d50:goto L503d50;
case 0x503d54:c.instructions+=3;goto B503d54;
case 0x503d57:c.instructions+=2;goto B503d57;
case 0x503d5a:c.instructions+=1;goto B503d5a;
case 0x503d5c:goto L503d5c;
case 0x503d63:c.instructions+=1;goto B503d63;
case 0x503d6a:goto L503d6a;
case 0x503d6e:c.instructions+=6;goto B503d6e;
case 0x503d6f:c.instructions+=5;goto B503d6f;
case 0x503d73:c.instructions+=4;goto B503d73;
case 0x503d74:c.instructions+=3;goto B503d74;
case 0x503d75:c.instructions+=2;goto B503d75;
case 0x503d7d:c.instructions+=1;goto B503d7d;
case 0x503d82:goto L503d82;
case 0x503d86:c.instructions+=4;goto B503d86;
case 0x503d8b:c.instructions+=3;goto B503d8b;
case 0x503d8d:c.instructions+=2;goto B503d8d;
case 0x503d8f:c.instructions+=1;goto B503d8f;
case 0x503db0:goto L503db0;
case 0x503db4:c.instructions+=3;goto B503db4;
case 0x503db7:c.instructions+=2;goto B503db7;
case 0x503dba:c.instructions+=1;goto B503dba;
case 0x503dbc:goto L503dbc;
case 0x503dc3:c.instructions+=1;goto B503dc3;
case 0x503dca:goto L503dca;
case 0x503dcc:c.instructions+=1;goto B503dcc;
case 0x503dcf:goto L503dcf;
case 0x503dd3:c.instructions+=6;goto B503dd3;
case 0x503dd4:c.instructions+=5;goto B503dd4;
case 0x503dd8:c.instructions+=4;goto B503dd8;
case 0x503dd9:c.instructions+=3;goto B503dd9;
case 0x503dda:c.instructions+=2;goto B503dda;
case 0x503de2:c.instructions+=1;goto B503de2;
case 0x503de7:goto L503de7;
case 0x503deb:c.instructions+=5;goto B503deb;
case 0x503df0:c.instructions+=4;goto B503df0;
case 0x503df2:c.instructions+=3;goto B503df2;
case 0x503df4:c.instructions+=2;goto B503df4;
case 0x503df7:c.instructions+=1;goto B503df7;
case 0x503e10:goto L503e10;
case 0x503e11:c.instructions+=9;goto B503e11;
case 0x503e13:c.instructions+=8;goto B503e13;
case 0x503e17:c.instructions+=7;goto B503e17;
case 0x503e19:c.instructions+=6;goto B503e19;
case 0x503e1a:c.instructions+=5;goto B503e1a;
case 0x503e1d:c.instructions+=4;goto B503e1d;
case 0x503e1f:c.instructions+=3;goto B503e1f;
case 0x503e22:c.instructions+=2;goto B503e22;
case 0x503e28:c.instructions+=1;goto B503e28;
case 0x503e2a:goto L503e2a;
case 0x503e2b:c.instructions+=2;goto B503e2b;
case 0x503e2e:c.instructions+=1;goto B503e2e;
case 0x503e2f:goto L503e2f;
case 0x503e31:c.instructions+=4;goto B503e31;
case 0x503e33:c.instructions+=3;goto B503e33;
case 0x503e3a:c.instructions+=2;goto B503e3a;
case 0x503e3c:c.instructions+=1;goto B503e3c;
case 0x503e42:goto L503e42;
case 0x503e45:c.instructions+=1;goto B503e45;
case 0x503e47:goto L503e47;
case 0x503e48:c.instructions+=3;goto B503e48;
case 0x503e4b:c.instructions+=2;goto B503e4b;
case 0x503e4e:c.instructions+=1;goto B503e4e;
case 0x503e50:goto L503e50;
case 0x503e51:c.instructions+=1;goto B503e51;
case 0x503e54:goto L503e54;
case 0x503e58:c.instructions+=3;goto B503e58;
case 0x503e5f:c.instructions+=2;goto B503e5f;
case 0x503e60:c.instructions+=1;goto B503e60;
case 0x503e70:goto L503e70;
case 0x503e72:c.instructions+=9;goto B503e72;
case 0x503e74:c.instructions+=8;goto B503e74;
case 0x503e7a:c.instructions+=7;goto B503e7a;
case 0x503e7c:c.instructions+=6;goto B503e7c;
case 0x503e7f:c.instructions+=5;goto B503e7f;
case 0x503e82:c.instructions+=4;goto B503e82;
case 0x503e85:c.instructions+=3;goto B503e85;
case 0x503e86:c.instructions+=2;goto B503e86;
case 0x503e8b:c.instructions+=1;goto B503e8b;
case 0x503e8d:goto L503e8d;
case 0x503e8f:goto L503e8f;
case 0x503e94:c.instructions+=1;goto B503e94;
case 0x503e9a:goto L503e9a;
case 0x503e9c:goto L503e9c;
case 0x503ea2:c.instructions+=17;goto B503ea2;
case 0x503ea4:c.instructions+=16;goto B503ea4;
case 0x503ea7:c.instructions+=15;goto B503ea7;
case 0x503eaa:c.instructions+=14;goto B503eaa;
case 0x503ead:c.instructions+=13;goto B503ead;
case 0x503eb3:c.instructions+=12;goto B503eb3;
case 0x503eb5:c.instructions+=11;goto B503eb5;
case 0x503eb8:c.instructions+=10;goto B503eb8;
case 0x503ebb:c.instructions+=9;goto B503ebb;
case 0x503ebe:c.instructions+=8;goto B503ebe;
case 0x503ec4:c.instructions+=7;goto B503ec4;
case 0x503ec6:c.instructions+=6;goto B503ec6;
case 0x503ec9:c.instructions+=5;goto B503ec9;
case 0x503ecf:c.instructions+=4;goto B503ecf;
case 0x503ed1:c.instructions+=3;goto B503ed1;
case 0x503ed4:c.instructions+=2;goto B503ed4;
case 0x503ed9:c.instructions+=1;goto B503ed9;
case 0x503edf:goto L503edf;
case 0x503ee1:goto L503ee1;
case 0x503ee7:c.instructions+=7;goto B503ee7;
case 0x503ee9:c.instructions+=6;goto B503ee9;
case 0x503eec:c.instructions+=5;goto B503eec;
case 0x503eef:c.instructions+=4;goto B503eef;
case 0x503ef2:c.instructions+=3;goto B503ef2;
case 0x503ef8:c.instructions+=2;goto B503ef8;
case 0x503ef9:c.instructions+=1;goto B503ef9;
case 0x503f00:goto L503f00;
case 0x503f04:c.instructions+=8;goto B503f04;
case 0x503f08:c.instructions+=7;goto B503f08;
case 0x503f09:c.instructions+=6;goto B503f09;
case 0x503f0b:c.instructions+=5;goto B503f0b;
case 0x503f0c:c.instructions+=4;goto B503f0c;
case 0x503f0d:c.instructions+=3;goto B503f0d;
case 0x503f0f:c.instructions+=2;goto B503f0f;
case 0x503f14:c.instructions+=1;goto B503f14;
case 0x503f16:goto L503f16;
case 0x503f18:goto L503f18;
case 0x503f1e:c.instructions+=16;goto B503f1e;
case 0x503f23:c.instructions+=15;goto B503f23;
case 0x503f25:c.instructions+=14;goto B503f25;
case 0x503f2b:c.instructions+=13;goto B503f2b;
case 0x503f2d:c.instructions+=12;goto B503f2d;
case 0x503f2f:c.instructions+=11;goto B503f2f;
case 0x503f32:c.instructions+=10;goto B503f32;
case 0x503f35:c.instructions+=9;goto B503f35;
case 0x503f38:c.instructions+=8;goto B503f38;
case 0x503f3b:c.instructions+=7;goto B503f3b;
case 0x503f3e:c.instructions+=6;goto B503f3e;
case 0x503f41:c.instructions+=5;goto B503f41;
case 0x503f44:c.instructions+=4;goto B503f44;
case 0x503f47:c.instructions+=3;goto B503f47;
case 0x503f49:c.instructions+=2;goto B503f49;
case 0x503f4e:c.instructions+=1;goto B503f4e;
case 0x503f54:goto L503f54;
case 0x503f56:goto L503f56;
case 0x503f5c:c.instructions+=49;goto B503f5c;
case 0x503f61:c.instructions+=48;goto B503f61;
case 0x503f63:c.instructions+=47;goto B503f63;
case 0x503f69:c.instructions+=46;goto B503f69;
case 0x503f6b:c.instructions+=45;goto B503f6b;
case 0x503f6d:c.instructions+=44;goto B503f6d;
case 0x503f70:c.instructions+=43;goto B503f70;
case 0x503f73:c.instructions+=42;goto B503f73;
case 0x503f76:c.instructions+=41;goto B503f76;
case 0x503f79:c.instructions+=40;goto B503f79;
case 0x503f7c:c.instructions+=39;goto B503f7c;
case 0x503f7f:c.instructions+=38;goto B503f7f;
case 0x503f82:c.instructions+=37;goto B503f82;
case 0x503f85:c.instructions+=36;goto B503f85;
case 0x503f8b:c.instructions+=35;goto B503f8b;
case 0x503f8d:c.instructions+=34;goto B503f8d;
case 0x503f8f:c.instructions+=33;goto B503f8f;
case 0x503f91:c.instructions+=32;goto B503f91;
case 0x503f94:c.instructions+=31;goto B503f94;
case 0x503f97:c.instructions+=30;goto B503f97;
case 0x503f9a:c.instructions+=29;goto B503f9a;
case 0x503f9d:c.instructions+=28;goto B503f9d;
case 0x503fa0:c.instructions+=27;goto B503fa0;
case 0x503fa3:c.instructions+=26;goto B503fa3;
case 0x503fa6:c.instructions+=25;goto B503fa6;
case 0x503fa9:c.instructions+=24;goto B503fa9;
case 0x503faf:c.instructions+=23;goto B503faf;
case 0x503fb1:c.instructions+=22;goto B503fb1;
case 0x503fb3:c.instructions+=21;goto B503fb3;
case 0x503fb5:c.instructions+=20;goto B503fb5;
case 0x503fb8:c.instructions+=19;goto B503fb8;
case 0x503fbb:c.instructions+=18;goto B503fbb;
case 0x503fbe:c.instructions+=17;goto B503fbe;
case 0x503fc4:c.instructions+=16;goto B503fc4;
case 0x503fc6:c.instructions+=15;goto B503fc6;
case 0x503fc9:c.instructions+=14;goto B503fc9;
case 0x503fcb:c.instructions+=13;goto B503fcb;
case 0x503fce:c.instructions+=12;goto B503fce;
case 0x503fd1:c.instructions+=11;goto B503fd1;
case 0x503fd7:c.instructions+=10;goto B503fd7;
case 0x503fd9:c.instructions+=9;goto B503fd9;
case 0x503fdb:c.instructions+=8;goto B503fdb;
case 0x503fdd:c.instructions+=7;goto B503fdd;
case 0x503fe0:c.instructions+=6;goto B503fe0;
case 0x503fe3:c.instructions+=5;goto B503fe3;
case 0x503fe6:c.instructions+=4;goto B503fe6;
case 0x503fec:c.instructions+=3;goto B503fec;
case 0x503fef:c.instructions+=2;goto B503fef;
case 0x503ff1:c.instructions+=1;goto B503ff1;
case 0x503ff6:goto L503ff6;
case 0x503ff8:goto L503ff8;
case 0x503ffa:c.instructions+=1;goto B503ffa;
default:missing_instruction(c.pc);}
B503003:L503003:{c.instructions+=2;NFSU2_TR(0x503003);
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
B503006:{NFSU2_TR(0x503006);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L503010;}}
}
B503008:L503008:{c.instructions+=2;NFSU2_TR(0x503008);
w4(R+0,u32(0x78f530ull));
}
B50300d:{NFSU2_TR(0x50300d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503010:L503010:{c.instructions+=2;NFSU2_TR(0x503010);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B503013:{NFSU2_TR(0x503013);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x503008u);}goto L503008;}}
}
B503015:L503015:{c.instructions+=2;NFSU2_TR(0x503015);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B503018:{NFSU2_TR(0x503018);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L503022;}}
}
B50301a:L50301a:{c.instructions+=2;NFSU2_TR(0x50301a);
w4(R+0,u32(0x78f398ull));
}
B50301f:{NFSU2_TR(0x50301f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503022:L503022:{c.instructions+=2;NFSU2_TR(0x503022);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B503025:{NFSU2_TR(0x503025);
if(r1(R+518)){{goto L50302f;}}
}
B503027:L503027:{c.instructions+=2;NFSU2_TR(0x503027);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x200ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x200ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50302d:{NFSU2_TR(0x50302d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L503034;}}
}
B50302f:L50302f:{c.instructions+=1;NFSU2_TR(0x50302f);
w4(R+0,u32(0x78f320ull));
}
B503034:L503034:{c.instructions+=1;NFSU2_TR(0x503034);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503040:L503040:{c.instructions+=4;NFSU2_TR(0x503040);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B503044:{NFSU2_TR(0x503044);
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
B503046:{NFSU2_TR(0x503046);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x16774ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B503050:{NFSU2_TR(0x503050);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L503078;}}
}
B503052:L503052:{c.instructions+=9;NFSU2_TR(0x503052);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x156a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B503058:{NFSU2_TR(0x503058);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xab18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50305e:{NFSU2_TR(0x50305e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B503061:{NFSU2_TR(0x503061);
__builtin_memmove((R+0),(R+518),1);
}
B503064:{NFSU2_TR(0x503064);
w4(R+0,u32(r1(R+0)));
}
B503067:{NFSU2_TR(0x503067);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B503068:{NFSU2_TR(0x503068);
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
B50306a:{NFSU2_TR(0x50306a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xab18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503070:{NFSU2_TR(0x503070);
if(r1(R+518)){{goto L503078;}}
}
B503072:L503072:{c.instructions+=1;NFSU2_TR(0x503072);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15664ull))));
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
B503078:L503078:{c.instructions+=1;NFSU2_TR(0x503078);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503080:L503080:{c.instructions+=2;NFSU2_TR(0x503080);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x156a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B503087:{NFSU2_TR(0x503087);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5030b4;}}
}
B503089:L503089:{c.instructions+=3;NFSU2_TR(0x503089);
__builtin_memmove((R+0),gp(0x85ef48),4);
}
B50308e:{NFSU2_TR(0x50308e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B503090:{NFSU2_TR(0x503090);
if(r1(R+518)){{goto L5030b4;}}
}
B503092:L503092:{c.instructions+=6;NFSU2_TR(0x503092);
__builtin_memmove((R+4),gp(0x85ef4c),4);
}
B503098:{NFSU2_TR(0x503098);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xd24ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B50309e:{NFSU2_TR(0x50309e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xd24ull))));
}
B5030a3:{NFSU2_TR(0x5030a3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x85bab8ull))));
}
B5030a9:{NFSU2_TR(0x5030a9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5030ab:{NFSU2_TR(0x5030ab);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5030b4;}}
}
B5030ad:L5030ad:{c.instructions+=2;NFSU2_TR(0x5030ad);
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
B5030af:{NFSU2_TR(0x5030af);
if(r1(R+518)){{goto L5030b4;}}
}
B5030b1:L5030b1:{c.instructions+=2;NFSU2_TR(0x5030b1);
w1(R+0,u8(0x1ull));
}
B5030b3:{NFSU2_TR(0x5030b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5030b4:L5030b4:{c.instructions+=2;NFSU2_TR(0x5030b4);
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
B5030b6:{NFSU2_TR(0x5030b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5030c0:L5030c0:{c.instructions+=4;NFSU2_TR(0x5030c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x156a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5030c6:{NFSU2_TR(0x5030c6);
w4(R+0,u32(0x1ull));
}
B5030cb:{NFSU2_TR(0x5030cb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5030cd:{NFSU2_TR(0x5030cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5030d9;}}
}
B5030cf:L5030cf:{c.instructions+=3;NFSU2_TR(0x5030cf);
__builtin_memmove((R+4),gp(0x85ba65),1);
}
B5030d5:{NFSU2_TR(0x5030d5);
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
B5030d7:{NFSU2_TR(0x5030d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5030db;}}
}
B5030d9:L5030d9:{c.instructions+=1;NFSU2_TR(0x5030d9);
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
B5030db:L5030db:{c.instructions+=1;NFSU2_TR(0x5030db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5030e0:L5030e0:{c.instructions+=64;NFSU2_TR(0x5030e0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5030e2:{NFSU2_TR(0x5030e2);
u8 U[1];
w1(U+0,u8(0x6ull));
s1(u32(r4(R+4)),r1(U+0));
}
B5030e5:{NFSU2_TR(0x5030e5);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5030e9:{NFSU2_TR(0x5030e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5030f0:{NFSU2_TR(0x5030f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5030f3:{NFSU2_TR(0x5030f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5030f6:{NFSU2_TR(0x5030f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5030f9:{NFSU2_TR(0x5030f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5030fc:{NFSU2_TR(0x5030fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5030ff:{NFSU2_TR(0x5030ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B503102:{NFSU2_TR(0x503102);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1bull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B503105:{NFSU2_TR(0x503105);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x45ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B503108:{NFSU2_TR(0x503108);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x46ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B50310b:{NFSU2_TR(0x50310b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B50310e:{NFSU2_TR(0x50310e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4bull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B503111:{NFSU2_TR(0x503111);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B503118:{NFSU2_TR(0x503118);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50311b:{NFSU2_TR(0x50311b);
w1(R+8,u8(0x1ull));
}
B50311d:{NFSU2_TR(0x50311d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B503120:{NFSU2_TR(0x503120);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x19ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B503123:{NFSU2_TR(0x503123);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1aull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B503126:{NFSU2_TR(0x503126);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x49ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B503129:{NFSU2_TR(0x503129);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4aull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B50312c:{NFSU2_TR(0x50312c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((R+8),(U+0),4);
}
B50312f:{NFSU2_TR(0x50312f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B503131:{NFSU2_TR(0x503131);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503134:{NFSU2_TR(0x503134);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503137:{NFSU2_TR(0x503137);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B50313a:{NFSU2_TR(0x50313a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x29ull))));
__builtin_memmove((R+8),(U+0),4);
}
B50313d:{NFSU2_TR(0x50313d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B50313f:{NFSU2_TR(0x50313f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503142:{NFSU2_TR(0x503142);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503145:{NFSU2_TR(0x503145);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B503148:{NFSU2_TR(0x503148);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((R+8),(U+0),4);
}
B50314b:{NFSU2_TR(0x50314b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B50314d:{NFSU2_TR(0x50314d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503150:{NFSU2_TR(0x503150);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503153:{NFSU2_TR(0x503153);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503156:{NFSU2_TR(0x503156);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503159:{NFSU2_TR(0x503159);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((R+8),(U+0),4);
}
B50315c:{NFSU2_TR(0x50315c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B50315e:{NFSU2_TR(0x50315e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503161:{NFSU2_TR(0x503161);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503164:{NFSU2_TR(0x503164);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503167:{NFSU2_TR(0x503167);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50316a:{NFSU2_TR(0x50316a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((R+8),(U+0),4);
}
B503170:{NFSU2_TR(0x503170);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B503172:{NFSU2_TR(0x503172);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503175:{NFSU2_TR(0x503175);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503178:{NFSU2_TR(0x503178);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50317b:{NFSU2_TR(0x50317b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50317e:{NFSU2_TR(0x50317e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((R+8),(U+0),4);
}
B503184:{NFSU2_TR(0x503184);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B503186:{NFSU2_TR(0x503186);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503189:{NFSU2_TR(0x503189);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50318c:{NFSU2_TR(0x50318c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50318f:{NFSU2_TR(0x50318f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503192:{NFSU2_TR(0x503192);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0xa8ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0xa8ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xa8ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B503198:{NFSU2_TR(0x503198);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B50319a:{NFSU2_TR(0x50319a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50319d:{NFSU2_TR(0x50319d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5031a0:{NFSU2_TR(0x5031a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5031a3:{NFSU2_TR(0x5031a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5031a6:{NFSU2_TR(0x5031a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5031b0:L5031b0:{c.instructions+=6;NFSU2_TR(0x5031b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5031b3:{NFSU2_TR(0x5031b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5031b7:{NFSU2_TR(0x5031b7);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5031bb:{NFSU2_TR(0x5031bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5031be:{NFSU2_TR(0x5031be);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5031c1:{NFSU2_TR(0x5031c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5031d0:L5031d0:{c.instructions+=3;NFSU2_TR(0x5031d0);
u8 U[14];
__builtin_memmove((U+6),gp(0x850078),4);
w1(R+512,u8((r4(U+6))<(u32(0x200ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x200ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5031da:{NFSU2_TR(0x5031da);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5031e0:{NFSU2_TR(0x5031e0);
if(r1(R+518)){{goto L5031e5;}}
}
B5031e2:L5031e2:{c.instructions+=1;NFSU2_TR(0x5031e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5031e5:L5031e5:{c.instructions+=1;NFSU2_TR(0x5031e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5031f0:L5031f0:{c.instructions+=3;NFSU2_TR(0x5031f0);
u8 U[14];
__builtin_memmove((U+6),gp(0x850078),4);
w1(R+512,u8((r4(U+6))<(u32(0x200ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x200ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5031fa:{NFSU2_TR(0x5031fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B503200:{NFSU2_TR(0x503200);
if(r1(R+518)){{goto L503205;}}
}
B503202:L503202:{c.instructions+=1;NFSU2_TR(0x503202);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((R+0),(U+0),4);
}
B503205:L503205:{c.instructions+=1;NFSU2_TR(0x503205);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503210:L503210:{c.instructions+=3;NFSU2_TR(0x503210);
u8 U[14];
__builtin_memmove((U+6),gp(0x850078),4);
w1(R+512,u8((r4(U+6))<(u32(0x200ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x200ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50321a:{NFSU2_TR(0x50321a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B503220:{NFSU2_TR(0x503220);
if(r1(R+518)){{goto L503228;}}
}
B503222:L503222:{c.instructions+=1;NFSU2_TR(0x503222);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((R+0),(U+0),4);
}
B503228:L503228:{c.instructions+=1;NFSU2_TR(0x503228);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503230:L503230:{c.instructions+=3;NFSU2_TR(0x503230);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B503234:{NFSU2_TR(0x503234);
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
B503236:{NFSU2_TR(0x503236);
if(r1(R+518)){{goto L503259;}}
}
B503238:L503238:{c.instructions+=3;NFSU2_TR(0x503238);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B503242:{NFSU2_TR(0x503242);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((R+0),(U+0),4);
}
B503248:{NFSU2_TR(0x503248);
if(r1(R+518)){{goto L50324d;}}
}
B50324a:L50324a:{c.instructions+=1;NFSU2_TR(0x50324a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((R+0),(U+0),4);
}
B50324d:L50324d:{c.instructions+=4;NFSU2_TR(0x50324d);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50324f:{NFSU2_TR(0x50324f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503250:{NFSU2_TR(0x503250);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503251:{NFSU2_TR(0x503251);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x503256ull));
TAIL_STATIC(0x43dc00u,43d);
}
B503256:L503256:{c.instructions+=1;NFSU2_TR(0x503256);
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
B503259:L503259:{c.instructions+=1;NFSU2_TR(0x503259);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503260:L503260:{c.instructions+=3;NFSU2_TR(0x503260);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B503264:{NFSU2_TR(0x503264);
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
B503266:{NFSU2_TR(0x503266);
if(r1(R+518)){{goto L503289;}}
}
B503268:L503268:{c.instructions+=3;NFSU2_TR(0x503268);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B503272:{NFSU2_TR(0x503272);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B503278:{NFSU2_TR(0x503278);
if(r1(R+518)){{goto L50327d;}}
}
B50327a:L50327a:{c.instructions+=1;NFSU2_TR(0x50327a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((R+0),(U+0),4);
}
B50327d:L50327d:{c.instructions+=4;NFSU2_TR(0x50327d);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50327f:{NFSU2_TR(0x50327f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503280:{NFSU2_TR(0x503280);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503281:{NFSU2_TR(0x503281);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x503286ull));
TAIL_STATIC(0x43dc00u,43d);
}
B503286:L503286:{c.instructions+=1;NFSU2_TR(0x503286);
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
B503289:L503289:{c.instructions+=1;NFSU2_TR(0x503289);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503290:L503290:{c.instructions+=3;NFSU2_TR(0x503290);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B503294:{NFSU2_TR(0x503294);
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
B503296:{NFSU2_TR(0x503296);
if(r1(R+518)){{goto L5032bc;}}
}
B503298:L503298:{c.instructions+=3;NFSU2_TR(0x503298);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5032a2:{NFSU2_TR(0x5032a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B5032a8:{NFSU2_TR(0x5032a8);
if(r1(R+518)){{goto L5032b0;}}
}
B5032aa:L5032aa:{c.instructions+=1;NFSU2_TR(0x5032aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5032b0:L5032b0:{c.instructions+=4;NFSU2_TR(0x5032b0);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5032b2:{NFSU2_TR(0x5032b2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5032b3:{NFSU2_TR(0x5032b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5032b4:{NFSU2_TR(0x5032b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5032b9ull));
TAIL_STATIC(0x43dc00u,43d);
}
B5032b9:L5032b9:{c.instructions+=1;NFSU2_TR(0x5032b9);
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
B5032bc:L5032bc:{c.instructions+=1;NFSU2_TR(0x5032bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5032c0:L5032c0:{c.instructions+=5;NFSU2_TR(0x5032c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5032c1:{NFSU2_TR(0x5032c1);
__builtin_memmove((R+24),(R+4),4);
}
B5032c3:{NFSU2_TR(0x5032c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16778ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5032c9:{NFSU2_TR(0x5032c9);
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
B5032cb:{NFSU2_TR(0x5032cb);
if(r1(R+518)){{goto L5032e0;}}
}
B5032cd:L5032cd:{c.instructions+=2;NFSU2_TR(0x5032cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5032ce:{NFSU2_TR(0x5032ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5032d3ull));
TAIL_STATIC(0x440540u,440);
}
B5032d3:L5032d3:{c.instructions+=2;NFSU2_TR(0x5032d3);
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
B5032d6:{NFSU2_TR(0x5032d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16778ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5032e0:L5032e0:{c.instructions+=2;NFSU2_TR(0x5032e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5032e1:{NFSU2_TR(0x5032e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5032f0:L5032f0:{c.instructions+=16;NFSU2_TR(0x5032f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5032f4:{NFSU2_TR(0x5032f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5032f7:{NFSU2_TR(0x5032f7);
__builtin_memmove((R+0),gp(0x89e7bc),4);
}
B5032fc:{NFSU2_TR(0x5032fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B503300:{NFSU2_TR(0x503300);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B503303:{NFSU2_TR(0x503303);
u8 U[16];
w4(U+0,u32(u32(u32(0x198ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B50330a:{NFSU2_TR(0x50330a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50330b:{NFSU2_TR(0x50330b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50330c:{NFSU2_TR(0x50330c);
u8 U[16];
w4(U+0,u32(u32(u32(0x198ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B503313:{NFSU2_TR(0x503313);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B503315:{NFSU2_TR(0x503315);
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
B503317:{NFSU2_TR(0x503317);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+12),(U+1),1);
}
B50331a:{NFSU2_TR(0x50331a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50331b:{NFSU2_TR(0x50331b);
__builtin_memmove((R+0),(R+12),4);
}
B50331d:{NFSU2_TR(0x50331d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50331e:{NFSU2_TR(0x50331e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503320:L503320:{c.instructions+=6;NFSU2_TR(0x503320);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503321:{NFSU2_TR(0x503321);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B503327:{NFSU2_TR(0x503327);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B503329:{NFSU2_TR(0x503329);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50332b:{NFSU2_TR(0x50332b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50332c:{NFSU2_TR(0x50332c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L503344;}}
}
B50332e:L50332e:{c.instructions+=2;NFSU2_TR(0x50332e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B503332:{NFSU2_TR(0x503332);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B503335:L503335:{c.instructions+=2;NFSU2_TR(0x503335);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B503337:{NFSU2_TR(0x503337);
if(r1(R+518)){{goto L50334b;}}
}
B503339:L503339:{c.instructions+=4;NFSU2_TR(0x503339);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B50333a:{NFSU2_TR(0x50333a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x224ull))));
}
B503340:{NFSU2_TR(0x503340);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B503342:{NFSU2_TR(0x503342);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x503335u);}goto L503335;}}
}
B503344:L503344:{c.instructions+=4;NFSU2_TR(0x503344);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B503345:{NFSU2_TR(0x503345);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B503346:{NFSU2_TR(0x503346);
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
B503348:{NFSU2_TR(0x503348);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50334b:L50334b:{c.instructions+=5;NFSU2_TR(0x50334b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x224ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B503351:{NFSU2_TR(0x503351);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B503352:{NFSU2_TR(0x503352);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B503353:{NFSU2_TR(0x503353);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B503355:{NFSU2_TR(0x503355);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503360:L503360:{c.instructions+=20;NFSU2_TR(0x503360);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B503364:{NFSU2_TR(0x503364);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B503368:{NFSU2_TR(0x503368);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50336b:{NFSU2_TR(0x50336b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50336c:{NFSU2_TR(0x50336c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50336d:{NFSU2_TR(0x50336d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B503370:{NFSU2_TR(0x503370);
__builtin_memmove((R+4),gp(0x83846c),4);
}
B503376:{NFSU2_TR(0x503376);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B50337a:{NFSU2_TR(0x50337a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50337e:{NFSU2_TR(0x50337e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B503382:{NFSU2_TR(0x503382);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B503386:{NFSU2_TR(0x503386);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50338a:{NFSU2_TR(0x50338a);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B503390:{NFSU2_TR(0x503390);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503391:{NFSU2_TR(0x503391);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B503393:{NFSU2_TR(0x503393);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B503399:{NFSU2_TR(0x503399);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B50339b:{NFSU2_TR(0x50339b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50339d:{NFSU2_TR(0x50339d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5033a0:{NFSU2_TR(0x5033a0);
if(r1(R+514)){{goto L5033a7;}}
}
B5033a2:L5033a2:{c.instructions+=1;NFSU2_TR(0x5033a2);
w4(R+12,u32(0x2ull));
}
B5033a7:L5033a7:{c.instructions+=6;NFSU2_TR(0x5033a7);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5033ab:{NFSU2_TR(0x5033ab);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5033b1:{NFSU2_TR(0x5033b1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5033b7:{NFSU2_TR(0x5033b7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5033b9:{NFSU2_TR(0x5033b9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5033bc:{NFSU2_TR(0x5033bc);
if(r1(R+514)){{goto L5033c3;}}
}
B5033be:L5033be:{c.instructions+=1;NFSU2_TR(0x5033be);
w4(R+28,u32(0x2ull));
}
B5033c3:L5033c3:{c.instructions+=3;NFSU2_TR(0x5033c3);
u8 U[16];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5033c7:{NFSU2_TR(0x5033c7);
u8 U[24];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+16)));
w4(U+20,u32(u32(r4(R+8))-u32(r4(U+16))));
w1(R+519,u8(s32(r4(U+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B5033cb:{NFSU2_TR(0x5033cb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5033d7;}}
}
B5033cd:L5033cd:{c.instructions+=8;NFSU2_TR(0x5033cd);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5033ce:{NFSU2_TR(0x5033ce);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B5033d0:{NFSU2_TR(0x5033d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5033d1:{NFSU2_TR(0x5033d1);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5033d3:{NFSU2_TR(0x5033d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5033d4:{NFSU2_TR(0x5033d4);
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
B5033d5:{NFSU2_TR(0x5033d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5033d6:{NFSU2_TR(0x5033d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5033d7:L5033d7:{c.instructions+=8;NFSU2_TR(0x5033d7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5033d8:{NFSU2_TR(0x5033d8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B5033da:{NFSU2_TR(0x5033da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5033db:{NFSU2_TR(0x5033db);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5033dd:{NFSU2_TR(0x5033dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5033de:{NFSU2_TR(0x5033de);
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
B5033df:{NFSU2_TR(0x5033df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5033e0:{NFSU2_TR(0x5033e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5033f0:L5033f0:{c.instructions+=15;NFSU2_TR(0x5033f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5033f4:{NFSU2_TR(0x5033f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5033f8:{NFSU2_TR(0x5033f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5033fb:{NFSU2_TR(0x5033fb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5033fc:{NFSU2_TR(0x5033fc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5033fd:{NFSU2_TR(0x5033fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B503400:{NFSU2_TR(0x503400);
__builtin_memmove((R+4),gp(0x83846c),4);
}
B503406:{NFSU2_TR(0x503406);
u8 U[16];
w4(U+0,u32(u32(u32(0x144ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B50340d:{NFSU2_TR(0x50340d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503411:{NFSU2_TR(0x503411);
u8 U[16];
w4(U+0,u32(u32(u32(0x144ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B503418:{NFSU2_TR(0x503418);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503419:{NFSU2_TR(0x503419);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B50341b:{NFSU2_TR(0x50341b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B50341d:{NFSU2_TR(0x50341d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50341f:{NFSU2_TR(0x50341f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L503426;}}
}
B503421:L503421:{c.instructions+=1;NFSU2_TR(0x503421);
w4(R+12,u32(0x2ull));
}
B503426:L503426:{c.instructions+=5;NFSU2_TR(0x503426);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B50342a:{NFSU2_TR(0x50342a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B503430:{NFSU2_TR(0x503430);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B503432:{NFSU2_TR(0x503432);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B503435:{NFSU2_TR(0x503435);
if(r1(R+514)){{goto L50343c;}}
}
B503437:L503437:{c.instructions+=1;NFSU2_TR(0x503437);
w4(R+28,u32(0x2ull));
}
B50343c:L50343c:{c.instructions+=3;NFSU2_TR(0x50343c);
u8 U[16];
w4(U+0,u32(u32(u32(0x198ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B503443:{NFSU2_TR(0x503443);
u8 U[24];
w4(U+0,u32(u32(u32(0x198ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+16)));
w4(U+20,u32(u32(r4(R+8))-u32(r4(U+16))));
w1(R+519,u8(s32(r4(U+20))<s32(u32(0x0ull))));
}
B50344a:{NFSU2_TR(0x50344a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L503456;}}
}
B50344c:L50344c:{c.instructions+=8;NFSU2_TR(0x50344c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B50344d:{NFSU2_TR(0x50344d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B50344f:{NFSU2_TR(0x50344f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B503450:{NFSU2_TR(0x503450);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B503452:{NFSU2_TR(0x503452);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B503453:{NFSU2_TR(0x503453);
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
B503454:{NFSU2_TR(0x503454);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B503455:{NFSU2_TR(0x503455);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503456:L503456:{c.instructions+=8;NFSU2_TR(0x503456);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B503457:{NFSU2_TR(0x503457);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B503459:{NFSU2_TR(0x503459);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50345a:{NFSU2_TR(0x50345a);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B50345c:{NFSU2_TR(0x50345c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50345d:{NFSU2_TR(0x50345d);
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
B50345e:{NFSU2_TR(0x50345e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50345f:{NFSU2_TR(0x50345f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503460:L503460:{c.instructions+=3;NFSU2_TR(0x503460);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B503463:{NFSU2_TR(0x503463);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503464:{NFSU2_TR(0x503464);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x503469ull));
TAIL_STATIC(0x61c460u,61c);
}
B503469:L503469:{c.instructions+=3;NFSU2_TR(0x503469);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B50346c:{NFSU2_TR(0x50346c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50346e:{NFSU2_TR(0x50346e);
if(r1(R+518)){{goto L503489;}}
}
B503470:L503470:{c.instructions+=3;NFSU2_TR(0x503470);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B503473:{NFSU2_TR(0x503473);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503474:{NFSU2_TR(0x503474);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x503479ull));
TAIL_STATIC(0x43db50u,43d);
}
B503479:L503479:{c.instructions+=2;NFSU2_TR(0x503479);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50347a:{NFSU2_TR(0x50347a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50347full));
TAIL_STATIC(0x610130u,610);
}
B50347f:L50347f:{c.instructions+=3;NFSU2_TR(0x50347f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B503485:{NFSU2_TR(0x503485);
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
B503488:{NFSU2_TR(0x503488);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503489:L503489:{c.instructions+=2;NFSU2_TR(0x503489);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50348c:{NFSU2_TR(0x50348c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503490:L503490:{c.instructions+=3;NFSU2_TR(0x503490);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B503493:{NFSU2_TR(0x503493);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503494:{NFSU2_TR(0x503494);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x503499ull));
TAIL_STATIC(0x61c460u,61c);
}
B503499:L503499:{c.instructions+=3;NFSU2_TR(0x503499);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B50349c:{NFSU2_TR(0x50349c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50349e:{NFSU2_TR(0x50349e);
if(r1(R+518)){{goto L5034ad;}}
}
B5034a0:L5034a0:{c.instructions+=3;NFSU2_TR(0x5034a0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B5034a3:{NFSU2_TR(0x5034a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5034a4:{NFSU2_TR(0x5034a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5034a9ull));
TAIL_STATIC(0x43db50u,43d);
}
B5034a9:L5034a9:{c.instructions+=2;NFSU2_TR(0x5034a9);
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
B5034ac:{NFSU2_TR(0x5034ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5034ad:L5034ad:{c.instructions+=2;NFSU2_TR(0x5034ad);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5034b0:{NFSU2_TR(0x5034b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5034c0:L5034c0:{c.instructions+=9;NFSU2_TR(0x5034c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5034c1:{NFSU2_TR(0x5034c1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5034c2:{NFSU2_TR(0x5034c2);
__builtin_memmove((R+12),(R+4),4);
}
B5034c4:{NFSU2_TR(0x5034c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x540ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5034ca:{NFSU2_TR(0x5034ca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5034cb:{NFSU2_TR(0x5034cb);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5034cd:{NFSU2_TR(0x5034cd);
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
B5034cf:{NFSU2_TR(0x5034cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5034d0:{NFSU2_TR(0x5034d0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5034f1;}}
}
B5034d2:L5034d2:{c.instructions+=2;NFSU2_TR(0x5034d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5034d6:{NFSU2_TR(0x5034d6);
__builtin_memmove((R+28),(R+12),4);
}
B5034d8:L5034d8:{c.instructions+=3;NFSU2_TR(0x5034d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5034da:{NFSU2_TR(0x5034da);
__builtin_memmove((R+4),(R+28),4);
}
B5034dc:{NFSU2_TR(0x5034dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5034dfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5034df:L5034df:{c.instructions+=2;NFSU2_TR(0x5034df);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5034e1:{NFSU2_TR(0x5034e1);
if(r1(R+518)){{goto L5034fa;}}
}
B5034e3:L5034e3:{c.instructions+=5;NFSU2_TR(0x5034e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x540ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5034e9:{NFSU2_TR(0x5034e9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5034ea:{NFSU2_TR(0x5034ea);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1cull))));
}
B5034ed:{NFSU2_TR(0x5034ed);
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
B5034ef:{NFSU2_TR(0x5034ef);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5034d8u);}goto L5034d8;}}
}
B5034f1:L5034f1:{c.instructions+=6;NFSU2_TR(0x5034f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5034f2:{NFSU2_TR(0x5034f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5034f3:{NFSU2_TR(0x5034f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5034f4:{NFSU2_TR(0x5034f4);
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
B5034f6:{NFSU2_TR(0x5034f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5034f7:{NFSU2_TR(0x5034f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5034fa:L5034fa:{c.instructions+=8;NFSU2_TR(0x5034fa);
__builtin_memmove((R+0),(R+24),4);
}
B5034fc:{NFSU2_TR(0x5034fc);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5034ff:{NFSU2_TR(0x5034ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B503500:{NFSU2_TR(0x503500);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B503501:{NFSU2_TR(0x503501);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B503502:{NFSU2_TR(0x503502);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+12)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B503504:{NFSU2_TR(0x503504);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B503505:{NFSU2_TR(0x503505);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503510:L503510:{c.instructions+=6;NFSU2_TR(0x503510);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503511:{NFSU2_TR(0x503511);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503512:{NFSU2_TR(0x503512);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B503516:{NFSU2_TR(0x503516);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B503518:{NFSU2_TR(0x503518);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9bd8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50351e:{NFSU2_TR(0x50351e);
__builtin_memmove((R+28),(R+28),4);
}
B503520:L503520:{c.instructions+=3;NFSU2_TR(0x503520);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B503522:{NFSU2_TR(0x503522);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B503524:{NFSU2_TR(0x503524);
if(r1(R+518)){{goto L50352b;}}
}
B503526:L503526:{c.instructions+=2;NFSU2_TR(0x503526);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B503529:{NFSU2_TR(0x503529);
if(r1(R+518)){{goto L50353b;}}
}
B50352b:L50352b:{c.instructions+=4;NFSU2_TR(0x50352b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B50352c:{NFSU2_TR(0x50352c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B50352f:{NFSU2_TR(0x50352f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5bull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5bull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B503532:{NFSU2_TR(0x503532);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x503520u);}goto L503520;}}
}
B503534:L503534:{c.instructions+=4;NFSU2_TR(0x503534);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B503535:{NFSU2_TR(0x503535);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B503536:{NFSU2_TR(0x503536);
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
B503538:{NFSU2_TR(0x503538);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50353b:L50353b:{c.instructions+=4;NFSU2_TR(0x50353b);
u8 U[16];
w4(U+0,u32(u32(u32(0x9bd8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B503542:{NFSU2_TR(0x503542);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B503543:{NFSU2_TR(0x503543);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B503544:{NFSU2_TR(0x503544);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503550:L503550:{c.instructions+=6;NFSU2_TR(0x503550);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503551:{NFSU2_TR(0x503551);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x540ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B503557:{NFSU2_TR(0x503557);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B503559:{NFSU2_TR(0x503559);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50355b:{NFSU2_TR(0x50355b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50355c:{NFSU2_TR(0x50355c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L503571;}}
}
B50355e:L50355e:{c.instructions+=2;NFSU2_TR(0x50355e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B503562:{NFSU2_TR(0x503562);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B503565:L503565:{c.instructions+=2;NFSU2_TR(0x503565);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B503567:{NFSU2_TR(0x503567);
if(r1(R+518)){{goto L503578;}}
}
B503569:L503569:{c.instructions+=4;NFSU2_TR(0x503569);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B50356a:{NFSU2_TR(0x50356a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1cull))));
}
B50356d:{NFSU2_TR(0x50356d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B50356f:{NFSU2_TR(0x50356f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x503565u);}goto L503565;}}
}
B503571:L503571:{c.instructions+=4;NFSU2_TR(0x503571);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B503572:{NFSU2_TR(0x503572);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B503573:{NFSU2_TR(0x503573);
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
B503575:{NFSU2_TR(0x503575);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503578:L503578:{c.instructions+=5;NFSU2_TR(0x503578);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B50357b:{NFSU2_TR(0x50357b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50357c:{NFSU2_TR(0x50357c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50357d:{NFSU2_TR(0x50357d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50357f:{NFSU2_TR(0x50357f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503590:L503590:{c.instructions+=4;NFSU2_TR(0x503590);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B503594:{NFSU2_TR(0x503594);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B503596:{NFSU2_TR(0x503596);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x9a8cull))));
}
B50359c:{NFSU2_TR(0x50359c);
__builtin_memmove((R+16),(R+16),4);
}
B5035a0:L5035a0:{c.instructions+=2;NFSU2_TR(0x5035a0);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+10))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+10)));
w4(U+14,u32(u32(r4(R+8))-u32(r4(U+10))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5035a2:{NFSU2_TR(0x5035a2);
if(r1(R+518)){{goto L5035b2;}}
}
B5035a4:L5035a4:{c.instructions+=4;NFSU2_TR(0x5035a4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5035a5:{NFSU2_TR(0x5035a5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1cull))));
}
B5035a8:{NFSU2_TR(0x5035a8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5035ab:{NFSU2_TR(0x5035ab);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5035a0u);}goto L5035a0;}}
}
B5035ad:L5035ad:{c.instructions+=2;NFSU2_TR(0x5035ad);
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
B5035af:{NFSU2_TR(0x5035af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5035b2:L5035b2:{c.instructions+=2;NFSU2_TR(0x5035b2);
w1(R+0,u8(0x1ull));
}
B5035b4:{NFSU2_TR(0x5035b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5035c0:L5035c0:{c.instructions+=6;NFSU2_TR(0x5035c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5035c1:{NFSU2_TR(0x5035c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5035c2:{NFSU2_TR(0x5035c2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5035c6:{NFSU2_TR(0x5035c6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5035c8:{NFSU2_TR(0x5035c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54cull))));
__builtin_memmove((R+24),(U+0),4);
}
B5035ce:{NFSU2_TR(0x5035ce);
__builtin_memmove((R+28),(R+28),4);
}
B5035d0:L5035d0:{c.instructions+=3;NFSU2_TR(0x5035d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5035d2:{NFSU2_TR(0x5035d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5035d4:{NFSU2_TR(0x5035d4);
if(r1(R+518)){{goto L5035da;}}
}
B5035d6:L5035d6:{c.instructions+=2;NFSU2_TR(0x5035d6);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5035d8:{NFSU2_TR(0x5035d8);
if(r1(R+518)){{goto L50360e;}}
}
B5035da:L5035da:{c.instructions+=4;NFSU2_TR(0x5035da);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5035db:{NFSU2_TR(0x5035db);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x434ull))));
}
B5035e1:{NFSU2_TR(0x5035e1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x14ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5035e4:{NFSU2_TR(0x5035e4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5035d0u);}goto L5035d0;}}
}
B5035e6:L5035e6:{c.instructions+=4;NFSU2_TR(0x5035e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x812cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5035ec:{NFSU2_TR(0x5035ec);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5035ee:{NFSU2_TR(0x5035ee);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5035f0:{NFSU2_TR(0x5035f0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L503607;}}
}
B5035f2:L5035f2:{c.instructions+=1;NFSU2_TR(0x5035f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x595cull))));
__builtin_memmove((R+8),(U+0),4);
}
B5035f8:L5035f8:{c.instructions+=2;NFSU2_TR(0x5035f8);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+10),(U+0),4);
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5035fa:{NFSU2_TR(0x5035fa);
if(r1(R+518)){{goto L503620;}}
}
B5035fc:L5035fc:{c.instructions+=4;NFSU2_TR(0x5035fc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5035fd:{NFSU2_TR(0x5035fd);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x7f8ull))));
}
B503603:{NFSU2_TR(0x503603);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B503605:{NFSU2_TR(0x503605);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5035f8u);}goto L5035f8;}}
}
B503607:L503607:{c.instructions+=4;NFSU2_TR(0x503607);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B503608:{NFSU2_TR(0x503608);
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
B50360a:{NFSU2_TR(0x50360a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50360b:{NFSU2_TR(0x50360b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50360e:L50360e:{c.instructions+=5;NFSU2_TR(0x50360e);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x434ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B503614:{NFSU2_TR(0x503614);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B503615:{NFSU2_TR(0x503615);
u8 U[12];
w4(U+0,u32(u32(u32(0x544ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B50361c:{NFSU2_TR(0x50361c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50361d:{NFSU2_TR(0x50361d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503620:L503620:{c.instructions+=5;NFSU2_TR(0x503620);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x7f8ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B503626:{NFSU2_TR(0x503626);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B503627:{NFSU2_TR(0x503627);
u8 U[12];
w4(U+0,u32(u32(u32(0x5954ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B50362e:{NFSU2_TR(0x50362e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50362f:{NFSU2_TR(0x50362f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503640:L503640:{c.instructions+=6;NFSU2_TR(0x503640);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503641:{NFSU2_TR(0x503641);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503642:{NFSU2_TR(0x503642);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B503646:{NFSU2_TR(0x503646);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B503648:{NFSU2_TR(0x503648);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8138ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50364e:{NFSU2_TR(0x50364e);
__builtin_memmove((R+28),(R+28),4);
}
B503650:L503650:{c.instructions+=3;NFSU2_TR(0x503650);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B503652:{NFSU2_TR(0x503652);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B503654:{NFSU2_TR(0x503654);
if(r1(R+518)){{goto L50365a;}}
}
B503656:L503656:{c.instructions+=2;NFSU2_TR(0x503656);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B503658:{NFSU2_TR(0x503658);
if(r1(R+518)){{goto L50366d;}}
}
B50365a:L50365a:{c.instructions+=4;NFSU2_TR(0x50365a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B50365b:{NFSU2_TR(0x50365b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x438ull))));
}
B503661:{NFSU2_TR(0x503661);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B503664:{NFSU2_TR(0x503664);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x503650u);}goto L503650;}}
}
B503666:L503666:{c.instructions+=4;NFSU2_TR(0x503666);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B503667:{NFSU2_TR(0x503667);
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
B503669:{NFSU2_TR(0x503669);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50366a:{NFSU2_TR(0x50366a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50366d:L50366d:{c.instructions+=5;NFSU2_TR(0x50366d);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x438ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B503673:{NFSU2_TR(0x503673);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B503674:{NFSU2_TR(0x503674);
u8 U[12];
w4(U+0,u32(u32(u32(0x8130ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B50367b:{NFSU2_TR(0x50367b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50367c:{NFSU2_TR(0x50367c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503680:L503680:{c.instructions+=6;NFSU2_TR(0x503680);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503681:{NFSU2_TR(0x503681);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x812cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B503687:{NFSU2_TR(0x503687);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B503689:{NFSU2_TR(0x503689);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50368b:{NFSU2_TR(0x50368b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50368c:{NFSU2_TR(0x50368c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5036a7;}}
}
B50368e:L50368e:{c.instructions+=2;NFSU2_TR(0x50368e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B503692:{NFSU2_TR(0x503692);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x595cull))));
__builtin_memmove((R+8),(U+0),4);
}
B503698:L503698:{c.instructions+=2;NFSU2_TR(0x503698);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+10),(U+0),4);
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B50369a:{NFSU2_TR(0x50369a);
if(r1(R+518)){{goto L5036ae;}}
}
B50369c:L50369c:{c.instructions+=4;NFSU2_TR(0x50369c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B50369d:{NFSU2_TR(0x50369d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x7f8ull))));
}
B5036a3:{NFSU2_TR(0x5036a3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5036a5:{NFSU2_TR(0x5036a5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x503698u);}goto L503698;}}
}
B5036a7:L5036a7:{c.instructions+=4;NFSU2_TR(0x5036a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5036a8:{NFSU2_TR(0x5036a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5036a9:{NFSU2_TR(0x5036a9);
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
B5036ab:{NFSU2_TR(0x5036ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5036ae:L5036ae:{c.instructions+=5;NFSU2_TR(0x5036ae);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x7f8ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B5036b4:{NFSU2_TR(0x5036b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5036b5:{NFSU2_TR(0x5036b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5036b6:{NFSU2_TR(0x5036b6);
u8 U[12];
w4(U+0,u32(u32(u32(0x5954ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5036bd:{NFSU2_TR(0x5036bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5036c0:L5036c0:{c.instructions+=2;NFSU2_TR(0x5036c0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5036c2:{NFSU2_TR(0x5036c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54cull))));
__builtin_memmove((R+8),(U+0),4);
}
B5036c8:L5036c8:{c.instructions+=2;NFSU2_TR(0x5036c8);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+10),(U+0),4);
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5036cb:{NFSU2_TR(0x5036cb);
if(r1(R+518)){{goto L5036dc;}}
}
B5036cd:L5036cd:{c.instructions+=4;NFSU2_TR(0x5036cd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5036ce:{NFSU2_TR(0x5036ce);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x434ull))));
}
B5036d4:{NFSU2_TR(0x5036d4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x14ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5036d7:{NFSU2_TR(0x5036d7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5036c8u);}goto L5036c8;}}
}
B5036d9:L5036d9:{c.instructions+=2;NFSU2_TR(0x5036d9);
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
B5036db:{NFSU2_TR(0x5036db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5036dc:L5036dc:{c.instructions+=3;NFSU2_TR(0x5036dc);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x434ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B5036e2:{NFSU2_TR(0x5036e2);
u8 U[12];
w4(U+0,u32(u32(u32(0x544ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5036e9:{NFSU2_TR(0x5036e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5036f0:L5036f0:{c.instructions+=7;NFSU2_TR(0x5036f0);
__builtin_memmove((R+8),(R+4),4);
}
B5036f2:{NFSU2_TR(0x5036f2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5036f3:{NFSU2_TR(0x5036f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9bd8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5036f9:{NFSU2_TR(0x5036f9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5036fa:{NFSU2_TR(0x5036fa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5036fc:{NFSU2_TR(0x5036fc);
__builtin_memmove((R+28),(R+24),4);
}
B5036fe:{NFSU2_TR(0x5036fe);
w4(R+4,u32(0x5bull));
}
B503703:L503703:{c.instructions+=1;NFSU2_TR(0x503703);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L503705;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x503703u);}goto L503703;}
}
B503705:L503705:{c.instructions+=4;NFSU2_TR(0x503705);
__builtin_memmove((R+0),(R+24),4);
}
B503707:{NFSU2_TR(0x503707);
__builtin_memmove((R+4),(R+8),4);
}
B503709:{NFSU2_TR(0x503709);
w4(R+24,u32(0x30ull));
}
B50370e:{NFSU2_TR(0x50370e);
__builtin_memmove((R+28),(R+28),4);
}
B503710:L503710:{c.instructions+=5;NFSU2_TR(0x503710);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B503712:{NFSU2_TR(0x503712);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B503715:{NFSU2_TR(0x503715);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1cull))));
}
B503718:{NFSU2_TR(0x503718);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B503719:{NFSU2_TR(0x503719);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x503710u);}goto L503710;}}
}
B50371b:L50371b:{c.instructions+=4;NFSU2_TR(0x50371b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9c98ull))));
__builtin_memmove((R+0),(U+0),4);
}
B503721:{NFSU2_TR(0x503721);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x544ull))));
__builtin_memmove((R+4),(U+0),4);
}
B503727:{NFSU2_TR(0x503727);
w4(R+24,u32(0x14ull));
}
B50372c:{NFSU2_TR(0x50372c);
__builtin_memmove((R+16),(R+16),4);
}
B503730:L503730:{c.instructions+=5;NFSU2_TR(0x503730);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B503732:{NFSU2_TR(0x503732);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B503735:{NFSU2_TR(0x503735);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x434ull))));
}
B50373b:{NFSU2_TR(0x50373b);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B50373c:{NFSU2_TR(0x50373c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x503730u);}goto L503730;}}
}
B50373e:L50373e:{c.instructions+=14;NFSU2_TR(0x50373e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5954ull))));
__builtin_memmove((R+0),(U+0),4);
}
B503744:{NFSU2_TR(0x503744);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9ce8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50374a:{NFSU2_TR(0x50374a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x614cull))));
__builtin_memmove((R+4),(U+0),4);
}
B503750:{NFSU2_TR(0x503750);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9cecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503756:{NFSU2_TR(0x503756);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6944ull))));
__builtin_memmove((R+0),(U+0),4);
}
B50375c:{NFSU2_TR(0x50375c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9cf0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503762:{NFSU2_TR(0x503762);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x713cull))));
__builtin_memmove((R+4),(U+0),4);
}
B503768:{NFSU2_TR(0x503768);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7934ull))));
__builtin_memmove((R+0),(U+0),4);
}
B50376e:{NFSU2_TR(0x50376e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9cf4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503774:{NFSU2_TR(0x503774);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9cf8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50377a:{NFSU2_TR(0x50377a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9cfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B503780:{NFSU2_TR(0x503780);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9a84ull))));
__builtin_memmove((R+4),(U+0),4);
}
B503786:{NFSU2_TR(0x503786);
w4(R+24,u32(0xcull));
}
B50378b:{NFSU2_TR(0x50378b);
{goto L503790;}
}
B503790:L503790:{c.instructions+=5;NFSU2_TR(0x503790);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B503792:{NFSU2_TR(0x503792);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B503795:{NFSU2_TR(0x503795);
w1(R+512,carry<u32>(r4(R+4),u32(0x1cull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1cull))));
}
B503798:{NFSU2_TR(0x503798);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B503799:{NFSU2_TR(0x503799);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x503790u);}goto L503790;}}
}
B50379b:L50379b:{c.instructions+=15;NFSU2_TR(0x50379b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8130ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5037a1:{NFSU2_TR(0x5037a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9d2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5037a7:{NFSU2_TR(0x5037a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8568ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5037ad:{NFSU2_TR(0x5037ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9d30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5037b3:{NFSU2_TR(0x5037b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x89a0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5037b9:{NFSU2_TR(0x5037b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9d34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5037bf:{NFSU2_TR(0x5037bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8dd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5037c5:{NFSU2_TR(0x5037c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9d38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5037cb:{NFSU2_TR(0x5037cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9210ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5037d1:{NFSU2_TR(0x5037d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9648ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5037d7:{NFSU2_TR(0x5037d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5037d8:{NFSU2_TR(0x5037d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9d3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5037de:{NFSU2_TR(0x5037de);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9d40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5037e4:{NFSU2_TR(0x5037e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5037e5:{NFSU2_TR(0x5037e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5037f0:L5037f0:{c.instructions+=2;NFSU2_TR(0x5037f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5037f2:{NFSU2_TR(0x5037f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5037f5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5037f5:L5037f5:{c.instructions+=3;NFSU2_TR(0x5037f5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5037fb:{NFSU2_TR(0x5037fb);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x8a1ccc))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B503801:{NFSU2_TR(0x503801);
if(r1(R+518)){{goto L50380f;}}
}
B503803:L503803:{c.instructions+=4;NFSU2_TR(0x503803);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B503809:{NFSU2_TR(0x503809);
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
B50380b:{NFSU2_TR(0x50380b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B50380e:{NFSU2_TR(0x50380e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50380f:L50380f:{c.instructions+=2;NFSU2_TR(0x50380f);
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
B503811:{NFSU2_TR(0x503811);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503820:L503820:{c.instructions+=37;NFSU2_TR(0x503820);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503821:{NFSU2_TR(0x503821);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B503824:{NFSU2_TR(0x503824);
__builtin_memmove((R+8),(R+0),4);
}
B503826:{NFSU2_TR(0x503826);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B503828:{NFSU2_TR(0x503828);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50382c:{NFSU2_TR(0x50382c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B50382e:{NFSU2_TR(0x50382e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B503832:{NFSU2_TR(0x503832);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0xfffffffcull))));
s4(u32(r4(R+8)),r4(U+0));
}
B503835:{NFSU2_TR(0x503835);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B503838:{NFSU2_TR(0x503838);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B50383a:{NFSU2_TR(0x50383a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50383d:{NFSU2_TR(0x50383d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B50383f:{NFSU2_TR(0x50383f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B503842:{NFSU2_TR(0x503842);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B503845:{NFSU2_TR(0x503845);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B503847:{NFSU2_TR(0x503847);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B50384a:{NFSU2_TR(0x50384a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B50384c:{NFSU2_TR(0x50384c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50384f:{NFSU2_TR(0x50384f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B503851:{NFSU2_TR(0x503851);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B503854:{NFSU2_TR(0x503854);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B503857:{NFSU2_TR(0x503857);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B503859:{NFSU2_TR(0x503859);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50385c:{NFSU2_TR(0x50385c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B50385e:{NFSU2_TR(0x50385e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503861:{NFSU2_TR(0x503861);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B503863:{NFSU2_TR(0x503863);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B503866:{NFSU2_TR(0x503866);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B503869:{NFSU2_TR(0x503869);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B50386b:{NFSU2_TR(0x50386b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14ull))));
}
B50386e:{NFSU2_TR(0x50386e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B503870:{NFSU2_TR(0x503870);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B503873:{NFSU2_TR(0x503873);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B503875:{NFSU2_TR(0x503875);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0xfffffffcull))));
s4(u32(r4(R+8)),r4(U+0));
}
B503878:{NFSU2_TR(0x503878);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50387b:{NFSU2_TR(0x50387b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50387c:{NFSU2_TR(0x50387c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503880:L503880:{c.instructions+=8;NFSU2_TR(0x503880);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503881:{NFSU2_TR(0x503881);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503882:{NFSU2_TR(0x503882);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503883:{NFSU2_TR(0x503883);
__builtin_memmove((R+20),(R+4),4);
}
B503885:{NFSU2_TR(0x503885);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B503888:{NFSU2_TR(0x503888);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503889:{NFSU2_TR(0x503889);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50388a:{NFSU2_TR(0x50388a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50388full));
TAIL_STATIC(0x610130u,610);
}
B50388f:L50388f:{c.instructions+=9;NFSU2_TR(0x50388f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B503895:{NFSU2_TR(0x503895);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B503899:{NFSU2_TR(0x503899);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B50389c:{NFSU2_TR(0x50389c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50389e:{NFSU2_TR(0x50389e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5038a0:{NFSU2_TR(0x5038a0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5038a2:{NFSU2_TR(0x5038a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5038a3:{NFSU2_TR(0x5038a3);
__builtin_memmove((R+4),(R+24),4);
}
B5038a5:{NFSU2_TR(0x5038a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5038aaull));
TAIL_STATIC(0x610270u,610);
}
B5038aa:L5038aa:{c.instructions+=4;NFSU2_TR(0x5038aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5038ae:{NFSU2_TR(0x5038ae);
w4(R+0,u32(0x1ull));
}
B5038b3:{NFSU2_TR(0x5038b3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5038b5:{NFSU2_TR(0x5038b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5038bc;}}
}
B5038b7:L5038b7:{c.instructions+=1;NFSU2_TR(0x5038b7);
w4(R+0,u32(0x2ull));
}
B5038bc:L5038bc:{c.instructions+=3;NFSU2_TR(0x5038bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5038bd:{NFSU2_TR(0x5038bd);
__builtin_memmove((R+4),(R+24),4);
}
B5038bf:{NFSU2_TR(0x5038bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5038c4ull));
TAIL_STATIC(0x61c280u,61c);
}
B5038c4:L5038c4:{c.instructions+=3;NFSU2_TR(0x5038c4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5038c6:{NFSU2_TR(0x5038c6);
__builtin_memmove((R+4),(R+24),4);
}
B5038c8:{NFSU2_TR(0x5038c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5038cdull));
TAIL_STATIC(0x637040u,637);
}
B5038cd:L5038cd:{c.instructions+=2;NFSU2_TR(0x5038cd);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5038cf:{NFSU2_TR(0x5038cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+12),(U+0),4);
}
B5038d2:L5038d2:{c.instructions+=4;NFSU2_TR(0x5038d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5038d5:{NFSU2_TR(0x5038d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5038d6:{NFSU2_TR(0x5038d6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5038d8:{NFSU2_TR(0x5038d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5038ddull));
TAIL_STATIC(0x610130u,610);
}
B5038dd:L5038dd:{c.instructions+=5;NFSU2_TR(0x5038dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5038e3:{NFSU2_TR(0x5038e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5038e5:{NFSU2_TR(0x5038e5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5038e8:{NFSU2_TR(0x5038e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5038ea:{NFSU2_TR(0x5038ea);
if(r1(R+518)){{goto L5038fe;}}
}
B5038ec:L5038ec:{c.instructions+=7;NFSU2_TR(0x5038ec);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5038ee:{NFSU2_TR(0x5038ee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5038ef:{NFSU2_TR(0x5038ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5038f0:{NFSU2_TR(0x5038f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5038f1:{NFSU2_TR(0x5038f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5038f2:{NFSU2_TR(0x5038f2);
w4(R+4,u32(0x8a2b68ull));
}
B5038f7:{NFSU2_TR(0x5038f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5038fcull));
TAIL_STATIC(0x61b980u,61b);
}
B5038fc:L5038fc:{c.instructions+=1;NFSU2_TR(0x5038fc);
__builtin_memmove((R+28),(R+0),4);
}
B5038fe:L5038fe:{c.instructions+=4;NFSU2_TR(0x5038fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B503902:{NFSU2_TR(0x503902);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503903:{NFSU2_TR(0x503903);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503904:{NFSU2_TR(0x503904);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x503909ull));
TAIL_STATIC(0x631d20u,631);
}
B503909:L503909:{c.instructions+=4;NFSU2_TR(0x503909);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B50390a:{NFSU2_TR(0x50390a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B50390d:{NFSU2_TR(0x50390d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B503913:{NFSU2_TR(0x503913);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5038d2u);}goto L5038d2;}}
}
B503915:L503915:{c.instructions+=7;NFSU2_TR(0x503915);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B503919:{NFSU2_TR(0x503919);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50391b:{NFSU2_TR(0x50391b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50391d:{NFSU2_TR(0x50391d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2f0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B503923:{NFSU2_TR(0x503923);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2b4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B503929:{NFSU2_TR(0x503929);
w4(R+4,u32(0x25ull));
}
B50392e:{NFSU2_TR(0x50392e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503930:L503930:{c.instructions+=1;NFSU2_TR(0x503930);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L503932;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x503930u);}goto L503930;}
}
B503932:L503932:{c.instructions+=3;NFSU2_TR(0x503932);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503934:{NFSU2_TR(0x503934);
__builtin_memmove((R+4),(R+0),4);
}
B503936:{NFSU2_TR(0x503936);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50393bull));
TAIL_STATIC(0x639ce0u,639);
}
B50393b:L50393b:{c.instructions+=5;NFSU2_TR(0x50393b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50393c:{NFSU2_TR(0x50393c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50393d:{NFSU2_TR(0x50393d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50393e:{NFSU2_TR(0x50393e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50393f:{NFSU2_TR(0x50393f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503950:L503950:{c.instructions+=11;NFSU2_TR(0x503950);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503951:{NFSU2_TR(0x503951);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503952:{NFSU2_TR(0x503952);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B503956:{NFSU2_TR(0x503956);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B503959:{NFSU2_TR(0x503959);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B50395f:{NFSU2_TR(0x50395f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503960:{NFSU2_TR(0x503960);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x8a1ccc))));
}
B503966:{NFSU2_TR(0x503966);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503967:{NFSU2_TR(0x503967);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503968:{NFSU2_TR(0x503968);
__builtin_memmove((R+12),(R+4),4);
}
B50396a:{NFSU2_TR(0x50396a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50396full));
TAIL_STATIC(0x43db50u,43d);
}
B50396f:L50396f:{c.instructions+=5;NFSU2_TR(0x50396f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B503972:{NFSU2_TR(0x503972);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503975:{NFSU2_TR(0x503975);
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
B503977:{NFSU2_TR(0x503977);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B50397a:{NFSU2_TR(0x50397a);
__builtin_memmove((R+12),(R+12),4);
}
B503980:L503980:{c.instructions+=3;NFSU2_TR(0x503980);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503981:{NFSU2_TR(0x503981);
__builtin_memmove((R+4),(R+20),4);
}
B503983:{NFSU2_TR(0x503983);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x503988ull));
TAIL_STATIC(0x6102f0u,610);
}
B503988:L503988:{c.instructions+=2;NFSU2_TR(0x503988);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50398a:{NFSU2_TR(0x50398a);
if(r1(R+518)){{goto L50399c;}}
}
B50398c:L50398c:{c.instructions+=6;NFSU2_TR(0x50398c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B503990:{NFSU2_TR(0x503990);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+8,u32(r2(U+0)));
}
B503993:{NFSU2_TR(0x503993);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B503996:{NFSU2_TR(0x503996);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B503998:{NFSU2_TR(0x503998);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B50399a:{NFSU2_TR(0x50399a);
{goto L5039a2;}
}
B50399c:L50399c:{c.instructions+=1;NFSU2_TR(0x50399c);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B5039a2:L5039a2:{c.instructions+=4;NFSU2_TR(0x5039a2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5039a3:{NFSU2_TR(0x5039a3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5039a6:{NFSU2_TR(0x5039a6);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0xaaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5039ac:{NFSU2_TR(0x5039ac);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x503980u);}goto L503980;}}
}
B5039ae:L5039ae:{c.instructions+=3;NFSU2_TR(0x5039ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2f0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5039b4:{NFSU2_TR(0x5039b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2b4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5039ba:{NFSU2_TR(0x5039ba);
w4(R+4,u32(0x25ull));
}
B5039bf:L5039bf:{c.instructions+=1;NFSU2_TR(0x5039bf);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5039c1;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5039bfu);}goto L5039bf;}
}
B5039c1:L5039c1:{c.instructions+=6;NFSU2_TR(0x5039c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5039c2:{NFSU2_TR(0x5039c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5039c3:{NFSU2_TR(0x5039c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5039c4:{NFSU2_TR(0x5039c4);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+12)),r4(U+0));
}
B5039ca:{NFSU2_TR(0x5039ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5039cb:{NFSU2_TR(0x5039cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5039d0:L5039d0:{c.instructions+=4;NFSU2_TR(0x5039d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5039d1:{NFSU2_TR(0x5039d1);
__builtin_memmove((R+24),(R+4),4);
}
B5039d3:{NFSU2_TR(0x5039d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5039d5:{NFSU2_TR(0x5039d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5039d8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5039d8:L5039d8:{c.instructions+=5;NFSU2_TR(0x5039d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5039db:{NFSU2_TR(0x5039db);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5039df:{NFSU2_TR(0x5039df);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5039e0:{NFSU2_TR(0x5039e0);
__builtin_memmove((R+4),(R+24),4);
}
B5039e2:{NFSU2_TR(0x5039e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5039e7ull));
TAIL_STATIC(0x637270u,637);
}
B5039e7:L5039e7:{c.instructions+=5;NFSU2_TR(0x5039e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5039eb:{NFSU2_TR(0x5039eb);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5039ec:{NFSU2_TR(0x5039ec);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5039ed:{NFSU2_TR(0x5039ed);
__builtin_memmove((R+4),(R+24),4);
}
B5039ef:{NFSU2_TR(0x5039ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5039f4ull));
TAIL_STATIC(0x61c280u,61c);
}
B5039f4:L5039f4:{c.instructions+=2;NFSU2_TR(0x5039f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5039f5:{NFSU2_TR(0x5039f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503a00:L503a00:{c.instructions+=10;NFSU2_TR(0x503a00);
__builtin_memmove((R+0),(R+4),4);
}
B503a02:{NFSU2_TR(0x503a02);
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
B503a04:{NFSU2_TR(0x503a04);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503a07:{NFSU2_TR(0x503a07);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503a0a:{NFSU2_TR(0x503a0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503a0d:{NFSU2_TR(0x503a0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503a10:{NFSU2_TR(0x503a10);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503a13:{NFSU2_TR(0x503a13);
u8 U[4];
w4(U+0,u32(0x79aadcull));
s4(u32(r4(R+0)),r4(U+0));
}
B503a19:{NFSU2_TR(0x503a19);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B503a20:{NFSU2_TR(0x503a20);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503a30:L503a30:{c.instructions+=2;NFSU2_TR(0x503a30);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B503a33:{NFSU2_TR(0x503a33);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503a40:L503a40:{c.instructions+=3;NFSU2_TR(0x503a40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503a41:{NFSU2_TR(0x503a41);
__builtin_memmove((R+24),(R+4),4);
}
B503a43:{NFSU2_TR(0x503a43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x503a48ull));
TAIL_STATIC(0x4fe140u,4fe);
}
B503a48:L503a48:{c.instructions+=2;NFSU2_TR(0x503a48);
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
B503a4d:{NFSU2_TR(0x503a4d);
if(r1(R+518)){{goto L503a58;}}
}
B503a4f:L503a4f:{c.instructions+=2;NFSU2_TR(0x503a4f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503a50:{NFSU2_TR(0x503a50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x503a55ull));
TAIL_STATIC(0x575630u,575);
}
B503a55:L503a55:{c.instructions+=1;NFSU2_TR(0x503a55);
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
B503a58:L503a58:{c.instructions+=3;NFSU2_TR(0x503a58);
__builtin_memmove((R+0),(R+24),4);
}
B503a5a:{NFSU2_TR(0x503a5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B503a5b:{NFSU2_TR(0x503a5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503a60:L503a60:{c.instructions+=5;NFSU2_TR(0x503a60);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B503a63:{NFSU2_TR(0x503a63);
__builtin_memmove((R+4),gp(0x8a1ccc),4);
}
B503a69:{NFSU2_TR(0x503a69);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B503a6f:{NFSU2_TR(0x503a6f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B503a71:{NFSU2_TR(0x503a71);
if(r1(R+518)){{goto L503a7a;}}
}
B503a73:L503a73:{c.instructions+=2;NFSU2_TR(0x503a73);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B503a79:{NFSU2_TR(0x503a79);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503a7a:L503a7a:{c.instructions+=2;NFSU2_TR(0x503a7a);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B503a7d:{NFSU2_TR(0x503a7d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503a80:L503a80:{c.instructions+=12;NFSU2_TR(0x503a80);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503a81:{NFSU2_TR(0x503a81);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503a82:{NFSU2_TR(0x503a82);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B503a86:{NFSU2_TR(0x503a86);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503a87:{NFSU2_TR(0x503a87);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503a89:{NFSU2_TR(0x503a89);
__builtin_memmove((R+28),(R+4),4);
}
B503a8b:{NFSU2_TR(0x503a8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B503a8e:{NFSU2_TR(0x503a8e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503a90:{NFSU2_TR(0x503a90);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503a92:{NFSU2_TR(0x503a92);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503a93:{NFSU2_TR(0x503a93);
__builtin_memmove((R+4),(R+24),4);
}
B503a95:{NFSU2_TR(0x503a95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x503a9aull));
TAIL_STATIC(0x610270u,610);
}
B503a9a:L503a9a:{c.instructions+=5;NFSU2_TR(0x503a9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B503a9e:{NFSU2_TR(0x503a9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B503aa1:{NFSU2_TR(0x503aa1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503aa2:{NFSU2_TR(0x503aa2);
__builtin_memmove((R+4),(R+24),4);
}
B503aa4:{NFSU2_TR(0x503aa4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x503aa9ull));
TAIL_STATIC(0x61c280u,61c);
}
B503aa9:L503aa9:{c.instructions+=3;NFSU2_TR(0x503aa9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503aaa:{NFSU2_TR(0x503aaa);
__builtin_memmove((R+4),(R+24),4);
}
B503aac:{NFSU2_TR(0x503aac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x503ab1ull));
TAIL_STATIC(0x637040u,637);
}
B503ab1:L503ab1:{c.instructions+=4;NFSU2_TR(0x503ab1);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503ab6:{NFSU2_TR(0x503ab6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503ab8:{NFSU2_TR(0x503ab8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B503abb:{NFSU2_TR(0x503abb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x503ac0ull));
TAIL_STATIC(0x5b6990u,5b6);
}
B503ac0:L503ac0:{c.instructions+=4;NFSU2_TR(0x503ac0);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B503ac3:{NFSU2_TR(0x503ac3);
u8 U[4];
w4(U+0,u32(0x3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503ac5:{NFSU2_TR(0x503ac5);
__builtin_memmove((R+4),(R+24),4);
}
B503ac7:{NFSU2_TR(0x503ac7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x503accull));
TAIL_STATIC(0x6102f0u,610);
}
B503acc:L503acc:{c.instructions+=4;NFSU2_TR(0x503acc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B503acd:{NFSU2_TR(0x503acd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B503ace:{NFSU2_TR(0x503ace);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B503acf:{NFSU2_TR(0x503acf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503ae0:L503ae0:{c.instructions+=3;NFSU2_TR(0x503ae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B503ae3:{NFSU2_TR(0x503ae3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503ae4:{NFSU2_TR(0x503ae4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x503ae9ull));
TAIL_STATIC(0x610130u,610);
}
B503ae9:L503ae9:{c.instructions+=3;NFSU2_TR(0x503ae9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B503aec:{NFSU2_TR(0x503aec);
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
B503aee:{NFSU2_TR(0x503aee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L503af4;}}
}
B503af0:L503af0:{c.instructions+=2;NFSU2_TR(0x503af0);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B503af3:{NFSU2_TR(0x503af3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503af4:L503af4:{c.instructions+=2;NFSU2_TR(0x503af4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B503afa:{NFSU2_TR(0x503afa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503b00:L503b00:{c.instructions+=2;NFSU2_TR(0x503b00);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B503b03:{NFSU2_TR(0x503b03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503b10:L503b10:{c.instructions+=7;NFSU2_TR(0x503b10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503b11:{NFSU2_TR(0x503b11);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503b12:{NFSU2_TR(0x503b12);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503b13:{NFSU2_TR(0x503b13);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B503b17:{NFSU2_TR(0x503b17);
__builtin_memmove((R+12),(R+4),4);
}
B503b19:{NFSU2_TR(0x503b19);
__builtin_memmove((R+4),(R+28),4);
}
B503b1b:{NFSU2_TR(0x503b1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x503b20ull));
TAIL_STATIC(0x610010u,610);
}
B503b20:L503b20:{c.instructions+=2;NFSU2_TR(0x503b20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503b21:{NFSU2_TR(0x503b21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x503b26ull));
TAIL_STATIC(0x610130u,610);
}
B503b26:L503b26:{c.instructions+=4;NFSU2_TR(0x503b26);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B503b29:{NFSU2_TR(0x503b29);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B503b2b:{NFSU2_TR(0x503b2b);
w4(R+20,u32(0x2eull));
}
B503b30:{NFSU2_TR(0x503b30);
if(r1(R+518)){{goto L503b38;}}
}
B503b32:L503b32:{c.instructions+=1;NFSU2_TR(0x503b32);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B503b38:L503b38:{c.instructions+=5;NFSU2_TR(0x503b38);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503b39:{NFSU2_TR(0x503b39);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B503b3d:{NFSU2_TR(0x503b3d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503b3e:{NFSU2_TR(0x503b3e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503b3f:{NFSU2_TR(0x503b3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x503b44ull));
TAIL_STATIC(0x501d70u,501);
}
B503b44:L503b44:{c.instructions+=9;NFSU2_TR(0x503b44);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B503b47:{NFSU2_TR(0x503b47);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503b49:{NFSU2_TR(0x503b49);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503b4b:{NFSU2_TR(0x503b4b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503b4c:{NFSU2_TR(0x503b4c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503b4d:{NFSU2_TR(0x503b4d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503b4e:{NFSU2_TR(0x503b4e);
w4(R+4,u32(0x8a2b68ull));
}
B503b53:{NFSU2_TR(0x503b53);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503b57:{NFSU2_TR(0x503b57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x503b5cull));
TAIL_STATIC(0x61ba80u,61b);
}
B503b5c:L503b5c:{c.instructions+=4;NFSU2_TR(0x503b5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff9ull))));
__builtin_memmove((R+4),(U+0),4);
}
B503b5f:{NFSU2_TR(0x503b5f);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x9bull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9bull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9bull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B503b65:{NFSU2_TR(0x503b65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B503b66:{NFSU2_TR(0x503b66);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L503c7c;}}
}
B503b6c:L503b6c:{c.instructions+=2;NFSU2_TR(0x503b6c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x503cacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B503b73:{NFSU2_TR(0x503b73);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x503c90ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B503b7a:L503b7a:{c.instructions+=3;NFSU2_TR(0x503b7a);
__builtin_memmove((R+8),(R+0),4);
}
B503b7c:{NFSU2_TR(0x503b7c);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x8000001full))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B503b82:{NFSU2_TR(0x503b82);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L503b89;}}
}
B503b84:L503b84:{c.instructions+=3;NFSU2_TR(0x503b84);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B503b85:{NFSU2_TR(0x503b85);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xffffffe0ull))));
}
B503b88:{NFSU2_TR(0x503b88);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B503b89:L503b89:{c.instructions+=11;NFSU2_TR(0x503b89);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B503b8d:{NFSU2_TR(0x503b8d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B503b8f:{NFSU2_TR(0x503b8f);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B503b90:{NFSU2_TR(0x503b90);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x1full))));
}
B503b93:{NFSU2_TR(0x503b93);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B503b95:{NFSU2_TR(0x503b95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B503b96:{NFSU2_TR(0x503b96);
u8 U[47];
w4(U+39,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
__builtin_memmove((U+43),(R+0),4);
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+39))));
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
B503b99:{NFSU2_TR(0x503b99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B503b9a:{NFSU2_TR(0x503b9a);
u8 U[12];
w4(U+0,u32(u32(u32(0x294ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B503ba1:{NFSU2_TR(0x503ba1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B503ba2:{NFSU2_TR(0x503ba2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503ba5:L503ba5:{c.instructions+=3;NFSU2_TR(0x503ba5);
__builtin_memmove((R+8),(R+0),4);
}
B503ba7:{NFSU2_TR(0x503ba7);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x8000001full))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B503bad:{NFSU2_TR(0x503bad);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L503bb4;}}
}
B503baf:L503baf:{c.instructions+=3;NFSU2_TR(0x503baf);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B503bb0:{NFSU2_TR(0x503bb0);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xffffffe0ull))));
}
B503bb3:{NFSU2_TR(0x503bb3);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B503bb4:L503bb4:{c.instructions+=11;NFSU2_TR(0x503bb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B503bb8:{NFSU2_TR(0x503bb8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B503bba:{NFSU2_TR(0x503bba);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B503bbb:{NFSU2_TR(0x503bbb);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x1full))));
}
B503bbe:{NFSU2_TR(0x503bbe);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B503bc0:{NFSU2_TR(0x503bc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B503bc1:{NFSU2_TR(0x503bc1);
u8 U[47];
w4(U+39,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
__builtin_memmove((U+43),(R+0),4);
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+39))));
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
B503bc4:{NFSU2_TR(0x503bc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B503bc5:{NFSU2_TR(0x503bc5);
u8 U[12];
w4(U+0,u32(u32(u32(0x28cull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B503bcc:{NFSU2_TR(0x503bcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B503bcd:{NFSU2_TR(0x503bcd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503bd0:L503bd0:{c.instructions+=3;NFSU2_TR(0x503bd0);
__builtin_memmove((R+8),(R+0),4);
}
B503bd2:{NFSU2_TR(0x503bd2);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x8000001full))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B503bd8:{NFSU2_TR(0x503bd8);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L503bdf;}}
}
B503bda:L503bda:{c.instructions+=3;NFSU2_TR(0x503bda);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B503bdb:{NFSU2_TR(0x503bdb);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xffffffe0ull))));
}
B503bde:{NFSU2_TR(0x503bde);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B503bdf:L503bdf:{c.instructions+=11;NFSU2_TR(0x503bdf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B503be3:{NFSU2_TR(0x503be3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B503be5:{NFSU2_TR(0x503be5);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B503be6:{NFSU2_TR(0x503be6);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x1full))));
}
B503be9:{NFSU2_TR(0x503be9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B503beb:{NFSU2_TR(0x503beb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B503bec:{NFSU2_TR(0x503bec);
u8 U[47];
w4(U+39,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
__builtin_memmove((U+43),(R+0),4);
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+39))));
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
B503bef:{NFSU2_TR(0x503bef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B503bf0:{NFSU2_TR(0x503bf0);
u8 U[12];
w4(U+0,u32(u32(u32(0x26cull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B503bf7:{NFSU2_TR(0x503bf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B503bf8:{NFSU2_TR(0x503bf8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503bfb:L503bfb:{c.instructions+=3;NFSU2_TR(0x503bfb);
__builtin_memmove((R+8),(R+0),4);
}
B503bfd:{NFSU2_TR(0x503bfd);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x8000001full))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B503c03:{NFSU2_TR(0x503c03);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L503c0a;}}
}
B503c05:L503c05:{c.instructions+=3;NFSU2_TR(0x503c05);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B503c06:{NFSU2_TR(0x503c06);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xffffffe0ull))));
}
B503c09:{NFSU2_TR(0x503c09);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B503c0a:L503c0a:{c.instructions+=11;NFSU2_TR(0x503c0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B503c0e:{NFSU2_TR(0x503c0e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B503c10:{NFSU2_TR(0x503c10);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B503c11:{NFSU2_TR(0x503c11);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x1full))));
}
B503c14:{NFSU2_TR(0x503c14);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B503c16:{NFSU2_TR(0x503c16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B503c17:{NFSU2_TR(0x503c17);
u8 U[47];
w4(U+39,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
__builtin_memmove((U+43),(R+0),4);
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+39))));
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
B503c1a:{NFSU2_TR(0x503c1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B503c1b:{NFSU2_TR(0x503c1b);
u8 U[12];
w4(U+0,u32(u32(u32(0x27cull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B503c22:{NFSU2_TR(0x503c22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B503c23:{NFSU2_TR(0x503c23);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503c26:L503c26:{c.instructions+=3;NFSU2_TR(0x503c26);
__builtin_memmove((R+8),(R+0),4);
}
B503c28:{NFSU2_TR(0x503c28);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x8000001full))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B503c2e:{NFSU2_TR(0x503c2e);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L503c35;}}
}
B503c30:L503c30:{c.instructions+=3;NFSU2_TR(0x503c30);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B503c31:{NFSU2_TR(0x503c31);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xffffffe0ull))));
}
B503c34:{NFSU2_TR(0x503c34);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B503c35:L503c35:{c.instructions+=11;NFSU2_TR(0x503c35);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B503c39:{NFSU2_TR(0x503c39);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B503c3b:{NFSU2_TR(0x503c3b);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B503c3c:{NFSU2_TR(0x503c3c);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x1full))));
}
B503c3f:{NFSU2_TR(0x503c3f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B503c41:{NFSU2_TR(0x503c41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B503c42:{NFSU2_TR(0x503c42);
u8 U[47];
w4(U+39,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
__builtin_memmove((U+43),(R+0),4);
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+39))));
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
B503c45:{NFSU2_TR(0x503c45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B503c46:{NFSU2_TR(0x503c46);
u8 U[12];
w4(U+0,u32(u32(u32(0x16cull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B503c4d:{NFSU2_TR(0x503c4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B503c4e:{NFSU2_TR(0x503c4e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503c51:L503c51:{c.instructions+=3;NFSU2_TR(0x503c51);
__builtin_memmove((R+8),(R+0),4);
}
B503c53:{NFSU2_TR(0x503c53);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x8000001full))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B503c59:{NFSU2_TR(0x503c59);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L503c60;}}
}
B503c5b:L503c5b:{c.instructions+=3;NFSU2_TR(0x503c5b);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B503c5c:{NFSU2_TR(0x503c5c);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xffffffe0ull))));
}
B503c5f:{NFSU2_TR(0x503c5f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B503c60:L503c60:{c.instructions+=11;NFSU2_TR(0x503c60);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B503c64:{NFSU2_TR(0x503c64);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B503c66:{NFSU2_TR(0x503c66);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B503c67:{NFSU2_TR(0x503c67);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x1full))));
}
B503c6a:{NFSU2_TR(0x503c6a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B503c6c:{NFSU2_TR(0x503c6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B503c6d:{NFSU2_TR(0x503c6d);
u8 U[47];
w4(U+39,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
__builtin_memmove((U+43),(R+0),4);
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+39))));
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
B503c70:{NFSU2_TR(0x503c70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B503c71:{NFSU2_TR(0x503c71);
u8 U[12];
w4(U+0,u32(u32(u32(0x29cull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B503c78:{NFSU2_TR(0x503c78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B503c79:{NFSU2_TR(0x503c79);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503c7c:L503c7c:{c.instructions+=8;NFSU2_TR(0x503c7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B503c80:{NFSU2_TR(0x503c80);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B503c82:{NFSU2_TR(0x503c82);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B503c86:{NFSU2_TR(0x503c86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B503c87:{NFSU2_TR(0x503c87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B503c88:{NFSU2_TR(0x503c88);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B503c8b:{NFSU2_TR(0x503c8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B503c8c:{NFSU2_TR(0x503c8c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503d50:L503d50:{c.instructions+=4;NFSU2_TR(0x503d50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B503d54:{NFSU2_TR(0x503d54);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffc1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B503d57:{NFSU2_TR(0x503d57);
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
B503d5a:{NFSU2_TR(0x503d5a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L503d6a;}}
}
B503d5c:L503d5c:{c.instructions+=2;NFSU2_TR(0x503d5c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x503d9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B503d63:{NFSU2_TR(0x503d63);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x503d94ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B503d6a:L503d6a:{c.instructions+=7;NFSU2_TR(0x503d6a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B503d6e:{NFSU2_TR(0x503d6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503d6f:{NFSU2_TR(0x503d6f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B503d73:{NFSU2_TR(0x503d73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503d74:{NFSU2_TR(0x503d74);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503d75:{NFSU2_TR(0x503d75);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B503d7d:{NFSU2_TR(0x503d7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x503d82ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x503b10u);}goto L503b10;}
}
B503d82:L503d82:{c.instructions+=5;NFSU2_TR(0x503d82);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B503d86:{NFSU2_TR(0x503d86);
w4(R+8,u32(0x1ull));
}
B503d8b:{NFSU2_TR(0x503d8b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B503d8d:{NFSU2_TR(0x503d8d);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+8))));
s4(u32(r4(R+0)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B503d8f:{NFSU2_TR(0x503d8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503db0:L503db0:{c.instructions+=4;NFSU2_TR(0x503db0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B503db4:{NFSU2_TR(0x503db4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffc1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B503db7:{NFSU2_TR(0x503db7);
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
B503dba:{NFSU2_TR(0x503dba);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L503dcf;}}
}
B503dbc:L503dbc:{c.instructions+=2;NFSU2_TR(0x503dbc);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x503e04ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B503dc3:{NFSU2_TR(0x503dc3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x503dfcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B503dca:L503dca:{c.instructions+=2;NFSU2_TR(0x503dca);
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
B503dcc:{NFSU2_TR(0x503dcc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503dcf:L503dcf:{c.instructions+=7;NFSU2_TR(0x503dcf);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B503dd3:{NFSU2_TR(0x503dd3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503dd4:{NFSU2_TR(0x503dd4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B503dd8:{NFSU2_TR(0x503dd8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503dd9:{NFSU2_TR(0x503dd9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503dda:{NFSU2_TR(0x503dda);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B503de2:{NFSU2_TR(0x503de2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x503de7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x503b10u);}goto L503b10;}
}
B503de7:L503de7:{c.instructions+=6;NFSU2_TR(0x503de7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B503deb:{NFSU2_TR(0x503deb);
w4(R+8,u32(0x1ull));
}
B503df0:{NFSU2_TR(0x503df0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B503df2:{NFSU2_TR(0x503df2);
u8 U[14];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+10,u32(u32(r4(U+0))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B503df4:{NFSU2_TR(0x503df4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B503df7:{NFSU2_TR(0x503df7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503e10:L503e10:{c.instructions+=10;NFSU2_TR(0x503e10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503e11:{NFSU2_TR(0x503e11);
__builtin_memmove((R+24),(R+4),4);
}
B503e13:{NFSU2_TR(0x503e13);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B503e17:{NFSU2_TR(0x503e17);
__builtin_memmove((R+0),(R+4),4);
}
B503e19:{NFSU2_TR(0x503e19);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B503e1a:{NFSU2_TR(0x503e1a);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B503e1d:{NFSU2_TR(0x503e1d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B503e1f:{NFSU2_TR(0x503e1f);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B503e22:{NFSU2_TR(0x503e22);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x80000007ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B503e28:{NFSU2_TR(0x503e28);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L503e2f;}}
}
B503e2a:L503e2a:{c.instructions+=3;NFSU2_TR(0x503e2a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B503e2b:{NFSU2_TR(0x503e2b);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xfffffff8ull))));
}
B503e2e:{NFSU2_TR(0x503e2e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B503e2f:L503e2f:{c.instructions+=5;NFSU2_TR(0x503e2f);
w1(R+8,u8(0x1ull));
}
B503e31:{NFSU2_TR(0x503e31);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w1(R+8,shl<u8>(r1(R+8),u64(r1(U+0))));
}
B503e33:{NFSU2_TR(0x503e33);
u8 U[13];
w4(U+0,u32(u32(u32(0x15cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+12,u8(u32(r1(U+12))|u32(r1(R+8))));
s1(u32(r4(U+8)),r1(U+12));
}
B503e3a:{NFSU2_TR(0x503e3a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B503e3c:{NFSU2_TR(0x503e3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((R+4),(U+0),4);
}
B503e42:L503e42:{c.instructions+=2;NFSU2_TR(0x503e42);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B503e45:{NFSU2_TR(0x503e45);
if(r1(R+518)){{goto L503e54;}}
}
B503e47:L503e47:{c.instructions+=4;NFSU2_TR(0x503e47);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B503e48:{NFSU2_TR(0x503e48);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B503e4b:{NFSU2_TR(0x503e4b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x44ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x44ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B503e4e:{NFSU2_TR(0x503e4e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x503e42u);}goto L503e42;}}
}
B503e50:L503e50:{c.instructions+=2;NFSU2_TR(0x503e50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B503e51:{NFSU2_TR(0x503e51);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503e54:L503e54:{c.instructions+=4;NFSU2_TR(0x503e54);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B503e58:{NFSU2_TR(0x503e58);
u8 U[16];
w4(U+0,u32(u32(u32(0x2acull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B503e5f:{NFSU2_TR(0x503e5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B503e60:{NFSU2_TR(0x503e60);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503e70:L503e70:{c.instructions+=10;NFSU2_TR(0x503e70);
__builtin_memmove((R+8),(R+4),4);
}
B503e72:{NFSU2_TR(0x503e72);
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
B503e74:{NFSU2_TR(0x503e74);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x15cull))));
__builtin_memmove((R+4),(U+0),4);
}
B503e7a:{NFSU2_TR(0x503e7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B503e7c:{NFSU2_TR(0x503e7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503e7f:{NFSU2_TR(0x503e7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503e82:{NFSU2_TR(0x503e82);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503e85:{NFSU2_TR(0x503e85);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503e86:{NFSU2_TR(0x503e86);
w4(R+4,u32(0x57ull));
}
B503e8b:{NFSU2_TR(0x503e8b);
__builtin_memmove((R+28),(R+8),4);
}
B503e8d:L503e8d:{c.instructions+=1;NFSU2_TR(0x503e8d);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L503e8f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x503e8du);}goto L503e8d;}
}
B503e8f:L503e8f:{c.instructions+=2;NFSU2_TR(0x503e8f);
w4(R+4,u32(0x40ull));
}
B503e94:{NFSU2_TR(0x503e94);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x16cull))));
__builtin_memmove((R+28),(U+0),4);
}
B503e9a:L503e9a:{c.instructions+=1;NFSU2_TR(0x503e9a);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L503e9c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x503e9au);}goto L503e9a;}
}
B503e9c:L503e9c:{c.instructions+=18;NFSU2_TR(0x503e9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x26cull))));
__builtin_memmove((R+4),(U+0),4);
}
B503ea2:{NFSU2_TR(0x503ea2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B503ea4:{NFSU2_TR(0x503ea4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503ea7:{NFSU2_TR(0x503ea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503eaa:{NFSU2_TR(0x503eaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503ead:{NFSU2_TR(0x503ead);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x27cull))));
__builtin_memmove((R+4),(U+0),4);
}
B503eb3:{NFSU2_TR(0x503eb3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B503eb5:{NFSU2_TR(0x503eb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503eb8:{NFSU2_TR(0x503eb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503ebb:{NFSU2_TR(0x503ebb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503ebe:{NFSU2_TR(0x503ebe);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28cull))));
__builtin_memmove((R+4),(U+0),4);
}
B503ec4:{NFSU2_TR(0x503ec4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B503ec6:{NFSU2_TR(0x503ec6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503ec9:{NFSU2_TR(0x503ec9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x294ull))));
__builtin_memmove((R+4),(U+0),4);
}
B503ecf:{NFSU2_TR(0x503ecf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B503ed1:{NFSU2_TR(0x503ed1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503ed4:{NFSU2_TR(0x503ed4);
w4(R+4,u32(0x44ull));
}
B503ed9:{NFSU2_TR(0x503ed9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2acull))));
__builtin_memmove((R+28),(U+0),4);
}
B503edf:L503edf:{c.instructions+=1;NFSU2_TR(0x503edf);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L503ee1;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x503edfu);}goto L503edf;}
}
B503ee1:L503ee1:{c.instructions+=8;NFSU2_TR(0x503ee1);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x29cull))));
__builtin_memmove((R+4),(U+0),4);
}
B503ee7:{NFSU2_TR(0x503ee7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B503ee9:{NFSU2_TR(0x503ee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503eec:{NFSU2_TR(0x503eec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503eef:{NFSU2_TR(0x503eef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503ef2:{NFSU2_TR(0x503ef2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3bcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503ef8:{NFSU2_TR(0x503ef8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B503ef9:{NFSU2_TR(0x503ef9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B503f00:L503f00:{c.instructions+=9;NFSU2_TR(0x503f00);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B503f04:{NFSU2_TR(0x503f04);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B503f08:{NFSU2_TR(0x503f08);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503f09:{NFSU2_TR(0x503f09);
__builtin_memmove((R+12),(R+4),4);
}
B503f0b:{NFSU2_TR(0x503f0b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503f0c:{NFSU2_TR(0x503f0c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B503f0d:{NFSU2_TR(0x503f0d);
__builtin_memmove((R+28),(R+0),4);
}
B503f0f:{NFSU2_TR(0x503f0f);
w4(R+4,u32(0x57ull));
}
B503f14:{NFSU2_TR(0x503f14);
__builtin_memmove((R+24),(R+12),4);
}
B503f16:L503f16:{c.instructions+=1;NFSU2_TR(0x503f16);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L503f18;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x503f16u);}goto L503f16;}
}
B503f18:L503f18:{c.instructions+=17;NFSU2_TR(0x503f18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0xfffffea4ull))));
s4(u32(r4(R+8)),r4(U+0));
}
B503f1e:{NFSU2_TR(0x503f1e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x15cull))));
}
B503f23:{NFSU2_TR(0x503f23);
__builtin_memmove((R+24),(R+0),4);
}
B503f25:{NFSU2_TR(0x503f25);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x15cull))));
__builtin_memmove((R+4),(U+0),4);
}
B503f2b:{NFSU2_TR(0x503f2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B503f2d:{NFSU2_TR(0x503f2d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B503f2f:{NFSU2_TR(0x503f2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B503f32:{NFSU2_TR(0x503f32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503f35:{NFSU2_TR(0x503f35);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B503f38:{NFSU2_TR(0x503f38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503f3b:{NFSU2_TR(0x503f3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B503f3e:{NFSU2_TR(0x503f3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503f41:{NFSU2_TR(0x503f41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0xfffffff0ull))));
s4(u32(r4(R+8)),r4(U+0));
}
B503f44:{NFSU2_TR(0x503f44);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B503f47:{NFSU2_TR(0x503f47);
__builtin_memmove((R+28),(R+0),4);
}
B503f49:{NFSU2_TR(0x503f49);
w4(R+4,u32(0x40ull));
}
B503f4e:{NFSU2_TR(0x503f4e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x16cull))));
__builtin_memmove((R+24),(U+0),4);
}
B503f54:L503f54:{c.instructions+=1;NFSU2_TR(0x503f54);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L503f56;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x503f54u);}goto L503f54;}
}
B503f56:L503f56:{c.instructions+=50;NFSU2_TR(0x503f56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0xffffff00ull))));
s4(u32(r4(R+8)),r4(U+0));
}
B503f5c:{NFSU2_TR(0x503f5c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
}
B503f61:{NFSU2_TR(0x503f61);
__builtin_memmove((R+24),(R+0),4);
}
B503f63:{NFSU2_TR(0x503f63);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x26cull))));
__builtin_memmove((R+4),(U+0),4);
}
B503f69:{NFSU2_TR(0x503f69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B503f6b:{NFSU2_TR(0x503f6b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B503f6d:{NFSU2_TR(0x503f6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B503f70:{NFSU2_TR(0x503f70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503f73:{NFSU2_TR(0x503f73);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B503f76:{NFSU2_TR(0x503f76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503f79:{NFSU2_TR(0x503f79);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B503f7c:{NFSU2_TR(0x503f7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503f7f:{NFSU2_TR(0x503f7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0xfffffff0ull))));
s4(u32(r4(R+8)),r4(U+0));
}
B503f82:{NFSU2_TR(0x503f82);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B503f85:{NFSU2_TR(0x503f85);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x27cull))));
__builtin_memmove((R+4),(U+0),4);
}
B503f8b:{NFSU2_TR(0x503f8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B503f8d:{NFSU2_TR(0x503f8d);
__builtin_memmove((R+24),(R+0),4);
}
B503f8f:{NFSU2_TR(0x503f8f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B503f91:{NFSU2_TR(0x503f91);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B503f94:{NFSU2_TR(0x503f94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503f97:{NFSU2_TR(0x503f97);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B503f9a:{NFSU2_TR(0x503f9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503f9d:{NFSU2_TR(0x503f9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B503fa0:{NFSU2_TR(0x503fa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503fa3:{NFSU2_TR(0x503fa3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0xfffffff0ull))));
s4(u32(r4(R+8)),r4(U+0));
}
B503fa6:{NFSU2_TR(0x503fa6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B503fa9:{NFSU2_TR(0x503fa9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28cull))));
__builtin_memmove((R+4),(U+0),4);
}
B503faf:{NFSU2_TR(0x503faf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B503fb1:{NFSU2_TR(0x503fb1);
__builtin_memmove((R+24),(R+0),4);
}
B503fb3:{NFSU2_TR(0x503fb3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B503fb5:{NFSU2_TR(0x503fb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B503fb8:{NFSU2_TR(0x503fb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503fbb:{NFSU2_TR(0x503fbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0xfffffff8ull))));
s4(u32(r4(R+8)),r4(U+0));
}
B503fbe:{NFSU2_TR(0x503fbe);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3bcull))));
__builtin_memmove((R+4),(U+0),4);
}
B503fc4:{NFSU2_TR(0x503fc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B503fc6:{NFSU2_TR(0x503fc6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B503fc9:{NFSU2_TR(0x503fc9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B503fcb:{NFSU2_TR(0x503fcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0xfffffffcull))));
s4(u32(r4(R+8)),r4(U+0));
}
B503fce:{NFSU2_TR(0x503fce);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B503fd1:{NFSU2_TR(0x503fd1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x294ull))));
__builtin_memmove((R+4),(U+0),4);
}
B503fd7:{NFSU2_TR(0x503fd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B503fd9:{NFSU2_TR(0x503fd9);
__builtin_memmove((R+24),(R+0),4);
}
B503fdb:{NFSU2_TR(0x503fdb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B503fdd:{NFSU2_TR(0x503fdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B503fe0:{NFSU2_TR(0x503fe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B503fe3:{NFSU2_TR(0x503fe3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0xfffffff8ull))));
s4(u32(r4(R+8)),r4(U+0));
}
B503fe6:{NFSU2_TR(0x503fe6);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2acull))));
__builtin_memmove((R+24),(U+0),4);
}
B503fec:{NFSU2_TR(0x503fec);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B503fef:{NFSU2_TR(0x503fef);
__builtin_memmove((R+28),(R+0),4);
}
B503ff1:{NFSU2_TR(0x503ff1);
w4(R+4,u32(0x44ull));
}
B503ff6:L503ff6:{c.instructions+=1;NFSU2_TR(0x503ff6);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L503ff8;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x503ff6u);}goto L503ff6;}
}
B503ff8:L503ff8:{c.instructions+=2;NFSU2_TR(0x503ff8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B503ffa:{NFSU2_TR(0x503ffa);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x29cull))));
TAIL_STATIC(0x504000u,504);
}
XIT:NFSU2_TR_EXIT(0x503,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
