#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_42f(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_442(u8* __restrict R,Cpu& c);
u32 body_443(u8* __restrict R,Cpu& c);
u32 body_447(u8* __restrict R,Cpu& c);
u32 body_449(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5f1(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x448,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x448,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_448(u8* __restrict R,Cpu& c);
u32 page_448(Cpu& c){return body_448(c.regs.data(),c);}
__attribute__((noinline)) u32 body_448(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x448002:goto L448002;
case 0x448003:c.instructions+=2;goto B448003;
case 0x448009:c.instructions+=1;goto B448009;
case 0x44800e:goto L44800e;
case 0x448014:c.instructions+=10;goto B448014;
case 0x448018:c.instructions+=9;goto B448018;
case 0x44801c:c.instructions+=8;goto B44801c;
case 0x44801d:c.instructions+=7;goto B44801d;
case 0x44801e:c.instructions+=6;goto B44801e;
case 0x448021:c.instructions+=5;goto B448021;
case 0x448028:c.instructions+=4;goto B448028;
case 0x448029:c.instructions+=3;goto B448029;
case 0x44802b:c.instructions+=2;goto B44802b;
case 0x44802c:c.instructions+=1;goto B44802c;
case 0x448030:goto L448030;
case 0x448031:c.instructions+=2;goto B448031;
case 0x448033:c.instructions+=1;goto B448033;
case 0x448038:goto L448038;
case 0x44803a:c.instructions+=1;goto B44803a;
case 0x44803c:goto L44803c;
case 0x448042:c.instructions+=4;goto B448042;
case 0x448045:c.instructions+=3;goto B448045;
case 0x448046:c.instructions+=2;goto B448046;
case 0x448048:c.instructions+=1;goto B448048;
case 0x44804d:goto L44804d;
case 0x44804f:c.instructions+=1;goto B44804f;
case 0x448051:goto L448051;
case 0x448053:goto L448053;
case 0x448054:c.instructions+=1;goto B448054;
case 0x448060:goto L448060;
case 0x448063:c.instructions+=8;goto B448063;
case 0x448064:c.instructions+=7;goto B448064;
case 0x448065:c.instructions+=6;goto B448065;
case 0x448067:c.instructions+=5;goto B448067;
case 0x44806d:c.instructions+=4;goto B44806d;
case 0x44806f:c.instructions+=3;goto B44806f;
case 0x448070:c.instructions+=2;goto B448070;
case 0x448071:c.instructions+=1;goto B448071;
case 0x448073:goto L448073;
case 0x44807d:c.instructions+=3;goto B44807d;
case 0x448083:c.instructions+=2;goto B448083;
case 0x448088:c.instructions+=1;goto B448088;
case 0x44808d:goto L44808d;
case 0x44808f:goto L44808f;
case 0x448096:goto L448096;
case 0x44809c:c.instructions+=2;goto B44809c;
case 0x44809e:c.instructions+=1;goto B44809e;
case 0x4480a4:goto L4480a4;
case 0x4480a6:c.instructions+=4;goto B4480a6;
case 0x4480a8:c.instructions+=3;goto B4480a8;
case 0x4480aa:c.instructions+=2;goto B4480aa;
case 0x4480ae:c.instructions+=1;goto B4480ae;
case 0x4480b4:goto L4480b4;
case 0x4480b6:goto L4480b6;
case 0x4480bc:c.instructions+=1;goto B4480bc;
case 0x4480c0:goto L4480c0;
case 0x4480c4:c.instructions+=6;goto B4480c4;
case 0x4480c8:c.instructions+=5;goto B4480c8;
case 0x4480cc:c.instructions+=4;goto B4480cc;
case 0x4480cd:c.instructions+=3;goto B4480cd;
case 0x4480ce:c.instructions+=2;goto B4480ce;
case 0x4480d2:c.instructions+=1;goto B4480d2;
case 0x4480d7:goto L4480d7;
case 0x4480d9:c.instructions+=4;goto B4480d9;
case 0x4480dd:c.instructions+=3;goto B4480dd;
case 0x4480e2:c.instructions+=2;goto B4480e2;
case 0x4480e3:c.instructions+=1;goto B4480e3;
case 0x4480e8:goto L4480e8;
case 0x4480eb:c.instructions+=2;goto B4480eb;
case 0x4480ed:c.instructions+=1;goto B4480ed;
case 0x4480ef:goto L4480ef;
case 0x4480f2:c.instructions+=3;goto B4480f2;
case 0x4480f4:c.instructions+=2;goto B4480f4;
case 0x4480f6:c.instructions+=1;goto B4480f6;
case 0x4480f8:goto L4480f8;
case 0x4480fb:c.instructions+=2;goto B4480fb;
case 0x4480fd:c.instructions+=1;goto B4480fd;
case 0x448100:goto L448100;
case 0x448102:c.instructions+=1;goto B448102;
case 0x448104:goto L448104;
case 0x448105:c.instructions+=3;goto B448105;
case 0x448108:c.instructions+=2;goto B448108;
case 0x44810b:c.instructions+=1;goto B44810b;
case 0x44810d:goto L44810d;
case 0x44810f:goto L44810f;
case 0x448112:c.instructions+=3;goto B448112;
case 0x448115:c.instructions+=2;goto B448115;
case 0x448117:c.instructions+=1;goto B448117;
case 0x448119:goto L448119;
case 0x44811c:c.instructions+=7;goto B44811c;
case 0x44811f:c.instructions+=6;goto B44811f;
case 0x448127:c.instructions+=5;goto B448127;
case 0x44812a:c.instructions+=4;goto B44812a;
case 0x44812d:c.instructions+=3;goto B44812d;
case 0x448130:c.instructions+=2;goto B448130;
case 0x448133:c.instructions+=1;goto B448133;
case 0x448136:goto L448136;
case 0x44813a:c.instructions+=3;goto B44813a;
case 0x44813b:c.instructions+=2;goto B44813b;
case 0x44813d:c.instructions+=1;goto B44813d;
case 0x448143:goto L448143;
case 0x448149:c.instructions+=5;goto B448149;
case 0x44814b:c.instructions+=4;goto B44814b;
case 0x44814d:c.instructions+=3;goto B44814d;
case 0x448151:c.instructions+=2;goto B448151;
case 0x448155:c.instructions+=1;goto B448155;
case 0x44815b:goto L44815b;
case 0x448160:goto L448160;
case 0x448167:c.instructions+=9;goto B448167;
case 0x44816b:c.instructions+=8;goto B44816b;
case 0x44816e:c.instructions+=7;goto B44816e;
case 0x448171:c.instructions+=6;goto B448171;
case 0x448173:c.instructions+=5;goto B448173;
case 0x448175:c.instructions+=4;goto B448175;
case 0x448179:c.instructions+=3;goto B448179;
case 0x44817b:c.instructions+=2;goto B44817b;
case 0x44817d:c.instructions+=1;goto B44817d;
case 0x44817f:goto L44817f;
case 0x448182:c.instructions+=1;goto B448182;
case 0x448184:goto L448184;
case 0x448187:c.instructions+=1;goto B448187;
case 0x448189:goto L448189;
case 0x44818d:c.instructions+=1;goto B44818d;
case 0x44818f:goto L44818f;
case 0x448190:c.instructions+=3;goto B448190;
case 0x448193:c.instructions+=2;goto B448193;
case 0x448196:c.instructions+=1;goto B448196;
case 0x448198:goto L448198;
case 0x44819a:goto L44819a;
case 0x44819d:c.instructions+=3;goto B44819d;
case 0x4481a0:c.instructions+=2;goto B4481a0;
case 0x4481a2:c.instructions+=1;goto B4481a2;
case 0x4481a4:goto L4481a4;
case 0x4481a7:c.instructions+=12;goto B4481a7;
case 0x4481aa:c.instructions+=11;goto B4481aa;
case 0x4481b2:c.instructions+=10;goto B4481b2;
case 0x4481b5:c.instructions+=9;goto B4481b5;
case 0x4481b8:c.instructions+=8;goto B4481b8;
case 0x4481bb:c.instructions+=7;goto B4481bb;
case 0x4481be:c.instructions+=6;goto B4481be;
case 0x4481c1:c.instructions+=5;goto B4481c1;
case 0x4481c4:c.instructions+=4;goto B4481c4;
case 0x4481c7:c.instructions+=3;goto B4481c7;
case 0x4481c9:c.instructions+=2;goto B4481c9;
case 0x4481cb:c.instructions+=1;goto B4481cb;
case 0x4481ce:goto L4481ce;
case 0x4481d2:c.instructions+=5;goto B4481d2;
case 0x4481d6:c.instructions+=4;goto B4481d6;
case 0x4481d7:c.instructions+=3;goto B4481d7;
case 0x4481d9:c.instructions+=2;goto B4481d9;
case 0x4481dd:c.instructions+=1;goto B4481dd;
case 0x4481df:goto L4481df;
case 0x4481e4:goto L4481e4;
case 0x4481e7:c.instructions+=4;goto B4481e7;
case 0x4481e9:c.instructions+=3;goto B4481e9;
case 0x4481eb:c.instructions+=2;goto B4481eb;
case 0x4481ed:c.instructions+=1;goto B4481ed;
case 0x4481ef:goto L4481ef;
case 0x4481f2:c.instructions+=1;goto B4481f2;
case 0x4481f4:goto L4481f4;
case 0x4481f6:c.instructions+=1;goto B4481f6;
case 0x4481f8:goto L4481f8;
case 0x4481f9:c.instructions+=3;goto B4481f9;
case 0x4481fc:c.instructions+=2;goto B4481fc;
case 0x4481ff:c.instructions+=1;goto B4481ff;
case 0x448201:goto L448201;
case 0x448203:goto L448203;
case 0x448206:c.instructions+=3;goto B448206;
case 0x448209:c.instructions+=2;goto B448209;
case 0x44820b:c.instructions+=1;goto B44820b;
case 0x44820d:goto L44820d;
case 0x448210:c.instructions+=7;goto B448210;
case 0x448213:c.instructions+=6;goto B448213;
case 0x44821b:c.instructions+=5;goto B44821b;
case 0x44821e:c.instructions+=4;goto B44821e;
case 0x448221:c.instructions+=3;goto B448221;
case 0x448224:c.instructions+=2;goto B448224;
case 0x448227:c.instructions+=1;goto B448227;
case 0x44822a:goto L44822a;
case 0x44822d:c.instructions+=2;goto B44822d;
case 0x448233:c.instructions+=1;goto B448233;
case 0x448235:goto L448235;
case 0x448237:c.instructions+=3;goto B448237;
case 0x448239:c.instructions+=2;goto B448239;
case 0x44823e:c.instructions+=1;goto B44823e;
case 0x448243:goto L448243;
case 0x448245:c.instructions+=4;goto B448245;
case 0x448247:c.instructions+=3;goto B448247;
case 0x44824c:c.instructions+=2;goto B44824c;
case 0x448252:c.instructions+=1;goto B448252;
case 0x448257:goto L448257;
case 0x448259:c.instructions+=4;goto B448259;
case 0x44825b:c.instructions+=3;goto B44825b;
case 0x448260:c.instructions+=2;goto B448260;
case 0x448266:c.instructions+=1;goto B448266;
case 0x44826b:goto L44826b;
case 0x44826e:c.instructions+=7;goto B44826e;
case 0x44826f:c.instructions+=6;goto B44826f;
case 0x448270:c.instructions+=5;goto B448270;
case 0x448276:c.instructions+=4;goto B448276;
case 0x448277:c.instructions+=3;goto B448277;
case 0x448278:c.instructions+=2;goto B448278;
case 0x44827b:c.instructions+=1;goto B44827b;
case 0x448280:goto L448280;
case 0x448281:c.instructions+=9;goto B448281;
case 0x448283:c.instructions+=8;goto B448283;
case 0x448286:c.instructions+=7;goto B448286;
case 0x44828c:c.instructions+=6;goto B44828c;
case 0x44828d:c.instructions+=5;goto B44828d;
case 0x448290:c.instructions+=4;goto B448290;
case 0x448292:c.instructions+=3;goto B448292;
case 0x448293:c.instructions+=2;goto B448293;
case 0x448294:c.instructions+=1;goto B448294;
case 0x44829a:goto L44829a;
case 0x44829d:c.instructions+=2;goto B44829d;
case 0x44829f:c.instructions+=1;goto B44829f;
case 0x4482a5:goto L4482a5;
case 0x4482a8:c.instructions+=2;goto B4482a8;
case 0x4482aa:c.instructions+=1;goto B4482aa;
case 0x4482ac:goto L4482ac;
case 0x4482b1:c.instructions+=2;goto B4482b1;
case 0x4482b3:c.instructions+=1;goto B4482b3;
case 0x4482b9:goto L4482b9;
case 0x4482bc:c.instructions+=2;goto B4482bc;
case 0x4482bd:c.instructions+=1;goto B4482bd;
case 0x4482c2:goto L4482c2;
case 0x4482c5:c.instructions+=2;goto B4482c5;
case 0x4482c7:c.instructions+=1;goto B4482c7;
case 0x4482cd:goto L4482cd;
case 0x4482d0:c.instructions+=2;goto B4482d0;
case 0x4482d2:c.instructions+=1;goto B4482d2;
case 0x4482d8:goto L4482d8;
case 0x4482db:c.instructions+=7;goto B4482db;
case 0x4482dc:c.instructions+=6;goto B4482dc;
case 0x4482e2:c.instructions+=5;goto B4482e2;
case 0x4482e3:c.instructions+=4;goto B4482e3;
case 0x4482ea:c.instructions+=3;goto B4482ea;
case 0x4482eb:c.instructions+=2;goto B4482eb;
case 0x4482f0:c.instructions+=1;goto B4482f0;
case 0x4482f5:goto L4482f5;
case 0x4482fc:c.instructions+=4;goto B4482fc;
case 0x4482fd:c.instructions+=3;goto B4482fd;
case 0x448301:c.instructions+=2;goto B448301;
case 0x448302:c.instructions+=1;goto B448302;
case 0x448307:goto L448307;
case 0x44830b:c.instructions+=76;goto B44830b;
case 0x44830e:c.instructions+=75;goto B44830e;
case 0x448312:c.instructions+=74;goto B448312;
case 0x448315:c.instructions+=73;goto B448315;
case 0x448317:c.instructions+=72;goto B448317;
case 0x44831b:c.instructions+=71;goto B44831b;
case 0x44831e:c.instructions+=70;goto B44831e;
case 0x448320:c.instructions+=69;goto B448320;
case 0x448327:c.instructions+=68;goto B448327;
case 0x44832b:c.instructions+=67;goto B44832b;
case 0x44832e:c.instructions+=66;goto B44832e;
case 0x448332:c.instructions+=65;goto B448332;
case 0x448335:c.instructions+=64;goto B448335;
case 0x448337:c.instructions+=63;goto B448337;
case 0x44833b:c.instructions+=62;goto B44833b;
case 0x44833e:c.instructions+=61;goto B44833e;
case 0x448340:c.instructions+=60;goto B448340;
case 0x448347:c.instructions+=59;goto B448347;
case 0x44834b:c.instructions+=58;goto B44834b;
case 0x44834e:c.instructions+=57;goto B44834e;
case 0x448352:c.instructions+=56;goto B448352;
case 0x448355:c.instructions+=55;goto B448355;
case 0x448357:c.instructions+=54;goto B448357;
case 0x44835b:c.instructions+=53;goto B44835b;
case 0x44835e:c.instructions+=52;goto B44835e;
case 0x448360:c.instructions+=51;goto B448360;
case 0x448367:c.instructions+=50;goto B448367;
case 0x44836e:c.instructions+=49;goto B44836e;
case 0x448375:c.instructions+=48;goto B448375;
case 0x448377:c.instructions+=47;goto B448377;
case 0x44837e:c.instructions+=46;goto B44837e;
case 0x448385:c.instructions+=45;goto B448385;
case 0x44838c:c.instructions+=44;goto B44838c;
case 0x448390:c.instructions+=43;goto B448390;
case 0x448393:c.instructions+=42;goto B448393;
case 0x448397:c.instructions+=41;goto B448397;
case 0x44839a:c.instructions+=40;goto B44839a;
case 0x44839c:c.instructions+=39;goto B44839c;
case 0x4483a0:c.instructions+=38;goto B4483a0;
case 0x4483a3:c.instructions+=37;goto B4483a3;
case 0x4483a5:c.instructions+=36;goto B4483a5;
case 0x4483ac:c.instructions+=35;goto B4483ac;
case 0x4483b0:c.instructions+=34;goto B4483b0;
case 0x4483b3:c.instructions+=33;goto B4483b3;
case 0x4483b7:c.instructions+=32;goto B4483b7;
case 0x4483ba:c.instructions+=31;goto B4483ba;
case 0x4483bc:c.instructions+=30;goto B4483bc;
case 0x4483c0:c.instructions+=29;goto B4483c0;
case 0x4483c3:c.instructions+=28;goto B4483c3;
case 0x4483c5:c.instructions+=27;goto B4483c5;
case 0x4483cc:c.instructions+=26;goto B4483cc;
case 0x4483d0:c.instructions+=25;goto B4483d0;
case 0x4483d3:c.instructions+=24;goto B4483d3;
case 0x4483d7:c.instructions+=23;goto B4483d7;
case 0x4483da:c.instructions+=22;goto B4483da;
case 0x4483dc:c.instructions+=21;goto B4483dc;
case 0x4483e0:c.instructions+=20;goto B4483e0;
case 0x4483e3:c.instructions+=19;goto B4483e3;
case 0x4483e5:c.instructions+=18;goto B4483e5;
case 0x4483ec:c.instructions+=17;goto B4483ec;
case 0x4483f3:c.instructions+=16;goto B4483f3;
case 0x4483f5:c.instructions+=15;goto B4483f5;
case 0x4483fc:c.instructions+=14;goto B4483fc;
case 0x448403:c.instructions+=13;goto B448403;
case 0x44840a:c.instructions+=12;goto B44840a;
case 0x448411:c.instructions+=11;goto B448411;
case 0x448418:c.instructions+=10;goto B448418;
case 0x44841a:c.instructions+=9;goto B44841a;
case 0x448421:c.instructions+=8;goto B448421;
case 0x448428:c.instructions+=7;goto B448428;
case 0x448429:c.instructions+=6;goto B448429;
case 0x448430:c.instructions+=5;goto B448430;
case 0x448431:c.instructions+=4;goto B448431;
case 0x448438:c.instructions+=3;goto B448438;
case 0x44843f:c.instructions+=2;goto B44843f;
case 0x448446:c.instructions+=1;goto B448446;
case 0x44844b:goto L44844b;
case 0x44844f:c.instructions+=37;goto B44844f;
case 0x448455:c.instructions+=36;goto B448455;
case 0x44845c:c.instructions+=35;goto B44845c;
case 0x448460:c.instructions+=34;goto B448460;
case 0x448461:c.instructions+=33;goto B448461;
case 0x448467:c.instructions+=32;goto B448467;
case 0x44846e:c.instructions+=31;goto B44846e;
case 0x44846f:c.instructions+=30;goto B44846f;
case 0x448471:c.instructions+=29;goto B448471;
case 0x448475:c.instructions+=28;goto B448475;
case 0x44847b:c.instructions+=27;goto B44847b;
case 0x44847d:c.instructions+=26;goto B44847d;
case 0x448484:c.instructions+=25;goto B448484;
case 0x448488:c.instructions+=24;goto B448488;
case 0x44848e:c.instructions+=23;goto B44848e;
case 0x448495:c.instructions+=22;goto B448495;
case 0x44849b:c.instructions+=21;goto B44849b;
case 0x44849d:c.instructions+=20;goto B44849d;
case 0x4484a1:c.instructions+=19;goto B4484a1;
case 0x4484a7:c.instructions+=18;goto B4484a7;
case 0x4484a9:c.instructions+=17;goto B4484a9;
case 0x4484b0:c.instructions+=16;goto B4484b0;
case 0x4484b4:c.instructions+=15;goto B4484b4;
case 0x4484ba:c.instructions+=14;goto B4484ba;
case 0x4484c1:c.instructions+=13;goto B4484c1;
case 0x4484c7:c.instructions+=12;goto B4484c7;
case 0x4484c9:c.instructions+=11;goto B4484c9;
case 0x4484cd:c.instructions+=10;goto B4484cd;
case 0x4484d3:c.instructions+=9;goto B4484d3;
case 0x4484d5:c.instructions+=8;goto B4484d5;
case 0x4484dc:c.instructions+=7;goto B4484dc;
case 0x4484e3:c.instructions+=6;goto B4484e3;
case 0x4484ea:c.instructions+=5;goto B4484ea;
case 0x4484ec:c.instructions+=4;goto B4484ec;
case 0x4484f3:c.instructions+=3;goto B4484f3;
case 0x4484fa:c.instructions+=2;goto B4484fa;
case 0x448501:c.instructions+=1;goto B448501;
case 0x448506:goto L448506;
case 0x448509:c.instructions+=5;goto B448509;
case 0x44850d:c.instructions+=4;goto B44850d;
case 0x44850e:c.instructions+=3;goto B44850e;
case 0x448510:c.instructions+=2;goto B448510;
case 0x448512:c.instructions+=1;goto B448512;
case 0x448517:goto L448517;
case 0x44851e:c.instructions+=4;goto B44851e;
case 0x44851f:c.instructions+=3;goto B44851f;
case 0x448521:c.instructions+=2;goto B448521;
case 0x448523:c.instructions+=1;goto B448523;
case 0x448528:goto L448528;
case 0x44852f:c.instructions+=13;goto B44852f;
case 0x448533:c.instructions+=12;goto B448533;
case 0x44853a:c.instructions+=11;goto B44853a;
case 0x44853b:c.instructions+=10;goto B44853b;
case 0x448542:c.instructions+=9;goto B448542;
case 0x448549:c.instructions+=8;goto B448549;
case 0x448550:c.instructions+=7;goto B448550;
case 0x448551:c.instructions+=6;goto B448551;
case 0x448555:c.instructions+=5;goto B448555;
case 0x44855c:c.instructions+=4;goto B44855c;
case 0x448563:c.instructions+=3;goto B448563;
case 0x448567:c.instructions+=2;goto B448567;
case 0x44856e:c.instructions+=1;goto B44856e;
case 0x448573:goto L448573;
case 0x448576:c.instructions+=5;goto B448576;
case 0x44857d:c.instructions+=4;goto B44857d;
case 0x44857e:c.instructions+=3;goto B44857e;
case 0x448580:c.instructions+=2;goto B448580;
case 0x448582:c.instructions+=1;goto B448582;
case 0x448587:goto L448587;
case 0x44858b:c.instructions+=6;goto B44858b;
case 0x44858c:c.instructions+=5;goto B44858c;
case 0x448593:c.instructions+=4;goto B448593;
case 0x448594:c.instructions+=3;goto B448594;
case 0x44859b:c.instructions+=2;goto B44859b;
case 0x44859c:c.instructions+=1;goto B44859c;
case 0x4485a1:goto L4485a1;
case 0x4485a8:c.instructions+=4;goto B4485a8;
case 0x4485a9:c.instructions+=3;goto B4485a9;
case 0x4485b0:c.instructions+=2;goto B4485b0;
case 0x4485b1:c.instructions+=1;goto B4485b1;
case 0x4485b6:goto L4485b6;
case 0x4485ba:c.instructions+=36;goto B4485ba;
case 0x4485c1:c.instructions+=35;goto B4485c1;
case 0x4485c7:c.instructions+=34;goto B4485c7;
case 0x4485cb:c.instructions+=33;goto B4485cb;
case 0x4485ce:c.instructions+=32;goto B4485ce;
case 0x4485d0:c.instructions+=31;goto B4485d0;
case 0x4485d7:c.instructions+=30;goto B4485d7;
case 0x4485d9:c.instructions+=29;goto B4485d9;
case 0x4485dd:c.instructions+=28;goto B4485dd;
case 0x4485e4:c.instructions+=27;goto B4485e4;
case 0x4485e6:c.instructions+=26;goto B4485e6;
case 0x4485ed:c.instructions+=25;goto B4485ed;
case 0x4485f4:c.instructions+=24;goto B4485f4;
case 0x4485f8:c.instructions+=23;goto B4485f8;
case 0x4485ff:c.instructions+=22;goto B4485ff;
case 0x448603:c.instructions+=21;goto B448603;
case 0x448605:c.instructions+=20;goto B448605;
case 0x44860c:c.instructions+=19;goto B44860c;
case 0x448610:c.instructions+=18;goto B448610;
case 0x448612:c.instructions+=17;goto B448612;
case 0x448619:c.instructions+=16;goto B448619;
case 0x448620:c.instructions+=15;goto B448620;
case 0x448624:c.instructions+=14;goto B448624;
case 0x44862b:c.instructions+=13;goto B44862b;
case 0x44862f:c.instructions+=12;goto B44862f;
case 0x448631:c.instructions+=11;goto B448631;
case 0x448638:c.instructions+=10;goto B448638;
case 0x44863c:c.instructions+=9;goto B44863c;
case 0x44863e:c.instructions+=8;goto B44863e;
case 0x448645:c.instructions+=7;goto B448645;
case 0x44864c:c.instructions+=6;goto B44864c;
case 0x448653:c.instructions+=5;goto B448653;
case 0x448655:c.instructions+=4;goto B448655;
case 0x44865c:c.instructions+=3;goto B44865c;
case 0x448663:c.instructions+=2;goto B448663;
case 0x44866a:c.instructions+=1;goto B44866a;
case 0x44866c:goto L44866c;
case 0x44866e:c.instructions+=7;goto B44866e;
case 0x448670:c.instructions+=6;goto B448670;
case 0x448672:c.instructions+=5;goto B448672;
case 0x448679:c.instructions+=4;goto B448679;
case 0x44867a:c.instructions+=3;goto B44867a;
case 0x44867d:c.instructions+=2;goto B44867d;
case 0x44867e:c.instructions+=1;goto B44867e;
case 0x448683:goto L448683;
case 0x448685:c.instructions+=1;goto B448685;
case 0x448687:goto L448687;
case 0x448688:c.instructions+=5;goto B448688;
case 0x44868d:c.instructions+=4;goto B44868d;
case 0x448694:c.instructions+=3;goto B448694;
case 0x448695:c.instructions+=2;goto B448695;
case 0x44869b:c.instructions+=1;goto B44869b;
case 0x4486a0:goto L4486a0;
case 0x4486a2:c.instructions+=1;goto B4486a2;
case 0x4486a4:goto L4486a4;
case 0x4486a6:c.instructions+=6;goto B4486a6;
case 0x4486a7:c.instructions+=5;goto B4486a7;
case 0x4486a8:c.instructions+=4;goto B4486a8;
case 0x4486a9:c.instructions+=3;goto B4486a9;
case 0x4486ab:c.instructions+=2;goto B4486ab;
case 0x4486ac:c.instructions+=1;goto B4486ac;
case 0x4486af:goto L4486af;
case 0x4486b6:c.instructions+=5;goto B4486b6;
case 0x4486bd:c.instructions+=4;goto B4486bd;
case 0x4486c3:c.instructions+=3;goto B4486c3;
case 0x4486c5:c.instructions+=2;goto B4486c5;
case 0x4486c8:c.instructions+=1;goto B4486c8;
case 0x4486ce:goto L4486ce;
case 0x4486d5:c.instructions+=18;goto B4486d5;
case 0x4486dc:c.instructions+=17;goto B4486dc;
case 0x4486e3:c.instructions+=16;goto B4486e3;
case 0x4486ea:c.instructions+=15;goto B4486ea;
case 0x4486ec:c.instructions+=14;goto B4486ec;
case 0x4486ee:c.instructions+=13;goto B4486ee;
case 0x4486f5:c.instructions+=12;goto B4486f5;
case 0x4486fc:c.instructions+=11;goto B4486fc;
case 0x448703:c.instructions+=10;goto B448703;
case 0x44870a:c.instructions+=9;goto B44870a;
case 0x44870c:c.instructions+=8;goto B44870c;
case 0x448713:c.instructions+=7;goto B448713;
case 0x44871a:c.instructions+=6;goto B44871a;
case 0x44871c:c.instructions+=5;goto B44871c;
case 0x448720:c.instructions+=4;goto B448720;
case 0x448726:c.instructions+=3;goto B448726;
case 0x448728:c.instructions+=2;goto B448728;
case 0x44872b:c.instructions+=1;goto B44872b;
case 0x448731:goto L448731;
case 0x448737:c.instructions+=3;goto B448737;
case 0x448739:c.instructions+=2;goto B448739;
case 0x44873c:c.instructions+=1;goto B44873c;
case 0x44873e:goto L44873e;
case 0x448744:c.instructions+=3;goto B448744;
case 0x448746:c.instructions+=2;goto B448746;
case 0x448749:c.instructions+=1;goto B448749;
case 0x44874f:goto L44874f;
case 0x448754:goto L448754;
case 0x44875b:c.instructions+=4;goto B44875b;
case 0x44875d:c.instructions+=3;goto B44875d;
case 0x448760:c.instructions+=2;goto B448760;
case 0x448761:c.instructions+=1;goto B448761;
case 0x448766:goto L448766;
case 0x44876a:c.instructions+=3;goto B44876a;
case 0x44876d:c.instructions+=2;goto B44876d;
case 0x44876e:c.instructions+=1;goto B44876e;
case 0x448773:goto L448773;
case 0x448776:c.instructions+=2;goto B448776;
case 0x448777:c.instructions+=1;goto B448777;
case 0x44877c:goto L44877c;
case 0x448780:c.instructions+=3;goto B448780;
case 0x448787:c.instructions+=2;goto B448787;
case 0x448788:c.instructions+=1;goto B448788;
case 0x44878d:goto L44878d;
case 0x448791:c.instructions+=5;goto B448791;
case 0x448795:c.instructions+=4;goto B448795;
case 0x448796:c.instructions+=3;goto B448796;
case 0x44879c:c.instructions+=2;goto B44879c;
case 0x4487a0:c.instructions+=1;goto B4487a0;
case 0x4487a5:goto L4487a5;
case 0x4487a9:c.instructions+=10;goto B4487a9;
case 0x4487ad:c.instructions+=9;goto B4487ad;
case 0x4487b3:c.instructions+=8;goto B4487b3;
case 0x4487b7:c.instructions+=7;goto B4487b7;
case 0x4487bb:c.instructions+=6;goto B4487bb;
case 0x4487bf:c.instructions+=5;goto B4487bf;
case 0x4487c0:c.instructions+=4;goto B4487c0;
case 0x4487c1:c.instructions+=3;goto B4487c1;
case 0x4487c3:c.instructions+=2;goto B4487c3;
case 0x4487ca:c.instructions+=1;goto B4487ca;
case 0x4487cf:goto L4487cf;
case 0x4487d6:c.instructions+=5;goto B4487d6;
case 0x4487d9:c.instructions+=4;goto B4487d9;
case 0x4487df:c.instructions+=3;goto B4487df;
case 0x4487e1:c.instructions+=2;goto B4487e1;
case 0x4487e4:c.instructions+=1;goto B4487e4;
case 0x4487e6:goto L4487e6;
case 0x4487ea:c.instructions+=4;goto B4487ea;
case 0x4487f0:c.instructions+=3;goto B4487f0;
case 0x4487f2:c.instructions+=2;goto B4487f2;
case 0x4487f5:c.instructions+=1;goto B4487f5;
case 0x4487f7:goto L4487f7;
case 0x4487fc:c.instructions+=7;goto B4487fc;
case 0x448800:c.instructions+=6;goto B448800;
case 0x448801:c.instructions+=5;goto B448801;
case 0x448802:c.instructions+=4;goto B448802;
case 0x448803:c.instructions+=3;goto B448803;
case 0x448805:c.instructions+=2;goto B448805;
case 0x448806:c.instructions+=1;goto B448806;
case 0x448809:goto L448809;
case 0x44880b:goto L44880b;
case 0x44880f:c.instructions+=6;goto B44880f;
case 0x448810:c.instructions+=5;goto B448810;
case 0x448811:c.instructions+=4;goto B448811;
case 0x448812:c.instructions+=3;goto B448812;
case 0x448814:c.instructions+=2;goto B448814;
case 0x448815:c.instructions+=1;goto B448815;
case 0x448820:goto L448820;
case 0x448821:c.instructions+=4;goto B448821;
case 0x448823:c.instructions+=3;goto B448823;
case 0x448829:c.instructions+=2;goto B448829;
case 0x44882c:c.instructions+=1;goto B44882c;
case 0x448832:goto L448832;
case 0x448833:c.instructions+=3;goto B448833;
case 0x448837:c.instructions+=2;goto B448837;
case 0x448839:c.instructions+=1;goto B448839;
case 0x44883f:goto L44883f;
case 0x448841:c.instructions+=1;goto B448841;
case 0x448847:goto L448847;
case 0x44884b:c.instructions+=2;goto B44884b;
case 0x44884d:c.instructions+=1;goto B44884d;
case 0x44884f:goto L44884f;
case 0x448853:c.instructions+=5;goto B448853;
case 0x448854:c.instructions+=4;goto B448854;
case 0x448859:c.instructions+=3;goto B448859;
case 0x44885d:c.instructions+=2;goto B44885d;
case 0x448864:c.instructions+=1;goto B448864;
case 0x448869:goto L448869;
case 0x44886b:c.instructions+=5;goto B44886b;
case 0x448871:c.instructions+=4;goto B448871;
case 0x448878:c.instructions+=3;goto B448878;
case 0x448879:c.instructions+=2;goto B448879;
case 0x44887b:c.instructions+=1;goto B44887b;
case 0x448880:goto L448880;
case 0x448886:c.instructions+=4;goto B448886;
case 0x448888:c.instructions+=3;goto B448888;
case 0x448889:c.instructions+=2;goto B448889;
case 0x44888a:c.instructions+=1;goto B44888a;
case 0x448890:goto L448890;
case 0x448896:c.instructions+=49;goto B448896;
case 0x44889c:c.instructions+=48;goto B44889c;
case 0x44889f:c.instructions+=47;goto B44889f;
case 0x4488a5:c.instructions+=46;goto B4488a5;
case 0x4488ab:c.instructions+=45;goto B4488ab;
case 0x4488b1:c.instructions+=44;goto B4488b1;
case 0x4488b7:c.instructions+=43;goto B4488b7;
case 0x4488bd:c.instructions+=42;goto B4488bd;
case 0x4488c3:c.instructions+=41;goto B4488c3;
case 0x4488c9:c.instructions+=40;goto B4488c9;
case 0x4488cf:c.instructions+=39;goto B4488cf;
case 0x4488d5:c.instructions+=38;goto B4488d5;
case 0x4488db:c.instructions+=37;goto B4488db;
case 0x4488e1:c.instructions+=36;goto B4488e1;
case 0x4488e7:c.instructions+=35;goto B4488e7;
case 0x4488ed:c.instructions+=34;goto B4488ed;
case 0x4488f3:c.instructions+=33;goto B4488f3;
case 0x4488f9:c.instructions+=32;goto B4488f9;
case 0x4488ff:c.instructions+=31;goto B4488ff;
case 0x448905:c.instructions+=30;goto B448905;
case 0x44890b:c.instructions+=29;goto B44890b;
case 0x448911:c.instructions+=28;goto B448911;
case 0x448917:c.instructions+=27;goto B448917;
case 0x44891d:c.instructions+=26;goto B44891d;
case 0x448923:c.instructions+=25;goto B448923;
case 0x448929:c.instructions+=24;goto B448929;
case 0x44892f:c.instructions+=23;goto B44892f;
case 0x448935:c.instructions+=22;goto B448935;
case 0x44893b:c.instructions+=21;goto B44893b;
case 0x448941:c.instructions+=20;goto B448941;
case 0x448947:c.instructions+=19;goto B448947;
case 0x44894d:c.instructions+=18;goto B44894d;
case 0x448953:c.instructions+=17;goto B448953;
case 0x448959:c.instructions+=16;goto B448959;
case 0x44895f:c.instructions+=15;goto B44895f;
case 0x448965:c.instructions+=14;goto B448965;
case 0x44896b:c.instructions+=13;goto B44896b;
case 0x448971:c.instructions+=12;goto B448971;
case 0x448977:c.instructions+=11;goto B448977;
case 0x44897d:c.instructions+=10;goto B44897d;
case 0x448983:c.instructions+=9;goto B448983;
case 0x448989:c.instructions+=8;goto B448989;
case 0x44898f:c.instructions+=7;goto B44898f;
case 0x448995:c.instructions+=6;goto B448995;
case 0x448996:c.instructions+=5;goto B448996;
case 0x44899c:c.instructions+=4;goto B44899c;
case 0x4489a2:c.instructions+=3;goto B4489a2;
case 0x4489a8:c.instructions+=2;goto B4489a8;
case 0x4489aa:c.instructions+=1;goto B4489aa;
case 0x4489ad:goto L4489ad;
case 0x4489af:goto L4489af;
case 0x4489b1:c.instructions+=1;goto B4489b1;
case 0x4489b4:goto L4489b4;
case 0x4489b6:goto L4489b6;
case 0x4489b7:goto L4489b7;
case 0x4489bd:c.instructions+=9;goto B4489bd;
case 0x4489be:c.instructions+=8;goto B4489be;
case 0x4489c0:c.instructions+=7;goto B4489c0;
case 0x4489c6:c.instructions+=6;goto B4489c6;
case 0x4489cc:c.instructions+=5;goto B4489cc;
case 0x4489cf:c.instructions+=4;goto B4489cf;
case 0x4489d3:c.instructions+=3;goto B4489d3;
case 0x4489d5:c.instructions+=2;goto B4489d5;
case 0x4489d7:c.instructions+=1;goto B4489d7;
case 0x4489d9:goto L4489d9;
case 0x4489db:c.instructions+=2;goto B4489db;
case 0x4489e1:c.instructions+=1;goto B4489e1;
case 0x4489e8:goto L4489e8;
case 0x4489ea:c.instructions+=4;goto B4489ea;
case 0x4489ee:c.instructions+=3;goto B4489ee;
case 0x4489f0:c.instructions+=2;goto B4489f0;
case 0x4489f3:c.instructions+=1;goto B4489f3;
case 0x4489f5:goto L4489f5;
case 0x4489f6:c.instructions+=3;goto B4489f6;
case 0x4489fc:c.instructions+=2;goto B4489fc;
case 0x4489fe:c.instructions+=1;goto B4489fe;
case 0x448a00:goto L448a00;
case 0x448a02:c.instructions+=3;goto B448a02;
case 0x448a08:c.instructions+=2;goto B448a08;
case 0x448a0d:c.instructions+=1;goto B448a0d;
case 0x448a0f:goto L448a0f;
case 0x448a16:c.instructions+=1;goto B448a16;
case 0x448a18:goto L448a18;
case 0x448a1e:goto L448a1e;
case 0x448a20:c.instructions+=2;goto B448a20;
case 0x448a21:c.instructions+=1;goto B448a21;
case 0x448a23:goto L448a23;
case 0x448a2a:c.instructions+=1;goto B448a2a;
case 0x448a2c:goto L448a2c;
case 0x448a32:goto L448a32;
case 0x448a33:goto L448a33;
case 0x448a34:c.instructions+=1;goto B448a34;
case 0x448a40:goto L448a40;
case 0x448a41:c.instructions+=11;goto B448a41;
case 0x448a43:c.instructions+=10;goto B448a43;
case 0x448a46:c.instructions+=9;goto B448a46;
case 0x448a49:c.instructions+=8;goto B448a49;
case 0x448a4a:c.instructions+=7;goto B448a4a;
case 0x448a4b:c.instructions+=6;goto B448a4b;
case 0x448a4d:c.instructions+=5;goto B448a4d;
case 0x448a53:c.instructions+=4;goto B448a53;
case 0x448a55:c.instructions+=3;goto B448a55;
case 0x448a56:c.instructions+=2;goto B448a56;
case 0x448a59:c.instructions+=1;goto B448a59;
case 0x448a5b:goto L448a5b;
case 0x448a5e:c.instructions+=1;goto B448a5e;
case 0x448a64:goto L448a64;
case 0x448a67:c.instructions+=36;goto B448a67;
case 0x448a69:c.instructions+=35;goto B448a69;
case 0x448a6c:c.instructions+=34;goto B448a6c;
case 0x448a72:c.instructions+=33;goto B448a72;
case 0x448a79:c.instructions+=32;goto B448a79;
case 0x448a7f:c.instructions+=31;goto B448a7f;
case 0x448a86:c.instructions+=30;goto B448a86;
case 0x448a8c:c.instructions+=29;goto B448a8c;
case 0x448a8f:c.instructions+=28;goto B448a8f;
case 0x448a96:c.instructions+=27;goto B448a96;
case 0x448a9c:c.instructions+=26;goto B448a9c;
case 0x448a9f:c.instructions+=25;goto B448a9f;
case 0x448aa2:c.instructions+=24;goto B448aa2;
case 0x448aa9:c.instructions+=23;goto B448aa9;
case 0x448aab:c.instructions+=22;goto B448aab;
case 0x448ab1:c.instructions+=21;goto B448ab1;
case 0x448ab7:c.instructions+=20;goto B448ab7;
case 0x448abd:c.instructions+=19;goto B448abd;
case 0x448ac1:c.instructions+=18;goto B448ac1;
case 0x448ac4:c.instructions+=17;goto B448ac4;
case 0x448ac7:c.instructions+=16;goto B448ac7;
case 0x448acd:c.instructions+=15;goto B448acd;
case 0x448ad3:c.instructions+=14;goto B448ad3;
case 0x448ad9:c.instructions+=13;goto B448ad9;
case 0x448adf:c.instructions+=12;goto B448adf;
case 0x448ae5:c.instructions+=11;goto B448ae5;
case 0x448ae9:c.instructions+=10;goto B448ae9;
case 0x448aec:c.instructions+=9;goto B448aec;
case 0x448aef:c.instructions+=8;goto B448aef;
case 0x448af5:c.instructions+=7;goto B448af5;
case 0x448afc:c.instructions+=6;goto B448afc;
case 0x448b02:c.instructions+=5;goto B448b02;
case 0x448b09:c.instructions+=4;goto B448b09;
case 0x448b0f:c.instructions+=3;goto B448b0f;
case 0x448b16:c.instructions+=2;goto B448b16;
case 0x448b18:c.instructions+=1;goto B448b18;
case 0x448b1e:goto L448b1e;
case 0x448b24:c.instructions+=2;goto B448b24;
case 0x448b27:c.instructions+=1;goto B448b27;
case 0x448b2c:goto L448b2c;
case 0x448b32:c.instructions+=2;goto B448b32;
case 0x448b33:c.instructions+=1;goto B448b33;
case 0x448b38:goto L448b38;
case 0x448b3a:c.instructions+=2;goto B448b3a;
case 0x448b3c:c.instructions+=1;goto B448b3c;
case 0x448b42:goto L448b42;
case 0x448b49:c.instructions+=3;goto B448b49;
case 0x448b50:c.instructions+=2;goto B448b50;
case 0x448b54:c.instructions+=1;goto B448b54;
case 0x448b56:goto L448b56;
case 0x448b5c:c.instructions+=1;goto B448b5c;
case 0x448b5e:goto L448b5e;
case 0x448b64:goto L448b64;
case 0x448b6a:c.instructions+=7;goto B448b6a;
case 0x448b6d:c.instructions+=6;goto B448b6d;
case 0x448b6f:c.instructions+=5;goto B448b6f;
case 0x448b77:c.instructions+=4;goto B448b77;
case 0x448b7a:c.instructions+=3;goto B448b7a;
case 0x448b7b:c.instructions+=2;goto B448b7b;
case 0x448b7f:c.instructions+=1;goto B448b7f;
case 0x448b84:goto L448b84;
case 0x448b88:c.instructions+=3;goto B448b88;
case 0x448b8c:c.instructions+=2;goto B448b8c;
case 0x448b8d:c.instructions+=1;goto B448b8d;
case 0x448b92:goto L448b92;
case 0x448b96:c.instructions+=10;goto B448b96;
case 0x448b98:c.instructions+=9;goto B448b98;
case 0x448b9e:c.instructions+=8;goto B448b9e;
case 0x448ba0:c.instructions+=7;goto B448ba0;
case 0x448ba6:c.instructions+=6;goto B448ba6;
case 0x448bac:c.instructions+=5;goto B448bac;
case 0x448bb0:c.instructions+=4;goto B448bb0;
case 0x448bb2:c.instructions+=3;goto B448bb2;
case 0x448bb3:c.instructions+=2;goto B448bb3;
case 0x448bb7:c.instructions+=1;goto B448bb7;
case 0x448bbc:goto L448bbc;
case 0x448bc0:c.instructions+=3;goto B448bc0;
case 0x448bc4:c.instructions+=2;goto B448bc4;
case 0x448bc5:c.instructions+=1;goto B448bc5;
case 0x448bca:goto L448bca;
case 0x448bce:c.instructions+=4;goto B448bce;
case 0x448bd1:c.instructions+=3;goto B448bd1;
case 0x448bd4:c.instructions+=2;goto B448bd4;
case 0x448bd8:c.instructions+=1;goto B448bd8;
case 0x448bda:goto L448bda;
case 0x448bdd:c.instructions+=1;goto B448bdd;
case 0x448bdf:goto L448bdf;
case 0x448be3:c.instructions+=1;goto B448be3;
case 0x448be5:goto L448be5;
case 0x448be7:c.instructions+=1;goto B448be7;
case 0x448be9:goto L448be9;
case 0x448beb:goto L448beb;
case 0x448bed:c.instructions+=7;goto B448bed;
case 0x448bf0:c.instructions+=6;goto B448bf0;
case 0x448bf3:c.instructions+=5;goto B448bf3;
case 0x448bf7:c.instructions+=4;goto B448bf7;
case 0x448bfa:c.instructions+=3;goto B448bfa;
case 0x448bfe:c.instructions+=2;goto B448bfe;
case 0x448c02:c.instructions+=1;goto B448c02;
case 0x448c04:goto L448c04;
case 0x448c08:c.instructions+=3;goto B448c08;
case 0x448c0c:c.instructions+=2;goto B448c0c;
case 0x448c12:c.instructions+=1;goto B448c12;
case 0x448c14:goto L448c14;
case 0x448c18:c.instructions+=2;goto B448c18;
case 0x448c1c:c.instructions+=1;goto B448c1c;
case 0x448c22:goto L448c22;
case 0x448c26:c.instructions+=8;goto B448c26;
case 0x448c2c:c.instructions+=7;goto B448c2c;
case 0x448c30:c.instructions+=6;goto B448c30;
case 0x448c34:c.instructions+=5;goto B448c34;
case 0x448c3a:c.instructions+=4;goto B448c3a;
case 0x448c40:c.instructions+=3;goto B448c40;
case 0x448c46:c.instructions+=2;goto B448c46;
case 0x448c4c:c.instructions+=1;goto B448c4c;
case 0x448c56:goto L448c56;
case 0x448c5c:c.instructions+=2;goto B448c5c;
case 0x448c5e:c.instructions+=1;goto B448c5e;
case 0x448c60:goto L448c60;
case 0x448c63:c.instructions+=1;goto B448c63;
case 0x448c69:goto L448c69;
case 0x448c6c:c.instructions+=18;goto B448c6c;
case 0x448c6e:c.instructions+=17;goto B448c6e;
case 0x448c74:c.instructions+=16;goto B448c74;
case 0x448c7b:c.instructions+=15;goto B448c7b;
case 0x448c81:c.instructions+=14;goto B448c81;
case 0x448c84:c.instructions+=13;goto B448c84;
case 0x448c87:c.instructions+=12;goto B448c87;
case 0x448c8a:c.instructions+=11;goto B448c8a;
case 0x448c90:c.instructions+=10;goto B448c90;
case 0x448c96:c.instructions+=9;goto B448c96;
case 0x448c9c:c.instructions+=8;goto B448c9c;
case 0x448ca2:c.instructions+=7;goto B448ca2;
case 0x448ca6:c.instructions+=6;goto B448ca6;
case 0x448ca9:c.instructions+=5;goto B448ca9;
case 0x448cac:c.instructions+=4;goto B448cac;
case 0x448cb2:c.instructions+=3;goto B448cb2;
case 0x448cb9:c.instructions+=2;goto B448cb9;
case 0x448cbb:c.instructions+=1;goto B448cbb;
case 0x448cc1:goto L448cc1;
case 0x448cc7:c.instructions+=2;goto B448cc7;
case 0x448cca:c.instructions+=1;goto B448cca;
case 0x448ccf:goto L448ccf;
case 0x448cd5:c.instructions+=2;goto B448cd5;
case 0x448cd6:c.instructions+=1;goto B448cd6;
case 0x448cdb:goto L448cdb;
case 0x448cdd:c.instructions+=2;goto B448cdd;
case 0x448cdf:c.instructions+=1;goto B448cdf;
case 0x448ce5:goto L448ce5;
case 0x448ce7:c.instructions+=5;goto B448ce7;
case 0x448cee:c.instructions+=4;goto B448cee;
case 0x448cf2:c.instructions+=3;goto B448cf2;
case 0x448cf3:c.instructions+=2;goto B448cf3;
case 0x448cf7:c.instructions+=1;goto B448cf7;
case 0x448cfc:goto L448cfc;
case 0x448d00:c.instructions+=3;goto B448d00;
case 0x448d04:c.instructions+=2;goto B448d04;
case 0x448d05:c.instructions+=1;goto B448d05;
case 0x448d0a:goto L448d0a;
case 0x448d0e:c.instructions+=4;goto B448d0e;
case 0x448d11:c.instructions+=3;goto B448d11;
case 0x448d14:c.instructions+=2;goto B448d14;
case 0x448d18:c.instructions+=1;goto B448d18;
case 0x448d1a:goto L448d1a;
case 0x448d1d:c.instructions+=1;goto B448d1d;
case 0x448d1f:goto L448d1f;
case 0x448d23:c.instructions+=1;goto B448d23;
case 0x448d25:goto L448d25;
case 0x448d27:c.instructions+=1;goto B448d27;
case 0x448d29:goto L448d29;
case 0x448d2b:goto L448d2b;
case 0x448d2d:c.instructions+=4;goto B448d2d;
case 0x448d30:c.instructions+=3;goto B448d30;
case 0x448d33:c.instructions+=2;goto B448d33;
case 0x448d37:c.instructions+=1;goto B448d37;
case 0x448d39:goto L448d39;
case 0x448d3d:c.instructions+=7;goto B448d3d;
case 0x448d3f:c.instructions+=6;goto B448d3f;
case 0x448d41:c.instructions+=5;goto B448d41;
case 0x448d43:c.instructions+=4;goto B448d43;
case 0x448d45:c.instructions+=3;goto B448d45;
case 0x448d47:c.instructions+=2;goto B448d47;
case 0x448d4d:c.instructions+=1;goto B448d4d;
case 0x448d4f:goto L448d4f;
case 0x448d51:c.instructions+=2;goto B448d51;
case 0x448d55:c.instructions+=1;goto B448d55;
case 0x448d5b:goto L448d5b;
case 0x448d61:c.instructions+=2;goto B448d61;
case 0x448d6b:c.instructions+=1;goto B448d6b;
case 0x448d71:goto L448d71;
case 0x448d74:goto L448d74;
case 0x448d7a:c.instructions+=2;goto B448d7a;
case 0x448d7c:c.instructions+=1;goto B448d7c;
case 0x448d7e:goto L448d7e;
case 0x448d81:c.instructions+=1;goto B448d81;
case 0x448d87:goto L448d87;
case 0x448d89:c.instructions+=11;goto B448d89;
case 0x448d8c:c.instructions+=10;goto B448d8c;
case 0x448d8e:c.instructions+=9;goto B448d8e;
case 0x448d95:c.instructions+=8;goto B448d95;
case 0x448d9b:c.instructions+=7;goto B448d9b;
case 0x448da2:c.instructions+=6;goto B448da2;
case 0x448da4:c.instructions+=5;goto B448da4;
case 0x448daa:c.instructions+=4;goto B448daa;
case 0x448db0:c.instructions+=3;goto B448db0;
case 0x448db7:c.instructions+=2;goto B448db7;
case 0x448db9:c.instructions+=1;goto B448db9;
case 0x448dbb:goto L448dbb;
case 0x448dc1:c.instructions+=2;goto B448dc1;
case 0x448dc4:c.instructions+=1;goto B448dc4;
case 0x448dc9:goto L448dc9;
case 0x448dcf:c.instructions+=2;goto B448dcf;
case 0x448dd0:c.instructions+=1;goto B448dd0;
case 0x448dd5:goto L448dd5;
case 0x448dd7:c.instructions+=1;goto B448dd7;
case 0x448dd9:goto L448dd9;
case 0x448ddd:c.instructions+=1;goto B448ddd;
case 0x448ddf:goto L448ddf;
case 0x448de5:c.instructions+=1;goto B448de5;
case 0x448de7:goto L448de7;
case 0x448ded:goto L448ded;
case 0x448df3:c.instructions+=7;goto B448df3;
case 0x448df6:c.instructions+=6;goto B448df6;
case 0x448df8:c.instructions+=5;goto B448df8;
case 0x448e00:c.instructions+=4;goto B448e00;
case 0x448e03:c.instructions+=3;goto B448e03;
case 0x448e04:c.instructions+=2;goto B448e04;
case 0x448e08:c.instructions+=1;goto B448e08;
case 0x448e0d:goto L448e0d;
case 0x448e11:c.instructions+=3;goto B448e11;
case 0x448e15:c.instructions+=2;goto B448e15;
case 0x448e16:c.instructions+=1;goto B448e16;
case 0x448e1b:goto L448e1b;
case 0x448e1f:c.instructions+=6;goto B448e1f;
case 0x448e22:c.instructions+=5;goto B448e22;
case 0x448e28:c.instructions+=4;goto B448e28;
case 0x448e2a:c.instructions+=3;goto B448e2a;
case 0x448e30:c.instructions+=2;goto B448e30;
case 0x448e36:c.instructions+=1;goto B448e36;
case 0x448e38:goto L448e38;
case 0x448e3e:c.instructions+=2;goto B448e3e;
case 0x448e40:c.instructions+=1;goto B448e40;
case 0x448e42:goto L448e42;
case 0x448e45:c.instructions+=1;goto B448e45;
case 0x448e47:goto L448e47;
case 0x448e49:c.instructions+=9;goto B448e49;
case 0x448e4c:c.instructions+=8;goto B448e4c;
case 0x448e4e:c.instructions+=7;goto B448e4e;
case 0x448e55:c.instructions+=6;goto B448e55;
case 0x448e57:c.instructions+=5;goto B448e57;
case 0x448e5d:c.instructions+=4;goto B448e5d;
case 0x448e5f:c.instructions+=3;goto B448e5f;
case 0x448e65:c.instructions+=2;goto B448e65;
case 0x448e6c:c.instructions+=1;goto B448e6c;
case 0x448e72:goto L448e72;
case 0x448e74:c.instructions+=1;goto B448e74;
case 0x448e76:goto L448e76;
case 0x448e79:c.instructions+=1;goto B448e79;
case 0x448e7b:goto L448e7b;
case 0x448e7d:c.instructions+=6;goto B448e7d;
case 0x448e80:c.instructions+=5;goto B448e80;
case 0x448e83:c.instructions+=4;goto B448e83;
case 0x448e8a:c.instructions+=3;goto B448e8a;
case 0x448e90:c.instructions+=2;goto B448e90;
case 0x448e97:c.instructions+=1;goto B448e97;
case 0x448e9d:goto L448e9d;
case 0x448e9f:c.instructions+=1;goto B448e9f;
case 0x448ea1:goto L448ea1;
case 0x448ea4:c.instructions+=1;goto B448ea4;
case 0x448eaa:goto L448eaa;
case 0x448eac:c.instructions+=29;goto B448eac;
case 0x448eb2:c.instructions+=28;goto B448eb2;
case 0x448eb5:c.instructions+=27;goto B448eb5;
case 0x448eb8:c.instructions+=26;goto B448eb8;
case 0x448ebe:c.instructions+=25;goto B448ebe;
case 0x448ec4:c.instructions+=24;goto B448ec4;
case 0x448eca:c.instructions+=23;goto B448eca;
case 0x448ed0:c.instructions+=22;goto B448ed0;
case 0x448ed3:c.instructions+=21;goto B448ed3;
case 0x448ed5:c.instructions+=20;goto B448ed5;
case 0x448ed7:c.instructions+=19;goto B448ed7;
case 0x448ede:c.instructions+=18;goto B448ede;
case 0x448ee0:c.instructions+=17;goto B448ee0;
case 0x448ee6:c.instructions+=16;goto B448ee6;
case 0x448eec:c.instructions+=15;goto B448eec;
case 0x448eef:c.instructions+=14;goto B448eef;
case 0x448ef1:c.instructions+=13;goto B448ef1;
case 0x448ef4:c.instructions+=12;goto B448ef4;
case 0x448efa:c.instructions+=11;goto B448efa;
case 0x448f00:c.instructions+=10;goto B448f00;
case 0x448f06:c.instructions+=9;goto B448f06;
case 0x448f09:c.instructions+=8;goto B448f09;
case 0x448f0c:c.instructions+=7;goto B448f0c;
case 0x448f0e:c.instructions+=6;goto B448f0e;
case 0x448f15:c.instructions+=5;goto B448f15;
case 0x448f1b:c.instructions+=4;goto B448f1b;
case 0x448f22:c.instructions+=3;goto B448f22;
case 0x448f28:c.instructions+=2;goto B448f28;
case 0x448f2e:c.instructions+=1;goto B448f2e;
case 0x448f34:goto L448f34;
case 0x448f35:c.instructions+=6;goto B448f35;
case 0x448f3c:c.instructions+=5;goto B448f3c;
case 0x448f3d:c.instructions+=4;goto B448f3d;
case 0x448f3e:c.instructions+=3;goto B448f3e;
case 0x448f40:c.instructions+=2;goto B448f40;
case 0x448f41:c.instructions+=1;goto B448f41;
case 0x448f50:goto L448f50;
case 0x448f51:c.instructions+=14;goto B448f51;
case 0x448f53:c.instructions+=13;goto B448f53;
case 0x448f56:c.instructions+=12;goto B448f56;
case 0x448f59:c.instructions+=11;goto B448f59;
case 0x448f5a:c.instructions+=10;goto B448f5a;
case 0x448f5d:c.instructions+=9;goto B448f5d;
case 0x448f5f:c.instructions+=8;goto B448f5f;
case 0x448f65:c.instructions+=7;goto B448f65;
case 0x448f66:c.instructions+=6;goto B448f66;
case 0x448f68:c.instructions+=5;goto B448f68;
case 0x448f69:c.instructions+=4;goto B448f69;
case 0x448f6c:c.instructions+=3;goto B448f6c;
case 0x448f73:c.instructions+=2;goto B448f73;
case 0x448f76:c.instructions+=1;goto B448f76;
case 0x448f7c:goto L448f7c;
case 0x448f83:goto L448f83;
case 0x448f86:c.instructions+=5;goto B448f86;
case 0x448f89:c.instructions+=4;goto B448f89;
case 0x448f8a:c.instructions+=3;goto B448f8a;
case 0x448f8b:c.instructions+=2;goto B448f8b;
case 0x448f91:c.instructions+=1;goto B448f91;
case 0x448f96:goto L448f96;
case 0x448f97:c.instructions+=5;goto B448f97;
case 0x448f98:c.instructions+=4;goto B448f98;
case 0x448f99:c.instructions+=3;goto B448f99;
case 0x448f9b:c.instructions+=2;goto B448f9b;
case 0x448f9c:c.instructions+=1;goto B448f9c;
case 0x448f9f:goto L448f9f;
case 0x448fa2:c.instructions+=5;goto B448fa2;
case 0x448fa6:c.instructions+=4;goto B448fa6;
case 0x448fa7:c.instructions+=3;goto B448fa7;
case 0x448fa8:c.instructions+=2;goto B448fa8;
case 0x448fae:c.instructions+=1;goto B448fae;
case 0x448fb3:goto L448fb3;
case 0x448fb6:c.instructions+=9;goto B448fb6;
case 0x448fbc:c.instructions+=8;goto B448fbc;
case 0x448fbf:c.instructions+=7;goto B448fbf;
case 0x448fc1:c.instructions+=6;goto B448fc1;
case 0x448fc3:c.instructions+=5;goto B448fc3;
case 0x448fc6:c.instructions+=4;goto B448fc6;
case 0x448fc7:c.instructions+=3;goto B448fc7;
case 0x448fc9:c.instructions+=2;goto B448fc9;
case 0x448fcb:c.instructions+=1;goto B448fcb;
case 0x448fcd:goto L448fcd;
case 0x448fcf:c.instructions+=1;goto B448fcf;
case 0x448fd1:goto L448fd1;
case 0x448fd3:goto L448fd3;
case 0x448fd9:c.instructions+=3;goto B448fd9;
case 0x448fe0:c.instructions+=2;goto B448fe0;
case 0x448fe4:c.instructions+=1;goto B448fe4;
case 0x448fe6:goto L448fe6;
case 0x448fee:goto L448fee;
case 0x448ff2:c.instructions+=3;goto B448ff2;
case 0x448ff3:c.instructions+=2;goto B448ff3;
case 0x448ff5:c.instructions+=1;goto B448ff5;
case 0x448ffa:goto L448ffa;
default:missing_instruction(c.pc);}
B448002:L448002:{c.instructions+=3;NFSU2_TR(0x448002);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448003:{NFSU2_TR(0x448003);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B448009:{NFSU2_TR(0x448009);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44800eull));
TAIL_STATIC(0x5701d0u,570);
}
B44800e:L44800e:{c.instructions+=11;NFSU2_TR(0x44800e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B448014:{NFSU2_TR(0x448014);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B448018:{NFSU2_TR(0x448018);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44801c:{NFSU2_TR(0x44801c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44801d:{NFSU2_TR(0x44801d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44801e:{NFSU2_TR(0x44801e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B448021:{NFSU2_TR(0x448021);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B448028:{NFSU2_TR(0x448028);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B448029:{NFSU2_TR(0x448029);
__builtin_memmove((R+16),(R+20),4);
}
B44802b:{NFSU2_TR(0x44802b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44802c:{NFSU2_TR(0x44802c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B448030:L448030:{c.instructions+=3;NFSU2_TR(0x448030);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448031:{NFSU2_TR(0x448031);
__builtin_memmove((R+24),(R+4),4);
}
B448033:{NFSU2_TR(0x448033);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x448038ull));
TAIL_STATIC(0x442a10u,442);
}
B448038:L448038:{c.instructions+=2;NFSU2_TR(0x448038);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44803a:{NFSU2_TR(0x44803a);
if(r1(R+518)){{goto L448051;}}
}
B44803c:L44803c:{c.instructions+=5;NFSU2_TR(0x44803c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B448042:{NFSU2_TR(0x448042);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B448045:{NFSU2_TR(0x448045);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448046:{NFSU2_TR(0x448046);
__builtin_memmove((R+4),(R+24),4);
}
B448048:{NFSU2_TR(0x448048);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44804dull));
TAIL_STATIC(0x43be60u,43b);
}
B44804d:L44804d:{c.instructions+=2;NFSU2_TR(0x44804d);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B44804f:{NFSU2_TR(0x44804f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L448053;}}
}
B448051:L448051:{c.instructions+=1;NFSU2_TR(0x448051);
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
B448053:L448053:{c.instructions+=2;NFSU2_TR(0x448053);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B448054:{NFSU2_TR(0x448054);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B448060:L448060:{c.instructions+=9;NFSU2_TR(0x448060);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B448063:{NFSU2_TR(0x448063);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448064:{NFSU2_TR(0x448064);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448065:{NFSU2_TR(0x448065);
__builtin_memmove((R+20),(R+4),4);
}
B448067:{NFSU2_TR(0x448067);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44806d:{NFSU2_TR(0x44806d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44806f:{NFSU2_TR(0x44806f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448070:{NFSU2_TR(0x448070);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448071:{NFSU2_TR(0x448071);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L448096;}}
}
B448073:L448073:{c.instructions+=4;NFSU2_TR(0x448073);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c2cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44807d:{NFSU2_TR(0x44807d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x19cull))));
__builtin_memmove((R+28),(U+0),4);
}
B448083:{NFSU2_TR(0x448083);
w4(R+4,u32(0x22ull));
}
B448088:{NFSU2_TR(0x448088);
w4(R+24,u32(0x7ec7b0ull));
}
B44808d:L44808d:{c.instructions+=1;NFSU2_TR(0x44808d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L44808f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x44808du);}goto L44808d;}
}
B44808f:L44808f:{c.instructions+=1;NFSU2_TR(0x44808f);
s1(0x828649,u8(0x0ull));
}
B448096:L448096:{c.instructions+=3;NFSU2_TR(0x448096);
__builtin_memmove((R+4),gp(0x827ad8),4);
}
B44809c:{NFSU2_TR(0x44809c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44809e:{NFSU2_TR(0x44809e);
if(r1(R+518)){{goto L448143;}}
}
B4480a4:L4480a4:{c.instructions+=5;NFSU2_TR(0x4480a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4480a6:{NFSU2_TR(0x4480a6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4480a8:{NFSU2_TR(0x4480a8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4480aa:{NFSU2_TR(0x4480aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4480ae:{NFSU2_TR(0x4480ae);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L448143;}}
}
B4480b4:L4480b4:{c.instructions+=1;NFSU2_TR(0x4480b4);
{goto L4480c0;}
}
B4480b6:L4480b6:{c.instructions+=2;NFSU2_TR(0x4480b6);
__builtin_memmove((R+4),gp(0x827ad8),4);
}
B4480bc:{NFSU2_TR(0x4480bc);
__builtin_memmove((R+16),(R+16),4);
}
B4480c0:L4480c0:{c.instructions+=7;NFSU2_TR(0x4480c0);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B4480c4:{NFSU2_TR(0x4480c4);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4480c8:{NFSU2_TR(0x4480c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4480cc:{NFSU2_TR(0x4480cc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4480cd:{NFSU2_TR(0x4480cd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4480ce:{NFSU2_TR(0x4480ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4480d2:{NFSU2_TR(0x4480d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4480d7ull));
TAIL_STATIC(0x42fbf0u,42f);
}
B4480d7:L4480d7:{c.instructions+=5;NFSU2_TR(0x4480d7);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4480d9:{NFSU2_TR(0x4480d9);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4480dd:{NFSU2_TR(0x4480dd);
u8 U[4];
w4(U+0,u32(0x787b50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4480e2:{NFSU2_TR(0x4480e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4480e3:{NFSU2_TR(0x4480e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4480e8ull));
TAIL_STATIC(0x43dd10u,43d);
}
B4480e8:L4480e8:{c.instructions+=3;NFSU2_TR(0x4480e8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4480eb:{NFSU2_TR(0x4480eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4480ed:{NFSU2_TR(0x4480ed);
if(r1(R+518)){{goto L448136;}}
}
B4480ef:L4480ef:{c.instructions+=4;NFSU2_TR(0x4480ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4480f2:{NFSU2_TR(0x4480f2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4480f4:{NFSU2_TR(0x4480f4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4480f6:{NFSU2_TR(0x4480f6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L448119;}}
}
B4480f8:L4480f8:{c.instructions+=3;NFSU2_TR(0x4480f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4480fb:{NFSU2_TR(0x4480fb);
__builtin_memmove((R+4),(R+28),4);
}
B4480fd:{NFSU2_TR(0x4480fd);
__builtin_memmove((R+4),(R+4),4);
}
B448100:L448100:{c.instructions+=2;NFSU2_TR(0x448100);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+24))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B448102:{NFSU2_TR(0x448102);
if(r1(R+518)){{goto L44810f;}}
}
B448104:L448104:{c.instructions+=4;NFSU2_TR(0x448104);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B448105:{NFSU2_TR(0x448105);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14ull))));
}
B448108:{NFSU2_TR(0x448108);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B44810b:{NFSU2_TR(0x44810b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x448100u);}goto L448100;}}
}
B44810d:L44810d:{c.instructions+=1;NFSU2_TR(0x44810d);
{goto L448119;}
}
B44810f:L44810f:{c.instructions+=4;NFSU2_TR(0x44810f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B448112:{NFSU2_TR(0x448112);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B448115:{NFSU2_TR(0x448115);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B448117:{NFSU2_TR(0x448117);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L448136;}}
}
B448119:L448119:{c.instructions+=8;NFSU2_TR(0x448119);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44811c:{NFSU2_TR(0x44811c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B44811f:{NFSU2_TR(0x44811f);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x0ull));
s4(u32(r4(U+8)),r4(U+12));
}
B448127:{NFSU2_TR(0x448127);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44812a:{NFSU2_TR(0x44812a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44812d:{NFSU2_TR(0x44812d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B448130:{NFSU2_TR(0x448130);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B448133:{NFSU2_TR(0x448133);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B448136:L448136:{c.instructions+=4;NFSU2_TR(0x448136);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44813a:{NFSU2_TR(0x44813a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B44813b:{NFSU2_TR(0x44813b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B44813d:{NFSU2_TR(0x44813d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4480b6u);}goto L4480b6;}}
}
B448143:L448143:{c.instructions+=6;NFSU2_TR(0x448143);
__builtin_memmove((R+4),gp(0x88d218),4);
}
B448149:{NFSU2_TR(0x448149);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B44814b:{NFSU2_TR(0x44814b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44814d:{NFSU2_TR(0x44814d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B448151:{NFSU2_TR(0x448151);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B448155:{NFSU2_TR(0x448155);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4481df;}}
}
B44815b:L44815b:{c.instructions+=1;NFSU2_TR(0x44815b);
{goto L448160;}
}
B448160:L448160:{c.instructions+=10;NFSU2_TR(0x448160);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88d21cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B448167:{NFSU2_TR(0x448167);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B44816b:{NFSU2_TR(0x44816b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44816e:{NFSU2_TR(0x44816e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B448171:{NFSU2_TR(0x448171);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B448173:{NFSU2_TR(0x448173);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
}
B448175:{NFSU2_TR(0x448175);
w2(R+28,u16(r1(R+0)));
}
B448179:{NFSU2_TR(0x448179);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B44817b:{NFSU2_TR(0x44817b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44817d:{NFSU2_TR(0x44817d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4481a4;}}
}
B44817f:L44817f:{c.instructions+=2;NFSU2_TR(0x44817f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B448182:{NFSU2_TR(0x448182);
__builtin_memmove((R+8),(R+12),4);
}
B448184:L448184:{c.instructions+=2;NFSU2_TR(0x448184);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(R+24))-u32(r2(U+2))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B448187:{NFSU2_TR(0x448187);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44818f;}}
}
B448189:L448189:{c.instructions+=2;NFSU2_TR(0x448189);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(R+28))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B44818d:{NFSU2_TR(0x44818d);
if(r1(R+518)){{goto L44819a;}}
}
B44818f:L44818f:{c.instructions+=4;NFSU2_TR(0x44818f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B448190:{NFSU2_TR(0x448190);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x14ull))));
}
B448193:{NFSU2_TR(0x448193);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B448196:{NFSU2_TR(0x448196);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x448184u);}goto L448184;}}
}
B448198:L448198:{c.instructions+=1;NFSU2_TR(0x448198);
{goto L4481a4;}
}
B44819a:L44819a:{c.instructions+=4;NFSU2_TR(0x44819a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B44819d:{NFSU2_TR(0x44819d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4481a0:{NFSU2_TR(0x4481a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4481a2:{NFSU2_TR(0x4481a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4481ce;}}
}
B4481a4:L4481a4:{c.instructions+=13;NFSU2_TR(0x4481a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4481a7:{NFSU2_TR(0x4481a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4481aa:{NFSU2_TR(0x4481aa);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x1ull));
s4(u32(r4(U+8)),r4(U+12));
}
B4481b2:{NFSU2_TR(0x4481b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4481b5:{NFSU2_TR(0x4481b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4481b8:{NFSU2_TR(0x4481b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4481bb:{NFSU2_TR(0x4481bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4481be:{NFSU2_TR(0x4481be);
w4(R+4,u32(r2(R+28)));
}
B4481c1:{NFSU2_TR(0x4481c1);
w4(R+8,u32(r2(R+24)));
}
B4481c4:{NFSU2_TR(0x4481c4);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B4481c7:{NFSU2_TR(0x4481c7);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B4481c9:{NFSU2_TR(0x4481c9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4481cb:{NFSU2_TR(0x4481cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B4481ce:L4481ce:{c.instructions+=6;NFSU2_TR(0x4481ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4481d2:{NFSU2_TR(0x4481d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4481d6:{NFSU2_TR(0x4481d6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4481d7:{NFSU2_TR(0x4481d7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4481d9:{NFSU2_TR(0x4481d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4481dd:{NFSU2_TR(0x4481dd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x448160u);}goto L448160;}}
}
B4481df:L4481df:{c.instructions+=1;NFSU2_TR(0x4481df);
w4(R+12,u32(0x7ec1fcull));
}
B4481e4:L4481e4:{c.instructions+=5;NFSU2_TR(0x4481e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4481e7:{NFSU2_TR(0x4481e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4481e9:{NFSU2_TR(0x4481e9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4481eb:{NFSU2_TR(0x4481eb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4481ed:{NFSU2_TR(0x4481ed);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44820d;}}
}
B4481ef:L4481ef:{c.instructions+=2;NFSU2_TR(0x4481ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4481f2:{NFSU2_TR(0x4481f2);
__builtin_memmove((R+4),(R+28),4);
}
B4481f4:L4481f4:{c.instructions+=2;NFSU2_TR(0x4481f4);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+24))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4481f6:{NFSU2_TR(0x4481f6);
if(r1(R+518)){{goto L448203;}}
}
B4481f8:L4481f8:{c.instructions+=4;NFSU2_TR(0x4481f8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4481f9:{NFSU2_TR(0x4481f9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14ull))));
}
B4481fc:{NFSU2_TR(0x4481fc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B4481ff:{NFSU2_TR(0x4481ff);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4481f4u);}goto L4481f4;}}
}
B448201:L448201:{c.instructions+=1;NFSU2_TR(0x448201);
{goto L44820d;}
}
B448203:L448203:{c.instructions+=4;NFSU2_TR(0x448203);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B448206:{NFSU2_TR(0x448206);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B448209:{NFSU2_TR(0x448209);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44820b:{NFSU2_TR(0x44820b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44822a;}}
}
B44820d:L44820d:{c.instructions+=8;NFSU2_TR(0x44820d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B448210:{NFSU2_TR(0x448210);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B448213:{NFSU2_TR(0x448213);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x2ull));
s4(u32(r4(U+8)),r4(U+12));
}
B44821b:{NFSU2_TR(0x44821b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44821e:{NFSU2_TR(0x44821e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B448221:{NFSU2_TR(0x448221);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B448224:{NFSU2_TR(0x448224);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B448227:{NFSU2_TR(0x448227);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B44822a:L44822a:{c.instructions+=3;NFSU2_TR(0x44822a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x14ull))));
}
B44822d:{NFSU2_TR(0x44822d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7ec274ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ec274ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B448233:{NFSU2_TR(0x448233);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4481e4u);}goto L4481e4;}}
}
B448235:L448235:{c.instructions+=4;NFSU2_TR(0x448235);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448237:{NFSU2_TR(0x448237);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448239:{NFSU2_TR(0x448239);
u8 U[4];
w4(U+0,u32(0x32283a11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44823e:{NFSU2_TR(0x44823e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x448243ull));
TAIL_STATIC(0x4901d0u,490);
}
B448243:L448243:{c.instructions+=5;NFSU2_TR(0x448243);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448245:{NFSU2_TR(0x448245);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448247:{NFSU2_TR(0x448247);
u8 U[4];
w4(U+0,u32(0x317ec0f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44824c:{NFSU2_TR(0x44824c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B448252:{NFSU2_TR(0x448252);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x448257ull));
TAIL_STATIC(0x4901d0u,490);
}
B448257:L448257:{c.instructions+=5;NFSU2_TR(0x448257);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448259:{NFSU2_TR(0x448259);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44825b:{NFSU2_TR(0x44825b);
u8 U[4];
w4(U+0,u32(0x8f8d5fdbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448260:{NFSU2_TR(0x448260);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B448266:{NFSU2_TR(0x448266);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44826bull));
TAIL_STATIC(0x4901d0u,490);
}
B44826b:L44826b:{c.instructions+=8;NFSU2_TR(0x44826b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B44826e:{NFSU2_TR(0x44826e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44826f:{NFSU2_TR(0x44826f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B448270:{NFSU2_TR(0x448270);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B448276:{NFSU2_TR(0x448276);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B448277:{NFSU2_TR(0x448277);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B448278:{NFSU2_TR(0x448278);
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
B44827b:{NFSU2_TR(0x44827b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B448280:L448280:{c.instructions+=10;NFSU2_TR(0x448280);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448281:{NFSU2_TR(0x448281);
__builtin_memmove((R+20),(R+16),4);
}
B448283:{NFSU2_TR(0x448283);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B448286:{NFSU2_TR(0x448286);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x164ull))));
}
B44828c:{NFSU2_TR(0x44828c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44828d:{NFSU2_TR(0x44828d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B448290:{NFSU2_TR(0x448290);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B448292:{NFSU2_TR(0x448292);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448293:{NFSU2_TR(0x448293);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448294:{NFSU2_TR(0x448294);
if(r1(R+518)){{goto L4486a4;}}
}
B44829a:L44829a:{c.instructions+=3;NFSU2_TR(0x44829a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B44829d:{NFSU2_TR(0x44829d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44829f:{NFSU2_TR(0x44829f);
if(r1(R+518)){{goto L4486a4;}}
}
B4482a5:L4482a5:{c.instructions+=3;NFSU2_TR(0x4482a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4482a8:{NFSU2_TR(0x4482a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4482aa:{NFSU2_TR(0x4482aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4482b9;}}
}
B4482ac:L4482ac:{c.instructions+=3;NFSU2_TR(0x4482ac);
__builtin_memmove((R+0),gp(0x8900b4),4);
}
B4482b1:{NFSU2_TR(0x4482b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4482b3:{NFSU2_TR(0x4482b3);
if(r1(R+518)){{goto L4486a4;}}
}
B4482b9:L4482b9:{c.instructions+=3;NFSU2_TR(0x4482b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4482bc:{NFSU2_TR(0x4482bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4482bd:{NFSU2_TR(0x4482bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4482c2ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B4482c2:L4482c2:{c.instructions+=3;NFSU2_TR(0x4482c2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4482c5:{NFSU2_TR(0x4482c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4482c7:{NFSU2_TR(0x4482c7);
if(r1(R+518)){{goto L4486a4;}}
}
B4482cd:L4482cd:{c.instructions+=3;NFSU2_TR(0x4482cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4482d0:{NFSU2_TR(0x4482d0);
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
B4482d2:{NFSU2_TR(0x4482d2);
if(r1(R+518)){{goto L4486a4;}}
}
B4482d8:L4482d8:{c.instructions+=8;NFSU2_TR(0x4482d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4482db:{NFSU2_TR(0x4482db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4482dc:{NFSU2_TR(0x4482dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4482e2:{NFSU2_TR(0x4482e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4482e3:{NFSU2_TR(0x4482e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4482ea:{NFSU2_TR(0x4482ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4482eb:{NFSU2_TR(0x4482eb);
u8 U[5];
w4(U+0,u32(u32(u32(0x23ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4482f0:{NFSU2_TR(0x4482f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4482f5ull));
TAIL_STATIC(0x401340u,401);
}
B4482f5:L4482f5:{c.instructions+=5;NFSU2_TR(0x4482f5);
u8 U[4];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4482fc:{NFSU2_TR(0x4482fc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4482fd:{NFSU2_TR(0x4482fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B448301:{NFSU2_TR(0x448301);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448302:{NFSU2_TR(0x448302);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x448307ull));
TAIL_STATIC(0x5baf90u,5ba);
}
B448307:L448307:{c.instructions+=77;NFSU2_TR(0x448307);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44830b:{NFSU2_TR(0x44830b);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44830e:{NFSU2_TR(0x44830e);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B448312:{NFSU2_TR(0x448312);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B448315:{NFSU2_TR(0x448315);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B448317:{NFSU2_TR(0x448317);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44831b:{NFSU2_TR(0x44831b);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44831e:{NFSU2_TR(0x44831e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B448320:{NFSU2_TR(0x448320);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B448327:{NFSU2_TR(0x448327);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44832b:{NFSU2_TR(0x44832b);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44832e:{NFSU2_TR(0x44832e);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B448332:{NFSU2_TR(0x448332);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B448335:{NFSU2_TR(0x448335);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B448337:{NFSU2_TR(0x448337);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44833b:{NFSU2_TR(0x44833b);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44833e:{NFSU2_TR(0x44833e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B448340:{NFSU2_TR(0x448340);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B448347:{NFSU2_TR(0x448347);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44834b:{NFSU2_TR(0x44834b);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44834e:{NFSU2_TR(0x44834e);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B448352:{NFSU2_TR(0x448352);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B448355:{NFSU2_TR(0x448355);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B448357:{NFSU2_TR(0x448357);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44835b:{NFSU2_TR(0x44835b);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44835e:{NFSU2_TR(0x44835e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B448360:{NFSU2_TR(0x448360);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B448367:{NFSU2_TR(0x448367);
{u32 ea_=u32(r4(R+16)+u32(300u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44836e:{NFSU2_TR(0x44836e);
u8 U[8];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B448375:{NFSU2_TR(0x448375);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B448377:{NFSU2_TR(0x448377);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44837e:{NFSU2_TR(0x44837e);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B448385:{NFSU2_TR(0x448385);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44838c:{NFSU2_TR(0x44838c);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B448390:{NFSU2_TR(0x448390);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B448393:{NFSU2_TR(0x448393);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B448397:{NFSU2_TR(0x448397);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44839a:{NFSU2_TR(0x44839a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44839c:{NFSU2_TR(0x44839c);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4483a0:{NFSU2_TR(0x4483a0);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4483a3:{NFSU2_TR(0x4483a3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4483a5:{NFSU2_TR(0x4483a5);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4483ac:{NFSU2_TR(0x4483ac);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4483b0:{NFSU2_TR(0x4483b0);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4483b3:{NFSU2_TR(0x4483b3);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4483b7:{NFSU2_TR(0x4483b7);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4483ba:{NFSU2_TR(0x4483ba);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4483bc:{NFSU2_TR(0x4483bc);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4483c0:{NFSU2_TR(0x4483c0);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4483c3:{NFSU2_TR(0x4483c3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4483c5:{NFSU2_TR(0x4483c5);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4483cc:{NFSU2_TR(0x4483cc);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4483d0:{NFSU2_TR(0x4483d0);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4483d3:{NFSU2_TR(0x4483d3);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4483d7:{NFSU2_TR(0x4483d7);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4483da:{NFSU2_TR(0x4483da);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4483dc:{NFSU2_TR(0x4483dc);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4483e0:{NFSU2_TR(0x4483e0);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4483e3:{NFSU2_TR(0x4483e3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4483e5:{NFSU2_TR(0x4483e5);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4483ec:{NFSU2_TR(0x4483ec);
{u32 ea_=u32(r4(R+16)+u32(300u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4483f3:{NFSU2_TR(0x4483f3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4483f5:{NFSU2_TR(0x4483f5);
{u32 ea_=u32(r4(R+16)+u32(244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4483fc:{NFSU2_TR(0x4483fc);
{u32 ea_=u32(r4(R+16)+u32(300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B448403:{NFSU2_TR(0x448403);
{u32 ea_=u32(r4(R+16)+u32(244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44840a:{NFSU2_TR(0x44840a);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B448411:{NFSU2_TR(0x448411);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B448418:{NFSU2_TR(0x448418);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44841a:{NFSU2_TR(0x44841a);
u8 U[4];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B448421:{NFSU2_TR(0x448421);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B448428:{NFSU2_TR(0x448428);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448429:{NFSU2_TR(0x448429);
u8 U[4];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B448430:{NFSU2_TR(0x448430);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448431:{NFSU2_TR(0x448431);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B448438:{NFSU2_TR(0x448438);
{u32 ea_=u32(r4(R+16)+u32(228u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44843f:{NFSU2_TR(0x44843f);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B448446:{NFSU2_TR(0x448446);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44844bull));
TAIL_STATIC(0x43cf10u,43c);
}
B44844b:L44844b:{c.instructions+=38;NFSU2_TR(0x44844b);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44844f:{NFSU2_TR(0x44844f);
{u32 ea_=u32(r4(R+24)+u32(488u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B448455:{NFSU2_TR(0x448455);
u8 U[4];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44845c:{NFSU2_TR(0x44845c);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B448460:{NFSU2_TR(0x448460);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448461:{NFSU2_TR(0x448461);
{u32 ea_=u32(r4(R+24)+u32(484u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B448467:{NFSU2_TR(0x448467);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44846e:{NFSU2_TR(0x44846e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44846f:{NFSU2_TR(0x44846f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B448471:{NFSU2_TR(0x448471);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B448475:{NFSU2_TR(0x448475);
{u32 ea_=u32(r4(R+24)+u32(480u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44847b:{NFSU2_TR(0x44847b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44847d:{NFSU2_TR(0x44847d);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B448484:{NFSU2_TR(0x448484);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B448488:{NFSU2_TR(0x448488);
{u32 ea_=u32(r4(R+24)+u32(484u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44848e:{NFSU2_TR(0x44848e);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B448495:{NFSU2_TR(0x448495);
{u32 ea_=u32(r4(R+24)+u32(488u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44849b:{NFSU2_TR(0x44849b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44849d:{NFSU2_TR(0x44849d);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4484a1:{NFSU2_TR(0x4484a1);
{u32 ea_=u32(r4(R+24)+u32(480u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4484a7:{NFSU2_TR(0x4484a7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4484a9:{NFSU2_TR(0x4484a9);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4484b0:{NFSU2_TR(0x4484b0);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4484b4:{NFSU2_TR(0x4484b4);
{u32 ea_=u32(r4(R+24)+u32(484u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4484ba:{NFSU2_TR(0x4484ba);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4484c1:{NFSU2_TR(0x4484c1);
{u32 ea_=u32(r4(R+24)+u32(488u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4484c7:{NFSU2_TR(0x4484c7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4484c9:{NFSU2_TR(0x4484c9);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4484cd:{NFSU2_TR(0x4484cd);
{u32 ea_=u32(r4(R+24)+u32(480u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4484d3:{NFSU2_TR(0x4484d3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4484d5:{NFSU2_TR(0x4484d5);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4484dc:{NFSU2_TR(0x4484dc);
{u32 ea_=u32(r4(R+16)+u32(268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4484e3:{NFSU2_TR(0x4484e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4484ea:{NFSU2_TR(0x4484ea);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4484ec:{NFSU2_TR(0x4484ec);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4484f3:{NFSU2_TR(0x4484f3);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4484fa:{NFSU2_TR(0x4484fa);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B448501:{NFSU2_TR(0x448501);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x448506ull));
TAIL_STATIC(0x43cf10u,43c);
}
B448506:L448506:{c.instructions+=6;NFSU2_TR(0x448506);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B448509:{NFSU2_TR(0x448509);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44850d:{NFSU2_TR(0x44850d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44850e:{NFSU2_TR(0x44850e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448510:{NFSU2_TR(0x448510);
__builtin_memmove((R+4),(R+12),4);
}
B448512:{NFSU2_TR(0x448512);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x448517ull));
TAIL_STATIC(0x447a30u,447);
}
B448517:L448517:{c.instructions+=5;NFSU2_TR(0x448517);
u8 U[4];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44851e:{NFSU2_TR(0x44851e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44851f:{NFSU2_TR(0x44851f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448521:{NFSU2_TR(0x448521);
__builtin_memmove((R+4),(R+12),4);
}
B448523:{NFSU2_TR(0x448523);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x448528ull));
TAIL_STATIC(0x447a80u,447);
}
B448528:L448528:{c.instructions+=14;NFSU2_TR(0x448528);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44852f:{NFSU2_TR(0x44852f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B448533:{NFSU2_TR(0x448533);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44853a:{NFSU2_TR(0x44853a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44853b:{NFSU2_TR(0x44853b);
u8 U[4];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B448542:{NFSU2_TR(0x448542);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B448549:{NFSU2_TR(0x448549);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B448550:{NFSU2_TR(0x448550);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448551:{NFSU2_TR(0x448551);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B448555:{NFSU2_TR(0x448555);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44855c:{NFSU2_TR(0x44855c);
{u32 ea_=u32(r4(R+16)+u32(272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B448563:{NFSU2_TR(0x448563);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B448567:{NFSU2_TR(0x448567);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44856e:{NFSU2_TR(0x44856e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x448573ull));
TAIL_STATIC(0x43cf10u,43c);
}
B448573:L448573:{c.instructions+=6;NFSU2_TR(0x448573);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B448576:{NFSU2_TR(0x448576);
u8 U[4];
w4(U+0,u32(u32(u32(0x160ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44857d:{NFSU2_TR(0x44857d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44857e:{NFSU2_TR(0x44857e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448580:{NFSU2_TR(0x448580);
__builtin_memmove((R+4),(R+12),4);
}
B448582:{NFSU2_TR(0x448582);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x448587ull));
TAIL_STATIC(0x447a30u,447);
}
B448587:L448587:{c.instructions+=7;NFSU2_TR(0x448587);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44858b:{NFSU2_TR(0x44858b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44858c:{NFSU2_TR(0x44858c);
u8 U[4];
w4(U+0,u32(u32(u32(0x164ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B448593:{NFSU2_TR(0x448593);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448594:{NFSU2_TR(0x448594);
u8 U[4];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44859b:{NFSU2_TR(0x44859b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44859c:{NFSU2_TR(0x44859c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4485a1ull));
TAIL_STATIC(0x4011b0u,401);
}
B4485a1:L4485a1:{c.instructions+=5;NFSU2_TR(0x4485a1);
u8 U[4];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4485a8:{NFSU2_TR(0x4485a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4485a9:{NFSU2_TR(0x4485a9);
u8 U[4];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4485b0:{NFSU2_TR(0x4485b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4485b1:{NFSU2_TR(0x4485b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4485b6ull));
TAIL_STATIC(0x43cf10u,43c);
}
B4485b6:L4485b6:{c.instructions+=37;NFSU2_TR(0x4485b6);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4485ba:{NFSU2_TR(0x4485ba);
{u32 ea_=u32(r4(R+16)+u32(340u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4485c1:{NFSU2_TR(0x4485c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5c4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4485c7:{NFSU2_TR(0x4485c7);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4485cb:{NFSU2_TR(0x4485cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4485ce:{NFSU2_TR(0x4485ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4485d0:{NFSU2_TR(0x4485d0);
{u32 ea_=u32(r4(R+16)+u32(304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4485d7:{NFSU2_TR(0x4485d7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4485d9:{NFSU2_TR(0x4485d9);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4485dd:{NFSU2_TR(0x4485dd);
{u32 ea_=u32(r4(R+16)+u32(288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4485e4:{NFSU2_TR(0x4485e4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4485e6:{NFSU2_TR(0x4485e6);
{u32 ea_=u32(r4(R+16)+u32(336u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4485ed:{NFSU2_TR(0x4485ed);
{u32 ea_=u32(r4(R+16)+u32(324u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4485f4:{NFSU2_TR(0x4485f4);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4485f8:{NFSU2_TR(0x4485f8);
{u32 ea_=u32(r4(R+16)+u32(308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4485ff:{NFSU2_TR(0x4485ff);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B448603:{NFSU2_TR(0x448603);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B448605:{NFSU2_TR(0x448605);
{u32 ea_=u32(r4(R+16)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44860c:{NFSU2_TR(0x44860c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B448610:{NFSU2_TR(0x448610);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B448612:{NFSU2_TR(0x448612);
{u32 ea_=u32(r4(R+16)+u32(340u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B448619:{NFSU2_TR(0x448619);
{u32 ea_=u32(r4(R+16)+u32(328u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B448620:{NFSU2_TR(0x448620);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B448624:{NFSU2_TR(0x448624);
{u32 ea_=u32(r4(R+16)+u32(312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44862b:{NFSU2_TR(0x44862b);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44862f:{NFSU2_TR(0x44862f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B448631:{NFSU2_TR(0x448631);
{u32 ea_=u32(r4(R+16)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B448638:{NFSU2_TR(0x448638);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44863c:{NFSU2_TR(0x44863c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44863e:{NFSU2_TR(0x44863e);
{u32 ea_=u32(r4(R+16)+u32(344u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B448645:{NFSU2_TR(0x448645);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44864c:{NFSU2_TR(0x44864c);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B448653:{NFSU2_TR(0x448653);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B448655:{NFSU2_TR(0x448655);
u8 U[8];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44865c:{NFSU2_TR(0x44865c);
{u32 ea_=u32(r4(R+16)+u32(240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B448663:{NFSU2_TR(0x448663);
{u32 ea_=u32(r4(R+16)+u32(244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44866a:{NFSU2_TR(0x44866a);
if(r1(R+518)){{goto L448687;}}
}
B44866c:L44866c:{c.instructions+=8;NFSU2_TR(0x44866c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44866e:{NFSU2_TR(0x44866e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448670:{NFSU2_TR(0x448670);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448672:{NFSU2_TR(0x448672);
u8 U[4];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B448679:{NFSU2_TR(0x448679);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44867a:{NFSU2_TR(0x44867a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B44867d:{NFSU2_TR(0x44867d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44867e:{NFSU2_TR(0x44867e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x448683ull));
TAIL_STATIC(0x5e7ed0u,5e7);
}
B448683:L448683:{c.instructions+=2;NFSU2_TR(0x448683);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B448685:{NFSU2_TR(0x448685);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4486a4;}}
}
B448687:L448687:{c.instructions+=6;NFSU2_TR(0x448687);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448688:{NFSU2_TR(0x448688);
u8 U[4];
w4(U+0,u32(0x3f000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44868d:{NFSU2_TR(0x44868d);
u8 U[4];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B448694:{NFSU2_TR(0x448694);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448695:{NFSU2_TR(0x448695);
__builtin_memmove((R+4),gp(0x890080),4);
}
B44869b:{NFSU2_TR(0x44869b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4486a0ull));
TAIL_STATIC(0x5f14f0u,5f1);
}
B4486a0:L4486a0:{c.instructions+=2;NFSU2_TR(0x4486a0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4486a2:{NFSU2_TR(0x4486a2);
if(r1(R+518)){{goto L4486af;}}
}
B4486a4:L4486a4:{c.instructions+=7;NFSU2_TR(0x4486a4);
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
B4486a6:{NFSU2_TR(0x4486a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4486a7:{NFSU2_TR(0x4486a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4486a8:{NFSU2_TR(0x4486a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4486a9:{NFSU2_TR(0x4486a9);
__builtin_memmove((R+16),(R+20),4);
}
B4486ab:{NFSU2_TR(0x4486ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4486ac:{NFSU2_TR(0x4486ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4486af:L4486af:{c.instructions+=6;NFSU2_TR(0x4486af);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4486b6:{NFSU2_TR(0x4486b6);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4486bd:{NFSU2_TR(0x4486bd);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4486c3:{NFSU2_TR(0x4486c3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4486c5:{NFSU2_TR(0x4486c5);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4486c8:{NFSU2_TR(0x4486c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L448809;}}
}
B4486ce:L4486ce:{c.instructions+=19;NFSU2_TR(0x4486ce);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4486d5:{NFSU2_TR(0x4486d5);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4486dc:{NFSU2_TR(0x4486dc);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4486e3:{NFSU2_TR(0x4486e3);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4486ea:{NFSU2_TR(0x4486ea);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4486ec:{NFSU2_TR(0x4486ec);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4486ee:{NFSU2_TR(0x4486ee);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4486f5:{NFSU2_TR(0x4486f5);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4486fc:{NFSU2_TR(0x4486fc);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B448703:{NFSU2_TR(0x448703);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44870a:{NFSU2_TR(0x44870a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44870c:{NFSU2_TR(0x44870c);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B448713:{NFSU2_TR(0x448713);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44871a:{NFSU2_TR(0x44871a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44871c:{NFSU2_TR(0x44871c);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B448720:{NFSU2_TR(0x448720);
{u32 ea_=u32(u32(7895900u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B448726:{NFSU2_TR(0x448726);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B448728:{NFSU2_TR(0x448728);
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
B44872b:{NFSU2_TR(0x44872b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L448809;}}
}
B448731:L448731:{c.instructions+=4;NFSU2_TR(0x448731);
{u32 ea_=u32(u32(7895896u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B448737:{NFSU2_TR(0x448737);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B448739:{NFSU2_TR(0x448739);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44873c:{NFSU2_TR(0x44873c);
if(r1(R+514)){{goto L448754;}}
}
B44873e:L44873e:{c.instructions+=4;NFSU2_TR(0x44873e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B448744:{NFSU2_TR(0x448744);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B448746:{NFSU2_TR(0x448746);
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
B448749:{NFSU2_TR(0x448749);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4487f7;}}
}
B44874f:L44874f:{c.instructions+=1;NFSU2_TR(0x44874f);
{goto L4487e6;}
}
B448754:L448754:{c.instructions+=5;NFSU2_TR(0x448754);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B44875b:{NFSU2_TR(0x44875b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44875d:{NFSU2_TR(0x44875d);
w2(R+24,shr<u16>(r2(R+24),u64(u32(0x1ull))));
}
B448760:{NFSU2_TR(0x448760);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448761:{NFSU2_TR(0x448761);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x448766ull));
TAIL_STATIC(0x440f50u,440);
}
B448766:L448766:{c.instructions+=4;NFSU2_TR(0x448766);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44876a:{NFSU2_TR(0x44876a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44876d:{NFSU2_TR(0x44876d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44876e:{NFSU2_TR(0x44876e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x448773ull));
TAIL_STATIC(0x443d20u,443);
}
B448773:L448773:{c.instructions+=3;NFSU2_TR(0x448773);
w2(R+0,shr<u16>(r2(R+0),u64(u32(0x1ull))));
}
B448776:{NFSU2_TR(0x448776);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448777:{NFSU2_TR(0x448777);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44877cull));
TAIL_STATIC(0x440f50u,440);
}
B44877c:L44877c:{c.instructions+=4;NFSU2_TR(0x44877c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B448780:{NFSU2_TR(0x448780);
u8 U[4];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B448787:{NFSU2_TR(0x448787);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448788:{NFSU2_TR(0x448788);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44878dull));
TAIL_STATIC(0x440f70u,440);
}
B44878d:L44878d:{c.instructions+=6;NFSU2_TR(0x44878d);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B448791:{NFSU2_TR(0x448791);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B448795:{NFSU2_TR(0x448795);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448796:{NFSU2_TR(0x448796);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B44879c:{NFSU2_TR(0x44879c);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4487a0:{NFSU2_TR(0x4487a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4487a5ull));
TAIL_STATIC(0x440f70u,440);
}
B4487a5:L4487a5:{c.instructions+=11;NFSU2_TR(0x4487a5);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4487a9:{NFSU2_TR(0x4487a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4487ad:{NFSU2_TR(0x4487ad);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B4487b3:{NFSU2_TR(0x4487b3);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4487b7:{NFSU2_TR(0x4487b7);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4487bb:{NFSU2_TR(0x4487bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4487bf:{NFSU2_TR(0x4487bf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4487c0:{NFSU2_TR(0x4487c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4487c1:{NFSU2_TR(0x4487c1);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4487c3:{NFSU2_TR(0x4487c3);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4487ca:{NFSU2_TR(0x4487ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4487cfull));
TAIL_STATIC(0x401050u,401);
}
B4487cf:L4487cf:{c.instructions+=6;NFSU2_TR(0x4487cf);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B4487d6:{NFSU2_TR(0x4487d6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4487d9:{NFSU2_TR(0x4487d9);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4487df:{NFSU2_TR(0x4487df);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4487e1:{NFSU2_TR(0x4487e1);
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
B4487e4:{NFSU2_TR(0x4487e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44880b;}}
}
B4487e6:L4487e6:{c.instructions+=5;NFSU2_TR(0x4487e6);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4487ea:{NFSU2_TR(0x4487ea);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4487f0:{NFSU2_TR(0x4487f0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4487f2:{NFSU2_TR(0x4487f2);
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
B4487f5:{NFSU2_TR(0x4487f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44880b;}}
}
B4487f7:L4487f7:{c.instructions+=8;NFSU2_TR(0x4487f7);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4487fc:{NFSU2_TR(0x4487fc);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B448800:{NFSU2_TR(0x448800);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B448801:{NFSU2_TR(0x448801);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B448802:{NFSU2_TR(0x448802);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B448803:{NFSU2_TR(0x448803);
__builtin_memmove((R+16),(R+20),4);
}
B448805:{NFSU2_TR(0x448805);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B448806:{NFSU2_TR(0x448806);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B448809:L448809:{c.instructions+=1;NFSU2_TR(0x448809);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44880b:L44880b:{c.instructions+=7;NFSU2_TR(0x44880b);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B44880f:{NFSU2_TR(0x44880f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B448810:{NFSU2_TR(0x448810);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B448811:{NFSU2_TR(0x448811);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B448812:{NFSU2_TR(0x448812);
__builtin_memmove((R+16),(R+20),4);
}
B448814:{NFSU2_TR(0x448814);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B448815:{NFSU2_TR(0x448815);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B448820:L448820:{c.instructions+=5;NFSU2_TR(0x448820);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448821:{NFSU2_TR(0x448821);
__builtin_memmove((R+20),(R+4),4);
}
B448823:{NFSU2_TR(0x448823);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B448829:{NFSU2_TR(0x448829);
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
B44882c:{NFSU2_TR(0x44882c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L448a33;}}
}
B448832:L448832:{c.instructions+=4;NFSU2_TR(0x448832);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448833:{NFSU2_TR(0x448833);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B448837:{NFSU2_TR(0x448837);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B448839:{NFSU2_TR(0x448839);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L448a32;}}
}
B44883f:L44883f:{c.instructions+=2;NFSU2_TR(0x44883f);
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
B448841:{NFSU2_TR(0x448841);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L448a32;}}
}
B448847:L448847:{c.instructions+=3;NFSU2_TR(0x448847);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B44884b:{NFSU2_TR(0x44884b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44884d:{NFSU2_TR(0x44884d);
if(r1(R+518)){{goto L448880;}}
}
B44884f:L44884f:{c.instructions+=6;NFSU2_TR(0x44884f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B448853:{NFSU2_TR(0x448853);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448854:{NFSU2_TR(0x448854);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B448859:{NFSU2_TR(0x448859);
u8 U[5];
w4(U+0,u32(u32(u32(0x15ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B44885d:{NFSU2_TR(0x44885d);
u8 U[6];
w4(U+0,u32(u32(u32(0x16ull))+u32(r4(R+16))));
w2(U+4,u16(0x8cull));
s2(u32(r4(U+0)),r2(U+4));
}
B448864:{NFSU2_TR(0x448864);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x448869ull));
TAIL_STATIC(0x447970u,447);
}
B448869:L448869:{c.instructions+=6;NFSU2_TR(0x448869);
__builtin_memmove((R+4),(R+12),4);
}
B44886b:{NFSU2_TR(0x44886b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B448871:{NFSU2_TR(0x448871);
u8 U[12];
w4(U+0,u32(u32(u32(0x19cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B448878:{NFSU2_TR(0x448878);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448879:{NFSU2_TR(0x448879);
__builtin_memmove((R+4),(R+20),4);
}
B44887b:{NFSU2_TR(0x44887b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x448880ull));
TAIL_STATIC(0x4479d0u,447);
}
B448880:L448880:{c.instructions+=5;NFSU2_TR(0x448880);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B448886:{NFSU2_TR(0x448886);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B448888:{NFSU2_TR(0x448888);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B448889:{NFSU2_TR(0x448889);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44888a:{NFSU2_TR(0x44888a);
if(r1(R+518)){{goto L4489b7;}}
}
B448890:L448890:{c.instructions+=50;NFSU2_TR(0x448890);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B448896:{NFSU2_TR(0x448896);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B44889c:{NFSU2_TR(0x44889c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B44889f:{NFSU2_TR(0x44889f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4488a5:{NFSU2_TR(0x4488a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4488ab:{NFSU2_TR(0x4488ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4488b1:{NFSU2_TR(0x4488b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4488b7:{NFSU2_TR(0x4488b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4488bd:{NFSU2_TR(0x4488bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4488c3:{NFSU2_TR(0x4488c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4488c9:{NFSU2_TR(0x4488c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4488cf:{NFSU2_TR(0x4488cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4488d5:{NFSU2_TR(0x4488d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4488db:{NFSU2_TR(0x4488db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4488e1:{NFSU2_TR(0x4488e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4488e7:{NFSU2_TR(0x4488e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4488ed:{NFSU2_TR(0x4488ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4488f3:{NFSU2_TR(0x4488f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4488f9:{NFSU2_TR(0x4488f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4488ff:{NFSU2_TR(0x4488ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B448905:{NFSU2_TR(0x448905);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44890b:{NFSU2_TR(0x44890b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B448911:{NFSU2_TR(0x448911);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x170ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B448917:{NFSU2_TR(0x448917);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x200ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44891d:{NFSU2_TR(0x44891d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x178ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B448923:{NFSU2_TR(0x448923);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x208ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B448929:{NFSU2_TR(0x448929);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44892f:{NFSU2_TR(0x44892f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B448935:{NFSU2_TR(0x448935);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x185ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B44893b:{NFSU2_TR(0x44893b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B448941:{NFSU2_TR(0x448941);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x187ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B448947:{NFSU2_TR(0x448947);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x211ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B44894d:{NFSU2_TR(0x44894d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x189ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B448953:{NFSU2_TR(0x448953);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x215ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B448959:{NFSU2_TR(0x448959);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18dull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B44895f:{NFSU2_TR(0x44895f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x216ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B448965:{NFSU2_TR(0x448965);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18eull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B44896b:{NFSU2_TR(0x44896b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x217ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B448971:{NFSU2_TR(0x448971);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18full))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B448977:{NFSU2_TR(0x448977);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B44897d:{NFSU2_TR(0x44897d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x192ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B448983:{NFSU2_TR(0x448983);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B448989:{NFSU2_TR(0x448989);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x193ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B44898f:{NFSU2_TR(0x44898f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B448995:{NFSU2_TR(0x448995);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448996:{NFSU2_TR(0x448996);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x195ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B44899c:{NFSU2_TR(0x44899c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x224ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4489a2:{NFSU2_TR(0x4489a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x19cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4489a8:{NFSU2_TR(0x4489a8);
__builtin_memmove((R+0),(R+4),4);
}
B4489aa:{NFSU2_TR(0x4489aa);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B4489ad:L4489ad:{c.instructions+=1;NFSU2_TR(0x4489ad);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4489af;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4489adu);}goto L4489ad;}
}
B4489af:L4489af:{c.instructions+=2;NFSU2_TR(0x4489af);
__builtin_memmove((R+4),(R+0),4);
}
B4489b1:{NFSU2_TR(0x4489b1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B4489b4:L4489b4:{c.instructions+=1;NFSU2_TR(0x4489b4);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L4489b6;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4489b4u);}goto L4489b4;}
}
B4489b6:L4489b6:{c.instructions+=1;NFSU2_TR(0x4489b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4489b7:L4489b7:{c.instructions+=10;NFSU2_TR(0x4489b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4489bd:{NFSU2_TR(0x4489bd);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B4489be:{NFSU2_TR(0x4489be);
__builtin_memmove((R+0),(R+4),4);
}
B4489c0:{NFSU2_TR(0x4489c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4489c6:{NFSU2_TR(0x4489c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4489cc:{NFSU2_TR(0x4489cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B4489cf:{NFSU2_TR(0x4489cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4489d3:{NFSU2_TR(0x4489d3);
__builtin_memmove((R+4),(R+24),4);
}
B4489d5:{NFSU2_TR(0x4489d5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4489d7:{NFSU2_TR(0x4489d7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L448a00;}}
}
B4489d9:L4489d9:{c.instructions+=3;NFSU2_TR(0x4489d9);
__builtin_memmove((R+8),(R+4),4);
}
B4489db:{NFSU2_TR(0x4489db);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4489e1:{NFSU2_TR(0x4489e1);
u8 U[12];
w4(U+0,u32(u32(u32(0x1a8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B4489e8:L4489e8:{c.instructions+=5;NFSU2_TR(0x4489e8);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4489ea:{NFSU2_TR(0x4489ea);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4489ee:{NFSU2_TR(0x4489ee);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4489f0:{NFSU2_TR(0x4489f0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4489f3:{NFSU2_TR(0x4489f3);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L448a00;}}
}
B4489f5:L4489f5:{c.instructions+=4;NFSU2_TR(0x4489f5);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B4489f6:{NFSU2_TR(0x4489f6);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x88ull))));
}
B4489fc:{NFSU2_TR(0x4489fc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4489fe:{NFSU2_TR(0x4489fe);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4489e8u);}goto L4489e8;}}
}
B448a00:L448a00:{c.instructions+=4;NFSU2_TR(0x448a00);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B448a02:{NFSU2_TR(0x448a02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B448a08:{NFSU2_TR(0x448a08);
w4(R+0,u32(0x7ull));
}
B448a0d:{NFSU2_TR(0x448a0d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L448a1e;}}
}
B448a0f:L448a0f:{c.instructions+=2;NFSU2_TR(0x448a0f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B448a16:{NFSU2_TR(0x448a16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L448a1e;}}
}
B448a18:L448a18:{c.instructions+=1;NFSU2_TR(0x448a18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B448a1e:L448a1e:{c.instructions+=3;NFSU2_TR(0x448a1e);
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
B448a20:{NFSU2_TR(0x448a20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B448a21:{NFSU2_TR(0x448a21);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L448a32;}}
}
B448a23:L448a23:{c.instructions+=2;NFSU2_TR(0x448a23);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xaull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xaull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B448a2a:{NFSU2_TR(0x448a2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L448a32;}}
}
B448a2c:L448a2c:{c.instructions+=1;NFSU2_TR(0x448a2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B448a32:L448a32:{c.instructions+=1;NFSU2_TR(0x448a32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B448a33:L448a33:{c.instructions+=2;NFSU2_TR(0x448a33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B448a34:{NFSU2_TR(0x448a34);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B448a40:L448a40:{c.instructions+=12;NFSU2_TR(0x448a40);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448a41:{NFSU2_TR(0x448a41);
__builtin_memmove((R+20),(R+16),4);
}
B448a43:{NFSU2_TR(0x448a43);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B448a46:{NFSU2_TR(0x448a46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B448a49:{NFSU2_TR(0x448a49);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448a4a:{NFSU2_TR(0x448a4a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448a4b:{NFSU2_TR(0x448a4b);
__builtin_memmove((R+24),(R+4),4);
}
B448a4d:{NFSU2_TR(0x448a4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B448a53:{NFSU2_TR(0x448a53);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B448a55:{NFSU2_TR(0x448a55);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448a56:{NFSU2_TR(0x448a56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B448a59:{NFSU2_TR(0x448a59);
if(r1(R+518)){{goto L448a64;}}
}
B448a5b:L448a5b:{c.instructions+=2;NFSU2_TR(0x448a5b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B448a5e:{NFSU2_TR(0x448a5e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L448c56;}}
}
B448a64:L448a64:{c.instructions+=37;NFSU2_TR(0x448a64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B448a67:{NFSU2_TR(0x448a67);
__builtin_memmove((R+0),(R+4),4);
}
B448a69:{NFSU2_TR(0x448a69);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x22ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B448a6c:{NFSU2_TR(0x448a6c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B448a72:{NFSU2_TR(0x448a72);
u8 U[13];
w4(U+0,u32(u32(u32(0x1a0ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B448a79:{NFSU2_TR(0x448a79);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B448a7f:{NFSU2_TR(0x448a7f);
u8 U[13];
w4(U+0,u32(u32(u32(0x1a1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B448a86:{NFSU2_TR(0x448a86);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd5ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B448a8c:{NFSU2_TR(0x448a8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B448a8f:{NFSU2_TR(0x448a8f);
u8 U[16];
w4(U+0,u32(u32(u32(0x1acull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B448a96:{NFSU2_TR(0x448a96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B448a9c:{NFSU2_TR(0x448a9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B448a9f:{NFSU2_TR(0x448a9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B448aa2:{NFSU2_TR(0x448aa2);
u8 U[16];
w4(U+0,u32(u32(u32(0x1b4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B448aa9:{NFSU2_TR(0x448aa9);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B448aab:{NFSU2_TR(0x448aab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B448ab1:{NFSU2_TR(0x448ab1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B448ab7:{NFSU2_TR(0x448ab7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B448abd:{NFSU2_TR(0x448abd);
u8 U[12];
w4(U+0,u32(u32(u32(0x6full))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B448ac1:{NFSU2_TR(0x448ac1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B448ac4:{NFSU2_TR(0x448ac4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B448ac7:{NFSU2_TR(0x448ac7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B448acd:{NFSU2_TR(0x448acd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B448ad3:{NFSU2_TR(0x448ad3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B448ad9:{NFSU2_TR(0x448ad9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B448adf:{NFSU2_TR(0x448adf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B448ae5:{NFSU2_TR(0x448ae5);
u8 U[12];
w4(U+0,u32(u32(u32(0x75ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B448ae9:{NFSU2_TR(0x448ae9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B448aec:{NFSU2_TR(0x448aec);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B448aef:{NFSU2_TR(0x448aef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B448af5:{NFSU2_TR(0x448af5);
u8 U[16];
w4(U+0,u32(u32(u32(0x1ecull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B448afc:{NFSU2_TR(0x448afc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B448b02:{NFSU2_TR(0x448b02);
u8 U[16];
w4(U+0,u32(u32(u32(0x1e4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B448b09:{NFSU2_TR(0x448b09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B448b0f:{NFSU2_TR(0x448b0f);
u8 U[13];
w4(U+0,u32(u32(u32(0x19cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B448b16:{NFSU2_TR(0x448b16);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B448b18:{NFSU2_TR(0x448b18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L448c56;}}
}
B448b1e:L448b1e:{c.instructions+=3;NFSU2_TR(0x448b1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B448b24:{NFSU2_TR(0x448b24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B448b27:{NFSU2_TR(0x448b27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x448b2cull));
TAIL_STATIC(0x5eb400u,5eb);
}
B448b2c:L448b2c:{c.instructions+=3;NFSU2_TR(0x448b2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B448b32:{NFSU2_TR(0x448b32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448b33:{NFSU2_TR(0x448b33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x448b38ull));
TAIL_STATIC(0x5ecca0u,5ec);
}
B448b38:L448b38:{c.instructions+=3;NFSU2_TR(0x448b38);
__builtin_memmove((R+12),(R+0),4);
}
B448b3a:{NFSU2_TR(0x448b3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B448b3c:{NFSU2_TR(0x448b3c);
if(r1(R+518)){{goto L448c56;}}
}
B448b42:L448b42:{c.instructions+=4;NFSU2_TR(0x448b42);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B448b49:{NFSU2_TR(0x448b49);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd5ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B448b50:{NFSU2_TR(0x448b50);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x3ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B448b54:{NFSU2_TR(0x448b54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L448b5e;}}
}
B448b56:L448b56:{c.instructions+=2;NFSU2_TR(0x448b56);
{u32 ea_=u32(u32(8304048u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B448b5c:{NFSU2_TR(0x448b5c);
{goto L448b64;}
}
B448b5e:L448b5e:{c.instructions+=1;NFSU2_TR(0x448b5e);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B448b64:L448b64:{c.instructions+=8;NFSU2_TR(0x448b64);
{u32 ea_=u32(r4(R+24)+u32(248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B448b6a:{NFSU2_TR(0x448b6a);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w4(R+4,u32(s32(s16(r2(U+0)))));
}
B448b6d:{NFSU2_TR(0x448b6d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B448b6f:{NFSU2_TR(0x448b6f);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x7eb5b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+0),(U+8),2);
}
B448b77:{NFSU2_TR(0x448b77);
w2(R+0,shr<u16>(r2(R+0),u64(u32(0x1ull))));
}
B448b7a:{NFSU2_TR(0x448b7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448b7b:{NFSU2_TR(0x448b7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B448b7f:{NFSU2_TR(0x448b7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x448b84ull));
TAIL_STATIC(0x43c2b0u,43c);
}
B448b84:L448b84:{c.instructions+=4;NFSU2_TR(0x448b84);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B448b88:{NFSU2_TR(0x448b88);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B448b8c:{NFSU2_TR(0x448b8c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448b8d:{NFSU2_TR(0x448b8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x448b92ull));
TAIL_STATIC(0x43c370u,43c);
}
B448b92:L448b92:{c.instructions+=11;NFSU2_TR(0x448b92);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B448b96:{NFSU2_TR(0x448b96);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B448b98:{NFSU2_TR(0x448b98);
{u32 ea_=u32(u32(7893160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B448b9e:{NFSU2_TR(0x448b9e);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B448ba0:{NFSU2_TR(0x448ba0);
{u32 ea_=u32(u32(7893164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B448ba6:{NFSU2_TR(0x448ba6);
{u32 ea_=u32(r4(R+24)+u32(244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B448bac:{NFSU2_TR(0x448bac);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B448bb0:{NFSU2_TR(0x448bb0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B448bb2:{NFSU2_TR(0x448bb2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448bb3:{NFSU2_TR(0x448bb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B448bb7:{NFSU2_TR(0x448bb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x448bbcull));
TAIL_STATIC(0x43c2b0u,43c);
}
B448bbc:L448bbc:{c.instructions+=4;NFSU2_TR(0x448bbc);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B448bc0:{NFSU2_TR(0x448bc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B448bc4:{NFSU2_TR(0x448bc4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448bc5:{NFSU2_TR(0x448bc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x448bcaull));
TAIL_STATIC(0x43c370u,43c);
}
B448bca:L448bca:{c.instructions+=5;NFSU2_TR(0x448bca);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B448bce:{NFSU2_TR(0x448bce);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
__builtin_memmove((R+0),(U+0),2);
}
B448bd1:{NFSU2_TR(0x448bd1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B448bd4:{NFSU2_TR(0x448bd4);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x1ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B448bd8:{NFSU2_TR(0x448bd8);
if(r1(R+518)){{goto L448be9;}}
}
B448bda:L448bda:{c.instructions+=2;NFSU2_TR(0x448bda);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B448bdd:{NFSU2_TR(0x448bdd);
if(r1(R+518)){{goto L448be9;}}
}
B448bdf:L448bdf:{c.instructions+=2;NFSU2_TR(0x448bdf);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x5ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B448be3:{NFSU2_TR(0x448be3);
if(r1(R+518)){{goto L448be9;}}
}
B448be5:L448be5:{c.instructions+=2;NFSU2_TR(0x448be5);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B448be7:{NFSU2_TR(0x448be7);
{goto L448beb;}
}
B448be9:L448be9:{c.instructions+=1;NFSU2_TR(0x448be9);
w1(R+0,u8(0x1ull));
}
B448beb:L448beb:{c.instructions+=8;NFSU2_TR(0x448beb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B448bed:{NFSU2_TR(0x448bed);
{u32 ea_=u32(r4(R+12)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B448bf0:{NFSU2_TR(0x448bf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B448bf3:{NFSU2_TR(0x448bf3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B448bf7:{NFSU2_TR(0x448bf7);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B448bfa:{NFSU2_TR(0x448bfa);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B448bfe:{NFSU2_TR(0x448bfe);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B448c02:{NFSU2_TR(0x448c02);
if(r1(R+518)){{goto L448c14;}}
}
B448c04:L448c04:{c.instructions+=4;NFSU2_TR(0x448c04);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B448c08:{NFSU2_TR(0x448c08);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B448c0c:{NFSU2_TR(0x448c0c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B448c12:{NFSU2_TR(0x448c12);
{goto L448c22;}
}
B448c14:L448c14:{c.instructions+=3;NFSU2_TR(0x448c14);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B448c18:{NFSU2_TR(0x448c18);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B448c1c:{NFSU2_TR(0x448c1c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B448c22:L448c22:{c.instructions+=9;NFSU2_TR(0x448c22);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B448c26:{NFSU2_TR(0x448c26);
{u32 ea_=u32(r4(R+24)+u32(232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B448c2c:{NFSU2_TR(0x448c2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B448c30:{NFSU2_TR(0x448c30);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B448c34:{NFSU2_TR(0x448c34);
{u32 ea_=u32(r4(R+24)+u32(240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B448c3a:{NFSU2_TR(0x448c3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B448c40:{NFSU2_TR(0x448c40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B448c46:{NFSU2_TR(0x448c46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B448c4c:{NFSU2_TR(0x448c4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B448c56:L448c56:{c.instructions+=3;NFSU2_TR(0x448c56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B448c5c:{NFSU2_TR(0x448c5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B448c5e:{NFSU2_TR(0x448c5e);
if(r1(R+518)){{goto L448c69;}}
}
B448c60:L448c60:{c.instructions+=2;NFSU2_TR(0x448c60);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B448c63:{NFSU2_TR(0x448c63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L448d71;}}
}
B448c69:L448c69:{c.instructions+=19;NFSU2_TR(0x448c69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B448c6c:{NFSU2_TR(0x448c6c);
__builtin_memmove((R+0),(R+12),4);
}
B448c6e:{NFSU2_TR(0x448c6e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B448c74:{NFSU2_TR(0x448c74);
u8 U[13];
w4(U+0,u32(u32(u32(0x1a1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B448c7b:{NFSU2_TR(0x448c7b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd5ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B448c81:{NFSU2_TR(0x448c81);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B448c84:{NFSU2_TR(0x448c84);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B448c87:{NFSU2_TR(0x448c87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B448c8a:{NFSU2_TR(0x448c8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B448c90:{NFSU2_TR(0x448c90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B448c96:{NFSU2_TR(0x448c96);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B448c9c:{NFSU2_TR(0x448c9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B448ca2:{NFSU2_TR(0x448ca2);
u8 U[12];
w4(U+0,u32(u32(u32(0x75ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B448ca6:{NFSU2_TR(0x448ca6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B448ca9:{NFSU2_TR(0x448ca9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B448cac:{NFSU2_TR(0x448cac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B448cb2:{NFSU2_TR(0x448cb2);
u8 U[13];
w4(U+0,u32(u32(u32(0x19cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B448cb9:{NFSU2_TR(0x448cb9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B448cbb:{NFSU2_TR(0x448cbb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L448d74;}}
}
B448cc1:L448cc1:{c.instructions+=3;NFSU2_TR(0x448cc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B448cc7:{NFSU2_TR(0x448cc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B448cca:{NFSU2_TR(0x448cca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x448ccfull));
TAIL_STATIC(0x5eb400u,5eb);
}
B448ccf:L448ccf:{c.instructions+=3;NFSU2_TR(0x448ccf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B448cd5:{NFSU2_TR(0x448cd5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448cd6:{NFSU2_TR(0x448cd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x448cdbull));
TAIL_STATIC(0x5ecca0u,5ec);
}
B448cdb:L448cdb:{c.instructions+=3;NFSU2_TR(0x448cdb);
__builtin_memmove((R+12),(R+0),4);
}
B448cdd:{NFSU2_TR(0x448cdd);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B448cdf:{NFSU2_TR(0x448cdf);
if(r1(R+518)){{goto L448d71;}}
}
B448ce5:L448ce5:{c.instructions+=6;NFSU2_TR(0x448ce5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B448ce7:{NFSU2_TR(0x448ce7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd5ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B448cee:{NFSU2_TR(0x448cee);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B448cf2:{NFSU2_TR(0x448cf2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448cf3:{NFSU2_TR(0x448cf3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B448cf7:{NFSU2_TR(0x448cf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x448cfcull));
TAIL_STATIC(0x43c2b0u,43c);
}
B448cfc:L448cfc:{c.instructions+=4;NFSU2_TR(0x448cfc);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B448d00:{NFSU2_TR(0x448d00);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B448d04:{NFSU2_TR(0x448d04);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448d05:{NFSU2_TR(0x448d05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x448d0aull));
TAIL_STATIC(0x43c370u,43c);
}
B448d0a:L448d0a:{c.instructions+=5;NFSU2_TR(0x448d0a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B448d0e:{NFSU2_TR(0x448d0e);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
__builtin_memmove((R+0),(U+0),2);
}
B448d11:{NFSU2_TR(0x448d11);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B448d14:{NFSU2_TR(0x448d14);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x1ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B448d18:{NFSU2_TR(0x448d18);
if(r1(R+518)){{goto L448d29;}}
}
B448d1a:L448d1a:{c.instructions+=2;NFSU2_TR(0x448d1a);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B448d1d:{NFSU2_TR(0x448d1d);
if(r1(R+518)){{goto L448d29;}}
}
B448d1f:L448d1f:{c.instructions+=2;NFSU2_TR(0x448d1f);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x5ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B448d23:{NFSU2_TR(0x448d23);
if(r1(R+518)){{goto L448d29;}}
}
B448d25:L448d25:{c.instructions+=2;NFSU2_TR(0x448d25);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B448d27:{NFSU2_TR(0x448d27);
{goto L448d2b;}
}
B448d29:L448d29:{c.instructions+=1;NFSU2_TR(0x448d29);
w1(R+0,u8(0x1ull));
}
B448d2b:L448d2b:{c.instructions+=5;NFSU2_TR(0x448d2b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B448d2d:{NFSU2_TR(0x448d2d);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B448d30:{NFSU2_TR(0x448d30);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B448d33:{NFSU2_TR(0x448d33);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B448d37:{NFSU2_TR(0x448d37);
if(r1(R+518)){{goto L448d4f;}}
}
B448d39:L448d39:{c.instructions+=8;NFSU2_TR(0x448d39);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B448d3d:{NFSU2_TR(0x448d3d);
__asm__ volatile(".byte 0xde,0xca":::"memory");
}
B448d3f:{NFSU2_TR(0x448d3f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B448d41:{NFSU2_TR(0x448d41);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B448d43:{NFSU2_TR(0x448d43);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B448d45:{NFSU2_TR(0x448d45);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B448d47:{NFSU2_TR(0x448d47);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B448d4d:{NFSU2_TR(0x448d4d);
{goto L448d5b;}
}
B448d4f:L448d4f:{c.instructions+=3;NFSU2_TR(0x448d4f);
__asm__ volatile(".byte 0xde,0xe1":::"memory");
}
B448d51:{NFSU2_TR(0x448d51);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B448d55:{NFSU2_TR(0x448d55);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B448d5b:L448d5b:{c.instructions+=3;NFSU2_TR(0x448d5b);
{u32 ea_=u32(r4(R+24)+u32(232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B448d61:{NFSU2_TR(0x448d61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B448d6b:{NFSU2_TR(0x448d6b);
{u32 ea_=u32(r4(R+24)+u32(240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B448d71:L448d71:{c.instructions+=1;NFSU2_TR(0x448d71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B448d74:L448d74:{c.instructions+=3;NFSU2_TR(0x448d74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B448d7a:{NFSU2_TR(0x448d7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B448d7c:{NFSU2_TR(0x448d7c);
if(r1(R+518)){{goto L448d87;}}
}
B448d7e:L448d7e:{c.instructions+=2;NFSU2_TR(0x448d7e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B448d81:{NFSU2_TR(0x448d81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L448e38;}}
}
B448d87:L448d87:{c.instructions+=12;NFSU2_TR(0x448d87);
__builtin_memmove((R+0),(R+12),4);
}
B448d89:{NFSU2_TR(0x448d89);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x22ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B448d8c:{NFSU2_TR(0x448d8c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B448d8e:{NFSU2_TR(0x448d8e);
u8 U[16];
w4(U+0,u32(u32(u32(0x1ecull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B448d95:{NFSU2_TR(0x448d95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B448d9b:{NFSU2_TR(0x448d9b);
u8 U[16];
w4(U+0,u32(u32(u32(0x1e4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B448da2:{NFSU2_TR(0x448da2);
__builtin_memmove((R+0),(R+12),4);
}
B448da4:{NFSU2_TR(0x448da4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B448daa:{NFSU2_TR(0x448daa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B448db0:{NFSU2_TR(0x448db0);
u8 U[13];
w4(U+0,u32(u32(u32(0x19cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B448db7:{NFSU2_TR(0x448db7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B448db9:{NFSU2_TR(0x448db9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L448e38;}}
}
B448dbb:L448dbb:{c.instructions+=3;NFSU2_TR(0x448dbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B448dc1:{NFSU2_TR(0x448dc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B448dc4:{NFSU2_TR(0x448dc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x448dc9ull));
TAIL_STATIC(0x5eb400u,5eb);
}
B448dc9:L448dc9:{c.instructions+=3;NFSU2_TR(0x448dc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B448dcf:{NFSU2_TR(0x448dcf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448dd0:{NFSU2_TR(0x448dd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x448dd5ull));
TAIL_STATIC(0x5ecca0u,5ec);
}
B448dd5:L448dd5:{c.instructions+=2;NFSU2_TR(0x448dd5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B448dd7:{NFSU2_TR(0x448dd7);
if(r1(R+518)){{goto L448e38;}}
}
B448dd9:L448dd9:{c.instructions+=2;NFSU2_TR(0x448dd9);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x3ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B448ddd:{NFSU2_TR(0x448ddd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L448de7;}}
}
B448ddf:L448ddf:{c.instructions+=2;NFSU2_TR(0x448ddf);
{u32 ea_=u32(u32(8304048u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B448de5:{NFSU2_TR(0x448de5);
{goto L448ded;}
}
B448de7:L448de7:{c.instructions+=1;NFSU2_TR(0x448de7);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B448ded:L448ded:{c.instructions+=8;NFSU2_TR(0x448ded);
{u32 ea_=u32(r4(R+24)+u32(248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B448df3:{NFSU2_TR(0x448df3);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B448df6:{NFSU2_TR(0x448df6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B448df8:{NFSU2_TR(0x448df8);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x7eb5b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+0),(U+8),2);
}
B448e00:{NFSU2_TR(0x448e00);
w2(R+0,shr<u16>(r2(R+0),u64(u32(0x1ull))));
}
B448e03:{NFSU2_TR(0x448e03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448e04:{NFSU2_TR(0x448e04);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B448e08:{NFSU2_TR(0x448e08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x448e0dull));
TAIL_STATIC(0x43c2b0u,43c);
}
B448e0d:L448e0d:{c.instructions+=4;NFSU2_TR(0x448e0d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B448e11:{NFSU2_TR(0x448e11);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B448e15:{NFSU2_TR(0x448e15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448e16:{NFSU2_TR(0x448e16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x448e1bull));
TAIL_STATIC(0x43c370u,43c);
}
B448e1b:L448e1b:{c.instructions+=7;NFSU2_TR(0x448e1b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B448e1f:{NFSU2_TR(0x448e1f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B448e22:{NFSU2_TR(0x448e22);
{u32 ea_=u32(u32(7893160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B448e28:{NFSU2_TR(0x448e28);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B448e2a:{NFSU2_TR(0x448e2a);
{u32 ea_=u32(u32(7893164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B448e30:{NFSU2_TR(0x448e30);
{u32 ea_=u32(r4(R+24)+u32(244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B448e36:{NFSU2_TR(0x448e36);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B448e38:L448e38:{c.instructions+=3;NFSU2_TR(0x448e38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B448e3e:{NFSU2_TR(0x448e3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B448e40:{NFSU2_TR(0x448e40);
if(r1(R+518)){{goto L448e47;}}
}
B448e42:L448e42:{c.instructions+=2;NFSU2_TR(0x448e42);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B448e45:{NFSU2_TR(0x448e45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L448e72;}}
}
B448e47:L448e47:{c.instructions+=10;NFSU2_TR(0x448e47);
__builtin_memmove((R+8),(R+12),4);
}
B448e49:{NFSU2_TR(0x448e49);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x22ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B448e4c:{NFSU2_TR(0x448e4c);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B448e4e:{NFSU2_TR(0x448e4e);
u8 U[16];
w4(U+0,u32(u32(u32(0x204ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B448e55:{NFSU2_TR(0x448e55);
__builtin_memmove((R+8),(R+12),4);
}
B448e57:{NFSU2_TR(0x448e57);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B448e5d:{NFSU2_TR(0x448e5d);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B448e5f:{NFSU2_TR(0x448e5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B448e65:{NFSU2_TR(0x448e65);
u8 U[13];
w4(U+0,u32(u32(u32(0x20cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B448e6c:{NFSU2_TR(0x448e6c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B448e72:L448e72:{c.instructions+=2;NFSU2_TR(0x448e72);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B448e74:{NFSU2_TR(0x448e74);
if(r1(R+518)){{goto L448e7b;}}
}
B448e76:L448e76:{c.instructions+=2;NFSU2_TR(0x448e76);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B448e79:{NFSU2_TR(0x448e79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L448e9d;}}
}
B448e7b:L448e7b:{c.instructions+=7;NFSU2_TR(0x448e7b);
__builtin_memmove((R+8),(R+12),4);
}
B448e7d:{NFSU2_TR(0x448e7d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x22ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B448e80:{NFSU2_TR(0x448e80);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B448e83:{NFSU2_TR(0x448e83);
u8 U[16];
w4(U+0,u32(u32(u32(0x1f4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B448e8a:{NFSU2_TR(0x448e8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B448e90:{NFSU2_TR(0x448e90);
u8 U[16];
w4(U+0,u32(u32(u32(0x1fcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B448e97:{NFSU2_TR(0x448e97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B448e9d:L448e9d:{c.instructions+=2;NFSU2_TR(0x448e9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B448e9f:{NFSU2_TR(0x448e9f);
if(r1(R+518)){{goto L448eaa;}}
}
B448ea1:L448ea1:{c.instructions+=2;NFSU2_TR(0x448ea1);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B448ea4:{NFSU2_TR(0x448ea4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L448f34;}}
}
B448eaa:L448eaa:{c.instructions+=30;NFSU2_TR(0x448eaa);
__builtin_memmove((R+0),(R+12),4);
}
B448eac:{NFSU2_TR(0x448eac);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B448eb2:{NFSU2_TR(0x448eb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B448eb5:{NFSU2_TR(0x448eb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B448eb8:{NFSU2_TR(0x448eb8);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B448ebe:{NFSU2_TR(0x448ebe);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x109ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B448ec4:{NFSU2_TR(0x448ec4);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B448eca:{NFSU2_TR(0x448eca);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10aull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B448ed0:{NFSU2_TR(0x448ed0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B448ed3:{NFSU2_TR(0x448ed3);
__builtin_memmove((R+12),(R+28),4);
}
B448ed5:{NFSU2_TR(0x448ed5);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B448ed7:{NFSU2_TR(0x448ed7);
u8 U[13];
w4(U+0,u32(u32(u32(0x212ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B448ede:{NFSU2_TR(0x448ede);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+24))));
}
B448ee0:{NFSU2_TR(0x448ee0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10bull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B448ee6:{NFSU2_TR(0x448ee6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B448eec:{NFSU2_TR(0x448eec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B448eef:{NFSU2_TR(0x448eef);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B448ef1:{NFSU2_TR(0x448ef1);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+4),(U+8),1);
}
B448ef4:{NFSU2_TR(0x448ef4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B448efa:{NFSU2_TR(0x448efa);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B448f00:{NFSU2_TR(0x448f00);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10dull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B448f06:{NFSU2_TR(0x448f06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B448f09:{NFSU2_TR(0x448f09);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x44ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B448f0c:{NFSU2_TR(0x448f0c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),r4(R+0)));
w1(R+523,scarry<u32>(r4(R+28),r4(R+0)));
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B448f0e:{NFSU2_TR(0x448f0e);
u8 U[13];
w4(U+0,u32(u32(u32(0x218ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B448f15:{NFSU2_TR(0x448f15);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10eull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B448f1b:{NFSU2_TR(0x448f1b);
u8 U[13];
w4(U+0,u32(u32(u32(0x219ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B448f22:{NFSU2_TR(0x448f22);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10full))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B448f28:{NFSU2_TR(0x448f28);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x21cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B448f2e:{NFSU2_TR(0x448f2e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B448f34:L448f34:{c.instructions+=7;NFSU2_TR(0x448f34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B448f35:{NFSU2_TR(0x448f35);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B448f3c:{NFSU2_TR(0x448f3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B448f3d:{NFSU2_TR(0x448f3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B448f3e:{NFSU2_TR(0x448f3e);
__builtin_memmove((R+16),(R+20),4);
}
B448f40:{NFSU2_TR(0x448f40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B448f41:{NFSU2_TR(0x448f41);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B448f50:L448f50:{c.instructions+=15;NFSU2_TR(0x448f50);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448f51:{NFSU2_TR(0x448f51);
__builtin_memmove((R+20),(R+16),4);
}
B448f53:{NFSU2_TR(0x448f53);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B448f56:{NFSU2_TR(0x448f56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x54ull))));
}
B448f59:{NFSU2_TR(0x448f59);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448f5a:{NFSU2_TR(0x448f5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B448f5d:{NFSU2_TR(0x448f5d);
__builtin_memmove((R+0),(R+12),4);
}
B448f5f:{NFSU2_TR(0x448f5f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B448f65:{NFSU2_TR(0x448f65);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448f66:{NFSU2_TR(0x448f66);
__builtin_memmove((R+24),(R+4),4);
}
B448f68:{NFSU2_TR(0x448f68);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448f69:{NFSU2_TR(0x448f69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B448f6c:{NFSU2_TR(0x448f6c);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B448f73:{NFSU2_TR(0x448f73);
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
B448f76:{NFSU2_TR(0x448f76);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4491a7u,449);}
}
B448f7c:L448f7c:{c.instructions+=1;NFSU2_TR(0x448f7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4491b0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B448f83:L448f83:{c.instructions+=6;NFSU2_TR(0x448f83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B448f86:{NFSU2_TR(0x448f86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B448f89:{NFSU2_TR(0x448f89);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448f8a:{NFSU2_TR(0x448f8a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448f8b:{NFSU2_TR(0x448f8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x19cull))));
__builtin_memmove((R+4),(U+0),4);
}
B448f91:{NFSU2_TR(0x448f91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x448f96ull));
TAIL_STATIC(0x447a30u,447);
}
B448f96:L448f96:{c.instructions+=6;NFSU2_TR(0x448f96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B448f97:{NFSU2_TR(0x448f97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B448f98:{NFSU2_TR(0x448f98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B448f99:{NFSU2_TR(0x448f99);
__builtin_memmove((R+16),(R+20),4);
}
B448f9b:{NFSU2_TR(0x448f9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B448f9c:{NFSU2_TR(0x448f9c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B448f9f:L448f9f:{c.instructions+=6;NFSU2_TR(0x448f9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B448fa2:{NFSU2_TR(0x448fa2);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B448fa6:{NFSU2_TR(0x448fa6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448fa7:{NFSU2_TR(0x448fa7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448fa8:{NFSU2_TR(0x448fa8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x19cull))));
__builtin_memmove((R+4),(U+0),4);
}
B448fae:{NFSU2_TR(0x448fae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x448fb3ull));
TAIL_STATIC(0x447a30u,447);
}
B448fb3:L448fb3:{c.instructions+=10;NFSU2_TR(0x448fb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B448fb6:{NFSU2_TR(0x448fb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B448fbc:{NFSU2_TR(0x448fbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B448fbf:{NFSU2_TR(0x448fbf);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B448fc1:{NFSU2_TR(0x448fc1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B448fc3:{NFSU2_TR(0x448fc3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+8),(U+1),1);
}
B448fc6:{NFSU2_TR(0x448fc6);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B448fc7:{NFSU2_TR(0x448fc7);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B448fc9:{NFSU2_TR(0x448fc9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B448fcb:{NFSU2_TR(0x448fcb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L448fd1;}}
}
B448fcd:L448fcd:{c.instructions+=2;NFSU2_TR(0x448fcd);
__builtin_memmove((R+0),(R+4),4);
}
B448fcf:{NFSU2_TR(0x448fcf);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B448fd1:L448fd1:{c.instructions+=1;NFSU2_TR(0x448fd1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L448fe6;}}
}
B448fd3:L448fd3:{c.instructions+=4;NFSU2_TR(0x448fd3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B448fd9:{NFSU2_TR(0x448fd9);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B448fe0:{NFSU2_TR(0x448fe0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B448fe4:{NFSU2_TR(0x448fe4);
{goto L448fee;}
}
B448fe6:L448fe6:{c.instructions+=1;NFSU2_TR(0x448fe6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B448fee:L448fee:{c.instructions+=4;NFSU2_TR(0x448fee);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B448ff2:{NFSU2_TR(0x448ff2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B448ff3:{NFSU2_TR(0x448ff3);
__builtin_memmove((R+4),(R+24),4);
}
B448ff5:{NFSU2_TR(0x448ff5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x448ffaull));
TAIL_STATIC(0x443270u,443);
}
B448ffa:L448ffa:{c.instructions+=1;NFSU2_TR(0x448ffa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
TAIL_STATIC(0x449000u,449);
}
XIT:NFSU2_TR_EXIT(0x448,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
