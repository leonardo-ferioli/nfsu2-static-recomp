#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_63b(u8* __restrict R,Cpu& c);
u32 body_692(u8* __restrict R,Cpu& c);
u32 body_693(u8* __restrict R,Cpu& c);
u32 body_695(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x694,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x694,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_694(u8* __restrict R,Cpu& c);
u32 page_694(Cpu& c){return body_694(c.regs.data(),c);}
__attribute__((noinline)) u32 body_694(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x694000:goto L694000;
case 0x694002:goto L694002;
case 0x694004:c.instructions+=1;goto B694004;
case 0x694006:goto L694006;
case 0x694009:c.instructions+=1;goto B694009;
case 0x69400b:goto L69400b;
case 0x69400d:c.instructions+=5;goto B69400d;
case 0x69400e:c.instructions+=4;goto B69400e;
case 0x694011:c.instructions+=3;goto B694011;
case 0x694014:c.instructions+=2;goto B694014;
case 0x694015:c.instructions+=1;goto B694015;
case 0x69401a:goto L69401a;
case 0x69401c:c.instructions+=1;goto B69401c;
case 0x69401e:goto L69401e;
case 0x694020:c.instructions+=1;goto B694020;
case 0x694022:goto L694022;
case 0x694024:c.instructions+=5;goto B694024;
case 0x694025:c.instructions+=4;goto B694025;
case 0x694026:c.instructions+=3;goto B694026;
case 0x694029:c.instructions+=2;goto B694029;
case 0x69402a:c.instructions+=1;goto B69402a;
case 0x69402f:goto L69402f;
case 0x694031:c.instructions+=1;goto B694031;
case 0x694033:goto L694033;
case 0x694035:c.instructions+=5;goto B694035;
case 0x694038:c.instructions+=4;goto B694038;
case 0x69403b:c.instructions+=3;goto B69403b;
case 0x69403c:c.instructions+=2;goto B69403c;
case 0x69403d:c.instructions+=1;goto B69403d;
case 0x694042:goto L694042;
case 0x694044:c.instructions+=1;goto B694044;
case 0x694046:goto L694046;
case 0x694048:c.instructions+=5;goto B694048;
case 0x69404b:c.instructions+=4;goto B69404b;
case 0x69404e:c.instructions+=3;goto B69404e;
case 0x69404f:c.instructions+=2;goto B69404f;
case 0x694050:c.instructions+=1;goto B694050;
case 0x694055:goto L694055;
case 0x694058:c.instructions+=4;goto B694058;
case 0x69405b:c.instructions+=3;goto B69405b;
case 0x69405c:c.instructions+=2;goto B69405c;
case 0x69405d:c.instructions+=1;goto B69405d;
case 0x694062:goto L694062;
case 0x694064:goto L694064;
case 0x694065:c.instructions+=3;goto B694065;
case 0x694068:c.instructions+=2;goto B694068;
case 0x69406b:c.instructions+=1;goto B69406b;
case 0x694070:goto L694070;
case 0x694074:c.instructions+=3;goto B694074;
case 0x694075:c.instructions+=2;goto B694075;
case 0x694076:c.instructions+=1;goto B694076;
case 0x694078:goto L694078;
case 0x69407a:c.instructions+=22;goto B69407a;
case 0x69407d:c.instructions+=21;goto B69407d;
case 0x694080:c.instructions+=20;goto B694080;
case 0x694083:c.instructions+=19;goto B694083;
case 0x694087:c.instructions+=18;goto B694087;
case 0x69408a:c.instructions+=17;goto B69408a;
case 0x694091:c.instructions+=16;goto B694091;
case 0x694095:c.instructions+=15;goto B694095;
case 0x694099:c.instructions+=14;goto B694099;
case 0x69409d:c.instructions+=13;goto B69409d;
case 0x6940a1:c.instructions+=12;goto B6940a1;
case 0x6940a9:c.instructions+=11;goto B6940a9;
case 0x6940b1:c.instructions+=10;goto B6940b1;
case 0x6940b4:c.instructions+=9;goto B6940b4;
case 0x6940b7:c.instructions+=8;goto B6940b7;
case 0x6940bb:c.instructions+=7;goto B6940bb;
case 0x6940bf:c.instructions+=6;goto B6940bf;
case 0x6940c3:c.instructions+=5;goto B6940c3;
case 0x6940c7:c.instructions+=4;goto B6940c7;
case 0x6940cb:c.instructions+=3;goto B6940cb;
case 0x6940ce:c.instructions+=2;goto B6940ce;
case 0x6940d2:c.instructions+=1;goto B6940d2;
case 0x6940d4:goto L6940d4;
case 0x6940d7:c.instructions+=2;goto B6940d7;
case 0x6940d8:c.instructions+=1;goto B6940d8;
case 0x6940fb:goto L6940fb;
case 0x6940fd:c.instructions+=23;goto B6940fd;
case 0x6940fe:c.instructions+=22;goto B6940fe;
case 0x694100:c.instructions+=21;goto B694100;
case 0x694103:c.instructions+=20;goto B694103;
case 0x694106:c.instructions+=19;goto B694106;
case 0x694108:c.instructions+=18;goto B694108;
case 0x694109:c.instructions+=17;goto B694109;
case 0x69410b:c.instructions+=16;goto B69410b;
case 0x69410c:c.instructions+=15;goto B69410c;
case 0x69410f:c.instructions+=14;goto B69410f;
case 0x694111:c.instructions+=13;goto B694111;
case 0x694114:c.instructions+=12;goto B694114;
case 0x694116:c.instructions+=11;goto B694116;
case 0x694118:c.instructions+=10;goto B694118;
case 0x69411a:c.instructions+=9;goto B69411a;
case 0x69411d:c.instructions+=8;goto B69411d;
case 0x69411f:c.instructions+=7;goto B69411f;
case 0x694121:c.instructions+=6;goto B694121;
case 0x694123:c.instructions+=5;goto B694123;
case 0x694126:c.instructions+=4;goto B694126;
case 0x694129:c.instructions+=3;goto B694129;
case 0x69412b:c.instructions+=2;goto B69412b;
case 0x69412e:c.instructions+=1;goto B69412e;
case 0x694134:goto L694134;
case 0x69413b:goto L69413b;
case 0x69413d:c.instructions+=32;goto B69413d;
case 0x694140:c.instructions+=31;goto B694140;
case 0x694142:c.instructions+=30;goto B694142;
case 0x694145:c.instructions+=29;goto B694145;
case 0x694147:c.instructions+=28;goto B694147;
case 0x69414a:c.instructions+=27;goto B69414a;
case 0x69414c:c.instructions+=26;goto B69414c;
case 0x69414f:c.instructions+=25;goto B69414f;
case 0x694151:c.instructions+=24;goto B694151;
case 0x694154:c.instructions+=23;goto B694154;
case 0x694156:c.instructions+=22;goto B694156;
case 0x694159:c.instructions+=21;goto B694159;
case 0x69415b:c.instructions+=20;goto B69415b;
case 0x69415e:c.instructions+=19;goto B69415e;
case 0x694160:c.instructions+=18;goto B694160;
case 0x694163:c.instructions+=17;goto B694163;
case 0x694165:c.instructions+=16;goto B694165;
case 0x694168:c.instructions+=15;goto B694168;
case 0x69416a:c.instructions+=14;goto B69416a;
case 0x69416d:c.instructions+=13;goto B69416d;
case 0x69416f:c.instructions+=12;goto B69416f;
case 0x694172:c.instructions+=11;goto B694172;
case 0x694174:c.instructions+=10;goto B694174;
case 0x694177:c.instructions+=9;goto B694177;
case 0x694179:c.instructions+=8;goto B694179;
case 0x69417c:c.instructions+=7;goto B69417c;
case 0x69417e:c.instructions+=6;goto B69417e;
case 0x694181:c.instructions+=5;goto B694181;
case 0x694183:c.instructions+=4;goto B694183;
case 0x694186:c.instructions+=3;goto B694186;
case 0x694188:c.instructions+=2;goto B694188;
case 0x69418b:c.instructions+=1;goto B69418b;
case 0x694190:goto L694190;
case 0x694192:c.instructions+=5;goto B694192;
case 0x694195:c.instructions+=4;goto B694195;
case 0x694198:c.instructions+=3;goto B694198;
case 0x694199:c.instructions+=2;goto B694199;
case 0x69419a:c.instructions+=1;goto B69419a;
case 0x69419f:goto L69419f;
case 0x6941a1:c.instructions+=1;goto B6941a1;
case 0x6941a6:goto L6941a6;
case 0x6941a8:c.instructions+=5;goto B6941a8;
case 0x6941a9:c.instructions+=4;goto B6941a9;
case 0x6941aa:c.instructions+=3;goto B6941aa;
case 0x6941ad:c.instructions+=2;goto B6941ad;
case 0x6941ae:c.instructions+=1;goto B6941ae;
case 0x6941b3:goto L6941b3;
case 0x6941b5:c.instructions+=1;goto B6941b5;
case 0x6941ba:goto L6941ba;
case 0x6941bc:c.instructions+=5;goto B6941bc;
case 0x6941bf:c.instructions+=4;goto B6941bf;
case 0x6941c2:c.instructions+=3;goto B6941c2;
case 0x6941c3:c.instructions+=2;goto B6941c3;
case 0x6941c4:c.instructions+=1;goto B6941c4;
case 0x6941c9:goto L6941c9;
case 0x6941cc:c.instructions+=4;goto B6941cc;
case 0x6941cd:c.instructions+=3;goto B6941cd;
case 0x6941ce:c.instructions+=2;goto B6941ce;
case 0x6941cf:c.instructions+=1;goto B6941cf;
case 0x6941d4:goto L6941d4;
case 0x6941d6:c.instructions+=1;goto B6941d6;
case 0x6941d8:goto L6941d8;
case 0x6941da:c.instructions+=5;goto B6941da;
case 0x6941db:c.instructions+=4;goto B6941db;
case 0x6941dc:c.instructions+=3;goto B6941dc;
case 0x6941df:c.instructions+=2;goto B6941df;
case 0x6941e0:c.instructions+=1;goto B6941e0;
case 0x6941e5:goto L6941e5;
case 0x6941e7:c.instructions+=1;goto B6941e7;
case 0x6941e9:goto L6941e9;
case 0x6941eb:c.instructions+=5;goto B6941eb;
case 0x6941ee:c.instructions+=4;goto B6941ee;
case 0x6941f1:c.instructions+=3;goto B6941f1;
case 0x6941f2:c.instructions+=2;goto B6941f2;
case 0x6941f3:c.instructions+=1;goto B6941f3;
case 0x6941f8:goto L6941f8;
case 0x6941fb:c.instructions+=4;goto B6941fb;
case 0x6941fc:c.instructions+=3;goto B6941fc;
case 0x6941fd:c.instructions+=2;goto B6941fd;
case 0x6941fe:c.instructions+=1;goto B6941fe;
case 0x694203:goto L694203;
case 0x694205:c.instructions+=1;goto B694205;
case 0x694207:goto L694207;
case 0x694209:c.instructions+=5;goto B694209;
case 0x69420a:c.instructions+=4;goto B69420a;
case 0x69420b:c.instructions+=3;goto B69420b;
case 0x69420e:c.instructions+=2;goto B69420e;
case 0x69420f:c.instructions+=1;goto B69420f;
case 0x694214:goto L694214;
case 0x694217:c.instructions+=4;goto B694217;
case 0x694218:c.instructions+=3;goto B694218;
case 0x694219:c.instructions+=2;goto B694219;
case 0x69421a:c.instructions+=1;goto B69421a;
case 0x69421f:goto L69421f;
case 0x694221:c.instructions+=1;goto B694221;
case 0x694223:goto L694223;
case 0x694225:c.instructions+=5;goto B694225;
case 0x694226:c.instructions+=4;goto B694226;
case 0x694227:c.instructions+=3;goto B694227;
case 0x69422a:c.instructions+=2;goto B69422a;
case 0x69422b:c.instructions+=1;goto B69422b;
case 0x694230:goto L694230;
case 0x694233:c.instructions+=4;goto B694233;
case 0x694236:c.instructions+=3;goto B694236;
case 0x694237:c.instructions+=2;goto B694237;
case 0x694238:c.instructions+=1;goto B694238;
case 0x69423d:goto L69423d;
case 0x694240:c.instructions+=4;goto B694240;
case 0x694241:c.instructions+=3;goto B694241;
case 0x694242:c.instructions+=2;goto B694242;
case 0x694243:c.instructions+=1;goto B694243;
case 0x694248:goto L694248;
case 0x69424a:goto L69424a;
case 0x69424d:c.instructions+=3;goto B69424d;
case 0x69424e:c.instructions+=2;goto B69424e;
case 0x69424f:c.instructions+=1;goto B69424f;
case 0x694255:goto L694255;
case 0x694257:c.instructions+=37;goto B694257;
case 0x69425a:c.instructions+=36;goto B69425a;
case 0x69425d:c.instructions+=35;goto B69425d;
case 0x694260:c.instructions+=34;goto B694260;
case 0x694263:c.instructions+=33;goto B694263;
case 0x694267:c.instructions+=32;goto B694267;
case 0x69426a:c.instructions+=31;goto B69426a;
case 0x69426e:c.instructions+=30;goto B69426e;
case 0x694272:c.instructions+=29;goto B694272;
case 0x694276:c.instructions+=28;goto B694276;
case 0x694279:c.instructions+=27;goto B694279;
case 0x69427c:c.instructions+=26;goto B69427c;
case 0x694280:c.instructions+=25;goto B694280;
case 0x694284:c.instructions+=24;goto B694284;
case 0x694288:c.instructions+=23;goto B694288;
case 0x69428b:c.instructions+=22;goto B69428b;
case 0x69428f:c.instructions+=21;goto B69428f;
case 0x694293:c.instructions+=20;goto B694293;
case 0x694297:c.instructions+=19;goto B694297;
case 0x69429f:c.instructions+=18;goto B69429f;
case 0x6942a2:c.instructions+=17;goto B6942a2;
case 0x6942a6:c.instructions+=16;goto B6942a6;
case 0x6942a9:c.instructions+=15;goto B6942a9;
case 0x6942b1:c.instructions+=14;goto B6942b1;
case 0x6942b5:c.instructions+=13;goto B6942b5;
case 0x6942b9:c.instructions+=12;goto B6942b9;
case 0x6942c0:c.instructions+=11;goto B6942c0;
case 0x6942c4:c.instructions+=10;goto B6942c4;
case 0x6942c8:c.instructions+=9;goto B6942c8;
case 0x6942cc:c.instructions+=8;goto B6942cc;
case 0x6942d0:c.instructions+=7;goto B6942d0;
case 0x6942d3:c.instructions+=6;goto B6942d3;
case 0x6942d7:c.instructions+=5;goto B6942d7;
case 0x6942d9:c.instructions+=4;goto B6942d9;
case 0x6942dc:c.instructions+=3;goto B6942dc;
case 0x6942dd:c.instructions+=2;goto B6942dd;
case 0x6942e0:c.instructions+=1;goto B6942e0;
case 0x6942e2:goto L6942e2;
case 0x6942e5:c.instructions+=2;goto B6942e5;
case 0x6942e6:c.instructions+=1;goto B6942e6;
case 0x6942e9:goto L6942e9;
case 0x6942ec:c.instructions+=1;goto B6942ec;
case 0x6942f1:goto L6942f1;
case 0x6942f4:c.instructions+=2;goto B6942f4;
case 0x6942f5:c.instructions+=1;goto B6942f5;
case 0x694318:goto L694318;
case 0x69431a:c.instructions+=23;goto B69431a;
case 0x69431b:c.instructions+=22;goto B69431b;
case 0x69431d:c.instructions+=21;goto B69431d;
case 0x694320:c.instructions+=20;goto B694320;
case 0x694323:c.instructions+=19;goto B694323;
case 0x694325:c.instructions+=18;goto B694325;
case 0x694326:c.instructions+=17;goto B694326;
case 0x694328:c.instructions+=16;goto B694328;
case 0x694329:c.instructions+=15;goto B694329;
case 0x69432c:c.instructions+=14;goto B69432c;
case 0x69432e:c.instructions+=13;goto B69432e;
case 0x694331:c.instructions+=12;goto B694331;
case 0x694333:c.instructions+=11;goto B694333;
case 0x694335:c.instructions+=10;goto B694335;
case 0x694337:c.instructions+=9;goto B694337;
case 0x69433a:c.instructions+=8;goto B69433a;
case 0x69433c:c.instructions+=7;goto B69433c;
case 0x69433e:c.instructions+=6;goto B69433e;
case 0x694340:c.instructions+=5;goto B694340;
case 0x694343:c.instructions+=4;goto B694343;
case 0x694346:c.instructions+=3;goto B694346;
case 0x694348:c.instructions+=2;goto B694348;
case 0x69434b:c.instructions+=1;goto B69434b;
case 0x694351:goto L694351;
case 0x694358:goto L694358;
case 0x69435a:c.instructions+=32;goto B69435a;
case 0x69435d:c.instructions+=31;goto B69435d;
case 0x69435f:c.instructions+=30;goto B69435f;
case 0x694362:c.instructions+=29;goto B694362;
case 0x694364:c.instructions+=28;goto B694364;
case 0x694367:c.instructions+=27;goto B694367;
case 0x694369:c.instructions+=26;goto B694369;
case 0x69436c:c.instructions+=25;goto B69436c;
case 0x69436e:c.instructions+=24;goto B69436e;
case 0x694371:c.instructions+=23;goto B694371;
case 0x694373:c.instructions+=22;goto B694373;
case 0x694376:c.instructions+=21;goto B694376;
case 0x694378:c.instructions+=20;goto B694378;
case 0x69437b:c.instructions+=19;goto B69437b;
case 0x69437d:c.instructions+=18;goto B69437d;
case 0x694380:c.instructions+=17;goto B694380;
case 0x694382:c.instructions+=16;goto B694382;
case 0x694385:c.instructions+=15;goto B694385;
case 0x694387:c.instructions+=14;goto B694387;
case 0x69438a:c.instructions+=13;goto B69438a;
case 0x69438c:c.instructions+=12;goto B69438c;
case 0x69438f:c.instructions+=11;goto B69438f;
case 0x694391:c.instructions+=10;goto B694391;
case 0x694394:c.instructions+=9;goto B694394;
case 0x694396:c.instructions+=8;goto B694396;
case 0x694399:c.instructions+=7;goto B694399;
case 0x69439b:c.instructions+=6;goto B69439b;
case 0x69439e:c.instructions+=5;goto B69439e;
case 0x6943a0:c.instructions+=4;goto B6943a0;
case 0x6943a3:c.instructions+=3;goto B6943a3;
case 0x6943a5:c.instructions+=2;goto B6943a5;
case 0x6943a8:c.instructions+=1;goto B6943a8;
case 0x6943aa:goto L6943aa;
case 0x6943ad:c.instructions+=1;goto B6943ad;
case 0x6943af:goto L6943af;
case 0x6943b0:c.instructions+=1;goto B6943b0;
case 0x6943b2:goto L6943b2;
case 0x6943b5:c.instructions+=2;goto B6943b5;
case 0x6943b6:c.instructions+=1;goto B6943b6;
case 0x6943b8:goto L6943b8;
case 0x6943b9:c.instructions+=1;goto B6943b9;
case 0x6943bb:goto L6943bb;
case 0x6943be:c.instructions+=1;goto B6943be;
case 0x6943c0:goto L6943c0;
case 0x6943c1:goto L6943c1;
case 0x6943c2:c.instructions+=1;goto B6943c2;
case 0x6943c4:goto L6943c4;
case 0x6943c5:c.instructions+=4;goto B6943c5;
case 0x6943c6:c.instructions+=3;goto B6943c6;
case 0x6943c9:c.instructions+=2;goto B6943c9;
case 0x6943ca:c.instructions+=1;goto B6943ca;
case 0x6943cf:goto L6943cf;
case 0x6943d2:c.instructions+=2;goto B6943d2;
case 0x6943d5:c.instructions+=1;goto B6943d5;
case 0x6943d6:goto L6943d6;
case 0x6943d9:c.instructions+=2;goto B6943d9;
case 0x6943da:c.instructions+=1;goto B6943da;
case 0x6943df:goto L6943df;
case 0x6943e2:c.instructions+=1;goto B6943e2;
case 0x6943e3:goto L6943e3;
case 0x6943e6:c.instructions+=3;goto B6943e6;
case 0x6943e7:c.instructions+=2;goto B6943e7;
case 0x6943e8:c.instructions+=1;goto B6943e8;
case 0x6943ed:goto L6943ed;
case 0x6943f0:c.instructions+=3;goto B6943f0;
case 0x6943f1:c.instructions+=2;goto B6943f1;
case 0x6943f2:c.instructions+=1;goto B6943f2;
case 0x6943f8:goto L6943f8;
case 0x6943fa:c.instructions+=37;goto B6943fa;
case 0x6943fd:c.instructions+=36;goto B6943fd;
case 0x694400:c.instructions+=35;goto B694400;
case 0x694403:c.instructions+=34;goto B694403;
case 0x694406:c.instructions+=33;goto B694406;
case 0x69440a:c.instructions+=32;goto B69440a;
case 0x69440d:c.instructions+=31;goto B69440d;
case 0x694411:c.instructions+=30;goto B694411;
case 0x694415:c.instructions+=29;goto B694415;
case 0x694419:c.instructions+=28;goto B694419;
case 0x69441c:c.instructions+=27;goto B69441c;
case 0x69441f:c.instructions+=26;goto B69441f;
case 0x694423:c.instructions+=25;goto B694423;
case 0x694427:c.instructions+=24;goto B694427;
case 0x69442b:c.instructions+=23;goto B69442b;
case 0x69442e:c.instructions+=22;goto B69442e;
case 0x694432:c.instructions+=21;goto B694432;
case 0x694436:c.instructions+=20;goto B694436;
case 0x69443a:c.instructions+=19;goto B69443a;
case 0x694442:c.instructions+=18;goto B694442;
case 0x694445:c.instructions+=17;goto B694445;
case 0x694449:c.instructions+=16;goto B694449;
case 0x69444c:c.instructions+=15;goto B69444c;
case 0x694454:c.instructions+=14;goto B694454;
case 0x694458:c.instructions+=13;goto B694458;
case 0x69445c:c.instructions+=12;goto B69445c;
case 0x694463:c.instructions+=11;goto B694463;
case 0x694467:c.instructions+=10;goto B694467;
case 0x69446b:c.instructions+=9;goto B69446b;
case 0x69446f:c.instructions+=8;goto B69446f;
case 0x694473:c.instructions+=7;goto B694473;
case 0x694476:c.instructions+=6;goto B694476;
case 0x69447a:c.instructions+=5;goto B69447a;
case 0x69447c:c.instructions+=4;goto B69447c;
case 0x69447f:c.instructions+=3;goto B69447f;
case 0x694480:c.instructions+=2;goto B694480;
case 0x694483:c.instructions+=1;goto B694483;
case 0x694485:goto L694485;
case 0x694488:c.instructions+=2;goto B694488;
case 0x694489:c.instructions+=1;goto B694489;
case 0x69448c:goto L69448c;
case 0x69448f:c.instructions+=1;goto B69448f;
case 0x694494:goto L694494;
case 0x694497:c.instructions+=2;goto B694497;
case 0x694498:c.instructions+=1;goto B694498;
case 0x6944c0:goto L6944c0;
case 0x6944c3:c.instructions+=9;goto B6944c3;
case 0x6944c6:c.instructions+=8;goto B6944c6;
case 0x6944ca:c.instructions+=7;goto B6944ca;
case 0x6944ce:c.instructions+=6;goto B6944ce;
case 0x6944d0:c.instructions+=5;goto B6944d0;
case 0x6944d3:c.instructions+=4;goto B6944d3;
case 0x6944d6:c.instructions+=3;goto B6944d6;
case 0x6944d9:c.instructions+=2;goto B6944d9;
case 0x6944dc:c.instructions+=1;goto B6944dc;
case 0x6944de:goto L6944de;
case 0x6944e1:c.instructions+=1;goto B6944e1;
case 0x6944e7:goto L6944e7;
case 0x6944ea:c.instructions+=4;goto B6944ea;
case 0x6944ed:c.instructions+=3;goto B6944ed;
case 0x6944f1:c.instructions+=2;goto B6944f1;
case 0x6944f5:c.instructions+=1;goto B6944f5;
case 0x6944fa:goto L6944fa;
case 0x6944ff:goto L6944ff;
case 0x694502:c.instructions+=1;goto B694502;
case 0x694508:goto L694508;
case 0x69450b:c.instructions+=43;goto B69450b;
case 0x69450f:c.instructions+=42;goto B69450f;
case 0x694512:c.instructions+=41;goto B694512;
case 0x694519:c.instructions+=40;goto B694519;
case 0x69451c:c.instructions+=39;goto B69451c;
case 0x69451f:c.instructions+=38;goto B69451f;
case 0x694522:c.instructions+=37;goto B694522;
case 0x694525:c.instructions+=36;goto B694525;
case 0x694528:c.instructions+=35;goto B694528;
case 0x69452b:c.instructions+=34;goto B69452b;
case 0x69452e:c.instructions+=33;goto B69452e;
case 0x694531:c.instructions+=32;goto B694531;
case 0x694538:c.instructions+=31;goto B694538;
case 0x69453b:c.instructions+=30;goto B69453b;
case 0x69453e:c.instructions+=29;goto B69453e;
case 0x694545:c.instructions+=28;goto B694545;
case 0x694548:c.instructions+=27;goto B694548;
case 0x69454b:c.instructions+=26;goto B69454b;
case 0x69454e:c.instructions+=25;goto B69454e;
case 0x694551:c.instructions+=24;goto B694551;
case 0x694554:c.instructions+=23;goto B694554;
case 0x694557:c.instructions+=22;goto B694557;
case 0x69455a:c.instructions+=21;goto B69455a;
case 0x69455d:c.instructions+=20;goto B69455d;
case 0x694564:c.instructions+=19;goto B694564;
case 0x69456b:c.instructions+=18;goto B69456b;
case 0x69456e:c.instructions+=17;goto B69456e;
case 0x694571:c.instructions+=16;goto B694571;
case 0x694578:c.instructions+=15;goto B694578;
case 0x69457f:c.instructions+=14;goto B69457f;
case 0x694583:c.instructions+=13;goto B694583;
case 0x694587:c.instructions+=12;goto B694587;
case 0x69458b:c.instructions+=11;goto B69458b;
case 0x69458f:c.instructions+=10;goto B69458f;
case 0x694593:c.instructions+=9;goto B694593;
case 0x694597:c.instructions+=8;goto B694597;
case 0x69459a:c.instructions+=7;goto B69459a;
case 0x69459d:c.instructions+=6;goto B69459d;
case 0x6945a0:c.instructions+=5;goto B6945a0;
case 0x6945a4:c.instructions+=4;goto B6945a4;
case 0x6945a7:c.instructions+=3;goto B6945a7;
case 0x6945aa:c.instructions+=2;goto B6945aa;
case 0x6945ad:c.instructions+=1;goto B6945ad;
case 0x6945b2:goto L6945b2;
case 0x6945b5:c.instructions+=1;goto B6945b5;
case 0x6945b7:goto L6945b7;
case 0x6945ba:c.instructions+=8;goto B6945ba;
case 0x6945bc:c.instructions+=7;goto B6945bc;
case 0x6945be:c.instructions+=6;goto B6945be;
case 0x6945c1:c.instructions+=5;goto B6945c1;
case 0x6945c4:c.instructions+=4;goto B6945c4;
case 0x6945c6:c.instructions+=3;goto B6945c6;
case 0x6945c8:c.instructions+=2;goto B6945c8;
case 0x6945cd:c.instructions+=1;goto B6945cd;
case 0x6945d2:goto L6945d2;
case 0x6945d4:c.instructions+=7;goto B6945d4;
case 0x6945d7:c.instructions+=6;goto B6945d7;
case 0x6945da:c.instructions+=5;goto B6945da;
case 0x6945de:c.instructions+=4;goto B6945de;
case 0x6945e2:c.instructions+=3;goto B6945e2;
case 0x6945e5:c.instructions+=2;goto B6945e5;
case 0x6945e7:c.instructions+=1;goto B6945e7;
case 0x694600:goto L694600;
case 0x694603:c.instructions+=10;goto B694603;
case 0x694607:c.instructions+=9;goto B694607;
case 0x69460b:c.instructions+=8;goto B69460b;
case 0x69460f:c.instructions+=7;goto B69460f;
case 0x694611:c.instructions+=6;goto B694611;
case 0x694614:c.instructions+=5;goto B694614;
case 0x694617:c.instructions+=4;goto B694617;
case 0x69461a:c.instructions+=3;goto B69461a;
case 0x69461d:c.instructions+=2;goto B69461d;
case 0x694620:c.instructions+=1;goto B694620;
case 0x694622:goto L694622;
case 0x694625:c.instructions+=1;goto B694625;
case 0x69462b:goto L69462b;
case 0x69462e:c.instructions+=4;goto B69462e;
case 0x694631:c.instructions+=3;goto B694631;
case 0x694635:c.instructions+=2;goto B694635;
case 0x694639:c.instructions+=1;goto B694639;
case 0x69463e:goto L69463e;
case 0x694643:goto L694643;
case 0x694646:c.instructions+=1;goto B694646;
case 0x69464c:goto L69464c;
case 0x69464f:c.instructions+=63;goto B69464f;
case 0x694653:c.instructions+=62;goto B694653;
case 0x69465a:c.instructions+=61;goto B69465a;
case 0x69465d:c.instructions+=60;goto B69465d;
case 0x694660:c.instructions+=59;goto B694660;
case 0x694663:c.instructions+=58;goto B694663;
case 0x694667:c.instructions+=57;goto B694667;
case 0x69466b:c.instructions+=56;goto B69466b;
case 0x69466e:c.instructions+=55;goto B69466e;
case 0x694672:c.instructions+=54;goto B694672;
case 0x694676:c.instructions+=53;goto B694676;
case 0x69467d:c.instructions+=52;goto B69467d;
case 0x694680:c.instructions+=51;goto B694680;
case 0x694683:c.instructions+=50;goto B694683;
case 0x694686:c.instructions+=49;goto B694686;
case 0x694689:c.instructions+=48;goto B694689;
case 0x694690:c.instructions+=47;goto B694690;
case 0x694693:c.instructions+=46;goto B694693;
case 0x694696:c.instructions+=45;goto B694696;
case 0x69469a:c.instructions+=44;goto B69469a;
case 0x69469d:c.instructions+=43;goto B69469d;
case 0x6946a0:c.instructions+=42;goto B6946a0;
case 0x6946a4:c.instructions+=41;goto B6946a4;
case 0x6946ab:c.instructions+=40;goto B6946ab;
case 0x6946ae:c.instructions+=39;goto B6946ae;
case 0x6946b2:c.instructions+=38;goto B6946b2;
case 0x6946b5:c.instructions+=37;goto B6946b5;
case 0x6946b8:c.instructions+=36;goto B6946b8;
case 0x6946bc:c.instructions+=35;goto B6946bc;
case 0x6946c3:c.instructions+=34;goto B6946c3;
case 0x6946c6:c.instructions+=33;goto B6946c6;
case 0x6946c9:c.instructions+=32;goto B6946c9;
case 0x6946cc:c.instructions+=31;goto B6946cc;
case 0x6946d0:c.instructions+=30;goto B6946d0;
case 0x6946d4:c.instructions+=29;goto B6946d4;
case 0x6946db:c.instructions+=28;goto B6946db;
case 0x6946de:c.instructions+=27;goto B6946de;
case 0x6946e1:c.instructions+=26;goto B6946e1;
case 0x6946e4:c.instructions+=25;goto B6946e4;
case 0x6946e7:c.instructions+=24;goto B6946e7;
case 0x6946ee:c.instructions+=23;goto B6946ee;
case 0x6946f1:c.instructions+=22;goto B6946f1;
case 0x6946f5:c.instructions+=21;goto B6946f5;
case 0x6946f9:c.instructions+=20;goto B6946f9;
case 0x6946fd:c.instructions+=19;goto B6946fd;
case 0x694704:c.instructions+=18;goto B694704;
case 0x694707:c.instructions+=17;goto B694707;
case 0x69470a:c.instructions+=16;goto B69470a;
case 0x694711:c.instructions+=15;goto B694711;
case 0x694715:c.instructions+=14;goto B694715;
case 0x694719:c.instructions+=13;goto B694719;
case 0x69471c:c.instructions+=12;goto B69471c;
case 0x69471f:c.instructions+=11;goto B69471f;
case 0x694722:c.instructions+=10;goto B694722;
case 0x694725:c.instructions+=9;goto B694725;
case 0x694728:c.instructions+=8;goto B694728;
case 0x69472b:c.instructions+=7;goto B69472b;
case 0x69472e:c.instructions+=6;goto B69472e;
case 0x694731:c.instructions+=5;goto B694731;
case 0x694734:c.instructions+=4;goto B694734;
case 0x694737:c.instructions+=3;goto B694737;
case 0x69473a:c.instructions+=2;goto B69473a;
case 0x69473d:c.instructions+=1;goto B69473d;
case 0x694742:goto L694742;
case 0x694745:c.instructions+=1;goto B694745;
case 0x694747:goto L694747;
case 0x69474a:c.instructions+=8;goto B69474a;
case 0x69474c:c.instructions+=7;goto B69474c;
case 0x69474e:c.instructions+=6;goto B69474e;
case 0x694751:c.instructions+=5;goto B694751;
case 0x694754:c.instructions+=4;goto B694754;
case 0x694756:c.instructions+=3;goto B694756;
case 0x694758:c.instructions+=2;goto B694758;
case 0x69475d:c.instructions+=1;goto B69475d;
case 0x694762:goto L694762;
case 0x694764:c.instructions+=7;goto B694764;
case 0x694767:c.instructions+=6;goto B694767;
case 0x69476b:c.instructions+=5;goto B69476b;
case 0x69476f:c.instructions+=4;goto B69476f;
case 0x694773:c.instructions+=3;goto B694773;
case 0x694776:c.instructions+=2;goto B694776;
case 0x694778:c.instructions+=1;goto B694778;
case 0x69477b:goto L69477b;
case 0x69477d:c.instructions+=26;goto B69477d;
case 0x69477e:c.instructions+=25;goto B69477e;
case 0x694780:c.instructions+=24;goto B694780;
case 0x694782:c.instructions+=23;goto B694782;
case 0x694785:c.instructions+=22;goto B694785;
case 0x694788:c.instructions+=21;goto B694788;
case 0x69478b:c.instructions+=20;goto B69478b;
case 0x69478e:c.instructions+=19;goto B69478e;
case 0x694791:c.instructions+=18;goto B694791;
case 0x694794:c.instructions+=17;goto B694794;
case 0x694797:c.instructions+=16;goto B694797;
case 0x69479a:c.instructions+=15;goto B69479a;
case 0x69479e:c.instructions+=14;goto B69479e;
case 0x6947a1:c.instructions+=13;goto B6947a1;
case 0x6947a6:c.instructions+=12;goto B6947a6;
case 0x6947ab:c.instructions+=11;goto B6947ab;
case 0x6947b0:c.instructions+=10;goto B6947b0;
case 0x6947b5:c.instructions+=9;goto B6947b5;
case 0x6947b9:c.instructions+=8;goto B6947b9;
case 0x6947be:c.instructions+=7;goto B6947be;
case 0x6947c2:c.instructions+=6;goto B6947c2;
case 0x6947c5:c.instructions+=5;goto B6947c5;
case 0x6947c9:c.instructions+=4;goto B6947c9;
case 0x6947cb:c.instructions+=3;goto B6947cb;
case 0x6947ce:c.instructions+=2;goto B6947ce;
case 0x6947cf:c.instructions+=1;goto B6947cf;
case 0x6947d2:goto L6947d2;
case 0x6947d4:c.instructions+=20;goto B6947d4;
case 0x6947d5:c.instructions+=19;goto B6947d5;
case 0x6947d7:c.instructions+=18;goto B6947d7;
case 0x6947d9:c.instructions+=17;goto B6947d9;
case 0x6947dc:c.instructions+=16;goto B6947dc;
case 0x6947df:c.instructions+=15;goto B6947df;
case 0x6947e2:c.instructions+=14;goto B6947e2;
case 0x6947e5:c.instructions+=13;goto B6947e5;
case 0x6947e8:c.instructions+=12;goto B6947e8;
case 0x6947eb:c.instructions+=11;goto B6947eb;
case 0x6947ee:c.instructions+=10;goto B6947ee;
case 0x6947f1:c.instructions+=9;goto B6947f1;
case 0x6947f5:c.instructions+=8;goto B6947f5;
case 0x6947f8:c.instructions+=7;goto B6947f8;
case 0x6947fd:c.instructions+=6;goto B6947fd;
case 0x694801:c.instructions+=5;goto B694801;
case 0x694804:c.instructions+=4;goto B694804;
case 0x694806:c.instructions+=3;goto B694806;
case 0x694809:c.instructions+=2;goto B694809;
case 0x69480a:c.instructions+=1;goto B69480a;
case 0x69480d:goto L69480d;
case 0x69480f:c.instructions+=30;goto B69480f;
case 0x694810:c.instructions+=29;goto B694810;
case 0x694812:c.instructions+=28;goto B694812;
case 0x694814:c.instructions+=27;goto B694814;
case 0x694817:c.instructions+=26;goto B694817;
case 0x69481a:c.instructions+=25;goto B69481a;
case 0x69481d:c.instructions+=24;goto B69481d;
case 0x694820:c.instructions+=23;goto B694820;
case 0x694823:c.instructions+=22;goto B694823;
case 0x694826:c.instructions+=21;goto B694826;
case 0x694829:c.instructions+=20;goto B694829;
case 0x69482c:c.instructions+=19;goto B69482c;
case 0x694830:c.instructions+=18;goto B694830;
case 0x694833:c.instructions+=17;goto B694833;
case 0x694838:c.instructions+=16;goto B694838;
case 0x69483d:c.instructions+=15;goto B69483d;
case 0x694842:c.instructions+=14;goto B694842;
case 0x694847:c.instructions+=13;goto B694847;
case 0x69484b:c.instructions+=12;goto B69484b;
case 0x694850:c.instructions+=11;goto B694850;
case 0x694854:c.instructions+=10;goto B694854;
case 0x694857:c.instructions+=9;goto B694857;
case 0x69485b:c.instructions+=8;goto B69485b;
case 0x69485f:c.instructions+=7;goto B69485f;
case 0x694863:c.instructions+=6;goto B694863;
case 0x694867:c.instructions+=5;goto B694867;
case 0x69486a:c.instructions+=4;goto B69486a;
case 0x69486c:c.instructions+=3;goto B69486c;
case 0x69486f:c.instructions+=2;goto B69486f;
case 0x694870:c.instructions+=1;goto B694870;
case 0x694873:goto L694873;
case 0x694875:c.instructions+=38;goto B694875;
case 0x69487a:c.instructions+=37;goto B69487a;
case 0x69487d:c.instructions+=36;goto B69487d;
case 0x694881:c.instructions+=35;goto B694881;
case 0x694884:c.instructions+=34;goto B694884;
case 0x694888:c.instructions+=33;goto B694888;
case 0x69488f:c.instructions+=32;goto B69488f;
case 0x694892:c.instructions+=31;goto B694892;
case 0x694895:c.instructions+=30;goto B694895;
case 0x694899:c.instructions+=29;goto B694899;
case 0x69489d:c.instructions+=28;goto B69489d;
case 0x6948a0:c.instructions+=27;goto B6948a0;
case 0x6948a8:c.instructions+=26;goto B6948a8;
case 0x6948ac:c.instructions+=25;goto B6948ac;
case 0x6948b0:c.instructions+=24;goto B6948b0;
case 0x6948b3:c.instructions+=23;goto B6948b3;
case 0x6948b7:c.instructions+=22;goto B6948b7;
case 0x6948bb:c.instructions+=21;goto B6948bb;
case 0x6948bf:c.instructions+=20;goto B6948bf;
case 0x6948c7:c.instructions+=19;goto B6948c7;
case 0x6948cb:c.instructions+=18;goto B6948cb;
case 0x6948cf:c.instructions+=17;goto B6948cf;
case 0x6948d2:c.instructions+=16;goto B6948d2;
case 0x6948d6:c.instructions+=15;goto B6948d6;
case 0x6948d9:c.instructions+=14;goto B6948d9;
case 0x6948dc:c.instructions+=13;goto B6948dc;
case 0x6948df:c.instructions+=12;goto B6948df;
case 0x6948e3:c.instructions+=11;goto B6948e3;
case 0x6948e7:c.instructions+=10;goto B6948e7;
case 0x6948eb:c.instructions+=9;goto B6948eb;
case 0x6948ef:c.instructions+=8;goto B6948ef;
case 0x6948f3:c.instructions+=7;goto B6948f3;
case 0x6948f7:c.instructions+=6;goto B6948f7;
case 0x6948fb:c.instructions+=5;goto B6948fb;
case 0x6948ff:c.instructions+=4;goto B6948ff;
case 0x694903:c.instructions+=3;goto B694903;
case 0x694906:c.instructions+=2;goto B694906;
case 0x694908:c.instructions+=1;goto B694908;
case 0x69490b:goto L69490b;
case 0x69490f:c.instructions+=19;goto B69490f;
case 0x694913:c.instructions+=18;goto B694913;
case 0x694917:c.instructions+=17;goto B694917;
case 0x69491c:c.instructions+=16;goto B69491c;
case 0x69491f:c.instructions+=15;goto B69491f;
case 0x694922:c.instructions+=14;goto B694922;
case 0x694925:c.instructions+=13;goto B694925;
case 0x694928:c.instructions+=12;goto B694928;
case 0x69492d:c.instructions+=11;goto B69492d;
case 0x694931:c.instructions+=10;goto B694931;
case 0x694935:c.instructions+=9;goto B694935;
case 0x694938:c.instructions+=8;goto B694938;
case 0x69493c:c.instructions+=7;goto B69493c;
case 0x694940:c.instructions+=6;goto B694940;
case 0x694944:c.instructions+=5;goto B694944;
case 0x694948:c.instructions+=4;goto B694948;
case 0x69494c:c.instructions+=3;goto B69494c;
case 0x69494f:c.instructions+=2;goto B69494f;
case 0x694951:c.instructions+=1;goto B694951;
case 0x694954:goto L694954;
case 0x694958:c.instructions+=17;goto B694958;
case 0x69495b:c.instructions+=16;goto B69495b;
case 0x69495e:c.instructions+=15;goto B69495e;
case 0x694962:c.instructions+=14;goto B694962;
case 0x694966:c.instructions+=13;goto B694966;
case 0x69496a:c.instructions+=12;goto B69496a;
case 0x69496d:c.instructions+=11;goto B69496d;
case 0x694971:c.instructions+=10;goto B694971;
case 0x694979:c.instructions+=9;goto B694979;
case 0x69497c:c.instructions+=8;goto B69497c;
case 0x694980:c.instructions+=7;goto B694980;
case 0x694984:c.instructions+=6;goto B694984;
case 0x694987:c.instructions+=5;goto B694987;
case 0x69498b:c.instructions+=4;goto B69498b;
case 0x69498f:c.instructions+=3;goto B69498f;
case 0x694992:c.instructions+=2;goto B694992;
case 0x694994:c.instructions+=1;goto B694994;
case 0x694997:goto L694997;
case 0x69499c:c.instructions+=43;goto B69499c;
case 0x69499f:c.instructions+=42;goto B69499f;
case 0x6949a2:c.instructions+=41;goto B6949a2;
case 0x6949a6:c.instructions+=40;goto B6949a6;
case 0x6949ad:c.instructions+=39;goto B6949ad;
case 0x6949b1:c.instructions+=38;goto B6949b1;
case 0x6949b4:c.instructions+=37;goto B6949b4;
case 0x6949b8:c.instructions+=36;goto B6949b8;
case 0x6949bc:c.instructions+=35;goto B6949bc;
case 0x6949bf:c.instructions+=34;goto B6949bf;
case 0x6949c3:c.instructions+=33;goto B6949c3;
case 0x6949c6:c.instructions+=32;goto B6949c6;
case 0x6949c9:c.instructions+=31;goto B6949c9;
case 0x6949cc:c.instructions+=30;goto B6949cc;
case 0x6949d4:c.instructions+=29;goto B6949d4;
case 0x6949d7:c.instructions+=28;goto B6949d7;
case 0x6949da:c.instructions+=27;goto B6949da;
case 0x6949e1:c.instructions+=26;goto B6949e1;
case 0x6949e4:c.instructions+=25;goto B6949e4;
case 0x6949e8:c.instructions+=24;goto B6949e8;
case 0x6949ec:c.instructions+=23;goto B6949ec;
case 0x6949f0:c.instructions+=22;goto B6949f0;
case 0x6949f4:c.instructions+=21;goto B6949f4;
case 0x6949f7:c.instructions+=20;goto B6949f7;
case 0x6949fa:c.instructions+=19;goto B6949fa;
case 0x6949fd:c.instructions+=18;goto B6949fd;
case 0x694a00:c.instructions+=17;goto B694a00;
case 0x694a04:c.instructions+=16;goto B694a04;
case 0x694a07:c.instructions+=15;goto B694a07;
case 0x694a0b:c.instructions+=14;goto B694a0b;
case 0x694a0e:c.instructions+=13;goto B694a0e;
case 0x694a12:c.instructions+=12;goto B694a12;
case 0x694a16:c.instructions+=11;goto B694a16;
case 0x694a1a:c.instructions+=10;goto B694a1a;
case 0x694a1e:c.instructions+=9;goto B694a1e;
case 0x694a22:c.instructions+=8;goto B694a22;
case 0x694a26:c.instructions+=7;goto B694a26;
case 0x694a2a:c.instructions+=6;goto B694a2a;
case 0x694a2e:c.instructions+=5;goto B694a2e;
case 0x694a32:c.instructions+=4;goto B694a32;
case 0x694a3a:c.instructions+=3;goto B694a3a;
case 0x694a3d:c.instructions+=2;goto B694a3d;
case 0x694a3f:c.instructions+=1;goto B694a3f;
case 0x694a42:goto L694a42;
case 0x694a44:c.instructions+=38;goto B694a44;
case 0x694a45:c.instructions+=37;goto B694a45;
case 0x694a47:c.instructions+=36;goto B694a47;
case 0x694a49:c.instructions+=35;goto B694a49;
case 0x694a4c:c.instructions+=34;goto B694a4c;
case 0x694a4f:c.instructions+=33;goto B694a4f;
case 0x694a52:c.instructions+=32;goto B694a52;
case 0x694a55:c.instructions+=31;goto B694a55;
case 0x694a58:c.instructions+=30;goto B694a58;
case 0x694a5b:c.instructions+=29;goto B694a5b;
case 0x694a5e:c.instructions+=28;goto B694a5e;
case 0x694a62:c.instructions+=27;goto B694a62;
case 0x694a65:c.instructions+=26;goto B694a65;
case 0x694a68:c.instructions+=25;goto B694a68;
case 0x694a6b:c.instructions+=24;goto B694a6b;
case 0x694a6e:c.instructions+=23;goto B694a6e;
case 0x694a72:c.instructions+=22;goto B694a72;
case 0x694a75:c.instructions+=21;goto B694a75;
case 0x694a7a:c.instructions+=20;goto B694a7a;
case 0x694a7d:c.instructions+=19;goto B694a7d;
case 0x694a82:c.instructions+=18;goto B694a82;
case 0x694a85:c.instructions+=17;goto B694a85;
case 0x694a8a:c.instructions+=16;goto B694a8a;
case 0x694a8e:c.instructions+=15;goto B694a8e;
case 0x694a93:c.instructions+=14;goto B694a93;
case 0x694a97:c.instructions+=13;goto B694a97;
case 0x694a9c:c.instructions+=12;goto B694a9c;
case 0x694aa1:c.instructions+=11;goto B694aa1;
case 0x694aa6:c.instructions+=10;goto B694aa6;
case 0x694aaa:c.instructions+=9;goto B694aaa;
case 0x694aae:c.instructions+=8;goto B694aae;
case 0x694ab2:c.instructions+=7;goto B694ab2;
case 0x694ab6:c.instructions+=6;goto B694ab6;
case 0x694ab9:c.instructions+=5;goto B694ab9;
case 0x694abd:c.instructions+=4;goto B694abd;
case 0x694abf:c.instructions+=3;goto B694abf;
case 0x694ac2:c.instructions+=2;goto B694ac2;
case 0x694ac3:c.instructions+=1;goto B694ac3;
case 0x694ac6:goto L694ac6;
case 0x694ac8:c.instructions+=25;goto B694ac8;
case 0x694acc:c.instructions+=24;goto B694acc;
case 0x694acf:c.instructions+=23;goto B694acf;
case 0x694ad2:c.instructions+=22;goto B694ad2;
case 0x694ad6:c.instructions+=21;goto B694ad6;
case 0x694ad9:c.instructions+=20;goto B694ad9;
case 0x694add:c.instructions+=19;goto B694add;
case 0x694ae1:c.instructions+=18;goto B694ae1;
case 0x694ae5:c.instructions+=17;goto B694ae5;
case 0x694ae9:c.instructions+=16;goto B694ae9;
case 0x694aed:c.instructions+=15;goto B694aed;
case 0x694af0:c.instructions+=14;goto B694af0;
case 0x694af4:c.instructions+=13;goto B694af4;
case 0x694afc:c.instructions+=12;goto B694afc;
case 0x694aff:c.instructions+=11;goto B694aff;
case 0x694b03:c.instructions+=10;goto B694b03;
case 0x694b07:c.instructions+=9;goto B694b07;
case 0x694b0a:c.instructions+=8;goto B694b0a;
case 0x694b0d:c.instructions+=7;goto B694b0d;
case 0x694b11:c.instructions+=6;goto B694b11;
case 0x694b15:c.instructions+=5;goto B694b15;
case 0x694b19:c.instructions+=4;goto B694b19;
case 0x694b1c:c.instructions+=3;goto B694b1c;
case 0x694b20:c.instructions+=2;goto B694b20;
case 0x694b22:c.instructions+=1;goto B694b22;
case 0x694b25:goto L694b25;
case 0x694b27:c.instructions+=93;goto B694b27;
case 0x694b28:c.instructions+=92;goto B694b28;
case 0x694b2a:c.instructions+=91;goto B694b2a;
case 0x694b2e:c.instructions+=90;goto B694b2e;
case 0x694b32:c.instructions+=89;goto B694b32;
case 0x694b36:c.instructions+=88;goto B694b36;
case 0x694b3a:c.instructions+=87;goto B694b3a;
case 0x694b3d:c.instructions+=86;goto B694b3d;
case 0x694b40:c.instructions+=85;goto B694b40;
case 0x694b44:c.instructions+=84;goto B694b44;
case 0x694b48:c.instructions+=83;goto B694b48;
case 0x694b4b:c.instructions+=82;goto B694b4b;
case 0x694b4e:c.instructions+=81;goto B694b4e;
case 0x694b51:c.instructions+=80;goto B694b51;
case 0x694b54:c.instructions+=79;goto B694b54;
case 0x694b57:c.instructions+=78;goto B694b57;
case 0x694b5a:c.instructions+=77;goto B694b5a;
case 0x694b5d:c.instructions+=76;goto B694b5d;
case 0x694b60:c.instructions+=75;goto B694b60;
case 0x694b63:c.instructions+=74;goto B694b63;
case 0x694b66:c.instructions+=73;goto B694b66;
case 0x694b6a:c.instructions+=72;goto B694b6a;
case 0x694b6e:c.instructions+=71;goto B694b6e;
case 0x694b72:c.instructions+=70;goto B694b72;
case 0x694b75:c.instructions+=69;goto B694b75;
case 0x694b78:c.instructions+=68;goto B694b78;
case 0x694b7b:c.instructions+=67;goto B694b7b;
case 0x694b7e:c.instructions+=66;goto B694b7e;
case 0x694b82:c.instructions+=65;goto B694b82;
case 0x694b85:c.instructions+=64;goto B694b85;
case 0x694b88:c.instructions+=63;goto B694b88;
case 0x694b8b:c.instructions+=62;goto B694b8b;
case 0x694b8e:c.instructions+=61;goto B694b8e;
case 0x694b92:c.instructions+=60;goto B694b92;
case 0x694b96:c.instructions+=59;goto B694b96;
case 0x694b99:c.instructions+=58;goto B694b99;
case 0x694b9c:c.instructions+=57;goto B694b9c;
case 0x694b9f:c.instructions+=56;goto B694b9f;
case 0x694ba2:c.instructions+=55;goto B694ba2;
case 0x694ba5:c.instructions+=54;goto B694ba5;
case 0x694ba8:c.instructions+=53;goto B694ba8;
case 0x694bac:c.instructions+=52;goto B694bac;
case 0x694baf:c.instructions+=51;goto B694baf;
case 0x694bb3:c.instructions+=50;goto B694bb3;
case 0x694bb7:c.instructions+=49;goto B694bb7;
case 0x694bba:c.instructions+=48;goto B694bba;
case 0x694bbe:c.instructions+=47;goto B694bbe;
case 0x694bc5:c.instructions+=46;goto B694bc5;
case 0x694bc8:c.instructions+=45;goto B694bc8;
case 0x694bcb:c.instructions+=44;goto B694bcb;
case 0x694bce:c.instructions+=43;goto B694bce;
case 0x694bd1:c.instructions+=42;goto B694bd1;
case 0x694bd4:c.instructions+=41;goto B694bd4;
case 0x694bd7:c.instructions+=40;goto B694bd7;
case 0x694bdb:c.instructions+=39;goto B694bdb;
case 0x694bde:c.instructions+=38;goto B694bde;
case 0x694be1:c.instructions+=37;goto B694be1;
case 0x694be4:c.instructions+=36;goto B694be4;
case 0x694be7:c.instructions+=35;goto B694be7;
case 0x694bea:c.instructions+=34;goto B694bea;
case 0x694bed:c.instructions+=33;goto B694bed;
case 0x694bf0:c.instructions+=32;goto B694bf0;
case 0x694bf4:c.instructions+=31;goto B694bf4;
case 0x694bf8:c.instructions+=30;goto B694bf8;
case 0x694bfb:c.instructions+=29;goto B694bfb;
case 0x694bfe:c.instructions+=28;goto B694bfe;
case 0x694c02:c.instructions+=27;goto B694c02;
case 0x694c05:c.instructions+=26;goto B694c05;
case 0x694c08:c.instructions+=25;goto B694c08;
case 0x694c0c:c.instructions+=24;goto B694c0c;
case 0x694c0f:c.instructions+=23;goto B694c0f;
case 0x694c12:c.instructions+=22;goto B694c12;
case 0x694c15:c.instructions+=21;goto B694c15;
case 0x694c18:c.instructions+=20;goto B694c18;
case 0x694c1c:c.instructions+=19;goto B694c1c;
case 0x694c1f:c.instructions+=18;goto B694c1f;
case 0x694c22:c.instructions+=17;goto B694c22;
case 0x694c25:c.instructions+=16;goto B694c25;
case 0x694c28:c.instructions+=15;goto B694c28;
case 0x694c2b:c.instructions+=14;goto B694c2b;
case 0x694c2e:c.instructions+=13;goto B694c2e;
case 0x694c31:c.instructions+=12;goto B694c31;
case 0x694c35:c.instructions+=11;goto B694c35;
case 0x694c39:c.instructions+=10;goto B694c39;
case 0x694c3d:c.instructions+=9;goto B694c3d;
case 0x694c41:c.instructions+=8;goto B694c41;
case 0x694c44:c.instructions+=7;goto B694c44;
case 0x694c47:c.instructions+=6;goto B694c47;
case 0x694c4b:c.instructions+=5;goto B694c4b;
case 0x694c4f:c.instructions+=4;goto B694c4f;
case 0x694c53:c.instructions+=3;goto B694c53;
case 0x694c55:c.instructions+=2;goto B694c55;
case 0x694c56:c.instructions+=1;goto B694c56;
case 0x694c59:goto L694c59;
case 0x694c5d:c.instructions+=29;goto B694c5d;
case 0x694c61:c.instructions+=28;goto B694c61;
case 0x694c65:c.instructions+=27;goto B694c65;
case 0x694c68:c.instructions+=26;goto B694c68;
case 0x694c6c:c.instructions+=25;goto B694c6c;
case 0x694c6f:c.instructions+=24;goto B694c6f;
case 0x694c73:c.instructions+=23;goto B694c73;
case 0x694c76:c.instructions+=22;goto B694c76;
case 0x694c7a:c.instructions+=21;goto B694c7a;
case 0x694c7f:c.instructions+=20;goto B694c7f;
case 0x694c84:c.instructions+=19;goto B694c84;
case 0x694c88:c.instructions+=18;goto B694c88;
case 0x694c8c:c.instructions+=17;goto B694c8c;
case 0x694c90:c.instructions+=16;goto B694c90;
case 0x694c94:c.instructions+=15;goto B694c94;
case 0x694c98:c.instructions+=14;goto B694c98;
case 0x694c9b:c.instructions+=13;goto B694c9b;
case 0x694c9e:c.instructions+=12;goto B694c9e;
case 0x694ca2:c.instructions+=11;goto B694ca2;
case 0x694ca6:c.instructions+=10;goto B694ca6;
case 0x694caa:c.instructions+=9;goto B694caa;
case 0x694cae:c.instructions+=8;goto B694cae;
case 0x694cb2:c.instructions+=7;goto B694cb2;
case 0x694cb6:c.instructions+=6;goto B694cb6;
case 0x694cba:c.instructions+=5;goto B694cba;
case 0x694cbe:c.instructions+=4;goto B694cbe;
case 0x694cc1:c.instructions+=3;goto B694cc1;
case 0x694cc5:c.instructions+=2;goto B694cc5;
case 0x694cc7:c.instructions+=1;goto B694cc7;
case 0x694cca:goto L694cca;
case 0x694ccc:c.instructions+=50;goto B694ccc;
case 0x694cd1:c.instructions+=49;goto B694cd1;
case 0x694cd4:c.instructions+=48;goto B694cd4;
case 0x694cd8:c.instructions+=47;goto B694cd8;
case 0x694cdb:c.instructions+=46;goto B694cdb;
case 0x694cdf:c.instructions+=45;goto B694cdf;
case 0x694ce6:c.instructions+=44;goto B694ce6;
case 0x694ce9:c.instructions+=43;goto B694ce9;
case 0x694cec:c.instructions+=42;goto B694cec;
case 0x694cf0:c.instructions+=41;goto B694cf0;
case 0x694cf4:c.instructions+=40;goto B694cf4;
case 0x694cf7:c.instructions+=39;goto B694cf7;
case 0x694cff:c.instructions+=38;goto B694cff;
case 0x694d03:c.instructions+=37;goto B694d03;
case 0x694d07:c.instructions+=36;goto B694d07;
case 0x694d0a:c.instructions+=35;goto B694d0a;
case 0x694d0e:c.instructions+=34;goto B694d0e;
case 0x694d12:c.instructions+=33;goto B694d12;
case 0x694d16:c.instructions+=32;goto B694d16;
case 0x694d1e:c.instructions+=31;goto B694d1e;
case 0x694d22:c.instructions+=30;goto B694d22;
case 0x694d26:c.instructions+=29;goto B694d26;
case 0x694d2a:c.instructions+=28;goto B694d2a;
case 0x694d2d:c.instructions+=27;goto B694d2d;
case 0x694d30:c.instructions+=26;goto B694d30;
case 0x694d33:c.instructions+=25;goto B694d33;
case 0x694d36:c.instructions+=24;goto B694d36;
case 0x694d39:c.instructions+=23;goto B694d39;
case 0x694d3d:c.instructions+=22;goto B694d3d;
case 0x694d40:c.instructions+=21;goto B694d40;
case 0x694d44:c.instructions+=20;goto B694d44;
case 0x694d49:c.instructions+=19;goto B694d49;
case 0x694d4e:c.instructions+=18;goto B694d4e;
case 0x694d52:c.instructions+=17;goto B694d52;
case 0x694d56:c.instructions+=16;goto B694d56;
case 0x694d59:c.instructions+=15;goto B694d59;
case 0x694d5d:c.instructions+=14;goto B694d5d;
case 0x694d60:c.instructions+=13;goto B694d60;
case 0x694d64:c.instructions+=12;goto B694d64;
case 0x694d69:c.instructions+=11;goto B694d69;
case 0x694d6e:c.instructions+=10;goto B694d6e;
case 0x694d72:c.instructions+=9;goto B694d72;
case 0x694d76:c.instructions+=8;goto B694d76;
case 0x694d7a:c.instructions+=7;goto B694d7a;
case 0x694d7e:c.instructions+=6;goto B694d7e;
case 0x694d82:c.instructions+=5;goto B694d82;
case 0x694d86:c.instructions+=4;goto B694d86;
case 0x694d89:c.instructions+=3;goto B694d89;
case 0x694d8d:c.instructions+=2;goto B694d8d;
case 0x694d8f:c.instructions+=1;goto B694d8f;
case 0x694d92:goto L694d92;
case 0x694d97:c.instructions+=56;goto B694d97;
case 0x694d9b:c.instructions+=55;goto B694d9b;
case 0x694d9e:c.instructions+=54;goto B694d9e;
case 0x694da1:c.instructions+=53;goto B694da1;
case 0x694da5:c.instructions+=52;goto B694da5;
case 0x694dac:c.instructions+=51;goto B694dac;
case 0x694db0:c.instructions+=50;goto B694db0;
case 0x694db3:c.instructions+=49;goto B694db3;
case 0x694db7:c.instructions+=48;goto B694db7;
case 0x694dba:c.instructions+=47;goto B694dba;
case 0x694dbe:c.instructions+=46;goto B694dbe;
case 0x694dc1:c.instructions+=45;goto B694dc1;
case 0x694dc4:c.instructions+=44;goto B694dc4;
case 0x694dc7:c.instructions+=43;goto B694dc7;
case 0x694dcf:c.instructions+=42;goto B694dcf;
case 0x694dd2:c.instructions+=41;goto B694dd2;
case 0x694dd5:c.instructions+=40;goto B694dd5;
case 0x694ddc:c.instructions+=39;goto B694ddc;
case 0x694ddf:c.instructions+=38;goto B694ddf;
case 0x694de3:c.instructions+=37;goto B694de3;
case 0x694de7:c.instructions+=36;goto B694de7;
case 0x694deb:c.instructions+=35;goto B694deb;
case 0x694def:c.instructions+=34;goto B694def;
case 0x694df2:c.instructions+=33;goto B694df2;
case 0x694df5:c.instructions+=32;goto B694df5;
case 0x694df8:c.instructions+=31;goto B694df8;
case 0x694dfb:c.instructions+=30;goto B694dfb;
case 0x694dff:c.instructions+=29;goto B694dff;
case 0x694e02:c.instructions+=28;goto B694e02;
case 0x694e05:c.instructions+=27;goto B694e05;
case 0x694e09:c.instructions+=26;goto B694e09;
case 0x694e0c:c.instructions+=25;goto B694e0c;
case 0x694e0f:c.instructions+=24;goto B694e0f;
case 0x694e13:c.instructions+=23;goto B694e13;
case 0x694e16:c.instructions+=22;goto B694e16;
case 0x694e1a:c.instructions+=21;goto B694e1a;
case 0x694e1d:c.instructions+=20;goto B694e1d;
case 0x694e22:c.instructions+=19;goto B694e22;
case 0x694e26:c.instructions+=18;goto B694e26;
case 0x694e2b:c.instructions+=17;goto B694e2b;
case 0x694e2f:c.instructions+=16;goto B694e2f;
case 0x694e34:c.instructions+=15;goto B694e34;
case 0x694e38:c.instructions+=14;goto B694e38;
case 0x694e3c:c.instructions+=13;goto B694e3c;
case 0x694e40:c.instructions+=12;goto B694e40;
case 0x694e44:c.instructions+=11;goto B694e44;
case 0x694e4b:c.instructions+=10;goto B694e4b;
case 0x694e4f:c.instructions+=9;goto B694e4f;
case 0x694e54:c.instructions+=8;goto B694e54;
case 0x694e58:c.instructions+=7;goto B694e58;
case 0x694e5c:c.instructions+=6;goto B694e5c;
case 0x694e60:c.instructions+=5;goto B694e60;
case 0x694e63:c.instructions+=4;goto B694e63;
case 0x694e67:c.instructions+=3;goto B694e67;
case 0x694e6b:c.instructions+=2;goto B694e6b;
case 0x694e6d:c.instructions+=1;goto B694e6d;
case 0x694e70:goto L694e70;
case 0x694e72:c.instructions+=17;goto B694e72;
case 0x694e76:c.instructions+=16;goto B694e76;
case 0x694e7a:c.instructions+=15;goto B694e7a;
case 0x694e7e:c.instructions+=14;goto B694e7e;
case 0x694e81:c.instructions+=13;goto B694e81;
case 0x694e85:c.instructions+=12;goto B694e85;
case 0x694e88:c.instructions+=11;goto B694e88;
case 0x694e8c:c.instructions+=10;goto B694e8c;
case 0x694e90:c.instructions+=9;goto B694e90;
case 0x694e94:c.instructions+=8;goto B694e94;
case 0x694e98:c.instructions+=7;goto B694e98;
case 0x694e9c:c.instructions+=6;goto B694e9c;
case 0x694e9f:c.instructions+=5;goto B694e9f;
case 0x694ea6:c.instructions+=4;goto B694ea6;
case 0x694eaa:c.instructions+=3;goto B694eaa;
case 0x694eae:c.instructions+=2;goto B694eae;
case 0x694eb0:c.instructions+=1;goto B694eb0;
case 0x694eb3:goto L694eb3;
case 0x694eb5:c.instructions+=62;goto B694eb5;
case 0x694eb9:c.instructions+=61;goto B694eb9;
case 0x694ebd:c.instructions+=60;goto B694ebd;
case 0x694ec1:c.instructions+=59;goto B694ec1;
case 0x694ec8:c.instructions+=58;goto B694ec8;
case 0x694ecb:c.instructions+=57;goto B694ecb;
case 0x694ecf:c.instructions+=56;goto B694ecf;
case 0x694ed2:c.instructions+=55;goto B694ed2;
case 0x694ed5:c.instructions+=54;goto B694ed5;
case 0x694ed9:c.instructions+=53;goto B694ed9;
case 0x694edc:c.instructions+=52;goto B694edc;
case 0x694ee0:c.instructions+=51;goto B694ee0;
case 0x694ee4:c.instructions+=50;goto B694ee4;
case 0x694ee8:c.instructions+=49;goto B694ee8;
case 0x694eec:c.instructions+=48;goto B694eec;
case 0x694eef:c.instructions+=47;goto B694eef;
case 0x694ef3:c.instructions+=46;goto B694ef3;
case 0x694ef6:c.instructions+=45;goto B694ef6;
case 0x694ef9:c.instructions+=44;goto B694ef9;
case 0x694efd:c.instructions+=43;goto B694efd;
case 0x694f00:c.instructions+=42;goto B694f00;
case 0x694f03:c.instructions+=41;goto B694f03;
case 0x694f06:c.instructions+=40;goto B694f06;
case 0x694f09:c.instructions+=39;goto B694f09;
case 0x694f0d:c.instructions+=38;goto B694f0d;
case 0x694f11:c.instructions+=37;goto B694f11;
case 0x694f14:c.instructions+=36;goto B694f14;
case 0x694f17:c.instructions+=35;goto B694f17;
case 0x694f1a:c.instructions+=34;goto B694f1a;
case 0x694f1d:c.instructions+=33;goto B694f1d;
case 0x694f21:c.instructions+=32;goto B694f21;
case 0x694f25:c.instructions+=31;goto B694f25;
case 0x694f28:c.instructions+=30;goto B694f28;
case 0x694f2b:c.instructions+=29;goto B694f2b;
case 0x694f2f:c.instructions+=28;goto B694f2f;
case 0x694f33:c.instructions+=27;goto B694f33;
case 0x694f37:c.instructions+=26;goto B694f37;
case 0x694f3b:c.instructions+=25;goto B694f3b;
case 0x694f3f:c.instructions+=24;goto B694f3f;
case 0x694f42:c.instructions+=23;goto B694f42;
case 0x694f46:c.instructions+=22;goto B694f46;
case 0x694f4e:c.instructions+=21;goto B694f4e;
case 0x694f51:c.instructions+=20;goto B694f51;
case 0x694f55:c.instructions+=19;goto B694f55;
case 0x694f59:c.instructions+=18;goto B694f59;
case 0x694f5c:c.instructions+=17;goto B694f5c;
case 0x694f5f:c.instructions+=16;goto B694f5f;
case 0x694f63:c.instructions+=15;goto B694f63;
case 0x694f67:c.instructions+=14;goto B694f67;
case 0x694f6b:c.instructions+=13;goto B694f6b;
case 0x694f6f:c.instructions+=12;goto B694f6f;
case 0x694f72:c.instructions+=11;goto B694f72;
case 0x694f75:c.instructions+=10;goto B694f75;
case 0x694f79:c.instructions+=9;goto B694f79;
case 0x694f7d:c.instructions+=8;goto B694f7d;
case 0x694f81:c.instructions+=7;goto B694f81;
case 0x694f85:c.instructions+=6;goto B694f85;
case 0x694f88:c.instructions+=5;goto B694f88;
case 0x694f8b:c.instructions+=4;goto B694f8b;
case 0x694f8e:c.instructions+=3;goto B694f8e;
case 0x694f92:c.instructions+=2;goto B694f92;
case 0x694f94:c.instructions+=1;goto B694f94;
case 0x694f97:goto L694f97;
case 0x694f9b:c.instructions+=28;goto B694f9b;
case 0x694f9f:c.instructions+=27;goto B694f9f;
case 0x694fa2:c.instructions+=26;goto B694fa2;
case 0x694fa6:c.instructions+=25;goto B694fa6;
case 0x694faa:c.instructions+=24;goto B694faa;
case 0x694fad:c.instructions+=23;goto B694fad;
case 0x694fb1:c.instructions+=22;goto B694fb1;
case 0x694fb4:c.instructions+=21;goto B694fb4;
case 0x694fb7:c.instructions+=20;goto B694fb7;
case 0x694fba:c.instructions+=19;goto B694fba;
case 0x694fbe:c.instructions+=18;goto B694fbe;
case 0x694fc2:c.instructions+=17;goto B694fc2;
case 0x694fc6:c.instructions+=16;goto B694fc6;
case 0x694fc9:c.instructions+=15;goto B694fc9;
case 0x694fcd:c.instructions+=14;goto B694fcd;
case 0x694fd0:c.instructions+=13;goto B694fd0;
case 0x694fd4:c.instructions+=12;goto B694fd4;
case 0x694fd8:c.instructions+=11;goto B694fd8;
case 0x694fdc:c.instructions+=10;goto B694fdc;
case 0x694fdf:c.instructions+=9;goto B694fdf;
case 0x694fe3:c.instructions+=8;goto B694fe3;
case 0x694fea:c.instructions+=7;goto B694fea;
case 0x694fed:c.instructions+=6;goto B694fed;
case 0x694ff1:c.instructions+=5;goto B694ff1;
case 0x694ff5:c.instructions+=4;goto B694ff5;
case 0x694ff8:c.instructions+=3;goto B694ff8;
case 0x694ffa:c.instructions+=2;goto B694ffa;
case 0x694ffe:c.instructions+=1;goto B694ffe;
default:missing_instruction(c.pc);}
B694000:L694000:{c.instructions+=1;NFSU2_TR(0x694000);
{goto L694064;}
}
B694002:L694002:{c.instructions+=2;NFSU2_TR(0x694002);
__builtin_memmove((R+24),(R+4),4);
}
B694004:{NFSU2_TR(0x694004);
{goto L694064;}
}
B694006:L694006:{c.instructions+=2;NFSU2_TR(0x694006);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B694009:{NFSU2_TR(0x694009);
{goto L694064;}
}
B69400b:L69400b:{c.instructions+=6;NFSU2_TR(0x69400b);
w2(R+4260,0xffffu);
}
B69400d:{NFSU2_TR(0x69400d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69400e:{NFSU2_TR(0x69400e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B694011:{NFSU2_TR(0x694011);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B694014:{NFSU2_TR(0x694014);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B694015:{NFSU2_TR(0x694015);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69401aull));
TAIL_STATIC(0x693d9bu,693);
}
B69401a:L69401a:{c.instructions+=2;NFSU2_TR(0x69401a);
w2(R+4260,0xffffu);
}
B69401c:{NFSU2_TR(0x69401c);
{goto L694064;}
}
B69401e:L69401e:{c.instructions+=2;NFSU2_TR(0x69401e);
__builtin_memmove((R+24),(R+28),4);
}
B694020:{NFSU2_TR(0x694020);
{goto L694064;}
}
B694022:L694022:{c.instructions+=6;NFSU2_TR(0x694022);
w2(R+4260,0xffffu);
}
B694024:{NFSU2_TR(0x694024);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B694025:{NFSU2_TR(0x694025);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B694026:{NFSU2_TR(0x694026);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B694029:{NFSU2_TR(0x694029);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69402a:{NFSU2_TR(0x69402a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69402full));
TAIL_STATIC(0x693d9bu,693);
}
B69402f:L69402f:{c.instructions+=2;NFSU2_TR(0x69402f);
w2(R+4260,0xffffu);
}
B694031:{NFSU2_TR(0x694031);
{goto L694064;}
}
B694033:L694033:{c.instructions+=6;NFSU2_TR(0x694033);
w2(R+4260,0xffffu);
}
B694035:{NFSU2_TR(0x694035);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B694038:{NFSU2_TR(0x694038);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B69403b:{NFSU2_TR(0x69403b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69403c:{NFSU2_TR(0x69403c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69403d:{NFSU2_TR(0x69403d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x694042ull));
TAIL_STATIC(0x693d9bu,693);
}
B694042:L694042:{c.instructions+=2;NFSU2_TR(0x694042);
w2(R+4260,0xffffu);
}
B694044:{NFSU2_TR(0x694044);
{goto L694064;}
}
B694046:L694046:{c.instructions+=6;NFSU2_TR(0x694046);
w2(R+4260,0xffffu);
}
B694048:{NFSU2_TR(0x694048);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69404b:{NFSU2_TR(0x69404b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B69404e:{NFSU2_TR(0x69404e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69404f:{NFSU2_TR(0x69404f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B694050:{NFSU2_TR(0x694050);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x694055ull));
TAIL_STATIC(0x693d9bu,693);
}
B694055:L694055:{c.instructions+=5;NFSU2_TR(0x694055);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B694058:{NFSU2_TR(0x694058);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B69405b:{NFSU2_TR(0x69405b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69405c:{NFSU2_TR(0x69405c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69405d:{NFSU2_TR(0x69405d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x694062ull));
TAIL_STATIC(0x693d9bu,693);
}
B694062:L694062:{c.instructions+=1;NFSU2_TR(0x694062);
w2(R+4260,0xffffu);
}
B694064:L694064:{c.instructions+=4;NFSU2_TR(0x694064);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B694065:{NFSU2_TR(0x694065);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B694068:{NFSU2_TR(0x694068);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69406b:{NFSU2_TR(0x69406b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x694070ull));
TAIL_STATIC(0x693d0eu,693);
}
B694070:L694070:{c.instructions+=4;NFSU2_TR(0x694070);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B694074:{NFSU2_TR(0x694074);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B694075:{NFSU2_TR(0x694075);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B694076:{NFSU2_TR(0x694076);
if(r1(R+518)){{goto L6940d4;}}
}
B694078:L694078:{c.instructions+=23;NFSU2_TR(0x694078);
w2(R+4260,0xffffu);
}
B69407a:{NFSU2_TR(0x69407a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69407d:{NFSU2_TR(0x69407d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B694080:{NFSU2_TR(0x694080);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B694083:{NFSU2_TR(0x694083);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B694087:{NFSU2_TR(0x694087);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B69408a:{NFSU2_TR(0x69408a);
w8(R+4352,u64(u64(r8(R+4352))^u64(m8(0x7b71d8))));
}
B694091:{NFSU2_TR(0x694091);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B694095:{NFSU2_TR(0x694095);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B694099:{NFSU2_TR(0x694099);
{wv<8>((R+4384),uo::pi2fd<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B69409d:{NFSU2_TR(0x69409d);
{wv<8>((R+4400),uo::pi2fd<8>(rv<8>((R+4400)),rv<8>((R+4400))));}
}
B6940a1:{NFSU2_TR(0x6940a1);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>(gp(0x7b71e0))));}
}
B6940a9:{NFSU2_TR(0x6940a9);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>(gp(0x7b71e8))));}
}
B6940b1:{NFSU2_TR(0x6940b1);
__builtin_memmove((R+4432),(R+4416),8);
}
B6940b4:{NFSU2_TR(0x6940b4);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4436),4);
}
B6940b7:{NFSU2_TR(0x6940b7);
{wv<8>((R+4432),uo::pfsub<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6940bb:{NFSU2_TR(0x6940bb);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B6940bf:{NFSU2_TR(0x6940bf);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B6940c3:{NFSU2_TR(0x6940c3);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4416))));}
}
B6940c7:{NFSU2_TR(0x6940c7);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B6940cb:{NFSU2_TR(0x6940cb);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B6940ce:{NFSU2_TR(0x6940ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(r8(R+4368)));
s4(u32(r4(U+0)),r4(U+4));
}
B6940d2:{NFSU2_TR(0x6940d2);
w2(R+4260,0xffffu);
}
B6940d4:L6940d4:{c.instructions+=3;NFSU2_TR(0x6940d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6940d7:{NFSU2_TR(0x6940d7);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6940d8:{NFSU2_TR(0x6940d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6940fb:L6940fb:{c.instructions+=24;NFSU2_TR(0x6940fb);
__builtin_memmove((R+28),(R+28),4);
}
B6940fd:{NFSU2_TR(0x6940fd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6940fe:{NFSU2_TR(0x6940fe);
__builtin_memmove((R+20),(R+16),4);
}
B694100:{NFSU2_TR(0x694100);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B694103:{NFSU2_TR(0x694103);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B694106:{NFSU2_TR(0x694106);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B694108:{NFSU2_TR(0x694108);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B694109:{NFSU2_TR(0x694109);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B69410b:{NFSU2_TR(0x69410b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69410c:{NFSU2_TR(0x69410c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69410f:{NFSU2_TR(0x69410f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B694111:{NFSU2_TR(0x694111);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B694114:{NFSU2_TR(0x694114);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B694116:{NFSU2_TR(0x694116);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B694118:{NFSU2_TR(0x694118);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69411a:{NFSU2_TR(0x69411a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B69411d:{NFSU2_TR(0x69411d);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B69411f:{NFSU2_TR(0x69411f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B694121:{NFSU2_TR(0x694121);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B694123:{NFSU2_TR(0x694123);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B694126:{NFSU2_TR(0x694126);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B694129:{NFSU2_TR(0x694129);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B69412b:{NFSU2_TR(0x69412b);
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
B69412e:{NFSU2_TR(0x69412e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L69424a;}}
}
B694134:L694134:{c.instructions+=1;NFSU2_TR(0x694134);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x6942f8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B69413b:L69413b:{c.instructions+=33;NFSU2_TR(0x69413b);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B69413d:{NFSU2_TR(0x69413d);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B694140:{NFSU2_TR(0x694140);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B694142:{NFSU2_TR(0x694142);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B694145:{NFSU2_TR(0x694145);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B694147:{NFSU2_TR(0x694147);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B69414a:{NFSU2_TR(0x69414a);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B69414c:{NFSU2_TR(0x69414c);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B69414f:{NFSU2_TR(0x69414f);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B694151:{NFSU2_TR(0x694151);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B694154:{NFSU2_TR(0x694154);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B694156:{NFSU2_TR(0x694156);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B694159:{NFSU2_TR(0x694159);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B69415b:{NFSU2_TR(0x69415b);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B69415e:{NFSU2_TR(0x69415e);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B694160:{NFSU2_TR(0x694160);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B694163:{NFSU2_TR(0x694163);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B694165:{NFSU2_TR(0x694165);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B694168:{NFSU2_TR(0x694168);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B69416a:{NFSU2_TR(0x69416a);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B69416d:{NFSU2_TR(0x69416d);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B69416f:{NFSU2_TR(0x69416f);
{u32 ea_=u32(r4(R+20)+u32(4294967240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B694172:{NFSU2_TR(0x694172);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B694174:{NFSU2_TR(0x694174);
{u32 ea_=u32(r4(R+20)+u32(4294967236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B694177:{NFSU2_TR(0x694177);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B694179:{NFSU2_TR(0x694179);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B69417c:{NFSU2_TR(0x69417c);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B69417e:{NFSU2_TR(0x69417e);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B694181:{NFSU2_TR(0x694181);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B694183:{NFSU2_TR(0x694183);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B694186:{NFSU2_TR(0x694186);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B694188:{NFSU2_TR(0x694188);
{u32 ea_=u32(r4(R+20)+u32(4294967232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B69418b:{NFSU2_TR(0x69418b);
{goto L69424a;}
}
B694190:L694190:{c.instructions+=6;NFSU2_TR(0x694190);
w2(R+4260,0xffffu);
}
B694192:{NFSU2_TR(0x694192);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B694195:{NFSU2_TR(0x694195);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B694198:{NFSU2_TR(0x694198);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B694199:{NFSU2_TR(0x694199);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69419a:{NFSU2_TR(0x69419a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69419full));
TAIL_STATIC(0x693650u,693);
}
B69419f:L69419f:{c.instructions+=2;NFSU2_TR(0x69419f);
w2(R+4260,0xffffu);
}
B6941a1:{NFSU2_TR(0x6941a1);
{goto L69424a;}
}
B6941a6:L6941a6:{c.instructions+=6;NFSU2_TR(0x6941a6);
w2(R+4260,0xffffu);
}
B6941a8:{NFSU2_TR(0x6941a8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6941a9:{NFSU2_TR(0x6941a9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6941aa:{NFSU2_TR(0x6941aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6941ad:{NFSU2_TR(0x6941ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6941ae:{NFSU2_TR(0x6941ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6941b3ull));
TAIL_STATIC(0x693650u,693);
}
B6941b3:L6941b3:{c.instructions+=2;NFSU2_TR(0x6941b3);
w2(R+4260,0xffffu);
}
B6941b5:{NFSU2_TR(0x6941b5);
{goto L69424a;}
}
B6941ba:L6941ba:{c.instructions+=6;NFSU2_TR(0x6941ba);
w2(R+4260,0xffffu);
}
B6941bc:{NFSU2_TR(0x6941bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6941bf:{NFSU2_TR(0x6941bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6941c2:{NFSU2_TR(0x6941c2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6941c3:{NFSU2_TR(0x6941c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6941c4:{NFSU2_TR(0x6941c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6941c9ull));
TAIL_STATIC(0x693d9bu,693);
}
B6941c9:L6941c9:{c.instructions+=5;NFSU2_TR(0x6941c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6941cc:{NFSU2_TR(0x6941cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6941cd:{NFSU2_TR(0x6941cd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6941ce:{NFSU2_TR(0x6941ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6941cf:{NFSU2_TR(0x6941cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6941d4ull));
TAIL_STATIC(0x693650u,693);
}
B6941d4:L6941d4:{c.instructions+=2;NFSU2_TR(0x6941d4);
w2(R+4260,0xffffu);
}
B6941d6:{NFSU2_TR(0x6941d6);
{goto L69424a;}
}
B6941d8:L6941d8:{c.instructions+=6;NFSU2_TR(0x6941d8);
w2(R+4260,0xffffu);
}
B6941da:{NFSU2_TR(0x6941da);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6941db:{NFSU2_TR(0x6941db);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6941dc:{NFSU2_TR(0x6941dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6941df:{NFSU2_TR(0x6941df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6941e0:{NFSU2_TR(0x6941e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6941e5ull));
TAIL_STATIC(0x693650u,693);
}
B6941e5:L6941e5:{c.instructions+=2;NFSU2_TR(0x6941e5);
w2(R+4260,0xffffu);
}
B6941e7:{NFSU2_TR(0x6941e7);
{goto L69424a;}
}
B6941e9:L6941e9:{c.instructions+=6;NFSU2_TR(0x6941e9);
w2(R+4260,0xffffu);
}
B6941eb:{NFSU2_TR(0x6941eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6941ee:{NFSU2_TR(0x6941ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6941f1:{NFSU2_TR(0x6941f1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6941f2:{NFSU2_TR(0x6941f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6941f3:{NFSU2_TR(0x6941f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6941f8ull));
TAIL_STATIC(0x693d9bu,693);
}
B6941f8:L6941f8:{c.instructions+=5;NFSU2_TR(0x6941f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6941fb:{NFSU2_TR(0x6941fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6941fc:{NFSU2_TR(0x6941fc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6941fd:{NFSU2_TR(0x6941fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6941fe:{NFSU2_TR(0x6941fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x694203ull));
TAIL_STATIC(0x693650u,693);
}
B694203:L694203:{c.instructions+=2;NFSU2_TR(0x694203);
w2(R+4260,0xffffu);
}
B694205:{NFSU2_TR(0x694205);
{goto L69424a;}
}
B694207:L694207:{c.instructions+=6;NFSU2_TR(0x694207);
w2(R+4260,0xffffu);
}
B694209:{NFSU2_TR(0x694209);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69420a:{NFSU2_TR(0x69420a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69420b:{NFSU2_TR(0x69420b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B69420e:{NFSU2_TR(0x69420e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69420f:{NFSU2_TR(0x69420f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x694214ull));
TAIL_STATIC(0x693d9bu,693);
}
B694214:L694214:{c.instructions+=5;NFSU2_TR(0x694214);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B694217:{NFSU2_TR(0x694217);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B694218:{NFSU2_TR(0x694218);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B694219:{NFSU2_TR(0x694219);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69421a:{NFSU2_TR(0x69421a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69421full));
TAIL_STATIC(0x693650u,693);
}
B69421f:L69421f:{c.instructions+=2;NFSU2_TR(0x69421f);
w2(R+4260,0xffffu);
}
B694221:{NFSU2_TR(0x694221);
{goto L69424a;}
}
B694223:L694223:{c.instructions+=6;NFSU2_TR(0x694223);
w2(R+4260,0xffffu);
}
B694225:{NFSU2_TR(0x694225);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B694226:{NFSU2_TR(0x694226);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B694227:{NFSU2_TR(0x694227);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B69422a:{NFSU2_TR(0x69422a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69422b:{NFSU2_TR(0x69422b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x694230ull));
TAIL_STATIC(0x693d9bu,693);
}
B694230:L694230:{c.instructions+=5;NFSU2_TR(0x694230);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B694233:{NFSU2_TR(0x694233);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B694236:{NFSU2_TR(0x694236);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B694237:{NFSU2_TR(0x694237);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B694238:{NFSU2_TR(0x694238);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69423dull));
TAIL_STATIC(0x693d9bu,693);
}
B69423d:L69423d:{c.instructions+=5;NFSU2_TR(0x69423d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B694240:{NFSU2_TR(0x694240);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B694241:{NFSU2_TR(0x694241);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B694242:{NFSU2_TR(0x694242);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B694243:{NFSU2_TR(0x694243);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x694248ull));
TAIL_STATIC(0x693650u,693);
}
B694248:L694248:{c.instructions+=1;NFSU2_TR(0x694248);
w2(R+4260,0xffffu);
}
B69424a:L69424a:{c.instructions+=4;NFSU2_TR(0x69424a);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B69424d:{NFSU2_TR(0x69424d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69424e:{NFSU2_TR(0x69424e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69424f:{NFSU2_TR(0x69424f);
if(r1(R+518)){{goto L6942e2;}}
}
B694255:L694255:{c.instructions+=38;NFSU2_TR(0x694255);
w2(R+4260,0xffffu);
}
B694257:{NFSU2_TR(0x694257);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69425a:{NFSU2_TR(0x69425a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69425d:{NFSU2_TR(0x69425d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B694260:{NFSU2_TR(0x694260);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4368),(U+0),8);
}
B694263:{NFSU2_TR(0x694263);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B694267:{NFSU2_TR(0x694267);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B69426a:{NFSU2_TR(0x69426a);
{wv<8>((R+4368),uo::pi2fd<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B69426e:{NFSU2_TR(0x69426e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B694272:{NFSU2_TR(0x694272);
{wv<8>((R+4384),uo::pi2fd<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B694276:{NFSU2_TR(0x694276);
__builtin_memmove((R+4400),(R+4384),8);
}
B694279:{NFSU2_TR(0x694279);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B69427c:{NFSU2_TR(0x69427c);
{SPILL();c.pc=0x69427cu;V r_=user_op(c,524532,{rv<8>((R+4432)),rv<8>((R+4384))});SPILL();wv<8>((R+4432),r_);}
}
B694280:{NFSU2_TR(0x694280);
{SPILL();c.pc=0x694280u;V r_=user_op(c,524532,{rv<8>((R+4400)),rv<8>((R+4400))});SPILL();wv<8>((R+4400),r_);}
}
B694284:{NFSU2_TR(0x694284);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B694288:{NFSU2_TR(0x694288);
__builtin_memmove((R+4436),(R+4400),4);
}
B69428b:{NFSU2_TR(0x69428b);
{SPILL();c.pc=0x69428bu;V r_=user_op(c,524534,{rv<8>((R+4384)),rv<8>((R+4432))});SPILL();wv<8>((R+4384),r_);}
}
B69428f:{NFSU2_TR(0x69428f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B694293:{NFSU2_TR(0x694293);
{SPILL();c.pc=0x694293u;V r_=user_op(c,524536,{rv<8>((R+4384)),rv<8>((R+4432))});SPILL();wv<8>((R+4384),r_);}
}
B694297:{NFSU2_TR(0x694297);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>(gp(0x7b71f0))));}
}
B69429f:{NFSU2_TR(0x69429f);
__builtin_memmove((R+4432),(R+4416),8);
}
B6942a2:{NFSU2_TR(0x6942a2);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B6942a6:{NFSU2_TR(0x6942a6);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4436),4);
}
B6942a9:{NFSU2_TR(0x6942a9);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>(gp(0x7b71e0))));}
}
B6942b1:{NFSU2_TR(0x6942b1);
{wv<8>((R+4432),uo::pfsub<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6942b5:{NFSU2_TR(0x6942b5);
{SPILL();c.pc=0x6942b5u;V r_=user_op(c,524532,{rv<8>((R+4448)),rv<8>((R+4432))});SPILL();wv<8>((R+4448),r_);}
}
B6942b9:{NFSU2_TR(0x6942b9);
w8(R+4352,u64(u64(r8(R+4352))^u64(m8(0x7b71d8))));
}
B6942c0:{NFSU2_TR(0x6942c0);
{SPILL();c.pc=0x6942c0u;V r_=user_op(c,524534,{rv<8>((R+4432)),rv<8>((R+4448))});SPILL();wv<8>((R+4432),r_);}
}
B6942c4:{NFSU2_TR(0x6942c4);
{SPILL();c.pc=0x6942c4u;V r_=user_op(c,524536,{rv<8>((R+4432)),rv<8>((R+4448))});SPILL();wv<8>((R+4432),r_);}
}
B6942c8:{NFSU2_TR(0x6942c8);
{wv<8>((R+4400),uo::pfsub<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B6942cc:{NFSU2_TR(0x6942cc);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B6942d0:{NFSU2_TR(0x6942d0);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+8)),r8(U+0));
}
B6942d3:{NFSU2_TR(0x6942d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
w4(U+4,u32(r8(R+4400)));
s4(u32(r4(U+0)),r4(U+4));
}
B6942d7:{NFSU2_TR(0x6942d7);
w2(R+4260,0xffffu);
}
B6942d9:{NFSU2_TR(0x6942d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6942dc:{NFSU2_TR(0x6942dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6942dd:{NFSU2_TR(0x6942dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6942e0:{NFSU2_TR(0x6942e0);
{goto L6942e9;}
}
B6942e2:L6942e2:{c.instructions+=3;NFSU2_TR(0x6942e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6942e5:{NFSU2_TR(0x6942e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6942e6:{NFSU2_TR(0x6942e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6942e9:L6942e9:{c.instructions+=2;NFSU2_TR(0x6942e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6942ec:{NFSU2_TR(0x6942ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6942f1ull));
TAIL_STATIC(0x693d0eu,693);
}
B6942f1:L6942f1:{c.instructions+=3;NFSU2_TR(0x6942f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6942f4:{NFSU2_TR(0x6942f4);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6942f5:{NFSU2_TR(0x6942f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B694318:L694318:{c.instructions+=24;NFSU2_TR(0x694318);
__builtin_memmove((R+28),(R+28),4);
}
B69431a:{NFSU2_TR(0x69431a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69431b:{NFSU2_TR(0x69431b);
__builtin_memmove((R+20),(R+16),4);
}
B69431d:{NFSU2_TR(0x69431d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B694320:{NFSU2_TR(0x694320);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B694323:{NFSU2_TR(0x694323);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B694325:{NFSU2_TR(0x694325);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B694326:{NFSU2_TR(0x694326);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B694328:{NFSU2_TR(0x694328);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B694329:{NFSU2_TR(0x694329);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69432c:{NFSU2_TR(0x69432c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69432e:{NFSU2_TR(0x69432e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B694331:{NFSU2_TR(0x694331);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B694333:{NFSU2_TR(0x694333);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B694335:{NFSU2_TR(0x694335);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B694337:{NFSU2_TR(0x694337);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B69433a:{NFSU2_TR(0x69433a);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B69433c:{NFSU2_TR(0x69433c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B69433e:{NFSU2_TR(0x69433e);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B694340:{NFSU2_TR(0x694340);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B694343:{NFSU2_TR(0x694343);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B694346:{NFSU2_TR(0x694346);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B694348:{NFSU2_TR(0x694348);
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
B69434b:{NFSU2_TR(0x69434b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6943ed;}}
}
B694351:L694351:{c.instructions+=1;NFSU2_TR(0x694351);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x69449bull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B694358:L694358:{c.instructions+=33;NFSU2_TR(0x694358);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B69435a:{NFSU2_TR(0x69435a);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B69435d:{NFSU2_TR(0x69435d);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B69435f:{NFSU2_TR(0x69435f);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B694362:{NFSU2_TR(0x694362);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B694364:{NFSU2_TR(0x694364);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B694367:{NFSU2_TR(0x694367);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B694369:{NFSU2_TR(0x694369);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B69436c:{NFSU2_TR(0x69436c);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B69436e:{NFSU2_TR(0x69436e);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B694371:{NFSU2_TR(0x694371);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B694373:{NFSU2_TR(0x694373);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B694376:{NFSU2_TR(0x694376);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B694378:{NFSU2_TR(0x694378);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B69437b:{NFSU2_TR(0x69437b);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B69437d:{NFSU2_TR(0x69437d);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B694380:{NFSU2_TR(0x694380);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B694382:{NFSU2_TR(0x694382);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B694385:{NFSU2_TR(0x694385);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B694387:{NFSU2_TR(0x694387);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B69438a:{NFSU2_TR(0x69438a);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B69438c:{NFSU2_TR(0x69438c);
{u32 ea_=u32(r4(R+20)+u32(4294967240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B69438f:{NFSU2_TR(0x69438f);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B694391:{NFSU2_TR(0x694391);
{u32 ea_=u32(r4(R+20)+u32(4294967236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B694394:{NFSU2_TR(0x694394);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B694396:{NFSU2_TR(0x694396);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B694399:{NFSU2_TR(0x694399);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B69439b:{NFSU2_TR(0x69439b);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B69439e:{NFSU2_TR(0x69439e);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6943a0:{NFSU2_TR(0x6943a0);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6943a3:{NFSU2_TR(0x6943a3);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6943a5:{NFSU2_TR(0x6943a5);
{u32 ea_=u32(r4(R+20)+u32(4294967232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6943a8:{NFSU2_TR(0x6943a8);
{goto L6943ed;}
}
B6943aa:L6943aa:{c.instructions+=2;NFSU2_TR(0x6943aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6943ad:{NFSU2_TR(0x6943ad);
{goto L6943e3;}
}
B6943af:L6943af:{c.instructions+=2;NFSU2_TR(0x6943af);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6943b0:{NFSU2_TR(0x6943b0);
{goto L6943e3;}
}
B6943b2:L6943b2:{c.instructions+=3;NFSU2_TR(0x6943b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6943b5:{NFSU2_TR(0x6943b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6943b6:{NFSU2_TR(0x6943b6);
{goto L6943d6;}
}
B6943b8:L6943b8:{c.instructions+=2;NFSU2_TR(0x6943b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6943b9:{NFSU2_TR(0x6943b9);
{goto L6943e3;}
}
B6943bb:L6943bb:{c.instructions+=2;NFSU2_TR(0x6943bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6943be:{NFSU2_TR(0x6943be);
{goto L6943c1;}
}
B6943c0:L6943c0:{c.instructions+=1;NFSU2_TR(0x6943c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6943c1:L6943c1:{c.instructions+=2;NFSU2_TR(0x6943c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6943c2:{NFSU2_TR(0x6943c2);
{goto L6943d6;}
}
B6943c4:L6943c4:{c.instructions+=5;NFSU2_TR(0x6943c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6943c5:{NFSU2_TR(0x6943c5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6943c6:{NFSU2_TR(0x6943c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6943c9:{NFSU2_TR(0x6943c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6943ca:{NFSU2_TR(0x6943ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6943cfull));
TAIL_STATIC(0x693d9bu,693);
}
B6943cf:L6943cf:{c.instructions+=3;NFSU2_TR(0x6943cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6943d2:{NFSU2_TR(0x6943d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6943d5:{NFSU2_TR(0x6943d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6943d6:L6943d6:{c.instructions+=3;NFSU2_TR(0x6943d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6943d9:{NFSU2_TR(0x6943d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6943da:{NFSU2_TR(0x6943da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6943dfull));
TAIL_STATIC(0x693d9bu,693);
}
B6943df:L6943df:{c.instructions+=2;NFSU2_TR(0x6943df);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6943e2:{NFSU2_TR(0x6943e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6943e3:L6943e3:{c.instructions+=4;NFSU2_TR(0x6943e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6943e6:{NFSU2_TR(0x6943e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6943e7:{NFSU2_TR(0x6943e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6943e8:{NFSU2_TR(0x6943e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6943edull));
TAIL_STATIC(0x692f76u,692);
}
B6943ed:L6943ed:{c.instructions+=4;NFSU2_TR(0x6943ed);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6943f0:{NFSU2_TR(0x6943f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6943f1:{NFSU2_TR(0x6943f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6943f2:{NFSU2_TR(0x6943f2);
if(r1(R+518)){{goto L694485;}}
}
B6943f8:L6943f8:{c.instructions+=38;NFSU2_TR(0x6943f8);
w2(R+4260,0xffffu);
}
B6943fa:{NFSU2_TR(0x6943fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6943fd:{NFSU2_TR(0x6943fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B694400:{NFSU2_TR(0x694400);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B694403:{NFSU2_TR(0x694403);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4368),(U+0),8);
}
B694406:{NFSU2_TR(0x694406);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B69440a:{NFSU2_TR(0x69440a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B69440d:{NFSU2_TR(0x69440d);
{wv<8>((R+4368),uo::pi2fd<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B694411:{NFSU2_TR(0x694411);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B694415:{NFSU2_TR(0x694415);
{wv<8>((R+4384),uo::pi2fd<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B694419:{NFSU2_TR(0x694419);
__builtin_memmove((R+4400),(R+4384),8);
}
B69441c:{NFSU2_TR(0x69441c);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B69441f:{NFSU2_TR(0x69441f);
{SPILL();c.pc=0x69441fu;V r_=user_op(c,524532,{rv<8>((R+4432)),rv<8>((R+4384))});SPILL();wv<8>((R+4432),r_);}
}
B694423:{NFSU2_TR(0x694423);
{SPILL();c.pc=0x694423u;V r_=user_op(c,524532,{rv<8>((R+4400)),rv<8>((R+4400))});SPILL();wv<8>((R+4400),r_);}
}
B694427:{NFSU2_TR(0x694427);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B69442b:{NFSU2_TR(0x69442b);
__builtin_memmove((R+4436),(R+4400),4);
}
B69442e:{NFSU2_TR(0x69442e);
{SPILL();c.pc=0x69442eu;V r_=user_op(c,524534,{rv<8>((R+4384)),rv<8>((R+4432))});SPILL();wv<8>((R+4384),r_);}
}
B694432:{NFSU2_TR(0x694432);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B694436:{NFSU2_TR(0x694436);
{SPILL();c.pc=0x694436u;V r_=user_op(c,524536,{rv<8>((R+4384)),rv<8>((R+4432))});SPILL();wv<8>((R+4384),r_);}
}
B69443a:{NFSU2_TR(0x69443a);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>(gp(0x7b71f0))));}
}
B694442:{NFSU2_TR(0x694442);
__builtin_memmove((R+4432),(R+4416),8);
}
B694445:{NFSU2_TR(0x694445);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B694449:{NFSU2_TR(0x694449);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4436),4);
}
B69444c:{NFSU2_TR(0x69444c);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>(gp(0x7b71e0))));}
}
B694454:{NFSU2_TR(0x694454);
{wv<8>((R+4432),uo::pfsub<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B694458:{NFSU2_TR(0x694458);
{SPILL();c.pc=0x694458u;V r_=user_op(c,524532,{rv<8>((R+4448)),rv<8>((R+4432))});SPILL();wv<8>((R+4448),r_);}
}
B69445c:{NFSU2_TR(0x69445c);
w8(R+4352,u64(u64(r8(R+4352))^u64(m8(0x7b71d8))));
}
B694463:{NFSU2_TR(0x694463);
{SPILL();c.pc=0x694463u;V r_=user_op(c,524534,{rv<8>((R+4432)),rv<8>((R+4448))});SPILL();wv<8>((R+4432),r_);}
}
B694467:{NFSU2_TR(0x694467);
{SPILL();c.pc=0x694467u;V r_=user_op(c,524536,{rv<8>((R+4432)),rv<8>((R+4448))});SPILL();wv<8>((R+4432),r_);}
}
B69446b:{NFSU2_TR(0x69446b);
{wv<8>((R+4400),uo::pfsub<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B69446f:{NFSU2_TR(0x69446f);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B694473:{NFSU2_TR(0x694473);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+8)),r8(U+0));
}
B694476:{NFSU2_TR(0x694476);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
w4(U+4,u32(r8(R+4400)));
s4(u32(r4(U+0)),r4(U+4));
}
B69447a:{NFSU2_TR(0x69447a);
w2(R+4260,0xffffu);
}
B69447c:{NFSU2_TR(0x69447c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B69447f:{NFSU2_TR(0x69447f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B694480:{NFSU2_TR(0x694480);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B694483:{NFSU2_TR(0x694483);
{goto L69448c;}
}
B694485:L694485:{c.instructions+=3;NFSU2_TR(0x694485);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B694488:{NFSU2_TR(0x694488);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B694489:{NFSU2_TR(0x694489);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69448c:L69448c:{c.instructions+=2;NFSU2_TR(0x69448c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69448f:{NFSU2_TR(0x69448f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x694494ull));
TAIL_STATIC(0x693d0eu,693);
}
B694494:L694494:{c.instructions+=3;NFSU2_TR(0x694494);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B694497:{NFSU2_TR(0x694497);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B694498:{NFSU2_TR(0x694498);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6944c0:L6944c0:{c.instructions+=10;NFSU2_TR(0x6944c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6944c3:{NFSU2_TR(0x6944c3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+16)),r4(U+0));
}
B6944c6:{NFSU2_TR(0x6944c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6944ca:{NFSU2_TR(0x6944ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6944ce:{NFSU2_TR(0x6944ce);
__builtin_memmove((R+20),(R+16),4);
}
B6944d0:{NFSU2_TR(0x6944d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6944d3:{NFSU2_TR(0x6944d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6944d6:{NFSU2_TR(0x6944d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6944d9:{NFSU2_TR(0x6944d9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6944dc:{NFSU2_TR(0x6944dc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6944ff;}}
}
B6944de:L6944de:{c.instructions+=2;NFSU2_TR(0x6944de);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6944e1:{NFSU2_TR(0x6944e1);
if(r1(R+518)){{goto L6945d2;}}
}
B6944e7:L6944e7:{c.instructions+=5;NFSU2_TR(0x6944e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6944ea:{NFSU2_TR(0x6944ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B6944ed:{NFSU2_TR(0x6944ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6944f1:{NFSU2_TR(0x6944f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6944f5:{NFSU2_TR(0x6944f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6944faull));
TAIL_STATIC(0x63be32u,63b);
}
B6944fa:L6944fa:{c.instructions+=1;NFSU2_TR(0x6944fa);
{goto L6945d2;}
}
B6944ff:L6944ff:{c.instructions+=2;NFSU2_TR(0x6944ff);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B694502:{NFSU2_TR(0x694502);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6945b2;}}
}
B694508:L694508:{c.instructions+=44;NFSU2_TR(0x694508);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w8(R+4352,u64(r4(U+0)));
}
B69450b:{NFSU2_TR(0x69450b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B69450f:{NFSU2_TR(0x69450f);
w8(R+4448,u64(u64(r8(R+4448))^u64(r8(R+4448))));
}
B694512:{NFSU2_TR(0x694512);
__builtin_memmove((R+4464),gp(0x80af00),8);
}
B694519:{NFSU2_TR(0x694519);
__builtin_memmove((R+4358),(R+4450),2);
__builtin_memmove((R+4356),(R+4354),2);
__builtin_memmove((R+4354),(R+4448),2);
}
B69451c:{NFSU2_TR(0x69451c);
__builtin_memmove((R+4374),(R+4450),2);
__builtin_memmove((R+4372),(R+4370),2);
__builtin_memmove((R+4370),(R+4448),2);
}
B69451f:{NFSU2_TR(0x69451f);
__builtin_memmove((R+4384),(R+4352),8);
}
B694522:{NFSU2_TR(0x694522);
__builtin_memmove((R+4400),(R+4352),8);
}
B694525:{NFSU2_TR(0x694525);
__builtin_memmove((R+4416),(R+4368),8);
}
B694528:{NFSU2_TR(0x694528);
__builtin_memmove((R+4432),(R+4368),8);
}
B69452b:{NFSU2_TR(0x69452b);
w8(R+4352,u64(u64(r8(R+4352))&u64(r8(R+4464))));
}
B69452e:{NFSU2_TR(0x69452e);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(R+4464))));
}
B694531:{NFSU2_TR(0x694531);
__builtin_memmove((R+4464),gp(0x80af10),8);
}
B694538:{NFSU2_TR(0x694538);
u8 U[10];
w1(U+0,u8((r4(R+4352))==(r4(R+4448))));
w4(U+1,u32(r1(U+0)));
w4(R+4352,u32(u32(r4(U+1))*u32(u32(0xffffffffull))));
w1(U+5,u8((r4(R+4356))==(r4(R+4452))));
w4(U+6,u32(r1(U+5)));
w4(R+4356,u32(u32(r4(U+6))*u32(u32(0xffffffffull))));
}
B69453b:{NFSU2_TR(0x69453b);
u8 U[10];
w1(U+0,u8((r4(R+4368))==(r4(R+4448))));
w4(U+1,u32(r1(U+0)));
w4(R+4368,u32(u32(r4(U+1))*u32(u32(0xffffffffull))));
w1(U+5,u8((r4(R+4372))==(r4(R+4452))));
w4(U+6,u32(r1(U+5)));
w4(R+4372,u32(u32(r4(U+6))*u32(u32(0xffffffffull))));
}
B69453e:{NFSU2_TR(0x69453e);
__builtin_memmove((R+4448),gp(0x80af20),8);
}
B694545:{NFSU2_TR(0x694545);
w8(R+4384,u64(u64(r8(R+4384))&u64(r8(R+4448))));
}
B694548:{NFSU2_TR(0x694548);
w8(R+4416,u64(u64(r8(R+4416))&u64(r8(R+4448))));
}
B69454b:{NFSU2_TR(0x69454b);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4384))));
}
B69454e:{NFSU2_TR(0x69454e);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4416))));
}
B694551:{NFSU2_TR(0x694551);
w4(R+4400,u32(u32(r4(R+4400))+u32(r4(R+4464))));
w4(R+4404,u32(u32(r4(R+4404))+u32(r4(R+4468))));
}
B694554:{NFSU2_TR(0x694554);
w4(R+4432,u32(u32(r4(R+4432))+u32(r4(R+4464))));
w4(R+4436,u32(u32(r4(R+4436))+u32(r4(R+4468))));
}
B694557:{NFSU2_TR(0x694557);
__builtin_memmove((R+4448),(R+4352),8);
}
B69455a:{NFSU2_TR(0x69455a);
__builtin_memmove((R+4464),(R+4368),8);
}
B69455d:{NFSU2_TR(0x69455d);
w8(R+4352,u64(u64(r8(R+4352))&u64(m8(0x80af30))));
}
B694564:{NFSU2_TR(0x694564);
w8(R+4368,u64(u64(r8(R+4368))&u64(m8(0x80af30))));
}
B69456b:{NFSU2_TR(0x69456b);
w4(R+4400,u32(u32(r4(R+4400))+u32(r4(R+4352))));
w4(R+4404,u32(u32(r4(R+4404))+u32(r4(R+4356))));
}
B69456e:{NFSU2_TR(0x69456e);
w4(R+4432,u32(u32(r4(R+4432))+u32(r4(R+4368))));
w4(R+4436,u32(u32(r4(R+4436))+u32(r4(R+4372))));
}
B694571:{NFSU2_TR(0x694571);
w8(R+4448,u64(u64(r8(R+4448))&u64(m8(0x80af40))));
}
B694578:{NFSU2_TR(0x694578);
w8(R+4464,u64(u64(r8(R+4464))&u64(m8(0x80af40))));
}
B69457f:{NFSU2_TR(0x69457f);
w4(R+4384,shl<u32>(r4(R+4384),u64(u32(0x10ull))));
w4(R+4388,shl<u32>(r4(R+4388),u64(u32(0x10ull))));
}
B694583:{NFSU2_TR(0x694583);
w4(R+4416,shl<u32>(r4(R+4416),u64(u32(0x10ull))));
w4(R+4420,shl<u32>(r4(R+4420),u64(u32(0x10ull))));
}
B694587:{NFSU2_TR(0x694587);
w4(R+4400,shl<u32>(r4(R+4400),u64(u32(0xdull))));
w4(R+4404,shl<u32>(r4(R+4404),u64(u32(0xdull))));
}
B69458b:{NFSU2_TR(0x69458b);
w4(R+4432,shl<u32>(r4(R+4432),u64(u32(0xdull))));
w4(R+4436,shl<u32>(r4(R+4436),u64(u32(0xdull))));
}
B69458f:{NFSU2_TR(0x69458f);
{wv<8>((R+4400),uo::pfsub<8>(rv<8>((R+4400)),rv<8>((R+4448))));}
}
B694593:{NFSU2_TR(0x694593);
{wv<8>((R+4432),uo::pfsub<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B694597:{NFSU2_TR(0x694597);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(R+4384))));
}
B69459a:{NFSU2_TR(0x69459a);
w8(R+4432,u64(u64(r8(R+4432))|u64(r8(R+4416))));
}
B69459d:{NFSU2_TR(0x69459d);
u8 U[8];
__builtin_memmove((U+0),(R+4400),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B6945a0:{NFSU2_TR(0x6945a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6945a4:{NFSU2_TR(0x6945a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6945a7:{NFSU2_TR(0x6945a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6945aa:{NFSU2_TR(0x6945aa);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B6945ad:{NFSU2_TR(0x6945ad);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6944ffu);}goto L6944ff;}
}
B6945b2:L6945b2:{c.instructions+=2;NFSU2_TR(0x6945b2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6945b5:{NFSU2_TR(0x6945b5);
if(r1(R+518)){{goto L6945d2;}}
}
B6945b7:L6945b7:{c.instructions+=9;NFSU2_TR(0x6945b7);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B6945ba:{NFSU2_TR(0x6945ba);
__builtin_memmove((R+28),(R+4),4);
}
B6945bc:{NFSU2_TR(0x6945bc);
__builtin_memmove((R+24),(R+4),4);
}
B6945be:{NFSU2_TR(0x6945be);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B6945c1:{NFSU2_TR(0x6945c1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x2ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B6945c4:{NFSU2_TR(0x6945c4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B6945c6:{NFSU2_TR(0x6945c6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B6945c8:{NFSU2_TR(0x6945c8);
w4(R+4,u32(0x4ull));
}
B6945cd:{NFSU2_TR(0x6945cd);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6944ffu);}goto L6944ff;}
}
B6945d2:L6945d2:{c.instructions+=8;NFSU2_TR(0x6945d2);
__builtin_memmove((R+16),(R+20),4);
}
B6945d4:{NFSU2_TR(0x6945d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6945d7:{NFSU2_TR(0x6945d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+20),(U+0),4);
}
B6945da:{NFSU2_TR(0x6945da);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6945de:{NFSU2_TR(0x6945de);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6945e2:{NFSU2_TR(0x6945e2);
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
B6945e5:{NFSU2_TR(0x6945e5);
w2(R+4260,0xffffu);
}
B6945e7:{NFSU2_TR(0x6945e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B694600:L694600:{c.instructions+=11;NFSU2_TR(0x694600);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B694603:{NFSU2_TR(0x694603);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B694607:{NFSU2_TR(0x694607);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69460b:{NFSU2_TR(0x69460b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69460f:{NFSU2_TR(0x69460f);
__builtin_memmove((R+20),(R+16),4);
}
B694611:{NFSU2_TR(0x694611);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B694614:{NFSU2_TR(0x694614);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B694617:{NFSU2_TR(0x694617);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69461a:{NFSU2_TR(0x69461a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69461d:{NFSU2_TR(0x69461d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B694620:{NFSU2_TR(0x694620);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L694643;}}
}
B694622:L694622:{c.instructions+=2;NFSU2_TR(0x694622);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B694625:{NFSU2_TR(0x694625);
if(r1(R+518)){{goto L694762;}}
}
B69462b:L69462b:{c.instructions+=5;NFSU2_TR(0x69462b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B69462e:{NFSU2_TR(0x69462e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B694631:{NFSU2_TR(0x694631);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B694635:{NFSU2_TR(0x694635);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B694639:{NFSU2_TR(0x694639);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69463eull));
TAIL_STATIC(0x63bd7du,63b);
}
B69463e:L69463e:{c.instructions+=1;NFSU2_TR(0x69463e);
{goto L694762;}
}
B694643:L694643:{c.instructions+=2;NFSU2_TR(0x694643);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B694646:{NFSU2_TR(0x694646);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L694742;}}
}
B69464c:L69464c:{c.instructions+=64;NFSU2_TR(0x69464c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B69464f:{NFSU2_TR(0x69464f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B694653:{NFSU2_TR(0x694653);
__builtin_memmove((R+4448),gp(0x80af70),8);
}
B69465a:{NFSU2_TR(0x69465a);
__builtin_memmove((R+4464),(R+4448),8);
}
B69465d:{NFSU2_TR(0x69465d);
w8(R+4448,u64(u64(r8(R+4448))&u64(r8(R+4352))));
}
B694660:{NFSU2_TR(0x694660);
w8(R+4464,u64(u64(r8(R+4464))&u64(r8(R+4368))));
}
B694663:{NFSU2_TR(0x694663);
w4(R+4448,shr<u32>(r4(R+4448),u64(u32(0x12ull))));
w4(R+4452,shr<u32>(r4(R+4452),u64(u32(0x12ull))));
}
B694667:{NFSU2_TR(0x694667);
w4(R+4464,shr<u32>(r4(R+4464),u64(u32(0x12ull))));
w4(R+4468,shr<u32>(r4(R+4468),u64(u32(0x12ull))));
}
B69466b:{NFSU2_TR(0x69466b);
{wv<8>((R+4448),uo::packssdw<8>(rv<8>((R+4448)),rv<8>((R+4464))));}
}
B69466e:{NFSU2_TR(0x69466e);
w4(R+4448,shl<u32>(r4(R+4448),u64(u32(0x2ull))));
w4(R+4452,shl<u32>(r4(R+4452),u64(u32(0x2ull))));
}
B694672:{NFSU2_TR(0x694672);
u8 U[8];
__builtin_memmove((U+0),(R+4448),8);
s8_(u32(r4(R+16)),r8(U+0));
}
B694676:{NFSU2_TR(0x694676);
__builtin_memmove((R+4384),gp(0x80afc0),8);
}
B69467d:{NFSU2_TR(0x69467d);
w8(R+4352,u64(u64(r8(R+4352))&u64(r8(R+4384))));
}
B694680:{NFSU2_TR(0x694680);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(R+4384))));
}
B694683:{NFSU2_TR(0x694683);
__builtin_memmove((R+4448),(R+4352),8);
}
B694686:{NFSU2_TR(0x694686);
__builtin_memmove((R+4464),(R+4368),8);
}
B694689:{NFSU2_TR(0x694689);
__builtin_memmove((R+4400),gp(0x80af60),8);
}
B694690:{NFSU2_TR(0x694690);
__builtin_memmove((R+4416),(R+4400),8);
}
B694693:{NFSU2_TR(0x694693);
__builtin_memmove((R+4432),(R+4400),8);
}
B694696:{NFSU2_TR(0x694696);
{wv<8>((R+4400),uo::pfcmpge<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B69469a:{NFSU2_TR(0x69469a);
__builtin_memmove((R+4384),(R+4400),8);
}
B69469d:{NFSU2_TR(0x69469d);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4416))));
}
B6946a0:{NFSU2_TR(0x6946a0);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B6946a4:{NFSU2_TR(0x6946a4);
w8(R+4384,u64(u64(r8(R+4384))&u64(m8(0x80afd0))));
}
B6946ab:{NFSU2_TR(0x6946ab);
w4(R+4352,u32(u32(r4(R+4352))-u32(r4(R+4384))));
w4(R+4356,u32(u32(r4(R+4356))-u32(r4(R+4388))));
}
B6946ae:{NFSU2_TR(0x6946ae);
{wv<8>((R+4432),uo::pfcmpge<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B6946b2:{NFSU2_TR(0x6946b2);
__builtin_memmove((R+4400),(R+4432),8);
}
B6946b5:{NFSU2_TR(0x6946b5);
w8(R+4432,u64(u64(r8(R+4432))&u64(r8(R+4416))));
}
B6946b8:{NFSU2_TR(0x6946b8);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B6946bc:{NFSU2_TR(0x6946bc);
w8(R+4400,u64(u64(r8(R+4400))&u64(m8(0x80afd0))));
}
B6946c3:{NFSU2_TR(0x6946c3);
w4(R+4368,u32(u32(r4(R+4368))-u32(r4(R+4400))));
w4(R+4372,u32(u32(r4(R+4372))-u32(r4(R+4404))));
}
B6946c6:{NFSU2_TR(0x6946c6);
__builtin_memmove((R+4384),(R+4352),8);
}
B6946c9:{NFSU2_TR(0x6946c9);
__builtin_memmove((R+4400),(R+4368),8);
}
B6946cc:{NFSU2_TR(0x6946cc);
w4(R+4352,shr<u32>(r4(R+4352),u64(u32(0xdull))));
w4(R+4356,shr<u32>(r4(R+4356),u64(u32(0xdull))));
}
B6946d0:{NFSU2_TR(0x6946d0);
w4(R+4368,shr<u32>(r4(R+4368),u64(u32(0xdull))));
w4(R+4372,shr<u32>(r4(R+4372),u64(u32(0xdull))));
}
B6946d4:{NFSU2_TR(0x6946d4);
__builtin_memmove((R+4416),gp(0x80af90),8);
}
B6946db:{NFSU2_TR(0x6946db);
w8(R+4352,u64(u64(r8(R+4352))&u64(r8(R+4416))));
}
B6946de:{NFSU2_TR(0x6946de);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(R+4416))));
}
B6946e1:{NFSU2_TR(0x6946e1);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4384))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4388))));
}
B6946e4:{NFSU2_TR(0x6946e4);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4400))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4404))));
}
B6946e7:{NFSU2_TR(0x6946e7);
__builtin_memmove((R+4416),gp(0x80af50),8);
}
B6946ee:{NFSU2_TR(0x6946ee);
__builtin_memmove((R+4432),(R+4416),8);
}
B6946f1:{NFSU2_TR(0x6946f1);
{wv<8>((R+4416),uo::pfcmpgt<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B6946f5:{NFSU2_TR(0x6946f5);
{wv<8>((R+4432),uo::pfcmpgt<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B6946f9:{NFSU2_TR(0x6946f9);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4448),(U+0),8);
}
B6946fd:{NFSU2_TR(0x6946fd);
__builtin_memmove((R+4384),gp(0x80afa0),8);
}
B694704:{NFSU2_TR(0x694704);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4384))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4388))));
}
B694707:{NFSU2_TR(0x694707);
w4(R+4368,u32(u32(r4(R+4368))+u32(r4(R+4384))));
w4(R+4372,u32(u32(r4(R+4372))+u32(r4(R+4388))));
}
B69470a:{NFSU2_TR(0x69470a);
__builtin_memmove((R+4400),gp(0x80afe0),8);
}
B694711:{NFSU2_TR(0x694711);
w4(R+4352,shr<u32>(r4(R+4352),u64(u32(0xdull))));
w4(R+4356,shr<u32>(r4(R+4356),u64(u32(0xdull))));
}
B694715:{NFSU2_TR(0x694715);
w4(R+4368,shr<u32>(r4(R+4368),u64(u32(0xdull))));
w4(R+4372,shr<u32>(r4(R+4372),u64(u32(0xdull))));
}
B694719:{NFSU2_TR(0x694719);
w8(R+4352,u64(u64(r8(R+4352))&u64(r8(R+4416))));
}
B69471c:{NFSU2_TR(0x69471c);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(R+4432))));
}
B69471f:{NFSU2_TR(0x69471f);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4416))));
w8(R+4416,u64(u64(r8(U+0))&u64(r8(R+4400))));
}
B694722:{NFSU2_TR(0x694722);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4432))));
w8(R+4432,u64(u64(r8(U+0))&u64(r8(R+4400))));
}
B694725:{NFSU2_TR(0x694725);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4416))));
}
B694728:{NFSU2_TR(0x694728);
w8(R+4368,u64(u64(r8(R+4368))|u64(r8(R+4432))));
}
B69472b:{NFSU2_TR(0x69472b);
{wv<8>((R+4352),uo::packssdw<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B69472e:{NFSU2_TR(0x69472e);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4448))));
}
B694731:{NFSU2_TR(0x694731);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B694734:{NFSU2_TR(0x694734);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B694737:{NFSU2_TR(0x694737);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B69473a:{NFSU2_TR(0x69473a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B69473d:{NFSU2_TR(0x69473d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x694643u);}goto L694643;}
}
B694742:L694742:{c.instructions+=2;NFSU2_TR(0x694742);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B694745:{NFSU2_TR(0x694745);
if(r1(R+518)){{goto L694762;}}
}
B694747:L694747:{c.instructions+=9;NFSU2_TR(0x694747);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B69474a:{NFSU2_TR(0x69474a);
__builtin_memmove((R+28),(R+4),4);
}
B69474c:{NFSU2_TR(0x69474c);
__builtin_memmove((R+24),(R+4),4);
}
B69474e:{NFSU2_TR(0x69474e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x2ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B694751:{NFSU2_TR(0x694751);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B694754:{NFSU2_TR(0x694754);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B694756:{NFSU2_TR(0x694756);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B694758:{NFSU2_TR(0x694758);
w4(R+4,u32(0x4ull));
}
B69475d:{NFSU2_TR(0x69475d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x694643u);}goto L694643;}
}
B694762:L694762:{c.instructions+=8;NFSU2_TR(0x694762);
__builtin_memmove((R+16),(R+20),4);
}
B694764:{NFSU2_TR(0x694764);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B694767:{NFSU2_TR(0x694767);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B69476b:{NFSU2_TR(0x69476b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69476f:{NFSU2_TR(0x69476f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B694773:{NFSU2_TR(0x694773);
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
B694776:{NFSU2_TR(0x694776);
w2(R+4260,0xffffu);
}
B694778:{NFSU2_TR(0x694778);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69477b:L69477b:{c.instructions+=27;NFSU2_TR(0x69477b);
__builtin_memmove((R+28),(R+28),4);
}
B69477d:{NFSU2_TR(0x69477d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69477e:{NFSU2_TR(0x69477e);
__builtin_memmove((R+20),(R+16),4);
}
B694780:{NFSU2_TR(0x694780);
w2(R+4260,0xffffu);
}
B694782:{NFSU2_TR(0x694782);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B694785:{NFSU2_TR(0x694785);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B694788:{NFSU2_TR(0x694788);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69478b:{NFSU2_TR(0x69478b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B69478e:{NFSU2_TR(0x69478e);
__builtin_memmove((R+4368),(R+4352),8);
}
B694791:{NFSU2_TR(0x694791);
__builtin_memmove((R+4356),(R+4352),4);
}
B694794:{NFSU2_TR(0x694794);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4372),4);
}
B694797:{NFSU2_TR(0x694797);
__builtin_memmove((R+4400),(R+4352),8);
}
B69479a:{NFSU2_TR(0x69479a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B69479e:{NFSU2_TR(0x69479e);
__builtin_memmove((R+4416),(R+4368),8);
}
B6947a1:{NFSU2_TR(0x6947a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6947a6:{NFSU2_TR(0x6947a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B6947ab:{NFSU2_TR(0x6947ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6947b0:{NFSU2_TR(0x6947b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B6947b5:{NFSU2_TR(0x6947b5);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B6947b9:{NFSU2_TR(0x6947b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6947be:{NFSU2_TR(0x6947be);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B6947c2:{NFSU2_TR(0x6947c2);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+4)),r8(U+0));
}
B6947c5:{NFSU2_TR(0x6947c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6947c9:{NFSU2_TR(0x6947c9);
w2(R+4260,0xffffu);
}
B6947cb:{NFSU2_TR(0x6947cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6947ce:{NFSU2_TR(0x6947ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6947cf:{NFSU2_TR(0x6947cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6947d2:L6947d2:{c.instructions+=21;NFSU2_TR(0x6947d2);
__builtin_memmove((R+28),(R+28),4);
}
B6947d4:{NFSU2_TR(0x6947d4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6947d5:{NFSU2_TR(0x6947d5);
__builtin_memmove((R+20),(R+16),4);
}
B6947d7:{NFSU2_TR(0x6947d7);
w2(R+4260,0xffffu);
}
B6947d9:{NFSU2_TR(0x6947d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6947dc:{NFSU2_TR(0x6947dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6947df:{NFSU2_TR(0x6947df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6947e2:{NFSU2_TR(0x6947e2);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B6947e5:{NFSU2_TR(0x6947e5);
__builtin_memmove((R+4368),(R+4352),8);
}
B6947e8:{NFSU2_TR(0x6947e8);
__builtin_memmove((R+4356),(R+4352),4);
}
B6947eb:{NFSU2_TR(0x6947eb);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4372),4);
}
B6947ee:{NFSU2_TR(0x6947ee);
__builtin_memmove((R+4400),(R+4352),8);
}
B6947f1:{NFSU2_TR(0x6947f1);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B6947f5:{NFSU2_TR(0x6947f5);
__builtin_memmove((R+4416),(R+4368),8);
}
B6947f8:{NFSU2_TR(0x6947f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6947fd:{NFSU2_TR(0x6947fd);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B694801:{NFSU2_TR(0x694801);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+4)),r8(U+0));
}
B694804:{NFSU2_TR(0x694804);
w2(R+4260,0xffffu);
}
B694806:{NFSU2_TR(0x694806);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B694809:{NFSU2_TR(0x694809);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69480a:{NFSU2_TR(0x69480a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69480d:L69480d:{c.instructions+=31;NFSU2_TR(0x69480d);
__builtin_memmove((R+28),(R+28),4);
}
B69480f:{NFSU2_TR(0x69480f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B694810:{NFSU2_TR(0x694810);
__builtin_memmove((R+20),(R+16),4);
}
B694812:{NFSU2_TR(0x694812);
w2(R+4260,0xffffu);
}
B694814:{NFSU2_TR(0x694814);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B694817:{NFSU2_TR(0x694817);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69481a:{NFSU2_TR(0x69481a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69481d:{NFSU2_TR(0x69481d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B694820:{NFSU2_TR(0x694820);
__builtin_memmove((R+4368),(R+4352),8);
}
B694823:{NFSU2_TR(0x694823);
__builtin_memmove((R+4356),(R+4352),4);
}
B694826:{NFSU2_TR(0x694826);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4372),4);
}
B694829:{NFSU2_TR(0x694829);
__builtin_memmove((R+4400),(R+4352),8);
}
B69482c:{NFSU2_TR(0x69482c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B694830:{NFSU2_TR(0x694830);
__builtin_memmove((R+4416),(R+4368),8);
}
B694833:{NFSU2_TR(0x694833);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B694838:{NFSU2_TR(0x694838);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B69483d:{NFSU2_TR(0x69483d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B694842:{NFSU2_TR(0x694842);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B694847:{NFSU2_TR(0x694847);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B69484b:{NFSU2_TR(0x69484b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B694850:{NFSU2_TR(0x694850);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B694854:{NFSU2_TR(0x694854);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B694857:{NFSU2_TR(0x694857);
{SPILL();c.pc=0x694857u;V r_=user_op(c,524532,{rv<8>((R+4416)),rv<8>((R+4400))});SPILL();wv<8>((R+4416),r_);}
}
B69485b:{NFSU2_TR(0x69485b);
{SPILL();c.pc=0x69485bu;V r_=user_op(c,524534,{rv<8>((R+4400)),rv<8>((R+4416))});SPILL();wv<8>((R+4400),r_);}
}
B69485f:{NFSU2_TR(0x69485f);
{SPILL();c.pc=0x69485fu;V r_=user_op(c,524536,{rv<8>((R+4400)),rv<8>((R+4416))});SPILL();wv<8>((R+4400),r_);}
}
B694863:{NFSU2_TR(0x694863);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B694867:{NFSU2_TR(0x694867);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+4)),r8(U+0));
}
B69486a:{NFSU2_TR(0x69486a);
w2(R+4260,0xffffu);
}
B69486c:{NFSU2_TR(0x69486c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69486f:{NFSU2_TR(0x69486f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B694870:{NFSU2_TR(0x694870);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B694873:L694873:{c.instructions+=39;NFSU2_TR(0x694873);
w2(R+4260,0xffffu);
}
B694875:{NFSU2_TR(0x694875);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4352,u64(r4(U+4)));
}
B69487a:{NFSU2_TR(0x69487a);
__builtin_memmove((R+4368),(R+4352),8);
}
B69487d:{NFSU2_TR(0x69487d);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B694881:{NFSU2_TR(0x694881);
__builtin_memmove((R+4384),(R+4368),8);
}
B694884:{NFSU2_TR(0x694884);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B694888:{NFSU2_TR(0x694888);
__builtin_memmove((R+4400),gp(0x7b71f0),8);
}
B69488f:{NFSU2_TR(0x69488f);
__builtin_memmove((R+4416),(R+4368),8);
}
B694892:{NFSU2_TR(0x694892);
__builtin_memmove((R+4464),(R+4384),8);
}
B694895:{NFSU2_TR(0x694895);
{wv<8>((R+4464),uo::pfsub<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B694899:{NFSU2_TR(0x694899);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B69489d:{NFSU2_TR(0x69489d);
__builtin_memmove((R+4448),(R+4384),8);
}
B6948a0:{NFSU2_TR(0x6948a0);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>(gp(0x7b71f8))));}
}
B6948a8:{NFSU2_TR(0x6948a8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B6948ac:{NFSU2_TR(0x6948ac);
{wv<8>((R+4448),uo::pfsub<8>(rv<8>((R+4448)),rv<8>((R+4416))));}
}
B6948b0:{NFSU2_TR(0x6948b0);
__builtin_memmove((R+4432),(R+4368),8);
}
B6948b3:{NFSU2_TR(0x6948b3);
{wv<8>((R+4368),uo::pfsub<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B6948b7:{NFSU2_TR(0x6948b7);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B6948bb:{NFSU2_TR(0x6948bb);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4432))));}
}
B6948bf:{NFSU2_TR(0x6948bf);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>(gp(0x7b71e0))));}
}
B6948c7:{NFSU2_TR(0x6948c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6948cb:{NFSU2_TR(0x6948cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6948cf:{NFSU2_TR(0x6948cf);
__builtin_memmove((R+4372),(R+4368),4);
}
B6948d2:{NFSU2_TR(0x6948d2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6948d6:{NFSU2_TR(0x6948d6);
__builtin_memmove((R+4452),(R+4448),4);
}
B6948d9:{NFSU2_TR(0x6948d9);
__builtin_memmove((R+4468),(R+4464),4);
}
B6948dc:{NFSU2_TR(0x6948dc);
__builtin_memmove((R+4388),(R+4384),4);
}
B6948df:{NFSU2_TR(0x6948df);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+0))));}
}
B6948e3:{NFSU2_TR(0x6948e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6948e7:{NFSU2_TR(0x6948e7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+0))));}
}
B6948eb:{NFSU2_TR(0x6948eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6948ef:{NFSU2_TR(0x6948ef);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4448))));}
}
B6948f3:{NFSU2_TR(0x6948f3);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+0))));}
}
B6948f7:{NFSU2_TR(0x6948f7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((U+0))));}
}
B6948fb:{NFSU2_TR(0x6948fb);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4464))));}
}
B6948ff:{NFSU2_TR(0x6948ff);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B694903:{NFSU2_TR(0x694903);
u8 U[8];
__builtin_memmove((U+0),(R+4384),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B694906:{NFSU2_TR(0x694906);
w2(R+4260,0xffffu);
}
B694908:{NFSU2_TR(0x694908);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69490b:L69490b:{c.instructions+=20;NFSU2_TR(0x69490b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69490f:{NFSU2_TR(0x69490f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B694913:{NFSU2_TR(0x694913);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B694917:{NFSU2_TR(0x694917);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4448,u64(r4(U+4)));
}
B69491c:{NFSU2_TR(0x69491c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B69491f:{NFSU2_TR(0x69491f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B694922:{NFSU2_TR(0x694922);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B694925:{NFSU2_TR(0x694925);
__builtin_memmove((R+4452),(R+4448),4);
}
B694928:{NFSU2_TR(0x694928);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4464,u64(r4(U+4)));
}
B69492d:{NFSU2_TR(0x69492d);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B694931:{NFSU2_TR(0x694931);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B694935:{NFSU2_TR(0x694935);
__builtin_memmove((R+4468),(R+4464),4);
}
B694938:{NFSU2_TR(0x694938);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4448))));}
}
B69493c:{NFSU2_TR(0x69493c);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B694940:{NFSU2_TR(0x694940);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B694944:{NFSU2_TR(0x694944);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4464))));}
}
B694948:{NFSU2_TR(0x694948);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4384))));}
}
B69494c:{NFSU2_TR(0x69494c);
u8 U[8];
__builtin_memmove((U+0),(R+4416),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B69494f:{NFSU2_TR(0x69494f);
w2(R+4260,0xffffu);
}
B694951:{NFSU2_TR(0x694951);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B694954:L694954:{c.instructions+=18;NFSU2_TR(0x694954);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B694958:{NFSU2_TR(0x694958);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B69495b:{NFSU2_TR(0x69495b);
__builtin_memmove((R+4368),(R+4352),8);
}
B69495e:{NFSU2_TR(0x69495e);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B694962:{NFSU2_TR(0x694962);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B694966:{NFSU2_TR(0x694966);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B69496a:{NFSU2_TR(0x69496a);
__builtin_memmove((R+4384),(R+4352),8);
}
B69496d:{NFSU2_TR(0x69496d);
{SPILL();c.pc=0x69496du;V r_=user_op(c,524533,{rv<8>((R+4416)),rv<8>((R+4352))});SPILL();wv<8>((R+4416),r_);}
}
B694971:{NFSU2_TR(0x694971);
{wv<8>((R+4384),uo::pfcmpgt<8>(rv<8>((R+4384)),rv<8>(gp(0x7b71c8))));}
}
B694979:{NFSU2_TR(0x694979);
__builtin_memmove((R+4432),(R+4416),8);
}
B69497c:{NFSU2_TR(0x69497c);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4416))));}
}
B694980:{NFSU2_TR(0x694980);
{SPILL();c.pc=0x694980u;V r_=user_op(c,524535,{rv<8>((R+4416)),rv<8>((R+4352))});SPILL();wv<8>((R+4416),r_);}
}
B694984:{NFSU2_TR(0x694984);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(R+4384))));
}
B694987:{NFSU2_TR(0x694987);
{SPILL();c.pc=0x694987u;V r_=user_op(c,524536,{rv<8>((R+4416)),rv<8>((R+4432))});SPILL();wv<8>((R+4416),r_);}
}
B69498b:{NFSU2_TR(0x69498b);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4416))));}
}
B69498f:{NFSU2_TR(0x69498f);
u8 U[8];
__builtin_memmove((U+0),(R+4368),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B694992:{NFSU2_TR(0x694992);
w2(R+4260,0xffffu);
}
B694994:{NFSU2_TR(0x694994);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B694997:L694997:{c.instructions+=44;NFSU2_TR(0x694997);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4352,u64(r4(U+4)));
}
B69499c:{NFSU2_TR(0x69499c);
__builtin_memmove((R+4368),(R+4352),8);
}
B69499f:{NFSU2_TR(0x69499f);
__builtin_memmove((R+4356),(R+4352),4);
}
B6949a2:{NFSU2_TR(0x6949a2);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B6949a6:{NFSU2_TR(0x6949a6);
__builtin_memmove((R+4372),gp(0x7b7158),4);
}
B6949ad:{NFSU2_TR(0x6949ad);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B6949b1:{NFSU2_TR(0x6949b1);
__builtin_memmove((R+4400),(R+4368),8);
}
B6949b4:{NFSU2_TR(0x6949b4);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B6949b8:{NFSU2_TR(0x6949b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6949bc:{NFSU2_TR(0x6949bc);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B6949bf:{NFSU2_TR(0x6949bf);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B6949c3:{NFSU2_TR(0x6949c3);
__builtin_memmove((R+4372),(R+4368),4);
}
B6949c6:{NFSU2_TR(0x6949c6);
__builtin_memmove((R+4416),(R+4352),8);
}
B6949c9:{NFSU2_TR(0x6949c9);
__builtin_memmove((R+4404),(R+4400),4);
}
B6949cc:{NFSU2_TR(0x6949cc);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>(gp(0x7b7168))));}
}
B6949d4:{NFSU2_TR(0x6949d4);
__builtin_memmove((R+4432),(R+4352),8);
}
B6949d7:{NFSU2_TR(0x6949d7);
__builtin_memmove((R+4356),(R+4416),4);
}
B6949da:{NFSU2_TR(0x6949da);
w8(R+4400,u64(u64(r8(R+4400))^u64(m8(0x7b7178))));
}
B6949e1:{NFSU2_TR(0x6949e1);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4468),4);
}
B6949e4:{NFSU2_TR(0x6949e4);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B6949e8:{NFSU2_TR(0x6949e8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6949ec:{NFSU2_TR(0x6949ec);
{wv<8>((R+4368),uo::pfsub<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B6949f0:{NFSU2_TR(0x6949f0);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4432))));}
}
B6949f4:{NFSU2_TR(0x6949f4);
__builtin_memmove((R+4384),(R+4368),8);
}
B6949f7:{NFSU2_TR(0x6949f7);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4372),4);
}
B6949fa:{NFSU2_TR(0x6949fa);
__builtin_memmove((R+4400),(R+4352),8);
}
B6949fd:{NFSU2_TR(0x6949fd);
__builtin_memmove((R+4356),(R+4352),4);
}
B694a00:{NFSU2_TR(0x694a00);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B694a04:{NFSU2_TR(0x694a04);
__builtin_memmove((R+4388),(R+4384),4);
}
B694a07:{NFSU2_TR(0x694a07);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+0))));}
}
B694a0b:{NFSU2_TR(0x694a0b);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B694a0e:{NFSU2_TR(0x694a0e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B694a12:{NFSU2_TR(0x694a12);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+0))));}
}
B694a16:{NFSU2_TR(0x694a16);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B694a1a:{NFSU2_TR(0x694a1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B694a1e:{NFSU2_TR(0x694a1e);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B694a22:{NFSU2_TR(0x694a22);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B694a26:{NFSU2_TR(0x694a26);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B694a2a:{NFSU2_TR(0x694a2a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+0))));}
}
B694a2e:{NFSU2_TR(0x694a2e);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B694a32:{NFSU2_TR(0x694a32);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>(gp(0x7b71c0))));}
}
B694a3a:{NFSU2_TR(0x694a3a);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B694a3d:{NFSU2_TR(0x694a3d);
w2(R+4260,0xffffu);
}
B694a3f:{NFSU2_TR(0x694a3f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B694a42:L694a42:{c.instructions+=39;NFSU2_TR(0x694a42);
__builtin_memmove((R+28),(R+28),4);
}
B694a44:{NFSU2_TR(0x694a44);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B694a45:{NFSU2_TR(0x694a45);
__builtin_memmove((R+20),(R+16),4);
}
B694a47:{NFSU2_TR(0x694a47);
w2(R+4260,0xffffu);
}
B694a49:{NFSU2_TR(0x694a49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B694a4c:{NFSU2_TR(0x694a4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B694a4f:{NFSU2_TR(0x694a4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B694a52:{NFSU2_TR(0x694a52);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B694a55:{NFSU2_TR(0x694a55);
__builtin_memmove((R+4368),(R+4352),8);
}
B694a58:{NFSU2_TR(0x694a58);
__builtin_memmove((R+4356),(R+4352),4);
}
B694a5b:{NFSU2_TR(0x694a5b);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4372),4);
}
B694a5e:{NFSU2_TR(0x694a5e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B694a62:{NFSU2_TR(0x694a62);
__builtin_memmove((R+4400),(R+4384),8);
}
B694a65:{NFSU2_TR(0x694a65);
__builtin_memmove((R+4388),(R+4384),4);
}
B694a68:{NFSU2_TR(0x694a68);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B694a6b:{NFSU2_TR(0x694a6b);
__builtin_memmove((R+4416),(R+4352),8);
}
B694a6e:{NFSU2_TR(0x694a6e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B694a72:{NFSU2_TR(0x694a72);
__builtin_memmove((R+4432),(R+4368),8);
}
B694a75:{NFSU2_TR(0x694a75);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B694a7a:{NFSU2_TR(0x694a7a);
__builtin_memmove((R+4448),(R+4384),8);
}
B694a7d:{NFSU2_TR(0x694a7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B694a82:{NFSU2_TR(0x694a82);
__builtin_memmove((R+4464),(R+4400),8);
}
B694a85:{NFSU2_TR(0x694a85);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B694a8a:{NFSU2_TR(0x694a8a);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B694a8e:{NFSU2_TR(0x694a8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B694a93:{NFSU2_TR(0x694a93);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B694a97:{NFSU2_TR(0x694a97);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B694a9c:{NFSU2_TR(0x694a9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B694aa1:{NFSU2_TR(0x694aa1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B694aa6:{NFSU2_TR(0x694aa6);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B694aaa:{NFSU2_TR(0x694aaa);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B694aae:{NFSU2_TR(0x694aae);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4464))));}
}
B694ab2:{NFSU2_TR(0x694ab2);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B694ab6:{NFSU2_TR(0x694ab6);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B694ab9:{NFSU2_TR(0x694ab9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B694abd:{NFSU2_TR(0x694abd);
w2(R+4260,0xffffu);
}
B694abf:{NFSU2_TR(0x694abf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B694ac2:{NFSU2_TR(0x694ac2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B694ac3:{NFSU2_TR(0x694ac3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B694ac6:L694ac6:{c.instructions+=26;NFSU2_TR(0x694ac6);
w2(R+4260,0xffffu);
}
B694ac8:{NFSU2_TR(0x694ac8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B694acc:{NFSU2_TR(0x694acc);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B694acf:{NFSU2_TR(0x694acf);
__builtin_memmove((R+4368),(R+4352),8);
}
B694ad2:{NFSU2_TR(0x694ad2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B694ad6:{NFSU2_TR(0x694ad6);
__builtin_memmove((R+4400),(R+4384),8);
}
B694ad9:{NFSU2_TR(0x694ad9);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B694add:{NFSU2_TR(0x694add);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B694ae1:{NFSU2_TR(0x694ae1);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B694ae5:{NFSU2_TR(0x694ae5);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B694ae9:{NFSU2_TR(0x694ae9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B694aed:{NFSU2_TR(0x694aed);
__builtin_memmove((R+4432),(R+4352),8);
}
B694af0:{NFSU2_TR(0x694af0);
{SPILL();c.pc=0x694af0u;V r_=user_op(c,524533,{rv<8>((R+4416)),rv<8>((R+4352))});SPILL();wv<8>((R+4416),r_);}
}
B694af4:{NFSU2_TR(0x694af4);
{wv<8>((R+4432),uo::pfcmpgt<8>(rv<8>((R+4432)),rv<8>(gp(0x7b71c8))));}
}
B694afc:{NFSU2_TR(0x694afc);
__builtin_memmove((R+4384),(R+4416),8);
}
B694aff:{NFSU2_TR(0x694aff);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B694b03:{NFSU2_TR(0x694b03);
{SPILL();c.pc=0x694b03u;V r_=user_op(c,524535,{rv<8>((R+4352)),rv<8>((R+4384))});SPILL();wv<8>((R+4352),r_);}
}
B694b07:{NFSU2_TR(0x694b07);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(R+4432))));
}
B694b0a:{NFSU2_TR(0x694b0a);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4432))));
}
B694b0d:{NFSU2_TR(0x694b0d);
{SPILL();c.pc=0x694b0du;V r_=user_op(c,524536,{rv<8>((R+4352)),rv<8>((R+4416))});SPILL();wv<8>((R+4352),r_);}
}
B694b11:{NFSU2_TR(0x694b11);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B694b15:{NFSU2_TR(0x694b15);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B694b19:{NFSU2_TR(0x694b19);
u8 U[8];
__builtin_memmove((U+0),(R+4368),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B694b1c:{NFSU2_TR(0x694b1c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B694b20:{NFSU2_TR(0x694b20);
w2(R+4260,0xffffu);
}
B694b22:{NFSU2_TR(0x694b22);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B694b25:L694b25:{c.instructions+=94;NFSU2_TR(0x694b25);
__builtin_memmove((R+28),(R+28),4);
}
B694b27:{NFSU2_TR(0x694b27);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B694b28:{NFSU2_TR(0x694b28);
w2(R+4260,0xffffu);
}
B694b2a:{NFSU2_TR(0x694b2a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B694b2e:{NFSU2_TR(0x694b2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B694b32:{NFSU2_TR(0x694b32);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B694b36:{NFSU2_TR(0x694b36);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B694b3a:{NFSU2_TR(0x694b3a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B694b3d:{NFSU2_TR(0x694b3d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4368),(U+0),8);
}
B694b40:{NFSU2_TR(0x694b40);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B694b44:{NFSU2_TR(0x694b44);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B694b48:{NFSU2_TR(0x694b48);
__builtin_memmove((R+4416),(R+4400),8);
}
B694b4b:{NFSU2_TR(0x694b4b);
__builtin_memmove((R+4448),(R+4384),8);
}
B694b4e:{NFSU2_TR(0x694b4e);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4420),4);
}
B694b51:{NFSU2_TR(0x694b51);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4452),4);
}
B694b54:{NFSU2_TR(0x694b54);
__builtin_memmove((R+4432),(R+4384),8);
}
B694b57:{NFSU2_TR(0x694b57);
__builtin_memmove((R+4464),(R+4400),8);
}
B694b5a:{NFSU2_TR(0x694b5a);
__builtin_memmove((R+4436),(R+4432),4);
}
B694b5d:{NFSU2_TR(0x694b5d);
__builtin_memmove((R+4468),(R+4464),4);
}
B694b60:{NFSU2_TR(0x694b60);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4356),4);
}
B694b63:{NFSU2_TR(0x694b63);
__builtin_memmove((R+4464),(R+4468),4);
__builtin_memmove((R+4468),(R+4372),4);
}
B694b66:{NFSU2_TR(0x694b66);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B694b6a:{NFSU2_TR(0x694b6a);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4464))));}
}
B694b6e:{NFSU2_TR(0x694b6e);
{wv<8>((R+4416),uo::pfsub<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B694b72:{NFSU2_TR(0x694b72);
__builtin_memmove((R+4432),(R+4352),8);
}
B694b75:{NFSU2_TR(0x694b75);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4388),4);
}
B694b78:{NFSU2_TR(0x694b78);
__builtin_memmove((R+4448),(R+4400),8);
}
B694b7b:{NFSU2_TR(0x694b7b);
__builtin_memmove((R+4452),(R+4368),4);
}
B694b7e:{NFSU2_TR(0x694b7e);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4448))));}
}
B694b82:{NFSU2_TR(0x694b82);
__builtin_memmove((R+4448),(R+4368),8);
}
B694b85:{NFSU2_TR(0x694b85);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4404),4);
}
B694b88:{NFSU2_TR(0x694b88);
__builtin_memmove((R+4464),(R+4384),8);
}
B694b8b:{NFSU2_TR(0x694b8b);
__builtin_memmove((R+4468),(R+4352),4);
}
B694b8e:{NFSU2_TR(0x694b8e);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4464))));}
}
B694b92:{NFSU2_TR(0x694b92);
{wv<8>((R+4432),uo::pfsub<8>(rv<8>((R+4432)),rv<8>((R+4448))));}
}
B694b96:{NFSU2_TR(0x694b96);
__builtin_memmove((R+4448),(R+4368),8);
}
B694b99:{NFSU2_TR(0x694b99);
__builtin_memmove((R+4452),(R+4448),4);
}
B694b9c:{NFSU2_TR(0x694b9c);
__builtin_memmove((R+4388),(R+4384),4);
}
B694b9f:{NFSU2_TR(0x694b9f);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B694ba2:{NFSU2_TR(0x694ba2);
__builtin_memmove((R+4404),(R+4400),4);
}
B694ba5:{NFSU2_TR(0x694ba5);
__builtin_memmove((R+4356),(R+4352),4);
}
B694ba8:{NFSU2_TR(0x694ba8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4384))));}
}
B694bac:{NFSU2_TR(0x694bac);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B694baf:{NFSU2_TR(0x694baf);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B694bb3:{NFSU2_TR(0x694bb3);
{wv<8>((R+4448),uo::pfsub<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B694bb7:{NFSU2_TR(0x694bb7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B694bba:{NFSU2_TR(0x694bba);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B694bbe:{NFSU2_TR(0x694bbe);
__builtin_memmove((R+4464),gp(0x7b71d8),8);
}
B694bc5:{NFSU2_TR(0x694bc5);
__builtin_memmove((R+4384),(R+4416),8);
}
B694bc8:{NFSU2_TR(0x694bc8);
__builtin_memmove((R+4400),(R+4352),8);
}
B694bcb:{NFSU2_TR(0x694bcb);
__builtin_memmove((R+4388),(R+4384),4);
}
B694bce:{NFSU2_TR(0x694bce);
__builtin_memmove((R+4404),(R+4400),4);
}
B694bd1:{NFSU2_TR(0x694bd1);
w8(R+4384,u64(u64(r8(R+4384))^u64(r8(R+4464))));
}
B694bd4:{NFSU2_TR(0x694bd4);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4404),4);
}
B694bd7:{NFSU2_TR(0x694bd7);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B694bdb:{NFSU2_TR(0x694bdb);
__builtin_memmove((R+4352),(R+4464),8);
}
B694bde:{NFSU2_TR(0x694bde);
__builtin_memmove((R+4400),(R+4416),8);
}
B694be1:{NFSU2_TR(0x694be1);
__builtin_memmove((R+4464),(R+4432),8);
}
B694be4:{NFSU2_TR(0x694be4);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B694be7:{NFSU2_TR(0x694be7);
__builtin_memmove((R+4464),(R+4468),4);
__builtin_memmove((R+4468),(R+4468),4);
}
B694bea:{NFSU2_TR(0x694bea);
__builtin_memmove((R+4404),(R+4432),4);
}
B694bed:{NFSU2_TR(0x694bed);
__builtin_memmove((R+4468),(R+4448),4);
}
B694bf0:{NFSU2_TR(0x694bf0);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4368))));}
}
B694bf4:{NFSU2_TR(0x694bf4);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B694bf8:{NFSU2_TR(0x694bf8);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4352))));
}
B694bfb:{NFSU2_TR(0x694bfb);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4352))));
}
B694bfe:{NFSU2_TR(0x694bfe);
{wv<8>((R+4400),uo::pfacc<8>(rv<8>((R+4400)),rv<8>((R+4464))));}
}
B694c02:{NFSU2_TR(0x694c02);
__builtin_memmove((R+4464),(R+4352),8);
}
B694c05:{NFSU2_TR(0x694c05);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B694c08:{NFSU2_TR(0x694c08);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B694c0c:{NFSU2_TR(0x694c0c);
u8 U[8];
__builtin_memmove((U+0),(R+4384),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B694c0f:{NFSU2_TR(0x694c0f);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4436),4);
}
B694c12:{NFSU2_TR(0x694c12);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4464))));
}
B694c15:{NFSU2_TR(0x694c15);
__builtin_memmove((R+4384),(R+4432),8);
}
B694c18:{NFSU2_TR(0x694c18);
w8(R+4464,shr<u64>(r8(R+4464),u64(u32(0x20ull))));
}
B694c1c:{NFSU2_TR(0x694c1c);
__builtin_memmove((R+4388),(R+4448),4);
}
B694c1f:{NFSU2_TR(0x694c1f);
w8(R+4384,u64(u64(r8(R+4384))^u64(r8(R+4464))));
}
B694c22:{NFSU2_TR(0x694c22);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4452),4);
}
B694c25:{NFSU2_TR(0x694c25);
__builtin_memmove((R+4400),(R+4368),8);
}
B694c28:{NFSU2_TR(0x694c28);
__builtin_memmove((R+4404),(R+4400),4);
}
B694c2b:{NFSU2_TR(0x694c2b);
w8(R+4448,u64(u64(r8(R+4448))^u64(r8(R+4464))));
}
B694c2e:{NFSU2_TR(0x694c2e);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4404),4);
}
B694c31:{NFSU2_TR(0x694c31);
w8(R+4464,shl<u64>(r8(R+4464),u64(u64(0x20ull))));
}
B694c35:{NFSU2_TR(0x694c35);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B694c39:{NFSU2_TR(0x694c39);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B694c3d:{NFSU2_TR(0x694c3d);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4448))));}
}
B694c41:{NFSU2_TR(0x694c41);
w8(R+4416,u64(u64(r8(R+4416))^u64(r8(R+4464))));
}
B694c44:{NFSU2_TR(0x694c44);
w8(R+4384,u64(u64(r8(R+4384))^u64(r8(R+4464))));
}
B694c47:{NFSU2_TR(0x694c47);
{wv<8>((R+4416),uo::pfacc<8>(rv<8>((R+4416)),rv<8>((R+4384))));}
}
B694c4b:{NFSU2_TR(0x694c4b);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4416))));}
}
B694c4f:{NFSU2_TR(0x694c4f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B694c53:{NFSU2_TR(0x694c53);
w2(R+4260,0xffffu);
}
B694c55:{NFSU2_TR(0x694c55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B694c56:{NFSU2_TR(0x694c56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B694c59:L694c59:{c.instructions+=30;NFSU2_TR(0x694c59);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B694c5d:{NFSU2_TR(0x694c5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B694c61:{NFSU2_TR(0x694c61);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B694c65:{NFSU2_TR(0x694c65);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B694c68:{NFSU2_TR(0x694c68);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B694c6c:{NFSU2_TR(0x694c6c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B694c6f:{NFSU2_TR(0x694c6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B694c73:{NFSU2_TR(0x694c73);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B694c76:{NFSU2_TR(0x694c76);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B694c7a:{NFSU2_TR(0x694c7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4448,u64(r4(U+4)));
}
B694c7f:{NFSU2_TR(0x694c7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4464,u64(r4(U+4)));
}
B694c84:{NFSU2_TR(0x694c84);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B694c88:{NFSU2_TR(0x694c88);
{wv<8>((R+4368),uo::pfsub<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B694c8c:{NFSU2_TR(0x694c8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B694c90:{NFSU2_TR(0x694c90);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B694c94:{NFSU2_TR(0x694c94);
{wv<8>((R+4400),uo::pfsub<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B694c98:{NFSU2_TR(0x694c98);
__builtin_memmove((R+4452),(R+4448),4);
}
B694c9b:{NFSU2_TR(0x694c9b);
__builtin_memmove((R+4468),(R+4464),4);
}
B694c9e:{NFSU2_TR(0x694c9e);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4448))));}
}
B694ca2:{NFSU2_TR(0x694ca2);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4448))));}
}
B694ca6:{NFSU2_TR(0x694ca6);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4464))));}
}
B694caa:{NFSU2_TR(0x694caa);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B694cae:{NFSU2_TR(0x694cae);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4464))));}
}
B694cb2:{NFSU2_TR(0x694cb2);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B694cb6:{NFSU2_TR(0x694cb6);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B694cba:{NFSU2_TR(0x694cba);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B694cbe:{NFSU2_TR(0x694cbe);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B694cc1:{NFSU2_TR(0x694cc1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B694cc5:{NFSU2_TR(0x694cc5);
w2(R+4260,0xffffu);
}
B694cc7:{NFSU2_TR(0x694cc7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B694cca:L694cca:{c.instructions+=51;NFSU2_TR(0x694cca);
w2(R+4260,0xffffu);
}
B694ccc:{NFSU2_TR(0x694ccc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4352,u64(r4(U+4)));
}
B694cd1:{NFSU2_TR(0x694cd1);
__builtin_memmove((R+4368),(R+4352),8);
}
B694cd4:{NFSU2_TR(0x694cd4);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B694cd8:{NFSU2_TR(0x694cd8);
__builtin_memmove((R+4384),(R+4368),8);
}
B694cdb:{NFSU2_TR(0x694cdb);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B694cdf:{NFSU2_TR(0x694cdf);
__builtin_memmove((R+4400),gp(0x7b71f0),8);
}
B694ce6:{NFSU2_TR(0x694ce6);
__builtin_memmove((R+4416),(R+4368),8);
}
B694ce9:{NFSU2_TR(0x694ce9);
__builtin_memmove((R+4464),(R+4384),8);
}
B694cec:{NFSU2_TR(0x694cec);
{wv<8>((R+4464),uo::pfsub<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B694cf0:{NFSU2_TR(0x694cf0);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B694cf4:{NFSU2_TR(0x694cf4);
__builtin_memmove((R+4448),(R+4384),8);
}
B694cf7:{NFSU2_TR(0x694cf7);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>(gp(0x7b71f8))));}
}
B694cff:{NFSU2_TR(0x694cff);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B694d03:{NFSU2_TR(0x694d03);
{wv<8>((R+4448),uo::pfsub<8>(rv<8>((R+4448)),rv<8>((R+4416))));}
}
B694d07:{NFSU2_TR(0x694d07);
__builtin_memmove((R+4432),(R+4368),8);
}
B694d0a:{NFSU2_TR(0x694d0a);
{wv<8>((R+4368),uo::pfsub<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B694d0e:{NFSU2_TR(0x694d0e);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B694d12:{NFSU2_TR(0x694d12);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4432))));}
}
B694d16:{NFSU2_TR(0x694d16);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>(gp(0x7b71e0))));}
}
B694d1e:{NFSU2_TR(0x694d1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B694d22:{NFSU2_TR(0x694d22);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B694d26:{NFSU2_TR(0x694d26);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B694d2a:{NFSU2_TR(0x694d2a);
__builtin_memmove((R+4468),(R+4464),4);
}
B694d2d:{NFSU2_TR(0x694d2d);
__builtin_memmove((R+4372),(R+4368),4);
}
B694d30:{NFSU2_TR(0x694d30);
__builtin_memmove((R+4452),(R+4448),4);
}
B694d33:{NFSU2_TR(0x694d33);
__builtin_memmove((R+4388),(R+4384),4);
}
B694d36:{NFSU2_TR(0x694d36);
__builtin_memmove((R+4432),(R+4464),8);
}
B694d39:{NFSU2_TR(0x694d39);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((U+0))));}
}
B694d3d:{NFSU2_TR(0x694d3d);
__builtin_memmove((R+4352),(R+4368),8);
}
B694d40:{NFSU2_TR(0x694d40);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+0))));}
}
B694d44:{NFSU2_TR(0x694d44);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B694d49:{NFSU2_TR(0x694d49);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B694d4e:{NFSU2_TR(0x694d4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B694d52:{NFSU2_TR(0x694d52);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B694d56:{NFSU2_TR(0x694d56);
__builtin_memmove((R+4416),(R+4448),8);
}
B694d59:{NFSU2_TR(0x694d59);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+0))));}
}
B694d5d:{NFSU2_TR(0x694d5d);
__builtin_memmove((R+4400),(R+4384),8);
}
B694d60:{NFSU2_TR(0x694d60);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+0))));}
}
B694d64:{NFSU2_TR(0x694d64);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B694d69:{NFSU2_TR(0x694d69);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B694d6e:{NFSU2_TR(0x694d6e);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4464))));}
}
B694d72:{NFSU2_TR(0x694d72);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4432))));}
}
B694d76:{NFSU2_TR(0x694d76);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4448))));}
}
B694d7a:{NFSU2_TR(0x694d7a);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B694d7e:{NFSU2_TR(0x694d7e);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B694d82:{NFSU2_TR(0x694d82);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B694d86:{NFSU2_TR(0x694d86);
u8 U[8];
__builtin_memmove((U+0),(R+4368),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B694d89:{NFSU2_TR(0x694d89);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B694d8d:{NFSU2_TR(0x694d8d);
w2(R+4260,0xffffu);
}
B694d8f:{NFSU2_TR(0x694d8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B694d92:L694d92:{c.instructions+=57;NFSU2_TR(0x694d92);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4352,u64(r4(U+4)));
}
B694d97:{NFSU2_TR(0x694d97);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B694d9b:{NFSU2_TR(0x694d9b);
__builtin_memmove((R+4368),(R+4352),8);
}
B694d9e:{NFSU2_TR(0x694d9e);
__builtin_memmove((R+4356),(R+4352),4);
}
B694da1:{NFSU2_TR(0x694da1);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B694da5:{NFSU2_TR(0x694da5);
__builtin_memmove((R+4372),gp(0x7b7158),4);
}
B694dac:{NFSU2_TR(0x694dac);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B694db0:{NFSU2_TR(0x694db0);
__builtin_memmove((R+4400),(R+4368),8);
}
B694db3:{NFSU2_TR(0x694db3);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B694db7:{NFSU2_TR(0x694db7);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B694dba:{NFSU2_TR(0x694dba);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B694dbe:{NFSU2_TR(0x694dbe);
__builtin_memmove((R+4372),(R+4368),4);
}
B694dc1:{NFSU2_TR(0x694dc1);
__builtin_memmove((R+4416),(R+4352),8);
}
B694dc4:{NFSU2_TR(0x694dc4);
__builtin_memmove((R+4404),(R+4400),4);
}
B694dc7:{NFSU2_TR(0x694dc7);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>(gp(0x7b7168))));}
}
B694dcf:{NFSU2_TR(0x694dcf);
__builtin_memmove((R+4432),(R+4352),8);
}
B694dd2:{NFSU2_TR(0x694dd2);
__builtin_memmove((R+4356),(R+4416),4);
}
B694dd5:{NFSU2_TR(0x694dd5);
w8(R+4400,u64(u64(r8(R+4400))^u64(m8(0x7b7178))));
}
B694ddc:{NFSU2_TR(0x694ddc);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4468),4);
}
B694ddf:{NFSU2_TR(0x694ddf);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B694de3:{NFSU2_TR(0x694de3);
{wv<8>((R+4368),uo::pfsub<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B694de7:{NFSU2_TR(0x694de7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B694deb:{NFSU2_TR(0x694deb);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4432))));}
}
B694def:{NFSU2_TR(0x694def);
__builtin_memmove((R+4384),(R+4368),8);
}
B694df2:{NFSU2_TR(0x694df2);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4372),4);
}
B694df5:{NFSU2_TR(0x694df5);
__builtin_memmove((R+4400),(R+4352),8);
}
B694df8:{NFSU2_TR(0x694df8);
__builtin_memmove((R+4356),(R+4352),4);
}
B694dfb:{NFSU2_TR(0x694dfb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B694dff:{NFSU2_TR(0x694dff);
__builtin_memmove((R+4388),(R+4384),4);
}
B694e02:{NFSU2_TR(0x694e02);
__builtin_memmove((R+4416),(R+4368),8);
}
B694e05:{NFSU2_TR(0x694e05);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+0))));}
}
B694e09:{NFSU2_TR(0x694e09);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B694e0c:{NFSU2_TR(0x694e0c);
__builtin_memmove((R+4432),(R+4352),8);
}
B694e0f:{NFSU2_TR(0x694e0f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B694e13:{NFSU2_TR(0x694e13);
__builtin_memmove((R+4448),(R+4384),8);
}
B694e16:{NFSU2_TR(0x694e16);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+0))));}
}
B694e1a:{NFSU2_TR(0x694e1a);
__builtin_memmove((R+4464),(R+4400),8);
}
B694e1d:{NFSU2_TR(0x694e1d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B694e22:{NFSU2_TR(0x694e22);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B694e26:{NFSU2_TR(0x694e26);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B694e2b:{NFSU2_TR(0x694e2b);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B694e2f:{NFSU2_TR(0x694e2f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B694e34:{NFSU2_TR(0x694e34);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B694e38:{NFSU2_TR(0x694e38);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B694e3c:{NFSU2_TR(0x694e3c);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B694e40:{NFSU2_TR(0x694e40);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+0))));}
}
B694e44:{NFSU2_TR(0x694e44);
__builtin_memmove((R+4368),gp(0x7b71c0),8);
}
B694e4b:{NFSU2_TR(0x694e4b);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B694e4f:{NFSU2_TR(0x694e4f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B694e54:{NFSU2_TR(0x694e54);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B694e58:{NFSU2_TR(0x694e58);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B694e5c:{NFSU2_TR(0x694e5c);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B694e60:{NFSU2_TR(0x694e60);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B694e63:{NFSU2_TR(0x694e63);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4368))));}
}
B694e67:{NFSU2_TR(0x694e67);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B694e6b:{NFSU2_TR(0x694e6b);
w2(R+4260,0xffffu);
}
B694e6d:{NFSU2_TR(0x694e6d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B694e70:L694e70:{c.instructions+=18;NFSU2_TR(0x694e70);
w2(R+4260,0xffffu);
}
B694e72:{NFSU2_TR(0x694e72);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B694e76:{NFSU2_TR(0x694e76);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B694e7a:{NFSU2_TR(0x694e7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B694e7e:{NFSU2_TR(0x694e7e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B694e81:{NFSU2_TR(0x694e81);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B694e85:{NFSU2_TR(0x694e85);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B694e88:{NFSU2_TR(0x694e88);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B694e8c:{NFSU2_TR(0x694e8c);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B694e90:{NFSU2_TR(0x694e90);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4368))));}
}
B694e94:{NFSU2_TR(0x694e94);
{wv<8>((R+4384),uo::pfacc<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B694e98:{NFSU2_TR(0x694e98);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B694e9c:{NFSU2_TR(0x694e9c);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B694e9f:{NFSU2_TR(0x694e9f);
w8(R+4384,u64(u64(r8(R+4384))^u64(m8(0x7b71d0))));
}
B694ea6:{NFSU2_TR(0x694ea6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(r8(R+4368)));
s4(u32(r4(U+0)),r4(U+4));
}
B694eaa:{NFSU2_TR(0x694eaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(r8(R+4384)));
s4(u32(r4(U+0)),r4(U+4));
}
B694eae:{NFSU2_TR(0x694eae);
w2(R+4260,0xffffu);
}
B694eb0:{NFSU2_TR(0x694eb0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B694eb3:L694eb3:{c.instructions+=63;NFSU2_TR(0x694eb3);
w2(R+4260,0xffffu);
}
B694eb5:{NFSU2_TR(0x694eb5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B694eb9:{NFSU2_TR(0x694eb9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B694ebd:{NFSU2_TR(0x694ebd);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B694ec1:{NFSU2_TR(0x694ec1);
__builtin_memmove((R+4400),gp(0x7b71d8),8);
}
B694ec8:{NFSU2_TR(0x694ec8);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B694ecb:{NFSU2_TR(0x694ecb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B694ecf:{NFSU2_TR(0x694ecf);
__builtin_memmove((R+4384),(R+4368),8);
}
B694ed2:{NFSU2_TR(0x694ed2);
__builtin_memmove((R+4416),(R+4352),8);
}
B694ed5:{NFSU2_TR(0x694ed5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4448,u64(r4(U+4)));
}
B694ed9:{NFSU2_TR(0x694ed9);
__builtin_memmove((R+4372),(R+4368),4);
}
B694edc:{NFSU2_TR(0x694edc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4452),(U+4),4);
}
B694ee0:{NFSU2_TR(0x694ee0);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B694ee4:{NFSU2_TR(0x694ee4);
{wv<8>((R+4368),uo::pfsub<8>(rv<8>((R+4368)),rv<8>((R+4448))));}
}
B694ee8:{NFSU2_TR(0x694ee8);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
{wv<8>((R+4416),uo::pfsub<8>(rv<8>((R+4416)),rv<8>((U+0))));}
}
B694eec:{NFSU2_TR(0x694eec);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B694eef:{NFSU2_TR(0x694eef);
{wv<8>((R+4464),uo::pfsub<8>(rv<8>((R+4464)),rv<8>((R+4416))));}
}
B694ef3:{NFSU2_TR(0x694ef3);
__builtin_memmove((R+4432),(R+4352),8);
}
B694ef6:{NFSU2_TR(0x694ef6);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4468),4);
}
B694ef9:{NFSU2_TR(0x694ef9);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B694efd:{NFSU2_TR(0x694efd);
__builtin_memmove((R+4448),(R+4464),8);
}
B694f00:{NFSU2_TR(0x694f00);
__builtin_memmove((R+4452),(R+4368),4);
}
B694f03:{NFSU2_TR(0x694f03);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4404),4);
}
B694f06:{NFSU2_TR(0x694f06);
__builtin_memmove((R+4372),(R+4432),4);
}
B694f09:{NFSU2_TR(0x694f09);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4448))));}
}
B694f0d:{NFSU2_TR(0x694f0d);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B694f11:{NFSU2_TR(0x694f11);
w8(R+4352,u64(u64(r8(R+4352))^u64(r8(R+4400))));
}
B694f14:{NFSU2_TR(0x694f14);
__builtin_memmove((R+4368),(R+4416),8);
}
B694f17:{NFSU2_TR(0x694f17);
__builtin_memmove((R+4420),(R+4464),4);
}
B694f1a:{NFSU2_TR(0x694f1a);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4420),4);
}
B694f1d:{NFSU2_TR(0x694f1d);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B694f21:{NFSU2_TR(0x694f21);
{wv<8>((R+4368),uo::pfacc<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B694f25:{NFSU2_TR(0x694f25);
__builtin_memmove((R+4448),(R+4352),8);
}
B694f28:{NFSU2_TR(0x694f28);
__builtin_memmove((R+4464),(R+4368),8);
}
B694f2b:{NFSU2_TR(0x694f2b);
w8(R+4464,shl<u64>(r8(R+4464),u64(u64(0x20ull))));
}
B694f2f:{NFSU2_TR(0x694f2f);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4448))));}
}
B694f33:{NFSU2_TR(0x694f33);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4464))));}
}
B694f37:{NFSU2_TR(0x694f37);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4464))));}
}
B694f3b:{NFSU2_TR(0x694f3b);
{wv<8>((R+4448),uo::pfacc<8>(rv<8>((R+4448)),rv<8>((R+4448))));}
}
B694f3f:{NFSU2_TR(0x694f3f);
__builtin_memmove((R+4432),(R+4448),8);
}
B694f42:{NFSU2_TR(0x694f42);
{SPILL();c.pc=0x694f42u;V r_=user_op(c,524533,{rv<8>((R+4416)),rv<8>((R+4448))});SPILL();wv<8>((R+4416),r_);}
}
B694f46:{NFSU2_TR(0x694f46);
{wv<8>((R+4432),uo::pfcmpgt<8>(rv<8>((R+4432)),rv<8>(gp(0x7b71c8))));}
}
B694f4e:{NFSU2_TR(0x694f4e);
__builtin_memmove((R+4464),(R+4416),8);
}
B694f51:{NFSU2_TR(0x694f51);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4416))));}
}
B694f55:{NFSU2_TR(0x694f55);
{SPILL();c.pc=0x694f55u;V r_=user_op(c,524535,{rv<8>((R+4448)),rv<8>((R+4464))});SPILL();wv<8>((R+4448),r_);}
}
B694f59:{NFSU2_TR(0x694f59);
w8(R+4352,u64(u64(r8(R+4352))&u64(r8(R+4432))));
}
B694f5c:{NFSU2_TR(0x694f5c);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(R+4432))));
}
B694f5f:{NFSU2_TR(0x694f5f);
{SPILL();c.pc=0x694f5fu;V r_=user_op(c,524536,{rv<8>((R+4448)),rv<8>((R+4416))});SPILL();wv<8>((R+4448),r_);}
}
B694f63:{NFSU2_TR(0x694f63);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4448))));}
}
B694f67:{NFSU2_TR(0x694f67);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4448))));}
}
B694f6b:{NFSU2_TR(0x694f6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B694f6f:{NFSU2_TR(0x694f6f);
__builtin_memmove((R+4416),(R+4352),8);
}
B694f72:{NFSU2_TR(0x694f72);
__builtin_memmove((R+4432),(R+4368),8);
}
B694f75:{NFSU2_TR(0x694f75);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B694f79:{NFSU2_TR(0x694f79);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B694f7d:{NFSU2_TR(0x694f7d);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B694f81:{NFSU2_TR(0x694f81);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B694f85:{NFSU2_TR(0x694f85);
__builtin_memmove((R+4436),(R+4352),4);
}
B694f88:{NFSU2_TR(0x694f88);
w8(R+4432,u64(u64(r8(R+4432))^u64(r8(R+4400))));
}
B694f8b:{NFSU2_TR(0x694f8b);
u8 U[8];
__builtin_memmove((U+0),(R+4416),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B694f8e:{NFSU2_TR(0x694f8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B694f92:{NFSU2_TR(0x694f92);
w2(R+4260,0xffffu);
}
B694f94:{NFSU2_TR(0x694f94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B694f97:L694f97:{c.instructions+=29;NFSU2_TR(0x694f97);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B694f9b:{NFSU2_TR(0x694f9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B694f9f:{NFSU2_TR(0x694f9f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B694fa2:{NFSU2_TR(0x694fa2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B694fa6:{NFSU2_TR(0x694fa6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B694faa:{NFSU2_TR(0x694faa);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B694fad:{NFSU2_TR(0x694fad);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4432,u64(r4(U+4)));
}
B694fb1:{NFSU2_TR(0x694fb1);
__builtin_memmove((R+4400),(R+4368),8);
}
B694fb4:{NFSU2_TR(0x694fb4);
__builtin_memmove((R+4384),(R+4352),8);
}
B694fb7:{NFSU2_TR(0x694fb7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4448),(U+0),8);
}
B694fba:{NFSU2_TR(0x694fba);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B694fbe:{NFSU2_TR(0x694fbe);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B694fc2:{NFSU2_TR(0x694fc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4464,u64(r4(U+4)));
}
B694fc6:{NFSU2_TR(0x694fc6);
__builtin_memmove((R+4416),(R+4352),8);
}
B694fc9:{NFSU2_TR(0x694fc9);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B694fcd:{NFSU2_TR(0x694fcd);
__builtin_memmove((R+4432),(R+4368),8);
}
B694fd0:{NFSU2_TR(0x694fd0);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B694fd4:{NFSU2_TR(0x694fd4);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B694fd8:{NFSU2_TR(0x694fd8);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B694fdc:{NFSU2_TR(0x694fdc);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4400))));
}
B694fdf:{NFSU2_TR(0x694fdf);
{wv<8>((R+4416),uo::pfsub<8>(rv<8>((R+4416)),rv<8>((R+4384))));}
}
B694fe3:{NFSU2_TR(0x694fe3);
__builtin_memmove((R+4468),gp(0x7b7148),4);
}
B694fea:{NFSU2_TR(0x694fea);
__builtin_memmove((R+4384),(R+4352),8);
}
B694fed:{NFSU2_TR(0x694fed);
{wv<8>((R+4416),uo::pfacc<8>(rv<8>((R+4416)),rv<8>((R+4416))));}
}
B694ff1:{NFSU2_TR(0x694ff1);
{wv<8>((R+4400),uo::pfcmpeq<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B694ff5:{NFSU2_TR(0x694ff5);
w4(R+0,u32(r8(R+4400)));
}
B694ff8:{NFSU2_TR(0x694ff8);
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
B694ffa:{NFSU2_TR(0x694ffa);
{SPILL();c.pc=0x694ffau;V r_=user_op(c,524532,{rv<8>((R+4432)),rv<8>((R+4416))});SPILL();wv<8>((R+4432),r_);}
}
B694ffe:{NFSU2_TR(0x694ffe);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
TAIL_STATIC(0x695002u,695);
}
XIT:NFSU2_TR_EXIT(0x694,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
