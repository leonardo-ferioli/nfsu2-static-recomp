#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_431(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_48c(u8* __restrict R,Cpu& c);
u32 body_48d(u8* __restrict R,Cpu& c);
u32 body_48f(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_491(u8* __restrict R,Cpu& c);
u32 body_492(u8* __restrict R,Cpu& c);
u32 body_494(u8* __restrict R,Cpu& c);
u32 body_4cb(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_580(u8* __restrict R,Cpu& c);
u32 body_5bb(u8* __restrict R,Cpu& c);
u32 body_5cc(u8* __restrict R,Cpu& c);
u32 body_5ce(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x493,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x493,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_493(u8* __restrict R,Cpu& c);
u32 page_493(Cpu& c){return body_493(c.regs.data(),c);}
__attribute__((noinline)) u32 body_493(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x493004:goto L493004;
case 0x493007:c.instructions+=9;goto B493007;
case 0x493009:c.instructions+=8;goto B493009;
case 0x49300b:c.instructions+=7;goto B49300b;
case 0x493011:c.instructions+=6;goto B493011;
case 0x493015:c.instructions+=5;goto B493015;
case 0x493019:c.instructions+=4;goto B493019;
case 0x493021:c.instructions+=3;goto B493021;
case 0x493029:c.instructions+=2;goto B493029;
case 0x493031:c.instructions+=1;goto B493031;
case 0x493033:goto L493033;
case 0x493036:c.instructions+=2;goto B493036;
case 0x493038:c.instructions+=1;goto B493038;
case 0x49303a:goto L49303a;
case 0x49303d:c.instructions+=4;goto B49303d;
case 0x493043:c.instructions+=3;goto B493043;
case 0x493045:c.instructions+=2;goto B493045;
case 0x493048:c.instructions+=1;goto B493048;
case 0x49304a:goto L49304a;
case 0x49304d:c.instructions+=8;goto B49304d;
case 0x493050:c.instructions+=7;goto B493050;
case 0x493054:c.instructions+=6;goto B493054;
case 0x493057:c.instructions+=5;goto B493057;
case 0x49305a:c.instructions+=4;goto B49305a;
case 0x49305e:c.instructions+=3;goto B49305e;
case 0x493061:c.instructions+=2;goto B493061;
case 0x493064:c.instructions+=1;goto B493064;
case 0x493068:goto L493068;
case 0x49306a:c.instructions+=2;goto B49306a;
case 0x49306c:c.instructions+=1;goto B49306c;
case 0x493072:goto L493072;
case 0x493076:c.instructions+=6;goto B493076;
case 0x49307a:c.instructions+=5;goto B49307a;
case 0x49307c:c.instructions+=4;goto B49307c;
case 0x49307e:c.instructions+=3;goto B49307e;
case 0x493080:c.instructions+=2;goto B493080;
case 0x493084:c.instructions+=1;goto B493084;
case 0x49308a:goto L49308a;
case 0x49308e:c.instructions+=3;goto B49308e;
case 0x493090:c.instructions+=2;goto B493090;
case 0x493094:c.instructions+=1;goto B493094;
case 0x493096:goto L493096;
case 0x493098:c.instructions+=12;goto B493098;
case 0x493099:c.instructions+=11;goto B493099;
case 0x49309d:c.instructions+=10;goto B49309d;
case 0x49309f:c.instructions+=9;goto B49309f;
case 0x4930a3:c.instructions+=8;goto B4930a3;
case 0x4930a4:c.instructions+=7;goto B4930a4;
case 0x4930a8:c.instructions+=6;goto B4930a8;
case 0x4930ac:c.instructions+=5;goto B4930ac;
case 0x4930ae:c.instructions+=4;goto B4930ae;
case 0x4930b2:c.instructions+=3;goto B4930b2;
case 0x4930b4:c.instructions+=2;goto B4930b4;
case 0x4930b6:c.instructions+=1;goto B4930b6;
case 0x4930b8:goto L4930b8;
case 0x4930bc:c.instructions+=37;goto B4930bc;
case 0x4930c0:c.instructions+=36;goto B4930c0;
case 0x4930c4:c.instructions+=35;goto B4930c4;
case 0x4930c8:c.instructions+=34;goto B4930c8;
case 0x4930cc:c.instructions+=33;goto B4930cc;
case 0x4930d0:c.instructions+=32;goto B4930d0;
case 0x4930d4:c.instructions+=31;goto B4930d4;
case 0x4930da:c.instructions+=30;goto B4930da;
case 0x4930e2:c.instructions+=29;goto B4930e2;
case 0x4930e6:c.instructions+=28;goto B4930e6;
case 0x4930ea:c.instructions+=27;goto B4930ea;
case 0x4930ee:c.instructions+=26;goto B4930ee;
case 0x4930f2:c.instructions+=25;goto B4930f2;
case 0x4930f6:c.instructions+=24;goto B4930f6;
case 0x4930fc:c.instructions+=23;goto B4930fc;
case 0x4930ff:c.instructions+=22;goto B4930ff;
case 0x493103:c.instructions+=21;goto B493103;
case 0x493107:c.instructions+=20;goto B493107;
case 0x49310a:c.instructions+=19;goto B49310a;
case 0x493110:c.instructions+=18;goto B493110;
case 0x493114:c.instructions+=17;goto B493114;
case 0x493117:c.instructions+=16;goto B493117;
case 0x493119:c.instructions+=15;goto B493119;
case 0x49311d:c.instructions+=14;goto B49311d;
case 0x493121:c.instructions+=13;goto B493121;
case 0x493125:c.instructions+=12;goto B493125;
case 0x493129:c.instructions+=11;goto B493129;
case 0x49312f:c.instructions+=10;goto B49312f;
case 0x493131:c.instructions+=9;goto B493131;
case 0x493135:c.instructions+=8;goto B493135;
case 0x493139:c.instructions+=7;goto B493139;
case 0x49313f:c.instructions+=6;goto B49313f;
case 0x493141:c.instructions+=5;goto B493141;
case 0x493145:c.instructions+=4;goto B493145;
case 0x49314b:c.instructions+=3;goto B49314b;
case 0x49314d:c.instructions+=2;goto B49314d;
case 0x493150:c.instructions+=1;goto B493150;
case 0x493152:goto L493152;
case 0x49315a:goto L49315a;
case 0x49315e:c.instructions+=5;goto B49315e;
case 0x493166:c.instructions+=4;goto B493166;
case 0x49316c:c.instructions+=3;goto B49316c;
case 0x49316e:c.instructions+=2;goto B49316e;
case 0x493171:c.instructions+=1;goto B493171;
case 0x493173:goto L493173;
case 0x49317b:goto L49317b;
case 0x493181:c.instructions+=3;goto B493181;
case 0x493183:c.instructions+=2;goto B493183;
case 0x493186:c.instructions+=1;goto B493186;
case 0x493188:goto L493188;
case 0x49318e:c.instructions+=1;goto B49318e;
case 0x493190:goto L493190;
case 0x493196:goto L493196;
case 0x49319a:c.instructions+=33;goto B49319a;
case 0x49319e:c.instructions+=32;goto B49319e;
case 0x4931a2:c.instructions+=31;goto B4931a2;
case 0x4931a5:c.instructions+=30;goto B4931a5;
case 0x4931a7:c.instructions+=29;goto B4931a7;
case 0x4931ab:c.instructions+=28;goto B4931ab;
case 0x4931ae:c.instructions+=27;goto B4931ae;
case 0x4931b2:c.instructions+=26;goto B4931b2;
case 0x4931b6:c.instructions+=25;goto B4931b6;
case 0x4931ba:c.instructions+=24;goto B4931ba;
case 0x4931be:c.instructions+=23;goto B4931be;
case 0x4931c2:c.instructions+=22;goto B4931c2;
case 0x4931c6:c.instructions+=21;goto B4931c6;
case 0x4931c9:c.instructions+=20;goto B4931c9;
case 0x4931cd:c.instructions+=19;goto B4931cd;
case 0x4931d1:c.instructions+=18;goto B4931d1;
case 0x4931d5:c.instructions+=17;goto B4931d5;
case 0x4931d7:c.instructions+=16;goto B4931d7;
case 0x4931d9:c.instructions+=15;goto B4931d9;
case 0x4931dd:c.instructions+=14;goto B4931dd;
case 0x4931e1:c.instructions+=13;goto B4931e1;
case 0x4931e4:c.instructions+=12;goto B4931e4;
case 0x4931e6:c.instructions+=11;goto B4931e6;
case 0x4931ea:c.instructions+=10;goto B4931ea;
case 0x4931ed:c.instructions+=9;goto B4931ed;
case 0x4931f1:c.instructions+=8;goto B4931f1;
case 0x4931f5:c.instructions+=7;goto B4931f5;
case 0x4931f8:c.instructions+=6;goto B4931f8;
case 0x4931fc:c.instructions+=5;goto B4931fc;
case 0x4931fe:c.instructions+=4;goto B4931fe;
case 0x493201:c.instructions+=3;goto B493201;
case 0x493205:c.instructions+=2;goto B493205;
case 0x493209:c.instructions+=1;goto B493209;
case 0x49320b:goto L49320b;
case 0x49320f:c.instructions+=9;goto B49320f;
case 0x493213:c.instructions+=8;goto B493213;
case 0x493215:c.instructions+=7;goto B493215;
case 0x493219:c.instructions+=6;goto B493219;
case 0x49321d:c.instructions+=5;goto B49321d;
case 0x49321f:c.instructions+=4;goto B49321f;
case 0x493223:c.instructions+=3;goto B493223;
case 0x493227:c.instructions+=2;goto B493227;
case 0x49322b:c.instructions+=1;goto B49322b;
case 0x49322f:goto L49322f;
case 0x493231:c.instructions+=15;goto B493231;
case 0x493239:c.instructions+=14;goto B493239;
case 0x49323b:c.instructions+=13;goto B49323b;
case 0x49323f:c.instructions+=12;goto B49323f;
case 0x493243:c.instructions+=11;goto B493243;
case 0x493245:c.instructions+=10;goto B493245;
case 0x493249:c.instructions+=9;goto B493249;
case 0x49324d:c.instructions+=8;goto B49324d;
case 0x49324f:c.instructions+=7;goto B49324f;
case 0x493251:c.instructions+=6;goto B493251;
case 0x493253:c.instructions+=5;goto B493253;
case 0x493255:c.instructions+=4;goto B493255;
case 0x49325b:c.instructions+=3;goto B49325b;
case 0x49325d:c.instructions+=2;goto B49325d;
case 0x493260:c.instructions+=1;goto B493260;
case 0x493262:goto L493262;
case 0x493268:c.instructions+=2;goto B493268;
case 0x49326a:c.instructions+=1;goto B49326a;
case 0x49326e:goto L49326e;
case 0x493274:c.instructions+=2;goto B493274;
case 0x493278:c.instructions+=1;goto B493278;
case 0x49327d:goto L49327d;
case 0x49327f:c.instructions+=9;goto B49327f;
case 0x493282:c.instructions+=8;goto B493282;
case 0x493286:c.instructions+=7;goto B493286;
case 0x49328a:c.instructions+=6;goto B49328a;
case 0x49328d:c.instructions+=5;goto B49328d;
case 0x493290:c.instructions+=4;goto B493290;
case 0x493294:c.instructions+=3;goto B493294;
case 0x493298:c.instructions+=2;goto B493298;
case 0x49329e:c.instructions+=1;goto B49329e;
case 0x4932a3:goto L4932a3;
case 0x4932a7:c.instructions+=4;goto B4932a7;
case 0x4932ab:c.instructions+=3;goto B4932ab;
case 0x4932ae:c.instructions+=2;goto B4932ae;
case 0x4932b4:c.instructions+=1;goto B4932b4;
case 0x4932b9:goto L4932b9;
case 0x4932bd:c.instructions+=4;goto B4932bd;
case 0x4932bf:c.instructions+=3;goto B4932bf;
case 0x4932c2:c.instructions+=2;goto B4932c2;
case 0x4932c8:c.instructions+=1;goto B4932c8;
case 0x4932cd:goto L4932cd;
case 0x4932cf:c.instructions+=4;goto B4932cf;
case 0x4932d2:c.instructions+=3;goto B4932d2;
case 0x4932d6:c.instructions+=2;goto B4932d6;
case 0x4932d9:c.instructions+=1;goto B4932d9;
case 0x4932db:goto L4932db;
case 0x4932de:c.instructions+=8;goto B4932de;
case 0x4932e0:c.instructions+=7;goto B4932e0;
case 0x4932e3:c.instructions+=6;goto B4932e3;
case 0x4932e7:c.instructions+=5;goto B4932e7;
case 0x4932e9:c.instructions+=4;goto B4932e9;
case 0x4932ef:c.instructions+=3;goto B4932ef;
case 0x4932f0:c.instructions+=2;goto B4932f0;
case 0x4932f1:c.instructions+=1;goto B4932f1;
case 0x4932f6:goto L4932f6;
case 0x4932f9:goto L4932f9;
case 0x4932fd:c.instructions+=3;goto B4932fd;
case 0x4932ff:c.instructions+=2;goto B4932ff;
case 0x493301:c.instructions+=1;goto B493301;
case 0x493307:goto L493307;
case 0x493309:goto L493309;
case 0x49330d:c.instructions+=8;goto B49330d;
case 0x493311:c.instructions+=7;goto B493311;
case 0x493314:c.instructions+=6;goto B493314;
case 0x493317:c.instructions+=5;goto B493317;
case 0x493318:c.instructions+=4;goto B493318;
case 0x49331c:c.instructions+=3;goto B49331c;
case 0x493320:c.instructions+=2;goto B493320;
case 0x493324:c.instructions+=1;goto B493324;
case 0x49332a:goto L49332a;
case 0x49332c:c.instructions+=2;goto B49332c;
case 0x49332f:c.instructions+=1;goto B49332f;
case 0x493334:goto L493334;
case 0x493336:c.instructions+=7;goto B493336;
case 0x493338:c.instructions+=6;goto B493338;
case 0x49333a:c.instructions+=5;goto B49333a;
case 0x49333d:c.instructions+=4;goto B49333d;
case 0x493340:c.instructions+=3;goto B493340;
case 0x493342:c.instructions+=2;goto B493342;
case 0x493343:c.instructions+=1;goto B493343;
case 0x493345:goto L493345;
case 0x493347:c.instructions+=1;goto B493347;
case 0x493349:goto L493349;
case 0x49334c:c.instructions+=5;goto B49334c;
case 0x49334e:c.instructions+=4;goto B49334e;
case 0x493350:c.instructions+=3;goto B493350;
case 0x493353:c.instructions+=2;goto B493353;
case 0x493355:c.instructions+=1;goto B493355;
case 0x49335a:goto L49335a;
case 0x49335f:c.instructions+=3;goto B49335f;
case 0x493360:c.instructions+=2;goto B493360;
case 0x493361:c.instructions+=1;goto B493361;
case 0x493366:goto L493366;
case 0x493369:goto L493369;
case 0x49336d:c.instructions+=3;goto B49336d;
case 0x493371:c.instructions+=2;goto B493371;
case 0x493375:c.instructions+=1;goto B493375;
case 0x49337b:goto L49337b;
case 0x49337c:c.instructions+=5;goto B49337c;
case 0x49337d:c.instructions+=4;goto B49337d;
case 0x49337e:c.instructions+=3;goto B49337e;
case 0x493380:c.instructions+=2;goto B493380;
case 0x493381:c.instructions+=1;goto B493381;
case 0x493390:goto L493390;
case 0x493394:c.instructions+=21;goto B493394;
case 0x493396:c.instructions+=20;goto B493396;
case 0x493399:c.instructions+=19;goto B493399;
case 0x49339b:c.instructions+=18;goto B49339b;
case 0x49339e:c.instructions+=17;goto B49339e;
case 0x4933a0:c.instructions+=16;goto B4933a0;
case 0x4933a3:c.instructions+=15;goto B4933a3;
case 0x4933a6:c.instructions+=14;goto B4933a6;
case 0x4933a9:c.instructions+=13;goto B4933a9;
case 0x4933ac:c.instructions+=12;goto B4933ac;
case 0x4933b0:c.instructions+=11;goto B4933b0;
case 0x4933b2:c.instructions+=10;goto B4933b2;
case 0x4933b6:c.instructions+=9;goto B4933b6;
case 0x4933b9:c.instructions+=8;goto B4933b9;
case 0x4933bd:c.instructions+=7;goto B4933bd;
case 0x4933c0:c.instructions+=6;goto B4933c0;
case 0x4933c4:c.instructions+=5;goto B4933c4;
case 0x4933c7:c.instructions+=4;goto B4933c7;
case 0x4933cb:c.instructions+=3;goto B4933cb;
case 0x4933ce:c.instructions+=2;goto B4933ce;
case 0x4933d1:c.instructions+=1;goto B4933d1;
case 0x4933e0:goto L4933e0;
case 0x4933e3:c.instructions+=1;goto B4933e3;
case 0x4933f0:goto L4933f0;
case 0x4933f1:c.instructions+=6;goto B4933f1;
case 0x4933f2:c.instructions+=5;goto B4933f2;
case 0x4933f3:c.instructions+=4;goto B4933f3;
case 0x4933f7:c.instructions+=3;goto B4933f7;
case 0x4933f8:c.instructions+=2;goto B4933f8;
case 0x4933fa:c.instructions+=1;goto B4933fa;
case 0x4933ff:goto L4933ff;
case 0x493401:c.instructions+=1;goto B493401;
case 0x493403:goto L493403;
case 0x493409:c.instructions+=6;goto B493409;
case 0x49340a:c.instructions+=5;goto B49340a;
case 0x49340b:c.instructions+=4;goto B49340b;
case 0x493411:c.instructions+=3;goto B493411;
case 0x493412:c.instructions+=2;goto B493412;
case 0x493413:c.instructions+=1;goto B493413;
case 0x493416:goto L493416;
case 0x493417:c.instructions+=1;goto B493417;
case 0x49341c:goto L49341c;
case 0x49341f:c.instructions+=2;goto B49341f;
case 0x493424:c.instructions+=1;goto B493424;
case 0x493426:goto L493426;
case 0x493428:c.instructions+=3;goto B493428;
case 0x49342a:c.instructions+=2;goto B49342a;
case 0x49342b:c.instructions+=1;goto B49342b;
case 0x493430:goto L493430;
case 0x493432:c.instructions+=3;goto B493432;
case 0x493435:c.instructions+=2;goto B493435;
case 0x493437:c.instructions+=1;goto B493437;
case 0x493439:goto L493439;
case 0x49343a:c.instructions+=4;goto B49343a;
case 0x49343c:c.instructions+=3;goto B49343c;
case 0x49343d:c.instructions+=2;goto B49343d;
case 0x49343e:c.instructions+=1;goto B49343e;
case 0x493441:goto L493441;
case 0x493442:c.instructions+=2;goto B493442;
case 0x493443:c.instructions+=1;goto B493443;
case 0x493448:goto L493448;
case 0x49344a:c.instructions+=3;goto B49344a;
case 0x49344b:c.instructions+=2;goto B49344b;
case 0x49344f:c.instructions+=1;goto B49344f;
case 0x493454:goto L493454;
case 0x493457:c.instructions+=2;goto B493457;
case 0x49345a:c.instructions+=1;goto B49345a;
case 0x49345c:goto L49345c;
case 0x49345d:c.instructions+=5;goto B49345d;
case 0x49345e:c.instructions+=4;goto B49345e;
case 0x493460:c.instructions+=3;goto B493460;
case 0x493461:c.instructions+=2;goto B493461;
case 0x493462:c.instructions+=1;goto B493462;
case 0x493465:goto L493465;
case 0x493466:c.instructions+=3;goto B493466;
case 0x493468:c.instructions+=2;goto B493468;
case 0x49346a:c.instructions+=1;goto B49346a;
case 0x49346f:goto L49346f;
case 0x493473:c.instructions+=13;goto B493473;
case 0x493475:c.instructions+=12;goto B493475;
case 0x493477:c.instructions+=11;goto B493477;
case 0x493479:c.instructions+=10;goto B493479;
case 0x49347b:c.instructions+=9;goto B49347b;
case 0x49347e:c.instructions+=8;goto B49347e;
case 0x493481:c.instructions+=7;goto B493481;
case 0x493484:c.instructions+=6;goto B493484;
case 0x493488:c.instructions+=5;goto B493488;
case 0x49348b:c.instructions+=4;goto B49348b;
case 0x49348e:c.instructions+=3;goto B49348e;
case 0x493494:c.instructions+=2;goto B493494;
case 0x493495:c.instructions+=1;goto B493495;
case 0x49349a:goto L49349a;
case 0x49349e:c.instructions+=5;goto B49349e;
case 0x4934a0:c.instructions+=4;goto B4934a0;
case 0x4934a2:c.instructions+=3;goto B4934a2;
case 0x4934a7:c.instructions+=2;goto B4934a7;
case 0x4934a9:c.instructions+=1;goto B4934a9;
case 0x4934ab:goto L4934ab;
case 0x4934ad:goto L4934ad;
case 0x4934ae:c.instructions+=3;goto B4934ae;
case 0x4934b1:c.instructions+=2;goto B4934b1;
case 0x4934b2:c.instructions+=1;goto B4934b2;
case 0x4934b7:goto L4934b7;
case 0x4934bc:c.instructions+=19;goto B4934bc;
case 0x4934c3:c.instructions+=18;goto B4934c3;
case 0x4934ca:c.instructions+=17;goto B4934ca;
case 0x4934d4:c.instructions+=16;goto B4934d4;
case 0x4934de:c.instructions+=15;goto B4934de;
case 0x4934e4:c.instructions+=14;goto B4934e4;
case 0x4934e7:c.instructions+=13;goto B4934e7;
case 0x4934ea:c.instructions+=12;goto B4934ea;
case 0x4934ec:c.instructions+=11;goto B4934ec;
case 0x4934ef:c.instructions+=10;goto B4934ef;
case 0x4934f1:c.instructions+=9;goto B4934f1;
case 0x4934f5:c.instructions+=8;goto B4934f5;
case 0x4934f8:c.instructions+=7;goto B4934f8;
case 0x4934fb:c.instructions+=6;goto B4934fb;
case 0x4934fe:c.instructions+=5;goto B4934fe;
case 0x4934ff:c.instructions+=4;goto B4934ff;
case 0x493504:c.instructions+=3;goto B493504;
case 0x493507:c.instructions+=2;goto B493507;
case 0x49350b:c.instructions+=1;goto B49350b;
case 0x49350d:goto L49350d;
case 0x493515:goto L493515;
case 0x493519:c.instructions+=3;goto B493519;
case 0x49351e:c.instructions+=2;goto B49351e;
case 0x49351f:c.instructions+=1;goto B49351f;
case 0x493524:goto L493524;
case 0x493525:c.instructions+=11;goto B493525;
case 0x493526:c.instructions+=10;goto B493526;
case 0x49352c:c.instructions+=9;goto B49352c;
case 0x493530:c.instructions+=8;goto B493530;
case 0x493535:c.instructions+=7;goto B493535;
case 0x493536:c.instructions+=6;goto B493536;
case 0x493538:c.instructions+=5;goto B493538;
case 0x49353b:c.instructions+=4;goto B49353b;
case 0x493541:c.instructions+=3;goto B493541;
case 0x493542:c.instructions+=2;goto B493542;
case 0x493543:c.instructions+=1;goto B493543;
case 0x493548:goto L493548;
case 0x49354b:c.instructions+=7;goto B49354b;
case 0x49354c:c.instructions+=6;goto B49354c;
case 0x49354d:c.instructions+=5;goto B49354d;
case 0x49354f:c.instructions+=4;goto B49354f;
case 0x493550:c.instructions+=3;goto B493550;
case 0x493551:c.instructions+=2;goto B493551;
case 0x493552:c.instructions+=1;goto B493552;
case 0x493560:goto L493560;
case 0x493561:c.instructions+=6;goto B493561;
case 0x493565:c.instructions+=5;goto B493565;
case 0x493566:c.instructions+=4;goto B493566;
case 0x493567:c.instructions+=3;goto B493567;
case 0x493568:c.instructions+=2;goto B493568;
case 0x49356a:c.instructions+=1;goto B49356a;
case 0x49356f:goto L49356f;
case 0x493571:c.instructions+=2;goto B493571;
case 0x493573:c.instructions+=1;goto B493573;
case 0x493575:goto L493575;
case 0x493576:c.instructions+=3;goto B493576;
case 0x493577:c.instructions+=2;goto B493577;
case 0x493578:c.instructions+=1;goto B493578;
case 0x49357b:goto L49357b;
case 0x493581:c.instructions+=1;goto B493581;
case 0x493583:goto L493583;
case 0x493584:c.instructions+=3;goto B493584;
case 0x493586:c.instructions+=2;goto B493586;
case 0x49358d:c.instructions+=1;goto B49358d;
case 0x493592:goto L493592;
case 0x493593:c.instructions+=1;goto B493593;
case 0x493596:goto L493596;
case 0x493598:c.instructions+=7;goto B493598;
case 0x49359b:c.instructions+=6;goto B49359b;
case 0x49359d:c.instructions+=5;goto B49359d;
case 0x4935a0:c.instructions+=4;goto B4935a0;
case 0x4935a6:c.instructions+=3;goto B4935a6;
case 0x4935a9:c.instructions+=2;goto B4935a9;
case 0x4935ab:c.instructions+=1;goto B4935ab;
case 0x4935ad:goto L4935ad;
case 0x4935ae:c.instructions+=1;goto B4935ae;
case 0x4935b3:goto L4935b3;
case 0x4935b6:goto L4935b6;
case 0x4935bc:c.instructions+=2;goto B4935bc;
case 0x4935be:c.instructions+=1;goto B4935be;
case 0x4935c0:goto L4935c0;
case 0x4935c1:c.instructions+=1;goto B4935c1;
case 0x4935c6:goto L4935c6;
case 0x4935c9:goto L4935c9;
case 0x4935ce:c.instructions+=3;goto B4935ce;
case 0x4935cf:c.instructions+=2;goto B4935cf;
case 0x4935d0:c.instructions+=1;goto B4935d0;
case 0x4935d5:goto L4935d5;
case 0x4935d8:c.instructions+=6;goto B4935d8;
case 0x4935dc:c.instructions+=5;goto B4935dc;
case 0x4935df:c.instructions+=4;goto B4935df;
case 0x4935e0:c.instructions+=3;goto B4935e0;
case 0x4935e2:c.instructions+=2;goto B4935e2;
case 0x4935e5:c.instructions+=1;goto B4935e5;
case 0x4935e7:goto L4935e7;
case 0x4935eb:c.instructions+=2;goto B4935eb;
case 0x4935ec:c.instructions+=1;goto B4935ec;
case 0x4935ee:goto L4935ee;
case 0x4935f1:goto L4935f1;
case 0x4935f2:c.instructions+=4;goto B4935f2;
case 0x4935f3:c.instructions+=3;goto B4935f3;
case 0x4935f8:c.instructions+=2;goto B4935f8;
case 0x4935f9:c.instructions+=1;goto B4935f9;
case 0x493600:goto L493600;
case 0x493604:c.instructions+=8;goto B493604;
case 0x493605:c.instructions+=7;goto B493605;
case 0x493607:c.instructions+=6;goto B493607;
case 0x493609:c.instructions+=5;goto B493609;
case 0x49360b:c.instructions+=4;goto B49360b;
case 0x49360e:c.instructions+=3;goto B49360e;
case 0x493611:c.instructions+=2;goto B493611;
case 0x493614:c.instructions+=1;goto B493614;
case 0x493616:goto L493616;
case 0x49361b:c.instructions+=4;goto B49361b;
case 0x49361d:c.instructions+=3;goto B49361d;
case 0x493623:c.instructions+=2;goto B493623;
case 0x493626:c.instructions+=1;goto B493626;
case 0x49362c:goto L49362c;
case 0x49362f:c.instructions+=2;goto B49362f;
case 0x493631:c.instructions+=1;goto B493631;
case 0x493633:goto L493633;
case 0x493634:c.instructions+=2;goto B493634;
case 0x493635:c.instructions+=1;goto B493635;
case 0x49363a:goto L49363a;
case 0x49363d:c.instructions+=3;goto B49363d;
case 0x49363e:c.instructions+=2;goto B49363e;
case 0x493640:c.instructions+=1;goto B493640;
case 0x493645:goto L493645;
case 0x493646:c.instructions+=1;goto B493646;
case 0x493650:goto L493650;
case 0x493655:c.instructions+=4;goto B493655;
case 0x493657:c.instructions+=3;goto B493657;
case 0x493658:c.instructions+=2;goto B493658;
case 0x493659:c.instructions+=1;goto B493659;
case 0x49365b:goto L49365b;
case 0x49365f:c.instructions+=4;goto B49365f;
case 0x493665:c.instructions+=3;goto B493665;
case 0x49366b:c.instructions+=2;goto B49366b;
case 0x49366d:c.instructions+=1;goto B49366d;
case 0x493673:goto L493673;
case 0x493675:c.instructions+=14;goto B493675;
case 0x493677:c.instructions+=13;goto B493677;
case 0x49367a:c.instructions+=12;goto B49367a;
case 0x49367c:c.instructions+=11;goto B49367c;
case 0x49367f:c.instructions+=10;goto B49367f;
case 0x493685:c.instructions+=9;goto B493685;
case 0x493687:c.instructions+=8;goto B493687;
case 0x49368c:c.instructions+=7;goto B49368c;
case 0x49368f:c.instructions+=6;goto B49368f;
case 0x493695:c.instructions+=5;goto B493695;
case 0x49369b:c.instructions+=4;goto B49369b;
case 0x49369d:c.instructions+=3;goto B49369d;
case 0x4936a0:c.instructions+=2;goto B4936a0;
case 0x4936a2:c.instructions+=1;goto B4936a2;
case 0x4936a4:goto L4936a4;
case 0x4936a5:c.instructions+=2;goto B4936a5;
case 0x4936a6:c.instructions+=1;goto B4936a6;
case 0x4936a7:goto L4936a7;
case 0x4936a8:c.instructions+=1;goto B4936a8;
case 0x4936ad:goto L4936ad;
case 0x4936b1:c.instructions+=4;goto B4936b1;
case 0x4936b7:c.instructions+=3;goto B4936b7;
case 0x4936b9:c.instructions+=2;goto B4936b9;
case 0x4936bb:c.instructions+=1;goto B4936bb;
case 0x4936bd:goto L4936bd;
case 0x4936bf:c.instructions+=2;goto B4936bf;
case 0x4936c3:c.instructions+=1;goto B4936c3;
case 0x4936c5:goto L4936c5;
case 0x4936c8:c.instructions+=3;goto B4936c8;
case 0x4936c9:c.instructions+=2;goto B4936c9;
case 0x4936ca:c.instructions+=1;goto B4936ca;
case 0x4936cf:goto L4936cf;
case 0x4936d2:goto L4936d2;
case 0x4936d4:c.instructions+=1;goto B4936d4;
case 0x4936d6:goto L4936d6;
case 0x4936d8:c.instructions+=3;goto B4936d8;
case 0x4936db:c.instructions+=2;goto B4936db;
case 0x4936dd:c.instructions+=1;goto B4936dd;
case 0x4936df:goto L4936df;
case 0x4936e2:c.instructions+=1;goto B4936e2;
case 0x4936e4:goto L4936e4;
case 0x4936e6:c.instructions+=5;goto B4936e6;
case 0x4936e8:c.instructions+=4;goto B4936e8;
case 0x4936eb:c.instructions+=3;goto B4936eb;
case 0x4936ed:c.instructions+=2;goto B4936ed;
case 0x4936f0:c.instructions+=1;goto B4936f0;
case 0x4936f2:goto L4936f2;
case 0x4936f8:c.instructions+=6;goto B4936f8;
case 0x4936fe:c.instructions+=5;goto B4936fe;
case 0x493700:c.instructions+=4;goto B493700;
case 0x493703:c.instructions+=3;goto B493703;
case 0x493706:c.instructions+=2;goto B493706;
case 0x493708:c.instructions+=1;goto B493708;
case 0x49370a:goto L49370a;
case 0x493710:c.instructions+=4;goto B493710;
case 0x493712:c.instructions+=3;goto B493712;
case 0x493718:c.instructions+=2;goto B493718;
case 0x49371b:c.instructions+=1;goto B49371b;
case 0x493721:goto L493721;
case 0x493724:goto L493724;
case 0x493726:c.instructions+=1;goto B493726;
case 0x493728:goto L493728;
case 0x49372d:goto L49372d;
case 0x49372e:c.instructions+=2;goto B49372e;
case 0x49372f:c.instructions+=1;goto B49372f;
case 0x493734:goto L493734;
case 0x49373a:c.instructions+=6;goto B49373a;
case 0x49373c:c.instructions+=5;goto B49373c;
case 0x49373f:c.instructions+=4;goto B49373f;
case 0x493740:c.instructions+=3;goto B493740;
case 0x493742:c.instructions+=2;goto B493742;
case 0x493745:c.instructions+=1;goto B493745;
case 0x493747:goto L493747;
case 0x49374d:c.instructions+=1;goto B49374d;
case 0x49374f:goto L49374f;
case 0x493751:goto L493751;
case 0x493756:c.instructions+=10;goto B493756;
case 0x49375c:c.instructions+=9;goto B49375c;
case 0x493762:c.instructions+=8;goto B493762;
case 0x493763:c.instructions+=7;goto B493763;
case 0x493765:c.instructions+=6;goto B493765;
case 0x49376a:c.instructions+=5;goto B49376a;
case 0x493770:c.instructions+=4;goto B493770;
case 0x493772:c.instructions+=3;goto B493772;
case 0x493778:c.instructions+=2;goto B493778;
case 0x49377e:c.instructions+=1;goto B49377e;
case 0x493784:goto L493784;
case 0x493785:c.instructions+=2;goto B493785;
case 0x493786:c.instructions+=1;goto B493786;
case 0x493790:goto L493790;
case 0x493791:c.instructions+=6;goto B493791;
case 0x493792:c.instructions+=5;goto B493792;
case 0x493796:c.instructions+=4;goto B493796;
case 0x49379c:c.instructions+=3;goto B49379c;
case 0x4937a2:c.instructions+=2;goto B4937a2;
case 0x4937a4:c.instructions+=1;goto B4937a4;
case 0x4937a6:goto L4937a6;
case 0x4937a8:c.instructions+=6;goto B4937a8;
case 0x4937aa:c.instructions+=5;goto B4937aa;
case 0x4937ad:c.instructions+=4;goto B4937ad;
case 0x4937af:c.instructions+=3;goto B4937af;
case 0x4937b0:c.instructions+=2;goto B4937b0;
case 0x4937b3:c.instructions+=1;goto B4937b3;
case 0x4937b8:goto L4937b8;
case 0x4937ba:c.instructions+=3;goto B4937ba;
case 0x4937bd:c.instructions+=2;goto B4937bd;
case 0x4937bf:c.instructions+=1;goto B4937bf;
case 0x4937c1:goto L4937c1;
case 0x4937c7:c.instructions+=3;goto B4937c7;
case 0x4937cd:c.instructions+=2;goto B4937cd;
case 0x4937cf:c.instructions+=1;goto B4937cf;
case 0x4937d1:goto L4937d1;
case 0x4937d3:c.instructions+=6;goto B4937d3;
case 0x4937d5:c.instructions+=5;goto B4937d5;
case 0x4937d8:c.instructions+=4;goto B4937d8;
case 0x4937da:c.instructions+=3;goto B4937da;
case 0x4937db:c.instructions+=2;goto B4937db;
case 0x4937de:c.instructions+=1;goto B4937de;
case 0x4937e3:goto L4937e3;
case 0x4937e5:c.instructions+=3;goto B4937e5;
case 0x4937e8:c.instructions+=2;goto B4937e8;
case 0x4937ea:c.instructions+=1;goto B4937ea;
case 0x4937ec:goto L4937ec;
case 0x4937ee:c.instructions+=5;goto B4937ee;
case 0x4937f2:c.instructions+=4;goto B4937f2;
case 0x4937f6:c.instructions+=3;goto B4937f6;
case 0x4937f7:c.instructions+=2;goto B4937f7;
case 0x4937f8:c.instructions+=1;goto B4937f8;
case 0x493800:goto L493800;
case 0x493801:c.instructions+=4;goto B493801;
case 0x493802:c.instructions+=3;goto B493802;
case 0x493806:c.instructions+=2;goto B493806;
case 0x493807:c.instructions+=1;goto B493807;
case 0x49380c:goto L49380c;
case 0x49380f:c.instructions+=5;goto B49380f;
case 0x493811:c.instructions+=4;goto B493811;
case 0x493814:c.instructions+=3;goto B493814;
case 0x493816:c.instructions+=2;goto B493816;
case 0x49381a:c.instructions+=1;goto B49381a;
case 0x493820:goto L493820;
case 0x493821:c.instructions+=2;goto B493821;
case 0x493822:c.instructions+=1;goto B493822;
case 0x493823:goto L493823;
case 0x493826:c.instructions+=3;goto B493826;
case 0x49382a:c.instructions+=2;goto B49382a;
case 0x49382c:c.instructions+=1;goto B49382c;
case 0x493832:goto L493832;
case 0x493835:c.instructions+=4;goto B493835;
case 0x493837:c.instructions+=3;goto B493837;
case 0x493839:c.instructions+=2;goto B493839;
case 0x49383d:c.instructions+=1;goto B49383d;
case 0x493843:goto L493843;
case 0x493846:c.instructions+=4;goto B493846;
case 0x49384a:c.instructions+=3;goto B49384a;
case 0x49384d:c.instructions+=2;goto B49384d;
case 0x493853:c.instructions+=1;goto B493853;
case 0x493855:goto L493855;
case 0x49385b:c.instructions+=3;goto B49385b;
case 0x493861:c.instructions+=2;goto B493861;
case 0x493863:c.instructions+=1;goto B493863;
case 0x493865:goto L493865;
case 0x493868:goto L493868;
case 0x49386b:c.instructions+=2;goto B49386b;
case 0x49386e:c.instructions+=1;goto B49386e;
case 0x493870:goto L493870;
case 0x493872:c.instructions+=2;goto B493872;
case 0x493874:c.instructions+=1;goto B493874;
case 0x493876:goto L493876;
case 0x493877:c.instructions+=1;goto B493877;
case 0x49387c:goto L49387c;
case 0x493880:c.instructions+=1;goto B493880;
case 0x493882:goto L493882;
case 0x493888:c.instructions+=3;goto B493888;
case 0x49388e:c.instructions+=2;goto B49388e;
case 0x493890:c.instructions+=1;goto B493890;
case 0x493892:goto L493892;
case 0x493895:goto L493895;
case 0x493898:c.instructions+=1;goto B493898;
case 0x49389a:goto L49389a;
case 0x49389c:c.instructions+=2;goto B49389c;
case 0x49389e:c.instructions+=1;goto B49389e;
case 0x4938a0:goto L4938a0;
case 0x4938a3:c.instructions+=2;goto B4938a3;
case 0x4938a4:c.instructions+=1;goto B4938a4;
case 0x4938a9:goto L4938a9;
case 0x4938ad:goto L4938ad;
case 0x4938b1:c.instructions+=5;goto B4938b1;
case 0x4938b5:c.instructions+=4;goto B4938b5;
case 0x4938b6:c.instructions+=3;goto B4938b6;
case 0x4938b8:c.instructions+=2;goto B4938b8;
case 0x4938bc:c.instructions+=1;goto B4938bc;
case 0x4938be:goto L4938be;
case 0x4938c2:goto L4938c2;
case 0x4938c5:c.instructions+=4;goto B4938c5;
case 0x4938c6:c.instructions+=3;goto B4938c6;
case 0x4938c8:c.instructions+=2;goto B4938c8;
case 0x4938cc:c.instructions+=1;goto B4938cc;
case 0x4938d2:goto L4938d2;
case 0x4938d3:c.instructions+=2;goto B4938d3;
case 0x4938d4:c.instructions+=1;goto B4938d4;
case 0x4938d5:goto L4938d5;
case 0x4938d6:c.instructions+=2;goto B4938d6;
case 0x4938d7:c.instructions+=1;goto B4938d7;
case 0x4938e0:goto L4938e0;
case 0x4938e3:c.instructions+=5;goto B4938e3;
case 0x4938e4:c.instructions+=4;goto B4938e4;
case 0x4938e5:c.instructions+=3;goto B4938e5;
case 0x4938eb:c.instructions+=2;goto B4938eb;
case 0x4938f0:c.instructions+=1;goto B4938f0;
case 0x4938f5:goto L4938f5;
case 0x4938f7:c.instructions+=3;goto B4938f7;
case 0x4938f9:c.instructions+=2;goto B4938f9;
case 0x4938fd:c.instructions+=1;goto B4938fd;
case 0x493903:goto L493903;
case 0x493904:c.instructions+=3;goto B493904;
case 0x493908:c.instructions+=2;goto B493908;
case 0x493909:c.instructions+=1;goto B493909;
case 0x493910:goto L493910;
case 0x493915:c.instructions+=1;goto B493915;
case 0x493917:goto L493917;
case 0x493918:c.instructions+=1;goto B493918;
case 0x49391d:goto L49391d;
case 0x493920:goto L493920;
case 0x493926:c.instructions+=3;goto B493926;
case 0x49392c:c.instructions+=2;goto B49392c;
case 0x49392e:c.instructions+=1;goto B49392e;
case 0x493930:goto L493930;
case 0x493933:c.instructions+=1;goto B493933;
case 0x493935:goto L493935;
case 0x493937:c.instructions+=2;goto B493937;
case 0x493939:c.instructions+=1;goto B493939;
case 0x49393b:goto L49393b;
case 0x49393d:goto L49393d;
case 0x493940:c.instructions+=4;goto B493940;
case 0x493942:c.instructions+=3;goto B493942;
case 0x493944:c.instructions+=2;goto B493944;
case 0x493948:c.instructions+=1;goto B493948;
case 0x49394a:goto L49394a;
case 0x493950:goto L493950;
case 0x493953:c.instructions+=3;goto B493953;
case 0x493957:c.instructions+=2;goto B493957;
case 0x493959:c.instructions+=1;goto B493959;
case 0x49395b:goto L49395b;
case 0x49395e:c.instructions+=3;goto B49395e;
case 0x493960:c.instructions+=2;goto B493960;
case 0x493962:c.instructions+=1;goto B493962;
case 0x493964:goto L493964;
case 0x493967:c.instructions+=4;goto B493967;
case 0x49396b:c.instructions+=3;goto B49396b;
case 0x49396e:c.instructions+=2;goto B49396e;
case 0x493971:c.instructions+=1;goto B493971;
case 0x493973:goto L493973;
case 0x493979:c.instructions+=2;goto B493979;
case 0x49397b:c.instructions+=1;goto B49397b;
case 0x49397e:goto L49397e;
case 0x493982:c.instructions+=3;goto B493982;
case 0x493983:c.instructions+=2;goto B493983;
case 0x493985:c.instructions+=1;goto B493985;
case 0x493987:goto L493987;
case 0x49398b:goto L49398b;
case 0x49398e:c.instructions+=4;goto B49398e;
case 0x49398f:c.instructions+=3;goto B49398f;
case 0x493991:c.instructions+=2;goto B493991;
case 0x493995:c.instructions+=1;goto B493995;
case 0x493997:goto L493997;
case 0x49399b:goto L49399b;
case 0x49399d:c.instructions+=2;goto B49399d;
case 0x49399f:c.instructions+=1;goto B49399f;
case 0x4939a5:goto L4939a5;
case 0x4939a6:c.instructions+=1;goto B4939a6;
case 0x4939a7:goto L4939a7;
case 0x4939a8:c.instructions+=3;goto B4939a8;
case 0x4939a9:c.instructions+=2;goto B4939a9;
case 0x4939ac:c.instructions+=1;goto B4939ac;
case 0x4939b0:goto L4939b0;
case 0x4939b4:c.instructions+=8;goto B4939b4;
case 0x4939b7:c.instructions+=7;goto B4939b7;
case 0x4939b8:c.instructions+=6;goto B4939b8;
case 0x4939b9:c.instructions+=5;goto B4939b9;
case 0x4939ba:c.instructions+=4;goto B4939ba;
case 0x4939bc:c.instructions+=3;goto B4939bc;
case 0x4939c1:c.instructions+=2;goto B4939c1;
case 0x4939c2:c.instructions+=1;goto B4939c2;
case 0x4939c8:goto L4939c8;
case 0x4939ca:c.instructions+=1;goto B4939ca;
case 0x4939d0:goto L4939d0;
case 0x4939d6:c.instructions+=2;goto B4939d6;
case 0x4939db:c.instructions+=1;goto B4939db;
case 0x4939e0:goto L4939e0;
case 0x4939e2:c.instructions+=2;goto B4939e2;
case 0x4939e6:c.instructions+=1;goto B4939e6;
case 0x4939ec:goto L4939ec;
case 0x4939f0:goto L4939f0;
case 0x4939f5:c.instructions+=1;goto B4939f5;
case 0x4939f7:goto L4939f7;
case 0x4939f8:c.instructions+=1;goto B4939f8;
case 0x4939fd:goto L4939fd;
case 0x493a00:goto L493a00;
case 0x493a06:c.instructions+=4;goto B493a06;
case 0x493a0c:c.instructions+=3;goto B493a0c;
case 0x493a0e:c.instructions+=2;goto B493a0e;
case 0x493a13:c.instructions+=1;goto B493a13;
case 0x493a19:goto L493a19;
case 0x493a20:goto L493a20;
case 0x493a22:c.instructions+=5;goto B493a22;
case 0x493a25:c.instructions+=4;goto B493a25;
case 0x493a28:c.instructions+=3;goto B493a28;
case 0x493a2c:c.instructions+=2;goto B493a2c;
case 0x493a32:c.instructions+=1;goto B493a32;
case 0x493a34:goto L493a34;
case 0x493a3a:c.instructions+=1;goto B493a3a;
case 0x493a3c:goto L493a3c;
case 0x493a3e:c.instructions+=3;goto B493a3e;
case 0x493a3f:c.instructions+=2;goto B493a3f;
case 0x493a43:c.instructions+=1;goto B493a43;
case 0x493a48:goto L493a48;
case 0x493a4a:c.instructions+=1;goto B493a4a;
case 0x493a4c:goto L493a4c;
case 0x493a50:c.instructions+=1;goto B493a50;
case 0x493a52:goto L493a52;
case 0x493a54:goto L493a54;
case 0x493a56:goto L493a56;
case 0x493a59:c.instructions+=1;goto B493a59;
case 0x493a5b:goto L493a5b;
case 0x493a5d:c.instructions+=5;goto B493a5d;
case 0x493a60:c.instructions+=4;goto B493a60;
case 0x493a62:c.instructions+=3;goto B493a62;
case 0x493a63:c.instructions+=2;goto B493a63;
case 0x493a66:c.instructions+=1;goto B493a66;
case 0x493a6b:goto L493a6b;
case 0x493a6e:c.instructions+=2;goto B493a6e;
case 0x493a72:c.instructions+=1;goto B493a72;
case 0x493a77:goto L493a77;
case 0x493a7b:c.instructions+=3;goto B493a7b;
case 0x493a81:c.instructions+=2;goto B493a81;
case 0x493a83:c.instructions+=1;goto B493a83;
case 0x493a85:goto L493a85;
case 0x493a89:c.instructions+=2;goto B493a89;
case 0x493a8b:c.instructions+=1;goto B493a8b;
case 0x493a8d:goto L493a8d;
case 0x493a93:c.instructions+=3;goto B493a93;
case 0x493a99:c.instructions+=2;goto B493a99;
case 0x493a9b:c.instructions+=1;goto B493a9b;
case 0x493a9d:goto L493a9d;
case 0x493aa0:goto L493aa0;
case 0x493aa4:c.instructions+=2;goto B493aa4;
case 0x493aa7:c.instructions+=1;goto B493aa7;
case 0x493aa9:goto L493aa9;
case 0x493aab:c.instructions+=2;goto B493aab;
case 0x493aad:c.instructions+=1;goto B493aad;
case 0x493aaf:goto L493aaf;
case 0x493ab1:goto L493ab1;
case 0x493ab5:goto L493ab5;
case 0x493ab6:c.instructions+=1;goto B493ab6;
case 0x493abb:goto L493abb;
case 0x493abf:goto L493abf;
case 0x493ac2:c.instructions+=3;goto B493ac2;
case 0x493ac4:c.instructions+=2;goto B493ac4;
case 0x493ac6:c.instructions+=1;goto B493ac6;
case 0x493ac8:goto L493ac8;
case 0x493ad0:goto L493ad0;
case 0x493ad3:c.instructions+=3;goto B493ad3;
case 0x493ad7:c.instructions+=2;goto B493ad7;
case 0x493ad9:c.instructions+=1;goto B493ad9;
case 0x493adb:goto L493adb;
case 0x493adc:c.instructions+=1;goto B493adc;
case 0x493ae1:goto L493ae1;
case 0x493ae4:c.instructions+=3;goto B493ae4;
case 0x493ae5:c.instructions+=2;goto B493ae5;
case 0x493ae7:c.instructions+=1;goto B493ae7;
case 0x493ae9:goto L493ae9;
case 0x493aeb:c.instructions+=2;goto B493aeb;
case 0x493aef:c.instructions+=1;goto B493aef;
case 0x493af5:goto L493af5;
case 0x493af6:c.instructions+=5;goto B493af6;
case 0x493af7:c.instructions+=4;goto B493af7;
case 0x493af8:c.instructions+=3;goto B493af8;
case 0x493af9:c.instructions+=2;goto B493af9;
case 0x493afc:c.instructions+=1;goto B493afc;
case 0x493afd:goto L493afd;
case 0x493aff:c.instructions+=1;goto B493aff;
case 0x493b01:goto L493b01;
case 0x493b05:c.instructions+=2;goto B493b05;
case 0x493b06:c.instructions+=1;goto B493b06;
case 0x493b0b:goto L493b0b;
case 0x493b0e:c.instructions+=6;goto B493b0e;
case 0x493b0f:c.instructions+=5;goto B493b0f;
case 0x493b10:c.instructions+=4;goto B493b10;
case 0x493b11:c.instructions+=3;goto B493b11;
case 0x493b12:c.instructions+=2;goto B493b12;
case 0x493b15:c.instructions+=1;goto B493b15;
case 0x493b16:goto L493b16;
case 0x493b1c:c.instructions+=2;goto B493b1c;
case 0x493b21:c.instructions+=1;goto B493b21;
case 0x493b26:goto L493b26;
case 0x493b28:c.instructions+=2;goto B493b28;
case 0x493b2c:c.instructions+=1;goto B493b2c;
case 0x493b2e:goto L493b2e;
case 0x493b32:goto L493b32;
case 0x493b37:c.instructions+=1;goto B493b37;
case 0x493b39:goto L493b39;
case 0x493b3a:c.instructions+=1;goto B493b3a;
case 0x493b3f:goto L493b3f;
case 0x493b42:goto L493b42;
case 0x493b48:c.instructions+=3;goto B493b48;
case 0x493b4e:c.instructions+=2;goto B493b4e;
case 0x493b50:c.instructions+=1;goto B493b50;
case 0x493b52:goto L493b52;
case 0x493b55:c.instructions+=1;goto B493b55;
case 0x493b57:goto L493b57;
case 0x493b59:c.instructions+=2;goto B493b59;
case 0x493b5b:c.instructions+=1;goto B493b5b;
case 0x493b5d:goto L493b5d;
case 0x493b5f:goto L493b5f;
case 0x493b62:c.instructions+=4;goto B493b62;
case 0x493b64:c.instructions+=3;goto B493b64;
case 0x493b66:c.instructions+=2;goto B493b66;
case 0x493b68:c.instructions+=1;goto B493b68;
case 0x493b6a:goto L493b6a;
case 0x493b70:goto L493b70;
case 0x493b73:c.instructions+=3;goto B493b73;
case 0x493b77:c.instructions+=2;goto B493b77;
case 0x493b79:c.instructions+=1;goto B493b79;
case 0x493b7b:goto L493b7b;
case 0x493b7c:c.instructions+=1;goto B493b7c;
case 0x493b81:goto L493b81;
case 0x493b83:c.instructions+=1;goto B493b83;
case 0x493b85:goto L493b85;
case 0x493b87:goto L493b87;
case 0x493b8a:c.instructions+=3;goto B493b8a;
case 0x493b8b:c.instructions+=2;goto B493b8b;
case 0x493b8d:c.instructions+=1;goto B493b8d;
case 0x493b8f:goto L493b8f;
case 0x493b91:c.instructions+=1;goto B493b91;
case 0x493b93:goto L493b93;
case 0x493b94:c.instructions+=1;goto B493b94;
case 0x493b99:goto L493b99;
case 0x493b9c:goto L493b9c;
case 0x493b9e:c.instructions+=2;goto B493b9e;
case 0x493ba2:c.instructions+=1;goto B493ba2;
case 0x493ba4:goto L493ba4;
case 0x493ba5:c.instructions+=5;goto B493ba5;
case 0x493ba6:c.instructions+=4;goto B493ba6;
case 0x493ba7:c.instructions+=3;goto B493ba7;
case 0x493ba8:c.instructions+=2;goto B493ba8;
case 0x493bab:c.instructions+=1;goto B493bab;
case 0x493bb0:goto L493bb0;
case 0x493bb1:c.instructions+=3;goto B493bb1;
case 0x493bb5:c.instructions+=2;goto B493bb5;
case 0x493bbb:c.instructions+=1;goto B493bbb;
case 0x493bbd:goto L493bbd;
case 0x493bbf:c.instructions+=2;goto B493bbf;
case 0x493bc0:c.instructions+=1;goto B493bc0;
case 0x493bc1:goto L493bc1;
case 0x493bc4:c.instructions+=11;goto B493bc4;
case 0x493bc5:c.instructions+=10;goto B493bc5;
case 0x493bc6:c.instructions+=9;goto B493bc6;
case 0x493bc7:c.instructions+=8;goto B493bc7;
case 0x493bc8:c.instructions+=7;goto B493bc8;
case 0x493bcb:c.instructions+=6;goto B493bcb;
case 0x493bcf:c.instructions+=5;goto B493bcf;
case 0x493bd1:c.instructions+=4;goto B493bd1;
case 0x493bd3:c.instructions+=3;goto B493bd3;
case 0x493bd5:c.instructions+=2;goto B493bd5;
case 0x493bdd:c.instructions+=1;goto B493bdd;
case 0x493be3:goto L493be3;
case 0x493be5:c.instructions+=2;goto B493be5;
case 0x493bea:c.instructions+=1;goto B493bea;
case 0x493bec:goto L493bec;
case 0x493bef:c.instructions+=5;goto B493bef;
case 0x493bf2:c.instructions+=4;goto B493bf2;
case 0x493bf8:c.instructions+=3;goto B493bf8;
case 0x493bfa:c.instructions+=2;goto B493bfa;
case 0x493bfd:c.instructions+=1;goto B493bfd;
case 0x493c02:goto L493c02;
case 0x493c07:c.instructions+=1;goto B493c07;
case 0x493c09:goto L493c09;
case 0x493c0c:c.instructions+=2;goto B493c0c;
case 0x493c0f:c.instructions+=1;goto B493c0f;
case 0x493c14:goto L493c14;
case 0x493c19:c.instructions+=1;goto B493c19;
case 0x493c1b:goto L493c1b;
case 0x493c1e:c.instructions+=2;goto B493c1e;
case 0x493c21:c.instructions+=1;goto B493c21;
case 0x493c26:goto L493c26;
case 0x493c2b:c.instructions+=1;goto B493c2b;
case 0x493c2d:goto L493c2d;
case 0x493c30:c.instructions+=4;goto B493c30;
case 0x493c36:c.instructions+=3;goto B493c36;
case 0x493c39:c.instructions+=2;goto B493c39;
case 0x493c3f:c.instructions+=1;goto B493c3f;
case 0x493c44:goto L493c44;
case 0x493c49:c.instructions+=1;goto B493c49;
case 0x493c4b:goto L493c4b;
case 0x493c51:c.instructions+=9;goto B493c51;
case 0x493c54:c.instructions+=8;goto B493c54;
case 0x493c56:c.instructions+=7;goto B493c56;
case 0x493c59:c.instructions+=6;goto B493c59;
case 0x493c5f:c.instructions+=5;goto B493c5f;
case 0x493c62:c.instructions+=4;goto B493c62;
case 0x493c66:c.instructions+=3;goto B493c66;
case 0x493c69:c.instructions+=2;goto B493c69;
case 0x493c6f:c.instructions+=1;goto B493c6f;
case 0x493c74:goto L493c74;
case 0x493c79:c.instructions+=1;goto B493c79;
case 0x493c7b:goto L493c7b;
case 0x493c81:c.instructions+=10;goto B493c81;
case 0x493c84:c.instructions+=9;goto B493c84;
case 0x493c87:c.instructions+=8;goto B493c87;
case 0x493c8d:c.instructions+=7;goto B493c8d;
case 0x493c92:c.instructions+=6;goto B493c92;
case 0x493c95:c.instructions+=5;goto B493c95;
case 0x493c98:c.instructions+=4;goto B493c98;
case 0x493c9c:c.instructions+=3;goto B493c9c;
case 0x493c9f:c.instructions+=2;goto B493c9f;
case 0x493ca5:c.instructions+=1;goto B493ca5;
case 0x493ca7:goto L493ca7;
case 0x493cac:c.instructions+=1;goto B493cac;
case 0x493cae:goto L493cae;
case 0x493cb1:c.instructions+=4;goto B493cb1;
case 0x493cb7:c.instructions+=3;goto B493cb7;
case 0x493cba:c.instructions+=2;goto B493cba;
case 0x493cc0:c.instructions+=1;goto B493cc0;
case 0x493cc2:goto L493cc2;
case 0x493cc7:c.instructions+=1;goto B493cc7;
case 0x493cc9:goto L493cc9;
case 0x493ccc:c.instructions+=12;goto B493ccc;
case 0x493cce:c.instructions+=11;goto B493cce;
case 0x493cd1:c.instructions+=10;goto B493cd1;
case 0x493cd7:c.instructions+=9;goto B493cd7;
case 0x493cda:c.instructions+=8;goto B493cda;
case 0x493cdd:c.instructions+=7;goto B493cdd;
case 0x493cdf:c.instructions+=6;goto B493cdf;
case 0x493ce3:c.instructions+=5;goto B493ce3;
case 0x493ce8:c.instructions+=4;goto B493ce8;
case 0x493cea:c.instructions+=3;goto B493cea;
case 0x493ced:c.instructions+=2;goto B493ced;
case 0x493cf0:c.instructions+=1;goto B493cf0;
case 0x493cf2:goto L493cf2;
case 0x493cf7:c.instructions+=1;goto B493cf7;
case 0x493cf9:goto L493cf9;
case 0x493cfa:c.instructions+=2;goto B493cfa;
case 0x493cfc:c.instructions+=1;goto B493cfc;
case 0x493d01:goto L493d01;
case 0x493d03:c.instructions+=1;goto B493d03;
case 0x493d05:goto L493d05;
case 0x493d09:goto L493d09;
case 0x493d0c:c.instructions+=3;goto B493d0c;
case 0x493d10:c.instructions+=2;goto B493d10;
case 0x493d12:c.instructions+=1;goto B493d12;
case 0x493d18:goto L493d18;
case 0x493d1a:c.instructions+=1;goto B493d1a;
case 0x493d1c:goto L493d1c;
case 0x493d20:goto L493d20;
case 0x493d24:c.instructions+=3;goto B493d24;
case 0x493d26:c.instructions+=2;goto B493d26;
case 0x493d2c:c.instructions+=1;goto B493d2c;
case 0x493d31:goto L493d31;
case 0x493d35:c.instructions+=3;goto B493d35;
case 0x493d37:c.instructions+=2;goto B493d37;
case 0x493d3a:c.instructions+=1;goto B493d3a;
case 0x493d3c:goto L493d3c;
case 0x493d41:c.instructions+=1;goto B493d41;
case 0x493d46:goto L493d46;
case 0x493d4c:c.instructions+=2;goto B493d4c;
case 0x493d4e:c.instructions+=1;goto B493d4e;
case 0x493d50:goto L493d50;
case 0x493d53:c.instructions+=1;goto B493d53;
case 0x493d55:goto L493d55;
case 0x493d57:goto L493d57;
case 0x493d59:c.instructions+=1;goto B493d59;
case 0x493d5b:goto L493d5b;
case 0x493d5e:c.instructions+=1;goto B493d5e;
case 0x493d60:goto L493d60;
case 0x493d63:c.instructions+=1;goto B493d63;
case 0x493d65:goto L493d65;
case 0x493d68:c.instructions+=2;goto B493d68;
case 0x493d6a:c.instructions+=1;goto B493d6a;
case 0x493d6c:goto L493d6c;
case 0x493d6f:c.instructions+=1;goto B493d6f;
case 0x493d71:goto L493d71;
case 0x493d73:goto L493d73;
case 0x493d75:c.instructions+=1;goto B493d75;
case 0x493d77:goto L493d77;
case 0x493d7d:goto L493d7d;
case 0x493d80:c.instructions+=3;goto B493d80;
case 0x493d83:c.instructions+=2;goto B493d83;
case 0x493d84:c.instructions+=1;goto B493d84;
case 0x493d86:goto L493d86;
case 0x493d8b:c.instructions+=2;goto B493d8b;
case 0x493d8d:c.instructions+=1;goto B493d8d;
case 0x493d8f:goto L493d8f;
case 0x493d93:c.instructions+=1;goto B493d93;
case 0x493d95:goto L493d95;
case 0x493d98:c.instructions+=3;goto B493d98;
case 0x493d9a:c.instructions+=2;goto B493d9a;
case 0x493d9b:c.instructions+=1;goto B493d9b;
case 0x493da0:goto L493da0;
case 0x493da3:c.instructions+=2;goto B493da3;
case 0x493da5:c.instructions+=1;goto B493da5;
case 0x493da7:goto L493da7;
case 0x493dac:c.instructions+=5;goto B493dac;
case 0x493db0:c.instructions+=4;goto B493db0;
case 0x493db4:c.instructions+=3;goto B493db4;
case 0x493dba:c.instructions+=2;goto B493dba;
case 0x493dbc:c.instructions+=1;goto B493dbc;
case 0x493dbe:goto L493dbe;
case 0x493dc3:c.instructions+=5;goto B493dc3;
case 0x493dc7:c.instructions+=4;goto B493dc7;
case 0x493dcb:c.instructions+=3;goto B493dcb;
case 0x493dce:c.instructions+=2;goto B493dce;
case 0x493dcf:c.instructions+=1;goto B493dcf;
case 0x493dd4:goto L493dd4;
case 0x493dd7:goto L493dd7;
case 0x493dd9:c.instructions+=1;goto B493dd9;
case 0x493dde:goto L493dde;
case 0x493de0:c.instructions+=1;goto B493de0;
case 0x493de2:goto L493de2;
case 0x493de4:c.instructions+=1;goto B493de4;
case 0x493de6:goto L493de6;
case 0x493dea:goto L493dea;
case 0x493ded:c.instructions+=8;goto B493ded;
case 0x493df0:c.instructions+=7;goto B493df0;
case 0x493df3:c.instructions+=6;goto B493df3;
case 0x493df5:c.instructions+=5;goto B493df5;
case 0x493df7:c.instructions+=4;goto B493df7;
case 0x493df8:c.instructions+=3;goto B493df8;
case 0x493df9:c.instructions+=2;goto B493df9;
case 0x493dfa:c.instructions+=1;goto B493dfa;
case 0x493dff:goto L493dff;
case 0x493e02:c.instructions+=2;goto B493e02;
case 0x493e04:c.instructions+=1;goto B493e04;
case 0x493e06:goto L493e06;
case 0x493e08:c.instructions+=1;goto B493e08;
case 0x493e0a:goto L493e0a;
case 0x493e0d:goto L493e0d;
case 0x493e13:c.instructions+=13;goto B493e13;
case 0x493e16:c.instructions+=12;goto B493e16;
case 0x493e18:c.instructions+=11;goto B493e18;
case 0x493e1d:c.instructions+=10;goto B493e1d;
case 0x493e20:c.instructions+=9;goto B493e20;
case 0x493e26:c.instructions+=8;goto B493e26;
case 0x493e29:c.instructions+=7;goto B493e29;
case 0x493e2f:c.instructions+=6;goto B493e2f;
case 0x493e34:c.instructions+=5;goto B493e34;
case 0x493e35:c.instructions+=4;goto B493e35;
case 0x493e3a:c.instructions+=3;goto B493e3a;
case 0x493e40:c.instructions+=2;goto B493e40;
case 0x493e42:c.instructions+=1;goto B493e42;
case 0x493e44:goto L493e44;
case 0x493e46:c.instructions+=1;goto B493e46;
case 0x493e48:goto L493e48;
case 0x493e4f:goto L493e4f;
case 0x493e55:c.instructions+=5;goto B493e55;
case 0x493e58:c.instructions+=4;goto B493e58;
case 0x493e5a:c.instructions+=3;goto B493e5a;
case 0x493e5f:c.instructions+=2;goto B493e5f;
case 0x493e62:c.instructions+=1;goto B493e62;
case 0x493e68:goto L493e68;
case 0x493e6e:c.instructions+=15;goto B493e6e;
case 0x493e74:c.instructions+=14;goto B493e74;
case 0x493e75:c.instructions+=13;goto B493e75;
case 0x493e7b:c.instructions+=12;goto B493e7b;
case 0x493e7f:c.instructions+=11;goto B493e7f;
case 0x493e89:c.instructions+=10;goto B493e89;
case 0x493e8c:c.instructions+=9;goto B493e8c;
case 0x493e8e:c.instructions+=8;goto B493e8e;
case 0x493e90:c.instructions+=7;goto B493e90;
case 0x493e91:c.instructions+=6;goto B493e91;
case 0x493e92:c.instructions+=5;goto B493e92;
case 0x493e93:c.instructions+=4;goto B493e93;
case 0x493e99:c.instructions+=3;goto B493e99;
case 0x493e9a:c.instructions+=2;goto B493e9a;
case 0x493e9b:c.instructions+=1;goto B493e9b;
case 0x493ea0:goto L493ea0;
case 0x493ea4:c.instructions+=2;goto B493ea4;
case 0x493eaa:c.instructions+=1;goto B493eaa;
case 0x493eac:goto L493eac;
case 0x493eae:c.instructions+=1;goto B493eae;
case 0x493eaf:goto L493eaf;
case 0x493eb2:c.instructions+=8;goto B493eb2;
case 0x493eb3:c.instructions+=7;goto B493eb3;
case 0x493eb4:c.instructions+=6;goto B493eb4;
case 0x493eb5:c.instructions+=5;goto B493eb5;
case 0x493eb8:c.instructions+=4;goto B493eb8;
case 0x493ebc:c.instructions+=3;goto B493ebc;
case 0x493ebe:c.instructions+=2;goto B493ebe;
case 0x493ec0:c.instructions+=1;goto B493ec0;
case 0x493ec2:goto L493ec2;
case 0x493ec4:c.instructions+=2;goto B493ec4;
case 0x493ec9:c.instructions+=1;goto B493ec9;
case 0x493ecb:goto L493ecb;
case 0x493ece:c.instructions+=6;goto B493ece;
case 0x493ed1:c.instructions+=5;goto B493ed1;
case 0x493ed4:c.instructions+=4;goto B493ed4;
case 0x493ed6:c.instructions+=3;goto B493ed6;
case 0x493ed7:c.instructions+=2;goto B493ed7;
case 0x493eda:c.instructions+=1;goto B493eda;
case 0x493edf:goto L493edf;
case 0x493ee4:c.instructions+=4;goto B493ee4;
case 0x493ee7:c.instructions+=3;goto B493ee7;
case 0x493ee8:c.instructions+=2;goto B493ee8;
case 0x493eed:c.instructions+=1;goto B493eed;
case 0x493eef:goto L493eef;
case 0x493ef4:c.instructions+=1;goto B493ef4;
case 0x493ef6:goto L493ef6;
case 0x493efb:c.instructions+=1;goto B493efb;
case 0x493efd:goto L493efd;
case 0x493f02:c.instructions+=1;goto B493f02;
case 0x493f04:goto L493f04;
case 0x493f05:c.instructions+=1;goto B493f05;
case 0x493f0a:goto L493f0a;
case 0x493f0d:goto L493f0d;
case 0x493f10:c.instructions+=3;goto B493f10;
case 0x493f14:c.instructions+=2;goto B493f14;
case 0x493f16:c.instructions+=1;goto B493f16;
case 0x493f18:goto L493f18;
case 0x493f1a:c.instructions+=4;goto B493f1a;
case 0x493f1b:c.instructions+=3;goto B493f1b;
case 0x493f1c:c.instructions+=2;goto B493f1c;
case 0x493f1d:c.instructions+=1;goto B493f1d;
case 0x493f20:goto L493f20;
case 0x493f21:c.instructions+=3;goto B493f21;
case 0x493f25:c.instructions+=2;goto B493f25;
case 0x493f2b:c.instructions+=1;goto B493f2b;
case 0x493f31:goto L493f31;
case 0x493f34:c.instructions+=8;goto B493f34;
case 0x493f35:c.instructions+=7;goto B493f35;
case 0x493f36:c.instructions+=6;goto B493f36;
case 0x493f37:c.instructions+=5;goto B493f37;
case 0x493f3a:c.instructions+=4;goto B493f3a;
case 0x493f3e:c.instructions+=3;goto B493f3e;
case 0x493f40:c.instructions+=2;goto B493f40;
case 0x493f42:c.instructions+=1;goto B493f42;
case 0x493f48:goto L493f48;
case 0x493f4e:c.instructions+=1;goto B493f4e;
case 0x493f50:goto L493f50;
case 0x493f52:c.instructions+=2;goto B493f52;
case 0x493f57:c.instructions+=1;goto B493f57;
case 0x493f59:goto L493f59;
case 0x493f5c:c.instructions+=2;goto B493f5c;
case 0x493f5f:c.instructions+=1;goto B493f5f;
case 0x493f61:goto L493f61;
case 0x493f66:c.instructions+=1;goto B493f66;
case 0x493f68:goto L493f68;
case 0x493f6b:c.instructions+=2;goto B493f6b;
case 0x493f71:c.instructions+=1;goto B493f71;
case 0x493f73:goto L493f73;
case 0x493f78:c.instructions+=1;goto B493f78;
case 0x493f7a:goto L493f7a;
case 0x493f7d:c.instructions+=2;goto B493f7d;
case 0x493f83:c.instructions+=1;goto B493f83;
case 0x493f85:goto L493f85;
case 0x493f8a:c.instructions+=1;goto B493f8a;
case 0x493f8c:goto L493f8c;
case 0x493f8f:c.instructions+=2;goto B493f8f;
case 0x493f95:c.instructions+=1;goto B493f95;
case 0x493f97:goto L493f97;
case 0x493f9c:c.instructions+=1;goto B493f9c;
case 0x493f9e:goto L493f9e;
case 0x493fa1:c.instructions+=2;goto B493fa1;
case 0x493fa7:c.instructions+=1;goto B493fa7;
case 0x493fa9:goto L493fa9;
case 0x493fae:c.instructions+=1;goto B493fae;
case 0x493fb0:goto L493fb0;
case 0x493fb5:c.instructions+=1;goto B493fb5;
case 0x493fb7:goto L493fb7;
case 0x493fb8:c.instructions+=2;goto B493fb8;
case 0x493fba:c.instructions+=1;goto B493fba;
case 0x493fbf:goto L493fbf;
case 0x493fc5:goto L493fc5;
case 0x493fc8:c.instructions+=3;goto B493fc8;
case 0x493fcc:c.instructions+=2;goto B493fcc;
case 0x493fce:c.instructions+=1;goto B493fce;
case 0x493fd0:goto L493fd0;
case 0x493fd4:c.instructions+=2;goto B493fd4;
case 0x493fd6:c.instructions+=1;goto B493fd6;
case 0x493fd8:goto L493fd8;
case 0x493fdb:c.instructions+=8;goto B493fdb;
case 0x493fde:c.instructions+=7;goto B493fde;
case 0x493fe1:c.instructions+=6;goto B493fe1;
case 0x493fe3:c.instructions+=5;goto B493fe3;
case 0x493fe5:c.instructions+=4;goto B493fe5;
case 0x493fe6:c.instructions+=3;goto B493fe6;
case 0x493fe7:c.instructions+=2;goto B493fe7;
case 0x493fe8:c.instructions+=1;goto B493fe8;
case 0x493fed:goto L493fed;
case 0x493ff0:c.instructions+=2;goto B493ff0;
case 0x493ff2:c.instructions+=1;goto B493ff2;
case 0x493ff4:goto L493ff4;
case 0x493ffb:c.instructions+=2;goto B493ffb;
case 0x493ffe:c.instructions+=1;goto B493ffe;
default:missing_instruction(c.pc);}
B493004:L493004:{c.instructions+=10;NFSU2_TR(0x493004);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B493007:{NFSU2_TR(0x493007);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B493009:{NFSU2_TR(0x493009);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B49300b:{NFSU2_TR(0x49300b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B493011:{NFSU2_TR(0x493011);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B493015:{NFSU2_TR(0x493015);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B493019:{NFSU2_TR(0x493019);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B493021:{NFSU2_TR(0x493021);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B493029:{NFSU2_TR(0x493029);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B493031:{NFSU2_TR(0x493031);
if(r1(R+518)){{goto L493068;}}
}
B493033:L493033:{c.instructions+=3;NFSU2_TR(0x493033);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B493036:{NFSU2_TR(0x493036);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493038:{NFSU2_TR(0x493038);
if(r1(R+518)){{goto L493068;}}
}
B49303a:L49303a:{c.instructions+=5;NFSU2_TR(0x49303a);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49303d:{NFSU2_TR(0x49303d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B493043:{NFSU2_TR(0x493043);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B493045:{NFSU2_TR(0x493045);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B493048:{NFSU2_TR(0x493048);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L493068;}}
}
B49304a:L49304a:{c.instructions+=9;NFSU2_TR(0x49304a);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49304d:{NFSU2_TR(0x49304d);
{u32 ea_=u32(r4(R+4)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B493050:{NFSU2_TR(0x493050);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B493054:{NFSU2_TR(0x493054);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B493057:{NFSU2_TR(0x493057);
{u32 ea_=u32(r4(R+4)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B49305a:{NFSU2_TR(0x49305a);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49305e:{NFSU2_TR(0x49305e);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B493061:{NFSU2_TR(0x493061);
{u32 ea_=u32(r4(R+4)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B493064:{NFSU2_TR(0x493064);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B493068:L493068:{c.instructions+=3;NFSU2_TR(0x493068);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B49306a:{NFSU2_TR(0x49306a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49306c:{NFSU2_TR(0x49306c);
if(r1(R+518)){{goto L493309;}}
}
B493072:L493072:{c.instructions+=7;NFSU2_TR(0x493072);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B493076:{NFSU2_TR(0x493076);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49307a:{NFSU2_TR(0x49307a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B49307c:{NFSU2_TR(0x49307c);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B49307e:{NFSU2_TR(0x49307e);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493080:{NFSU2_TR(0x493080);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B493084:{NFSU2_TR(0x493084);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4932db;}}
}
B49308a:L49308a:{c.instructions+=4;NFSU2_TR(0x49308a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49308e:{NFSU2_TR(0x49308e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493090:{NFSU2_TR(0x493090);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B493094:{NFSU2_TR(0x493094);
if(r1(R+518)){{goto L4930b8;}}
}
B493096:L493096:{c.instructions+=13;NFSU2_TR(0x493096);
__builtin_memmove((R+0),(R+4),4);
}
B493098:{NFSU2_TR(0x493098);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B493099:{NFSU2_TR(0x493099);
u8 U[64];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x493099);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x493099);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B49309d:{NFSU2_TR(0x49309d);
__builtin_memmove((R+28),(R+0),4);
}
B49309f:{NFSU2_TR(0x49309f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B4930a3:{NFSU2_TR(0x4930a3);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B4930a4:{NFSU2_TR(0x4930a4);
u8 U[64];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x4930a4);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x4930a4);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B4930a8:{NFSU2_TR(0x4930a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4930ac:{NFSU2_TR(0x4930ac);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B4930ae:{NFSU2_TR(0x4930ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4930b2:{NFSU2_TR(0x4930b2);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B4930b4:{NFSU2_TR(0x4930b4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B4930b6:{NFSU2_TR(0x4930b6);
__builtin_memmove((R+12),(R+0),4);
}
B4930b8:L4930b8:{c.instructions+=38;NFSU2_TR(0x4930b8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B4930bc:{NFSU2_TR(0x4930bc);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B4930c0:{NFSU2_TR(0x4930c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4930c4:{NFSU2_TR(0x4930c4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B4930c8:{NFSU2_TR(0x4930c8);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4930cc:{NFSU2_TR(0x4930cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4930d0:{NFSU2_TR(0x4930d0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B4930d4:{NFSU2_TR(0x4930d4);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4930da:{NFSU2_TR(0x4930da);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4930e2:{NFSU2_TR(0x4930e2);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4930e6:{NFSU2_TR(0x4930e6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4930ea:{NFSU2_TR(0x4930ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4930ee:{NFSU2_TR(0x4930ee);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B4930f2:{NFSU2_TR(0x4930f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4930f6:{NFSU2_TR(0x4930f6);
{u32 ea_=u32(u32(7895792u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4930fc:{NFSU2_TR(0x4930fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4930ff:{NFSU2_TR(0x4930ff);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B493103:{NFSU2_TR(0x493103);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B493107:{NFSU2_TR(0x493107);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49310a:{NFSU2_TR(0x49310a);
{u32 ea_=u32(u32(7907660u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B493110:{NFSU2_TR(0x493110);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B493114:{NFSU2_TR(0x493114);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B493117:{NFSU2_TR(0x493117);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B493119:{NFSU2_TR(0x493119);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49311d:{NFSU2_TR(0x49311d);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B493121:{NFSU2_TR(0x493121);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B493125:{NFSU2_TR(0x493125);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B493129:{NFSU2_TR(0x493129);
{u32 ea_=u32(u32(7907660u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B49312f:{NFSU2_TR(0x49312f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B493131:{NFSU2_TR(0x493131);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B493135:{NFSU2_TR(0x493135);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B493139:{NFSU2_TR(0x493139);
{u32 ea_=u32(u32(7907660u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B49313f:{NFSU2_TR(0x49313f);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B493141:{NFSU2_TR(0x493141);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B493145:{NFSU2_TR(0x493145);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B49314b:{NFSU2_TR(0x49314b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B49314d:{NFSU2_TR(0x49314d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B493150:{NFSU2_TR(0x493150);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L49315a;}}
}
B493152:L493152:{c.instructions+=1;NFSU2_TR(0x493152);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49315a:L49315a:{c.instructions+=6;NFSU2_TR(0x49315a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49315e:{NFSU2_TR(0x49315e);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B493166:{NFSU2_TR(0x493166);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B49316c:{NFSU2_TR(0x49316c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B49316e:{NFSU2_TR(0x49316e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B493171:{NFSU2_TR(0x493171);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L49317b;}}
}
B493173:L493173:{c.instructions+=1;NFSU2_TR(0x493173);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49317b:L49317b:{c.instructions+=4;NFSU2_TR(0x49317b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B493181:{NFSU2_TR(0x493181);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B493183:{NFSU2_TR(0x493183);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B493186:{NFSU2_TR(0x493186);
if(r1(R+514)){{goto L493190;}}
}
B493188:L493188:{c.instructions+=2;NFSU2_TR(0x493188);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49318e:{NFSU2_TR(0x49318e);
{goto L493196;}
}
B493190:L493190:{c.instructions+=1;NFSU2_TR(0x493190);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B493196:L493196:{c.instructions+=34;NFSU2_TR(0x493196);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49319a:{NFSU2_TR(0x49319a);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49319e:{NFSU2_TR(0x49319e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4931a2:{NFSU2_TR(0x4931a2);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4931a5:{NFSU2_TR(0x4931a5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4931a7:{NFSU2_TR(0x4931a7);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4931ab:{NFSU2_TR(0x4931ab);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4931ae:{NFSU2_TR(0x4931ae);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4931b2:{NFSU2_TR(0x4931b2);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4931b6:{NFSU2_TR(0x4931b6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4931ba:{NFSU2_TR(0x4931ba);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4931be:{NFSU2_TR(0x4931be);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4931c2:{NFSU2_TR(0x4931c2);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4931c6:{NFSU2_TR(0x4931c6);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4931c9:{NFSU2_TR(0x4931c9);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4931cd:{NFSU2_TR(0x4931cd);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4931d1:{NFSU2_TR(0x4931d1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4931d5:{NFSU2_TR(0x4931d5);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4931d7:{NFSU2_TR(0x4931d7);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4931d9:{NFSU2_TR(0x4931d9);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4931dd:{NFSU2_TR(0x4931dd);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4931e1:{NFSU2_TR(0x4931e1);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4931e4:{NFSU2_TR(0x4931e4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4931e6:{NFSU2_TR(0x4931e6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4931ea:{NFSU2_TR(0x4931ea);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4931ed:{NFSU2_TR(0x4931ed);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4931f1:{NFSU2_TR(0x4931f1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4931f5:{NFSU2_TR(0x4931f5);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4931f8:{NFSU2_TR(0x4931f8);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4931fc:{NFSU2_TR(0x4931fc);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B4931fe:{NFSU2_TR(0x4931fe);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B493201:{NFSU2_TR(0x493201);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B493205:{NFSU2_TR(0x493205);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B493209:{NFSU2_TR(0x493209);
if(r1(R+518)){{goto L49322f;}}
}
B49320b:L49320b:{c.instructions+=10;NFSU2_TR(0x49320b);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49320f:{NFSU2_TR(0x49320f);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B493213:{NFSU2_TR(0x493213);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B493215:{NFSU2_TR(0x493215);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B493219:{NFSU2_TR(0x493219);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B49321d:{NFSU2_TR(0x49321d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B49321f:{NFSU2_TR(0x49321f);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B493223:{NFSU2_TR(0x493223);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B493227:{NFSU2_TR(0x493227);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B49322b:{NFSU2_TR(0x49322b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49322f:L49322f:{c.instructions+=16;NFSU2_TR(0x49322f);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B493231:{NFSU2_TR(0x493231);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x501502f9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B493239:{NFSU2_TR(0x493239);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B49323b:{NFSU2_TR(0x49323b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49323f:{NFSU2_TR(0x49323f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B493243:{NFSU2_TR(0x493243);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B493245:{NFSU2_TR(0x493245);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B493249:{NFSU2_TR(0x493249);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B49324d:{NFSU2_TR(0x49324d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B49324f:{NFSU2_TR(0x49324f);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B493251:{NFSU2_TR(0x493251);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B493253:{NFSU2_TR(0x493253);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B493255:{NFSU2_TR(0x493255);
{u32 ea_=u32(u32(7920184u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B49325b:{NFSU2_TR(0x49325b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B49325d:{NFSU2_TR(0x49325d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B493260:{NFSU2_TR(0x493260);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49326e;}}
}
B493262:L493262:{c.instructions+=3;NFSU2_TR(0x493262);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B493268:{NFSU2_TR(0x493268);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B49326a:{NFSU2_TR(0x49326a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49326e:L49326e:{c.instructions+=3;NFSU2_TR(0x49326e);
{u32 ea_=u32(u32(7882048u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B493274:{NFSU2_TR(0x493274);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B493278:{NFSU2_TR(0x493278);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49327dull));
TAIL_STATIC(0x75bed4u,75b);
}
B49327d:L49327d:{c.instructions+=10;NFSU2_TR(0x49327d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B49327f:{NFSU2_TR(0x49327f);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B493282:{NFSU2_TR(0x493282);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B493286:{NFSU2_TR(0x493286);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49328a:{NFSU2_TR(0x49328a);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49328d:{NFSU2_TR(0x49328d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B493290:{NFSU2_TR(0x493290);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B493294:{NFSU2_TR(0x493294);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B493298:{NFSU2_TR(0x493298);
{u32 ea_=u32(u32(7909636u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B49329e:{NFSU2_TR(0x49329e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4932a3ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4932a3:L4932a3:{c.instructions+=5;NFSU2_TR(0x4932a3);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4932a7:{NFSU2_TR(0x4932a7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4932ab:{NFSU2_TR(0x4932ab);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4932ae:{NFSU2_TR(0x4932ae);
{u32 ea_=u32(u32(7909636u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4932b4:{NFSU2_TR(0x4932b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4932b9ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4932b9:L4932b9:{c.instructions+=5;NFSU2_TR(0x4932b9);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4932bd:{NFSU2_TR(0x4932bd);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4932bf:{NFSU2_TR(0x4932bf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4932c2:{NFSU2_TR(0x4932c2);
{u32 ea_=u32(u32(7909636u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4932c8:{NFSU2_TR(0x4932c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4932cdull));
TAIL_STATIC(0x75bed4u,75b);
}
B4932cd:L4932cd:{c.instructions+=5;NFSU2_TR(0x4932cd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4932cf:{NFSU2_TR(0x4932cf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1full))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4932d2:{NFSU2_TR(0x4932d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4932d6:{NFSU2_TR(0x4932d6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1eull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4932d9:{NFSU2_TR(0x4932d9);
{goto L4932f9;}
}
B4932db:L4932db:{c.instructions+=9;NFSU2_TR(0x4932db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4932de:{NFSU2_TR(0x4932de);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4932e0:{NFSU2_TR(0x4932e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4932e3:{NFSU2_TR(0x4932e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4932e7:{NFSU2_TR(0x4932e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))-u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B4932e9:{NFSU2_TR(0x4932e9);
__builtin_memmove((R+4),gp(0x82da38),4);
}
B4932ef:{NFSU2_TR(0x4932ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4932f0:{NFSU2_TR(0x4932f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4932f1:{NFSU2_TR(0x4932f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4932f6ull));
TAIL_STATIC(0x43f920u,43f);
}
B4932f6:L4932f6:{c.instructions+=1;NFSU2_TR(0x4932f6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4932f9:L4932f9:{c.instructions+=4;NFSU2_TR(0x4932f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4932fd:{NFSU2_TR(0x4932fd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4932ff:{NFSU2_TR(0x4932ff);
__builtin_memmove((R+24),(R+28),4);
}
B493301:{NFSU2_TR(0x493301);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x493072u);}goto L493072;}}
}
B493307:L493307:{c.instructions+=1;NFSU2_TR(0x493307);
__builtin_memmove((R+28),(R+0),4);
}
B493309:L493309:{c.instructions+=9;NFSU2_TR(0x493309);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49330d:{NFSU2_TR(0x49330d);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B493311:{NFSU2_TR(0x493311);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B493314:{NFSU2_TR(0x493314);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B493317:{NFSU2_TR(0x493317);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B493318:{NFSU2_TR(0x493318);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49331c:{NFSU2_TR(0x49331c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B493320:{NFSU2_TR(0x493320);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B493324:{NFSU2_TR(0x493324);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x492fb0u,492);}
}
B49332a:L49332a:{c.instructions+=3;NFSU2_TR(0x49332a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B49332c:{NFSU2_TR(0x49332c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B49332f:{NFSU2_TR(0x49332f);
w4(R+24,u32(0x2ull));
}
B493334:L493334:{c.instructions+=8;NFSU2_TR(0x493334);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B493336:{NFSU2_TR(0x493336);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B493338:{NFSU2_TR(0x493338);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49333a:{NFSU2_TR(0x49333a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B49333d:{NFSU2_TR(0x49333d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B493340:{NFSU2_TR(0x493340);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B493342:{NFSU2_TR(0x493342);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B493343:{NFSU2_TR(0x493343);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x493334u);}goto L493334;}}
}
B493345:L493345:{c.instructions+=2;NFSU2_TR(0x493345);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493347:{NFSU2_TR(0x493347);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L493369;}}
}
B493349:L493349:{c.instructions+=6;NFSU2_TR(0x493349);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49334c:{NFSU2_TR(0x49334c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49334e:{NFSU2_TR(0x49334e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B493350:{NFSU2_TR(0x493350);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B493353:{NFSU2_TR(0x493353);
__builtin_memmove((R+4),(R+12),4);
}
B493355:{NFSU2_TR(0x493355);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49335aull));
TAIL_STATIC(0x491c50u,491);
}
B49335a:L49335a:{c.instructions+=4;NFSU2_TR(0x49335a);
__builtin_memmove((R+0),gp(0x82da3c),4);
}
B49335f:{NFSU2_TR(0x49335f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493360:{NFSU2_TR(0x493360);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493361:{NFSU2_TR(0x493361);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x493366ull));
TAIL_STATIC(0x43f920u,43f);
}
B493366:L493366:{c.instructions+=1;NFSU2_TR(0x493366);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B493369:L493369:{c.instructions+=4;NFSU2_TR(0x493369);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49336d:{NFSU2_TR(0x49336d);
u8 U[22];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
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
B493371:{NFSU2_TR(0x493371);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B493375:{NFSU2_TR(0x493375);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x492f8cu,492);}
}
B49337b:L49337b:{c.instructions+=6;NFSU2_TR(0x49337b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49337c:{NFSU2_TR(0x49337c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49337d:{NFSU2_TR(0x49337d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49337e:{NFSU2_TR(0x49337e);
__builtin_memmove((R+16),(R+20),4);
}
B493380:{NFSU2_TR(0x493380);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B493381:{NFSU2_TR(0x493381);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B493390:L493390:{c.instructions+=22;NFSU2_TR(0x493390);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B493394:{NFSU2_TR(0x493394);
__builtin_memmove((R+0),(R+4),4);
}
B493396:{NFSU2_TR(0x493396);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B493399:{NFSU2_TR(0x493399);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B49339b:{NFSU2_TR(0x49339b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49339e:{NFSU2_TR(0x49339e);
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
B4933a0:{NFSU2_TR(0x4933a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4933a3:{NFSU2_TR(0x4933a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4933a6:{NFSU2_TR(0x4933a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4933a9:{NFSU2_TR(0x4933a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4933ac:{NFSU2_TR(0x4933ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4933b0:{NFSU2_TR(0x4933b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4933b2:{NFSU2_TR(0x4933b2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4933b6:{NFSU2_TR(0x4933b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4933b9:{NFSU2_TR(0x4933b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4933bd:{NFSU2_TR(0x4933bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4933c0:{NFSU2_TR(0x4933c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4933c4:{NFSU2_TR(0x4933c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4933c7:{NFSU2_TR(0x4933c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4933cb:{NFSU2_TR(0x4933cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4933ce:{NFSU2_TR(0x4933ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4933d1:{NFSU2_TR(0x4933d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4933e0:L4933e0:{c.instructions+=2;NFSU2_TR(0x4933e0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B4933e3:{NFSU2_TR(0x4933e3);
TAIL_STATIC(0x491b00u,491);
}
B4933f0:L4933f0:{c.instructions+=7;NFSU2_TR(0x4933f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4933f1:{NFSU2_TR(0x4933f1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4933f2:{NFSU2_TR(0x4933f2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4933f3:{NFSU2_TR(0x4933f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4933f7:{NFSU2_TR(0x4933f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4933f8:{NFSU2_TR(0x4933f8);
__builtin_memmove((R+12),(R+4),4);
}
B4933fa:{NFSU2_TR(0x4933fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4933ffull));
TAIL_STATIC(0x48ce80u,48c);
}
B4933ff:L4933ff:{c.instructions+=2;NFSU2_TR(0x4933ff);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493401:{NFSU2_TR(0x493401);
if(r1(R+518)){{goto L493416;}}
}
B493403:L493403:{c.instructions+=7;NFSU2_TR(0x493403);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B493409:{NFSU2_TR(0x493409);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49340a:{NFSU2_TR(0x49340a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49340b:{NFSU2_TR(0x49340b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B493411:{NFSU2_TR(0x493411);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B493412:{NFSU2_TR(0x493412);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B493413:{NFSU2_TR(0x493413);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B493416:L493416:{c.instructions+=2;NFSU2_TR(0x493416);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493417:{NFSU2_TR(0x493417);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49341cull));
TAIL_STATIC(0x43dbb0u,43d);
}
B49341c:L49341c:{c.instructions+=3;NFSU2_TR(0x49341c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49341f:{NFSU2_TR(0x49341f);
w1(R+512,u8((r4(R+0))<(u32(0x80ull))));
}
B493424:{NFSU2_TR(0x493424);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L493439;}}
}
B493426:L493426:{c.instructions+=4;NFSU2_TR(0x493426);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493428:{NFSU2_TR(0x493428);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49342a:{NFSU2_TR(0x49342a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49342b:{NFSU2_TR(0x49342b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x493430ull));
TAIL_STATIC(0x57ca10u,57c);
}
B493430:L493430:{c.instructions+=4;NFSU2_TR(0x493430);
__builtin_memmove((R+24),(R+0),4);
}
B493432:{NFSU2_TR(0x493432);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B493435:{NFSU2_TR(0x493435);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493437:{NFSU2_TR(0x493437);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L493441;}}
}
B493439:L493439:{c.instructions+=5;NFSU2_TR(0x493439);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49343a:{NFSU2_TR(0x49343a);
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
B49343c:{NFSU2_TR(0x49343c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49343d:{NFSU2_TR(0x49343d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49343e:{NFSU2_TR(0x49343e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B493441:L493441:{c.instructions+=3;NFSU2_TR(0x493441);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493442:{NFSU2_TR(0x493442);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493443:{NFSU2_TR(0x493443);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x493448ull));
TAIL_STATIC(0x5755e0u,575);
}
B493448:L493448:{c.instructions+=4;NFSU2_TR(0x493448);
__builtin_memmove((R+28),(R+0),4);
}
B49344a:{NFSU2_TR(0x49344a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49344b:{NFSU2_TR(0x49344b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49344f:{NFSU2_TR(0x49344f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x493454ull));
TAIL_STATIC(0x579bf0u,579);
}
B493454:L493454:{c.instructions+=3;NFSU2_TR(0x493454);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B493457:{NFSU2_TR(0x493457);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49345a:{NFSU2_TR(0x49345a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L493465;}}
}
B49345c:L49345c:{c.instructions+=6;NFSU2_TR(0x49345c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49345d:{NFSU2_TR(0x49345d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49345e:{NFSU2_TR(0x49345e);
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
B493460:{NFSU2_TR(0x493460);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B493461:{NFSU2_TR(0x493461);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B493462:{NFSU2_TR(0x493462);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B493465:L493465:{c.instructions+=4;NFSU2_TR(0x493465);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493466:{NFSU2_TR(0x493466);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493468:{NFSU2_TR(0x493468);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49346a:{NFSU2_TR(0x49346a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49346full));
TAIL_STATIC(0x440820u,440);
}
B49346f:L49346f:{c.instructions+=14;NFSU2_TR(0x49346f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B493473:{NFSU2_TR(0x493473);
__builtin_memmove((R+20),(R+0),4);
}
B493475:{NFSU2_TR(0x493475);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B493477:{NFSU2_TR(0x493477);
__builtin_memmove((R+4),(R+20),4);
}
B493479:{NFSU2_TR(0x493479);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B49347b:{NFSU2_TR(0x49347b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49347e:{NFSU2_TR(0x49347e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B493481:{NFSU2_TR(0x493481);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B493484:{NFSU2_TR(0x493484);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B493488:{NFSU2_TR(0x493488);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49348b:{NFSU2_TR(0x49348b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49348e:{NFSU2_TR(0x49348e);
__builtin_memmove((R+4),gp(0x82da84),4);
}
B493494:{NFSU2_TR(0x493494);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493495:{NFSU2_TR(0x493495);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49349aull));
TAIL_STATIC(0x440e50u,440);
}
B49349a:L49349a:{c.instructions+=6;NFSU2_TR(0x49349a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49349e:{NFSU2_TR(0x49349e);
__builtin_memmove((R+24),(R+0),4);
}
B4934a0:{NFSU2_TR(0x4934a0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4934a2:{NFSU2_TR(0x4934a2);
w4(R+4,u32(0x30ull));
}
B4934a7:{NFSU2_TR(0x4934a7);
__builtin_memmove((R+28),(R+24),4);
}
B4934a9:{NFSU2_TR(0x4934a9);
u8 U[4];
w4(U+0,u32(0x7full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4934ab:L4934ab:{c.instructions+=1;NFSU2_TR(0x4934ab);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4934ad;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4934abu);}goto L4934ab;}
}
B4934ad:L4934ad:{c.instructions+=4;NFSU2_TR(0x4934ad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4934ae:{NFSU2_TR(0x4934ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4934b1:{NFSU2_TR(0x4934b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4934b2:{NFSU2_TR(0x4934b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4934b7ull));
TAIL_STATIC(0x43dc00u,43d);
}
B4934b7:L4934b7:{c.instructions+=20;NFSU2_TR(0x4934b7);
u8 U[6];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B4934bc:{NFSU2_TR(0x4934bc);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4934c3:{NFSU2_TR(0x4934c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x87ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4934ca:{NFSU2_TR(0x4934ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4934d4:{NFSU2_TR(0x4934d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4934de:{NFSU2_TR(0x4934de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4934e4:{NFSU2_TR(0x4934e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4934e7:{NFSU2_TR(0x4934e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4934ea:{NFSU2_TR(0x4934ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4934ec:{NFSU2_TR(0x4934ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4934ef:{NFSU2_TR(0x4934ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4934f1:{NFSU2_TR(0x4934f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4934f5:{NFSU2_TR(0x4934f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4934f8:{NFSU2_TR(0x4934f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4934fb:{NFSU2_TR(0x4934fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4934fe:{NFSU2_TR(0x4934fe);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B4934ff:{NFSU2_TR(0x4934ff);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8000ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8000ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B493504:{NFSU2_TR(0x493504);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B493507:{NFSU2_TR(0x493507);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49350b:{NFSU2_TR(0x49350b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L493515;}}
}
B49350d:L49350d:{c.instructions+=1;NFSU2_TR(0x49350d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x8000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B493515:L493515:{c.instructions+=4;NFSU2_TR(0x493515);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B493519:{NFSU2_TR(0x493519);
u8 U[4];
w4(U+0,u32(0x2008ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49351e:{NFSU2_TR(0x49351e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49351f:{NFSU2_TR(0x49351f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x493524ull));
TAIL_STATIC(0x440820u,440);
}
B493524:L493524:{c.instructions+=12;NFSU2_TR(0x493524);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493525:{NFSU2_TR(0x493525);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493526:{NFSU2_TR(0x493526);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49352c:{NFSU2_TR(0x49352c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B493530:{NFSU2_TR(0x493530);
u8 U[4];
w4(U+0,u32(0x490440ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493535:{NFSU2_TR(0x493535);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493536:{NFSU2_TR(0x493536);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493538:{NFSU2_TR(0x493538);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B49353b:{NFSU2_TR(0x49353b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B493541:{NFSU2_TR(0x493541);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493542:{NFSU2_TR(0x493542);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493543:{NFSU2_TR(0x493543);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x493548ull));
TAIL_STATIC(0x57b530u,57b);
}
B493548:L493548:{c.instructions+=8;NFSU2_TR(0x493548);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49354b:{NFSU2_TR(0x49354b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B49354c:{NFSU2_TR(0x49354c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49354d:{NFSU2_TR(0x49354d);
__builtin_memmove((R+0),(R+24),4);
}
B49354f:{NFSU2_TR(0x49354f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B493550:{NFSU2_TR(0x493550);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B493551:{NFSU2_TR(0x493551);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B493552:{NFSU2_TR(0x493552);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B493560:L493560:{c.instructions+=7;NFSU2_TR(0x493560);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493561:{NFSU2_TR(0x493561);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B493565:{NFSU2_TR(0x493565);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493566:{NFSU2_TR(0x493566);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493567:{NFSU2_TR(0x493567);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493568:{NFSU2_TR(0x493568);
__builtin_memmove((R+28),(R+4),4);
}
B49356a:{NFSU2_TR(0x49356a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49356full));
TAIL_STATIC(0x48ce80u,48c);
}
B49356f:L49356f:{c.instructions+=3;NFSU2_TR(0x49356f);
__builtin_memmove((R+24),(R+0),4);
}
B493571:{NFSU2_TR(0x493571);
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
B493573:{NFSU2_TR(0x493573);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49357b;}}
}
B493575:L493575:{c.instructions+=4;NFSU2_TR(0x493575);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B493576:{NFSU2_TR(0x493576);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B493577:{NFSU2_TR(0x493577);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B493578:{NFSU2_TR(0x493578);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49357b:L49357b:{c.instructions+=2;NFSU2_TR(0x49357b);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
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
B493581:{NFSU2_TR(0x493581);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4935f1;}}
}
B493583:L493583:{c.instructions+=4;NFSU2_TR(0x493583);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493584:{NFSU2_TR(0x493584);
__builtin_memmove((R+4),(R+28),4);
}
B493586:{NFSU2_TR(0x493586);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8aull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B49358d:{NFSU2_TR(0x49358d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x493592ull));
TAIL_STATIC(0x48d370u,48d);
}
B493592:L493592:{c.instructions+=2;NFSU2_TR(0x493592);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493593:{NFSU2_TR(0x493593);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x493596ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B493596:L493596:{c.instructions+=8;NFSU2_TR(0x493596);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B493598:{NFSU2_TR(0x493598);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49359b:{NFSU2_TR(0x49359b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B49359d:{NFSU2_TR(0x49359d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4935a0:{NFSU2_TR(0x4935a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4935a6:{NFSU2_TR(0x4935a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4935a9:{NFSU2_TR(0x4935a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4935ab:{NFSU2_TR(0x4935ab);
if(r1(R+518)){{goto L4935b6;}}
}
B4935ad:L4935ad:{c.instructions+=2;NFSU2_TR(0x4935ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4935ae:{NFSU2_TR(0x4935ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4935b3ull));
TAIL_STATIC(0x440540u,440);
}
B4935b3:L4935b3:{c.instructions+=1;NFSU2_TR(0x4935b3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4935b6:L4935b6:{c.instructions+=3;NFSU2_TR(0x4935b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4935bc:{NFSU2_TR(0x4935bc);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4935be:{NFSU2_TR(0x4935be);
if(r1(R+518)){{goto L4935c9;}}
}
B4935c0:L4935c0:{c.instructions+=2;NFSU2_TR(0x4935c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4935c1:{NFSU2_TR(0x4935c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4935c6ull));
TAIL_STATIC(0x580e90u,580);
}
B4935c6:L4935c6:{c.instructions+=1;NFSU2_TR(0x4935c6);
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4935c9:L4935c9:{c.instructions+=4;NFSU2_TR(0x4935c9);
__builtin_memmove((R+0),gp(0x82da84),4);
}
B4935ce:{NFSU2_TR(0x4935ce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4935cf:{NFSU2_TR(0x4935cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4935d0:{NFSU2_TR(0x4935d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4935d5ull));
TAIL_STATIC(0x43f920u,43f);
}
B4935d5:L4935d5:{c.instructions+=7;NFSU2_TR(0x4935d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4935d8:{NFSU2_TR(0x4935d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4935dc:{NFSU2_TR(0x4935dc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4935df:{NFSU2_TR(0x4935df);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B4935e0:{NFSU2_TR(0x4935e0);
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
B4935e2:{NFSU2_TR(0x4935e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4935e5:{NFSU2_TR(0x4935e5);
if(r1(R+518)){{goto L4935f1;}}
}
B4935e7:L4935e7:{c.instructions+=3;NFSU2_TR(0x4935e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4935eb:{NFSU2_TR(0x4935eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4935ec:{NFSU2_TR(0x4935ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4935eeull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B4935ee:L4935ee:{c.instructions+=1;NFSU2_TR(0x4935ee);
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
B4935f1:L4935f1:{c.instructions+=5;NFSU2_TR(0x4935f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4935f2:{NFSU2_TR(0x4935f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4935f3:{NFSU2_TR(0x4935f3);
w4(R+0,u32(0x1ull));
}
B4935f8:{NFSU2_TR(0x4935f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4935f9:{NFSU2_TR(0x4935f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B493600:L493600:{c.instructions+=9;NFSU2_TR(0x493600);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B493604:{NFSU2_TR(0x493604);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493605:{NFSU2_TR(0x493605);
__builtin_memmove((R+24),(R+4),4);
}
B493607:{NFSU2_TR(0x493607);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B493609:{NFSU2_TR(0x493609);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49360b:{NFSU2_TR(0x49360b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49360e:{NFSU2_TR(0x49360e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B493611:{NFSU2_TR(0x493611);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B493614:{NFSU2_TR(0x493614);
if(r1(R+518)){{goto L49362c;}}
}
B493616:L493616:{c.instructions+=5;NFSU2_TR(0x493616);
__builtin_memmove((R+0),gp(0x82dbc4),4);
}
B49361b:{NFSU2_TR(0x49361b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B49361d:{NFSU2_TR(0x49361d);
__builtin_memmove(gp(0x82dbc4),(R+24),4);
}
B493623:{NFSU2_TR(0x493623);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B493626:{NFSU2_TR(0x493626);
u8 U[4];
w4(U+0,u32(0x82dbc0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B49362c:L49362c:{c.instructions+=3;NFSU2_TR(0x49362c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49362f:{NFSU2_TR(0x49362f);
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
B493631:{NFSU2_TR(0x493631);
if(r1(R+518)){{goto L493645;}}
}
B493633:L493633:{c.instructions+=3;NFSU2_TR(0x493633);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493634:{NFSU2_TR(0x493634);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493635:{NFSU2_TR(0x493635);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49363aull));
TAIL_STATIC(0x48df90u,48d);
}
B49363a:L49363a:{c.instructions+=4;NFSU2_TR(0x49363a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49363d:{NFSU2_TR(0x49363d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49363e:{NFSU2_TR(0x49363e);
__builtin_memmove((R+4),(R+24),4);
}
B493640:{NFSU2_TR(0x493640);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x493645ull));
TAIL_STATIC(0x48d780u,48d);
}
B493645:L493645:{c.instructions+=2;NFSU2_TR(0x493645);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B493646:{NFSU2_TR(0x493646);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B493650:L493650:{c.instructions+=5;NFSU2_TR(0x493650);
__builtin_memmove((R+0),gp(0x864f60),4);
}
B493655:{NFSU2_TR(0x493655);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493657:{NFSU2_TR(0x493657);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493658:{NFSU2_TR(0x493658);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493659:{NFSU2_TR(0x493659);
if(r1(R+518)){{goto L4936a7;}}
}
B49365b:L49365b:{c.instructions+=5;NFSU2_TR(0x49365b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49365f:{NFSU2_TR(0x49365f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B493665:{NFSU2_TR(0x493665);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49366b:{NFSU2_TR(0x49366b);
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
B49366d:{NFSU2_TR(0x49366d);
if(r1(R+518)){{goto L493784;}}
}
B493673:L493673:{c.instructions+=15;NFSU2_TR(0x493673);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B493675:{NFSU2_TR(0x493675);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B493677:{NFSU2_TR(0x493677);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49367a:{NFSU2_TR(0x49367a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B49367c:{NFSU2_TR(0x49367c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49367f:{NFSU2_TR(0x49367f);
__builtin_memmove((R+8),gp(0x832da8),4);
}
B493685:{NFSU2_TR(0x493685);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B493687:{NFSU2_TR(0x493687);
__builtin_memmove(gp(0x832da8),(R+0),4);
}
B49368c:{NFSU2_TR(0x49368c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49368f:{NFSU2_TR(0x49368f);
u8 U[4];
w4(U+0,u32(0x832da4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B493695:{NFSU2_TR(0x493695);
__builtin_memmove((R+8),gp(0x864f60),4);
}
B49369b:{NFSU2_TR(0x49369b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B49369d:{NFSU2_TR(0x49369d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4936a0:{NFSU2_TR(0x4936a0);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+4)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B4936a2:{NFSU2_TR(0x4936a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x493673u);}goto L493673;}}
}
B4936a4:L4936a4:{c.instructions+=3;NFSU2_TR(0x4936a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4936a5:{NFSU2_TR(0x4936a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4936a6:{NFSU2_TR(0x4936a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4936a7:L4936a7:{c.instructions+=2;NFSU2_TR(0x4936a7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4936a8:{NFSU2_TR(0x4936a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4936adull));
TAIL_STATIC(0x43bdf0u,43b);
}
B4936ad:L4936ad:{c.instructions+=5;NFSU2_TR(0x4936ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4936b1:{NFSU2_TR(0x4936b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4936b7:{NFSU2_TR(0x4936b7);
__builtin_memmove((R+12),(R+0),4);
}
B4936b9:{NFSU2_TR(0x4936b9);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4936bb:{NFSU2_TR(0x4936bb);
if(r1(R+518)){{goto L493728;}}
}
B4936bd:L4936bd:{c.instructions+=3;NFSU2_TR(0x4936bd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4936bf:{NFSU2_TR(0x4936bf);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B4936c3:{NFSU2_TR(0x4936c3);
if(r1(R+518)){{goto L4936d2;}}
}
B4936c5:L4936c5:{c.instructions+=4;NFSU2_TR(0x4936c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4936c8:{NFSU2_TR(0x4936c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4936c9:{NFSU2_TR(0x4936c9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4936ca:{NFSU2_TR(0x4936ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4936cfull));
TAIL_STATIC(0x48df90u,48d);
}
B4936cf:L4936cf:{c.instructions+=1;NFSU2_TR(0x4936cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4936d2:L4936d2:{c.instructions+=2;NFSU2_TR(0x4936d2);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4936d4:{NFSU2_TR(0x4936d4);
if(r1(R+518)){{goto L493728;}}
}
B4936d6:L4936d6:{c.instructions+=4;NFSU2_TR(0x4936d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4936d8:{NFSU2_TR(0x4936d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4936db:{NFSU2_TR(0x4936db);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4936dd:{NFSU2_TR(0x4936dd);
if(r1(R+518)){{goto L493724;}}
}
B4936df:L4936df:{c.instructions+=2;NFSU2_TR(0x4936df);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4936e2:{NFSU2_TR(0x4936e2);
if(r1(R+518)){{goto L493724;}}
}
B4936e4:L4936e4:{c.instructions+=6;NFSU2_TR(0x4936e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4936e6:{NFSU2_TR(0x4936e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4936e8:{NFSU2_TR(0x4936e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4936eb:{NFSU2_TR(0x4936eb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4936ed:{NFSU2_TR(0x4936ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4936f0:{NFSU2_TR(0x4936f0);
if(r1(R+518)){{goto L49370a;}}
}
B4936f2:L4936f2:{c.instructions+=7;NFSU2_TR(0x4936f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4936f8:{NFSU2_TR(0x4936f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4936fe:{NFSU2_TR(0x4936fe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B493700:{NFSU2_TR(0x493700);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B493703:{NFSU2_TR(0x493703);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B493706:{NFSU2_TR(0x493706);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B493708:{NFSU2_TR(0x493708);
{goto L493721;}
}
B49370a:L49370a:{c.instructions+=5;NFSU2_TR(0x49370a);
__builtin_memmove((R+8),gp(0x82dbc4),4);
}
B493710:{NFSU2_TR(0x493710);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B493712:{NFSU2_TR(0x493712);
__builtin_memmove(gp(0x82dbc4),(R+4),4);
}
B493718:{NFSU2_TR(0x493718);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49371b:{NFSU2_TR(0x49371b);
u8 U[4];
w4(U+0,u32(0x82dbc0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B493721:L493721:{c.instructions+=1;NFSU2_TR(0x493721);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B493724:L493724:{c.instructions+=2;NFSU2_TR(0x493724);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B493726:{NFSU2_TR(0x493726);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4936d6u);}goto L4936d6;}}
}
B493728:L493728:{c.instructions+=1;NFSU2_TR(0x493728);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49372dull));
TAIL_STATIC(0x43bdf0u,43b);
}
B49372d:L49372d:{c.instructions+=3;NFSU2_TR(0x49372d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49372e:{NFSU2_TR(0x49372e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49372f:{NFSU2_TR(0x49372f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x493734ull));
TAIL_STATIC(0x43be20u,43b);
}
B493734:L493734:{c.instructions+=7;NFSU2_TR(0x493734);
{u32 ea_=u32(u32(8575632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49373a:{NFSU2_TR(0x49373a);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B49373c:{NFSU2_TR(0x49373c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49373f:{NFSU2_TR(0x49373f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B493740:{NFSU2_TR(0x493740);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B493742:{NFSU2_TR(0x493742);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B493745:{NFSU2_TR(0x493745);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49374f;}}
}
B493747:L493747:{c.instructions+=2;NFSU2_TR(0x493747);
{u32 ea_=u32(u32(8575632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49374d:{NFSU2_TR(0x49374d);
{goto L493751;}
}
B49374f:L49374f:{c.instructions+=1;NFSU2_TR(0x49374f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B493751:L493751:{c.instructions+=11;NFSU2_TR(0x493751);
__builtin_memmove((R+0),gp(0x82daa4),4);
}
B493756:{NFSU2_TR(0x493756);
{u32 ea_=u32(u32(8575632u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49375c:{NFSU2_TR(0x49375c);
{u32 ea_=u32(u32(8575640u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B493762:{NFSU2_TR(0x493762);
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
B493763:{NFSU2_TR(0x493763);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B493765:{NFSU2_TR(0x493765);
__builtin_memmove(gp(0x82daa4),(R+0),4);
}
B49376a:{NFSU2_TR(0x49376a);
{u32 ea_=u32(u32(8575640u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B493770:{NFSU2_TR(0x493770);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B493772:{NFSU2_TR(0x493772);
{u32 ea_=u32(u32(8575636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B493778:{NFSU2_TR(0x493778);
{u32 ea_=u32(u32(8575640u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B49377e:{NFSU2_TR(0x49377e);
{u32 ea_=u32(u32(8575644u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B493784:L493784:{c.instructions+=3;NFSU2_TR(0x493784);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B493785:{NFSU2_TR(0x493785);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B493786:{NFSU2_TR(0x493786);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B493790:L493790:{c.instructions+=7;NFSU2_TR(0x493790);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493791:{NFSU2_TR(0x493791);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493792:{NFSU2_TR(0x493792);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B493796:{NFSU2_TR(0x493796);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49379c:{NFSU2_TR(0x49379c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4937a2:{NFSU2_TR(0x4937a2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4937a4:{NFSU2_TR(0x4937a4);
if(r1(R+518)){{goto L4937c1;}}
}
B4937a6:L4937a6:{c.instructions+=7;NFSU2_TR(0x4937a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4937a8:{NFSU2_TR(0x4937a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4937aa:{NFSU2_TR(0x4937aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4937ad:{NFSU2_TR(0x4937ad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4937af:{NFSU2_TR(0x4937af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4937b0:{NFSU2_TR(0x4937b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4937b3:{NFSU2_TR(0x4937b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4937b8ull));
TAIL_STATIC(0x440ef0u,440);
}
B4937b8:L4937b8:{c.instructions+=4;NFSU2_TR(0x4937b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4937ba:{NFSU2_TR(0x4937ba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4937bd:{NFSU2_TR(0x4937bd);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4937bf:{NFSU2_TR(0x4937bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4937a6u);}goto L4937a6;}}
}
B4937c1:L4937c1:{c.instructions+=4;NFSU2_TR(0x4937c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4937c7:{NFSU2_TR(0x4937c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4937cd:{NFSU2_TR(0x4937cd);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4937cf:{NFSU2_TR(0x4937cf);
if(r1(R+518)){{goto L4937ec;}}
}
B4937d1:L4937d1:{c.instructions+=7;NFSU2_TR(0x4937d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4937d3:{NFSU2_TR(0x4937d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4937d5:{NFSU2_TR(0x4937d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4937d8:{NFSU2_TR(0x4937d8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4937da:{NFSU2_TR(0x4937da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4937db:{NFSU2_TR(0x4937db);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4937de:{NFSU2_TR(0x4937de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4937e3ull));
TAIL_STATIC(0x440ef0u,440);
}
B4937e3:L4937e3:{c.instructions+=4;NFSU2_TR(0x4937e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4937e5:{NFSU2_TR(0x4937e5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4937e8:{NFSU2_TR(0x4937e8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4937ea:{NFSU2_TR(0x4937ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4937d1u);}goto L4937d1;}}
}
B4937ec:L4937ec:{c.instructions+=6;NFSU2_TR(0x4937ec);
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
B4937ee:{NFSU2_TR(0x4937ee);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4937f2:{NFSU2_TR(0x4937f2);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7eull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4937f6:{NFSU2_TR(0x4937f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4937f7:{NFSU2_TR(0x4937f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4937f8:{NFSU2_TR(0x4937f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B493800:L493800:{c.instructions+=5;NFSU2_TR(0x493800);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493801:{NFSU2_TR(0x493801);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493802:{NFSU2_TR(0x493802);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B493806:{NFSU2_TR(0x493806);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493807:{NFSU2_TR(0x493807);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49380cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x493790u);}goto L493790;}
}
B49380c:L49380c:{c.instructions+=6;NFSU2_TR(0x49380c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49380f:{NFSU2_TR(0x49380f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B493811:{NFSU2_TR(0x493811);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B493814:{NFSU2_TR(0x493814);
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
B493816:{NFSU2_TR(0x493816);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49381a:{NFSU2_TR(0x49381a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4938d5;}}
}
B493820:L493820:{c.instructions+=3;NFSU2_TR(0x493820);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493821:{NFSU2_TR(0x493821);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493822:{NFSU2_TR(0x493822);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493823:L493823:{c.instructions+=4;NFSU2_TR(0x493823);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B493826:{NFSU2_TR(0x493826);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B49382a:{NFSU2_TR(0x49382a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49382c:{NFSU2_TR(0x49382c);
if(r1(R+518)){{goto L4938c2;}}
}
B493832:L493832:{c.instructions+=5;NFSU2_TR(0x493832);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x19ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B493835:{NFSU2_TR(0x493835);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B493837:{NFSU2_TR(0x493837);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B493839:{NFSU2_TR(0x493839);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49383d:{NFSU2_TR(0x49383d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4938c2;}}
}
B493843:L493843:{c.instructions+=5;NFSU2_TR(0x493843);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B493846:{NFSU2_TR(0x493846);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B49384a:{NFSU2_TR(0x49384a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B49384d:{NFSU2_TR(0x49384d);
u8 U[8];
__builtin_memmove((U+0),gp(0x82db08),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B493853:{NFSU2_TR(0x493853);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L493882;}}
}
B493855:L493855:{c.instructions+=4;NFSU2_TR(0x493855);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49385b:{NFSU2_TR(0x49385b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((R+4),(U+0),4);
}
B493861:{NFSU2_TR(0x493861);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B493863:{NFSU2_TR(0x493863);
if(r1(R+518)){{goto L493876;}}
}
B493865:L493865:{c.instructions+=1;NFSU2_TR(0x493865);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B493868:L493868:{c.instructions+=3;NFSU2_TR(0x493868);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B49386b:{NFSU2_TR(0x49386b);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B49386e:{NFSU2_TR(0x49386e);
if(r1(R+518)){{goto L4938ad;}}
}
B493870:L493870:{c.instructions+=3;NFSU2_TR(0x493870);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B493872:{NFSU2_TR(0x493872);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B493874:{NFSU2_TR(0x493874);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x493868u);}goto L493868;}}
}
B493876:L493876:{c.instructions+=2;NFSU2_TR(0x493876);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493877:{NFSU2_TR(0x493877);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49387cull));
TAIL_STATIC(0x4cbab0u,4cb);
}
B49387c:L49387c:{c.instructions+=2;NFSU2_TR(0x49387c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B493880:{NFSU2_TR(0x493880);
{goto L4938ad;}
}
B493882:L493882:{c.instructions+=4;NFSU2_TR(0x493882);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B493888:{NFSU2_TR(0x493888);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49388e:{NFSU2_TR(0x49388e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B493890:{NFSU2_TR(0x493890);
if(r1(R+518)){{goto L4938a0;}}
}
B493892:L493892:{c.instructions+=1;NFSU2_TR(0x493892);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B493895:L493895:{c.instructions+=2;NFSU2_TR(0x493895);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B493898:{NFSU2_TR(0x493898);
if(r1(R+518)){{goto L4938ad;}}
}
B49389a:L49389a:{c.instructions+=3;NFSU2_TR(0x49389a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49389c:{NFSU2_TR(0x49389c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49389e:{NFSU2_TR(0x49389e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x493895u);}goto L493895;}}
}
B4938a0:L4938a0:{c.instructions+=3;NFSU2_TR(0x4938a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4938a3:{NFSU2_TR(0x4938a3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4938a4:{NFSU2_TR(0x4938a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4938a9ull));
TAIL_STATIC(0x4cbab0u,4cb);
}
B4938a9:L4938a9:{c.instructions+=1;NFSU2_TR(0x4938a9);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B4938ad:L4938ad:{c.instructions+=6;NFSU2_TR(0x4938ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4938b1:{NFSU2_TR(0x4938b1);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x19ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B4938b5:{NFSU2_TR(0x4938b5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4938b6:{NFSU2_TR(0x4938b6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4938b8:{NFSU2_TR(0x4938b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4938bc:{NFSU2_TR(0x4938bc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x493843u);}goto L493843;}}
}
B4938be:L4938be:{c.instructions+=1;NFSU2_TR(0x4938be);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4938c2:L4938c2:{c.instructions+=5;NFSU2_TR(0x4938c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4938c5:{NFSU2_TR(0x4938c5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4938c6:{NFSU2_TR(0x4938c6);
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
B4938c8:{NFSU2_TR(0x4938c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4938cc:{NFSU2_TR(0x4938cc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x493823u);}goto L493823;}}
}
B4938d2:L4938d2:{c.instructions+=3;NFSU2_TR(0x4938d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4938d3:{NFSU2_TR(0x4938d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4938d4:{NFSU2_TR(0x4938d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4938d5:L4938d5:{c.instructions+=3;NFSU2_TR(0x4938d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4938d6:{NFSU2_TR(0x4938d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4938d7:{NFSU2_TR(0x4938d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4938e0:L4938e0:{c.instructions+=6;NFSU2_TR(0x4938e0);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4938e3:{NFSU2_TR(0x4938e3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4938e4:{NFSU2_TR(0x4938e4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4938e5:{NFSU2_TR(0x4938e5);
__builtin_memmove((R+28),gp(0x830d1c),4);
}
B4938eb:{NFSU2_TR(0x4938eb);
w4(R+4,u32(0x830d1cull));
}
B4938f0:{NFSU2_TR(0x4938f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4938f5ull));
TAIL_STATIC(0x502fd0u,502);
}
B4938f5:L4938f5:{c.instructions+=4;NFSU2_TR(0x4938f5);
__builtin_memmove((R+24),(R+0),4);
}
B4938f7:{NFSU2_TR(0x4938f7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4938f9:{NFSU2_TR(0x4938f9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4938fd:{NFSU2_TR(0x4938fd);
if(r1(R+518)){{goto L4939a7;}}
}
B493903:L493903:{c.instructions+=4;NFSU2_TR(0x493903);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493904:{NFSU2_TR(0x493904);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B493908:{NFSU2_TR(0x493908);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493909:{NFSU2_TR(0x493909);
__builtin_memmove((R+16),(R+16),4);
}
B493910:L493910:{c.instructions+=2;NFSU2_TR(0x493910);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B493915:{NFSU2_TR(0x493915);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L493920;}}
}
B493917:L493917:{c.instructions+=2;NFSU2_TR(0x493917);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493918:{NFSU2_TR(0x493918);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49391dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x493800u);}goto L493800;}
}
B49391d:L49391d:{c.instructions+=1;NFSU2_TR(0x49391d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B493920:L493920:{c.instructions+=4;NFSU2_TR(0x493920);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B493926:{NFSU2_TR(0x493926);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49392c:{NFSU2_TR(0x49392c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49392e:{NFSU2_TR(0x49392e);
if(r1(R+518)){{goto L49399b;}}
}
B493930:L493930:{c.instructions+=2;NFSU2_TR(0x493930);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B493933:{NFSU2_TR(0x493933);
if(r1(R+518)){{goto L49393d;}}
}
B493935:L493935:{c.instructions+=3;NFSU2_TR(0x493935);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B493937:{NFSU2_TR(0x493937);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B493939:{NFSU2_TR(0x493939);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x493930u);}goto L493930;}}
}
B49393b:L49393b:{c.instructions+=1;NFSU2_TR(0x49393b);
{goto L49399b;}
}
B49393d:L49393d:{c.instructions+=5;NFSU2_TR(0x49393d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B493940:{NFSU2_TR(0x493940);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B493942:{NFSU2_TR(0x493942);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493944:{NFSU2_TR(0x493944);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B493948:{NFSU2_TR(0x493948);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L49399b;}}
}
B49394a:L49394a:{c.instructions+=1;NFSU2_TR(0x49394a);
__builtin_memmove((R+12),(R+12),4);
}
B493950:L493950:{c.instructions+=4;NFSU2_TR(0x493950);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B493953:{NFSU2_TR(0x493953);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B493957:{NFSU2_TR(0x493957);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493959:{NFSU2_TR(0x493959);
if(r1(R+518)){{goto L49398b;}}
}
B49395b:L49395b:{c.instructions+=4;NFSU2_TR(0x49395b);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x19ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B49395e:{NFSU2_TR(0x49395e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B493960:{NFSU2_TR(0x493960);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B493962:{NFSU2_TR(0x493962);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L49398b;}}
}
B493964:L493964:{c.instructions+=5;NFSU2_TR(0x493964);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B493967:{NFSU2_TR(0x493967);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B49396b:{NFSU2_TR(0x49396b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B49396e:{NFSU2_TR(0x49396e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B493971:{NFSU2_TR(0x493971);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49397e;}}
}
B493973:L493973:{c.instructions+=3;NFSU2_TR(0x493973);
__builtin_memmove((R+20),gp(0x864f60),4);
}
B493979:{NFSU2_TR(0x493979);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+4))));
}
B49397b:{NFSU2_TR(0x49397b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49397e:L49397e:{c.instructions+=4;NFSU2_TR(0x49397e);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x19ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B493982:{NFSU2_TR(0x493982);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B493983:{NFSU2_TR(0x493983);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B493985:{NFSU2_TR(0x493985);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x493964u);}goto L493964;}}
}
B493987:L493987:{c.instructions+=1;NFSU2_TR(0x493987);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49398b:L49398b:{c.instructions+=5;NFSU2_TR(0x49398b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49398e:{NFSU2_TR(0x49398e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B49398f:{NFSU2_TR(0x49398f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B493991:{NFSU2_TR(0x493991);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B493995:{NFSU2_TR(0x493995);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x493950u);}goto L493950;}}
}
B493997:L493997:{c.instructions+=1;NFSU2_TR(0x493997);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49399b:L49399b:{c.instructions+=3;NFSU2_TR(0x49399b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B49399d:{NFSU2_TR(0x49399d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49399f:{NFSU2_TR(0x49399f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x493910u);}goto L493910;}}
}
B4939a5:L4939a5:{c.instructions+=2;NFSU2_TR(0x4939a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4939a6:{NFSU2_TR(0x4939a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4939a7:L4939a7:{c.instructions+=4;NFSU2_TR(0x4939a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4939a8:{NFSU2_TR(0x4939a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4939a9:{NFSU2_TR(0x4939a9);
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
B4939ac:{NFSU2_TR(0x4939ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4939b0:L4939b0:{c.instructions+=9;NFSU2_TR(0x4939b0);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4939b4:{NFSU2_TR(0x4939b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4939b7:{NFSU2_TR(0x4939b7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4939b8:{NFSU2_TR(0x4939b8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4939b9:{NFSU2_TR(0x4939b9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4939ba:{NFSU2_TR(0x4939ba);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4939bc:{NFSU2_TR(0x4939bc);
__builtin_memmove((R+0),gp(0x864f60),4);
}
B4939c1:{NFSU2_TR(0x4939c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4939c2:{NFSU2_TR(0x4939c2);
if(r1(R+518)){{goto L493afd;}}
}
B4939c8:L4939c8:{c.instructions+=2;NFSU2_TR(0x4939c8);
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
B4939ca:{NFSU2_TR(0x4939ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L493ba4;}}
}
B4939d0:L4939d0:{c.instructions+=3;NFSU2_TR(0x4939d0);
__builtin_memmove((R+28),gp(0x830d1c),4);
}
B4939d6:{NFSU2_TR(0x4939d6);
w4(R+4,u32(0x830d1cull));
}
B4939db:{NFSU2_TR(0x4939db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4939e0ull));
TAIL_STATIC(0x502fd0u,502);
}
B4939e0:L4939e0:{c.instructions+=3;NFSU2_TR(0x4939e0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4939e2:{NFSU2_TR(0x4939e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4939e6:{NFSU2_TR(0x4939e6);
if(r1(R+518)){{goto L493ba4;}}
}
B4939ec:L4939ec:{c.instructions+=1;NFSU2_TR(0x4939ec);
__builtin_memmove((R+16),(R+16),4);
}
B4939f0:L4939f0:{c.instructions+=2;NFSU2_TR(0x4939f0);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B4939f5:{NFSU2_TR(0x4939f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L493a00;}}
}
B4939f7:L4939f7:{c.instructions+=2;NFSU2_TR(0x4939f7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4939f8:{NFSU2_TR(0x4939f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4939fdull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x493800u);}goto L493800;}
}
B4939fd:L4939fd:{c.instructions+=1;NFSU2_TR(0x4939fd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B493a00:L493a00:{c.instructions+=5;NFSU2_TR(0x493a00);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B493a06:{NFSU2_TR(0x493a06);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B493a0c:{NFSU2_TR(0x493a0c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B493a0e:{NFSU2_TR(0x493a0e);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B493a13:{NFSU2_TR(0x493a13);
if(r1(R+518)){{goto L493ae9;}}
}
B493a19:L493a19:{c.instructions+=1;NFSU2_TR(0x493a19);
__builtin_memmove((R+16),(R+16),4);
}
B493a20:L493a20:{c.instructions+=6;NFSU2_TR(0x493a20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B493a22:{NFSU2_TR(0x493a22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B493a25:{NFSU2_TR(0x493a25);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B493a28:{NFSU2_TR(0x493a28);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B493a2c:{NFSU2_TR(0x493a2c);
u8 U[8];
__builtin_memmove((U+0),gp(0x82db08),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B493a32:{NFSU2_TR(0x493a32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L493a56;}}
}
B493a34:L493a34:{c.instructions+=2;NFSU2_TR(0x493a34);
u8 U[8];
__builtin_memmove((U+0),gp(0x82db08),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B493a3a:{NFSU2_TR(0x493a3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L493a52;}}
}
B493a3c:L493a3c:{c.instructions+=4;NFSU2_TR(0x493a3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B493a3e:{NFSU2_TR(0x493a3e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493a3f:{NFSU2_TR(0x493a3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B493a43:{NFSU2_TR(0x493a43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x493a48ull));
TAIL_STATIC(0x48fe00u,48f);
}
B493a48:L493a48:{c.instructions+=2;NFSU2_TR(0x493a48);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493a4a:{NFSU2_TR(0x493a4a);
if(r1(R+518)){{goto L493a52;}}
}
B493a4c:L493a4c:{c.instructions+=2;NFSU2_TR(0x493a4c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x53ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B493a50:{NFSU2_TR(0x493a50);
{goto L493a54;}
}
B493a52:L493a52:{c.instructions+=1;NFSU2_TR(0x493a52);
__builtin_memmove((R+0),(R+20),4);
}
B493a54:L493a54:{c.instructions+=1;NFSU2_TR(0x493a54);
__builtin_memmove((R+20),(R+0),4);
}
B493a56:L493a56:{c.instructions+=2;NFSU2_TR(0x493a56);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B493a59:{NFSU2_TR(0x493a59);
if(r1(R+518)){{goto L493a77;}}
}
B493a5b:L493a5b:{c.instructions+=6;NFSU2_TR(0x493a5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B493a5d:{NFSU2_TR(0x493a5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B493a60:{NFSU2_TR(0x493a60);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B493a62:{NFSU2_TR(0x493a62);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493a63:{NFSU2_TR(0x493a63);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B493a66:{NFSU2_TR(0x493a66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x493a6bull));
TAIL_STATIC(0x440ef0u,440);
}
B493a6b:L493a6b:{c.instructions+=3;NFSU2_TR(0x493a6b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B493a6e:{NFSU2_TR(0x493a6e);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))-u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B493a72:{NFSU2_TR(0x493a72);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B493a77:L493a77:{c.instructions+=4;NFSU2_TR(0x493a77);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B493a7b:{NFSU2_TR(0x493a7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B493a81:{NFSU2_TR(0x493a81);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B493a83:{NFSU2_TR(0x493a83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x493a20u);}goto L493a20;}}
}
B493a85:L493a85:{c.instructions+=3;NFSU2_TR(0x493a85);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B493a89:{NFSU2_TR(0x493a89);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B493a8b:{NFSU2_TR(0x493a8b);
if(r1(R+518)){{goto L493ae9;}}
}
B493a8d:L493a8d:{c.instructions+=4;NFSU2_TR(0x493a8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B493a93:{NFSU2_TR(0x493a93);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((R+4),(U+0),4);
}
B493a99:{NFSU2_TR(0x493a99);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B493a9b:{NFSU2_TR(0x493a9b);
if(r1(R+518)){{goto L493ab1;}}
}
B493a9d:L493a9d:{c.instructions+=1;NFSU2_TR(0x493a9d);
__builtin_memmove((R+4),(R+4),4);
}
B493aa0:L493aa0:{c.instructions+=3;NFSU2_TR(0x493aa0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B493aa4:{NFSU2_TR(0x493aa4);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B493aa7:{NFSU2_TR(0x493aa7);
if(r1(R+518)){{goto L493abf;}}
}
B493aa9:L493aa9:{c.instructions+=3;NFSU2_TR(0x493aa9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B493aab:{NFSU2_TR(0x493aab);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B493aad:{NFSU2_TR(0x493aad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x493aa0u);}goto L493aa0;}}
}
B493aaf:L493aaf:{c.instructions+=1;NFSU2_TR(0x493aaf);
{goto L493ab5;}
}
B493ab1:L493ab1:{c.instructions+=1;NFSU2_TR(0x493ab1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B493ab5:L493ab5:{c.instructions+=2;NFSU2_TR(0x493ab5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493ab6:{NFSU2_TR(0x493ab6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x493abbull));
TAIL_STATIC(0x4cbab0u,4cb);
}
B493abb:L493abb:{c.instructions+=1;NFSU2_TR(0x493abb);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B493abf:L493abf:{c.instructions+=4;NFSU2_TR(0x493abf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B493ac2:{NFSU2_TR(0x493ac2);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B493ac4:{NFSU2_TR(0x493ac4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493ac6:{NFSU2_TR(0x493ac6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L493ae9;}}
}
B493ac8:L493ac8:{c.instructions+=1;NFSU2_TR(0x493ac8);
{goto L493ad0;}
}
B493ad0:L493ad0:{c.instructions+=4;NFSU2_TR(0x493ad0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B493ad3:{NFSU2_TR(0x493ad3);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B493ad7:{NFSU2_TR(0x493ad7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493ad9:{NFSU2_TR(0x493ad9);
if(r1(R+518)){{goto L493ae1;}}
}
B493adb:L493adb:{c.instructions+=2;NFSU2_TR(0x493adb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493adc:{NFSU2_TR(0x493adc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x493ae1ull));
TAIL_STATIC(0x4907e0u,490);
}
B493ae1:L493ae1:{c.instructions+=4;NFSU2_TR(0x493ae1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B493ae4:{NFSU2_TR(0x493ae4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B493ae5:{NFSU2_TR(0x493ae5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B493ae7:{NFSU2_TR(0x493ae7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x493ad0u);}goto L493ad0;}}
}
B493ae9:L493ae9:{c.instructions+=3;NFSU2_TR(0x493ae9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B493aeb:{NFSU2_TR(0x493aeb);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B493aef:{NFSU2_TR(0x493aef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4939f0u);}goto L4939f0;}}
}
B493af5:L493af5:{c.instructions+=6;NFSU2_TR(0x493af5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B493af6:{NFSU2_TR(0x493af6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B493af7:{NFSU2_TR(0x493af7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B493af8:{NFSU2_TR(0x493af8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B493af9:{NFSU2_TR(0x493af9);
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
B493afc:{NFSU2_TR(0x493afc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B493afd:L493afd:{c.instructions+=2;NFSU2_TR(0x493afd);
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
B493aff:{NFSU2_TR(0x493aff);
if(r1(R+518)){{goto L493b16;}}
}
B493b01:L493b01:{c.instructions+=3;NFSU2_TR(0x493b01);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B493b05:{NFSU2_TR(0x493b05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493b06:{NFSU2_TR(0x493b06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x493b0bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4938e0u);}goto L4938e0;}
}
B493b0b:L493b0b:{c.instructions+=7;NFSU2_TR(0x493b0b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B493b0e:{NFSU2_TR(0x493b0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B493b0f:{NFSU2_TR(0x493b0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B493b10:{NFSU2_TR(0x493b10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B493b11:{NFSU2_TR(0x493b11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B493b12:{NFSU2_TR(0x493b12);
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
B493b15:{NFSU2_TR(0x493b15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B493b16:L493b16:{c.instructions+=3;NFSU2_TR(0x493b16);
__builtin_memmove((R+24),gp(0x830d1c),4);
}
B493b1c:{NFSU2_TR(0x493b1c);
w4(R+4,u32(0x830d1cull));
}
B493b21:{NFSU2_TR(0x493b21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x493b26ull));
TAIL_STATIC(0x502fd0u,502);
}
B493b26:L493b26:{c.instructions+=3;NFSU2_TR(0x493b26);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B493b28:{NFSU2_TR(0x493b28);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B493b2c:{NFSU2_TR(0x493b2c);
if(r1(R+518)){{goto L493ba4;}}
}
B493b2e:L493b2e:{c.instructions+=1;NFSU2_TR(0x493b2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B493b32:L493b32:{c.instructions+=2;NFSU2_TR(0x493b32);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B493b37:{NFSU2_TR(0x493b37);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L493b42;}}
}
B493b39:L493b39:{c.instructions+=2;NFSU2_TR(0x493b39);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493b3a:{NFSU2_TR(0x493b3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x493b3full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x493800u);}goto L493800;}
}
B493b3f:L493b3f:{c.instructions+=1;NFSU2_TR(0x493b3f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B493b42:L493b42:{c.instructions+=4;NFSU2_TR(0x493b42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B493b48:{NFSU2_TR(0x493b48);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+4),(U+0),4);
}
B493b4e:{NFSU2_TR(0x493b4e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B493b50:{NFSU2_TR(0x493b50);
if(r1(R+518)){{goto L493b9c;}}
}
B493b52:L493b52:{c.instructions+=2;NFSU2_TR(0x493b52);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B493b55:{NFSU2_TR(0x493b55);
if(r1(R+518)){{goto L493b5f;}}
}
B493b57:L493b57:{c.instructions+=3;NFSU2_TR(0x493b57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B493b59:{NFSU2_TR(0x493b59);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B493b5b:{NFSU2_TR(0x493b5b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x493b52u);}goto L493b52;}}
}
B493b5d:L493b5d:{c.instructions+=1;NFSU2_TR(0x493b5d);
{goto L493b9c;}
}
B493b5f:L493b5f:{c.instructions+=5;NFSU2_TR(0x493b5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B493b62:{NFSU2_TR(0x493b62);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B493b64:{NFSU2_TR(0x493b64);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B493b66:{NFSU2_TR(0x493b66);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493b68:{NFSU2_TR(0x493b68);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L493b9c;}}
}
B493b6a:L493b6a:{c.instructions+=1;NFSU2_TR(0x493b6a);
__builtin_memmove((R+12),(R+12),4);
}
B493b70:L493b70:{c.instructions+=4;NFSU2_TR(0x493b70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B493b73:{NFSU2_TR(0x493b73);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B493b77:{NFSU2_TR(0x493b77);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493b79:{NFSU2_TR(0x493b79);
if(r1(R+518)){{goto L493b87;}}
}
B493b7b:L493b7b:{c.instructions+=2;NFSU2_TR(0x493b7b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493b7c:{NFSU2_TR(0x493b7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x493b81ull));
TAIL_STATIC(0x490850u,490);
}
B493b81:L493b81:{c.instructions+=2;NFSU2_TR(0x493b81);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B493b83:{NFSU2_TR(0x493b83);
if(r1(R+518)){{goto L493b87;}}
}
B493b85:L493b85:{c.instructions+=1;NFSU2_TR(0x493b85);
w1(R+12,u8(0x1ull));
}
B493b87:L493b87:{c.instructions+=4;NFSU2_TR(0x493b87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B493b8a:{NFSU2_TR(0x493b8a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B493b8b:{NFSU2_TR(0x493b8b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B493b8d:{NFSU2_TR(0x493b8d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x493b70u);}goto L493b70;}}
}
B493b8f:L493b8f:{c.instructions+=2;NFSU2_TR(0x493b8f);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B493b91:{NFSU2_TR(0x493b91);
if(r1(R+518)){{goto L493b9c;}}
}
B493b93:L493b93:{c.instructions+=2;NFSU2_TR(0x493b93);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493b94:{NFSU2_TR(0x493b94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x493b99ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x493800u);}goto L493800;}
}
B493b99:L493b99:{c.instructions+=1;NFSU2_TR(0x493b99);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B493b9c:L493b9c:{c.instructions+=3;NFSU2_TR(0x493b9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B493b9e:{NFSU2_TR(0x493b9e);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B493ba2:{NFSU2_TR(0x493ba2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x493b32u);}goto L493b32;}}
}
B493ba4:L493ba4:{c.instructions+=6;NFSU2_TR(0x493ba4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B493ba5:{NFSU2_TR(0x493ba5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B493ba6:{NFSU2_TR(0x493ba6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B493ba7:{NFSU2_TR(0x493ba7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B493ba8:{NFSU2_TR(0x493ba8);
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
B493bab:{NFSU2_TR(0x493bab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B493bb0:L493bb0:{c.instructions+=4;NFSU2_TR(0x493bb0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493bb1:{NFSU2_TR(0x493bb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B493bb5:{NFSU2_TR(0x493bb5);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x80134010ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B493bbb:{NFSU2_TR(0x493bbb);
if(r1(R+518)){{goto L493bc1;}}
}
B493bbd:L493bbd:{c.instructions+=3;NFSU2_TR(0x493bbd);
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
B493bbf:{NFSU2_TR(0x493bbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B493bc0:{NFSU2_TR(0x493bc0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B493bc1:L493bc1:{c.instructions+=12;NFSU2_TR(0x493bc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B493bc4:{NFSU2_TR(0x493bc4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493bc5:{NFSU2_TR(0x493bc5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493bc6:{NFSU2_TR(0x493bc6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493bc7:{NFSU2_TR(0x493bc7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493bc8:{NFSU2_TR(0x493bc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B493bcb:{NFSU2_TR(0x493bcb);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B493bcf:{NFSU2_TR(0x493bcf);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B493bd1:{NFSU2_TR(0x493bd1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B493bd3:{NFSU2_TR(0x493bd3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B493bd5:{NFSU2_TR(0x493bd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B493bdd:{NFSU2_TR(0x493bdd);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L493d20;}}
}
B493be3:L493be3:{c.instructions+=3;NFSU2_TR(0x493be3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B493be5:{NFSU2_TR(0x493be5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x134011ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493bea:{NFSU2_TR(0x493bea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L493c02;}}
}
B493bec:L493bec:{c.instructions+=6;NFSU2_TR(0x493bec);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17ull))));
__builtin_memmove((R+28),(U+0),4);
}
B493bef:{NFSU2_TR(0x493bef);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffff0ull))));
}
B493bf2:{NFSU2_TR(0x493bf2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B493bf8:{NFSU2_TR(0x493bf8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B493bfa:{NFSU2_TR(0x493bfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B493bfd:{NFSU2_TR(0x493bfd);
{goto L493d09;}
}
B493c02:L493c02:{c.instructions+=2;NFSU2_TR(0x493c02);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x134012ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493c07:{NFSU2_TR(0x493c07);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L493c14;}}
}
B493c09:L493c09:{c.instructions+=3;NFSU2_TR(0x493c09);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B493c0c:{NFSU2_TR(0x493c0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B493c0f:{NFSU2_TR(0x493c0f);
{goto L493d09;}
}
B493c14:L493c14:{c.instructions+=2;NFSU2_TR(0x493c14);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x134013ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493c19:{NFSU2_TR(0x493c19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L493c26;}}
}
B493c1b:L493c1b:{c.instructions+=3;NFSU2_TR(0x493c1b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B493c1e:{NFSU2_TR(0x493c1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B493c21:{NFSU2_TR(0x493c21);
{goto L493d09;}
}
B493c26:L493c26:{c.instructions+=2;NFSU2_TR(0x493c26);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x134017ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493c2b:{NFSU2_TR(0x493c2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L493c44;}}
}
B493c2d:L493c2d:{c.instructions+=5;NFSU2_TR(0x493c2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B493c30:{NFSU2_TR(0x493c30);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B493c36:{NFSU2_TR(0x493c36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B493c39:{NFSU2_TR(0x493c39);
s4(0x82d38c,u32(u32(m4(0x82d38c))+u32(r4(R+8))));
}
B493c3f:{NFSU2_TR(0x493c3f);
{goto L493d09;}
}
B493c44:L493c44:{c.instructions+=2;NFSU2_TR(0x493c44);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x134018ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493c49:{NFSU2_TR(0x493c49);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L493c74;}}
}
B493c4b:L493c4b:{c.instructions+=10;NFSU2_TR(0x493c4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B493c51:{NFSU2_TR(0x493c51);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B493c54:{NFSU2_TR(0x493c54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B493c56:{NFSU2_TR(0x493c56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B493c59:{NFSU2_TR(0x493c59);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B493c5f:{NFSU2_TR(0x493c5f);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B493c62:{NFSU2_TR(0x493c62);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B493c66:{NFSU2_TR(0x493c66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B493c69:{NFSU2_TR(0x493c69);
s4(0x82d38c,u32(u32(m4(0x82d38c))+u32(r4(R+4))));
}
B493c6f:{NFSU2_TR(0x493c6f);
{goto L493d09;}
}
B493c74:L493c74:{c.instructions+=2;NFSU2_TR(0x493c74);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x134019ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493c79:{NFSU2_TR(0x493c79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L493ca7;}}
}
B493c7b:L493c7b:{c.instructions+=11;NFSU2_TR(0x493c7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B493c81:{NFSU2_TR(0x493c81);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B493c84:{NFSU2_TR(0x493c84);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B493c87:{NFSU2_TR(0x493c87);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B493c8d:{NFSU2_TR(0x493c8d);
w4(R+0,u32(0xaaaaaaabull));
}
B493c92:{NFSU2_TR(0x493c92);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w8(U+8,u64(r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(r4(U+4)));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(u64(r8(U+24))>>32));
w4(R+0,u32(r8(U+24)));
}
B493c95:{NFSU2_TR(0x493c95);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B493c98:{NFSU2_TR(0x493c98);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B493c9c:{NFSU2_TR(0x493c9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B493c9f:{NFSU2_TR(0x493c9f);
s4(0x82d38c,u32(u32(m4(0x82d38c))+u32(r4(R+8))));
}
B493ca5:{NFSU2_TR(0x493ca5);
{goto L493d09;}
}
B493ca7:L493ca7:{c.instructions+=2;NFSU2_TR(0x493ca7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x13401bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493cac:{NFSU2_TR(0x493cac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L493cc2;}}
}
B493cae:L493cae:{c.instructions+=5;NFSU2_TR(0x493cae);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B493cb1:{NFSU2_TR(0x493cb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B493cb7:{NFSU2_TR(0x493cb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B493cba:{NFSU2_TR(0x493cba);
s4(0x82d390,u32(u32(m4(0x82d390))+u32(r4(R+4))));
}
B493cc0:{NFSU2_TR(0x493cc0);
{goto L493d09;}
}
B493cc2:L493cc2:{c.instructions+=2;NFSU2_TR(0x493cc2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x13401aull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493cc7:{NFSU2_TR(0x493cc7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L493cf2;}}
}
B493cc9:L493cc9:{c.instructions+=13;NFSU2_TR(0x493cc9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17ull))));
__builtin_memmove((R+0),(U+0),4);
}
B493ccc:{NFSU2_TR(0x493ccc);
__builtin_memmove((R+8),(R+0),4);
}
B493cce:{NFSU2_TR(0x493cce);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffff0ull))));
}
B493cd1:{NFSU2_TR(0x493cd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B493cd7:{NFSU2_TR(0x493cd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B493cda:{NFSU2_TR(0x493cda);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff0ull))));
}
B493cdd:{NFSU2_TR(0x493cdd);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B493cdf:{NFSU2_TR(0x493cdf);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B493ce3:{NFSU2_TR(0x493ce3);
w4(R+0,u32(0xcccccccdull));
}
B493ce8:{NFSU2_TR(0x493ce8);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+8)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B493cea:{NFSU2_TR(0x493cea);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B493ced:{NFSU2_TR(0x493ced);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1bull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B493cf0:{NFSU2_TR(0x493cf0);
{goto L493d09;}
}
B493cf2:L493cf2:{c.instructions+=2;NFSU2_TR(0x493cf2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x80134100ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493cf7:{NFSU2_TR(0x493cf7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L493d09;}}
}
B493cf9:L493cf9:{c.instructions+=3;NFSU2_TR(0x493cf9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493cfa:{NFSU2_TR(0x493cfa);
__builtin_memmove((R+4),(R+28),4);
}
B493cfc:{NFSU2_TR(0x493cfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x493d01ull));
TAIL_STATIC(0x5cc280u,5cc);
}
B493d01:L493d01:{c.instructions+=2;NFSU2_TR(0x493d01);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493d03:{NFSU2_TR(0x493d03);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L493d09;}}
}
B493d05:L493d05:{c.instructions+=1;NFSU2_TR(0x493d05);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B493d09:L493d09:{c.instructions+=4;NFSU2_TR(0x493d09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B493d0c:{NFSU2_TR(0x493d0c);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B493d10:{NFSU2_TR(0x493d10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B493d12:{NFSU2_TR(0x493d12);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x493be3u);}goto L493be3;}}
}
B493d18:L493d18:{c.instructions+=2;NFSU2_TR(0x493d18);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B493d1a:{NFSU2_TR(0x493d1a);
if(r1(R+518)){{goto L493d20;}}
}
B493d1c:L493d1c:{c.instructions+=1;NFSU2_TR(0x493d1c);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xdull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B493d20:L493d20:{c.instructions+=4;NFSU2_TR(0x493d20);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B493d24:{NFSU2_TR(0x493d24);
__builtin_memmove((R+4),(R+28),4);
}
B493d26:{NFSU2_TR(0x493d26);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7cull))));
w2(U+4,u16(0xffffull));
s2(u32(r4(U+0)),r2(U+4));
}
B493d2c:{NFSU2_TR(0x493d2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x493d31ull));
TAIL_STATIC(0x4907a0u,490);
}
B493d31:L493d31:{c.instructions+=4;NFSU2_TR(0x493d31);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(s32(s8(r1(U+4)))));
}
B493d35:{NFSU2_TR(0x493d35);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493d37:{NFSU2_TR(0x493d37);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B493d3a:{NFSU2_TR(0x493d3a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L493d86;}}
}
B493d3c:L493d3c:{c.instructions+=2;NFSU2_TR(0x493d3c);
w4(R+4,u32(0x8358c0ull));
}
B493d41:{NFSU2_TR(0x493d41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x493d46ull));
TAIL_STATIC(0x431780u,431);
}
B493d46:L493d46:{c.instructions+=3;NFSU2_TR(0x493d46);
__builtin_memmove((R+4),gp(0x8358c0),4);
}
B493d4c:{NFSU2_TR(0x493d4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493d4e:{NFSU2_TR(0x493d4e);
if(r1(R+518)){{goto L493d55;}}
}
B493d50:L493d50:{c.instructions+=2;NFSU2_TR(0x493d50);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
}
B493d53:{NFSU2_TR(0x493d53);
{goto L493d57;}
}
B493d55:L493d55:{c.instructions+=1;NFSU2_TR(0x493d55);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B493d57:L493d57:{c.instructions+=2;NFSU2_TR(0x493d57);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B493d59:{NFSU2_TR(0x493d59);
if(r1(R+518)){{goto L493d77;}}
}
B493d5b:L493d5b:{c.instructions+=2;NFSU2_TR(0x493d5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B493d5e:{NFSU2_TR(0x493d5e);
__builtin_memmove((R+28),(R+28),4);
}
B493d60:L493d60:{c.instructions+=2;NFSU2_TR(0x493d60);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B493d63:{NFSU2_TR(0x493d63);
if(r1(R+518)){{goto L493d7d;}}
}
B493d65:L493d65:{c.instructions+=3;NFSU2_TR(0x493d65);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B493d68:{NFSU2_TR(0x493d68);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493d6a:{NFSU2_TR(0x493d6a);
if(r1(R+518)){{goto L493d71;}}
}
B493d6c:L493d6c:{c.instructions+=2;NFSU2_TR(0x493d6c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
}
B493d6f:{NFSU2_TR(0x493d6f);
{goto L493d73;}
}
B493d71:L493d71:{c.instructions+=1;NFSU2_TR(0x493d71);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B493d73:L493d73:{c.instructions+=2;NFSU2_TR(0x493d73);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B493d75:{NFSU2_TR(0x493d75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x493d60u);}goto L493d60;}}
}
B493d77:L493d77:{c.instructions+=1;NFSU2_TR(0x493d77);
__builtin_memmove((R+4),gp(0x7f399c),4);
}
B493d7d:L493d7d:{c.instructions+=4;NFSU2_TR(0x493d7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B493d80:{NFSU2_TR(0x493d80);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x8ull))));
}
B493d83:{NFSU2_TR(0x493d83);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B493d84:{NFSU2_TR(0x493d84);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x493d46u);}goto L493d46;}}
}
B493d86:L493d86:{c.instructions+=3;NFSU2_TR(0x493d86);
__builtin_memmove((R+0),gp(0x864f60),4);
}
B493d8b:{NFSU2_TR(0x493d8b);
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
B493d8d:{NFSU2_TR(0x493d8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L493dd7;}}
}
B493d8f:L493d8f:{c.instructions+=2;NFSU2_TR(0x493d8f);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B493d93:{NFSU2_TR(0x493d93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L493dd7;}}
}
B493d95:L493d95:{c.instructions+=4;NFSU2_TR(0x493d95);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B493d98:{NFSU2_TR(0x493d98);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493d9a:{NFSU2_TR(0x493d9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493d9b:{NFSU2_TR(0x493d9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x493da0ull));
TAIL_STATIC(0x48df90u,48d);
}
B493da0:L493da0:{c.instructions+=3;NFSU2_TR(0x493da0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B493da3:{NFSU2_TR(0x493da3);
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
B493da5:{NFSU2_TR(0x493da5);
if(r1(R+518)){{goto L493dd7;}}
}
B493da7:L493da7:{c.instructions+=6;NFSU2_TR(0x493da7);
w4(R+4,u32(0x100ull));
}
B493dac:{NFSU2_TR(0x493dac);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+4))));
s2(u32(r4(U+0)),r2(U+4));
}
B493db0:{NFSU2_TR(0x493db0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+4))));
s2(u32(r4(U+0)),r2(U+4));
}
B493db4:{NFSU2_TR(0x493db4);
__builtin_memmove((R+4),gp(0x82daa8),4);
}
B493dba:{NFSU2_TR(0x493dba);
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
B493dbc:{NFSU2_TR(0x493dbc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L493dd7;}}
}
B493dbe:L493dbe:{c.instructions+=6;NFSU2_TR(0x493dbe);
w4(R+4,u32(0x200ull));
}
B493dc3:{NFSU2_TR(0x493dc3);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+4))));
s2(u32(r4(U+0)),r2(U+4));
}
B493dc7:{NFSU2_TR(0x493dc7);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+4))));
s2(u32(r4(U+0)),r2(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B493dcb:{NFSU2_TR(0x493dcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B493dce:{NFSU2_TR(0x493dce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493dcf:{NFSU2_TR(0x493dcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x493dd4ull));
TAIL_STATIC(0x48df40u,48d);
}
B493dd4:L493dd4:{c.instructions+=1;NFSU2_TR(0x493dd4);
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
B493dd7:L493dd7:{c.instructions+=2;NFSU2_TR(0x493dd7);
__builtin_memmove((R+4),(R+28),4);
}
B493dd9:{NFSU2_TR(0x493dd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x493ddeull));
TAIL_STATIC(0x40cb20u,40c);
}
B493dde:L493dde:{c.instructions+=2;NFSU2_TR(0x493dde);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493de0:{NFSU2_TR(0x493de0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L493de6;}}
}
B493de2:L493de2:{c.instructions+=2;NFSU2_TR(0x493de2);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B493de4:{NFSU2_TR(0x493de4);
{goto L493dea;}
}
B493de6:L493de6:{c.instructions+=1;NFSU2_TR(0x493de6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B493dea:L493dea:{c.instructions+=9;NFSU2_TR(0x493dea);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B493ded:{NFSU2_TR(0x493ded);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B493df0:{NFSU2_TR(0x493df0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B493df3:{NFSU2_TR(0x493df3);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493df5:{NFSU2_TR(0x493df5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493df7:{NFSU2_TR(0x493df7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493df8:{NFSU2_TR(0x493df8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493df9:{NFSU2_TR(0x493df9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493dfa:{NFSU2_TR(0x493dfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x493dffull));
TAIL_STATIC(0x488bc0u,488);
}
B493dff:L493dff:{c.instructions+=3;NFSU2_TR(0x493dff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B493e02:{NFSU2_TR(0x493e02);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493e04:{NFSU2_TR(0x493e04);
if(r1(R+518)){{goto L493e44;}}
}
B493e06:L493e06:{c.instructions+=2;NFSU2_TR(0x493e06);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493e08:{NFSU2_TR(0x493e08);
if(r1(R+518)){{goto L493e0d;}}
}
B493e0a:L493e0a:{c.instructions+=1;NFSU2_TR(0x493e0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B493e0d:L493e0d:{c.instructions+=14;NFSU2_TR(0x493e0d);
__builtin_memmove((R+4),gp(0x835798),4);
}
B493e13:{NFSU2_TR(0x493e13);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B493e16:{NFSU2_TR(0x493e16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B493e18:{NFSU2_TR(0x493e18);
__builtin_memmove(gp(0x835798),(R+0),4);
}
B493e1d:{NFSU2_TR(0x493e1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B493e20:{NFSU2_TR(0x493e20);
u8 U[4];
w4(U+0,u32(0x835794ull));
s4(u32(r4(R+0)),r4(U+0));
}
B493e26:{NFSU2_TR(0x493e26);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B493e29:{NFSU2_TR(0x493e29);
__builtin_memmove((R+12),gp(0x830da0),4);
}
B493e2f:{NFSU2_TR(0x493e2f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1fffull))));
}
B493e34:{NFSU2_TR(0x493e34);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B493e35:{NFSU2_TR(0x493e35);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x830da4ull))));
}
B493e3a:{NFSU2_TR(0x493e3a);
__builtin_memmove(gp(0x830da0),(R+12),4);
}
B493e40:{NFSU2_TR(0x493e40);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(u8(0x1ull))));
s1(u32(r4(R+0)),r1(U+0));
}
B493e42:{NFSU2_TR(0x493e42);
{goto L493e68;}
}
B493e44:L493e44:{c.instructions+=2;NFSU2_TR(0x493e44);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493e46:{NFSU2_TR(0x493e46);
if(r1(R+518)){{goto L493e4f;}}
}
B493e48:L493e48:{c.instructions+=1;NFSU2_TR(0x493e48);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B493e4f:L493e4f:{c.instructions+=6;NFSU2_TR(0x493e4f);
__builtin_memmove((R+4),gp(0x83585c),4);
}
B493e55:{NFSU2_TR(0x493e55);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B493e58:{NFSU2_TR(0x493e58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B493e5a:{NFSU2_TR(0x493e5a);
__builtin_memmove(gp(0x83585c),(R+0),4);
}
B493e5f:{NFSU2_TR(0x493e5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B493e62:{NFSU2_TR(0x493e62);
u8 U[4];
w4(U+0,u32(0x835858ull));
s4(u32(r4(R+0)),r4(U+0));
}
B493e68:L493e68:{c.instructions+=16;NFSU2_TR(0x493e68);
__builtin_memmove((R+8),gp(0x82d384),4);
}
B493e6e:{NFSU2_TR(0x493e6e);
__builtin_memmove((R+4),gp(0x82d388),4);
}
B493e74:{NFSU2_TR(0x493e74);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B493e75:{NFSU2_TR(0x493e75);
__builtin_memmove(gp(0x82d384),(R+8),4);
}
B493e7b:{NFSU2_TR(0x493e7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B493e7f:{NFSU2_TR(0x493e7f);
s4(0x82dab0,u32(0x1ull));
}
B493e89:{NFSU2_TR(0x493e89);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B493e8c:{NFSU2_TR(0x493e8c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+0)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+0)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B493e8e:{NFSU2_TR(0x493e8e);
__builtin_memmove((R+0),(R+28),4);
}
B493e90:{NFSU2_TR(0x493e90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B493e91:{NFSU2_TR(0x493e91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B493e92:{NFSU2_TR(0x493e92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B493e93:{NFSU2_TR(0x493e93);
__builtin_memmove(gp(0x82d388),(R+4),4);
}
B493e99:{NFSU2_TR(0x493e99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B493e9a:{NFSU2_TR(0x493e9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B493e9b:{NFSU2_TR(0x493e9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B493ea0:L493ea0:{c.instructions+=3;NFSU2_TR(0x493ea0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B493ea4:{NFSU2_TR(0x493ea4);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x80134001ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B493eaa:{NFSU2_TR(0x493eaa);
if(r1(R+518)){{goto L493eaf;}}
}
B493eac:L493eac:{c.instructions+=2;NFSU2_TR(0x493eac);
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
B493eae:{NFSU2_TR(0x493eae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B493eaf:L493eaf:{c.instructions+=9;NFSU2_TR(0x493eaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B493eb2:{NFSU2_TR(0x493eb2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493eb3:{NFSU2_TR(0x493eb3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493eb4:{NFSU2_TR(0x493eb4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493eb5:{NFSU2_TR(0x493eb5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B493eb8:{NFSU2_TR(0x493eb8);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B493ebc:{NFSU2_TR(0x493ebc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B493ebe:{NFSU2_TR(0x493ebe);
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
B493ec0:{NFSU2_TR(0x493ec0);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L493f18;}}
}
B493ec2:L493ec2:{c.instructions+=3;NFSU2_TR(0x493ec2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B493ec4:{NFSU2_TR(0x493ec4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x134002ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493ec9:{NFSU2_TR(0x493ec9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L493eef;}}
}
B493ecb:L493ecb:{c.instructions+=7;NFSU2_TR(0x493ecb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B493ece:{NFSU2_TR(0x493ece);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B493ed1:{NFSU2_TR(0x493ed1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B493ed4:{NFSU2_TR(0x493ed4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B493ed6:{NFSU2_TR(0x493ed6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493ed7:{NFSU2_TR(0x493ed7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B493eda:{NFSU2_TR(0x493eda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x493edfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x493790u);}goto L493790;}
}
B493edf:L493edf:{c.instructions+=5;NFSU2_TR(0x493edf);
__builtin_memmove((R+0),gp(0x82d380),4);
}
B493ee4:{NFSU2_TR(0x493ee4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B493ee7:{NFSU2_TR(0x493ee7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B493ee8:{NFSU2_TR(0x493ee8);
__builtin_memmove(gp(0x82d380),(R+0),4);
}
B493eed:{NFSU2_TR(0x493eed);
{goto L493f0d;}
}
B493eef:L493eef:{c.instructions+=2;NFSU2_TR(0x493eef);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x134003ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493ef4:{NFSU2_TR(0x493ef4);
if(r1(R+518)){{goto L493f0d;}}
}
B493ef6:L493ef6:{c.instructions+=2;NFSU2_TR(0x493ef6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x134004ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493efb:{NFSU2_TR(0x493efb);
if(r1(R+518)){{goto L493f0d;}}
}
B493efd:L493efd:{c.instructions+=2;NFSU2_TR(0x493efd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x80134008ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493f02:{NFSU2_TR(0x493f02);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L493f0d;}}
}
B493f04:L493f04:{c.instructions+=2;NFSU2_TR(0x493f04);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493f05:{NFSU2_TR(0x493f05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x493f0aull));
TAIL_STATIC(0x5bb720u,5bb);
}
B493f0a:L493f0a:{c.instructions+=1;NFSU2_TR(0x493f0a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B493f0d:L493f0d:{c.instructions+=4;NFSU2_TR(0x493f0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B493f10:{NFSU2_TR(0x493f10);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B493f14:{NFSU2_TR(0x493f14);
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
B493f16:{NFSU2_TR(0x493f16);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x493ec2u);}goto L493ec2;}}
}
B493f18:L493f18:{c.instructions+=5;NFSU2_TR(0x493f18);
__builtin_memmove((R+0),(R+28),4);
}
B493f1a:{NFSU2_TR(0x493f1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B493f1b:{NFSU2_TR(0x493f1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B493f1c:{NFSU2_TR(0x493f1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B493f1d:{NFSU2_TR(0x493f1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B493f20:L493f20:{c.instructions+=4;NFSU2_TR(0x493f20);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493f21:{NFSU2_TR(0x493f21);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B493f25:{NFSU2_TR(0x493f25);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x80134010ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x80134010ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x80134010ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B493f2b:{NFSU2_TR(0x493f2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x49405au,494);}
}
B493f31:L493f31:{c.instructions+=9;NFSU2_TR(0x493f31);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B493f34:{NFSU2_TR(0x493f34);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493f35:{NFSU2_TR(0x493f35);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493f36:{NFSU2_TR(0x493f36);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493f37:{NFSU2_TR(0x493f37);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B493f3a:{NFSU2_TR(0x493f3a);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B493f3e:{NFSU2_TR(0x493f3e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B493f40:{NFSU2_TR(0x493f40);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B493f42:{NFSU2_TR(0x493f42);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L493fd0;}}
}
B493f48:L493f48:{c.instructions+=2;NFSU2_TR(0x493f48);
__builtin_memmove((R+4),gp(0x82d38c),4);
}
B493f4e:{NFSU2_TR(0x493f4e);
__builtin_memmove((R+28),(R+28),4);
}
B493f50:L493f50:{c.instructions+=3;NFSU2_TR(0x493f50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B493f52:{NFSU2_TR(0x493f52);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x134011ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493f57:{NFSU2_TR(0x493f57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L493f61;}}
}
B493f59:L493f59:{c.instructions+=3;NFSU2_TR(0x493f59);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17ull))));
__builtin_memmove((R+28),(U+0),4);
}
B493f5c:{NFSU2_TR(0x493f5c);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffff0ull))));
}
B493f5f:{NFSU2_TR(0x493f5f);
{goto L493fc5;}
}
B493f61:L493f61:{c.instructions+=2;NFSU2_TR(0x493f61);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x134017ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493f66:{NFSU2_TR(0x493f66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L493f73;}}
}
B493f68:L493f68:{c.instructions+=3;NFSU2_TR(0x493f68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B493f6b:{NFSU2_TR(0x493f6b);
__builtin_memmove(gp(0x82d38c),(R+4),4);
}
B493f71:{NFSU2_TR(0x493f71);
{goto L493fc5;}
}
B493f73:L493f73:{c.instructions+=2;NFSU2_TR(0x493f73);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x134018ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493f78:{NFSU2_TR(0x493f78);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L493f85;}}
}
B493f7a:L493f7a:{c.instructions+=3;NFSU2_TR(0x493f7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B493f7d:{NFSU2_TR(0x493f7d);
__builtin_memmove(gp(0x82d38c),(R+4),4);
}
B493f83:{NFSU2_TR(0x493f83);
{goto L493fc5;}
}
B493f85:L493f85:{c.instructions+=2;NFSU2_TR(0x493f85);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x134019ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493f8a:{NFSU2_TR(0x493f8a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L493f97;}}
}
B493f8c:L493f8c:{c.instructions+=3;NFSU2_TR(0x493f8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B493f8f:{NFSU2_TR(0x493f8f);
__builtin_memmove(gp(0x82d38c),(R+4),4);
}
B493f95:{NFSU2_TR(0x493f95);
{goto L493fc5;}
}
B493f97:L493f97:{c.instructions+=2;NFSU2_TR(0x493f97);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x13401bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493f9c:{NFSU2_TR(0x493f9c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L493fa9;}}
}
B493f9e:L493f9e:{c.instructions+=3;NFSU2_TR(0x493f9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B493fa1:{NFSU2_TR(0x493fa1);
s4(0x82d390,u32(u32(m4(0x82d390))-u32(r4(R+8))));
}
B493fa7:{NFSU2_TR(0x493fa7);
{goto L493fc5;}
}
B493fa9:L493fa9:{c.instructions+=2;NFSU2_TR(0x493fa9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x13401aull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493fae:{NFSU2_TR(0x493fae);
if(r1(R+518)){{goto L493fc5;}}
}
B493fb0:L493fb0:{c.instructions+=2;NFSU2_TR(0x493fb0);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x80134100ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x80134100ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x80134100ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B493fb5:{NFSU2_TR(0x493fb5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L493fc5;}}
}
B493fb7:L493fb7:{c.instructions+=3;NFSU2_TR(0x493fb7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493fb8:{NFSU2_TR(0x493fb8);
__builtin_memmove((R+4),(R+28),4);
}
B493fba:{NFSU2_TR(0x493fba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x493fbfull));
TAIL_STATIC(0x5ce7d0u,5ce);
}
B493fbf:L493fbf:{c.instructions+=1;NFSU2_TR(0x493fbf);
__builtin_memmove((R+4),gp(0x82d38c),4);
}
B493fc5:L493fc5:{c.instructions+=4;NFSU2_TR(0x493fc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B493fc8:{NFSU2_TR(0x493fc8);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B493fcc:{NFSU2_TR(0x493fcc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B493fce:{NFSU2_TR(0x493fce);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x493f50u);}goto L493f50;}}
}
B493fd0:L493fd0:{c.instructions+=3;NFSU2_TR(0x493fd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B493fd4:{NFSU2_TR(0x493fd4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493fd6:{NFSU2_TR(0x493fd6);
if(r1(R+518)){TAIL_STATIC(0x494017u,494);}
}
B493fd8:L493fd8:{c.instructions+=9;NFSU2_TR(0x493fd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B493fdb:{NFSU2_TR(0x493fdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B493fde:{NFSU2_TR(0x493fde);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B493fe1:{NFSU2_TR(0x493fe1);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493fe3:{NFSU2_TR(0x493fe3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493fe5:{NFSU2_TR(0x493fe5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493fe6:{NFSU2_TR(0x493fe6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493fe7:{NFSU2_TR(0x493fe7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B493fe8:{NFSU2_TR(0x493fe8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x493fedull));
TAIL_STATIC(0x488bc0u,488);
}
B493fed:L493fed:{c.instructions+=3;NFSU2_TR(0x493fed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B493ff0:{NFSU2_TR(0x493ff0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B493ff2:{NFSU2_TR(0x493ff2);
if(r1(R+518)){TAIL_STATIC(0x494017u,494);}
}
B493ff4:L493ff4:{c.instructions+=3;NFSU2_TR(0x493ff4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B493ffb:{NFSU2_TR(0x493ffb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B493ffe:{NFSU2_TR(0x493ffe);
__builtin_memmove((R+4),gp(0x830da0),4);
TAIL_STATIC(0x494004u,494);
}
XIT:NFSU2_TR_EXIT(0x493,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
