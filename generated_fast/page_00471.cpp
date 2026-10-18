#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_435(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_459(u8* __restrict R,Cpu& c);
u32 body_45d(u8* __restrict R,Cpu& c);
u32 body_45e(u8* __restrict R,Cpu& c);
u32 body_467(u8* __restrict R,Cpu& c);
u32 body_468(u8* __restrict R,Cpu& c);
u32 body_469(u8* __restrict R,Cpu& c);
u32 body_46b(u8* __restrict R,Cpu& c);
u32 body_470(u8* __restrict R,Cpu& c);
u32 body_472(u8* __restrict R,Cpu& c);
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_5d9(u8* __restrict R,Cpu& c);
u32 body_734(u8* __restrict R,Cpu& c);
u32 body_735(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x471,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x471,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_471(u8* __restrict R,Cpu& c);
u32 page_471(Cpu& c){return body_471(c.regs.data(),c);}
__attribute__((noinline)) u32 body_471(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x471000:goto L471000;
case 0x471005:c.instructions+=2;goto B471005;
case 0x471006:c.instructions+=1;goto B471006;
case 0x47100b:goto L47100b;
case 0x47100e:c.instructions+=2;goto B47100e;
case 0x471013:c.instructions+=1;goto B471013;
case 0x471015:goto L471015;
case 0x47101b:c.instructions+=5;goto B47101b;
case 0x47101e:c.instructions+=4;goto B47101e;
case 0x471024:c.instructions+=3;goto B471024;
case 0x471025:c.instructions+=2;goto B471025;
case 0x47102a:c.instructions+=1;goto B47102a;
case 0x47102f:goto L47102f;
case 0x471032:c.instructions+=2;goto B471032;
case 0x471034:c.instructions+=1;goto B471034;
case 0x471036:goto L471036;
case 0x471038:c.instructions+=1;goto B471038;
case 0x47103d:goto L47103d;
case 0x47103f:c.instructions+=1;goto B47103f;
case 0x471040:goto L471040;
case 0x471041:c.instructions+=6;goto B471041;
case 0x471045:c.instructions+=5;goto B471045;
case 0x471047:c.instructions+=4;goto B471047;
case 0x471048:c.instructions+=3;goto B471048;
case 0x47104a:c.instructions+=2;goto B47104a;
case 0x47104c:c.instructions+=1;goto B47104c;
case 0x47104f:goto L47104f;
case 0x471051:c.instructions+=3;goto B471051;
case 0x471057:c.instructions+=2;goto B471057;
case 0x47105d:c.instructions+=1;goto B47105d;
case 0x47105f:goto L47105f;
case 0x471064:c.instructions+=2;goto B471064;
case 0x471066:c.instructions+=1;goto B471066;
case 0x47106b:goto L47106b;
case 0x47106e:c.instructions+=3;goto B47106e;
case 0x47106f:c.instructions+=2;goto B47106f;
case 0x471070:c.instructions+=1;goto B471070;
case 0x471073:goto L471073;
case 0x471076:c.instructions+=3;goto B471076;
case 0x471077:c.instructions+=2;goto B471077;
case 0x471078:c.instructions+=1;goto B471078;
case 0x471080:goto L471080;
case 0x471081:c.instructions+=16;goto B471081;
case 0x471083:c.instructions+=15;goto B471083;
case 0x471086:c.instructions+=14;goto B471086;
case 0x471089:c.instructions+=13;goto B471089;
case 0x47108a:c.instructions+=12;goto B47108a;
case 0x47108b:c.instructions+=11;goto B47108b;
case 0x47108d:c.instructions+=10;goto B47108d;
case 0x471093:c.instructions+=9;goto B471093;
case 0x471094:c.instructions+=8;goto B471094;
case 0x471097:c.instructions+=7;goto B471097;
case 0x47109b:c.instructions+=6;goto B47109b;
case 0x4710a2:c.instructions+=5;goto B4710a2;
case 0x4710a8:c.instructions+=4;goto B4710a8;
case 0x4710ae:c.instructions+=3;goto B4710ae;
case 0x4710b0:c.instructions+=2;goto B4710b0;
case 0x4710b3:c.instructions+=1;goto B4710b3;
case 0x4710b5:goto L4710b5;
case 0x4710bf:goto L4710bf;
case 0x4710c5:c.instructions+=6;goto B4710c5;
case 0x4710c8:c.instructions+=5;goto B4710c8;
case 0x4710ce:c.instructions+=4;goto B4710ce;
case 0x4710d4:c.instructions+=3;goto B4710d4;
case 0x4710d6:c.instructions+=2;goto B4710d6;
case 0x4710d9:c.instructions+=1;goto B4710d9;
case 0x4710db:goto L4710db;
case 0x4710e5:goto L4710e5;
case 0x4710e8:c.instructions+=12;goto B4710e8;
case 0x4710ef:c.instructions+=11;goto B4710ef;
case 0x4710f2:c.instructions+=10;goto B4710f2;
case 0x4710f8:c.instructions+=9;goto B4710f8;
case 0x4710fe:c.instructions+=8;goto B4710fe;
case 0x471102:c.instructions+=7;goto B471102;
case 0x471106:c.instructions+=6;goto B471106;
case 0x471107:c.instructions+=5;goto B471107;
case 0x47110b:c.instructions+=4;goto B47110b;
case 0x47110c:c.instructions+=3;goto B47110c;
case 0x47110e:c.instructions+=2;goto B47110e;
case 0x471112:c.instructions+=1;goto B471112;
case 0x471117:goto L471117;
case 0x47111a:c.instructions+=19;goto B47111a;
case 0x47111d:c.instructions+=18;goto B47111d;
case 0x471123:c.instructions+=17;goto B471123;
case 0x471126:c.instructions+=16;goto B471126;
case 0x47112c:c.instructions+=15;goto B47112c;
case 0x471130:c.instructions+=14;goto B471130;
case 0x471132:c.instructions+=13;goto B471132;
case 0x471136:c.instructions+=12;goto B471136;
case 0x471138:c.instructions+=11;goto B471138;
case 0x47113c:c.instructions+=10;goto B47113c;
case 0x47113f:c.instructions+=9;goto B47113f;
case 0x471143:c.instructions+=8;goto B471143;
case 0x471147:c.instructions+=7;goto B471147;
case 0x471149:c.instructions+=6;goto B471149;
case 0x47114c:c.instructions+=5;goto B47114c;
case 0x471150:c.instructions+=4;goto B471150;
case 0x471154:c.instructions+=3;goto B471154;
case 0x471158:c.instructions+=2;goto B471158;
case 0x47115c:c.instructions+=1;goto B47115c;
case 0x471160:goto L471160;
case 0x471161:c.instructions+=5;goto B471161;
case 0x471163:c.instructions+=4;goto B471163;
case 0x471167:c.instructions+=3;goto B471167;
case 0x471168:c.instructions+=2;goto B471168;
case 0x47116d:c.instructions+=1;goto B47116d;
case 0x471172:goto L471172;
case 0x471174:c.instructions+=2;goto B471174;
case 0x471176:c.instructions+=1;goto B471176;
case 0x471178:goto L471178;
case 0x47117b:c.instructions+=4;goto B47117b;
case 0x471181:c.instructions+=3;goto B471181;
case 0x471183:c.instructions+=2;goto B471183;
case 0x471186:c.instructions+=1;goto B471186;
case 0x471188:goto L471188;
case 0x47118b:c.instructions+=6;goto B47118b;
case 0x47118e:c.instructions+=5;goto B47118e;
case 0x471191:c.instructions+=4;goto B471191;
case 0x471194:c.instructions+=3;goto B471194;
case 0x471196:c.instructions+=2;goto B471196;
case 0x471199:c.instructions+=1;goto B471199;
case 0x47119b:goto L47119b;
case 0x4711a2:c.instructions+=1;goto B4711a2;
case 0x4711a7:goto L4711a7;
case 0x4711a8:c.instructions+=5;goto B4711a8;
case 0x4711aa:c.instructions+=4;goto B4711aa;
case 0x4711ae:c.instructions+=3;goto B4711ae;
case 0x4711af:c.instructions+=2;goto B4711af;
case 0x4711b4:c.instructions+=1;goto B4711b4;
case 0x4711b9:goto L4711b9;
case 0x4711bb:c.instructions+=2;goto B4711bb;
case 0x4711bd:c.instructions+=1;goto B4711bd;
case 0x4711bf:goto L4711bf;
case 0x4711c2:c.instructions+=4;goto B4711c2;
case 0x4711c8:c.instructions+=3;goto B4711c8;
case 0x4711ca:c.instructions+=2;goto B4711ca;
case 0x4711cd:c.instructions+=1;goto B4711cd;
case 0x4711cf:goto L4711cf;
case 0x4711d2:c.instructions+=6;goto B4711d2;
case 0x4711d5:c.instructions+=5;goto B4711d5;
case 0x4711d8:c.instructions+=4;goto B4711d8;
case 0x4711db:c.instructions+=3;goto B4711db;
case 0x4711dd:c.instructions+=2;goto B4711dd;
case 0x4711e0:c.instructions+=1;goto B4711e0;
case 0x4711e2:goto L4711e2;
case 0x4711e9:c.instructions+=1;goto B4711e9;
case 0x4711f0:goto L4711f0;
case 0x4711f1:c.instructions+=5;goto B4711f1;
case 0x4711f6:c.instructions+=4;goto B4711f6;
case 0x4711fa:c.instructions+=3;goto B4711fa;
case 0x4711fb:c.instructions+=2;goto B4711fb;
case 0x471200:c.instructions+=1;goto B471200;
case 0x471205:goto L471205;
case 0x471207:c.instructions+=2;goto B471207;
case 0x471209:c.instructions+=1;goto B471209;
case 0x47120b:goto L47120b;
case 0x47120e:c.instructions+=4;goto B47120e;
case 0x471214:c.instructions+=3;goto B471214;
case 0x471216:c.instructions+=2;goto B471216;
case 0x471219:c.instructions+=1;goto B471219;
case 0x47121b:goto L47121b;
case 0x47121e:c.instructions+=6;goto B47121e;
case 0x471221:c.instructions+=5;goto B471221;
case 0x471224:c.instructions+=4;goto B471224;
case 0x471227:c.instructions+=3;goto B471227;
case 0x471229:c.instructions+=2;goto B471229;
case 0x47122c:c.instructions+=1;goto B47122c;
case 0x47122e:goto L47122e;
case 0x471235:goto L471235;
case 0x471238:c.instructions+=3;goto B471238;
case 0x47123a:c.instructions+=2;goto B47123a;
case 0x47123c:c.instructions+=1;goto B47123c;
case 0x471242:goto L471242;
case 0x471246:c.instructions+=1;goto B471246;
case 0x47124c:goto L47124c;
case 0x471252:c.instructions+=4;goto B471252;
case 0x471258:c.instructions+=3;goto B471258;
case 0x47125a:c.instructions+=2;goto B47125a;
case 0x47125d:c.instructions+=1;goto B47125d;
case 0x47125f:goto L47125f;
case 0x471265:c.instructions+=1;goto B471265;
case 0x471267:goto L471267;
case 0x47126d:c.instructions+=1;goto B47126d;
case 0x471273:goto L471273;
case 0x471276:c.instructions+=5;goto B471276;
case 0x471279:c.instructions+=4;goto B471279;
case 0x47127f:c.instructions+=3;goto B47127f;
case 0x471284:c.instructions+=2;goto B471284;
case 0x471289:c.instructions+=1;goto B471289;
case 0x47128e:goto L47128e;
case 0x471294:c.instructions+=4;goto B471294;
case 0x47129a:c.instructions+=3;goto B47129a;
case 0x47129c:c.instructions+=2;goto B47129c;
case 0x47129f:c.instructions+=1;goto B47129f;
case 0x4712a1:goto L4712a1;
case 0x4712a4:c.instructions+=19;goto B4712a4;
case 0x4712a8:c.instructions+=18;goto B4712a8;
case 0x4712ae:c.instructions+=17;goto B4712ae;
case 0x4712b4:c.instructions+=16;goto B4712b4;
case 0x4712b7:c.instructions+=15;goto B4712b7;
case 0x4712bd:c.instructions+=14;goto B4712bd;
case 0x4712c0:c.instructions+=13;goto B4712c0;
case 0x4712c3:c.instructions+=12;goto B4712c3;
case 0x4712c7:c.instructions+=11;goto B4712c7;
case 0x4712cd:c.instructions+=10;goto B4712cd;
case 0x4712d3:c.instructions+=9;goto B4712d3;
case 0x4712d5:c.instructions+=8;goto B4712d5;
case 0x4712db:c.instructions+=7;goto B4712db;
case 0x4712e1:c.instructions+=6;goto B4712e1;
case 0x4712e4:c.instructions+=5;goto B4712e4;
case 0x4712e7:c.instructions+=4;goto B4712e7;
case 0x4712ed:c.instructions+=3;goto B4712ed;
case 0x4712f3:c.instructions+=2;goto B4712f3;
case 0x4712f8:c.instructions+=1;goto B4712f8;
case 0x4712fd:goto L4712fd;
case 0x471302:c.instructions+=1;goto B471302;
case 0x471308:goto L471308;
case 0x47130b:c.instructions+=2;goto B47130b;
case 0x47130d:c.instructions+=1;goto B47130d;
case 0x471313:goto L471313;
case 0x471317:c.instructions+=1;goto B471317;
case 0x47131d:goto L47131d;
case 0x471321:c.instructions+=1;goto B471321;
case 0x471327:goto L471327;
case 0x47132d:c.instructions+=4;goto B47132d;
case 0x471333:c.instructions+=3;goto B471333;
case 0x471335:c.instructions+=2;goto B471335;
case 0x471338:c.instructions+=1;goto B471338;
case 0x47133a:goto L47133a;
case 0x471340:c.instructions+=1;goto B471340;
case 0x471342:goto L471342;
case 0x471348:c.instructions+=1;goto B471348;
case 0x47134e:goto L47134e;
case 0x471351:c.instructions+=5;goto B471351;
case 0x471354:c.instructions+=4;goto B471354;
case 0x47135a:c.instructions+=3;goto B47135a;
case 0x471360:c.instructions+=2;goto B471360;
case 0x471365:c.instructions+=1;goto B471365;
case 0x47136a:goto L47136a;
case 0x471370:c.instructions+=4;goto B471370;
case 0x471376:c.instructions+=3;goto B471376;
case 0x471378:c.instructions+=2;goto B471378;
case 0x47137b:c.instructions+=1;goto B47137b;
case 0x47137d:goto L47137d;
case 0x471380:c.instructions+=19;goto B471380;
case 0x471384:c.instructions+=18;goto B471384;
case 0x47138a:c.instructions+=17;goto B47138a;
case 0x471390:c.instructions+=16;goto B471390;
case 0x471396:c.instructions+=15;goto B471396;
case 0x47139a:c.instructions+=14;goto B47139a;
case 0x4713a0:c.instructions+=13;goto B4713a0;
case 0x4713a3:c.instructions+=12;goto B4713a3;
case 0x4713a6:c.instructions+=11;goto B4713a6;
case 0x4713ac:c.instructions+=10;goto B4713ac;
case 0x4713b2:c.instructions+=9;goto B4713b2;
case 0x4713b4:c.instructions+=8;goto B4713b4;
case 0x4713ba:c.instructions+=7;goto B4713ba;
case 0x4713c0:c.instructions+=6;goto B4713c0;
case 0x4713c3:c.instructions+=5;goto B4713c3;
case 0x4713c6:c.instructions+=4;goto B4713c6;
case 0x4713cc:c.instructions+=3;goto B4713cc;
case 0x4713d1:c.instructions+=2;goto B4713d1;
case 0x4713d7:c.instructions+=1;goto B4713d7;
case 0x4713dc:goto L4713dc;
case 0x4713e1:c.instructions+=1;goto B4713e1;
case 0x4713e7:goto L4713e7;
case 0x4713e8:c.instructions+=5;goto B4713e8;
case 0x4713e9:c.instructions+=4;goto B4713e9;
case 0x4713ea:c.instructions+=3;goto B4713ea;
case 0x4713ec:c.instructions+=2;goto B4713ec;
case 0x4713ed:c.instructions+=1;goto B4713ed;
case 0x4713f0:goto L4713f0;
case 0x4713f6:c.instructions+=2;goto B4713f6;
case 0x4713f8:c.instructions+=1;goto B4713f8;
case 0x4713fe:goto L4713fe;
case 0x471404:c.instructions+=2;goto B471404;
case 0x471406:c.instructions+=1;goto B471406;
case 0x47140c:goto L47140c;
case 0x471411:c.instructions+=11;goto B471411;
case 0x471415:c.instructions+=10;goto B471415;
case 0x471419:c.instructions+=9;goto B471419;
case 0x47141c:c.instructions+=8;goto B47141c;
case 0x47141f:c.instructions+=7;goto B47141f;
case 0x471425:c.instructions+=6;goto B471425;
case 0x47142b:c.instructions+=5;goto B47142b;
case 0x47142d:c.instructions+=4;goto B47142d;
case 0x471432:c.instructions+=3;goto B471432;
case 0x471433:c.instructions+=2;goto B471433;
case 0x471434:c.instructions+=1;goto B471434;
case 0x471436:goto L471436;
case 0x47143b:goto L47143b;
case 0x47143d:goto L47143d;
case 0x471443:c.instructions+=3;goto B471443;
case 0x471445:c.instructions+=2;goto B471445;
case 0x47144a:c.instructions+=1;goto B47144a;
case 0x47144c:goto L47144c;
case 0x47144e:c.instructions+=2;goto B47144e;
case 0x471450:c.instructions+=1;goto B471450;
case 0x471452:goto L471452;
case 0x471454:goto L471454;
case 0x471455:c.instructions+=1;goto B471455;
case 0x47145a:goto L47145a;
case 0x47145e:c.instructions+=5;goto B47145e;
case 0x471462:c.instructions+=4;goto B471462;
case 0x471463:c.instructions+=3;goto B471463;
case 0x471469:c.instructions+=2;goto B471469;
case 0x47146f:c.instructions+=1;goto B47146f;
case 0x471474:goto L471474;
case 0x471478:c.instructions+=6;goto B471478;
case 0x47147c:c.instructions+=5;goto B47147c;
case 0x47147f:c.instructions+=4;goto B47147f;
case 0x471480:c.instructions+=3;goto B471480;
case 0x471481:c.instructions+=2;goto B471481;
case 0x471487:c.instructions+=1;goto B471487;
case 0x47148d:goto L47148d;
case 0x471490:goto L471490;
case 0x471492:c.instructions+=1;goto B471492;
case 0x471494:goto L471494;
case 0x471496:c.instructions+=1;goto B471496;
case 0x471498:goto L471498;
case 0x47149d:c.instructions+=1;goto B47149d;
case 0x4714a0:goto L4714a0;
case 0x4714a4:c.instructions+=11;goto B4714a4;
case 0x4714a5:c.instructions+=10;goto B4714a5;
case 0x4714a6:c.instructions+=9;goto B4714a6;
case 0x4714a7:c.instructions+=8;goto B4714a7;
case 0x4714a9:c.instructions+=7;goto B4714a9;
case 0x4714aa:c.instructions+=6;goto B4714aa;
case 0x4714b0:c.instructions+=5;goto B4714b0;
case 0x4714b2:c.instructions+=4;goto B4714b2;
case 0x4714b3:c.instructions+=3;goto B4714b3;
case 0x4714b5:c.instructions+=2;goto B4714b5;
case 0x4714bb:c.instructions+=1;goto B4714bb;
case 0x4714c0:goto L4714c0;
case 0x4714c6:c.instructions+=1;goto B4714c6;
case 0x4714cc:goto L4714cc;
case 0x4714d2:c.instructions+=1;goto B4714d2;
case 0x4714d8:goto L4714d8;
case 0x4714de:c.instructions+=1;goto B4714de;
case 0x4714e4:goto L4714e4;
case 0x4714eb:c.instructions+=12;goto B4714eb;
case 0x4714f2:c.instructions+=11;goto B4714f2;
case 0x4714f8:c.instructions+=10;goto B4714f8;
case 0x4714fd:c.instructions+=9;goto B4714fd;
case 0x471500:c.instructions+=8;goto B471500;
case 0x471507:c.instructions+=7;goto B471507;
case 0x471508:c.instructions+=6;goto B471508;
case 0x471509:c.instructions+=5;goto B471509;
case 0x47150e:c.instructions+=4;goto B47150e;
case 0x47150f:c.instructions+=3;goto B47150f;
case 0x471511:c.instructions+=2;goto B471511;
case 0x471516:c.instructions+=1;goto B471516;
case 0x47151b:goto L47151b;
case 0x471521:c.instructions+=12;goto B471521;
case 0x471526:c.instructions+=11;goto B471526;
case 0x47152c:c.instructions+=10;goto B47152c;
case 0x471532:c.instructions+=9;goto B471532;
case 0x471537:c.instructions+=8;goto B471537;
case 0x47153c:c.instructions+=7;goto B47153c;
case 0x471541:c.instructions+=6;goto B471541;
case 0x471546:c.instructions+=5;goto B471546;
case 0x471549:c.instructions+=4;goto B471549;
case 0x47154f:c.instructions+=3;goto B47154f;
case 0x471555:c.instructions+=2;goto B471555;
case 0x471558:c.instructions+=1;goto B471558;
case 0x47155d:goto L47155d;
case 0x471563:c.instructions+=3;goto B471563;
case 0x471565:c.instructions+=2;goto B471565;
case 0x47156b:c.instructions+=1;goto B47156b;
case 0x471571:goto L471571;
case 0x471576:goto L471576;
case 0x471578:goto L471578;
case 0x47157e:c.instructions+=3;goto B47157e;
case 0x471580:c.instructions+=2;goto B471580;
case 0x471586:c.instructions+=1;goto B471586;
case 0x47158c:goto L47158c;
case 0x47158e:c.instructions+=2;goto B47158e;
case 0x471590:c.instructions+=1;goto B471590;
case 0x471592:goto L471592;
case 0x471594:goto L471594;
case 0x471595:c.instructions+=1;goto B471595;
case 0x47159a:goto L47159a;
case 0x47159e:c.instructions+=5;goto B47159e;
case 0x4715a2:c.instructions+=4;goto B4715a2;
case 0x4715a3:c.instructions+=3;goto B4715a3;
case 0x4715a9:c.instructions+=2;goto B4715a9;
case 0x4715af:c.instructions+=1;goto B4715af;
case 0x4715b4:goto L4715b4;
case 0x4715ba:c.instructions+=6;goto B4715ba;
case 0x4715be:c.instructions+=5;goto B4715be;
case 0x4715c2:c.instructions+=4;goto B4715c2;
case 0x4715c3:c.instructions+=3;goto B4715c3;
case 0x4715c9:c.instructions+=2;goto B4715c9;
case 0x4715cf:c.instructions+=1;goto B4715cf;
case 0x4715d4:goto L4715d4;
case 0x4715da:c.instructions+=6;goto B4715da;
case 0x4715de:c.instructions+=5;goto B4715de;
case 0x4715e2:c.instructions+=4;goto B4715e2;
case 0x4715e3:c.instructions+=3;goto B4715e3;
case 0x4715e9:c.instructions+=2;goto B4715e9;
case 0x4715ef:c.instructions+=1;goto B4715ef;
case 0x4715f4:goto L4715f4;
case 0x4715f8:c.instructions+=5;goto B4715f8;
case 0x4715fc:c.instructions+=4;goto B4715fc;
case 0x4715ff:c.instructions+=3;goto B4715ff;
case 0x471605:c.instructions+=2;goto B471605;
case 0x47160b:c.instructions+=1;goto B47160b;
case 0x47160d:goto L47160d;
case 0x47160f:c.instructions+=1;goto B47160f;
case 0x471615:goto L471615;
case 0x471617:c.instructions+=1;goto B471617;
case 0x47161c:goto L47161c;
case 0x471621:c.instructions+=1;goto B471621;
case 0x471626:goto L471626;
case 0x47162c:c.instructions+=1;goto B47162c;
case 0x47162e:goto L47162e;
case 0x471634:c.instructions+=1;goto B471634;
case 0x471636:goto L471636;
case 0x47163c:c.instructions+=8;goto B47163c;
case 0x471641:c.instructions+=7;goto B471641;
case 0x471647:c.instructions+=6;goto B471647;
case 0x47164d:c.instructions+=5;goto B47164d;
case 0x471652:c.instructions+=4;goto B471652;
case 0x471657:c.instructions+=3;goto B471657;
case 0x47165d:c.instructions+=2;goto B47165d;
case 0x471663:c.instructions+=1;goto B471663;
case 0x471668:goto L471668;
case 0x47166e:c.instructions+=1;goto B47166e;
case 0x471674:goto L471674;
case 0x47167a:c.instructions+=1;goto B47167a;
case 0x471680:goto L471680;
case 0x471686:c.instructions+=6;goto B471686;
case 0x47168c:c.instructions+=5;goto B47168c;
case 0x471692:c.instructions+=4;goto B471692;
case 0x471694:c.instructions+=3;goto B471694;
case 0x471696:c.instructions+=2;goto B471696;
case 0x471699:c.instructions+=1;goto B471699;
case 0x47169b:goto L47169b;
case 0x47169d:c.instructions+=7;goto B47169d;
case 0x4716a3:c.instructions+=6;goto B4716a3;
case 0x4716a9:c.instructions+=5;goto B4716a9;
case 0x4716af:c.instructions+=4;goto B4716af;
case 0x4716b1:c.instructions+=3;goto B4716b1;
case 0x4716b3:c.instructions+=2;goto B4716b3;
case 0x4716b6:c.instructions+=1;goto B4716b6;
case 0x4716b8:goto L4716b8;
case 0x4716ba:c.instructions+=1;goto B4716ba;
case 0x4716c0:goto L4716c0;
case 0x4716c6:c.instructions+=7;goto B4716c6;
case 0x4716cc:c.instructions+=6;goto B4716cc;
case 0x4716d2:c.instructions+=5;goto B4716d2;
case 0x4716d8:c.instructions+=4;goto B4716d8;
case 0x4716da:c.instructions+=3;goto B4716da;
case 0x4716dc:c.instructions+=2;goto B4716dc;
case 0x4716df:c.instructions+=1;goto B4716df;
case 0x4716e1:goto L4716e1;
case 0x4716e3:c.instructions+=7;goto B4716e3;
case 0x4716e9:c.instructions+=6;goto B4716e9;
case 0x4716ef:c.instructions+=5;goto B4716ef;
case 0x4716f5:c.instructions+=4;goto B4716f5;
case 0x4716f7:c.instructions+=3;goto B4716f7;
case 0x4716f9:c.instructions+=2;goto B4716f9;
case 0x4716fc:c.instructions+=1;goto B4716fc;
case 0x4716fe:goto L4716fe;
case 0x471700:c.instructions+=1;goto B471700;
case 0x471706:goto L471706;
case 0x47170c:c.instructions+=7;goto B47170c;
case 0x471712:c.instructions+=6;goto B471712;
case 0x471718:c.instructions+=5;goto B471718;
case 0x47171e:c.instructions+=4;goto B47171e;
case 0x471720:c.instructions+=3;goto B471720;
case 0x471722:c.instructions+=2;goto B471722;
case 0x471725:c.instructions+=1;goto B471725;
case 0x471727:goto L471727;
case 0x471729:c.instructions+=7;goto B471729;
case 0x47172f:c.instructions+=6;goto B47172f;
case 0x471735:c.instructions+=5;goto B471735;
case 0x47173b:c.instructions+=4;goto B47173b;
case 0x47173d:c.instructions+=3;goto B47173d;
case 0x47173f:c.instructions+=2;goto B47173f;
case 0x471742:c.instructions+=1;goto B471742;
case 0x471744:goto L471744;
case 0x471746:c.instructions+=1;goto B471746;
case 0x47174c:goto L47174c;
case 0x471752:c.instructions+=7;goto B471752;
case 0x471758:c.instructions+=6;goto B471758;
case 0x47175e:c.instructions+=5;goto B47175e;
case 0x471764:c.instructions+=4;goto B471764;
case 0x471766:c.instructions+=3;goto B471766;
case 0x471768:c.instructions+=2;goto B471768;
case 0x47176b:c.instructions+=1;goto B47176b;
case 0x47176d:goto L47176d;
case 0x47176f:c.instructions+=7;goto B47176f;
case 0x471775:c.instructions+=6;goto B471775;
case 0x47177b:c.instructions+=5;goto B47177b;
case 0x471781:c.instructions+=4;goto B471781;
case 0x471783:c.instructions+=3;goto B471783;
case 0x471785:c.instructions+=2;goto B471785;
case 0x471788:c.instructions+=1;goto B471788;
case 0x47178a:goto L47178a;
case 0x47178c:c.instructions+=1;goto B47178c;
case 0x471792:goto L471792;
case 0x471798:c.instructions+=3;goto B471798;
case 0x47179a:c.instructions+=2;goto B47179a;
case 0x4717a0:c.instructions+=1;goto B4717a0;
case 0x4717a5:goto L4717a5;
case 0x4717a7:c.instructions+=4;goto B4717a7;
case 0x4717ad:c.instructions+=3;goto B4717ad;
case 0x4717af:c.instructions+=2;goto B4717af;
case 0x4717b5:c.instructions+=1;goto B4717b5;
case 0x4717ba:goto L4717ba;
case 0x4717c0:c.instructions+=2;goto B4717c0;
case 0x4717c5:c.instructions+=1;goto B4717c5;
case 0x4717ca:goto L4717ca;
case 0x4717cc:c.instructions+=2;goto B4717cc;
case 0x4717d2:c.instructions+=1;goto B4717d2;
case 0x4717d7:goto L4717d7;
case 0x4717dd:c.instructions+=5;goto B4717dd;
case 0x4717e3:c.instructions+=4;goto B4717e3;
case 0x4717e9:c.instructions+=3;goto B4717e9;
case 0x4717ef:c.instructions+=2;goto B4717ef;
case 0x4717f5:c.instructions+=1;goto B4717f5;
case 0x4717fa:goto L4717fa;
case 0x471800:c.instructions+=7;goto B471800;
case 0x471806:c.instructions+=6;goto B471806;
case 0x471808:c.instructions+=5;goto B471808;
case 0x47180e:c.instructions+=4;goto B47180e;
case 0x471814:c.instructions+=3;goto B471814;
case 0x47181a:c.instructions+=2;goto B47181a;
case 0x471820:c.instructions+=1;goto B471820;
case 0x471825:goto L471825;
case 0x47182b:c.instructions+=6;goto B47182b;
case 0x471831:c.instructions+=5;goto B471831;
case 0x471836:c.instructions+=4;goto B471836;
case 0x47183c:c.instructions+=3;goto B47183c;
case 0x471842:c.instructions+=2;goto B471842;
case 0x471848:c.instructions+=1;goto B471848;
case 0x47184d:goto L47184d;
case 0x471853:c.instructions+=5;goto B471853;
case 0x471859:c.instructions+=4;goto B471859;
case 0x47185b:c.instructions+=3;goto B47185b;
case 0x471861:c.instructions+=2;goto B471861;
case 0x471867:c.instructions+=1;goto B471867;
case 0x47186d:goto L47186d;
case 0x471873:c.instructions+=1;goto B471873;
case 0x471878:goto L471878;
case 0x47187d:c.instructions+=2;goto B47187d;
case 0x471883:c.instructions+=1;goto B471883;
case 0x471885:goto L471885;
case 0x471886:c.instructions+=2;goto B471886;
case 0x471888:c.instructions+=1;goto B471888;
case 0x47188a:goto L47188a;
case 0x471890:c.instructions+=2;goto B471890;
case 0x471892:c.instructions+=1;goto B471892;
case 0x471894:goto L471894;
case 0x471899:goto L471899;
case 0x47189a:c.instructions+=3;goto B47189a;
case 0x47189c:c.instructions+=2;goto B47189c;
case 0x4718a1:c.instructions+=1;goto B4718a1;
case 0x4718a3:goto L4718a3;
case 0x4718a9:c.instructions+=2;goto B4718a9;
case 0x4718ab:c.instructions+=1;goto B4718ab;
case 0x4718ad:goto L4718ad;
case 0x4718b2:goto L4718b2;
case 0x4718b7:c.instructions+=2;goto B4718b7;
case 0x4718bd:c.instructions+=1;goto B4718bd;
case 0x4718bf:goto L4718bf;
case 0x4718c1:c.instructions+=1;goto B4718c1;
case 0x4718c3:goto L4718c3;
case 0x4718c5:c.instructions+=3;goto B4718c5;
case 0x4718ca:c.instructions+=2;goto B4718ca;
case 0x4718d0:c.instructions+=1;goto B4718d0;
case 0x4718d2:goto L4718d2;
case 0x4718d9:goto L4718d9;
case 0x4718df:c.instructions+=7;goto B4718df;
case 0x4718e0:c.instructions+=6;goto B4718e0;
case 0x4718e3:c.instructions+=5;goto B4718e3;
case 0x4718e9:c.instructions+=4;goto B4718e9;
case 0x4718ea:c.instructions+=3;goto B4718ea;
case 0x4718eb:c.instructions+=2;goto B4718eb;
case 0x4718ec:c.instructions+=1;goto B4718ec;
case 0x4718f0:goto L4718f0;
case 0x4718f5:c.instructions+=2;goto B4718f5;
case 0x4718f6:c.instructions+=1;goto B4718f6;
case 0x4718fb:goto L4718fb;
case 0x4718fe:c.instructions+=2;goto B4718fe;
case 0x471903:c.instructions+=1;goto B471903;
case 0x471905:goto L471905;
case 0x47190b:c.instructions+=5;goto B47190b;
case 0x47190e:c.instructions+=4;goto B47190e;
case 0x471914:c.instructions+=3;goto B471914;
case 0x471915:c.instructions+=2;goto B471915;
case 0x47191a:c.instructions+=1;goto B47191a;
case 0x47191f:goto L47191f;
case 0x471922:c.instructions+=2;goto B471922;
case 0x471924:c.instructions+=1;goto B471924;
case 0x471926:goto L471926;
case 0x471928:c.instructions+=1;goto B471928;
case 0x47192d:goto L47192d;
case 0x47192f:c.instructions+=1;goto B47192f;
case 0x471930:goto L471930;
case 0x471935:c.instructions+=2;goto B471935;
case 0x471936:c.instructions+=1;goto B471936;
case 0x47193b:goto L47193b;
case 0x47193e:c.instructions+=2;goto B47193e;
case 0x471943:c.instructions+=1;goto B471943;
case 0x471945:goto L471945;
case 0x47194b:c.instructions+=5;goto B47194b;
case 0x47194e:c.instructions+=4;goto B47194e;
case 0x471954:c.instructions+=3;goto B471954;
case 0x471955:c.instructions+=2;goto B471955;
case 0x471957:c.instructions+=1;goto B471957;
case 0x47195c:goto L47195c;
case 0x47195f:c.instructions+=2;goto B47195f;
case 0x471961:c.instructions+=1;goto B471961;
case 0x471963:goto L471963;
case 0x471965:c.instructions+=1;goto B471965;
case 0x47196a:goto L47196a;
case 0x47196c:c.instructions+=1;goto B47196c;
case 0x471970:goto L471970;
case 0x471971:c.instructions+=7;goto B471971;
case 0x471972:c.instructions+=6;goto B471972;
case 0x471973:c.instructions+=5;goto B471973;
case 0x471979:c.instructions+=4;goto B471979;
case 0x47197c:c.instructions+=3;goto B47197c;
case 0x47197e:c.instructions+=2;goto B47197e;
case 0x471980:c.instructions+=1;goto B471980;
case 0x471986:goto L471986;
case 0x471988:c.instructions+=2;goto B471988;
case 0x47198e:c.instructions+=1;goto B47198e;
case 0x471993:goto L471993;
case 0x471998:c.instructions+=5;goto B471998;
case 0x47199a:c.instructions+=4;goto B47199a;
case 0x47199c:c.instructions+=3;goto B47199c;
case 0x47199d:c.instructions+=2;goto B47199d;
case 0x47199f:c.instructions+=1;goto B47199f;
case 0x4719a4:goto L4719a4;
case 0x4719a8:c.instructions+=10;goto B4719a8;
case 0x4719ac:c.instructions+=9;goto B4719ac;
case 0x4719af:c.instructions+=8;goto B4719af;
case 0x4719b2:c.instructions+=7;goto B4719b2;
case 0x4719b8:c.instructions+=6;goto B4719b8;
case 0x4719bb:c.instructions+=5;goto B4719bb;
case 0x4719bd:c.instructions+=4;goto B4719bd;
case 0x4719bf:c.instructions+=3;goto B4719bf;
case 0x4719c5:c.instructions+=2;goto B4719c5;
case 0x4719cb:c.instructions+=1;goto B4719cb;
case 0x4719d0:goto L4719d0;
case 0x4719d3:c.instructions+=8;goto B4719d3;
case 0x4719d9:c.instructions+=7;goto B4719d9;
case 0x4719dc:c.instructions+=6;goto B4719dc;
case 0x4719df:c.instructions+=5;goto B4719df;
case 0x4719e1:c.instructions+=4;goto B4719e1;
case 0x4719e3:c.instructions+=3;goto B4719e3;
case 0x4719e9:c.instructions+=2;goto B4719e9;
case 0x4719ef:c.instructions+=1;goto B4719ef;
case 0x4719f4:goto L4719f4;
case 0x4719f7:c.instructions+=8;goto B4719f7;
case 0x4719fc:c.instructions+=7;goto B4719fc;
case 0x4719ff:c.instructions+=6;goto B4719ff;
case 0x471a02:c.instructions+=5;goto B471a02;
case 0x471a04:c.instructions+=4;goto B471a04;
case 0x471a06:c.instructions+=3;goto B471a06;
case 0x471a0c:c.instructions+=2;goto B471a0c;
case 0x471a12:c.instructions+=1;goto B471a12;
case 0x471a17:goto L471a17;
case 0x471a1a:c.instructions+=8;goto B471a1a;
case 0x471a20:c.instructions+=7;goto B471a20;
case 0x471a23:c.instructions+=6;goto B471a23;
case 0x471a26:c.instructions+=5;goto B471a26;
case 0x471a28:c.instructions+=4;goto B471a28;
case 0x471a2a:c.instructions+=3;goto B471a2a;
case 0x471a30:c.instructions+=2;goto B471a30;
case 0x471a36:c.instructions+=1;goto B471a36;
case 0x471a3b:goto L471a3b;
case 0x471a3e:c.instructions+=8;goto B471a3e;
case 0x471a44:c.instructions+=7;goto B471a44;
case 0x471a47:c.instructions+=6;goto B471a47;
case 0x471a4a:c.instructions+=5;goto B471a4a;
case 0x471a4c:c.instructions+=4;goto B471a4c;
case 0x471a4e:c.instructions+=3;goto B471a4e;
case 0x471a54:c.instructions+=2;goto B471a54;
case 0x471a5a:c.instructions+=1;goto B471a5a;
case 0x471a5f:goto L471a5f;
case 0x471a62:c.instructions+=8;goto B471a62;
case 0x471a67:c.instructions+=7;goto B471a67;
case 0x471a6a:c.instructions+=6;goto B471a6a;
case 0x471a6d:c.instructions+=5;goto B471a6d;
case 0x471a6f:c.instructions+=4;goto B471a6f;
case 0x471a71:c.instructions+=3;goto B471a71;
case 0x471a77:c.instructions+=2;goto B471a77;
case 0x471a7d:c.instructions+=1;goto B471a7d;
case 0x471a82:goto L471a82;
case 0x471a84:c.instructions+=6;goto B471a84;
case 0x471a8a:c.instructions+=5;goto B471a8a;
case 0x471a8d:c.instructions+=4;goto B471a8d;
case 0x471a93:c.instructions+=3;goto B471a93;
case 0x471a96:c.instructions+=2;goto B471a96;
case 0x471a98:c.instructions+=1;goto B471a98;
case 0x471a9a:goto L471a9a;
case 0x471a9c:c.instructions+=3;goto B471a9c;
case 0x471a9f:c.instructions+=2;goto B471a9f;
case 0x471aa1:c.instructions+=1;goto B471aa1;
case 0x471aa7:goto L471aa7;
case 0x471aac:goto L471aac;
case 0x471ab2:c.instructions+=5;goto B471ab2;
case 0x471ab5:c.instructions+=4;goto B471ab5;
case 0x471abb:c.instructions+=3;goto B471abb;
case 0x471abe:c.instructions+=2;goto B471abe;
case 0x471ac0:c.instructions+=1;goto B471ac0;
case 0x471ac2:goto L471ac2;
case 0x471ac4:c.instructions+=3;goto B471ac4;
case 0x471ac7:c.instructions+=2;goto B471ac7;
case 0x471ac9:c.instructions+=1;goto B471ac9;
case 0x471acf:goto L471acf;
case 0x471ad4:goto L471ad4;
case 0x471ada:c.instructions+=5;goto B471ada;
case 0x471add:c.instructions+=4;goto B471add;
case 0x471ae2:c.instructions+=3;goto B471ae2;
case 0x471ae5:c.instructions+=2;goto B471ae5;
case 0x471ae7:c.instructions+=1;goto B471ae7;
case 0x471ae9:goto L471ae9;
case 0x471aeb:c.instructions+=3;goto B471aeb;
case 0x471aee:c.instructions+=2;goto B471aee;
case 0x471af0:c.instructions+=1;goto B471af0;
case 0x471af6:goto L471af6;
case 0x471afb:goto L471afb;
case 0x471b01:c.instructions+=5;goto B471b01;
case 0x471b04:c.instructions+=4;goto B471b04;
case 0x471b0a:c.instructions+=3;goto B471b0a;
case 0x471b0d:c.instructions+=2;goto B471b0d;
case 0x471b0f:c.instructions+=1;goto B471b0f;
case 0x471b11:goto L471b11;
case 0x471b13:c.instructions+=3;goto B471b13;
case 0x471b16:c.instructions+=2;goto B471b16;
case 0x471b18:c.instructions+=1;goto B471b18;
case 0x471b1e:goto L471b1e;
case 0x471b23:goto L471b23;
case 0x471b29:c.instructions+=5;goto B471b29;
case 0x471b2c:c.instructions+=4;goto B471b2c;
case 0x471b32:c.instructions+=3;goto B471b32;
case 0x471b35:c.instructions+=2;goto B471b35;
case 0x471b37:c.instructions+=1;goto B471b37;
case 0x471b39:goto L471b39;
case 0x471b3b:c.instructions+=3;goto B471b3b;
case 0x471b3e:c.instructions+=2;goto B471b3e;
case 0x471b40:c.instructions+=1;goto B471b40;
case 0x471b46:goto L471b46;
case 0x471b4b:goto L471b4b;
case 0x471b51:c.instructions+=5;goto B471b51;
case 0x471b54:c.instructions+=4;goto B471b54;
case 0x471b59:c.instructions+=3;goto B471b59;
case 0x471b5c:c.instructions+=2;goto B471b5c;
case 0x471b5e:c.instructions+=1;goto B471b5e;
case 0x471b60:goto L471b60;
case 0x471b62:c.instructions+=3;goto B471b62;
case 0x471b65:c.instructions+=2;goto B471b65;
case 0x471b67:c.instructions+=1;goto B471b67;
case 0x471b6d:goto L471b6d;
case 0x471b72:goto L471b72;
case 0x471b75:c.instructions+=3;goto B471b75;
case 0x471b7a:c.instructions+=2;goto B471b7a;
case 0x471b7c:c.instructions+=1;goto B471b7c;
case 0x471b7e:goto L471b7e;
case 0x471b83:c.instructions+=2;goto B471b83;
case 0x471b85:c.instructions+=1;goto B471b85;
case 0x471b87:goto L471b87;
case 0x471b8c:c.instructions+=2;goto B471b8c;
case 0x471b8e:c.instructions+=1;goto B471b8e;
case 0x471b90:goto L471b90;
case 0x471b95:c.instructions+=2;goto B471b95;
case 0x471b97:c.instructions+=1;goto B471b97;
case 0x471b99:goto L471b99;
case 0x471b9e:c.instructions+=2;goto B471b9e;
case 0x471ba0:c.instructions+=1;goto B471ba0;
case 0x471ba2:goto L471ba2;
case 0x471ba8:c.instructions+=2;goto B471ba8;
case 0x471baa:c.instructions+=1;goto B471baa;
case 0x471bac:goto L471bac;
case 0x471baf:c.instructions+=2;goto B471baf;
case 0x471bb2:c.instructions+=1;goto B471bb2;
case 0x471bb4:goto L471bb4;
case 0x471bbb:goto L471bbb;
case 0x471bbe:c.instructions+=2;goto B471bbe;
case 0x471bc4:c.instructions+=1;goto B471bc4;
case 0x471bca:goto L471bca;
case 0x471bcd:c.instructions+=2;goto B471bcd;
case 0x471bcf:c.instructions+=1;goto B471bcf;
case 0x471bd1:goto L471bd1;
case 0x471bd6:c.instructions+=2;goto B471bd6;
case 0x471bd8:c.instructions+=1;goto B471bd8;
case 0x471bda:goto L471bda;
case 0x471bdc:c.instructions+=2;goto B471bdc;
case 0x471bdf:c.instructions+=1;goto B471bdf;
case 0x471be1:goto L471be1;
case 0x471be4:c.instructions+=1;goto B471be4;
case 0x471be6:goto L471be6;
case 0x471beb:c.instructions+=1;goto B471beb;
case 0x471bf0:goto L471bf0;
case 0x471bf2:c.instructions+=1;goto B471bf2;
case 0x471bf4:goto L471bf4;
case 0x471bf9:goto L471bf9;
case 0x471bfb:c.instructions+=1;goto B471bfb;
case 0x471bfd:goto L471bfd;
case 0x471c00:c.instructions+=1;goto B471c00;
case 0x471c02:goto L471c02;
case 0x471c07:c.instructions+=2;goto B471c07;
case 0x471c09:c.instructions+=1;goto B471c09;
case 0x471c0b:goto L471c0b;
case 0x471c0e:c.instructions+=2;goto B471c0e;
case 0x471c10:c.instructions+=1;goto B471c10;
case 0x471c12:goto L471c12;
case 0x471c19:c.instructions+=1;goto B471c19;
case 0x471c1b:goto L471c1b;
case 0x471c22:goto L471c22;
case 0x471c27:goto L471c27;
case 0x471c29:c.instructions+=1;goto B471c29;
case 0x471c2b:goto L471c2b;
case 0x471c30:c.instructions+=2;goto B471c30;
case 0x471c32:c.instructions+=1;goto B471c32;
case 0x471c34:goto L471c34;
case 0x471c36:c.instructions+=2;goto B471c36;
case 0x471c39:c.instructions+=1;goto B471c39;
case 0x471c3b:goto L471c3b;
case 0x471c3e:c.instructions+=1;goto B471c3e;
case 0x471c40:goto L471c40;
case 0x471c47:c.instructions+=1;goto B471c47;
case 0x471c49:goto L471c49;
case 0x471c50:goto L471c50;
case 0x471c57:c.instructions+=1;goto B471c57;
case 0x471c59:goto L471c59;
case 0x471c5e:c.instructions+=2;goto B471c5e;
case 0x471c60:c.instructions+=1;goto B471c60;
case 0x471c62:goto L471c62;
case 0x471c65:c.instructions+=1;goto B471c65;
case 0x471c67:goto L471c67;
case 0x471c6c:c.instructions+=5;goto B471c6c;
case 0x471c72:c.instructions+=4;goto B471c72;
case 0x471c78:c.instructions+=3;goto B471c78;
case 0x471c7a:c.instructions+=2;goto B471c7a;
case 0x471c7c:c.instructions+=1;goto B471c7c;
case 0x471c7e:goto L471c7e;
case 0x471c83:c.instructions+=5;goto B471c83;
case 0x471c84:c.instructions+=4;goto B471c84;
case 0x471c87:c.instructions+=3;goto B471c87;
case 0x471c88:c.instructions+=2;goto B471c88;
case 0x471c89:c.instructions+=1;goto B471c89;
case 0x471c8c:goto L471c8c;
case 0x471c8e:c.instructions+=5;goto B471c8e;
case 0x471c8f:c.instructions+=4;goto B471c8f;
case 0x471c92:c.instructions+=3;goto B471c92;
case 0x471c93:c.instructions+=2;goto B471c93;
case 0x471c94:c.instructions+=1;goto B471c94;
case 0x471ca0:goto L471ca0;
case 0x471ca1:c.instructions+=2;goto B471ca1;
case 0x471ca3:c.instructions+=1;goto B471ca3;
case 0x471ca8:goto L471ca8;
case 0x471cae:c.instructions+=3;goto B471cae;
case 0x471cb0:c.instructions+=2;goto B471cb0;
case 0x471cb1:c.instructions+=1;goto B471cb1;
case 0x471cc0:goto L471cc0;
case 0x471cc1:c.instructions+=2;goto B471cc1;
case 0x471cc3:c.instructions+=1;goto B471cc3;
case 0x471cc8:goto L471cc8;
case 0x471cce:c.instructions+=3;goto B471cce;
case 0x471cd0:c.instructions+=2;goto B471cd0;
case 0x471cd1:c.instructions+=1;goto B471cd1;
case 0x471ce0:goto L471ce0;
case 0x471ce5:c.instructions+=2;goto B471ce5;
case 0x471ce6:c.instructions+=1;goto B471ce6;
case 0x471ceb:goto L471ceb;
case 0x471cee:c.instructions+=2;goto B471cee;
case 0x471cf3:c.instructions+=1;goto B471cf3;
case 0x471cf5:goto L471cf5;
case 0x471cfb:c.instructions+=5;goto B471cfb;
case 0x471cfe:c.instructions+=4;goto B471cfe;
case 0x471d04:c.instructions+=3;goto B471d04;
case 0x471d05:c.instructions+=2;goto B471d05;
case 0x471d0a:c.instructions+=1;goto B471d0a;
case 0x471d0f:goto L471d0f;
case 0x471d12:c.instructions+=2;goto B471d12;
case 0x471d14:c.instructions+=1;goto B471d14;
case 0x471d16:goto L471d16;
case 0x471d18:c.instructions+=1;goto B471d18;
case 0x471d1d:goto L471d1d;
case 0x471d1f:c.instructions+=1;goto B471d1f;
case 0x471d20:goto L471d20;
case 0x471d25:c.instructions+=2;goto B471d25;
case 0x471d26:c.instructions+=1;goto B471d26;
case 0x471d2b:goto L471d2b;
case 0x471d2e:c.instructions+=2;goto B471d2e;
case 0x471d33:c.instructions+=1;goto B471d33;
case 0x471d35:goto L471d35;
case 0x471d3b:c.instructions+=5;goto B471d3b;
case 0x471d3e:c.instructions+=4;goto B471d3e;
case 0x471d44:c.instructions+=3;goto B471d44;
case 0x471d45:c.instructions+=2;goto B471d45;
case 0x471d4a:c.instructions+=1;goto B471d4a;
case 0x471d4f:goto L471d4f;
case 0x471d52:c.instructions+=2;goto B471d52;
case 0x471d54:c.instructions+=1;goto B471d54;
case 0x471d56:goto L471d56;
case 0x471d58:c.instructions+=1;goto B471d58;
case 0x471d5d:goto L471d5d;
case 0x471d5f:c.instructions+=1;goto B471d5f;
case 0x471d60:goto L471d60;
case 0x471d61:c.instructions+=2;goto B471d61;
case 0x471d63:c.instructions+=1;goto B471d63;
case 0x471d68:goto L471d68;
case 0x471d6e:c.instructions+=3;goto B471d6e;
case 0x471d70:c.instructions+=2;goto B471d70;
case 0x471d71:c.instructions+=1;goto B471d71;
case 0x471d80:goto L471d80;
case 0x471d85:c.instructions+=2;goto B471d85;
case 0x471d86:c.instructions+=1;goto B471d86;
case 0x471d8b:goto L471d8b;
case 0x471d8e:c.instructions+=2;goto B471d8e;
case 0x471d93:c.instructions+=1;goto B471d93;
case 0x471d95:goto L471d95;
case 0x471d9b:c.instructions+=5;goto B471d9b;
case 0x471d9e:c.instructions+=4;goto B471d9e;
case 0x471da4:c.instructions+=3;goto B471da4;
case 0x471da5:c.instructions+=2;goto B471da5;
case 0x471daa:c.instructions+=1;goto B471daa;
case 0x471daf:goto L471daf;
case 0x471db2:c.instructions+=2;goto B471db2;
case 0x471db4:c.instructions+=1;goto B471db4;
case 0x471db6:goto L471db6;
case 0x471db8:c.instructions+=1;goto B471db8;
case 0x471dbd:goto L471dbd;
case 0x471dbf:c.instructions+=1;goto B471dbf;
case 0x471dc0:goto L471dc0;
case 0x471dc1:c.instructions+=4;goto B471dc1;
case 0x471dc3:c.instructions+=3;goto B471dc3;
case 0x471dc6:c.instructions+=2;goto B471dc6;
case 0x471dc8:c.instructions+=1;goto B471dc8;
case 0x471dca:goto L471dca;
case 0x471dce:c.instructions+=4;goto B471dce;
case 0x471dd2:c.instructions+=3;goto B471dd2;
case 0x471dd5:c.instructions+=2;goto B471dd5;
case 0x471dd8:c.instructions+=1;goto B471dd8;
case 0x471ddb:goto L471ddb;
case 0x471ddd:c.instructions+=3;goto B471ddd;
case 0x471ddf:c.instructions+=2;goto B471ddf;
case 0x471de1:c.instructions+=1;goto B471de1;
case 0x471de4:goto L471de4;
case 0x471de8:c.instructions+=5;goto B471de8;
case 0x471dee:c.instructions+=4;goto B471dee;
case 0x471def:c.instructions+=3;goto B471def;
case 0x471df0:c.instructions+=2;goto B471df0;
case 0x471df2:c.instructions+=1;goto B471df2;
case 0x471df7:goto L471df7;
case 0x471df8:c.instructions+=1;goto B471df8;
case 0x471e00:goto L471e00;
case 0x471e05:c.instructions+=2;goto B471e05;
case 0x471e06:c.instructions+=1;goto B471e06;
case 0x471e0b:goto L471e0b;
case 0x471e0e:c.instructions+=2;goto B471e0e;
case 0x471e13:c.instructions+=1;goto B471e13;
case 0x471e15:goto L471e15;
case 0x471e1b:c.instructions+=5;goto B471e1b;
case 0x471e1e:c.instructions+=4;goto B471e1e;
case 0x471e24:c.instructions+=3;goto B471e24;
case 0x471e25:c.instructions+=2;goto B471e25;
case 0x471e2a:c.instructions+=1;goto B471e2a;
case 0x471e2f:goto L471e2f;
case 0x471e32:c.instructions+=2;goto B471e32;
case 0x471e34:c.instructions+=1;goto B471e34;
case 0x471e36:goto L471e36;
case 0x471e38:c.instructions+=1;goto B471e38;
case 0x471e3d:goto L471e3d;
case 0x471e3f:c.instructions+=1;goto B471e3f;
case 0x471e40:goto L471e40;
case 0x471e42:c.instructions+=14;goto B471e42;
case 0x471e47:c.instructions+=13;goto B471e47;
case 0x471e4d:c.instructions+=12;goto B471e4d;
case 0x471e4e:c.instructions+=11;goto B471e4e;
case 0x471e55:c.instructions+=10;goto B471e55;
case 0x471e58:c.instructions+=9;goto B471e58;
case 0x471e59:c.instructions+=8;goto B471e59;
case 0x471e5b:c.instructions+=7;goto B471e5b;
case 0x471e5c:c.instructions+=6;goto B471e5c;
case 0x471e60:c.instructions+=5;goto B471e60;
case 0x471e66:c.instructions+=4;goto B471e66;
case 0x471e6c:c.instructions+=3;goto B471e6c;
case 0x471e6e:c.instructions+=2;goto B471e6e;
case 0x471e76:c.instructions+=1;goto B471e76;
case 0x471e78:goto L471e78;
case 0x471e7a:c.instructions+=2;goto B471e7a;
case 0x471e7c:c.instructions+=1;goto B471e7c;
case 0x471e7e:goto L471e7e;
case 0x471e83:goto L471e83;
case 0x471e87:c.instructions+=2;goto B471e87;
case 0x471e88:c.instructions+=1;goto B471e88;
case 0x471e8d:goto L471e8d;
case 0x471e90:c.instructions+=1;goto B471e90;
case 0x471e95:goto L471e95;
case 0x471e99:c.instructions+=4;goto B471e99;
case 0x471e9b:c.instructions+=3;goto B471e9b;
case 0x471e9d:c.instructions+=2;goto B471e9d;
case 0x471e9e:c.instructions+=1;goto B471e9e;
case 0x471ea1:goto L471ea1;
case 0x471ea6:goto L471ea6;
case 0x471eaa:c.instructions+=7;goto B471eaa;
case 0x471eb4:c.instructions+=6;goto B471eb4;
case 0x471eba:c.instructions+=5;goto B471eba;
case 0x471ebb:c.instructions+=4;goto B471ebb;
case 0x471ebc:c.instructions+=3;goto B471ebc;
case 0x471ec3:c.instructions+=2;goto B471ec3;
case 0x471ec6:c.instructions+=1;goto B471ec6;
case 0x471ed0:goto L471ed0;
case 0x471ed1:c.instructions+=2;goto B471ed1;
case 0x471ed3:c.instructions+=1;goto B471ed3;
case 0x471ed8:goto L471ed8;
case 0x471eda:c.instructions+=17;goto B471eda;
case 0x471ee0:c.instructions+=16;goto B471ee0;
case 0x471ee6:c.instructions+=15;goto B471ee6;
case 0x471eec:c.instructions+=14;goto B471eec;
case 0x471ef2:c.instructions+=13;goto B471ef2;
case 0x471ef8:c.instructions+=12;goto B471ef8;
case 0x471efe:c.instructions+=11;goto B471efe;
case 0x471f04:c.instructions+=10;goto B471f04;
case 0x471f0a:c.instructions+=9;goto B471f0a;
case 0x471f10:c.instructions+=8;goto B471f10;
case 0x471f16:c.instructions+=7;goto B471f16;
case 0x471f1c:c.instructions+=6;goto B471f1c;
case 0x471f22:c.instructions+=5;goto B471f22;
case 0x471f26:c.instructions+=4;goto B471f26;
case 0x471f2c:c.instructions+=3;goto B471f2c;
case 0x471f2e:c.instructions+=2;goto B471f2e;
case 0x471f2f:c.instructions+=1;goto B471f2f;
case 0x471f30:goto L471f30;
case 0x471f31:c.instructions+=8;goto B471f31;
case 0x471f32:c.instructions+=7;goto B471f32;
case 0x471f33:c.instructions+=6;goto B471f33;
case 0x471f35:c.instructions+=5;goto B471f35;
case 0x471f36:c.instructions+=4;goto B471f36;
case 0x471f3c:c.instructions+=3;goto B471f3c;
case 0x471f3e:c.instructions+=2;goto B471f3e;
case 0x471f40:c.instructions+=1;goto B471f40;
case 0x471f42:goto L471f42;
case 0x471f44:c.instructions+=2;goto B471f44;
case 0x471f46:c.instructions+=1;goto B471f46;
case 0x471f48:goto L471f48;
case 0x471f4d:goto L471f4d;
case 0x471f51:c.instructions+=2;goto B471f51;
case 0x471f52:c.instructions+=1;goto B471f52;
case 0x471f57:goto L471f57;
case 0x471f5a:c.instructions+=1;goto B471f5a;
case 0x471f5f:goto L471f5f;
case 0x471f63:c.instructions+=4;goto B471f63;
case 0x471f65:c.instructions+=3;goto B471f65;
case 0x471f66:c.instructions+=2;goto B471f66;
case 0x471f67:c.instructions+=1;goto B471f67;
case 0x471f6a:goto L471f6a;
case 0x471f6f:goto L471f6f;
case 0x471f75:goto L471f75;
case 0x471f7b:c.instructions+=2;goto B471f7b;
case 0x471f7d:c.instructions+=1;goto B471f7d;
case 0x471f7f:goto L471f7f;
case 0x471f81:c.instructions+=2;goto B471f81;
case 0x471f83:c.instructions+=1;goto B471f83;
case 0x471f85:goto L471f85;
case 0x471f8a:goto L471f8a;
case 0x471f8e:c.instructions+=2;goto B471f8e;
case 0x471f8f:c.instructions+=1;goto B471f8f;
case 0x471f94:goto L471f94;
case 0x471f97:c.instructions+=1;goto B471f97;
case 0x471f9c:goto L471f9c;
case 0x471fa0:c.instructions+=4;goto B471fa0;
case 0x471fa2:c.instructions+=3;goto B471fa2;
case 0x471fa3:c.instructions+=2;goto B471fa3;
case 0x471fa4:c.instructions+=1;goto B471fa4;
case 0x471fa7:goto L471fa7;
case 0x471fac:goto L471fac;
case 0x471fb2:goto L471fb2;
case 0x471fb8:c.instructions+=2;goto B471fb8;
case 0x471fba:c.instructions+=1;goto B471fba;
case 0x471fbc:goto L471fbc;
case 0x471fbe:c.instructions+=2;goto B471fbe;
case 0x471fc0:c.instructions+=1;goto B471fc0;
case 0x471fc2:goto L471fc2;
case 0x471fc7:goto L471fc7;
case 0x471fcb:c.instructions+=2;goto B471fcb;
case 0x471fcc:c.instructions+=1;goto B471fcc;
case 0x471fd1:goto L471fd1;
case 0x471fd4:c.instructions+=1;goto B471fd4;
case 0x471fd9:goto L471fd9;
case 0x471fdd:c.instructions+=4;goto B471fdd;
case 0x471fdf:c.instructions+=3;goto B471fdf;
case 0x471fe0:c.instructions+=2;goto B471fe0;
case 0x471fe1:c.instructions+=1;goto B471fe1;
case 0x471fe4:goto L471fe4;
case 0x471fe9:goto L471fe9;
case 0x471fef:goto L471fef;
case 0x471ff5:c.instructions+=2;goto B471ff5;
case 0x471ff7:c.instructions+=1;goto B471ff7;
case 0x471ff9:goto L471ff9;
case 0x471ffb:c.instructions+=2;goto B471ffb;
case 0x471ffd:c.instructions+=1;goto B471ffd;
case 0x471fff:goto L471fff;
default:missing_instruction(c.pc);}
B471000:L471000:{c.instructions+=3;NFSU2_TR(0x471000);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B471005:{NFSU2_TR(0x471005);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471006:{NFSU2_TR(0x471006);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47100bull));
TAIL_STATIC(0x43e910u,43e);
}
B47100b:L47100b:{c.instructions+=3;NFSU2_TR(0x47100b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47100e:{NFSU2_TR(0x47100e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4e0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4e0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B471013:{NFSU2_TR(0x471013);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47103d;}}
}
B471015:L471015:{c.instructions+=6;NFSU2_TR(0x471015);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47101b:{NFSU2_TR(0x47101b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47101e:{NFSU2_TR(0x47101e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B471024:{NFSU2_TR(0x471024);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471025:{NFSU2_TR(0x471025);
u8 U[4];
w4(U+0,u32(0xe0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47102a:{NFSU2_TR(0x47102a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47102full));
TAIL_STATIC(0x440820u,440);
}
B47102f:L47102f:{c.instructions+=3;NFSU2_TR(0x47102f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B471032:{NFSU2_TR(0x471032);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B471034:{NFSU2_TR(0x471034);
if(r1(R+518)){{goto L47103d;}}
}
B471036:L471036:{c.instructions+=2;NFSU2_TR(0x471036);
__builtin_memmove((R+4),(R+0),4);
}
B471038:{NFSU2_TR(0x471038);
TAIL_STATIC(0x45d950u,45d);
}
B47103d:L47103d:{c.instructions+=2;NFSU2_TR(0x47103d);
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
B47103f:{NFSU2_TR(0x47103f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B471040:L471040:{c.instructions+=7;NFSU2_TR(0x471040);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471041:{NFSU2_TR(0x471041);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B471045:{NFSU2_TR(0x471045);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B471047:{NFSU2_TR(0x471047);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471048:{NFSU2_TR(0x471048);
__builtin_memmove((R+28),(R+4),4);
}
B47104a:{NFSU2_TR(0x47104a);
__builtin_memmove((R+4),(R+24),4);
}
B47104c:{NFSU2_TR(0x47104c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47104full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47104f:L47104f:{c.instructions+=4;NFSU2_TR(0x47104f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B471051:{NFSU2_TR(0x471051);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff0ull))));
}
B471057:{NFSU2_TR(0x471057);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xa0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xa0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xa0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47105d:{NFSU2_TR(0x47105d);
if(r1(R+518)){{goto L471073;}}
}
B47105f:L47105f:{c.instructions+=3;NFSU2_TR(0x47105f);
u8 U[4];
w4(U+0,u32(0x78aa74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471064:{NFSU2_TR(0x471064);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471066:{NFSU2_TR(0x471066);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47106bull));
TAIL_STATIC(0x4691c0u,469);
}
B47106b:L47106b:{c.instructions+=4;NFSU2_TR(0x47106b);
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
B47106e:{NFSU2_TR(0x47106e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47106f:{NFSU2_TR(0x47106f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B471070:{NFSU2_TR(0x471070);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B471073:L471073:{c.instructions+=4;NFSU2_TR(0x471073);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B471076:{NFSU2_TR(0x471076);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B471077:{NFSU2_TR(0x471077);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B471078:{NFSU2_TR(0x471078);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B471080:L471080:{c.instructions+=17;NFSU2_TR(0x471080);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471081:{NFSU2_TR(0x471081);
__builtin_memmove((R+20),(R+16),4);
}
B471083:{NFSU2_TR(0x471083);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B471086:{NFSU2_TR(0x471086);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B471089:{NFSU2_TR(0x471089);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47108a:{NFSU2_TR(0x47108a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47108b:{NFSU2_TR(0x47108b);
__builtin_memmove((R+24),(R+4),4);
}
B47108d:{NFSU2_TR(0x47108d);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B471093:{NFSU2_TR(0x471093);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471094:{NFSU2_TR(0x471094);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B471097:{NFSU2_TR(0x471097);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47109b:{NFSU2_TR(0x47109b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4710a2:{NFSU2_TR(0x4710a2);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4710a8:{NFSU2_TR(0x4710a8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4710ae:{NFSU2_TR(0x4710ae);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4710b0:{NFSU2_TR(0x4710b0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4710b3:{NFSU2_TR(0x4710b3);
if(r1(R+514)){{goto L4710bf;}}
}
B4710b5:L4710b5:{c.instructions+=1;NFSU2_TR(0x4710b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4710bf:L4710bf:{c.instructions+=7;NFSU2_TR(0x4710bf);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4710c5:{NFSU2_TR(0x4710c5);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4710c8:{NFSU2_TR(0x4710c8);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4710ce:{NFSU2_TR(0x4710ce);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4710d4:{NFSU2_TR(0x4710d4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4710d6:{NFSU2_TR(0x4710d6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4710d9:{NFSU2_TR(0x4710d9);
if(r1(R+514)){{goto L4710e5;}}
}
B4710db:L4710db:{c.instructions+=1;NFSU2_TR(0x4710db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4710e5:L4710e5:{c.instructions+=13;NFSU2_TR(0x4710e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4710e8:{NFSU2_TR(0x4710e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4710ef:{NFSU2_TR(0x4710ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4710f2:{NFSU2_TR(0x4710f2);
{u32 ea_=u32(r4(R+12)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4710f8:{NFSU2_TR(0x4710f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4710fe:{NFSU2_TR(0x4710fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B471102:{NFSU2_TR(0x471102);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B471106:{NFSU2_TR(0x471106);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471107:{NFSU2_TR(0x471107);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B47110b:{NFSU2_TR(0x47110b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47110c:{NFSU2_TR(0x47110c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B47110e:{NFSU2_TR(0x47110e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B471112:{NFSU2_TR(0x471112);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471117ull));
TAIL_STATIC(0x43ce50u,43c);
}
B471117:L471117:{c.instructions+=20;NFSU2_TR(0x471117);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47111a:{NFSU2_TR(0x47111a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47111d:{NFSU2_TR(0x47111d);
{u32 ea_=u32(r4(R+8)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B471123:{NFSU2_TR(0x471123);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B471126:{NFSU2_TR(0x471126);
{u32 ea_=u32(u32(7898860u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47112c:{NFSU2_TR(0x47112c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B471130:{NFSU2_TR(0x471130);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B471132:{NFSU2_TR(0x471132);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B471136:{NFSU2_TR(0x471136);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B471138:{NFSU2_TR(0x471138);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47113c:{NFSU2_TR(0x47113c);
{u32 ea_=u32(r4(R+12)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47113f:{NFSU2_TR(0x47113f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B471143:{NFSU2_TR(0x471143);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B471147:{NFSU2_TR(0x471147);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B471149:{NFSU2_TR(0x471149);
{u32 ea_=u32(r4(R+12)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47114c:{NFSU2_TR(0x47114c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B471150:{NFSU2_TR(0x471150);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B471154:{NFSU2_TR(0x471154);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B471158:{NFSU2_TR(0x471158);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47115c:{NFSU2_TR(0x47115c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B471160:L471160:{c.instructions+=6;NFSU2_TR(0x471160);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471161:{NFSU2_TR(0x471161);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471163:{NFSU2_TR(0x471163);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B471167:{NFSU2_TR(0x471167);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471168:{NFSU2_TR(0x471168);
w4(R+4,u32(0x88f298ull));
}
B47116d:{NFSU2_TR(0x47116d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471172ull));
TAIL_STATIC(0x5d9c70u,5d9);
}
B471172:L471172:{c.instructions+=3;NFSU2_TR(0x471172);
__builtin_memmove((R+28),(R+0),4);
}
B471174:{NFSU2_TR(0x471174);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B471176:{NFSU2_TR(0x471176);
if(r1(R+518)){{goto L4711a7;}}
}
B471178:L471178:{c.instructions+=5;NFSU2_TR(0x471178);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47117b:{NFSU2_TR(0x47117b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B471181:{NFSU2_TR(0x471181);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B471183:{NFSU2_TR(0x471183);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B471186:{NFSU2_TR(0x471186);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L47119b;}}
}
B471188:L471188:{c.instructions+=7;NFSU2_TR(0x471188);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47118b:{NFSU2_TR(0x47118b);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47118e:{NFSU2_TR(0x47118e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B471191:{NFSU2_TR(0x471191);
{u32 ea_=u32(r4(R+4)+u32(104u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B471194:{NFSU2_TR(0x471194);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B471196:{NFSU2_TR(0x471196);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B471199:{NFSU2_TR(0x471199);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x471160u);}goto L471160;}}
}
B47119b:L47119b:{c.instructions+=2;NFSU2_TR(0x47119b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4711a2:{NFSU2_TR(0x4711a2);
{goto L471235;}
}
B4711a7:L4711a7:{c.instructions+=6;NFSU2_TR(0x4711a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4711a8:{NFSU2_TR(0x4711a8);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4711aa:{NFSU2_TR(0x4711aa);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4711ae:{NFSU2_TR(0x4711ae);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4711af:{NFSU2_TR(0x4711af);
w4(R+4,u32(0x88f298ull));
}
B4711b4:{NFSU2_TR(0x4711b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4711b9ull));
TAIL_STATIC(0x5d9c70u,5d9);
}
B4711b9:L4711b9:{c.instructions+=3;NFSU2_TR(0x4711b9);
__builtin_memmove((R+28),(R+0),4);
}
B4711bb:{NFSU2_TR(0x4711bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4711bd:{NFSU2_TR(0x4711bd);
if(r1(R+518)){{goto L4711f0;}}
}
B4711bf:L4711bf:{c.instructions+=5;NFSU2_TR(0x4711bf);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4711c2:{NFSU2_TR(0x4711c2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4711c8:{NFSU2_TR(0x4711c8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4711ca:{NFSU2_TR(0x4711ca);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4711cd:{NFSU2_TR(0x4711cd);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4711e2;}}
}
B4711cf:L4711cf:{c.instructions+=7;NFSU2_TR(0x4711cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4711d2:{NFSU2_TR(0x4711d2);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4711d5:{NFSU2_TR(0x4711d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4711d8:{NFSU2_TR(0x4711d8);
{u32 ea_=u32(r4(R+4)+u32(104u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4711db:{NFSU2_TR(0x4711db);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4711dd:{NFSU2_TR(0x4711dd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4711e0:{NFSU2_TR(0x4711e0);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4711a7u);}goto L4711a7;}}
}
B4711e2:L4711e2:{c.instructions+=2;NFSU2_TR(0x4711e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4711e9:{NFSU2_TR(0x4711e9);
{goto L471235;}
}
B4711f0:L4711f0:{c.instructions+=6;NFSU2_TR(0x4711f0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4711f1:{NFSU2_TR(0x4711f1);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4711f6:{NFSU2_TR(0x4711f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4711fa:{NFSU2_TR(0x4711fa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4711fb:{NFSU2_TR(0x4711fb);
w4(R+4,u32(0x88f298ull));
}
B471200:{NFSU2_TR(0x471200);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471205ull));
TAIL_STATIC(0x5d9c70u,5d9);
}
B471205:L471205:{c.instructions+=3;NFSU2_TR(0x471205);
__builtin_memmove((R+28),(R+0),4);
}
B471207:{NFSU2_TR(0x471207);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B471209:{NFSU2_TR(0x471209);
if(r1(R+518)){{goto L471235;}}
}
B47120b:L47120b:{c.instructions+=5;NFSU2_TR(0x47120b);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47120e:{NFSU2_TR(0x47120e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B471214:{NFSU2_TR(0x471214);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B471216:{NFSU2_TR(0x471216);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B471219:{NFSU2_TR(0x471219);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L47122e;}}
}
B47121b:L47121b:{c.instructions+=7;NFSU2_TR(0x47121b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47121e:{NFSU2_TR(0x47121e);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B471221:{NFSU2_TR(0x471221);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B471224:{NFSU2_TR(0x471224);
{u32 ea_=u32(r4(R+4)+u32(104u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B471227:{NFSU2_TR(0x471227);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B471229:{NFSU2_TR(0x471229);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B47122c:{NFSU2_TR(0x47122c);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4711f0u);}goto L4711f0;}}
}
B47122e:L47122e:{c.instructions+=1;NFSU2_TR(0x47122e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B471235:L471235:{c.instructions+=4;NFSU2_TR(0x471235);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B471238:{NFSU2_TR(0x471238);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47123a:{NFSU2_TR(0x47123a);
w1(R+8,u8(0x1ull));
}
B47123c:{NFSU2_TR(0x47123c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L471313;}}
}
B471242:L471242:{c.instructions+=2;NFSU2_TR(0x471242);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B471246:{NFSU2_TR(0x471246);
if(r1(R+518)){{goto L471308;}}
}
B47124c:L47124c:{c.instructions+=5;NFSU2_TR(0x47124c);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B471252:{NFSU2_TR(0x471252);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B471258:{NFSU2_TR(0x471258);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47125a:{NFSU2_TR(0x47125a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B47125d:{NFSU2_TR(0x47125d);
if(r1(R+514)){{goto L471267;}}
}
B47125f:L47125f:{c.instructions+=2;NFSU2_TR(0x47125f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B471265:{NFSU2_TR(0x471265);
if(r1(R+518)){{goto L471273;}}
}
B471267:L471267:{c.instructions+=2;NFSU2_TR(0x471267);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B47126d:{NFSU2_TR(0x47126d);
if(r1(R+518)){{goto L471308;}}
}
B471273:L471273:{c.instructions+=6;NFSU2_TR(0x471273);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B471276:{NFSU2_TR(0x471276);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B471279:{NFSU2_TR(0x471279);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47127f:{NFSU2_TR(0x47127f);
w4(R+4,u32(0x7f0b40ull));
}
B471284:{NFSU2_TR(0x471284);
__builtin_memmove(gp(0x7f0b50),(R+0),4);
}
B471289:{NFSU2_TR(0x471289);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47128eull));
TAIL_STATIC(0x4599e0u,459);
}
B47128e:L47128e:{c.instructions+=5;NFSU2_TR(0x47128e);
{u32 ea_=u32(u32(8325972u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B471294:{NFSU2_TR(0x471294);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47129a:{NFSU2_TR(0x47129a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47129c:{NFSU2_TR(0x47129c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47129f:{NFSU2_TR(0x47129f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L471308;}}
}
B4712a1:L4712a1:{c.instructions+=20;NFSU2_TR(0x4712a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4712a4:{NFSU2_TR(0x4712a4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4712a8:{NFSU2_TR(0x4712a8);
__builtin_memmove((R+4),gp(0x7886f0),4);
}
B4712ae:{NFSU2_TR(0x4712ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4712b4:{NFSU2_TR(0x4712b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4712b7:{NFSU2_TR(0x4712b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4712bd:{NFSU2_TR(0x4712bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4712c0:{NFSU2_TR(0x4712c0);
{u32 ea_=u32(r4(R+4)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4712c3:{NFSU2_TR(0x4712c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4712c7:{NFSU2_TR(0x4712c7);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4712cd:{NFSU2_TR(0x4712cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4712d3:{NFSU2_TR(0x4712d3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4712d5:{NFSU2_TR(0x4712d5);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4712db:{NFSU2_TR(0x4712db);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4712e1:{NFSU2_TR(0x4712e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4712e4:{NFSU2_TR(0x4712e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4712e7:{NFSU2_TR(0x4712e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4712ed:{NFSU2_TR(0x4712ed);
__builtin_memmove(gp(0x7f0b50),(R+4),4);
}
B4712f3:{NFSU2_TR(0x4712f3);
w4(R+4,u32(0x7f0b40ull));
}
B4712f8:{NFSU2_TR(0x4712f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4712fdull));
TAIL_STATIC(0x4599e0u,459);
}
B4712fd:L4712fd:{c.instructions+=2;NFSU2_TR(0x4712fd);
__builtin_memmove((R+0),gp(0x7f0b54),4);
}
B471302:{NFSU2_TR(0x471302);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B471308:L471308:{c.instructions+=3;NFSU2_TR(0x471308);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47130b:{NFSU2_TR(0x47130b);
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
B47130d:{NFSU2_TR(0x47130d);
if(r1(R+518)){{goto L4713e7;}}
}
B471313:L471313:{c.instructions+=2;NFSU2_TR(0x471313);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x2ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B471317:{NFSU2_TR(0x471317);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4713e7;}}
}
B47131d:L47131d:{c.instructions+=2;NFSU2_TR(0x47131d);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x5ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B471321:{NFSU2_TR(0x471321);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4713e7;}}
}
B471327:L471327:{c.instructions+=5;NFSU2_TR(0x471327);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47132d:{NFSU2_TR(0x47132d);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B471333:{NFSU2_TR(0x471333);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B471335:{NFSU2_TR(0x471335);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B471338:{NFSU2_TR(0x471338);
if(r1(R+514)){{goto L471342;}}
}
B47133a:L47133a:{c.instructions+=2;NFSU2_TR(0x47133a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B471340:{NFSU2_TR(0x471340);
if(r1(R+518)){{goto L47134e;}}
}
B471342:L471342:{c.instructions+=2;NFSU2_TR(0x471342);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
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
B471348:{NFSU2_TR(0x471348);
if(r1(R+518)){{goto L4713e7;}}
}
B47134e:L47134e:{c.instructions+=6;NFSU2_TR(0x47134e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B471351:{NFSU2_TR(0x471351);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B471354:{NFSU2_TR(0x471354);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47135a:{NFSU2_TR(0x47135a);
__builtin_memmove(gp(0x7f0b50),(R+4),4);
}
B471360:{NFSU2_TR(0x471360);
w4(R+4,u32(0x7f0b40ull));
}
B471365:{NFSU2_TR(0x471365);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47136aull));
TAIL_STATIC(0x4599e0u,459);
}
B47136a:L47136a:{c.instructions+=5;NFSU2_TR(0x47136a);
{u32 ea_=u32(u32(8325972u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B471370:{NFSU2_TR(0x471370);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B471376:{NFSU2_TR(0x471376);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B471378:{NFSU2_TR(0x471378);
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
B47137b:{NFSU2_TR(0x47137b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4713e7;}}
}
B47137d:L47137d:{c.instructions+=20;NFSU2_TR(0x47137d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B471380:{NFSU2_TR(0x471380);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B471384:{NFSU2_TR(0x471384);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B47138a:{NFSU2_TR(0x47138a);
__builtin_memmove((R+8),gp(0x7886f0),4);
}
B471390:{NFSU2_TR(0x471390);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B471396:{NFSU2_TR(0x471396);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47139a:{NFSU2_TR(0x47139a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4713a0:{NFSU2_TR(0x4713a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4713a3:{NFSU2_TR(0x4713a3);
{u32 ea_=u32(r4(R+4)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4713a6:{NFSU2_TR(0x4713a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4713ac:{NFSU2_TR(0x4713ac);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4713b2:{NFSU2_TR(0x4713b2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4713b4:{NFSU2_TR(0x4713b4);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4713ba:{NFSU2_TR(0x4713ba);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4713c0:{NFSU2_TR(0x4713c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4713c3:{NFSU2_TR(0x4713c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4713c6:{NFSU2_TR(0x4713c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4713cc:{NFSU2_TR(0x4713cc);
w4(R+4,u32(0x7f0b40ull));
}
B4713d1:{NFSU2_TR(0x4713d1);
__builtin_memmove(gp(0x7f0b50),(R+8),4);
}
B4713d7:{NFSU2_TR(0x4713d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4713dcull));
TAIL_STATIC(0x4599e0u,459);
}
B4713dc:L4713dc:{c.instructions+=2;NFSU2_TR(0x4713dc);
__builtin_memmove((R+0),gp(0x7f0b54),4);
}
B4713e1:{NFSU2_TR(0x4713e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4713e7:L4713e7:{c.instructions+=6;NFSU2_TR(0x4713e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4713e8:{NFSU2_TR(0x4713e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4713e9:{NFSU2_TR(0x4713e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4713ea:{NFSU2_TR(0x4713ea);
__builtin_memmove((R+16),(R+20),4);
}
B4713ec:{NFSU2_TR(0x4713ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4713ed:{NFSU2_TR(0x4713ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4713f0:L4713f0:{c.instructions+=3;NFSU2_TR(0x4713f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4713f6:{NFSU2_TR(0x4713f6);
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
B4713f8:{NFSU2_TR(0x4713f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47148d;}}
}
B4713fe:L4713fe:{c.instructions+=3;NFSU2_TR(0x4713fe);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B471404:{NFSU2_TR(0x471404);
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
B471406:{NFSU2_TR(0x471406);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47148d;}}
}
B47140c:L47140c:{c.instructions+=12;NFSU2_TR(0x47140c);
__builtin_memmove((R+0),gp(0x82b060),4);
}
B471411:{NFSU2_TR(0x471411);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B471415:{NFSU2_TR(0x471415);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B471419:{NFSU2_TR(0x471419);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B47141c:{NFSU2_TR(0x47141c);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B47141f:{NFSU2_TR(0x47141f);
{u32 ea_=u32(u32(8563100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B471425:{NFSU2_TR(0x471425);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7f3778ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47142b:{NFSU2_TR(0x47142b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B47142d:{NFSU2_TR(0x47142d);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffd8f0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffd8f0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B471432:{NFSU2_TR(0x471432);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471433:{NFSU2_TR(0x471433);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471434:{NFSU2_TR(0x471434);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L471490;}}
}
B471436:L471436:{c.instructions+=1;NFSU2_TR(0x471436);
w4(R+0,u32(0xffffd8f0ull));
}
B47143b:L47143b:{c.instructions+=1;NFSU2_TR(0x47143b);
__builtin_memmove((R+28),(R+0),4);
}
B47143d:L47143d:{c.instructions+=4;NFSU2_TR(0x47143d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7f3780ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B471443:{NFSU2_TR(0x471443);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B471445:{NFSU2_TR(0x471445);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffd8f0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffd8f0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47144a:{NFSU2_TR(0x47144a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L471498;}}
}
B47144c:L47144c:{c.instructions+=3;NFSU2_TR(0x47144c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47144e:{NFSU2_TR(0x47144e);
__builtin_memmove((R+24),(R+0),4);
}
B471450:{NFSU2_TR(0x471450);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L471454;}}
}
B471452:L471452:{c.instructions+=1;NFSU2_TR(0x471452);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B471454:L471454:{c.instructions+=2;NFSU2_TR(0x471454);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471455:{NFSU2_TR(0x471455);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47145aull));
TAIL_STATIC(0x467ff0u,467);
}
B47145a:L47145a:{c.instructions+=6;NFSU2_TR(0x47145a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47145e:{NFSU2_TR(0x47145e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B471462:{NFSU2_TR(0x471462);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471463:{NFSU2_TR(0x471463);
{u32 ea_=u32(u32(7907016u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B471469:{NFSU2_TR(0x471469);
{u32 ea_=u32(u32(8564836u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47146f:{NFSU2_TR(0x47146f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471474ull));
TAIL_STATIC(0x467ff0u,467);
}
B471474:L471474:{c.instructions+=7;NFSU2_TR(0x471474);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B471478:{NFSU2_TR(0x471478);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B47147c:{NFSU2_TR(0x47147c);
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
B47147f:{NFSU2_TR(0x47147f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B471480:{NFSU2_TR(0x471480);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B471481:{NFSU2_TR(0x471481);
{u32 ea_=u32(u32(7907016u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B471487:{NFSU2_TR(0x471487);
{u32 ea_=u32(u32(8564528u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47148d:L47148d:{c.instructions+=1;NFSU2_TR(0x47148d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B471490:L471490:{c.instructions+=2;NFSU2_TR(0x471490);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B471492:{NFSU2_TR(0x471492);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47143bu);}goto L47143b;}}
}
B471494:L471494:{c.instructions+=2;NFSU2_TR(0x471494);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B471496:{NFSU2_TR(0x471496);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47143du);}goto L47143d;}
}
B471498:L471498:{c.instructions+=2;NFSU2_TR(0x471498);
w4(R+24,u32(0xffffd8f0ull));
}
B47149d:{NFSU2_TR(0x47149d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x471454u);}goto L471454;}
}
B4714a0:L4714a0:{c.instructions+=12;NFSU2_TR(0x4714a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4714a4:{NFSU2_TR(0x4714a4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4714a5:{NFSU2_TR(0x4714a5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4714a6:{NFSU2_TR(0x4714a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4714a7:{NFSU2_TR(0x4714a7);
__builtin_memmove((R+24),(R+4),4);
}
B4714a9:{NFSU2_TR(0x4714a9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4714aa:{NFSU2_TR(0x4714aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4714b0:{NFSU2_TR(0x4714b0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4714b2:{NFSU2_TR(0x4714b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4714b3:{NFSU2_TR(0x4714b3);
__builtin_memmove((R+4),(R+28),4);
}
B4714b5:{NFSU2_TR(0x4714b5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd6ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4714bb:{NFSU2_TR(0x4714bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4714c0ull));
TAIL_STATIC(0x46b100u,46b);
}
B4714c0:L4714c0:{c.instructions+=2;NFSU2_TR(0x4714c0);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4714c6:{NFSU2_TR(0x4714c6);
if(r1(R+518)){{goto L471626;}}
}
B4714cc:L4714cc:{c.instructions+=2;NFSU2_TR(0x4714cc);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4714d2:{NFSU2_TR(0x4714d2);
if(r1(R+518)){{goto L471668;}}
}
B4714d8:L4714d8:{c.instructions+=2;NFSU2_TR(0x4714d8);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4714de:{NFSU2_TR(0x4714de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L471668;}}
}
B4714e4:L4714e4:{c.instructions+=13;NFSU2_TR(0x4714e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd6ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4714eb:{NFSU2_TR(0x4714eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd5ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4714f2:{NFSU2_TR(0x4714f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4714f8:{NFSU2_TR(0x4714f8);
__builtin_memmove((R+0),gp(0x82af2c),4);
}
B4714fd:{NFSU2_TR(0x4714fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B471500:{NFSU2_TR(0x471500);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7f378cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B471507:{NFSU2_TR(0x471507);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471508:{NFSU2_TR(0x471508);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471509:{NFSU2_TR(0x471509);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47150e:{NFSU2_TR(0x47150e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47150f:{NFSU2_TR(0x47150f);
__builtin_memmove((R+4),(R+28),4);
}
B471511:{NFSU2_TR(0x471511);
__builtin_memmove(gp(0x82b060),(R+0),4);
}
B471516:{NFSU2_TR(0x471516);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47151bull));
TAIL_STATIC(0x459990u,459);
}
B47151b:L47151b:{c.instructions+=13;NFSU2_TR(0x47151b);
{u32 ea_=u32(u32(8563100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B471521:{NFSU2_TR(0x471521);
__builtin_memmove((R+0),gp(0x82b064),4);
}
B471526:{NFSU2_TR(0x471526);
__builtin_memmove((R+4),gp(0x82afac),4);
}
B47152c:{NFSU2_TR(0x47152c);
__builtin_memmove((R+8),gp(0x82af30),4);
}
B471532:{NFSU2_TR(0x471532);
__builtin_memmove(gp(0x82a5b8),(R+0),4);
}
B471537:{NFSU2_TR(0x471537);
__builtin_memmove((R+0),gp(0x82b074),4);
}
B47153c:{NFSU2_TR(0x47153c);
__builtin_memmove(gp(0x82a5d0),(R+0),4);
}
B471541:{NFSU2_TR(0x471541);
__builtin_memmove((R+0),gp(0x82b060),4);
}
B471546:{NFSU2_TR(0x471546);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B471549:{NFSU2_TR(0x471549);
__builtin_memmove(gp(0x82b618),(R+4),4);
}
B47154f:{NFSU2_TR(0x47154f);
__builtin_memmove(gp(0x82a5cc),(R+8),4);
}
B471555:{NFSU2_TR(0x471555);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B471558:{NFSU2_TR(0x471558);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47155dull));
TAIL_STATIC(0x75bed4u,75b);
}
B47155d:L47155d:{c.instructions+=4;NFSU2_TR(0x47155d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7f3778ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B471563:{NFSU2_TR(0x471563);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B471565:{NFSU2_TR(0x471565);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffffd8f0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffd8f0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47156b:{NFSU2_TR(0x47156b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L47160d;}}
}
B471571:L471571:{c.instructions+=1;NFSU2_TR(0x471571);
w4(R+4,u32(0xffffd8f0ull));
}
B471576:L471576:{c.instructions+=1;NFSU2_TR(0x471576);
__builtin_memmove((R+8),(R+4),4);
}
B471578:L471578:{c.instructions+=4;NFSU2_TR(0x471578);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7f3780ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47157e:{NFSU2_TR(0x47157e);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B471580:{NFSU2_TR(0x471580);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffffd8f0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffd8f0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B471586:{NFSU2_TR(0x471586);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47161c;}}
}
B47158c:L47158c:{c.instructions+=3;NFSU2_TR(0x47158c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47158e:{NFSU2_TR(0x47158e);
__builtin_memmove((R+20),(R+4),4);
}
B471590:{NFSU2_TR(0x471590);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L471594;}}
}
B471592:L471592:{c.instructions+=1;NFSU2_TR(0x471592);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B471594:L471594:{c.instructions+=2;NFSU2_TR(0x471594);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471595:{NFSU2_TR(0x471595);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47159aull));
TAIL_STATIC(0x467ff0u,467);
}
B47159a:L47159a:{c.instructions+=6;NFSU2_TR(0x47159a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47159e:{NFSU2_TR(0x47159e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4715a2:{NFSU2_TR(0x4715a2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4715a3:{NFSU2_TR(0x4715a3);
{u32 ea_=u32(u32(7907016u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4715a9:{NFSU2_TR(0x4715a9);
{u32 ea_=u32(u32(8564836u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4715af:{NFSU2_TR(0x4715af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4715b4ull));
TAIL_STATIC(0x467ff0u,467);
}
B4715b4:L4715b4:{c.instructions+=7;NFSU2_TR(0x4715b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7f377cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4715ba:{NFSU2_TR(0x4715ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4715be:{NFSU2_TR(0x4715be);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4715c2:{NFSU2_TR(0x4715c2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4715c3:{NFSU2_TR(0x4715c3);
{u32 ea_=u32(u32(7907016u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4715c9:{NFSU2_TR(0x4715c9);
{u32 ea_=u32(u32(8564528u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4715cf:{NFSU2_TR(0x4715cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4715d4ull));
TAIL_STATIC(0x467ff0u,467);
}
B4715d4:L4715d4:{c.instructions+=7;NFSU2_TR(0x4715d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7f3784ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4715da:{NFSU2_TR(0x4715da);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4715de:{NFSU2_TR(0x4715de);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4715e2:{NFSU2_TR(0x4715e2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4715e3:{NFSU2_TR(0x4715e3);
{u32 ea_=u32(u32(7907016u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4715e9:{NFSU2_TR(0x4715e9);
{u32 ea_=u32(u32(8564652u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4715ef:{NFSU2_TR(0x4715ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4715f4ull));
TAIL_STATIC(0x467ff0u,467);
}
B4715f4:L4715f4:{c.instructions+=6;NFSU2_TR(0x4715f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4715f8:{NFSU2_TR(0x4715f8);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4715fc:{NFSU2_TR(0x4715fc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4715ff:{NFSU2_TR(0x4715ff);
{u32 ea_=u32(u32(7907016u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B471605:{NFSU2_TR(0x471605);
{u32 ea_=u32(u32(8564852u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47160b:{NFSU2_TR(0x47160b);
{goto L471668;}
}
B47160d:L47160d:{c.instructions+=2;NFSU2_TR(0x47160d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47160f:{NFSU2_TR(0x47160f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x471576u);}goto L471576;}}
}
B471615:L471615:{c.instructions+=2;NFSU2_TR(0x471615);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B471617:{NFSU2_TR(0x471617);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x471578u);}goto L471578;}
}
B47161c:L47161c:{c.instructions+=2;NFSU2_TR(0x47161c);
w4(R+20,u32(0xffffd8f0ull));
}
B471621:{NFSU2_TR(0x471621);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x471594u);}goto L471594;}
}
B471626:L471626:{c.instructions+=2;NFSU2_TR(0x471626);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47162c:{NFSU2_TR(0x47162c);
if(r1(R+518)){{goto L471668;}}
}
B47162e:L47162e:{c.instructions+=2;NFSU2_TR(0x47162e);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B471634:{NFSU2_TR(0x471634);
if(r1(R+518)){{goto L471668;}}
}
B471636:L471636:{c.instructions+=9;NFSU2_TR(0x471636);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd5ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B47163c:{NFSU2_TR(0x47163c);
__builtin_memmove((R+0),gp(0x82b064),4);
}
B471641:{NFSU2_TR(0x471641);
__builtin_memmove((R+4),gp(0x82afac),4);
}
B471647:{NFSU2_TR(0x471647);
__builtin_memmove((R+8),gp(0x82af30),4);
}
B47164d:{NFSU2_TR(0x47164d);
__builtin_memmove(gp(0x82a5b8),(R+0),4);
}
B471652:{NFSU2_TR(0x471652);
__builtin_memmove((R+0),gp(0x82b074),4);
}
B471657:{NFSU2_TR(0x471657);
__builtin_memmove(gp(0x82b618),(R+4),4);
}
B47165d:{NFSU2_TR(0x47165d);
__builtin_memmove(gp(0x82a5cc),(R+8),4);
}
B471663:{NFSU2_TR(0x471663);
__builtin_memmove(gp(0x82a5d0),(R+0),4);
}
B471668:L471668:{c.instructions+=2;NFSU2_TR(0x471668);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47166e:{NFSU2_TR(0x47166e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4717d7;}}
}
B471674:L471674:{c.instructions+=2;NFSU2_TR(0x471674);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47167a:{NFSU2_TR(0x47167a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4717d7;}}
}
B471680:L471680:{c.instructions+=7;NFSU2_TR(0x471680);
{u32 ea_=u32(u32(8562104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B471686:{NFSU2_TR(0x471686);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47168c:{NFSU2_TR(0x47168c);
{u32 ea_=u32(u32(8564836u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B471692:{NFSU2_TR(0x471692);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B471694:{NFSU2_TR(0x471694);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B471696:{NFSU2_TR(0x471696);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B471699:{NFSU2_TR(0x471699);
if(r1(R+518)){{goto L4716c0;}}
}
B47169b:L47169b:{c.instructions+=8;NFSU2_TR(0x47169b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B47169d:{NFSU2_TR(0x47169d);
{u32 ea_=u32(u32(8562104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4716a3:{NFSU2_TR(0x4716a3);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4716a9:{NFSU2_TR(0x4716a9);
{u32 ea_=u32(u32(8564836u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4716af:{NFSU2_TR(0x4716af);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4716b1:{NFSU2_TR(0x4716b1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4716b3:{NFSU2_TR(0x4716b3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4716b6:{NFSU2_TR(0x4716b6);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4716c0;}}
}
B4716b8:L4716b8:{c.instructions+=2;NFSU2_TR(0x4716b8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4716ba:{NFSU2_TR(0x4716ba);
{u32 ea_=u32(u32(8564836u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4716c0:L4716c0:{c.instructions+=8;NFSU2_TR(0x4716c0);
{u32 ea_=u32(u32(8562104u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4716c6:{NFSU2_TR(0x4716c6);
{u32 ea_=u32(u32(8566296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4716cc:{NFSU2_TR(0x4716cc);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4716d2:{NFSU2_TR(0x4716d2);
{u32 ea_=u32(u32(8564652u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4716d8:{NFSU2_TR(0x4716d8);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4716da:{NFSU2_TR(0x4716da);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4716dc:{NFSU2_TR(0x4716dc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4716df:{NFSU2_TR(0x4716df);
if(r1(R+518)){{goto L471706;}}
}
B4716e1:L4716e1:{c.instructions+=8;NFSU2_TR(0x4716e1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4716e3:{NFSU2_TR(0x4716e3);
{u32 ea_=u32(u32(8566296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4716e9:{NFSU2_TR(0x4716e9);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4716ef:{NFSU2_TR(0x4716ef);
{u32 ea_=u32(u32(8564652u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4716f5:{NFSU2_TR(0x4716f5);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4716f7:{NFSU2_TR(0x4716f7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4716f9:{NFSU2_TR(0x4716f9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4716fc:{NFSU2_TR(0x4716fc);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L471706;}}
}
B4716fe:L4716fe:{c.instructions+=2;NFSU2_TR(0x4716fe);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B471700:{NFSU2_TR(0x471700);
{u32 ea_=u32(u32(8564652u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B471706:L471706:{c.instructions+=8;NFSU2_TR(0x471706);
{u32 ea_=u32(u32(8566296u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B47170c:{NFSU2_TR(0x47170c);
{u32 ea_=u32(u32(8562124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B471712:{NFSU2_TR(0x471712);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B471718:{NFSU2_TR(0x471718);
{u32 ea_=u32(u32(8564528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47171e:{NFSU2_TR(0x47171e);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B471720:{NFSU2_TR(0x471720);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B471722:{NFSU2_TR(0x471722);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B471725:{NFSU2_TR(0x471725);
if(r1(R+518)){{goto L47174c;}}
}
B471727:L471727:{c.instructions+=8;NFSU2_TR(0x471727);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B471729:{NFSU2_TR(0x471729);
{u32 ea_=u32(u32(8562124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47172f:{NFSU2_TR(0x47172f);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B471735:{NFSU2_TR(0x471735);
{u32 ea_=u32(u32(8564528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47173b:{NFSU2_TR(0x47173b);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B47173d:{NFSU2_TR(0x47173d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47173f:{NFSU2_TR(0x47173f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B471742:{NFSU2_TR(0x471742);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L47174c;}}
}
B471744:L471744:{c.instructions+=2;NFSU2_TR(0x471744);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B471746:{NFSU2_TR(0x471746);
{u32 ea_=u32(u32(8564528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47174c:L47174c:{c.instructions+=8;NFSU2_TR(0x47174c);
{u32 ea_=u32(u32(8562124u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B471752:{NFSU2_TR(0x471752);
{u32 ea_=u32(u32(8562128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B471758:{NFSU2_TR(0x471758);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47175e:{NFSU2_TR(0x47175e);
{u32 ea_=u32(u32(8564852u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B471764:{NFSU2_TR(0x471764);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B471766:{NFSU2_TR(0x471766);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B471768:{NFSU2_TR(0x471768);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47176b:{NFSU2_TR(0x47176b);
if(r1(R+518)){{goto L471792;}}
}
B47176d:L47176d:{c.instructions+=8;NFSU2_TR(0x47176d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B47176f:{NFSU2_TR(0x47176f);
{u32 ea_=u32(u32(8562128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B471775:{NFSU2_TR(0x471775);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B47177b:{NFSU2_TR(0x47177b);
{u32 ea_=u32(u32(8564852u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B471781:{NFSU2_TR(0x471781);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B471783:{NFSU2_TR(0x471783);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B471785:{NFSU2_TR(0x471785);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B471788:{NFSU2_TR(0x471788);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L471792;}}
}
B47178a:L47178a:{c.instructions+=2;NFSU2_TR(0x47178a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B47178c:{NFSU2_TR(0x47178c);
{u32 ea_=u32(u32(8564852u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B471792:L471792:{c.instructions+=4;NFSU2_TR(0x471792);
{u32 ea_=u32(u32(8562128u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B471798:{NFSU2_TR(0x471798);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B47179a:{NFSU2_TR(0x47179a);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4717a0:{NFSU2_TR(0x4717a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4717a5ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4717a5:L4717a5:{c.instructions+=5;NFSU2_TR(0x4717a5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4717a7:{NFSU2_TR(0x4717a7);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4717ad:{NFSU2_TR(0x4717ad);
__builtin_memmove((R+20),(R+0),4);
}
B4717af:{NFSU2_TR(0x4717af);
__builtin_memmove(gp(0x82b078),(R+20),4);
}
B4717b5:{NFSU2_TR(0x4717b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4717baull));
TAIL_STATIC(0x75bed4u,75b);
}
B4717ba:L4717ba:{c.instructions+=3;NFSU2_TR(0x4717ba);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4717c0:{NFSU2_TR(0x4717c0);
__builtin_memmove(gp(0x82a998),(R+0),4);
}
B4717c5:{NFSU2_TR(0x4717c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4717caull));
TAIL_STATIC(0x75bed4u,75b);
}
B4717ca:L4717ca:{c.instructions+=3;NFSU2_TR(0x4717ca);
__builtin_memmove((R+28),(R+0),4);
}
B4717cc:{NFSU2_TR(0x4717cc);
__builtin_memmove(gp(0x82b070),(R+28),4);
}
B4717d2:{NFSU2_TR(0x4717d2);
{goto L47186d;}
}
B4717d7:L4717d7:{c.instructions+=6;NFSU2_TR(0x4717d7);
{u32 ea_=u32(u32(8564836u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4717dd:{NFSU2_TR(0x4717dd);
{u32 ea_=u32(u32(8562104u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4717e3:{NFSU2_TR(0x4717e3);
{u32 ea_=u32(r4(R+24)+u32(204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4717e9:{NFSU2_TR(0x4717e9);
{u32 ea_=u32(u32(8562104u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4717ef:{NFSU2_TR(0x4717ef);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4717f5:{NFSU2_TR(0x4717f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4717faull));
TAIL_STATIC(0x75bed4u,75b);
}
B4717fa:L4717fa:{c.instructions+=8;NFSU2_TR(0x4717fa);
{u32 ea_=u32(u32(8564652u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B471800:{NFSU2_TR(0x471800);
{u32 ea_=u32(u32(8566296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B471806:{NFSU2_TR(0x471806);
__builtin_memmove((R+20),(R+0),4);
}
B471808:{NFSU2_TR(0x471808);
__builtin_memmove(gp(0x82b078),(R+20),4);
}
B47180e:{NFSU2_TR(0x47180e);
{u32 ea_=u32(r4(R+24)+u32(204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B471814:{NFSU2_TR(0x471814);
{u32 ea_=u32(u32(8566296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47181a:{NFSU2_TR(0x47181a);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B471820:{NFSU2_TR(0x471820);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471825ull));
TAIL_STATIC(0x75bed4u,75b);
}
B471825:L471825:{c.instructions+=7;NFSU2_TR(0x471825);
{u32 ea_=u32(u32(8564528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47182b:{NFSU2_TR(0x47182b);
{u32 ea_=u32(u32(8562124u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B471831:{NFSU2_TR(0x471831);
__builtin_memmove(gp(0x82a998),(R+0),4);
}
B471836:{NFSU2_TR(0x471836);
{u32 ea_=u32(r4(R+24)+u32(204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47183c:{NFSU2_TR(0x47183c);
{u32 ea_=u32(u32(8562124u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B471842:{NFSU2_TR(0x471842);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B471848:{NFSU2_TR(0x471848);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47184dull));
TAIL_STATIC(0x75bed4u,75b);
}
B47184d:L47184d:{c.instructions+=6;NFSU2_TR(0x47184d);
{u32 ea_=u32(u32(8564852u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B471853:{NFSU2_TR(0x471853);
{u32 ea_=u32(u32(8562128u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B471859:{NFSU2_TR(0x471859);
__builtin_memmove((R+28),(R+0),4);
}
B47185b:{NFSU2_TR(0x47185b);
__builtin_memmove(gp(0x82b070),(R+28),4);
}
B471861:{NFSU2_TR(0x471861);
{u32 ea_=u32(r4(R+24)+u32(204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B471867:{NFSU2_TR(0x471867);
{u32 ea_=u32(u32(8562128u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47186d:L47186d:{c.instructions+=2;NFSU2_TR(0x47186d);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B471873:{NFSU2_TR(0x471873);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471878ull));
TAIL_STATIC(0x75bed4u,75b);
}
B471878:L471878:{c.instructions+=3;NFSU2_TR(0x471878);
__builtin_memmove(gp(0x82b880),(R+0),4);
}
B47187d:{NFSU2_TR(0x47187d);
u8 U[2];
__builtin_memmove((U+0),gp(0x82af28),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B471883:{NFSU2_TR(0x471883);
if(r1(R+518)){{goto L4718d2;}}
}
B471885:L471885:{c.instructions+=3;NFSU2_TR(0x471885);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B471886:{NFSU2_TR(0x471886);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B471888:{NFSU2_TR(0x471888);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4718bf;}}
}
B47188a:L47188a:{c.instructions+=3;NFSU2_TR(0x47188a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7fffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B471890:{NFSU2_TR(0x471890);
__builtin_memmove((R+0),(R+28),4);
}
B471892:{NFSU2_TR(0x471892);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L471899;}}
}
B471894:L471894:{c.instructions+=1;NFSU2_TR(0x471894);
w4(R+0,u32(0x7fffull));
}
B471899:L471899:{c.instructions+=4;NFSU2_TR(0x471899);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B47189a:{NFSU2_TR(0x47189a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47189c:{NFSU2_TR(0x47189c);
__builtin_memmove(gp(0x82b070),(R+0),4);
}
B4718a1:{NFSU2_TR(0x4718a1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4718c3;}}
}
B4718a3:L4718a3:{c.instructions+=3;NFSU2_TR(0x4718a3);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7fffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4718a9:{NFSU2_TR(0x4718a9);
__builtin_memmove((R+0),(R+20),4);
}
B4718ab:{NFSU2_TR(0x4718ab);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4718b2;}}
}
B4718ad:L4718ad:{c.instructions+=1;NFSU2_TR(0x4718ad);
w4(R+0,u32(0x7fffull));
}
B4718b2:L4718b2:{c.instructions+=3;NFSU2_TR(0x4718b2);
__builtin_memmove(gp(0x82b078),(R+0),4);
}
B4718b7:{NFSU2_TR(0x4718b7);
__builtin_memmove(gp(0x82af28),(R+12),1);
}
B4718bd:{NFSU2_TR(0x4718bd);
{goto L4718d9;}
}
B4718bf:L4718bf:{c.instructions+=2;NFSU2_TR(0x4718bf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4718c1:{NFSU2_TR(0x4718c1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x471899u);}goto L471899;}
}
B4718c3:L4718c3:{c.instructions+=4;NFSU2_TR(0x4718c3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4718c5:{NFSU2_TR(0x4718c5);
__builtin_memmove(gp(0x82b078),(R+0),4);
}
B4718ca:{NFSU2_TR(0x4718ca);
__builtin_memmove(gp(0x82af28),(R+12),1);
}
B4718d0:{NFSU2_TR(0x4718d0);
{goto L4718d9;}
}
B4718d2:L4718d2:{c.instructions+=1;NFSU2_TR(0x4718d2);
s1(0x82af28,u8(0x1ull));
}
B4718d9:L4718d9:{c.instructions+=8;NFSU2_TR(0x4718d9);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+12)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B4718df:{NFSU2_TR(0x4718df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4718e0:{NFSU2_TR(0x4718e0);
__builtin_memmove((R+4),(R+518),1);
}
B4718e3:{NFSU2_TR(0x4718e3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4718e9:{NFSU2_TR(0x4718e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4718ea:{NFSU2_TR(0x4718ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4718eb:{NFSU2_TR(0x4718eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4718ec:{NFSU2_TR(0x4718ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4718f0:L4718f0:{c.instructions+=3;NFSU2_TR(0x4718f0);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B4718f5:{NFSU2_TR(0x4718f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4718f6:{NFSU2_TR(0x4718f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4718fbull));
TAIL_STATIC(0x43e910u,43e);
}
B4718fb:L4718fb:{c.instructions+=3;NFSU2_TR(0x4718fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4718fe:{NFSU2_TR(0x4718fe);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4d8ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4d8ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B471903:{NFSU2_TR(0x471903);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47192d;}}
}
B471905:L471905:{c.instructions+=6;NFSU2_TR(0x471905);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47190b:{NFSU2_TR(0x47190b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47190e:{NFSU2_TR(0x47190e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B471914:{NFSU2_TR(0x471914);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471915:{NFSU2_TR(0x471915);
u8 U[4];
w4(U+0,u32(0xd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47191a:{NFSU2_TR(0x47191a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47191full));
TAIL_STATIC(0x440820u,440);
}
B47191f:L47191f:{c.instructions+=3;NFSU2_TR(0x47191f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B471922:{NFSU2_TR(0x471922);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B471924:{NFSU2_TR(0x471924);
if(r1(R+518)){{goto L47192d;}}
}
B471926:L471926:{c.instructions+=2;NFSU2_TR(0x471926);
__builtin_memmove((R+4),(R+0),4);
}
B471928:{NFSU2_TR(0x471928);
TAIL_STATIC(0x470fe0u,470);
}
B47192d:L47192d:{c.instructions+=2;NFSU2_TR(0x47192d);
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
B47192f:{NFSU2_TR(0x47192f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B471930:L471930:{c.instructions+=3;NFSU2_TR(0x471930);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B471935:{NFSU2_TR(0x471935);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471936:{NFSU2_TR(0x471936);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47193bull));
TAIL_STATIC(0x43e910u,43e);
}
B47193b:L47193b:{c.instructions+=3;NFSU2_TR(0x47193b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47193e:{NFSU2_TR(0x47193e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x46cull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x46cull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B471943:{NFSU2_TR(0x471943);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47196a;}}
}
B471945:L471945:{c.instructions+=6;NFSU2_TR(0x471945);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47194b:{NFSU2_TR(0x47194b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47194e:{NFSU2_TR(0x47194e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B471954:{NFSU2_TR(0x471954);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471955:{NFSU2_TR(0x471955);
u8 U[4];
w4(U+0,u32(0x6cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471957:{NFSU2_TR(0x471957);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47195cull));
TAIL_STATIC(0x440820u,440);
}
B47195c:L47195c:{c.instructions+=3;NFSU2_TR(0x47195c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47195f:{NFSU2_TR(0x47195f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B471961:{NFSU2_TR(0x471961);
if(r1(R+518)){{goto L47196a;}}
}
B471963:L471963:{c.instructions+=2;NFSU2_TR(0x471963);
__builtin_memmove((R+4),(R+0),4);
}
B471965:{NFSU2_TR(0x471965);
TAIL_STATIC(0x45dc80u,45d);
}
B47196a:L47196a:{c.instructions+=2;NFSU2_TR(0x47196a);
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
B47196c:{NFSU2_TR(0x47196c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B471970:L471970:{c.instructions+=8;NFSU2_TR(0x471970);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471971:{NFSU2_TR(0x471971);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471972:{NFSU2_TR(0x471972);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471973:{NFSU2_TR(0x471973);
__builtin_memmove((R+28),gp(0x82b884),4);
}
B471979:{NFSU2_TR(0x471979);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47197c:{NFSU2_TR(0x47197c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47197e:{NFSU2_TR(0x47197e);
__builtin_memmove((R+24),(R+4),4);
}
B471980:{NFSU2_TR(0x471980);
if(r1(R+518)){{goto L471bca;}}
}
B471986:L471986:{c.instructions+=3;NFSU2_TR(0x471986);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B471988:{NFSU2_TR(0x471988);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47198e:{NFSU2_TR(0x47198e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471993ull));
TAIL_STATIC(0x75bed4u,75b);
}
B471993:L471993:{c.instructions+=6;NFSU2_TR(0x471993);
w4(R+4,u32(0x7fffull));
}
B471998:{NFSU2_TR(0x471998);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47199a:{NFSU2_TR(0x47199a);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B47199c:{NFSU2_TR(0x47199c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47199d:{NFSU2_TR(0x47199d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47199f:{NFSU2_TR(0x47199f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4719a4ull));
TAIL_STATIC(0x468160u,468);
}
B4719a4:L4719a4:{c.instructions+=11;NFSU2_TR(0x4719a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4719a8:{NFSU2_TR(0x4719a8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4719ac:{NFSU2_TR(0x4719ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4719af:{NFSU2_TR(0x4719af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4719b2:{NFSU2_TR(0x4719b2);
{u32 ea_=u32(u32(7907016u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4719b8:{NFSU2_TR(0x4719b8);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4719bb:{NFSU2_TR(0x4719bb);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4719bd:{NFSU2_TR(0x4719bd);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4719bf:{NFSU2_TR(0x4719bf);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4719c5:{NFSU2_TR(0x4719c5);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4719cb:{NFSU2_TR(0x4719cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4719d0ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4719d0:L4719d0:{c.instructions+=9;NFSU2_TR(0x4719d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4719d3:{NFSU2_TR(0x4719d3);
__builtin_memmove((R+8),gp(0x82b884),4);
}
B4719d9:{NFSU2_TR(0x4719d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4719dc:{NFSU2_TR(0x4719dc);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4719df:{NFSU2_TR(0x4719df);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4719e1:{NFSU2_TR(0x4719e1);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4719e3:{NFSU2_TR(0x4719e3);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4719e9:{NFSU2_TR(0x4719e9);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4719ef:{NFSU2_TR(0x4719ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4719f4ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4719f4:L4719f4:{c.instructions+=9;NFSU2_TR(0x4719f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4719f7:{NFSU2_TR(0x4719f7);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B4719fc:{NFSU2_TR(0x4719fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4719ff:{NFSU2_TR(0x4719ff);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B471a02:{NFSU2_TR(0x471a02);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B471a04:{NFSU2_TR(0x471a04);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B471a06:{NFSU2_TR(0x471a06);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B471a0c:{NFSU2_TR(0x471a0c);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B471a12:{NFSU2_TR(0x471a12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471a17ull));
TAIL_STATIC(0x75bed4u,75b);
}
B471a17:L471a17:{c.instructions+=9;NFSU2_TR(0x471a17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B471a1a:{NFSU2_TR(0x471a1a);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B471a20:{NFSU2_TR(0x471a20);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B471a23:{NFSU2_TR(0x471a23);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B471a26:{NFSU2_TR(0x471a26);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B471a28:{NFSU2_TR(0x471a28);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B471a2a:{NFSU2_TR(0x471a2a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B471a30:{NFSU2_TR(0x471a30);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B471a36:{NFSU2_TR(0x471a36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471a3bull));
TAIL_STATIC(0x75bed4u,75b);
}
B471a3b:L471a3b:{c.instructions+=9;NFSU2_TR(0x471a3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B471a3e:{NFSU2_TR(0x471a3e);
__builtin_memmove((R+8),gp(0x82b884),4);
}
B471a44:{NFSU2_TR(0x471a44);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B471a47:{NFSU2_TR(0x471a47);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B471a4a:{NFSU2_TR(0x471a4a);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B471a4c:{NFSU2_TR(0x471a4c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B471a4e:{NFSU2_TR(0x471a4e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B471a54:{NFSU2_TR(0x471a54);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B471a5a:{NFSU2_TR(0x471a5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471a5full));
TAIL_STATIC(0x75bed4u,75b);
}
B471a5f:L471a5f:{c.instructions+=9;NFSU2_TR(0x471a5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B471a62:{NFSU2_TR(0x471a62);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B471a67:{NFSU2_TR(0x471a67);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B471a6a:{NFSU2_TR(0x471a6a);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B471a6d:{NFSU2_TR(0x471a6d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B471a6f:{NFSU2_TR(0x471a6f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B471a71:{NFSU2_TR(0x471a71);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B471a77:{NFSU2_TR(0x471a77);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B471a7d:{NFSU2_TR(0x471a7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471a82ull));
TAIL_STATIC(0x75bed4u,75b);
}
B471a82:L471a82:{c.instructions+=7;NFSU2_TR(0x471a82);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B471a84:{NFSU2_TR(0x471a84);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B471a8a:{NFSU2_TR(0x471a8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B471a8d:{NFSU2_TR(0x471a8d);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B471a93:{NFSU2_TR(0x471a93);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B471a96:{NFSU2_TR(0x471a96);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B471a98:{NFSU2_TR(0x471a98);
if(r1(R+518)){{goto L471aa7;}}
}
B471a9a:L471a9a:{c.instructions+=4;NFSU2_TR(0x471a9a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B471a9c:{NFSU2_TR(0x471a9c);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B471a9f:{NFSU2_TR(0x471a9f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B471aa1:{NFSU2_TR(0x471aa1);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B471aa7:L471aa7:{c.instructions+=1;NFSU2_TR(0x471aa7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471aacull));
TAIL_STATIC(0x75bed4u,75b);
}
B471aac:L471aac:{c.instructions+=6;NFSU2_TR(0x471aac);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B471ab2:{NFSU2_TR(0x471ab2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B471ab5:{NFSU2_TR(0x471ab5);
__builtin_memmove((R+8),gp(0x82b884),4);
}
B471abb:{NFSU2_TR(0x471abb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B471abe:{NFSU2_TR(0x471abe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B471ac0:{NFSU2_TR(0x471ac0);
if(r1(R+518)){{goto L471acf;}}
}
B471ac2:L471ac2:{c.instructions+=4;NFSU2_TR(0x471ac2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B471ac4:{NFSU2_TR(0x471ac4);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B471ac7:{NFSU2_TR(0x471ac7);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B471ac9:{NFSU2_TR(0x471ac9);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B471acf:L471acf:{c.instructions+=1;NFSU2_TR(0x471acf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471ad4ull));
TAIL_STATIC(0x75bed4u,75b);
}
B471ad4:L471ad4:{c.instructions+=6;NFSU2_TR(0x471ad4);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B471ada:{NFSU2_TR(0x471ada);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B471add:{NFSU2_TR(0x471add);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B471ae2:{NFSU2_TR(0x471ae2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B471ae5:{NFSU2_TR(0x471ae5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B471ae7:{NFSU2_TR(0x471ae7);
if(r1(R+518)){{goto L471af6;}}
}
B471ae9:L471ae9:{c.instructions+=4;NFSU2_TR(0x471ae9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B471aeb:{NFSU2_TR(0x471aeb);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B471aee:{NFSU2_TR(0x471aee);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B471af0:{NFSU2_TR(0x471af0);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B471af6:L471af6:{c.instructions+=1;NFSU2_TR(0x471af6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471afbull));
TAIL_STATIC(0x75bed4u,75b);
}
B471afb:L471afb:{c.instructions+=6;NFSU2_TR(0x471afb);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B471b01:{NFSU2_TR(0x471b01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B471b04:{NFSU2_TR(0x471b04);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B471b0a:{NFSU2_TR(0x471b0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B471b0d:{NFSU2_TR(0x471b0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B471b0f:{NFSU2_TR(0x471b0f);
if(r1(R+518)){{goto L471b1e;}}
}
B471b11:L471b11:{c.instructions+=4;NFSU2_TR(0x471b11);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B471b13:{NFSU2_TR(0x471b13);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B471b16:{NFSU2_TR(0x471b16);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B471b18:{NFSU2_TR(0x471b18);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B471b1e:L471b1e:{c.instructions+=1;NFSU2_TR(0x471b1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471b23ull));
TAIL_STATIC(0x75bed4u,75b);
}
B471b23:L471b23:{c.instructions+=6;NFSU2_TR(0x471b23);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B471b29:{NFSU2_TR(0x471b29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B471b2c:{NFSU2_TR(0x471b2c);
__builtin_memmove((R+8),gp(0x82b884),4);
}
B471b32:{NFSU2_TR(0x471b32);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B471b35:{NFSU2_TR(0x471b35);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B471b37:{NFSU2_TR(0x471b37);
if(r1(R+518)){{goto L471b46;}}
}
B471b39:L471b39:{c.instructions+=4;NFSU2_TR(0x471b39);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B471b3b:{NFSU2_TR(0x471b3b);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B471b3e:{NFSU2_TR(0x471b3e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B471b40:{NFSU2_TR(0x471b40);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B471b46:L471b46:{c.instructions+=1;NFSU2_TR(0x471b46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471b4bull));
TAIL_STATIC(0x75bed4u,75b);
}
B471b4b:L471b4b:{c.instructions+=6;NFSU2_TR(0x471b4b);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B471b51:{NFSU2_TR(0x471b51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B471b54:{NFSU2_TR(0x471b54);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B471b59:{NFSU2_TR(0x471b59);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B471b5c:{NFSU2_TR(0x471b5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B471b5e:{NFSU2_TR(0x471b5e);
if(r1(R+518)){{goto L471b6d;}}
}
B471b60:L471b60:{c.instructions+=4;NFSU2_TR(0x471b60);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B471b62:{NFSU2_TR(0x471b62);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B471b65:{NFSU2_TR(0x471b65);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B471b67:{NFSU2_TR(0x471b67);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B471b6d:L471b6d:{c.instructions+=1;NFSU2_TR(0x471b6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471b72ull));
TAIL_STATIC(0x75bed4u,75b);
}
B471b72:L471b72:{c.instructions+=4;NFSU2_TR(0x471b72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B471b75:{NFSU2_TR(0x471b75);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B471b7a:{NFSU2_TR(0x471b7a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B471b7c:{NFSU2_TR(0x471b7c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L471bb4;}}
}
B471b7e:L471b7e:{c.instructions+=3;NFSU2_TR(0x471b7e);
__builtin_memmove((R+0),gp(0x890108),4);
}
B471b83:{NFSU2_TR(0x471b83);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B471b85:{NFSU2_TR(0x471b85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L471bb4;}}
}
B471b87:L471b87:{c.instructions+=3;NFSU2_TR(0x471b87);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B471b8c:{NFSU2_TR(0x471b8c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B471b8e:{NFSU2_TR(0x471b8e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L471bb4;}}
}
B471b90:L471b90:{c.instructions+=3;NFSU2_TR(0x471b90);
__builtin_memmove((R+0),gp(0x890104),4);
}
B471b95:{NFSU2_TR(0x471b95);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B471b97:{NFSU2_TR(0x471b97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L471bb4;}}
}
B471b99:L471b99:{c.instructions+=3;NFSU2_TR(0x471b99);
__builtin_memmove((R+0),gp(0x82b9c8),4);
}
B471b9e:{NFSU2_TR(0x471b9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B471ba0:{NFSU2_TR(0x471ba0);
if(r1(R+518)){{goto L471bac;}}
}
B471ba2:L471ba2:{c.instructions+=3;NFSU2_TR(0x471ba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B471ba8:{NFSU2_TR(0x471ba8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B471baa:{NFSU2_TR(0x471baa);
if(r1(R+518)){{goto L471bb4;}}
}
B471bac:L471bac:{c.instructions+=3;NFSU2_TR(0x471bac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B471baf:{NFSU2_TR(0x471baf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B471bb2:{NFSU2_TR(0x471bb2);
{goto L471bbb;}
}
B471bb4:L471bb4:{c.instructions+=1;NFSU2_TR(0x471bb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w4(U+4,u32(0x7fffull));
s4(u32(r4(U+0)),r4(U+4));
}
B471bbb:L471bbb:{c.instructions+=3;NFSU2_TR(0x471bbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B471bbe:{NFSU2_TR(0x471bbe);
__builtin_memmove((R+28),gp(0x82b884),4);
}
B471bc4:{NFSU2_TR(0x471bc4);
__builtin_memmove(gp(0x7ed344),(R+8),4);
}
B471bca:L471bca:{c.instructions+=3;NFSU2_TR(0x471bca);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B471bcd:{NFSU2_TR(0x471bcd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B471bcf:{NFSU2_TR(0x471bcf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L471c1b;}}
}
B471bd1:L471bd1:{c.instructions+=3;NFSU2_TR(0x471bd1);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B471bd6:{NFSU2_TR(0x471bd6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B471bd8:{NFSU2_TR(0x471bd8);
if(r1(R+518)){{goto L471c12;}}
}
B471bda:L471bda:{c.instructions+=3;NFSU2_TR(0x471bda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B471bdc:{NFSU2_TR(0x471bdc);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B471bdf:{NFSU2_TR(0x471bdf);
if(r1(R+518)){{goto L471c1b;}}
}
B471be1:L471be1:{c.instructions+=2;NFSU2_TR(0x471be1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B471be4:{NFSU2_TR(0x471be4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L471bf9;}}
}
B471be6:L471be6:{c.instructions+=2;NFSU2_TR(0x471be6);
w4(R+4,u32(0x827e88ull));
}
B471beb:{NFSU2_TR(0x471beb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471bf0ull));
TAIL_STATIC(0x435950u,435);
}
B471bf0:L471bf0:{c.instructions+=2;NFSU2_TR(0x471bf0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B471bf2:{NFSU2_TR(0x471bf2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L471c1b;}}
}
B471bf4:L471bf4:{c.instructions+=1;NFSU2_TR(0x471bf4);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B471bf9:L471bf9:{c.instructions+=2;NFSU2_TR(0x471bf9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B471bfb:{NFSU2_TR(0x471bfb);
if(r1(R+518)){{goto L471c12;}}
}
B471bfd:L471bfd:{c.instructions+=2;NFSU2_TR(0x471bfd);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B471c00:{NFSU2_TR(0x471c00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L471c12;}}
}
B471c02:L471c02:{c.instructions+=3;NFSU2_TR(0x471c02);
__builtin_memmove((R+0),gp(0x8650b8),4);
}
B471c07:{NFSU2_TR(0x471c07);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B471c09:{NFSU2_TR(0x471c09);
if(r1(R+518)){{goto L471c12;}}
}
B471c0b:L471c0b:{c.instructions+=3;NFSU2_TR(0x471c0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B471c0e:{NFSU2_TR(0x471c0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B471c10:{NFSU2_TR(0x471c10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L471c1b;}}
}
B471c12:L471c12:{c.instructions+=2;NFSU2_TR(0x471c12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B471c19:{NFSU2_TR(0x471c19);
{goto L471c22;}
}
B471c1b:L471c1b:{c.instructions+=1;NFSU2_TR(0x471c1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B471c22:L471c22:{c.instructions+=1;NFSU2_TR(0x471c22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471c27ull));
TAIL_STATIC(0x4fe4a0u,4fe);
}
B471c27:L471c27:{c.instructions+=2;NFSU2_TR(0x471c27);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B471c29:{NFSU2_TR(0x471c29);
if(r1(R+518)){{goto L471c49;}}
}
B471c2b:L471c2b:{c.instructions+=3;NFSU2_TR(0x471c2b);
__builtin_memmove((R+0),gp(0x8383a4),4);
}
B471c30:{NFSU2_TR(0x471c30);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B471c32:{NFSU2_TR(0x471c32);
if(r1(R+518)){{goto L471c49;}}
}
B471c34:L471c34:{c.instructions+=3;NFSU2_TR(0x471c34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B471c36:{NFSU2_TR(0x471c36);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1eull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1eull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B471c39:{NFSU2_TR(0x471c39);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L471c49;}}
}
B471c3b:L471c3b:{c.instructions+=2;NFSU2_TR(0x471c3b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x22ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x22ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B471c3e:{NFSU2_TR(0x471c3e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L471c49;}}
}
B471c40:L471c40:{c.instructions+=2;NFSU2_TR(0x471c40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B471c47:{NFSU2_TR(0x471c47);
{goto L471c50;}
}
B471c49:L471c49:{c.instructions+=1;NFSU2_TR(0x471c49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B471c50:L471c50:{c.instructions+=2;NFSU2_TR(0x471c50);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B471c57:{NFSU2_TR(0x471c57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L471c8c;}}
}
B471c59:L471c59:{c.instructions+=3;NFSU2_TR(0x471c59);
__builtin_memmove((R+0),gp(0x890118),4);
}
B471c5e:{NFSU2_TR(0x471c5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B471c60:{NFSU2_TR(0x471c60);
if(r1(R+518)){{goto L471c8c;}}
}
B471c62:L471c62:{c.instructions+=2;NFSU2_TR(0x471c62);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B471c65:{NFSU2_TR(0x471c65);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L471c8c;}}
}
B471c67:L471c67:{c.instructions+=6;NFSU2_TR(0x471c67);
__builtin_memmove((R+0),gp(0x827ec8),4);
}
B471c6c:{NFSU2_TR(0x471c6c);
__builtin_memmove((R+8),gp(0x827eb0),4);
}
B471c72:{NFSU2_TR(0x471c72);
__builtin_memmove((R+4),gp(0x827e98),4);
}
B471c78:{NFSU2_TR(0x471c78);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B471c7a:{NFSU2_TR(0x471c7a);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B471c7c:{NFSU2_TR(0x471c7c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L471c8c;}}
}
B471c7e:L471c7e:{c.instructions+=6;NFSU2_TR(0x471c7e);
w4(R+0,u32(0x1ull));
}
B471c83:{NFSU2_TR(0x471c83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B471c84:{NFSU2_TR(0x471c84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B471c87:{NFSU2_TR(0x471c87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B471c88:{NFSU2_TR(0x471c88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B471c89:{NFSU2_TR(0x471c89);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B471c8c:L471c8c:{c.instructions+=6;NFSU2_TR(0x471c8c);
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
B471c8e:{NFSU2_TR(0x471c8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B471c8f:{NFSU2_TR(0x471c8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B471c92:{NFSU2_TR(0x471c92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B471c93:{NFSU2_TR(0x471c93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B471c94:{NFSU2_TR(0x471c94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B471ca0:L471ca0:{c.instructions+=3;NFSU2_TR(0x471ca0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471ca1:{NFSU2_TR(0x471ca1);
__builtin_memmove((R+24),(R+4),4);
}
B471ca3:{NFSU2_TR(0x471ca3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471ca8ull));
TAIL_STATIC(0x45dd60u,45d);
}
B471ca8:L471ca8:{c.instructions+=4;NFSU2_TR(0x471ca8);
u8 U[4];
w4(U+0,u32(0x78aaf8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B471cae:{NFSU2_TR(0x471cae);
__builtin_memmove((R+0),(R+24),4);
}
B471cb0:{NFSU2_TR(0x471cb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B471cb1:{NFSU2_TR(0x471cb1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B471cc0:L471cc0:{c.instructions+=3;NFSU2_TR(0x471cc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471cc1:{NFSU2_TR(0x471cc1);
__builtin_memmove((R+24),(R+4),4);
}
B471cc3:{NFSU2_TR(0x471cc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471cc8ull));
TAIL_STATIC(0x45dd60u,45d);
}
B471cc8:L471cc8:{c.instructions+=4;NFSU2_TR(0x471cc8);
u8 U[4];
w4(U+0,u32(0x78ab30ull));
s4(u32(r4(R+24)),r4(U+0));
}
B471cce:{NFSU2_TR(0x471cce);
__builtin_memmove((R+0),(R+24),4);
}
B471cd0:{NFSU2_TR(0x471cd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B471cd1:{NFSU2_TR(0x471cd1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B471ce0:L471ce0:{c.instructions+=3;NFSU2_TR(0x471ce0);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B471ce5:{NFSU2_TR(0x471ce5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471ce6:{NFSU2_TR(0x471ce6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471cebull));
TAIL_STATIC(0x43e910u,43e);
}
B471ceb:L471ceb:{c.instructions+=3;NFSU2_TR(0x471ceb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B471cee:{NFSU2_TR(0x471cee);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4d8ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4d8ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B471cf3:{NFSU2_TR(0x471cf3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L471d1d;}}
}
B471cf5:L471cf5:{c.instructions+=6;NFSU2_TR(0x471cf5);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B471cfb:{NFSU2_TR(0x471cfb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B471cfe:{NFSU2_TR(0x471cfe);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B471d04:{NFSU2_TR(0x471d04);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471d05:{NFSU2_TR(0x471d05);
u8 U[4];
w4(U+0,u32(0xd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471d0a:{NFSU2_TR(0x471d0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471d0full));
TAIL_STATIC(0x440820u,440);
}
B471d0f:L471d0f:{c.instructions+=3;NFSU2_TR(0x471d0f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B471d12:{NFSU2_TR(0x471d12);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B471d14:{NFSU2_TR(0x471d14);
if(r1(R+518)){{goto L471d1d;}}
}
B471d16:L471d16:{c.instructions+=2;NFSU2_TR(0x471d16);
__builtin_memmove((R+4),(R+0),4);
}
B471d18:{NFSU2_TR(0x471d18);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x471ca0u);}goto L471ca0;}
}
B471d1d:L471d1d:{c.instructions+=2;NFSU2_TR(0x471d1d);
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
B471d1f:{NFSU2_TR(0x471d1f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B471d20:L471d20:{c.instructions+=3;NFSU2_TR(0x471d20);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B471d25:{NFSU2_TR(0x471d25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471d26:{NFSU2_TR(0x471d26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471d2bull));
TAIL_STATIC(0x43e910u,43e);
}
B471d2b:L471d2b:{c.instructions+=3;NFSU2_TR(0x471d2b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B471d2e:{NFSU2_TR(0x471d2e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4d8ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4d8ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B471d33:{NFSU2_TR(0x471d33);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L471d5d;}}
}
B471d35:L471d35:{c.instructions+=6;NFSU2_TR(0x471d35);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B471d3b:{NFSU2_TR(0x471d3b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B471d3e:{NFSU2_TR(0x471d3e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B471d44:{NFSU2_TR(0x471d44);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471d45:{NFSU2_TR(0x471d45);
u8 U[4];
w4(U+0,u32(0xd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471d4a:{NFSU2_TR(0x471d4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471d4full));
TAIL_STATIC(0x440820u,440);
}
B471d4f:L471d4f:{c.instructions+=3;NFSU2_TR(0x471d4f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B471d52:{NFSU2_TR(0x471d52);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B471d54:{NFSU2_TR(0x471d54);
if(r1(R+518)){{goto L471d5d;}}
}
B471d56:L471d56:{c.instructions+=2;NFSU2_TR(0x471d56);
__builtin_memmove((R+4),(R+0),4);
}
B471d58:{NFSU2_TR(0x471d58);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x471cc0u);}goto L471cc0;}
}
B471d5d:L471d5d:{c.instructions+=2;NFSU2_TR(0x471d5d);
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
B471d5f:{NFSU2_TR(0x471d5f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B471d60:L471d60:{c.instructions+=3;NFSU2_TR(0x471d60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471d61:{NFSU2_TR(0x471d61);
__builtin_memmove((R+24),(R+4),4);
}
B471d63:{NFSU2_TR(0x471d63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471d68ull));
TAIL_STATIC(0x45dd60u,45d);
}
B471d68:L471d68:{c.instructions+=4;NFSU2_TR(0x471d68);
u8 U[4];
w4(U+0,u32(0x78ab68ull));
s4(u32(r4(R+24)),r4(U+0));
}
B471d6e:{NFSU2_TR(0x471d6e);
__builtin_memmove((R+0),(R+24),4);
}
B471d70:{NFSU2_TR(0x471d70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B471d71:{NFSU2_TR(0x471d71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B471d80:L471d80:{c.instructions+=3;NFSU2_TR(0x471d80);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B471d85:{NFSU2_TR(0x471d85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471d86:{NFSU2_TR(0x471d86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471d8bull));
TAIL_STATIC(0x43e910u,43e);
}
B471d8b:L471d8b:{c.instructions+=3;NFSU2_TR(0x471d8b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B471d8e:{NFSU2_TR(0x471d8e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4d8ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4d8ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B471d93:{NFSU2_TR(0x471d93);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L471dbd;}}
}
B471d95:L471d95:{c.instructions+=6;NFSU2_TR(0x471d95);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B471d9b:{NFSU2_TR(0x471d9b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B471d9e:{NFSU2_TR(0x471d9e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B471da4:{NFSU2_TR(0x471da4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471da5:{NFSU2_TR(0x471da5);
u8 U[4];
w4(U+0,u32(0xd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471daa:{NFSU2_TR(0x471daa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471dafull));
TAIL_STATIC(0x440820u,440);
}
B471daf:L471daf:{c.instructions+=3;NFSU2_TR(0x471daf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B471db2:{NFSU2_TR(0x471db2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B471db4:{NFSU2_TR(0x471db4);
if(r1(R+518)){{goto L471dbd;}}
}
B471db6:L471db6:{c.instructions+=2;NFSU2_TR(0x471db6);
__builtin_memmove((R+4),(R+0),4);
}
B471db8:{NFSU2_TR(0x471db8);
TAIL_STATIC(0x45dd60u,45d);
}
B471dbd:L471dbd:{c.instructions+=2;NFSU2_TR(0x471dbd);
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
B471dbf:{NFSU2_TR(0x471dbf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B471dc0:L471dc0:{c.instructions+=5;NFSU2_TR(0x471dc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471dc1:{NFSU2_TR(0x471dc1);
__builtin_memmove((R+24),(R+4),4);
}
B471dc3:{NFSU2_TR(0x471dc3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B471dc6:{NFSU2_TR(0x471dc6);
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
B471dc8:{NFSU2_TR(0x471dc8);
if(r1(R+518)){{goto L471ddb;}}
}
B471dca:L471dca:{c.instructions+=5;NFSU2_TR(0x471dca);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B471dce:{NFSU2_TR(0x471dce);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B471dd2:{NFSU2_TR(0x471dd2);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B471dd5:{NFSU2_TR(0x471dd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B471dd8:{NFSU2_TR(0x471dd8);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B471ddb:L471ddb:{c.instructions+=4;NFSU2_TR(0x471ddb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B471ddd:{NFSU2_TR(0x471ddd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471ddf:{NFSU2_TR(0x471ddf);
__builtin_memmove((R+4),(R+24),4);
}
B471de1:{NFSU2_TR(0x471de1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471de4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B471de4:L471de4:{c.instructions+=6;NFSU2_TR(0x471de4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B471de8:{NFSU2_TR(0x471de8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B471dee:{NFSU2_TR(0x471dee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471def:{NFSU2_TR(0x471def);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471df0:{NFSU2_TR(0x471df0);
__builtin_memmove((R+4),(R+24),4);
}
B471df2:{NFSU2_TR(0x471df2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471df7ull));
TAIL_STATIC(0x45e1f0u,45e);
}
B471df7:L471df7:{c.instructions+=2;NFSU2_TR(0x471df7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B471df8:{NFSU2_TR(0x471df8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B471e00:L471e00:{c.instructions+=3;NFSU2_TR(0x471e00);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B471e05:{NFSU2_TR(0x471e05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471e06:{NFSU2_TR(0x471e06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471e0bull));
TAIL_STATIC(0x43e910u,43e);
}
B471e0b:L471e0b:{c.instructions+=3;NFSU2_TR(0x471e0b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B471e0e:{NFSU2_TR(0x471e0e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4a0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4a0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B471e13:{NFSU2_TR(0x471e13);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L471e3d;}}
}
B471e15:L471e15:{c.instructions+=6;NFSU2_TR(0x471e15);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B471e1b:{NFSU2_TR(0x471e1b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B471e1e:{NFSU2_TR(0x471e1e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B471e24:{NFSU2_TR(0x471e24);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471e25:{NFSU2_TR(0x471e25);
u8 U[4];
w4(U+0,u32(0xa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471e2a:{NFSU2_TR(0x471e2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471e2full));
TAIL_STATIC(0x440820u,440);
}
B471e2f:L471e2f:{c.instructions+=3;NFSU2_TR(0x471e2f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B471e32:{NFSU2_TR(0x471e32);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B471e34:{NFSU2_TR(0x471e34);
if(r1(R+518)){{goto L471e3d;}}
}
B471e36:L471e36:{c.instructions+=2;NFSU2_TR(0x471e36);
__builtin_memmove((R+4),(R+0),4);
}
B471e38:{NFSU2_TR(0x471e38);
TAIL_STATIC(0x45e430u,45e);
}
B471e3d:L471e3d:{c.instructions+=2;NFSU2_TR(0x471e3d);
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
B471e3f:{NFSU2_TR(0x471e3f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B471e40:L471e40:{c.instructions+=15;NFSU2_TR(0x471e40);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471e42:{NFSU2_TR(0x471e42);
u8 U[4];
w4(U+0,u32(0x772268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471e47:{NFSU2_TR(0x471e47);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B471e4d:{NFSU2_TR(0x471e4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471e4e:{NFSU2_TR(0x471e4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B471e55:{NFSU2_TR(0x471e55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B471e58:{NFSU2_TR(0x471e58);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471e59:{NFSU2_TR(0x471e59);
__builtin_memmove((R+24),(R+4),4);
}
B471e5b:{NFSU2_TR(0x471e5b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471e5c:{NFSU2_TR(0x471e5c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B471e60:{NFSU2_TR(0x471e60);
u8 U[4];
w4(U+0,u32(0x78a130ull));
s4(u32(r4(R+24)),r4(U+0));
}
B471e66:{NFSU2_TR(0x471e66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B471e6c:{NFSU2_TR(0x471e6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B471e6e:{NFSU2_TR(0x471e6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B471e76:{NFSU2_TR(0x471e76);
if(r1(R+518)){{goto L471ea6;}}
}
B471e78:L471e78:{c.instructions+=3;NFSU2_TR(0x471e78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B471e7a:{NFSU2_TR(0x471e7a);
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
B471e7c:{NFSU2_TR(0x471e7c);
if(r1(R+518)){{goto L471e83;}}
}
B471e7e:L471e7e:{c.instructions+=1;NFSU2_TR(0x471e7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471e83ull));
TAIL_STATIC(0x735550u,735);
}
B471e83:L471e83:{c.instructions+=3;NFSU2_TR(0x471e83);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B471e87:{NFSU2_TR(0x471e87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471e88:{NFSU2_TR(0x471e88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471e8dull));
TAIL_STATIC(0x734df0u,734);
}
B471e8d:L471e8d:{c.instructions+=2;NFSU2_TR(0x471e8d);
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
B471e90:{NFSU2_TR(0x471e90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471e95ull));
TAIL_STATIC(0x734e40u,734);
}
B471e95:L471e95:{c.instructions+=5;NFSU2_TR(0x471e95);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B471e99:{NFSU2_TR(0x471e99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B471e9b:{NFSU2_TR(0x471e9b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471e9d:{NFSU2_TR(0x471e9d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471e9e:{NFSU2_TR(0x471e9e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471ea1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B471ea1:L471ea1:{c.instructions+=1;NFSU2_TR(0x471ea1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471ea6ull));
TAIL_STATIC(0x734e60u,734);
}
B471ea6:L471ea6:{c.instructions+=8;NFSU2_TR(0x471ea6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B471eaa:{NFSU2_TR(0x471eaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B471eb4:{NFSU2_TR(0x471eb4);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B471eba:{NFSU2_TR(0x471eba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B471ebb:{NFSU2_TR(0x471ebb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B471ebc:{NFSU2_TR(0x471ebc);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B471ec3:{NFSU2_TR(0x471ec3);
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
B471ec6:{NFSU2_TR(0x471ec6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B471ed0:L471ed0:{c.instructions+=3;NFSU2_TR(0x471ed0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471ed1:{NFSU2_TR(0x471ed1);
__builtin_memmove((R+24),(R+4),4);
}
B471ed3:{NFSU2_TR(0x471ed3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471ed8ull));
TAIL_STATIC(0x45e350u,45e);
}
B471ed8:L471ed8:{c.instructions+=18;NFSU2_TR(0x471ed8);
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
B471eda:{NFSU2_TR(0x471eda);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B471ee0:{NFSU2_TR(0x471ee0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B471ee6:{NFSU2_TR(0x471ee6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B471eec:{NFSU2_TR(0x471eec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B471ef2:{NFSU2_TR(0x471ef2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B471ef8:{NFSU2_TR(0x471ef8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B471efe:{NFSU2_TR(0x471efe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B471f04:{NFSU2_TR(0x471f04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B471f0a:{NFSU2_TR(0x471f0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B471f10:{NFSU2_TR(0x471f10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B471f16:{NFSU2_TR(0x471f16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B471f1c:{NFSU2_TR(0x471f1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B471f22:{NFSU2_TR(0x471f22);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B471f26:{NFSU2_TR(0x471f26);
u8 U[4];
w4(U+0,u32(0x78aba0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B471f2c:{NFSU2_TR(0x471f2c);
__builtin_memmove((R+0),(R+24),4);
}
B471f2e:{NFSU2_TR(0x471f2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B471f2f:{NFSU2_TR(0x471f2f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B471f30:L471f30:{c.instructions+=9;NFSU2_TR(0x471f30);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471f31:{NFSU2_TR(0x471f31);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471f32:{NFSU2_TR(0x471f32);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471f33:{NFSU2_TR(0x471f33);
__builtin_memmove((R+24),(R+4),4);
}
B471f35:{NFSU2_TR(0x471f35);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471f36:{NFSU2_TR(0x471f36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B471f3c:{NFSU2_TR(0x471f3c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B471f3e:{NFSU2_TR(0x471f3e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B471f40:{NFSU2_TR(0x471f40);
if(r1(R+518)){{goto L471f75;}}
}
B471f42:L471f42:{c.instructions+=3;NFSU2_TR(0x471f42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B471f44:{NFSU2_TR(0x471f44);
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
B471f46:{NFSU2_TR(0x471f46);
if(r1(R+518)){{goto L471f4d;}}
}
B471f48:L471f48:{c.instructions+=1;NFSU2_TR(0x471f48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471f4dull));
TAIL_STATIC(0x735550u,735);
}
B471f4d:L471f4d:{c.instructions+=3;NFSU2_TR(0x471f4d);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B471f51:{NFSU2_TR(0x471f51);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471f52:{NFSU2_TR(0x471f52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471f57ull));
TAIL_STATIC(0x734df0u,734);
}
B471f57:L471f57:{c.instructions+=2;NFSU2_TR(0x471f57);
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
B471f5a:{NFSU2_TR(0x471f5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471f5full));
TAIL_STATIC(0x734e40u,734);
}
B471f5f:L471f5f:{c.instructions+=5;NFSU2_TR(0x471f5f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B471f63:{NFSU2_TR(0x471f63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B471f65:{NFSU2_TR(0x471f65);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471f66:{NFSU2_TR(0x471f66);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471f67:{NFSU2_TR(0x471f67);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471f6aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B471f6a:L471f6a:{c.instructions+=1;NFSU2_TR(0x471f6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471f6full));
TAIL_STATIC(0x734e60u,734);
}
B471f6f:L471f6f:{c.instructions+=1;NFSU2_TR(0x471f6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B471f75:L471f75:{c.instructions+=3;NFSU2_TR(0x471f75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B471f7b:{NFSU2_TR(0x471f7b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B471f7d:{NFSU2_TR(0x471f7d);
if(r1(R+518)){{goto L471fb2;}}
}
B471f7f:L471f7f:{c.instructions+=3;NFSU2_TR(0x471f7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B471f81:{NFSU2_TR(0x471f81);
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
B471f83:{NFSU2_TR(0x471f83);
if(r1(R+518)){{goto L471f8a;}}
}
B471f85:L471f85:{c.instructions+=1;NFSU2_TR(0x471f85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471f8aull));
TAIL_STATIC(0x735550u,735);
}
B471f8a:L471f8a:{c.instructions+=3;NFSU2_TR(0x471f8a);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B471f8e:{NFSU2_TR(0x471f8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471f8f:{NFSU2_TR(0x471f8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471f94ull));
TAIL_STATIC(0x734df0u,734);
}
B471f94:L471f94:{c.instructions+=2;NFSU2_TR(0x471f94);
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
B471f97:{NFSU2_TR(0x471f97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471f9cull));
TAIL_STATIC(0x734e40u,734);
}
B471f9c:L471f9c:{c.instructions+=5;NFSU2_TR(0x471f9c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B471fa0:{NFSU2_TR(0x471fa0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B471fa2:{NFSU2_TR(0x471fa2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471fa3:{NFSU2_TR(0x471fa3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471fa4:{NFSU2_TR(0x471fa4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471fa7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B471fa7:L471fa7:{c.instructions+=1;NFSU2_TR(0x471fa7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471facull));
TAIL_STATIC(0x734e60u,734);
}
B471fac:L471fac:{c.instructions+=1;NFSU2_TR(0x471fac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B471fb2:L471fb2:{c.instructions+=3;NFSU2_TR(0x471fb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B471fb8:{NFSU2_TR(0x471fb8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B471fba:{NFSU2_TR(0x471fba);
if(r1(R+518)){{goto L471fef;}}
}
B471fbc:L471fbc:{c.instructions+=3;NFSU2_TR(0x471fbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B471fbe:{NFSU2_TR(0x471fbe);
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
B471fc0:{NFSU2_TR(0x471fc0);
if(r1(R+518)){{goto L471fc7;}}
}
B471fc2:L471fc2:{c.instructions+=1;NFSU2_TR(0x471fc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471fc7ull));
TAIL_STATIC(0x735550u,735);
}
B471fc7:L471fc7:{c.instructions+=3;NFSU2_TR(0x471fc7);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B471fcb:{NFSU2_TR(0x471fcb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471fcc:{NFSU2_TR(0x471fcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471fd1ull));
TAIL_STATIC(0x734df0u,734);
}
B471fd1:L471fd1:{c.instructions+=2;NFSU2_TR(0x471fd1);
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
B471fd4:{NFSU2_TR(0x471fd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471fd9ull));
TAIL_STATIC(0x734e40u,734);
}
B471fd9:L471fd9:{c.instructions+=5;NFSU2_TR(0x471fd9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B471fdd:{NFSU2_TR(0x471fdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B471fdf:{NFSU2_TR(0x471fdf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471fe0:{NFSU2_TR(0x471fe0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B471fe1:{NFSU2_TR(0x471fe1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471fe4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B471fe4:L471fe4:{c.instructions+=1;NFSU2_TR(0x471fe4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x471fe9ull));
TAIL_STATIC(0x734e60u,734);
}
B471fe9:L471fe9:{c.instructions+=1;NFSU2_TR(0x471fe9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B471fef:L471fef:{c.instructions+=3;NFSU2_TR(0x471fef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B471ff5:{NFSU2_TR(0x471ff5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B471ff7:{NFSU2_TR(0x471ff7);
if(r1(R+518)){TAIL_STATIC(0x47202cu,472);}
}
B471ff9:L471ff9:{c.instructions+=3;NFSU2_TR(0x471ff9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B471ffb:{NFSU2_TR(0x471ffb);
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
B471ffd:{NFSU2_TR(0x471ffd);
if(r1(R+518)){TAIL_STATIC(0x472004u,472);}
}
B471fff:L471fff:{c.instructions+=1;NFSU2_TR(0x471fff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x472004ull));
TAIL_STATIC(0x735550u,735);
}
XIT:NFSU2_TR_EXIT(0x471,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
