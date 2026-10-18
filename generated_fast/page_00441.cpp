#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_442(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5b9(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x441,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x441,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_441(u8* __restrict R,Cpu& c);
u32 page_441(Cpu& c){return body_441(c.regs.data(),c);}
__attribute__((noinline)) u32 body_441(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x441000:goto L441000;
case 0x441001:c.instructions+=39;goto B441001;
case 0x441003:c.instructions+=38;goto B441003;
case 0x441006:c.instructions+=37;goto B441006;
case 0x441009:c.instructions+=36;goto B441009;
case 0x44100c:c.instructions+=35;goto B44100c;
case 0x44100f:c.instructions+=34;goto B44100f;
case 0x441012:c.instructions+=33;goto B441012;
case 0x441015:c.instructions+=32;goto B441015;
case 0x441018:c.instructions+=31;goto B441018;
case 0x44101a:c.instructions+=30;goto B44101a;
case 0x44101c:c.instructions+=29;goto B44101c;
case 0x44101e:c.instructions+=28;goto B44101e;
case 0x441020:c.instructions+=27;goto B441020;
case 0x441023:c.instructions+=26;goto B441023;
case 0x441026:c.instructions+=25;goto B441026;
case 0x441029:c.instructions+=24;goto B441029;
case 0x44102c:c.instructions+=23;goto B44102c;
case 0x44102e:c.instructions+=22;goto B44102e;
case 0x441030:c.instructions+=21;goto B441030;
case 0x441033:c.instructions+=20;goto B441033;
case 0x441036:c.instructions+=19;goto B441036;
case 0x441038:c.instructions+=18;goto B441038;
case 0x44103b:c.instructions+=17;goto B44103b;
case 0x44103e:c.instructions+=16;goto B44103e;
case 0x441041:c.instructions+=15;goto B441041;
case 0x441044:c.instructions+=14;goto B441044;
case 0x441046:c.instructions+=13;goto B441046;
case 0x441048:c.instructions+=12;goto B441048;
case 0x44104b:c.instructions+=11;goto B44104b;
case 0x44104e:c.instructions+=10;goto B44104e;
case 0x441050:c.instructions+=9;goto B441050;
case 0x441053:c.instructions+=8;goto B441053;
case 0x441056:c.instructions+=7;goto B441056;
case 0x441058:c.instructions+=6;goto B441058;
case 0x44105a:c.instructions+=5;goto B44105a;
case 0x44105d:c.instructions+=4;goto B44105d;
case 0x441060:c.instructions+=3;goto B441060;
case 0x441062:c.instructions+=2;goto B441062;
case 0x441063:c.instructions+=1;goto B441063;
case 0x441070:goto L441070;
case 0x441071:c.instructions+=8;goto B441071;
case 0x441073:c.instructions+=7;goto B441073;
case 0x441076:c.instructions+=6;goto B441076;
case 0x44107c:c.instructions+=5;goto B44107c;
case 0x441081:c.instructions+=4;goto B441081;
case 0x441083:c.instructions+=3;goto B441083;
case 0x441084:c.instructions+=2;goto B441084;
case 0x441085:c.instructions+=1;goto B441085;
case 0x44108b:goto L44108b;
case 0x44108c:c.instructions+=5;goto B44108c;
case 0x441090:c.instructions+=4;goto B441090;
case 0x441091:c.instructions+=3;goto B441091;
case 0x441099:c.instructions+=2;goto B441099;
case 0x4410a1:c.instructions+=1;goto B4410a1;
case 0x4410a6:goto L4410a6;
case 0x4410aa:c.instructions+=13;goto B4410aa;
case 0x4410b0:c.instructions+=12;goto B4410b0;
case 0x4410b5:c.instructions+=11;goto B4410b5;
case 0x4410b9:c.instructions+=10;goto B4410b9;
case 0x4410bd:c.instructions+=9;goto B4410bd;
case 0x4410c1:c.instructions+=8;goto B4410c1;
case 0x4410c9:c.instructions+=7;goto B4410c9;
case 0x4410cd:c.instructions+=6;goto B4410cd;
case 0x4410d4:c.instructions+=5;goto B4410d4;
case 0x4410da:c.instructions+=4;goto B4410da;
case 0x4410de:c.instructions+=3;goto B4410de;
case 0x4410e2:c.instructions+=2;goto B4410e2;
case 0x4410e8:c.instructions+=1;goto B4410e8;
case 0x4410ec:goto L4410ec;
case 0x4410ee:goto L4410ee;
case 0x4410f1:c.instructions+=3;goto B4410f1;
case 0x4410f2:c.instructions+=2;goto B4410f2;
case 0x4410f3:c.instructions+=1;goto B4410f3;
case 0x4410f8:goto L4410f8;
case 0x4410fa:c.instructions+=5;goto B4410fa;
case 0x4410fe:c.instructions+=4;goto B4410fe;
case 0x4410ff:c.instructions+=3;goto B4410ff;
case 0x441101:c.instructions+=2;goto B441101;
case 0x441106:c.instructions+=1;goto B441106;
case 0x44110b:goto L44110b;
case 0x44110e:goto L44110e;
case 0x44110f:c.instructions+=4;goto B44110f;
case 0x441110:c.instructions+=3;goto B441110;
case 0x441112:c.instructions+=2;goto B441112;
case 0x441113:c.instructions+=1;goto B441113;
case 0x441120:goto L441120;
case 0x441125:c.instructions+=2;goto B441125;
case 0x441127:c.instructions+=1;goto B441127;
case 0x441129:goto L441129;
case 0x44112e:c.instructions+=4;goto B44112e;
case 0x44112f:c.instructions+=3;goto B44112f;
case 0x441131:c.instructions+=2;goto B441131;
case 0x441136:c.instructions+=1;goto B441136;
case 0x44113b:goto L44113b;
case 0x44113e:goto L44113e;
case 0x441140:goto L441140;
case 0x441141:c.instructions+=4;goto B441141;
case 0x441142:c.instructions+=3;goto B441142;
case 0x441143:c.instructions+=2;goto B441143;
case 0x441145:c.instructions+=1;goto B441145;
case 0x44114a:goto L44114a;
case 0x44114d:c.instructions+=1;goto B44114d;
case 0x44114f:goto L44114f;
case 0x441152:c.instructions+=2;goto B441152;
case 0x441155:c.instructions+=1;goto B441155;
case 0x441157:goto L441157;
case 0x441159:c.instructions+=1;goto B441159;
case 0x44115c:goto L44115c;
case 0x44115e:c.instructions+=2;goto B44115e;
case 0x441160:c.instructions+=1;goto B441160;
case 0x441162:goto L441162;
case 0x441166:c.instructions+=1;goto B441166;
case 0x441168:goto L441168;
case 0x44116b:c.instructions+=2;goto B44116b;
case 0x44116d:c.instructions+=1;goto B44116d;
case 0x44116f:goto L44116f;
case 0x441170:c.instructions+=3;goto B441170;
case 0x441173:c.instructions+=2;goto B441173;
case 0x441175:c.instructions+=1;goto B441175;
case 0x441177:goto L441177;
case 0x441178:c.instructions+=4;goto B441178;
case 0x441179:c.instructions+=3;goto B441179;
case 0x44117b:c.instructions+=2;goto B44117b;
case 0x44117c:c.instructions+=1;goto B44117c;
case 0x44117f:goto L44117f;
case 0x441182:c.instructions+=5;goto B441182;
case 0x441183:c.instructions+=4;goto B441183;
case 0x441185:c.instructions+=3;goto B441185;
case 0x441186:c.instructions+=2;goto B441186;
case 0x441187:c.instructions+=1;goto B441187;
case 0x441190:goto L441190;
case 0x441194:c.instructions+=2;goto B441194;
case 0x441197:c.instructions+=1;goto B441197;
case 0x441199:goto L441199;
case 0x44119b:c.instructions+=1;goto B44119b;
case 0x44119d:goto L44119d;
case 0x4411a0:c.instructions+=1;goto B4411a0;
case 0x4411a2:goto L4411a2;
case 0x4411a4:c.instructions+=1;goto B4411a4;
case 0x4411a5:goto L4411a5;
case 0x4411aa:c.instructions+=1;goto B4411aa;
case 0x4411b0:goto L4411b0;
case 0x4411b1:c.instructions+=2;goto B4411b1;
case 0x4411b5:c.instructions+=1;goto B4411b5;
case 0x4411ba:goto L4411ba;
case 0x4411be:c.instructions+=5;goto B4411be;
case 0x4411c2:c.instructions+=4;goto B4411c2;
case 0x4411c6:c.instructions+=3;goto B4411c6;
case 0x4411c8:c.instructions+=2;goto B4411c8;
case 0x4411cb:c.instructions+=1;goto B4411cb;
case 0x4411cd:goto L4411cd;
case 0x4411d3:goto L4411d3;
case 0x4411d8:goto L4411d8;
case 0x4411da:c.instructions+=39;goto B4411da;
case 0x4411dd:c.instructions+=38;goto B4411dd;
case 0x4411df:c.instructions+=37;goto B4411df;
case 0x4411e3:c.instructions+=36;goto B4411e3;
case 0x4411e4:c.instructions+=35;goto B4411e4;
case 0x4411e8:c.instructions+=34;goto B4411e8;
case 0x4411ea:c.instructions+=33;goto B4411ea;
case 0x4411ed:c.instructions+=32;goto B4411ed;
case 0x4411ef:c.instructions+=31;goto B4411ef;
case 0x4411f3:c.instructions+=30;goto B4411f3;
case 0x4411f5:c.instructions+=29;goto B4411f5;
case 0x4411f8:c.instructions+=28;goto B4411f8;
case 0x4411fe:c.instructions+=27;goto B4411fe;
case 0x441204:c.instructions+=26;goto B441204;
case 0x441207:c.instructions+=25;goto B441207;
case 0x441209:c.instructions+=24;goto B441209;
case 0x44120c:c.instructions+=23;goto B44120c;
case 0x441212:c.instructions+=22;goto B441212;
case 0x441218:c.instructions+=21;goto B441218;
case 0x44121e:c.instructions+=20;goto B44121e;
case 0x441222:c.instructions+=19;goto B441222;
case 0x441228:c.instructions+=18;goto B441228;
case 0x44122b:c.instructions+=17;goto B44122b;
case 0x44122f:c.instructions+=16;goto B44122f;
case 0x441235:c.instructions+=15;goto B441235;
case 0x44123b:c.instructions+=14;goto B44123b;
case 0x441241:c.instructions+=13;goto B441241;
case 0x441247:c.instructions+=12;goto B441247;
case 0x44124d:c.instructions+=11;goto B44124d;
case 0x44124f:c.instructions+=10;goto B44124f;
case 0x441253:c.instructions+=9;goto B441253;
case 0x441255:c.instructions+=8;goto B441255;
case 0x441259:c.instructions+=7;goto B441259;
case 0x44125f:c.instructions+=6;goto B44125f;
case 0x441265:c.instructions+=5;goto B441265;
case 0x441267:c.instructions+=4;goto B441267;
case 0x441269:c.instructions+=3;goto B441269;
case 0x44126b:c.instructions+=2;goto B44126b;
case 0x44126c:c.instructions+=1;goto B44126c;
case 0x441270:goto L441270;
case 0x441273:c.instructions+=5;goto B441273;
case 0x441274:c.instructions+=4;goto B441274;
case 0x44127c:c.instructions+=3;goto B44127c;
case 0x441284:c.instructions+=2;goto B441284;
case 0x44128c:c.instructions+=1;goto B44128c;
case 0x441291:goto L441291;
case 0x441295:c.instructions+=4;goto B441295;
case 0x441296:c.instructions+=3;goto B441296;
case 0x44129a:c.instructions+=2;goto B44129a;
case 0x44129d:c.instructions+=1;goto B44129d;
case 0x4412a2:goto L4412a2;
case 0x4412a6:c.instructions+=11;goto B4412a6;
case 0x4412a9:c.instructions+=10;goto B4412a9;
case 0x4412aa:c.instructions+=9;goto B4412aa;
case 0x4412ae:c.instructions+=8;goto B4412ae;
case 0x4412b2:c.instructions+=7;goto B4412b2;
case 0x4412b6:c.instructions+=6;goto B4412b6;
case 0x4412b8:c.instructions+=5;goto B4412b8;
case 0x4412bc:c.instructions+=4;goto B4412bc;
case 0x4412c2:c.instructions+=3;goto B4412c2;
case 0x4412c6:c.instructions+=2;goto B4412c6;
case 0x4412ca:c.instructions+=1;goto B4412ca;
case 0x4412cc:goto L4412cc;
case 0x4412d0:c.instructions+=3;goto B4412d0;
case 0x4412d1:c.instructions+=2;goto B4412d1;
case 0x4412d4:c.instructions+=1;goto B4412d4;
case 0x4412e0:goto L4412e0;
case 0x4412e1:c.instructions+=5;goto B4412e1;
case 0x4412e3:c.instructions+=4;goto B4412e3;
case 0x4412ea:c.instructions+=3;goto B4412ea;
case 0x4412ed:c.instructions+=2;goto B4412ed;
case 0x4412ee:c.instructions+=1;goto B4412ee;
case 0x4412f3:goto L4412f3;
case 0x4412f7:c.instructions+=3;goto B4412f7;
case 0x4412fb:c.instructions+=2;goto B4412fb;
case 0x4412fc:c.instructions+=1;goto B4412fc;
case 0x441301:goto L441301;
case 0x441305:c.instructions+=6;goto B441305;
case 0x441307:c.instructions+=5;goto B441307;
case 0x44130e:c.instructions+=4;goto B44130e;
case 0x441311:c.instructions+=3;goto B441311;
case 0x441315:c.instructions+=2;goto B441315;
case 0x441316:c.instructions+=1;goto B441316;
case 0x44131b:goto L44131b;
case 0x44131f:c.instructions+=4;goto B44131f;
case 0x441323:c.instructions+=3;goto B441323;
case 0x441327:c.instructions+=2;goto B441327;
case 0x441328:c.instructions+=1;goto B441328;
case 0x44132d:goto L44132d;
case 0x441330:c.instructions+=1;goto B441330;
case 0x441340:goto L441340;
case 0x441341:c.instructions+=25;goto B441341;
case 0x441343:c.instructions+=24;goto B441343;
case 0x441346:c.instructions+=23;goto B441346;
case 0x44134c:c.instructions+=22;goto B44134c;
case 0x44134d:c.instructions+=21;goto B44134d;
case 0x44134f:c.instructions+=20;goto B44134f;
case 0x441352:c.instructions+=19;goto B441352;
case 0x441355:c.instructions+=18;goto B441355;
case 0x441358:c.instructions+=17;goto B441358;
case 0x44135c:c.instructions+=16;goto B44135c;
case 0x44135f:c.instructions+=15;goto B44135f;
case 0x441363:c.instructions+=14;goto B441363;
case 0x441365:c.instructions+=13;goto B441365;
case 0x441368:c.instructions+=12;goto B441368;
case 0x44136c:c.instructions+=11;goto B44136c;
case 0x441370:c.instructions+=10;goto B441370;
case 0x441371:c.instructions+=9;goto B441371;
case 0x441374:c.instructions+=8;goto B441374;
case 0x441378:c.instructions+=7;goto B441378;
case 0x44137c:c.instructions+=6;goto B44137c;
case 0x44137f:c.instructions+=5;goto B44137f;
case 0x441383:c.instructions+=4;goto B441383;
case 0x441387:c.instructions+=3;goto B441387;
case 0x44138a:c.instructions+=2;goto B44138a;
case 0x44138e:c.instructions+=1;goto B44138e;
case 0x441393:goto L441393;
case 0x441397:c.instructions+=3;goto B441397;
case 0x44139b:c.instructions+=2;goto B44139b;
case 0x44139c:c.instructions+=1;goto B44139c;
case 0x4413a1:goto L4413a1;
case 0x4413a5:c.instructions+=3;goto B4413a5;
case 0x4413a9:c.instructions+=2;goto B4413a9;
case 0x4413aa:c.instructions+=1;goto B4413aa;
case 0x4413af:goto L4413af;
case 0x4413b3:c.instructions+=3;goto B4413b3;
case 0x4413b7:c.instructions+=2;goto B4413b7;
case 0x4413b8:c.instructions+=1;goto B4413b8;
case 0x4413bd:goto L4413bd;
case 0x4413c1:c.instructions+=30;goto B4413c1;
case 0x4413c7:c.instructions+=29;goto B4413c7;
case 0x4413cb:c.instructions+=28;goto B4413cb;
case 0x4413cf:c.instructions+=27;goto B4413cf;
case 0x4413d5:c.instructions+=26;goto B4413d5;
case 0x4413d9:c.instructions+=25;goto B4413d9;
case 0x4413dd:c.instructions+=24;goto B4413dd;
case 0x4413e3:c.instructions+=23;goto B4413e3;
case 0x4413e7:c.instructions+=22;goto B4413e7;
case 0x4413ed:c.instructions+=21;goto B4413ed;
case 0x4413f1:c.instructions+=20;goto B4413f1;
case 0x4413f7:c.instructions+=19;goto B4413f7;
case 0x4413fd:c.instructions+=18;goto B4413fd;
case 0x441403:c.instructions+=17;goto B441403;
case 0x441407:c.instructions+=16;goto B441407;
case 0x44140d:c.instructions+=15;goto B44140d;
case 0x441411:c.instructions+=14;goto B441411;
case 0x441413:c.instructions+=13;goto B441413;
case 0x441416:c.instructions+=12;goto B441416;
case 0x44141a:c.instructions+=11;goto B44141a;
case 0x44141e:c.instructions+=10;goto B44141e;
case 0x44141f:c.instructions+=9;goto B44141f;
case 0x441422:c.instructions+=8;goto B441422;
case 0x441426:c.instructions+=7;goto B441426;
case 0x44142a:c.instructions+=6;goto B44142a;
case 0x44142d:c.instructions+=5;goto B44142d;
case 0x441431:c.instructions+=4;goto B441431;
case 0x441435:c.instructions+=3;goto B441435;
case 0x441438:c.instructions+=2;goto B441438;
case 0x44143c:c.instructions+=1;goto B44143c;
case 0x441441:goto L441441;
case 0x441445:c.instructions+=3;goto B441445;
case 0x44144c:c.instructions+=2;goto B44144c;
case 0x44144d:c.instructions+=1;goto B44144d;
case 0x441452:goto L441452;
case 0x441456:c.instructions+=3;goto B441456;
case 0x44145d:c.instructions+=2;goto B44145d;
case 0x44145e:c.instructions+=1;goto B44145e;
case 0x441463:goto L441463;
case 0x441467:c.instructions+=3;goto B441467;
case 0x44146e:c.instructions+=2;goto B44146e;
case 0x44146f:c.instructions+=1;goto B44146f;
case 0x441474:goto L441474;
case 0x44147b:c.instructions+=33;goto B44147b;
case 0x441481:c.instructions+=32;goto B441481;
case 0x441485:c.instructions+=31;goto B441485;
case 0x44148c:c.instructions+=30;goto B44148c;
case 0x44148d:c.instructions+=29;goto B44148d;
case 0x441493:c.instructions+=28;goto B441493;
case 0x44149a:c.instructions+=27;goto B44149a;
case 0x4414a1:c.instructions+=26;goto B4414a1;
case 0x4414a7:c.instructions+=25;goto B4414a7;
case 0x4414ae:c.instructions+=24;goto B4414ae;
case 0x4414b0:c.instructions+=23;goto B4414b0;
case 0x4414b6:c.instructions+=22;goto B4414b6;
case 0x4414bd:c.instructions+=21;goto B4414bd;
case 0x4414c4:c.instructions+=20;goto B4414c4;
case 0x4414cb:c.instructions+=19;goto B4414cb;
case 0x4414d2:c.instructions+=18;goto B4414d2;
case 0x4414d9:c.instructions+=17;goto B4414d9;
case 0x4414e0:c.instructions+=16;goto B4414e0;
case 0x4414e4:c.instructions+=15;goto B4414e4;
case 0x4414eb:c.instructions+=14;goto B4414eb;
case 0x4414f2:c.instructions+=13;goto B4414f2;
case 0x4414f6:c.instructions+=12;goto B4414f6;
case 0x4414f8:c.instructions+=11;goto B4414f8;
case 0x4414fb:c.instructions+=10;goto B4414fb;
case 0x4414ff:c.instructions+=9;goto B4414ff;
case 0x441502:c.instructions+=8;goto B441502;
case 0x441506:c.instructions+=7;goto B441506;
case 0x44150a:c.instructions+=6;goto B44150a;
case 0x44150d:c.instructions+=5;goto B44150d;
case 0x441511:c.instructions+=4;goto B441511;
case 0x441515:c.instructions+=3;goto B441515;
case 0x441518:c.instructions+=2;goto B441518;
case 0x44151c:c.instructions+=1;goto B44151c;
case 0x441521:goto L441521;
case 0x441525:c.instructions+=7;goto B441525;
case 0x441529:c.instructions+=6;goto B441529;
case 0x44152d:c.instructions+=5;goto B44152d;
case 0x441533:c.instructions+=4;goto B441533;
case 0x441536:c.instructions+=3;goto B441536;
case 0x44153a:c.instructions+=2;goto B44153a;
case 0x44153e:c.instructions+=1;goto B44153e;
case 0x441543:goto L441543;
case 0x441545:c.instructions+=10;goto B441545;
case 0x44154a:c.instructions+=9;goto B44154a;
case 0x44154c:c.instructions+=8;goto B44154c;
case 0x44154e:c.instructions+=7;goto B44154e;
case 0x441551:c.instructions+=6;goto B441551;
case 0x441553:c.instructions+=5;goto B441553;
case 0x441556:c.instructions+=4;goto B441556;
case 0x441558:c.instructions+=3;goto B441558;
case 0x441559:c.instructions+=2;goto B441559;
case 0x44155b:c.instructions+=1;goto B44155b;
case 0x441560:goto L441560;
case 0x441564:c.instructions+=5;goto B441564;
case 0x441568:c.instructions+=4;goto B441568;
case 0x441569:c.instructions+=3;goto B441569;
case 0x44156a:c.instructions+=2;goto B44156a;
case 0x44156b:c.instructions+=1;goto B44156b;
case 0x441570:goto L441570;
case 0x441574:c.instructions+=3;goto B441574;
case 0x441577:c.instructions+=2;goto B441577;
case 0x44157d:c.instructions+=1;goto B44157d;
case 0x441582:goto L441582;
case 0x441584:c.instructions+=10;goto B441584;
case 0x441589:c.instructions+=9;goto B441589;
case 0x44158b:c.instructions+=8;goto B44158b;
case 0x44158d:c.instructions+=7;goto B44158d;
case 0x441590:c.instructions+=6;goto B441590;
case 0x441592:c.instructions+=5;goto B441592;
case 0x441595:c.instructions+=4;goto B441595;
case 0x441597:c.instructions+=3;goto B441597;
case 0x441598:c.instructions+=2;goto B441598;
case 0x44159a:c.instructions+=1;goto B44159a;
case 0x44159f:goto L44159f;
case 0x4415a3:c.instructions+=5;goto B4415a3;
case 0x4415a7:c.instructions+=4;goto B4415a7;
case 0x4415a8:c.instructions+=3;goto B4415a8;
case 0x4415a9:c.instructions+=2;goto B4415a9;
case 0x4415aa:c.instructions+=1;goto B4415aa;
case 0x4415af:goto L4415af;
case 0x4415b3:c.instructions+=196;goto B4415b3;
case 0x4415b6:c.instructions+=195;goto B4415b6;
case 0x4415b8:c.instructions+=194;goto B4415b8;
case 0x4415bc:c.instructions+=193;goto B4415bc;
case 0x4415bf:c.instructions+=192;goto B4415bf;
case 0x4415c1:c.instructions+=191;goto B4415c1;
case 0x4415c5:c.instructions+=190;goto B4415c5;
case 0x4415c8:c.instructions+=189;goto B4415c8;
case 0x4415ca:c.instructions+=188;goto B4415ca;
case 0x4415ce:c.instructions+=187;goto B4415ce;
case 0x4415d1:c.instructions+=186;goto B4415d1;
case 0x4415d3:c.instructions+=185;goto B4415d3;
case 0x4415da:c.instructions+=184;goto B4415da;
case 0x4415de:c.instructions+=183;goto B4415de;
case 0x4415e1:c.instructions+=182;goto B4415e1;
case 0x4415e5:c.instructions+=181;goto B4415e5;
case 0x4415e8:c.instructions+=180;goto B4415e8;
case 0x4415ea:c.instructions+=179;goto B4415ea;
case 0x4415ee:c.instructions+=178;goto B4415ee;
case 0x4415f1:c.instructions+=177;goto B4415f1;
case 0x4415f3:c.instructions+=176;goto B4415f3;
case 0x4415f7:c.instructions+=175;goto B4415f7;
case 0x4415f9:c.instructions+=174;goto B4415f9;
case 0x4415fb:c.instructions+=173;goto B4415fb;
case 0x441602:c.instructions+=172;goto B441602;
case 0x441606:c.instructions+=171;goto B441606;
case 0x441609:c.instructions+=170;goto B441609;
case 0x44160d:c.instructions+=169;goto B44160d;
case 0x441610:c.instructions+=168;goto B441610;
case 0x441612:c.instructions+=167;goto B441612;
case 0x441616:c.instructions+=166;goto B441616;
case 0x441619:c.instructions+=165;goto B441619;
case 0x44161b:c.instructions+=164;goto B44161b;
case 0x44161f:c.instructions+=163;goto B44161f;
case 0x441621:c.instructions+=162;goto B441621;
case 0x441623:c.instructions+=161;goto B441623;
case 0x44162a:c.instructions+=160;goto B44162a;
case 0x44162e:c.instructions+=159;goto B44162e;
case 0x441631:c.instructions+=158;goto B441631;
case 0x441635:c.instructions+=157;goto B441635;
case 0x441638:c.instructions+=156;goto B441638;
case 0x44163a:c.instructions+=155;goto B44163a;
case 0x44163e:c.instructions+=154;goto B44163e;
case 0x441641:c.instructions+=153;goto B441641;
case 0x441643:c.instructions+=152;goto B441643;
case 0x441647:c.instructions+=151;goto B441647;
case 0x441649:c.instructions+=150;goto B441649;
case 0x44164b:c.instructions+=149;goto B44164b;
case 0x441652:c.instructions+=148;goto B441652;
case 0x441656:c.instructions+=147;goto B441656;
case 0x441659:c.instructions+=146;goto B441659;
case 0x44165d:c.instructions+=145;goto B44165d;
case 0x441660:c.instructions+=144;goto B441660;
case 0x441662:c.instructions+=143;goto B441662;
case 0x441666:c.instructions+=142;goto B441666;
case 0x441669:c.instructions+=141;goto B441669;
case 0x44166b:c.instructions+=140;goto B44166b;
case 0x44166f:c.instructions+=139;goto B44166f;
case 0x441672:c.instructions+=138;goto B441672;
case 0x441674:c.instructions+=137;goto B441674;
case 0x44167b:c.instructions+=136;goto B44167b;
case 0x44167f:c.instructions+=135;goto B44167f;
case 0x441682:c.instructions+=134;goto B441682;
case 0x441686:c.instructions+=133;goto B441686;
case 0x441689:c.instructions+=132;goto B441689;
case 0x44168b:c.instructions+=131;goto B44168b;
case 0x44168f:c.instructions+=130;goto B44168f;
case 0x441692:c.instructions+=129;goto B441692;
case 0x441694:c.instructions+=128;goto B441694;
case 0x441698:c.instructions+=127;goto B441698;
case 0x44169b:c.instructions+=126;goto B44169b;
case 0x44169d:c.instructions+=125;goto B44169d;
case 0x4416a4:c.instructions+=124;goto B4416a4;
case 0x4416a8:c.instructions+=123;goto B4416a8;
case 0x4416ab:c.instructions+=122;goto B4416ab;
case 0x4416af:c.instructions+=121;goto B4416af;
case 0x4416b2:c.instructions+=120;goto B4416b2;
case 0x4416b4:c.instructions+=119;goto B4416b4;
case 0x4416b8:c.instructions+=118;goto B4416b8;
case 0x4416bb:c.instructions+=117;goto B4416bb;
case 0x4416bd:c.instructions+=116;goto B4416bd;
case 0x4416c1:c.instructions+=115;goto B4416c1;
case 0x4416c4:c.instructions+=114;goto B4416c4;
case 0x4416c6:c.instructions+=113;goto B4416c6;
case 0x4416cd:c.instructions+=112;goto B4416cd;
case 0x4416d1:c.instructions+=111;goto B4416d1;
case 0x4416d4:c.instructions+=110;goto B4416d4;
case 0x4416d8:c.instructions+=109;goto B4416d8;
case 0x4416db:c.instructions+=108;goto B4416db;
case 0x4416dd:c.instructions+=107;goto B4416dd;
case 0x4416e1:c.instructions+=106;goto B4416e1;
case 0x4416e4:c.instructions+=105;goto B4416e4;
case 0x4416e6:c.instructions+=104;goto B4416e6;
case 0x4416ea:c.instructions+=103;goto B4416ea;
case 0x4416ed:c.instructions+=102;goto B4416ed;
case 0x4416ef:c.instructions+=101;goto B4416ef;
case 0x4416f6:c.instructions+=100;goto B4416f6;
case 0x4416fa:c.instructions+=99;goto B4416fa;
case 0x4416fd:c.instructions+=98;goto B4416fd;
case 0x441701:c.instructions+=97;goto B441701;
case 0x441704:c.instructions+=96;goto B441704;
case 0x441706:c.instructions+=95;goto B441706;
case 0x44170a:c.instructions+=94;goto B44170a;
case 0x44170d:c.instructions+=93;goto B44170d;
case 0x44170f:c.instructions+=92;goto B44170f;
case 0x441713:c.instructions+=91;goto B441713;
case 0x441716:c.instructions+=90;goto B441716;
case 0x441718:c.instructions+=89;goto B441718;
case 0x44171f:c.instructions+=88;goto B44171f;
case 0x441723:c.instructions+=87;goto B441723;
case 0x441726:c.instructions+=86;goto B441726;
case 0x44172a:c.instructions+=85;goto B44172a;
case 0x44172d:c.instructions+=84;goto B44172d;
case 0x44172f:c.instructions+=83;goto B44172f;
case 0x441733:c.instructions+=82;goto B441733;
case 0x441736:c.instructions+=81;goto B441736;
case 0x441738:c.instructions+=80;goto B441738;
case 0x44173c:c.instructions+=79;goto B44173c;
case 0x44173f:c.instructions+=78;goto B44173f;
case 0x441741:c.instructions+=77;goto B441741;
case 0x441748:c.instructions+=76;goto B441748;
case 0x44174c:c.instructions+=75;goto B44174c;
case 0x44174f:c.instructions+=74;goto B44174f;
case 0x441753:c.instructions+=73;goto B441753;
case 0x441756:c.instructions+=72;goto B441756;
case 0x441758:c.instructions+=71;goto B441758;
case 0x44175c:c.instructions+=70;goto B44175c;
case 0x44175f:c.instructions+=69;goto B44175f;
case 0x441761:c.instructions+=68;goto B441761;
case 0x441765:c.instructions+=67;goto B441765;
case 0x441768:c.instructions+=66;goto B441768;
case 0x44176a:c.instructions+=65;goto B44176a;
case 0x441771:c.instructions+=64;goto B441771;
case 0x441775:c.instructions+=63;goto B441775;
case 0x441778:c.instructions+=62;goto B441778;
case 0x44177c:c.instructions+=61;goto B44177c;
case 0x44177f:c.instructions+=60;goto B44177f;
case 0x441781:c.instructions+=59;goto B441781;
case 0x441785:c.instructions+=58;goto B441785;
case 0x441788:c.instructions+=57;goto B441788;
case 0x44178a:c.instructions+=56;goto B44178a;
case 0x44178e:c.instructions+=55;goto B44178e;
case 0x441791:c.instructions+=54;goto B441791;
case 0x441793:c.instructions+=53;goto B441793;
case 0x44179a:c.instructions+=52;goto B44179a;
case 0x44179e:c.instructions+=51;goto B44179e;
case 0x4417a1:c.instructions+=50;goto B4417a1;
case 0x4417a5:c.instructions+=49;goto B4417a5;
case 0x4417a8:c.instructions+=48;goto B4417a8;
case 0x4417aa:c.instructions+=47;goto B4417aa;
case 0x4417ae:c.instructions+=46;goto B4417ae;
case 0x4417b1:c.instructions+=45;goto B4417b1;
case 0x4417b3:c.instructions+=44;goto B4417b3;
case 0x4417b7:c.instructions+=43;goto B4417b7;
case 0x4417ba:c.instructions+=42;goto B4417ba;
case 0x4417bc:c.instructions+=41;goto B4417bc;
case 0x4417c3:c.instructions+=40;goto B4417c3;
case 0x4417c7:c.instructions+=39;goto B4417c7;
case 0x4417ca:c.instructions+=38;goto B4417ca;
case 0x4417ce:c.instructions+=37;goto B4417ce;
case 0x4417d1:c.instructions+=36;goto B4417d1;
case 0x4417d3:c.instructions+=35;goto B4417d3;
case 0x4417d7:c.instructions+=34;goto B4417d7;
case 0x4417da:c.instructions+=33;goto B4417da;
case 0x4417dc:c.instructions+=32;goto B4417dc;
case 0x4417e0:c.instructions+=31;goto B4417e0;
case 0x4417e3:c.instructions+=30;goto B4417e3;
case 0x4417e5:c.instructions+=29;goto B4417e5;
case 0x4417ec:c.instructions+=28;goto B4417ec;
case 0x4417f3:c.instructions+=27;goto B4417f3;
case 0x4417f7:c.instructions+=26;goto B4417f7;
case 0x4417f8:c.instructions+=25;goto B4417f8;
case 0x4417fb:c.instructions+=24;goto B4417fb;
case 0x4417fc:c.instructions+=23;goto B4417fc;
case 0x441800:c.instructions+=22;goto B441800;
case 0x441803:c.instructions+=21;goto B441803;
case 0x441805:c.instructions+=20;goto B441805;
case 0x441809:c.instructions+=19;goto B441809;
case 0x44180c:c.instructions+=18;goto B44180c;
case 0x44180e:c.instructions+=17;goto B44180e;
case 0x441812:c.instructions+=16;goto B441812;
case 0x441815:c.instructions+=15;goto B441815;
case 0x441817:c.instructions+=14;goto B441817;
case 0x44181e:c.instructions+=13;goto B44181e;
case 0x441822:c.instructions+=12;goto B441822;
case 0x441825:c.instructions+=11;goto B441825;
case 0x441829:c.instructions+=10;goto B441829;
case 0x44182c:c.instructions+=9;goto B44182c;
case 0x44182e:c.instructions+=8;goto B44182e;
case 0x441832:c.instructions+=7;goto B441832;
case 0x441835:c.instructions+=6;goto B441835;
case 0x441837:c.instructions+=5;goto B441837;
case 0x44183b:c.instructions+=4;goto B44183b;
case 0x44183e:c.instructions+=3;goto B44183e;
case 0x441840:c.instructions+=2;goto B441840;
case 0x441847:c.instructions+=1;goto B441847;
case 0x44184c:goto L44184c;
case 0x44184f:c.instructions+=4;goto B44184f;
case 0x441850:c.instructions+=3;goto B441850;
case 0x441852:c.instructions+=2;goto B441852;
case 0x441853:c.instructions+=1;goto B441853;
case 0x441860:goto L441860;
case 0x441866:c.instructions+=1;goto B441866;
case 0x441870:goto L441870;
case 0x441875:c.instructions+=4;goto B441875;
case 0x441876:c.instructions+=3;goto B441876;
case 0x441878:c.instructions+=2;goto B441878;
case 0x44187e:c.instructions+=1;goto B44187e;
case 0x441880:goto L441880;
case 0x441881:c.instructions+=1;goto B441881;
case 0x441886:goto L441886;
case 0x441889:goto L441889;
case 0x44188b:c.instructions+=2;goto B44188b;
case 0x44188c:c.instructions+=1;goto B44188c;
case 0x441890:goto L441890;
case 0x441893:c.instructions+=1;goto B441893;
case 0x4418a0:goto L4418a0;
case 0x4418a1:c.instructions+=3;goto B4418a1;
case 0x4418a7:c.instructions+=2;goto B4418a7;
case 0x4418a9:c.instructions+=1;goto B4418a9;
case 0x4418ab:goto L4418ab;
case 0x4418b0:c.instructions+=1;goto B4418b0;
case 0x4418b2:goto L4418b2;
case 0x4418b7:c.instructions+=6;goto B4418b7;
case 0x4418bd:c.instructions+=5;goto B4418bd;
case 0x4418c1:c.instructions+=4;goto B4418c1;
case 0x4418c5:c.instructions+=3;goto B4418c5;
case 0x4418cb:c.instructions+=2;goto B4418cb;
case 0x4418cc:c.instructions+=1;goto B4418cc;
case 0x4418cd:goto L4418cd;
case 0x4418d3:c.instructions+=2;goto B4418d3;
case 0x4418d4:c.instructions+=1;goto B4418d4;
case 0x4418e0:goto L4418e0;
case 0x4418e4:c.instructions+=13;goto B4418e4;
case 0x4418e5:c.instructions+=12;goto B4418e5;
case 0x4418e6:c.instructions+=11;goto B4418e6;
case 0x4418e8:c.instructions+=10;goto B4418e8;
case 0x4418ec:c.instructions+=9;goto B4418ec;
case 0x4418ee:c.instructions+=8;goto B4418ee;
case 0x4418ef:c.instructions+=7;goto B4418ef;
case 0x4418f1:c.instructions+=6;goto B4418f1;
case 0x4418f4:c.instructions+=5;goto B4418f4;
case 0x4418f5:c.instructions+=4;goto B4418f5;
case 0x4418f7:c.instructions+=3;goto B4418f7;
case 0x4418f9:c.instructions+=2;goto B4418f9;
case 0x4418fb:c.instructions+=1;goto B4418fb;
case 0x4418fd:goto L4418fd;
case 0x4418ff:goto L4418ff;
case 0x441901:c.instructions+=1;goto B441901;
case 0x441903:goto L441903;
case 0x441909:c.instructions+=4;goto B441909;
case 0x44190d:c.instructions+=3;goto B44190d;
case 0x44190e:c.instructions+=2;goto B44190e;
case 0x44190f:c.instructions+=1;goto B44190f;
case 0x441912:goto L441912;
case 0x441913:c.instructions+=3;goto B441913;
case 0x441915:c.instructions+=2;goto B441915;
case 0x441916:c.instructions+=1;goto B441916;
case 0x441920:goto L441920;
case 0x441926:c.instructions+=4;goto B441926;
case 0x44192c:c.instructions+=3;goto B44192c;
case 0x44192e:c.instructions+=2;goto B44192e;
case 0x441931:c.instructions+=1;goto B441931;
case 0x441933:goto L441933;
case 0x441938:c.instructions+=1;goto B441938;
case 0x441939:goto L441939;
case 0x44193b:c.instructions+=1;goto B44193b;
case 0x441940:goto L441940;
case 0x441944:c.instructions+=6;goto B441944;
case 0x441948:c.instructions+=5;goto B441948;
case 0x44194b:c.instructions+=4;goto B44194b;
case 0x44194d:c.instructions+=3;goto B44194d;
case 0x44194f:c.instructions+=2;goto B44194f;
case 0x441952:c.instructions+=1;goto B441952;
case 0x441954:goto L441954;
case 0x44195a:goto L44195a;
case 0x441960:goto L441960;
case 0x441964:c.instructions+=6;goto B441964;
case 0x441968:c.instructions+=5;goto B441968;
case 0x44196b:c.instructions+=4;goto B44196b;
case 0x44196e:c.instructions+=3;goto B44196e;
case 0x441970:c.instructions+=2;goto B441970;
case 0x441973:c.instructions+=1;goto B441973;
case 0x441975:goto L441975;
case 0x44197b:goto L44197b;
case 0x441980:goto L441980;
case 0x441984:c.instructions+=6;goto B441984;
case 0x441988:c.instructions+=5;goto B441988;
case 0x44198a:c.instructions+=4;goto B44198a;
case 0x44198d:c.instructions+=3;goto B44198d;
case 0x44198f:c.instructions+=2;goto B44198f;
case 0x441992:c.instructions+=1;goto B441992;
case 0x441994:goto L441994;
case 0x44199a:goto L44199a;
case 0x4419a0:goto L4419a0;
case 0x4419a4:c.instructions+=35;goto B4419a4;
case 0x4419a6:c.instructions+=34;goto B4419a6;
case 0x4419a9:c.instructions+=33;goto B4419a9;
case 0x4419ad:c.instructions+=32;goto B4419ad;
case 0x4419b0:c.instructions+=31;goto B4419b0;
case 0x4419b5:c.instructions+=30;goto B4419b5;
case 0x4419b7:c.instructions+=29;goto B4419b7;
case 0x4419b9:c.instructions+=28;goto B4419b9;
case 0x4419bc:c.instructions+=27;goto B4419bc;
case 0x4419bf:c.instructions+=26;goto B4419bf;
case 0x4419c2:c.instructions+=25;goto B4419c2;
case 0x4419c6:c.instructions+=24;goto B4419c6;
case 0x4419ca:c.instructions+=23;goto B4419ca;
case 0x4419cb:c.instructions+=22;goto B4419cb;
case 0x4419cf:c.instructions+=21;goto B4419cf;
case 0x4419d2:c.instructions+=20;goto B4419d2;
case 0x4419d6:c.instructions+=19;goto B4419d6;
case 0x4419d9:c.instructions+=18;goto B4419d9;
case 0x4419dd:c.instructions+=17;goto B4419dd;
case 0x4419e0:c.instructions+=16;goto B4419e0;
case 0x4419e3:c.instructions+=15;goto B4419e3;
case 0x4419e6:c.instructions+=14;goto B4419e6;
case 0x4419e9:c.instructions+=13;goto B4419e9;
case 0x4419ed:c.instructions+=12;goto B4419ed;
case 0x4419f1:c.instructions+=11;goto B4419f1;
case 0x4419f7:c.instructions+=10;goto B4419f7;
case 0x4419fb:c.instructions+=9;goto B4419fb;
case 0x441a01:c.instructions+=8;goto B441a01;
case 0x441a04:c.instructions+=7;goto B441a04;
case 0x441a07:c.instructions+=6;goto B441a07;
case 0x441a0a:c.instructions+=5;goto B441a0a;
case 0x441a0d:c.instructions+=4;goto B441a0d;
case 0x441a14:c.instructions+=3;goto B441a14;
case 0x441a1b:c.instructions+=2;goto B441a1b;
case 0x441a1c:c.instructions+=1;goto B441a1c;
case 0x441a20:goto L441a20;
case 0x441a24:c.instructions+=38;goto B441a24;
case 0x441a26:c.instructions+=37;goto B441a26;
case 0x441a28:c.instructions+=36;goto B441a28;
case 0x441a2b:c.instructions+=35;goto B441a2b;
case 0x441a2d:c.instructions+=34;goto B441a2d;
case 0x441a2f:c.instructions+=33;goto B441a2f;
case 0x441a32:c.instructions+=32;goto B441a32;
case 0x441a35:c.instructions+=31;goto B441a35;
case 0x441a38:c.instructions+=30;goto B441a38;
case 0x441a3c:c.instructions+=29;goto B441a3c;
case 0x441a3d:c.instructions+=28;goto B441a3d;
case 0x441a41:c.instructions+=27;goto B441a41;
case 0x441a44:c.instructions+=26;goto B441a44;
case 0x441a49:c.instructions+=25;goto B441a49;
case 0x441a4d:c.instructions+=24;goto B441a4d;
case 0x441a50:c.instructions+=23;goto B441a50;
case 0x441a54:c.instructions+=22;goto B441a54;
case 0x441a57:c.instructions+=21;goto B441a57;
case 0x441a5a:c.instructions+=20;goto B441a5a;
case 0x441a5d:c.instructions+=19;goto B441a5d;
case 0x441a60:c.instructions+=18;goto B441a60;
case 0x441a63:c.instructions+=17;goto B441a63;
case 0x441a67:c.instructions+=16;goto B441a67;
case 0x441a68:c.instructions+=15;goto B441a68;
case 0x441a6c:c.instructions+=14;goto B441a6c;
case 0x441a6f:c.instructions+=13;goto B441a6f;
case 0x441a72:c.instructions+=12;goto B441a72;
case 0x441a74:c.instructions+=11;goto B441a74;
case 0x441a7a:c.instructions+=10;goto B441a7a;
case 0x441a7b:c.instructions+=9;goto B441a7b;
case 0x441a82:c.instructions+=8;goto B441a82;
case 0x441a85:c.instructions+=7;goto B441a85;
case 0x441a88:c.instructions+=6;goto B441a88;
case 0x441a8b:c.instructions+=5;goto B441a8b;
case 0x441a8e:c.instructions+=4;goto B441a8e;
case 0x441a94:c.instructions+=3;goto B441a94;
case 0x441a9b:c.instructions+=2;goto B441a9b;
case 0x441a9c:c.instructions+=1;goto B441a9c;
case 0x441aa0:goto L441aa0;
case 0x441aa3:c.instructions+=16;goto B441aa3;
case 0x441aa6:c.instructions+=15;goto B441aa6;
case 0x441aa8:c.instructions+=14;goto B441aa8;
case 0x441aab:c.instructions+=13;goto B441aab;
case 0x441aad:c.instructions+=12;goto B441aad;
case 0x441ab1:c.instructions+=11;goto B441ab1;
case 0x441ab4:c.instructions+=10;goto B441ab4;
case 0x441ab7:c.instructions+=9;goto B441ab7;
case 0x441aba:c.instructions+=8;goto B441aba;
case 0x441abd:c.instructions+=7;goto B441abd;
case 0x441ac1:c.instructions+=6;goto B441ac1;
case 0x441ac4:c.instructions+=5;goto B441ac4;
case 0x441ac7:c.instructions+=4;goto B441ac7;
case 0x441aca:c.instructions+=3;goto B441aca;
case 0x441acd:c.instructions+=2;goto B441acd;
case 0x441ad4:c.instructions+=1;goto B441ad4;
case 0x441ae0:goto L441ae0;
case 0x441ae3:c.instructions+=2;goto B441ae3;
case 0x441ae6:c.instructions+=1;goto B441ae6;
case 0x441af0:goto L441af0;
case 0x441af1:c.instructions+=6;goto B441af1;
case 0x441af2:c.instructions+=5;goto B441af2;
case 0x441af6:c.instructions+=4;goto B441af6;
case 0x441af9:c.instructions+=3;goto B441af9;
case 0x441afb:c.instructions+=2;goto B441afb;
case 0x441b03:c.instructions+=1;goto B441b03;
case 0x441b08:goto L441b08;
case 0x441b0a:c.instructions+=1;goto B441b0a;
case 0x441b0c:goto L441b0c;
case 0x441b0e:c.instructions+=1;goto B441b0e;
case 0x441b13:goto L441b13;
case 0x441b19:c.instructions+=5;goto B441b19;
case 0x441b1a:c.instructions+=4;goto B441b1a;
case 0x441b20:c.instructions+=3;goto B441b20;
case 0x441b26:c.instructions+=2;goto B441b26;
case 0x441b27:c.instructions+=1;goto B441b27;
case 0x441b28:goto L441b28;
case 0x441b2c:c.instructions+=4;goto B441b2c;
case 0x441b2d:c.instructions+=3;goto B441b2d;
case 0x441b33:c.instructions+=2;goto B441b33;
case 0x441b34:c.instructions+=1;goto B441b34;
case 0x441b40:goto L441b40;
case 0x441b43:c.instructions+=8;goto B441b43;
case 0x441b44:c.instructions+=7;goto B441b44;
case 0x441b48:c.instructions+=6;goto B441b48;
case 0x441b4e:c.instructions+=5;goto B441b4e;
case 0x441b56:c.instructions+=4;goto B441b56;
case 0x441b5c:c.instructions+=3;goto B441b5c;
case 0x441b5e:c.instructions+=2;goto B441b5e;
case 0x441b61:c.instructions+=1;goto B441b61;
case 0x441b63:goto L441b63;
case 0x441b6b:goto L441b6b;
case 0x441b6d:c.instructions+=1;goto B441b6d;
case 0x441b72:goto L441b72;
case 0x441b74:c.instructions+=1;goto B441b74;
case 0x441b76:goto L441b76;
case 0x441b78:c.instructions+=9;goto B441b78;
case 0x441b7c:c.instructions+=8;goto B441b7c;
case 0x441b7d:c.instructions+=7;goto B441b7d;
case 0x441b81:c.instructions+=6;goto B441b81;
case 0x441b82:c.instructions+=5;goto B441b82;
case 0x441b87:c.instructions+=4;goto B441b87;
case 0x441b89:c.instructions+=3;goto B441b89;
case 0x441b91:c.instructions+=2;goto B441b91;
case 0x441b99:c.instructions+=1;goto B441b99;
case 0x441b9e:goto L441b9e;
case 0x441ba0:c.instructions+=5;goto B441ba0;
case 0x441ba4:c.instructions+=4;goto B441ba4;
case 0x441baa:c.instructions+=3;goto B441baa;
case 0x441bac:c.instructions+=2;goto B441bac;
case 0x441baf:c.instructions+=1;goto B441baf;
case 0x441bb1:goto L441bb1;
case 0x441bb5:c.instructions+=4;goto B441bb5;
case 0x441bbb:c.instructions+=3;goto B441bbb;
case 0x441bbd:c.instructions+=2;goto B441bbd;
case 0x441bc0:c.instructions+=1;goto B441bc0;
case 0x441bc2:goto L441bc2;
case 0x441bc8:c.instructions+=4;goto B441bc8;
case 0x441bc9:c.instructions+=3;goto B441bc9;
case 0x441bcf:c.instructions+=2;goto B441bcf;
case 0x441bd2:c.instructions+=1;goto B441bd2;
case 0x441bd3:goto L441bd3;
case 0x441bd7:c.instructions+=4;goto B441bd7;
case 0x441bd8:c.instructions+=3;goto B441bd8;
case 0x441bde:c.instructions+=2;goto B441bde;
case 0x441be1:c.instructions+=1;goto B441be1;
case 0x441bf0:goto L441bf0;
case 0x441bf4:c.instructions+=7;goto B441bf4;
case 0x441bfa:c.instructions+=6;goto B441bfa;
case 0x441c00:c.instructions+=5;goto B441c00;
case 0x441c04:c.instructions+=4;goto B441c04;
case 0x441c0a:c.instructions+=3;goto B441c0a;
case 0x441c0c:c.instructions+=2;goto B441c0c;
case 0x441c0f:c.instructions+=1;goto B441c0f;
case 0x441c11:goto L441c11;
case 0x441c14:c.instructions+=4;goto B441c14;
case 0x441c16:c.instructions+=3;goto B441c16;
case 0x441c18:c.instructions+=2;goto B441c18;
case 0x441c1e:c.instructions+=1;goto B441c1e;
case 0x441c20:goto L441c20;
case 0x441c22:c.instructions+=1;goto B441c22;
case 0x441c25:goto L441c25;
case 0x441c29:c.instructions+=10;goto B441c29;
case 0x441c2b:c.instructions+=9;goto B441c2b;
case 0x441c31:c.instructions+=8;goto B441c31;
case 0x441c37:c.instructions+=7;goto B441c37;
case 0x441c3b:c.instructions+=6;goto B441c3b;
case 0x441c3d:c.instructions+=5;goto B441c3d;
case 0x441c41:c.instructions+=4;goto B441c41;
case 0x441c47:c.instructions+=3;goto B441c47;
case 0x441c49:c.instructions+=2;goto B441c49;
case 0x441c4c:c.instructions+=1;goto B441c4c;
case 0x441c4e:goto L441c4e;
case 0x441c52:c.instructions+=5;goto B441c52;
case 0x441c58:c.instructions+=4;goto B441c58;
case 0x441c5c:c.instructions+=3;goto B441c5c;
case 0x441c5e:c.instructions+=2;goto B441c5e;
case 0x441c61:c.instructions+=1;goto B441c61;
case 0x441c63:goto L441c63;
case 0x441c65:c.instructions+=1;goto B441c65;
case 0x441c6b:goto L441c6b;
case 0x441c71:c.instructions+=1;goto B441c71;
case 0x441c72:goto L441c72;
case 0x441c78:c.instructions+=2;goto B441c78;
case 0x441c7e:c.instructions+=1;goto B441c7e;
case 0x441c80:goto L441c80;
case 0x441c84:c.instructions+=6;goto B441c84;
case 0x441c8a:c.instructions+=5;goto B441c8a;
case 0x441c90:c.instructions+=4;goto B441c90;
case 0x441c96:c.instructions+=3;goto B441c96;
case 0x441c98:c.instructions+=2;goto B441c98;
case 0x441c9b:c.instructions+=1;goto B441c9b;
case 0x441c9d:goto L441c9d;
case 0x441ca0:c.instructions+=2;goto B441ca0;
case 0x441ca2:c.instructions+=1;goto B441ca2;
case 0x441ca4:goto L441ca4;
case 0x441ca6:c.instructions+=1;goto B441ca6;
case 0x441cab:goto L441cab;
case 0x441cad:c.instructions+=6;goto B441cad;
case 0x441cb3:c.instructions+=5;goto B441cb3;
case 0x441cb7:c.instructions+=4;goto B441cb7;
case 0x441cbd:c.instructions+=3;goto B441cbd;
case 0x441cbf:c.instructions+=2;goto B441cbf;
case 0x441cc2:c.instructions+=1;goto B441cc2;
case 0x441cc4:goto L441cc4;
case 0x441cc8:c.instructions+=5;goto B441cc8;
case 0x441cce:c.instructions+=4;goto B441cce;
case 0x441cd2:c.instructions+=3;goto B441cd2;
case 0x441cd4:c.instructions+=2;goto B441cd4;
case 0x441cd7:c.instructions+=1;goto B441cd7;
case 0x441cd9:goto L441cd9;
case 0x441cdb:c.instructions+=1;goto B441cdb;
case 0x441ce1:goto L441ce1;
case 0x441ce7:c.instructions+=1;goto B441ce7;
case 0x441ce8:goto L441ce8;
case 0x441cee:c.instructions+=2;goto B441cee;
case 0x441cf4:c.instructions+=1;goto B441cf4;
case 0x441d00:goto L441d00;
case 0x441d04:c.instructions+=3;goto B441d04;
case 0x441d07:c.instructions+=2;goto B441d07;
case 0x441d09:c.instructions+=1;goto B441d09;
case 0x441d0b:goto L441d0b;
case 0x441d10:goto L441d10;
case 0x441d16:c.instructions+=3;goto B441d16;
case 0x441d18:c.instructions+=2;goto B441d18;
case 0x441d1b:c.instructions+=1;goto B441d1b;
case 0x441d1d:goto L441d1d;
case 0x441d22:c.instructions+=1;goto B441d22;
case 0x441d23:goto L441d23;
case 0x441d25:c.instructions+=1;goto B441d25;
case 0x441d26:goto L441d26;
case 0x441d28:c.instructions+=1;goto B441d28;
case 0x441d30:goto L441d30;
case 0x441d31:c.instructions+=8;goto B441d31;
case 0x441d35:c.instructions+=7;goto B441d35;
case 0x441d3b:c.instructions+=6;goto B441d3b;
case 0x441d41:c.instructions+=5;goto B441d41;
case 0x441d47:c.instructions+=4;goto B441d47;
case 0x441d4b:c.instructions+=3;goto B441d4b;
case 0x441d4d:c.instructions+=2;goto B441d4d;
case 0x441d50:c.instructions+=1;goto B441d50;
case 0x441d56:goto L441d56;
case 0x441d58:c.instructions+=5;goto B441d58;
case 0x441d5e:c.instructions+=4;goto B441d5e;
case 0x441d60:c.instructions+=3;goto B441d60;
case 0x441d62:c.instructions+=2;goto B441d62;
case 0x441d65:c.instructions+=1;goto B441d65;
case 0x441d67:goto L441d67;
case 0x441d69:c.instructions+=1;goto B441d69;
case 0x441d6f:goto L441d6f;
case 0x441d71:c.instructions+=5;goto B441d71;
case 0x441d73:c.instructions+=4;goto B441d73;
case 0x441d75:c.instructions+=3;goto B441d75;
case 0x441d77:c.instructions+=2;goto B441d77;
case 0x441d7a:c.instructions+=1;goto B441d7a;
case 0x441d80:goto L441d80;
case 0x441d82:c.instructions+=11;goto B441d82;
case 0x441d88:c.instructions+=10;goto B441d88;
case 0x441d8e:c.instructions+=9;goto B441d8e;
case 0x441d94:c.instructions+=8;goto B441d94;
case 0x441d9a:c.instructions+=7;goto B441d9a;
case 0x441da0:c.instructions+=6;goto B441da0;
case 0x441da6:c.instructions+=5;goto B441da6;
case 0x441daa:c.instructions+=4;goto B441daa;
case 0x441db0:c.instructions+=3;goto B441db0;
case 0x441db2:c.instructions+=2;goto B441db2;
case 0x441db5:c.instructions+=1;goto B441db5;
case 0x441dbb:goto L441dbb;
case 0x441dbf:c.instructions+=5;goto B441dbf;
case 0x441dc5:c.instructions+=4;goto B441dc5;
case 0x441dc9:c.instructions+=3;goto B441dc9;
case 0x441dcb:c.instructions+=2;goto B441dcb;
case 0x441dce:c.instructions+=1;goto B441dce;
case 0x441dd0:goto L441dd0;
case 0x441dd2:c.instructions+=1;goto B441dd2;
case 0x441dd8:goto L441dd8;
case 0x441ddc:c.instructions+=5;goto B441ddc;
case 0x441de0:c.instructions+=4;goto B441de0;
case 0x441de6:c.instructions+=3;goto B441de6;
case 0x441de8:c.instructions+=2;goto B441de8;
case 0x441deb:c.instructions+=1;goto B441deb;
case 0x441ded:goto L441ded;
case 0x441df1:c.instructions+=5;goto B441df1;
case 0x441df7:c.instructions+=4;goto B441df7;
case 0x441dfb:c.instructions+=3;goto B441dfb;
case 0x441dfd:c.instructions+=2;goto B441dfd;
case 0x441e00:c.instructions+=1;goto B441e00;
case 0x441e02:goto L441e02;
case 0x441e04:c.instructions+=1;goto B441e04;
case 0x441e0a:goto L441e0a;
case 0x441e0e:c.instructions+=5;goto B441e0e;
case 0x441e10:c.instructions+=4;goto B441e10;
case 0x441e12:c.instructions+=3;goto B441e12;
case 0x441e14:c.instructions+=2;goto B441e14;
case 0x441e17:c.instructions+=1;goto B441e17;
case 0x441e19:goto L441e19;
case 0x441e1f:c.instructions+=4;goto B441e1f;
case 0x441e25:c.instructions+=3;goto B441e25;
case 0x441e27:c.instructions+=2;goto B441e27;
case 0x441e2a:c.instructions+=1;goto B441e2a;
case 0x441e2c:goto L441e2c;
case 0x441e32:c.instructions+=1;goto B441e32;
case 0x441e34:goto L441e34;
case 0x441e3a:c.instructions+=1;goto B441e3a;
case 0x441e3f:goto L441e3f;
case 0x441e45:c.instructions+=1;goto B441e45;
case 0x441e47:goto L441e47;
case 0x441e4d:c.instructions+=1;goto B441e4d;
case 0x441e4f:goto L441e4f;
case 0x441e55:goto L441e55;
case 0x441e5b:c.instructions+=3;goto B441e5b;
case 0x441e5d:c.instructions+=2;goto B441e5d;
case 0x441e60:c.instructions+=1;goto B441e60;
case 0x441e62:goto L441e62;
case 0x441e64:c.instructions+=6;goto B441e64;
case 0x441e6a:c.instructions+=5;goto B441e6a;
case 0x441e70:c.instructions+=4;goto B441e70;
case 0x441e76:c.instructions+=3;goto B441e76;
case 0x441e7c:c.instructions+=2;goto B441e7c;
case 0x441e7e:c.instructions+=1;goto B441e7e;
case 0x441e82:goto L441e82;
case 0x441e88:c.instructions+=2;goto B441e88;
case 0x441e89:c.instructions+=1;goto B441e89;
case 0x441e90:goto L441e90;
case 0x441e91:c.instructions+=7;goto B441e91;
case 0x441e95:c.instructions+=6;goto B441e95;
case 0x441e9b:c.instructions+=5;goto B441e9b;
case 0x441ea3:c.instructions+=4;goto B441ea3;
case 0x441ea9:c.instructions+=3;goto B441ea9;
case 0x441eab:c.instructions+=2;goto B441eab;
case 0x441eae:c.instructions+=1;goto B441eae;
case 0x441eb0:goto L441eb0;
case 0x441eb3:c.instructions+=1;goto B441eb3;
case 0x441eb8:goto L441eb8;
case 0x441eba:c.instructions+=6;goto B441eba;
case 0x441ec0:c.instructions+=5;goto B441ec0;
case 0x441ec6:c.instructions+=4;goto B441ec6;
case 0x441ecc:c.instructions+=3;goto B441ecc;
case 0x441ece:c.instructions+=2;goto B441ece;
case 0x441ed1:c.instructions+=1;goto B441ed1;
case 0x441ed3:goto L441ed3;
case 0x441ed9:c.instructions+=5;goto B441ed9;
case 0x441edd:c.instructions+=4;goto B441edd;
case 0x441ee3:c.instructions+=3;goto B441ee3;
case 0x441ee5:c.instructions+=2;goto B441ee5;
case 0x441ee8:c.instructions+=1;goto B441ee8;
case 0x441eea:goto L441eea;
case 0x441eee:c.instructions+=5;goto B441eee;
case 0x441ef4:c.instructions+=4;goto B441ef4;
case 0x441ef8:c.instructions+=3;goto B441ef8;
case 0x441efa:c.instructions+=2;goto B441efa;
case 0x441efd:c.instructions+=1;goto B441efd;
case 0x441eff:goto L441eff;
case 0x441f01:c.instructions+=1;goto B441f01;
case 0x441f07:goto L441f07;
case 0x441f0b:c.instructions+=4;goto B441f0b;
case 0x441f11:c.instructions+=3;goto B441f11;
case 0x441f15:c.instructions+=2;goto B441f15;
case 0x441f16:c.instructions+=1;goto B441f16;
case 0x441f17:goto L441f17;
case 0x441f1d:c.instructions+=5;goto B441f1d;
case 0x441f21:c.instructions+=4;goto B441f21;
case 0x441f27:c.instructions+=3;goto B441f27;
case 0x441f2b:c.instructions+=2;goto B441f2b;
case 0x441f2c:c.instructions+=1;goto B441f2c;
case 0x441f2d:goto L441f2d;
case 0x441f2f:goto L441f2f;
case 0x441f35:c.instructions+=3;goto B441f35;
case 0x441f39:c.instructions+=2;goto B441f39;
case 0x441f3a:c.instructions+=1;goto B441f3a;
case 0x441f40:goto L441f40;
case 0x441f44:c.instructions+=2;goto B441f44;
case 0x441f47:c.instructions+=1;goto B441f47;
case 0x441f4c:goto L441f4c;
case 0x441f52:c.instructions+=3;goto B441f52;
case 0x441f54:c.instructions+=2;goto B441f54;
case 0x441f57:c.instructions+=1;goto B441f57;
case 0x441f59:goto L441f59;
case 0x441f5e:c.instructions+=1;goto B441f5e;
case 0x441f5f:goto L441f5f;
case 0x441f61:c.instructions+=1;goto B441f61;
case 0x441f70:goto L441f70;
case 0x441f74:c.instructions+=3;goto B441f74;
case 0x441f76:c.instructions+=2;goto B441f76;
case 0x441f7b:c.instructions+=1;goto B441f7b;
case 0x441f80:goto L441f80;
case 0x441f82:c.instructions+=1;goto B441f82;
case 0x441f84:goto L441f84;
case 0x441f87:c.instructions+=3;goto B441f87;
case 0x441f88:c.instructions+=2;goto B441f88;
case 0x441f8d:c.instructions+=1;goto B441f8d;
case 0x441f8f:goto L441f8f;
case 0x441f94:c.instructions+=1;goto B441f94;
case 0x441f95:goto L441f95;
case 0x441f98:c.instructions+=2;goto B441f98;
case 0x441f9f:c.instructions+=1;goto B441f9f;
case 0x441fa0:goto L441fa0;
case 0x441fa4:c.instructions+=3;goto B441fa4;
case 0x441fa6:c.instructions+=2;goto B441fa6;
case 0x441fab:c.instructions+=1;goto B441fab;
case 0x441fb0:goto L441fb0;
case 0x441fb2:c.instructions+=1;goto B441fb2;
case 0x441fb4:goto L441fb4;
case 0x441fb7:c.instructions+=3;goto B441fb7;
case 0x441fb8:c.instructions+=2;goto B441fb8;
case 0x441fbd:c.instructions+=1;goto B441fbd;
case 0x441fbf:goto L441fbf;
case 0x441fc1:c.instructions+=1;goto B441fc1;
case 0x441fc2:goto L441fc2;
case 0x441fc5:c.instructions+=2;goto B441fc5;
case 0x441fcc:c.instructions+=1;goto B441fcc;
case 0x441fd0:goto L441fd0;
case 0x441fd6:c.instructions+=4;goto B441fd6;
case 0x441fdc:c.instructions+=3;goto B441fdc;
case 0x441fde:c.instructions+=2;goto B441fde;
case 0x441fe1:c.instructions+=1;goto B441fe1;
case 0x441fe3:goto L441fe3;
case 0x441fe8:c.instructions+=4;goto B441fe8;
case 0x441fe9:c.instructions+=3;goto B441fe9;
case 0x441fec:c.instructions+=2;goto B441fec;
case 0x441ff1:c.instructions+=1;goto B441ff1;
case 0x441ff3:goto L441ff3;
case 0x441ffd:goto L441ffd;
default:missing_instruction(c.pc);}
B441000:L441000:{c.instructions+=40;NFSU2_TR(0x441000);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B441001:{NFSU2_TR(0x441001);
__builtin_memmove((R+20),(R+16),4);
}
B441003:{NFSU2_TR(0x441003);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B441006:{NFSU2_TR(0x441006);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B441009:{NFSU2_TR(0x441009);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44100c:{NFSU2_TR(0x44100c);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44100f:{NFSU2_TR(0x44100f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B441012:{NFSU2_TR(0x441012);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441015:{NFSU2_TR(0x441015);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441018:{NFSU2_TR(0x441018);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44101a:{NFSU2_TR(0x44101a);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44101c:{NFSU2_TR(0x44101c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44101e:{NFSU2_TR(0x44101e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B441020:{NFSU2_TR(0x441020);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B441023:{NFSU2_TR(0x441023);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441026:{NFSU2_TR(0x441026);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441029:{NFSU2_TR(0x441029);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44102c:{NFSU2_TR(0x44102c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44102e:{NFSU2_TR(0x44102e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B441030:{NFSU2_TR(0x441030);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441033:{NFSU2_TR(0x441033);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441036:{NFSU2_TR(0x441036);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B441038:{NFSU2_TR(0x441038);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44103b:{NFSU2_TR(0x44103b);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44103e:{NFSU2_TR(0x44103e);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441041:{NFSU2_TR(0x441041);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441044:{NFSU2_TR(0x441044);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441046:{NFSU2_TR(0x441046);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B441048:{NFSU2_TR(0x441048);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44104b:{NFSU2_TR(0x44104b);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44104e:{NFSU2_TR(0x44104e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B441050:{NFSU2_TR(0x441050);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B441053:{NFSU2_TR(0x441053);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B441056:{NFSU2_TR(0x441056);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B441058:{NFSU2_TR(0x441058);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44105a:{NFSU2_TR(0x44105a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44105d:{NFSU2_TR(0x44105d);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B441060:{NFSU2_TR(0x441060);
__builtin_memmove((R+16),(R+20),4);
}
B441062:{NFSU2_TR(0x441062);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B441063:{NFSU2_TR(0x441063);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441070:L441070:{c.instructions+=9;NFSU2_TR(0x441070);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B441071:{NFSU2_TR(0x441071);
__builtin_memmove((R+20),(R+16),4);
}
B441073:{NFSU2_TR(0x441073);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B441076:{NFSU2_TR(0x441076);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xa8ull))));
}
B44107c:{NFSU2_TR(0x44107c);
__builtin_memmove((R+0),gp(0x865094),4);
}
B441081:{NFSU2_TR(0x441081);
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
B441083:{NFSU2_TR(0x441083);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B441084:{NFSU2_TR(0x441084);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B441085:{NFSU2_TR(0x441085);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44110e;}}
}
B44108b:L44108b:{c.instructions+=6;NFSU2_TR(0x44108b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44108c:{NFSU2_TR(0x44108c);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B441090:{NFSU2_TR(0x441090);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B441091:{NFSU2_TR(0x441091);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(0x82a480ull));
s4(u32(r4(U+0)),r4(U+4));
}
B441099:{NFSU2_TR(0x441099);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4410a1:{NFSU2_TR(0x4410a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4410a6ull));
TAIL_STATIC(0x4012b0u,401);
}
B4410a6:L4410a6:{c.instructions+=14;NFSU2_TR(0x4410a6);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4410aa:{NFSU2_TR(0x4410aa);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4410b0:{NFSU2_TR(0x4410b0);
w4(R+4,u32(0x10ull));
}
B4410b5:{NFSU2_TR(0x4410b5);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B4410b9:{NFSU2_TR(0x4410b9);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4410bd:{NFSU2_TR(0x4410bd);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4410c1:{NFSU2_TR(0x4410c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4410c9:{NFSU2_TR(0x4410c9);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4410cd:{NFSU2_TR(0x4410cd);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4410d4:{NFSU2_TR(0x4410d4);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4410da:{NFSU2_TR(0x4410da);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4410de:{NFSU2_TR(0x4410de);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4410e2:{NFSU2_TR(0x4410e2);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4410e8:{NFSU2_TR(0x4410e8);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4410ec:L4410ec:{c.instructions+=1;NFSU2_TR(0x4410ec);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4410ee;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4410ecu);}goto L4410ec;}
}
B4410ee:L4410ee:{c.instructions+=4;NFSU2_TR(0x4410ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4410f1:{NFSU2_TR(0x4410f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4410f2:{NFSU2_TR(0x4410f2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4410f3:{NFSU2_TR(0x4410f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4410f8ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B4410f8:L4410f8:{c.instructions+=6;NFSU2_TR(0x4410f8);
u8 U[4];
w4(U+0,u32(0x60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4410fa:{NFSU2_TR(0x4410fa);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4410fe:{NFSU2_TR(0x4410fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4410ff:{NFSU2_TR(0x4410ff);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B441101:{NFSU2_TR(0x441101);
u8 U[4];
w4(U+0,u32(0x787574ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B441106:{NFSU2_TR(0x441106);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44110bull));
TAIL_STATIC(0x4022c0u,402);
}
B44110b:L44110b:{c.instructions+=1;NFSU2_TR(0x44110b);
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
B44110e:L44110e:{c.instructions+=5;NFSU2_TR(0x44110e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44110f:{NFSU2_TR(0x44110f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B441110:{NFSU2_TR(0x441110);
__builtin_memmove((R+16),(R+20),4);
}
B441112:{NFSU2_TR(0x441112);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B441113:{NFSU2_TR(0x441113);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441120:L441120:{c.instructions+=3;NFSU2_TR(0x441120);
__builtin_memmove((R+0),gp(0x883de0),4);
}
B441125:{NFSU2_TR(0x441125);
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
B441127:{NFSU2_TR(0x441127);
if(r1(R+518)){{goto L44113e;}}
}
B441129:L441129:{c.instructions+=5;NFSU2_TR(0x441129);
u8 U[4];
w4(U+0,u32(0xd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44112e:{NFSU2_TR(0x44112e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44112f:{NFSU2_TR(0x44112f);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B441131:{NFSU2_TR(0x441131);
u8 U[4];
w4(U+0,u32(0x787568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B441136:{NFSU2_TR(0x441136);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44113bull));
TAIL_STATIC(0x4022c0u,402);
}
B44113b:L44113b:{c.instructions+=1;NFSU2_TR(0x44113b);
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
B44113e:L44113e:{c.instructions+=1;NFSU2_TR(0x44113e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441140:L441140:{c.instructions+=5;NFSU2_TR(0x441140);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B441141:{NFSU2_TR(0x441141);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B441142:{NFSU2_TR(0x441142);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B441143:{NFSU2_TR(0x441143);
__builtin_memmove((R+24),(R+4),4);
}
B441145:{NFSU2_TR(0x441145);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44114aull));
TAIL_STATIC(0x5b98a0u,5b9);
}
B44114a:L44114a:{c.instructions+=2;NFSU2_TR(0x44114a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44114d:{NFSU2_TR(0x44114d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L441157;}}
}
B44114f:L44114f:{c.instructions+=3;NFSU2_TR(0x44114f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B441152:{NFSU2_TR(0x441152);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x70ull))));
}
B441155:{NFSU2_TR(0x441155);
{goto L44115c;}
}
B441157:L441157:{c.instructions+=2;NFSU2_TR(0x441157);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B441159:{NFSU2_TR(0x441159);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B44115c:L44115c:{c.instructions+=3;NFSU2_TR(0x44115c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B44115e:{NFSU2_TR(0x44115e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B441160:{NFSU2_TR(0x441160);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L441177;}}
}
B441162:L441162:{c.instructions+=2;NFSU2_TR(0x441162);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B441166:{NFSU2_TR(0x441166);
__builtin_memmove((R+4),(R+24),4);
}
B441168:L441168:{c.instructions+=3;NFSU2_TR(0x441168);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+12,u32(s32(s16(r2(U+0)))));
}
B44116b:{NFSU2_TR(0x44116b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B44116d:{NFSU2_TR(0x44116d);
if(r1(R+518)){{goto L44117f;}}
}
B44116f:L44116f:{c.instructions+=4;NFSU2_TR(0x44116f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B441170:{NFSU2_TR(0x441170);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B441173:{NFSU2_TR(0x441173);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B441175:{NFSU2_TR(0x441175);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x441168u);}goto L441168;}}
}
B441177:L441177:{c.instructions+=5;NFSU2_TR(0x441177);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B441178:{NFSU2_TR(0x441178);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B441179:{NFSU2_TR(0x441179);
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
B44117b:{NFSU2_TR(0x44117b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B44117c:{NFSU2_TR(0x44117c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44117f:L44117f:{c.instructions+=6;NFSU2_TR(0x44117f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B441182:{NFSU2_TR(0x441182);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B441183:{NFSU2_TR(0x441183);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+24)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+24)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B441185:{NFSU2_TR(0x441185);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B441186:{NFSU2_TR(0x441186);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B441187:{NFSU2_TR(0x441187);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441190:L441190:{c.instructions+=3;NFSU2_TR(0x441190);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B441194:{NFSU2_TR(0x441194);
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
B441197:{NFSU2_TR(0x441197);
if(r1(R+518)){{goto L4411a5;}}
}
B441199:L441199:{c.instructions+=2;NFSU2_TR(0x441199);
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
B44119b:{NFSU2_TR(0x44119b);
if(r1(R+518)){{goto L4411a5;}}
}
B44119d:L44119d:{c.instructions+=2;NFSU2_TR(0x44119d);
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
B4411a0:{NFSU2_TR(0x4411a0);
if(r1(R+518)){{goto L4411a5;}}
}
B4411a2:L4411a2:{c.instructions+=2;NFSU2_TR(0x4411a2);
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
B4411a4:{NFSU2_TR(0x4411a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4411a5:L4411a5:{c.instructions+=2;NFSU2_TR(0x4411a5);
w4(R+0,u32(0x1ull));
}
B4411aa:{NFSU2_TR(0x4411aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4411b0:L4411b0:{c.instructions+=3;NFSU2_TR(0x4411b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4411b1:{NFSU2_TR(0x4411b1);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4411b5:{NFSU2_TR(0x4411b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4411baull));
TAIL_STATIC(0x75bed4u,75b);
}
B4411ba:L4411ba:{c.instructions+=6;NFSU2_TR(0x4411ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4411be:{NFSU2_TR(0x4411be);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4411c2:{NFSU2_TR(0x4411c2);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4411c6:{NFSU2_TR(0x4411c6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4411c8:{NFSU2_TR(0x4411c8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4411cb:{NFSU2_TR(0x4411cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4411d3;}}
}
B4411cd:L4411cd:{c.instructions+=1;NFSU2_TR(0x4411cd);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4411d3:L4411d3:{c.instructions+=1;NFSU2_TR(0x4411d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4411d8ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4411d8:L4411d8:{c.instructions+=40;NFSU2_TR(0x4411d8);
__builtin_memmove((R+4),(R+0),4);
}
B4411da:{NFSU2_TR(0x4411da);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B4411dd:{NFSU2_TR(0x4411dd);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+0))));
}
B4411df:{NFSU2_TR(0x4411df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4411e3:{NFSU2_TR(0x4411e3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4411e4:{NFSU2_TR(0x4411e4);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4411e8:{NFSU2_TR(0x4411e8);
__builtin_memmove((R+8),(R+0),4);
}
B4411ea:{NFSU2_TR(0x4411ea);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B4411ed:{NFSU2_TR(0x4411ed);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B4411ef:{NFSU2_TR(0x4411ef);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4411f3:{NFSU2_TR(0x4411f3);
__builtin_memmove((R+8),(R+4),4);
}
B4411f5:{NFSU2_TR(0x4411f5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4411f8:{NFSU2_TR(0x4411f8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x3d73ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4411fe:{NFSU2_TR(0x4411fe);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xc0ae5ull))));
}
B441204:{NFSU2_TR(0x441204);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B441207:{NFSU2_TR(0x441207);
__builtin_memmove((R+4),(R+0),4);
}
B441209:{NFSU2_TR(0x441209);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B44120c:{NFSU2_TR(0x44120c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x3d73ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B441212:{NFSU2_TR(0x441212);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x2df722f3ull))));
}
B441218:{NFSU2_TR(0x441218);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7fffffffull))));
}
B44121e:{NFSU2_TR(0x44121e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B441222:{NFSU2_TR(0x441222);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xc0ae5ull))));
}
B441228:{NFSU2_TR(0x441228);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B44122b:{NFSU2_TR(0x44122b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B44122f:{NFSU2_TR(0x44122f);
{u32 ea_=u32(u32(7894400u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441235:{NFSU2_TR(0x441235);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B44123b:{NFSU2_TR(0x44123b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2df722f3ull))));
}
B441241:{NFSU2_TR(0x441241);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441247:{NFSU2_TR(0x441247);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffffffull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44124d:{NFSU2_TR(0x44124d);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B44124f:{NFSU2_TR(0x44124f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B441253:{NFSU2_TR(0x441253);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B441255:{NFSU2_TR(0x441255);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B441259:{NFSU2_TR(0x441259);
{u32 ea_=u32(u32(7894400u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44125f:{NFSU2_TR(0x44125f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B441265:{NFSU2_TR(0x441265);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B441267:{NFSU2_TR(0x441267);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B441269:{NFSU2_TR(0x441269);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B44126b:{NFSU2_TR(0x44126b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44126c:{NFSU2_TR(0x44126c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441270:L441270:{c.instructions+=6;NFSU2_TR(0x441270);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B441273:{NFSU2_TR(0x441273);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B441274:{NFSU2_TR(0x441274);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44127c:{NFSU2_TR(0x44127c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B441284:{NFSU2_TR(0x441284);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44128c:{NFSU2_TR(0x44128c);
w4(R+24,u32(0x6ull));
}
B441291:L441291:{c.instructions+=5;NFSU2_TR(0x441291);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441295:{NFSU2_TR(0x441295);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B441296:{NFSU2_TR(0x441296);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44129a:{NFSU2_TR(0x44129a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44129d:{NFSU2_TR(0x44129d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4412a2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4411b0u);}goto L4411b0;}
}
B4412a2:L4412a2:{c.instructions+=12;NFSU2_TR(0x4412a2);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4412a6:{NFSU2_TR(0x4412a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4412a9:{NFSU2_TR(0x4412a9);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B4412aa:{NFSU2_TR(0x4412aa);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4412ae:{NFSU2_TR(0x4412ae);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4412b2:{NFSU2_TR(0x4412b2);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4412b6:{NFSU2_TR(0x4412b6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B4412b8:{NFSU2_TR(0x4412b8);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4412bc:{NFSU2_TR(0x4412bc);
{u32 ea_=u32(u32(7892844u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4412c2:{NFSU2_TR(0x4412c2);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4412c6:{NFSU2_TR(0x4412c6);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4412ca:{NFSU2_TR(0x4412ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x441291u);}goto L441291;}}
}
B4412cc:L4412cc:{c.instructions+=4;NFSU2_TR(0x4412cc);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4412d0:{NFSU2_TR(0x4412d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4412d1:{NFSU2_TR(0x4412d1);
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
B4412d4:{NFSU2_TR(0x4412d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4412e0:L4412e0:{c.instructions+=6;NFSU2_TR(0x4412e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4412e1:{NFSU2_TR(0x4412e1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4412e3:{NFSU2_TR(0x4412e3);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B4412ea:{NFSU2_TR(0x4412ea);
w2(R+0,shr<u16>(r2(R+0),u64(u32(0x1ull))));
}
B4412ed:{NFSU2_TR(0x4412ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4412ee:{NFSU2_TR(0x4412ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4412f3ull));
TAIL_STATIC(0x43c2b0u,43c);
}
B4412f3:L4412f3:{c.instructions+=4;NFSU2_TR(0x4412f3);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4412f7:{NFSU2_TR(0x4412f7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4412fb:{NFSU2_TR(0x4412fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4412fc:{NFSU2_TR(0x4412fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x441301ull));
TAIL_STATIC(0x43c2b0u,43c);
}
B441301:L441301:{c.instructions+=7;NFSU2_TR(0x441301);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441305:{NFSU2_TR(0x441305);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B441307:{NFSU2_TR(0x441307);
__builtin_memmove((R+8),gp(0x7ec1f0),2);
}
B44130e:{NFSU2_TR(0x44130e);
w2(R+8,shr<u16>(r2(R+8),u64(u32(0x1ull))));
}
B441311:{NFSU2_TR(0x441311);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B441315:{NFSU2_TR(0x441315);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B441316:{NFSU2_TR(0x441316);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44131bull));
TAIL_STATIC(0x43c2b0u,43c);
}
B44131b:L44131b:{c.instructions+=5;NFSU2_TR(0x44131b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B44131f:{NFSU2_TR(0x44131f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B441323:{NFSU2_TR(0x441323);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B441327:{NFSU2_TR(0x441327);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B441328:{NFSU2_TR(0x441328);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44132dull));
TAIL_STATIC(0x43c490u,43c);
}
B44132d:L44132d:{c.instructions+=2;NFSU2_TR(0x44132d);
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
B441330:{NFSU2_TR(0x441330);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441340:L441340:{c.instructions+=26;NFSU2_TR(0x441340);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B441341:{NFSU2_TR(0x441341);
__builtin_memmove((R+20),(R+16),4);
}
B441343:{NFSU2_TR(0x441343);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B441346:{NFSU2_TR(0x441346);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xbcull))));
}
B44134c:{NFSU2_TR(0x44134c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44134d:{NFSU2_TR(0x44134d);
__builtin_memmove((R+24),(R+4),4);
}
B44134f:{NFSU2_TR(0x44134f);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441352:{NFSU2_TR(0x441352);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441355:{NFSU2_TR(0x441355);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441358:{NFSU2_TR(0x441358);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44135c:{NFSU2_TR(0x44135c);
{u32 ea_=u32(r4(R+24)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44135f:{NFSU2_TR(0x44135f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B441363:{NFSU2_TR(0x441363);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B441365:{NFSU2_TR(0x441365);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441368:{NFSU2_TR(0x441368);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44136c:{NFSU2_TR(0x44136c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B441370:{NFSU2_TR(0x441370);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B441371:{NFSU2_TR(0x441371);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441374:{NFSU2_TR(0x441374);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B441378:{NFSU2_TR(0x441378);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44137c:{NFSU2_TR(0x44137c);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44137f:{NFSU2_TR(0x44137f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B441383:{NFSU2_TR(0x441383);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441387:{NFSU2_TR(0x441387);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44138a:{NFSU2_TR(0x44138a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44138e:{NFSU2_TR(0x44138e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x441393ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x441270u);}goto L441270;}
}
B441393:L441393:{c.instructions+=4;NFSU2_TR(0x441393);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B441397:{NFSU2_TR(0x441397);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44139b:{NFSU2_TR(0x44139b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44139c:{NFSU2_TR(0x44139c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4413a1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x441270u);}goto L441270;}
}
B4413a1:L4413a1:{c.instructions+=4;NFSU2_TR(0x4413a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4413a5:{NFSU2_TR(0x4413a5);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4413a9:{NFSU2_TR(0x4413a9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4413aa:{NFSU2_TR(0x4413aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4413afull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x441270u);}goto L441270;}
}
B4413af:L4413af:{c.instructions+=4;NFSU2_TR(0x4413af);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4413b3:{NFSU2_TR(0x4413b3);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4413b7:{NFSU2_TR(0x4413b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4413b8:{NFSU2_TR(0x4413b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4413bdull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x441270u);}goto L441270;}
}
B4413bd:L4413bd:{c.instructions+=31;NFSU2_TR(0x4413bd);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4413c1:{NFSU2_TR(0x4413c1);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4413c7:{NFSU2_TR(0x4413c7);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4413cb:{NFSU2_TR(0x4413cb);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4413cf:{NFSU2_TR(0x4413cf);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4413d5:{NFSU2_TR(0x4413d5);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4413d9:{NFSU2_TR(0x4413d9);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4413dd:{NFSU2_TR(0x4413dd);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4413e3:{NFSU2_TR(0x4413e3);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4413e7:{NFSU2_TR(0x4413e7);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4413ed:{NFSU2_TR(0x4413ed);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4413f1:{NFSU2_TR(0x4413f1);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4413f7:{NFSU2_TR(0x4413f7);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4413fd:{NFSU2_TR(0x4413fd);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441403:{NFSU2_TR(0x441403);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B441407:{NFSU2_TR(0x441407);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44140d:{NFSU2_TR(0x44140d);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B441411:{NFSU2_TR(0x441411);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B441413:{NFSU2_TR(0x441413);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441416:{NFSU2_TR(0x441416);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44141a:{NFSU2_TR(0x44141a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44141e:{NFSU2_TR(0x44141e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44141f:{NFSU2_TR(0x44141f);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441422:{NFSU2_TR(0x441422);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B441426:{NFSU2_TR(0x441426);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44142a:{NFSU2_TR(0x44142a);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44142d:{NFSU2_TR(0x44142d);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B441431:{NFSU2_TR(0x441431);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441435:{NFSU2_TR(0x441435);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441438:{NFSU2_TR(0x441438);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44143c:{NFSU2_TR(0x44143c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x441441ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x441270u);}goto L441270;}
}
B441441:L441441:{c.instructions+=4;NFSU2_TR(0x441441);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B441445:{NFSU2_TR(0x441445);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44144c:{NFSU2_TR(0x44144c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44144d:{NFSU2_TR(0x44144d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x441452ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x441270u);}goto L441270;}
}
B441452:L441452:{c.instructions+=4;NFSU2_TR(0x441452);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B441456:{NFSU2_TR(0x441456);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44145d:{NFSU2_TR(0x44145d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44145e:{NFSU2_TR(0x44145e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x441463ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x441270u);}goto L441270;}
}
B441463:L441463:{c.instructions+=4;NFSU2_TR(0x441463);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B441467:{NFSU2_TR(0x441467);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44146e:{NFSU2_TR(0x44146e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44146f:{NFSU2_TR(0x44146f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x441474ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x441270u);}goto L441270;}
}
B441474:L441474:{c.instructions+=34;NFSU2_TR(0x441474);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44147b:{NFSU2_TR(0x44147b);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441481:{NFSU2_TR(0x441481);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B441485:{NFSU2_TR(0x441485);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44148c:{NFSU2_TR(0x44148c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44148d:{NFSU2_TR(0x44148d);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441493:{NFSU2_TR(0x441493);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44149a:{NFSU2_TR(0x44149a);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4414a1:{NFSU2_TR(0x4414a1);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4414a7:{NFSU2_TR(0x4414a7);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4414ae:{NFSU2_TR(0x4414ae);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4414b0:{NFSU2_TR(0x4414b0);
{u32 ea_=u32(r4(R+24)+u32(172u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4414b6:{NFSU2_TR(0x4414b6);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4414bd:{NFSU2_TR(0x4414bd);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4414c4:{NFSU2_TR(0x4414c4);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4414cb:{NFSU2_TR(0x4414cb);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4414d2:{NFSU2_TR(0x4414d2);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4414d9:{NFSU2_TR(0x4414d9);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4414e0:{NFSU2_TR(0x4414e0);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4414e4:{NFSU2_TR(0x4414e4);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4414eb:{NFSU2_TR(0x4414eb);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4414f2:{NFSU2_TR(0x4414f2);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4414f6:{NFSU2_TR(0x4414f6);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4414f8:{NFSU2_TR(0x4414f8);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4414fb:{NFSU2_TR(0x4414fb);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4414ff:{NFSU2_TR(0x4414ff);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441502:{NFSU2_TR(0x441502);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B441506:{NFSU2_TR(0x441506);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44150a:{NFSU2_TR(0x44150a);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44150d:{NFSU2_TR(0x44150d);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B441511:{NFSU2_TR(0x441511);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441515:{NFSU2_TR(0x441515);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441518:{NFSU2_TR(0x441518);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44151c:{NFSU2_TR(0x44151c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x441521ull));
TAIL_STATIC(0x43c780u,43c);
}
B441521:L441521:{c.instructions+=8;NFSU2_TR(0x441521);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441525:{NFSU2_TR(0x441525);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B441529:{NFSU2_TR(0x441529);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44152d:{NFSU2_TR(0x44152d);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441533:{NFSU2_TR(0x441533);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B441536:{NFSU2_TR(0x441536);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44153a:{NFSU2_TR(0x44153a);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44153e:{NFSU2_TR(0x44153e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x441543ull));
TAIL_STATIC(0x75bed4u,75b);
}
B441543:L441543:{c.instructions+=11;NFSU2_TR(0x441543);
__builtin_memmove((R+4),(R+0),4);
}
B441545:{NFSU2_TR(0x441545);
w4(R+0,u32(0xb60b60b7ull));
}
B44154a:{NFSU2_TR(0x44154a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B44154c:{NFSU2_TR(0x44154c);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B44154e:{NFSU2_TR(0x44154e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B441551:{NFSU2_TR(0x441551);
__builtin_memmove((R+0),(R+8),4);
}
B441553:{NFSU2_TR(0x441553);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B441556:{NFSU2_TR(0x441556);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B441558:{NFSU2_TR(0x441558);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B441559:{NFSU2_TR(0x441559);
__builtin_memmove((R+4),(R+24),4);
}
B44155b:{NFSU2_TR(0x44155b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x441560ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4412e0u);}goto L4412e0;}
}
B441560:L441560:{c.instructions+=6;NFSU2_TR(0x441560);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B441564:{NFSU2_TR(0x441564);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B441568:{NFSU2_TR(0x441568);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B441569:{NFSU2_TR(0x441569);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44156a:{NFSU2_TR(0x44156a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44156b:{NFSU2_TR(0x44156b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x441570ull));
TAIL_STATIC(0x5bacf0u,5ba);
}
B441570:L441570:{c.instructions+=4;NFSU2_TR(0x441570);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441574:{NFSU2_TR(0x441574);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B441577:{NFSU2_TR(0x441577);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44157d:{NFSU2_TR(0x44157d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x441582ull));
TAIL_STATIC(0x75bed4u,75b);
}
B441582:L441582:{c.instructions+=11;NFSU2_TR(0x441582);
__builtin_memmove((R+4),(R+0),4);
}
B441584:{NFSU2_TR(0x441584);
w4(R+0,u32(0xb60b60b7ull));
}
B441589:{NFSU2_TR(0x441589);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B44158b:{NFSU2_TR(0x44158b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B44158d:{NFSU2_TR(0x44158d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B441590:{NFSU2_TR(0x441590);
__builtin_memmove((R+0),(R+8),4);
}
B441592:{NFSU2_TR(0x441592);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B441595:{NFSU2_TR(0x441595);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B441597:{NFSU2_TR(0x441597);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B441598:{NFSU2_TR(0x441598);
__builtin_memmove((R+4),(R+24),4);
}
B44159a:{NFSU2_TR(0x44159a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44159full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4412e0u);}goto L4412e0;}
}
B44159f:L44159f:{c.instructions+=6;NFSU2_TR(0x44159f);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4415a3:{NFSU2_TR(0x4415a3);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4415a7:{NFSU2_TR(0x4415a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4415a8:{NFSU2_TR(0x4415a8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4415a9:{NFSU2_TR(0x4415a9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4415aa:{NFSU2_TR(0x4415aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4415afull));
TAIL_STATIC(0x5bada0u,5ba);
}
B4415af:L4415af:{c.instructions+=197;NFSU2_TR(0x4415af);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4415b3:{NFSU2_TR(0x4415b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4415b6:{NFSU2_TR(0x4415b6);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4415b8:{NFSU2_TR(0x4415b8);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4415bc:{NFSU2_TR(0x4415bc);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4415bf:{NFSU2_TR(0x4415bf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4415c1:{NFSU2_TR(0x4415c1);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4415c5:{NFSU2_TR(0x4415c5);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4415c8:{NFSU2_TR(0x4415c8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4415ca:{NFSU2_TR(0x4415ca);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4415ce:{NFSU2_TR(0x4415ce);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4415d1:{NFSU2_TR(0x4415d1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4415d3:{NFSU2_TR(0x4415d3);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4415da:{NFSU2_TR(0x4415da);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4415de:{NFSU2_TR(0x4415de);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4415e1:{NFSU2_TR(0x4415e1);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4415e5:{NFSU2_TR(0x4415e5);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4415e8:{NFSU2_TR(0x4415e8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4415ea:{NFSU2_TR(0x4415ea);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4415ee:{NFSU2_TR(0x4415ee);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4415f1:{NFSU2_TR(0x4415f1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4415f3:{NFSU2_TR(0x4415f3);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4415f7:{NFSU2_TR(0x4415f7);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4415f9:{NFSU2_TR(0x4415f9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4415fb:{NFSU2_TR(0x4415fb);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B441602:{NFSU2_TR(0x441602);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441606:{NFSU2_TR(0x441606);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441609:{NFSU2_TR(0x441609);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44160d:{NFSU2_TR(0x44160d);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441610:{NFSU2_TR(0x441610);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B441612:{NFSU2_TR(0x441612);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441616:{NFSU2_TR(0x441616);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441619:{NFSU2_TR(0x441619);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44161b:{NFSU2_TR(0x44161b);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44161f:{NFSU2_TR(0x44161f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441621:{NFSU2_TR(0x441621);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B441623:{NFSU2_TR(0x441623);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44162a:{NFSU2_TR(0x44162a);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44162e:{NFSU2_TR(0x44162e);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441631:{NFSU2_TR(0x441631);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441635:{NFSU2_TR(0x441635);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441638:{NFSU2_TR(0x441638);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44163a:{NFSU2_TR(0x44163a);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44163e:{NFSU2_TR(0x44163e);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441641:{NFSU2_TR(0x441641);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B441643:{NFSU2_TR(0x441643);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441647:{NFSU2_TR(0x441647);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441649:{NFSU2_TR(0x441649);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44164b:{NFSU2_TR(0x44164b);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B441652:{NFSU2_TR(0x441652);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441656:{NFSU2_TR(0x441656);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441659:{NFSU2_TR(0x441659);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44165d:{NFSU2_TR(0x44165d);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441660:{NFSU2_TR(0x441660);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B441662:{NFSU2_TR(0x441662);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441666:{NFSU2_TR(0x441666);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441669:{NFSU2_TR(0x441669);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44166b:{NFSU2_TR(0x44166b);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44166f:{NFSU2_TR(0x44166f);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441672:{NFSU2_TR(0x441672);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B441674:{NFSU2_TR(0x441674);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44167b:{NFSU2_TR(0x44167b);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44167f:{NFSU2_TR(0x44167f);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441682:{NFSU2_TR(0x441682);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441686:{NFSU2_TR(0x441686);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441689:{NFSU2_TR(0x441689);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44168b:{NFSU2_TR(0x44168b);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44168f:{NFSU2_TR(0x44168f);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441692:{NFSU2_TR(0x441692);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B441694:{NFSU2_TR(0x441694);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441698:{NFSU2_TR(0x441698);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44169b:{NFSU2_TR(0x44169b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44169d:{NFSU2_TR(0x44169d);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4416a4:{NFSU2_TR(0x4416a4);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4416a8:{NFSU2_TR(0x4416a8);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4416ab:{NFSU2_TR(0x4416ab);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4416af:{NFSU2_TR(0x4416af);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4416b2:{NFSU2_TR(0x4416b2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4416b4:{NFSU2_TR(0x4416b4);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4416b8:{NFSU2_TR(0x4416b8);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4416bb:{NFSU2_TR(0x4416bb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4416bd:{NFSU2_TR(0x4416bd);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4416c1:{NFSU2_TR(0x4416c1);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4416c4:{NFSU2_TR(0x4416c4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4416c6:{NFSU2_TR(0x4416c6);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4416cd:{NFSU2_TR(0x4416cd);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4416d1:{NFSU2_TR(0x4416d1);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4416d4:{NFSU2_TR(0x4416d4);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4416d8:{NFSU2_TR(0x4416d8);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4416db:{NFSU2_TR(0x4416db);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4416dd:{NFSU2_TR(0x4416dd);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4416e1:{NFSU2_TR(0x4416e1);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4416e4:{NFSU2_TR(0x4416e4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4416e6:{NFSU2_TR(0x4416e6);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4416ea:{NFSU2_TR(0x4416ea);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4416ed:{NFSU2_TR(0x4416ed);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4416ef:{NFSU2_TR(0x4416ef);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4416f6:{NFSU2_TR(0x4416f6);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4416fa:{NFSU2_TR(0x4416fa);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4416fd:{NFSU2_TR(0x4416fd);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441701:{NFSU2_TR(0x441701);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441704:{NFSU2_TR(0x441704);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B441706:{NFSU2_TR(0x441706);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44170a:{NFSU2_TR(0x44170a);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44170d:{NFSU2_TR(0x44170d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44170f:{NFSU2_TR(0x44170f);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441713:{NFSU2_TR(0x441713);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441716:{NFSU2_TR(0x441716);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B441718:{NFSU2_TR(0x441718);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44171f:{NFSU2_TR(0x44171f);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441723:{NFSU2_TR(0x441723);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441726:{NFSU2_TR(0x441726);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44172a:{NFSU2_TR(0x44172a);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44172d:{NFSU2_TR(0x44172d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44172f:{NFSU2_TR(0x44172f);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441733:{NFSU2_TR(0x441733);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441736:{NFSU2_TR(0x441736);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B441738:{NFSU2_TR(0x441738);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44173c:{NFSU2_TR(0x44173c);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44173f:{NFSU2_TR(0x44173f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B441741:{NFSU2_TR(0x441741);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B441748:{NFSU2_TR(0x441748);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44174c:{NFSU2_TR(0x44174c);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44174f:{NFSU2_TR(0x44174f);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441753:{NFSU2_TR(0x441753);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441756:{NFSU2_TR(0x441756);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B441758:{NFSU2_TR(0x441758);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44175c:{NFSU2_TR(0x44175c);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44175f:{NFSU2_TR(0x44175f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B441761:{NFSU2_TR(0x441761);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441765:{NFSU2_TR(0x441765);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441768:{NFSU2_TR(0x441768);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44176a:{NFSU2_TR(0x44176a);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B441771:{NFSU2_TR(0x441771);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441775:{NFSU2_TR(0x441775);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441778:{NFSU2_TR(0x441778);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44177c:{NFSU2_TR(0x44177c);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44177f:{NFSU2_TR(0x44177f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B441781:{NFSU2_TR(0x441781);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441785:{NFSU2_TR(0x441785);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441788:{NFSU2_TR(0x441788);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44178a:{NFSU2_TR(0x44178a);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44178e:{NFSU2_TR(0x44178e);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441791:{NFSU2_TR(0x441791);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B441793:{NFSU2_TR(0x441793);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44179a:{NFSU2_TR(0x44179a);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44179e:{NFSU2_TR(0x44179e);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4417a1:{NFSU2_TR(0x4417a1);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4417a5:{NFSU2_TR(0x4417a5);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4417a8:{NFSU2_TR(0x4417a8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4417aa:{NFSU2_TR(0x4417aa);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4417ae:{NFSU2_TR(0x4417ae);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4417b1:{NFSU2_TR(0x4417b1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4417b3:{NFSU2_TR(0x4417b3);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4417b7:{NFSU2_TR(0x4417b7);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4417ba:{NFSU2_TR(0x4417ba);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4417bc:{NFSU2_TR(0x4417bc);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4417c3:{NFSU2_TR(0x4417c3);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4417c7:{NFSU2_TR(0x4417c7);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4417ca:{NFSU2_TR(0x4417ca);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4417ce:{NFSU2_TR(0x4417ce);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4417d1:{NFSU2_TR(0x4417d1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4417d3:{NFSU2_TR(0x4417d3);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4417d7:{NFSU2_TR(0x4417d7);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4417da:{NFSU2_TR(0x4417da);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4417dc:{NFSU2_TR(0x4417dc);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4417e0:{NFSU2_TR(0x4417e0);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4417e3:{NFSU2_TR(0x4417e3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4417e5:{NFSU2_TR(0x4417e5);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4417ec:{NFSU2_TR(0x4417ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4417f3:{NFSU2_TR(0x4417f3);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4417f7:{NFSU2_TR(0x4417f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4417f8:{NFSU2_TR(0x4417f8);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4417fb:{NFSU2_TR(0x4417fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4417fc:{NFSU2_TR(0x4417fc);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441800:{NFSU2_TR(0x441800);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441803:{NFSU2_TR(0x441803);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B441805:{NFSU2_TR(0x441805);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441809:{NFSU2_TR(0x441809);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44180c:{NFSU2_TR(0x44180c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44180e:{NFSU2_TR(0x44180e);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441812:{NFSU2_TR(0x441812);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441815:{NFSU2_TR(0x441815);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B441817:{NFSU2_TR(0x441817);
{u32 ea_=u32(r4(R+16)+u32(204u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44181e:{NFSU2_TR(0x44181e);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441822:{NFSU2_TR(0x441822);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441825:{NFSU2_TR(0x441825);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441829:{NFSU2_TR(0x441829);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44182c:{NFSU2_TR(0x44182c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44182e:{NFSU2_TR(0x44182e);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441832:{NFSU2_TR(0x441832);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441835:{NFSU2_TR(0x441835);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B441837:{NFSU2_TR(0x441837);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44183b:{NFSU2_TR(0x44183b);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44183e:{NFSU2_TR(0x44183e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B441840:{NFSU2_TR(0x441840);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B441847:{NFSU2_TR(0x441847);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44184cull));
TAIL_STATIC(0x4012b0u,401);
}
B44184c:L44184c:{c.instructions+=5;NFSU2_TR(0x44184c);
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
B44184f:{NFSU2_TR(0x44184f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B441850:{NFSU2_TR(0x441850);
__builtin_memmove((R+16),(R+20),4);
}
B441852:{NFSU2_TR(0x441852);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B441853:{NFSU2_TR(0x441853);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441860:L441860:{c.instructions+=2;NFSU2_TR(0x441860);
u8 U[4];
w4(U+0,u32(0x787584ull));
s4(u32(r4(R+4)),r4(U+0));
}
B441866:{NFSU2_TR(0x441866);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441870:L441870:{c.instructions+=5;NFSU2_TR(0x441870);
u8 U[9];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
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
B441875:{NFSU2_TR(0x441875);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B441876:{NFSU2_TR(0x441876);
__builtin_memmove((R+24),(R+4),4);
}
B441878:{NFSU2_TR(0x441878);
u8 U[4];
w4(U+0,u32(0x787584ull));
s4(u32(r4(R+24)),r4(U+0));
}
B44187e:{NFSU2_TR(0x44187e);
if(r1(R+518)){{goto L441889;}}
}
B441880:L441880:{c.instructions+=2;NFSU2_TR(0x441880);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B441881:{NFSU2_TR(0x441881);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x441886ull));
TAIL_STATIC(0x575630u,575);
}
B441886:L441886:{c.instructions+=1;NFSU2_TR(0x441886);
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
B441889:L441889:{c.instructions+=3;NFSU2_TR(0x441889);
__builtin_memmove((R+0),(R+24),4);
}
B44188b:{NFSU2_TR(0x44188b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44188c:{NFSU2_TR(0x44188c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441890:L441890:{c.instructions+=2;NFSU2_TR(0x441890);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B441893:{NFSU2_TR(0x441893);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4418a0:L4418a0:{c.instructions+=4;NFSU2_TR(0x4418a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4418a1:{NFSU2_TR(0x4418a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4418a7:{NFSU2_TR(0x4418a7);
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
B4418a9:{NFSU2_TR(0x4418a9);
if(r1(R+518)){{goto L4418cd;}}
}
B4418ab:L4418ab:{c.instructions+=2;NFSU2_TR(0x4418ab);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffffffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffffffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4418b0:{NFSU2_TR(0x4418b0);
if(r1(R+518)){{goto L4418cd;}}
}
B4418b2:L4418b2:{c.instructions+=7;NFSU2_TR(0x4418b2);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B4418b7:{NFSU2_TR(0x4418b7);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+0))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4418bd:{NFSU2_TR(0x4418bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4418c1:{NFSU2_TR(0x4418c1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4418c5:{NFSU2_TR(0x4418c5);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4418cb:{NFSU2_TR(0x4418cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4418cc:{NFSU2_TR(0x4418cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4418cd:L4418cd:{c.instructions+=3;NFSU2_TR(0x4418cd);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4418d3:{NFSU2_TR(0x4418d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4418d4:{NFSU2_TR(0x4418d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4418e0:L4418e0:{c.instructions+=14;NFSU2_TR(0x4418e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4418e4:{NFSU2_TR(0x4418e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4418e5:{NFSU2_TR(0x4418e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4418e6:{NFSU2_TR(0x4418e6);
__builtin_memmove((R+28),(R+4),4);
}
B4418e8:{NFSU2_TR(0x4418e8);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B4418ec:{NFSU2_TR(0x4418ec);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4418ee:{NFSU2_TR(0x4418ee);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4418ef:{NFSU2_TR(0x4418ef);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4418f1:{NFSU2_TR(0x4418f1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+4),(U+1),1);
}
B4418f4:{NFSU2_TR(0x4418f4);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B4418f5:{NFSU2_TR(0x4418f5);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B4418f7:{NFSU2_TR(0x4418f7);
__builtin_memmove((R+24),(R+4),4);
}
B4418f9:{NFSU2_TR(0x4418f9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4418fb:{NFSU2_TR(0x4418fb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4418ff;}}
}
B4418fd:L4418fd:{c.instructions+=1;NFSU2_TR(0x4418fd);
__builtin_memmove((R+0),(R+24),4);
}
B4418ff:L4418ff:{c.instructions+=2;NFSU2_TR(0x4418ff);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B441901:{NFSU2_TR(0x441901);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L441912;}}
}
B441903:L441903:{c.instructions+=5;NFSU2_TR(0x441903);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(s64(s32(u32(0x88ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+8)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B441909:{NFSU2_TR(0x441909);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B44190d:{NFSU2_TR(0x44190d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44190e:{NFSU2_TR(0x44190e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44190f:{NFSU2_TR(0x44190f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441912:L441912:{c.instructions+=4;NFSU2_TR(0x441912);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B441913:{NFSU2_TR(0x441913);
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
B441915:{NFSU2_TR(0x441915);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B441916:{NFSU2_TR(0x441916);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441920:L441920:{c.instructions+=5;NFSU2_TR(0x441920);
{u32 ea_=u32(r4(R+4)+u32(7316u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441926:{NFSU2_TR(0x441926);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44192c:{NFSU2_TR(0x44192c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44192e:{NFSU2_TR(0x44192e);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B441931:{NFSU2_TR(0x441931);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L441939;}}
}
B441933:L441933:{c.instructions+=2;NFSU2_TR(0x441933);
w4(R+0,u32(0x1ull));
}
B441938:{NFSU2_TR(0x441938);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441939:L441939:{c.instructions+=2;NFSU2_TR(0x441939);
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
B44193b:{NFSU2_TR(0x44193b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441940:L441940:{c.instructions+=7;NFSU2_TR(0x441940);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441944:{NFSU2_TR(0x441944);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B441948:{NFSU2_TR(0x441948);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44194b:{NFSU2_TR(0x44194b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B44194d:{NFSU2_TR(0x44194d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44194f:{NFSU2_TR(0x44194f);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B441952:{NFSU2_TR(0x441952);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L44195a;}}
}
B441954:L441954:{c.instructions+=1;NFSU2_TR(0x441954);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
w2(U+4,u16(0x2ull));
s2(u32(r4(U+0)),r2(U+4));
}
B44195a:L44195a:{c.instructions+=1;NFSU2_TR(0x44195a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441960:L441960:{c.instructions+=7;NFSU2_TR(0x441960);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441964:{NFSU2_TR(0x441964);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B441968:{NFSU2_TR(0x441968);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44196b:{NFSU2_TR(0x44196b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44196e:{NFSU2_TR(0x44196e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B441970:{NFSU2_TR(0x441970);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B441973:{NFSU2_TR(0x441973);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L44197b;}}
}
B441975:L441975:{c.instructions+=1;NFSU2_TR(0x441975);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
w2(U+4,u16(0x2ull));
s2(u32(r4(U+0)),r2(U+4));
}
B44197b:L44197b:{c.instructions+=1;NFSU2_TR(0x44197b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441980:L441980:{c.instructions+=7;NFSU2_TR(0x441980);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441984:{NFSU2_TR(0x441984);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B441988:{NFSU2_TR(0x441988);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44198a:{NFSU2_TR(0x44198a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44198d:{NFSU2_TR(0x44198d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44198f:{NFSU2_TR(0x44198f);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B441992:{NFSU2_TR(0x441992);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L44199a;}}
}
B441994:L441994:{c.instructions+=1;NFSU2_TR(0x441994);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
w2(U+4,u16(0x2ull));
s2(u32(r4(U+0)),r2(U+4));
}
B44199a:L44199a:{c.instructions+=1;NFSU2_TR(0x44199a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4419a0:L4419a0:{c.instructions+=36;NFSU2_TR(0x4419a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4419a4:{NFSU2_TR(0x4419a4);
__builtin_memmove((R+0),(R+4),4);
}
B4419a6:{NFSU2_TR(0x4419a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4419a9:{NFSU2_TR(0x4419a9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4419ad:{NFSU2_TR(0x4419ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4419b0:{NFSU2_TR(0x4419b0);
u8 U[6];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B4419b5:{NFSU2_TR(0x4419b5);
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
B4419b7:{NFSU2_TR(0x4419b7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4419b9:{NFSU2_TR(0x4419b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4419bc:{NFSU2_TR(0x4419bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4419bf:{NFSU2_TR(0x4419bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4419c2:{NFSU2_TR(0x4419c2);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4419c6:{NFSU2_TR(0x4419c6);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2eull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4419ca:{NFSU2_TR(0x4419ca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4419cb:{NFSU2_TR(0x4419cb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4419cf:{NFSU2_TR(0x4419cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4419d2:{NFSU2_TR(0x4419d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4419d6:{NFSU2_TR(0x4419d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4419d9:{NFSU2_TR(0x4419d9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4419dd:{NFSU2_TR(0x4419dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4419e0:{NFSU2_TR(0x4419e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4419e3:{NFSU2_TR(0x4419e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4419e6:{NFSU2_TR(0x4419e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4419e9:{NFSU2_TR(0x4419e9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4419ed:{NFSU2_TR(0x4419ed);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5eull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4419f1:{NFSU2_TR(0x4419f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4419f7:{NFSU2_TR(0x4419f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4419fb:{NFSU2_TR(0x4419fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B441a01:{NFSU2_TR(0x441a01);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B441a04:{NFSU2_TR(0x441a04);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B441a07:{NFSU2_TR(0x441a07);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B441a0a:{NFSU2_TR(0x441a0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B441a0d:{NFSU2_TR(0x441a0d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B441a14:{NFSU2_TR(0x441a14);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8eull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B441a1b:{NFSU2_TR(0x441a1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B441a1c:{NFSU2_TR(0x441a1c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441a20:L441a20:{c.instructions+=39;NFSU2_TR(0x441a20);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B441a24:{NFSU2_TR(0x441a24);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441a26:{NFSU2_TR(0x441a26);
__builtin_memmove((R+0),(R+4),4);
}
B441a28:{NFSU2_TR(0x441a28);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B441a2b:{NFSU2_TR(0x441a2b);
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
B441a2d:{NFSU2_TR(0x441a2d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B441a2f:{NFSU2_TR(0x441a2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B441a32:{NFSU2_TR(0x441a32);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B441a35:{NFSU2_TR(0x441a35);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B441a38:{NFSU2_TR(0x441a38);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B441a3c:{NFSU2_TR(0x441a3c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B441a3d:{NFSU2_TR(0x441a3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B441a41:{NFSU2_TR(0x441a41);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B441a44:{NFSU2_TR(0x441a44);
u8 U[6];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B441a49:{NFSU2_TR(0x441a49);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2eull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B441a4d:{NFSU2_TR(0x441a4d);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441a50:{NFSU2_TR(0x441a50);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5eull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B441a54:{NFSU2_TR(0x441a54);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B441a57:{NFSU2_TR(0x441a57);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B441a5a:{NFSU2_TR(0x441a5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B441a5d:{NFSU2_TR(0x441a5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B441a60:{NFSU2_TR(0x441a60);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B441a63:{NFSU2_TR(0x441a63);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B441a67:{NFSU2_TR(0x441a67);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B441a68:{NFSU2_TR(0x441a68);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B441a6c:{NFSU2_TR(0x441a6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B441a6f:{NFSU2_TR(0x441a6f);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441a72:{NFSU2_TR(0x441a72);
__builtin_memmove((R+8),(R+28),4);
}
B441a74:{NFSU2_TR(0x441a74);
{u32 ea_=u32(r4(R+0)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B441a7a:{NFSU2_TR(0x441a7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B441a7b:{NFSU2_TR(0x441a7b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8eull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B441a82:{NFSU2_TR(0x441a82);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B441a85:{NFSU2_TR(0x441a85);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B441a88:{NFSU2_TR(0x441a88);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B441a8b:{NFSU2_TR(0x441a8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B441a8e:{NFSU2_TR(0x441a8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B441a94:{NFSU2_TR(0x441a94);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B441a9b:{NFSU2_TR(0x441a9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B441a9c:{NFSU2_TR(0x441a9c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441aa0:L441aa0:{c.instructions+=17;NFSU2_TR(0x441aa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B441aa3:{NFSU2_TR(0x441aa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B441aa6:{NFSU2_TR(0x441aa6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B441aa8:{NFSU2_TR(0x441aa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B441aab:{NFSU2_TR(0x441aab);
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
B441aad:{NFSU2_TR(0x441aad);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B441ab1:{NFSU2_TR(0x441ab1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B441ab4:{NFSU2_TR(0x441ab4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B441ab7:{NFSU2_TR(0x441ab7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B441aba:{NFSU2_TR(0x441aba);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B441abd:{NFSU2_TR(0x441abd);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B441ac1:{NFSU2_TR(0x441ac1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B441ac4:{NFSU2_TR(0x441ac4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B441ac7:{NFSU2_TR(0x441ac7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B441aca:{NFSU2_TR(0x441aca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B441acd:{NFSU2_TR(0x441acd);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B441ad4:{NFSU2_TR(0x441ad4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441ae0:L441ae0:{c.instructions+=3;NFSU2_TR(0x441ae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B441ae3:{NFSU2_TR(0x441ae3);
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
B441ae6:{NFSU2_TR(0x441ae6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441af0:L441af0:{c.instructions+=7;NFSU2_TR(0x441af0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B441af1:{NFSU2_TR(0x441af1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B441af2:{NFSU2_TR(0x441af2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B441af6:{NFSU2_TR(0x441af6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B441af9:{NFSU2_TR(0x441af9);
__builtin_memmove((R+4),(R+24),4);
}
B441afb:{NFSU2_TR(0x441afb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B441b03:{NFSU2_TR(0x441b03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x441b08ull));
TAIL_STATIC(0x59fa30u,59f);
}
B441b08:L441b08:{c.instructions+=2;NFSU2_TR(0x441b08);
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
B441b0a:{NFSU2_TR(0x441b0a);
if(r1(R+518)){{goto L441b28;}}
}
B441b0c:L441b0c:{c.instructions+=2;NFSU2_TR(0x441b0c);
__builtin_memmove((R+4),(R+24),4);
}
B441b0e:{NFSU2_TR(0x441b0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x441b13ull));
TAIL_STATIC(0x5925b0u,592);
}
B441b13:L441b13:{c.instructions+=6;NFSU2_TR(0x441b13);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441b19:{NFSU2_TR(0x441b19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B441b1a:{NFSU2_TR(0x441b1a);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B441b20:{NFSU2_TR(0x441b20);
{u32 ea_=u32(u32(7892888u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441b26:{NFSU2_TR(0x441b26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B441b27:{NFSU2_TR(0x441b27);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441b28:L441b28:{c.instructions+=5;NFSU2_TR(0x441b28);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441b2c:{NFSU2_TR(0x441b2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B441b2d:{NFSU2_TR(0x441b2d);
{u32 ea_=u32(u32(7892888u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441b33:{NFSU2_TR(0x441b33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B441b34:{NFSU2_TR(0x441b34);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441b40:L441b40:{c.instructions+=9;NFSU2_TR(0x441b40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B441b43:{NFSU2_TR(0x441b43);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B441b44:{NFSU2_TR(0x441b44);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B441b48:{NFSU2_TR(0x441b48);
{u32 ea_=u32(r4(R+24)+u32(184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441b4e:{NFSU2_TR(0x441b4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B441b56:{NFSU2_TR(0x441b56);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B441b5c:{NFSU2_TR(0x441b5c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B441b5e:{NFSU2_TR(0x441b5e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B441b61:{NFSU2_TR(0x441b61);
if(r1(R+514)){{goto L441b6b;}}
}
B441b63:L441b63:{c.instructions+=1;NFSU2_TR(0x441b63);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B441b6b:L441b6b:{c.instructions+=2;NFSU2_TR(0x441b6b);
__builtin_memmove((R+4),(R+24),4);
}
B441b6d:{NFSU2_TR(0x441b6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x441b72ull));
TAIL_STATIC(0x5ed220u,5ed);
}
B441b72:L441b72:{c.instructions+=2;NFSU2_TR(0x441b72);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B441b74:{NFSU2_TR(0x441b74);
if(r1(R+518)){{goto L441bd3;}}
}
B441b76:L441b76:{c.instructions+=10;NFSU2_TR(0x441b76);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B441b78:{NFSU2_TR(0x441b78);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B441b7c:{NFSU2_TR(0x441b7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B441b7d:{NFSU2_TR(0x441b7d);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B441b81:{NFSU2_TR(0x441b81);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B441b82:{NFSU2_TR(0x441b82);
u8 U[4];
w4(U+0,u32(0x40400000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B441b87:{NFSU2_TR(0x441b87);
__builtin_memmove((R+4),(R+24),4);
}
B441b89:{NFSU2_TR(0x441b89);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B441b91:{NFSU2_TR(0x441b91);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B441b99:{NFSU2_TR(0x441b99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x441b9eull));
TAIL_STATIC(0x5ec3d0u,5ec);
}
B441b9e:L441b9e:{c.instructions+=6;NFSU2_TR(0x441b9e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B441ba0:{NFSU2_TR(0x441ba0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441ba4:{NFSU2_TR(0x441ba4);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B441baa:{NFSU2_TR(0x441baa);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B441bac:{NFSU2_TR(0x441bac);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B441baf:{NFSU2_TR(0x441baf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L441bd3;}}
}
B441bb1:L441bb1:{c.instructions+=5;NFSU2_TR(0x441bb1);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441bb5:{NFSU2_TR(0x441bb5);
{u32 ea_=u32(u32(7885072u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B441bbb:{NFSU2_TR(0x441bbb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B441bbd:{NFSU2_TR(0x441bbd);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B441bc0:{NFSU2_TR(0x441bc0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L441bd3;}}
}
B441bc2:L441bc2:{c.instructions+=5;NFSU2_TR(0x441bc2);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441bc8:{NFSU2_TR(0x441bc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B441bc9:{NFSU2_TR(0x441bc9);
{u32 ea_=u32(u32(7892892u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441bcf:{NFSU2_TR(0x441bcf);
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
B441bd2:{NFSU2_TR(0x441bd2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441bd3:L441bd3:{c.instructions+=5;NFSU2_TR(0x441bd3);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441bd7:{NFSU2_TR(0x441bd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B441bd8:{NFSU2_TR(0x441bd8);
{u32 ea_=u32(u32(7892892u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441bde:{NFSU2_TR(0x441bde);
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
B441be1:{NFSU2_TR(0x441be1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441bf0:L441bf0:{c.instructions+=8;NFSU2_TR(0x441bf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B441bf4:{NFSU2_TR(0x441bf4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441bfa:{NFSU2_TR(0x441bfa);
{u32 ea_=u32(r4(R+4)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441c00:{NFSU2_TR(0x441c00);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B441c04:{NFSU2_TR(0x441c04);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B441c0a:{NFSU2_TR(0x441c0a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B441c0c:{NFSU2_TR(0x441c0c);
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
B441c0f:{NFSU2_TR(0x441c0f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L441c6b;}}
}
B441c11:L441c11:{c.instructions+=5;NFSU2_TR(0x441c11);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B441c14:{NFSU2_TR(0x441c14);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B441c16:{NFSU2_TR(0x441c16);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B441c18:{NFSU2_TR(0x441c18);
{u32 ea_=u32(u32(7894416u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441c1e:{NFSU2_TR(0x441c1e);
if(r1(R+518)){{goto L441c25;}}
}
B441c20:L441c20:{c.instructions+=2;NFSU2_TR(0x441c20);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B441c22:{NFSU2_TR(0x441c22);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441c25:L441c25:{c.instructions+=11;NFSU2_TR(0x441c25);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441c29:{NFSU2_TR(0x441c29);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B441c2b:{NFSU2_TR(0x441c2b);
{u32 ea_=u32(u32(7881944u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441c31:{NFSU2_TR(0x441c31);
{u32 ea_=u32(u32(7894412u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B441c37:{NFSU2_TR(0x441c37);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B441c3b:{NFSU2_TR(0x441c3b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B441c3d:{NFSU2_TR(0x441c3d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441c41:{NFSU2_TR(0x441c41);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B441c47:{NFSU2_TR(0x441c47);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B441c49:{NFSU2_TR(0x441c49);
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
B441c4c:{NFSU2_TR(0x441c4c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L441c72;}}
}
B441c4e:L441c4e:{c.instructions+=6;NFSU2_TR(0x441c4e);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441c52:{NFSU2_TR(0x441c52);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441c58:{NFSU2_TR(0x441c58);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B441c5c:{NFSU2_TR(0x441c5c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B441c5e:{NFSU2_TR(0x441c5e);
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
B441c61:{NFSU2_TR(0x441c61);
if(r1(R+514)){{goto L441c6b;}}
}
B441c63:L441c63:{c.instructions+=2;NFSU2_TR(0x441c63);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B441c65:{NFSU2_TR(0x441c65);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441c6b:L441c6b:{c.instructions+=2;NFSU2_TR(0x441c6b);
{u32 ea_=u32(u32(7892896u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441c71:{NFSU2_TR(0x441c71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441c72:L441c72:{c.instructions+=3;NFSU2_TR(0x441c72);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441c78:{NFSU2_TR(0x441c78);
{u32 ea_=u32(u32(7892896u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441c7e:{NFSU2_TR(0x441c7e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441c80:L441c80:{c.instructions+=7;NFSU2_TR(0x441c80);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B441c84:{NFSU2_TR(0x441c84);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441c8a:{NFSU2_TR(0x441c8a);
{u32 ea_=u32(r4(R+4)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441c90:{NFSU2_TR(0x441c90);
{u32 ea_=u32(u32(7881704u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B441c96:{NFSU2_TR(0x441c96);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B441c98:{NFSU2_TR(0x441c98);
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
B441c9b:{NFSU2_TR(0x441c9b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L441ce1;}}
}
B441c9d:L441c9d:{c.instructions+=3;NFSU2_TR(0x441c9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B441ca0:{NFSU2_TR(0x441ca0);
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
B441ca2:{NFSU2_TR(0x441ca2);
if(r1(R+518)){{goto L441ce1;}}
}
B441ca4:L441ca4:{c.instructions+=2;NFSU2_TR(0x441ca4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B441ca6:{NFSU2_TR(0x441ca6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x441cabull));
TAIL_STATIC(0x5eb310u,5eb);
}
B441cab:L441cab:{c.instructions+=7;NFSU2_TR(0x441cab);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B441cad:{NFSU2_TR(0x441cad);
{u32 ea_=u32(u32(7885016u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441cb3:{NFSU2_TR(0x441cb3);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B441cb7:{NFSU2_TR(0x441cb7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B441cbd:{NFSU2_TR(0x441cbd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B441cbf:{NFSU2_TR(0x441cbf);
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
B441cc2:{NFSU2_TR(0x441cc2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L441ce8;}}
}
B441cc4:L441cc4:{c.instructions+=6;NFSU2_TR(0x441cc4);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441cc8:{NFSU2_TR(0x441cc8);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441cce:{NFSU2_TR(0x441cce);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B441cd2:{NFSU2_TR(0x441cd2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B441cd4:{NFSU2_TR(0x441cd4);
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
B441cd7:{NFSU2_TR(0x441cd7);
if(r1(R+514)){{goto L441ce1;}}
}
B441cd9:L441cd9:{c.instructions+=2;NFSU2_TR(0x441cd9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B441cdb:{NFSU2_TR(0x441cdb);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441ce1:L441ce1:{c.instructions+=2;NFSU2_TR(0x441ce1);
{u32 ea_=u32(u32(7892900u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441ce7:{NFSU2_TR(0x441ce7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441ce8:L441ce8:{c.instructions+=3;NFSU2_TR(0x441ce8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441cee:{NFSU2_TR(0x441cee);
{u32 ea_=u32(u32(7892900u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441cf4:{NFSU2_TR(0x441cf4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441d00:L441d00:{c.instructions+=4;NFSU2_TR(0x441d00);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B441d04:{NFSU2_TR(0x441d04);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B441d07:{NFSU2_TR(0x441d07);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B441d09:{NFSU2_TR(0x441d09);
if(r1(R+518)){{goto L441d26;}}
}
B441d0b:L441d0b:{c.instructions+=1;NFSU2_TR(0x441d0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x441d10ull));
TAIL_STATIC(0x5eb310u,5eb);
}
B441d10:L441d10:{c.instructions+=4;NFSU2_TR(0x441d10);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B441d16:{NFSU2_TR(0x441d16);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B441d18:{NFSU2_TR(0x441d18);
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
B441d1b:{NFSU2_TR(0x441d1b);
if(r1(R+514)){{goto L441d23;}}
}
B441d1d:L441d1d:{c.instructions+=2;NFSU2_TR(0x441d1d);
w4(R+0,u32(0x1ull));
}
B441d22:{NFSU2_TR(0x441d22);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441d23:L441d23:{c.instructions+=2;NFSU2_TR(0x441d23);
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
B441d25:{NFSU2_TR(0x441d25);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441d26:L441d26:{c.instructions+=2;NFSU2_TR(0x441d26);
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
B441d28:{NFSU2_TR(0x441d28);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441d30:L441d30:{c.instructions+=9;NFSU2_TR(0x441d30);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B441d31:{NFSU2_TR(0x441d31);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B441d35:{NFSU2_TR(0x441d35);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441d3b:{NFSU2_TR(0x441d3b);
{u32 ea_=u32(r4(R+4)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441d41:{NFSU2_TR(0x441d41);
{u32 ea_=u32(u32(7887788u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B441d47:{NFSU2_TR(0x441d47);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B441d4b:{NFSU2_TR(0x441d4b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B441d4d:{NFSU2_TR(0x441d4d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B441d50:{NFSU2_TR(0x441d50);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L441e34;}}
}
B441d56:L441d56:{c.instructions+=6;NFSU2_TR(0x441d56);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B441d58:{NFSU2_TR(0x441d58);
{u32 ea_=u32(u32(7885016u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441d5e:{NFSU2_TR(0x441d5e);
__asm__ volatile(".byte 0xd8,0xda":::"memory");
}
B441d60:{NFSU2_TR(0x441d60);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B441d62:{NFSU2_TR(0x441d62);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B441d65:{NFSU2_TR(0x441d65);
if(r1(R+514)){{goto L441d6f;}}
}
B441d67:L441d67:{c.instructions+=2;NFSU2_TR(0x441d67);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B441d69:{NFSU2_TR(0x441d69);
{u32 ea_=u32(u32(7885016u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441d6f:L441d6f:{c.instructions+=6;NFSU2_TR(0x441d6f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B441d71:{NFSU2_TR(0x441d71);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B441d73:{NFSU2_TR(0x441d73);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B441d75:{NFSU2_TR(0x441d75);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B441d77:{NFSU2_TR(0x441d77);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B441d7a:{NFSU2_TR(0x441d7a);
if(r1(R+514)){{goto L441e82;}}
}
B441d80:L441d80:{c.instructions+=12;NFSU2_TR(0x441d80);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B441d82:{NFSU2_TR(0x441d82);
{u32 ea_=u32(r4(R+4)+u32(948u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441d88:{NFSU2_TR(0x441d88);
{u32 ea_=u32(r4(R+4)+u32(956u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B441d8e:{NFSU2_TR(0x441d8e);
{u32 ea_=u32(r4(R+4)+u32(964u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B441d94:{NFSU2_TR(0x441d94);
{u32 ea_=u32(r4(R+4)+u32(972u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B441d9a:{NFSU2_TR(0x441d9a);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441da0:{NFSU2_TR(0x441da0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B441da6:{NFSU2_TR(0x441da6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B441daa:{NFSU2_TR(0x441daa);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B441db0:{NFSU2_TR(0x441db0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B441db2:{NFSU2_TR(0x441db2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B441db5:{NFSU2_TR(0x441db5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L441e3f;}}
}
B441dbb:L441dbb:{c.instructions+=6;NFSU2_TR(0x441dbb);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441dbf:{NFSU2_TR(0x441dbf);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441dc5:{NFSU2_TR(0x441dc5);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B441dc9:{NFSU2_TR(0x441dc9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B441dcb:{NFSU2_TR(0x441dcb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B441dce:{NFSU2_TR(0x441dce);
if(r1(R+514)){{goto L441dd8;}}
}
B441dd0:L441dd0:{c.instructions+=2;NFSU2_TR(0x441dd0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B441dd2:{NFSU2_TR(0x441dd2);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441dd8:L441dd8:{c.instructions+=6;NFSU2_TR(0x441dd8);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B441ddc:{NFSU2_TR(0x441ddc);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441de0:{NFSU2_TR(0x441de0);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B441de6:{NFSU2_TR(0x441de6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B441de8:{NFSU2_TR(0x441de8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B441deb:{NFSU2_TR(0x441deb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L441e47;}}
}
B441ded:L441ded:{c.instructions+=6;NFSU2_TR(0x441ded);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441df1:{NFSU2_TR(0x441df1);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441df7:{NFSU2_TR(0x441df7);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B441dfb:{NFSU2_TR(0x441dfb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B441dfd:{NFSU2_TR(0x441dfd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B441e00:{NFSU2_TR(0x441e00);
if(r1(R+514)){{goto L441e0a;}}
}
B441e02:L441e02:{c.instructions+=2;NFSU2_TR(0x441e02);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B441e04:{NFSU2_TR(0x441e04);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441e0a:L441e0a:{c.instructions+=6;NFSU2_TR(0x441e0a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441e0e:{NFSU2_TR(0x441e0e);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B441e10:{NFSU2_TR(0x441e10);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B441e12:{NFSU2_TR(0x441e12);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B441e14:{NFSU2_TR(0x441e14);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B441e17:{NFSU2_TR(0x441e17);
if(r1(R+514)){{goto L441e82;}}
}
B441e19:L441e19:{c.instructions+=5;NFSU2_TR(0x441e19);
{u32 ea_=u32(u32(8371928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441e1f:{NFSU2_TR(0x441e1f);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B441e25:{NFSU2_TR(0x441e25);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B441e27:{NFSU2_TR(0x441e27);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B441e2a:{NFSU2_TR(0x441e2a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L441e4f;}}
}
B441e2c:L441e2c:{c.instructions+=2;NFSU2_TR(0x441e2c);
{u32 ea_=u32(u32(8371928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441e32:{NFSU2_TR(0x441e32);
{goto L441e55;}
}
B441e34:L441e34:{c.instructions+=2;NFSU2_TR(0x441e34);
{u32 ea_=u32(u32(7887788u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441e3a:{NFSU2_TR(0x441e3a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x441d6fu);}goto L441d6f;}
}
B441e3f:L441e3f:{c.instructions+=2;NFSU2_TR(0x441e3f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441e45:{NFSU2_TR(0x441e45);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x441dd8u);}goto L441dd8;}
}
B441e47:L441e47:{c.instructions+=2;NFSU2_TR(0x441e47);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441e4d:{NFSU2_TR(0x441e4d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x441e0au);}goto L441e0a;}
}
B441e4f:L441e4f:{c.instructions+=1;NFSU2_TR(0x441e4f);
{u32 ea_=u32(r4(R+4)+u32(1088u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441e55:L441e55:{c.instructions+=4;NFSU2_TR(0x441e55);
{u32 ea_=u32(u32(7894428u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B441e5b:{NFSU2_TR(0x441e5b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B441e5d:{NFSU2_TR(0x441e5d);
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
B441e60:{NFSU2_TR(0x441e60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L441e82;}}
}
B441e62:L441e62:{c.instructions+=7;NFSU2_TR(0x441e62);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B441e64:{NFSU2_TR(0x441e64);
{u32 ea_=u32(u32(7892912u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441e6a:{NFSU2_TR(0x441e6a);
{u32 ea_=u32(u32(7894424u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441e70:{NFSU2_TR(0x441e70);
{u32 ea_=u32(u32(7892904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441e76:{NFSU2_TR(0x441e76);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B441e7c:{NFSU2_TR(0x441e7c);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B441e7e:{NFSU2_TR(0x441e7e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B441e82:L441e82:{c.instructions+=3;NFSU2_TR(0x441e82);
{u32 ea_=u32(u32(7892904u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441e88:{NFSU2_TR(0x441e88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B441e89:{NFSU2_TR(0x441e89);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441e90:L441e90:{c.instructions+=8;NFSU2_TR(0x441e90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B441e91:{NFSU2_TR(0x441e91);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B441e95:{NFSU2_TR(0x441e95);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441e9b:{NFSU2_TR(0x441e9b);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+16)),r4(U+0));
}
B441ea3:{NFSU2_TR(0x441ea3);
{u32 ea_=u32(u32(7881976u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B441ea9:{NFSU2_TR(0x441ea9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B441eab:{NFSU2_TR(0x441eab);
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
B441eae:{NFSU2_TR(0x441eae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L441f2f;}}
}
B441eb0:L441eb0:{c.instructions+=2;NFSU2_TR(0x441eb0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B441eb3:{NFSU2_TR(0x441eb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x441eb8ull));
TAIL_STATIC(0x59fa10u,59f);
}
B441eb8:L441eb8:{c.instructions+=7;NFSU2_TR(0x441eb8);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B441eba:{NFSU2_TR(0x441eba);
{u32 ea_=u32(u32(7894436u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B441ec0:{NFSU2_TR(0x441ec0);
{u32 ea_=u32(u32(7894432u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441ec6:{NFSU2_TR(0x441ec6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B441ecc:{NFSU2_TR(0x441ecc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B441ece:{NFSU2_TR(0x441ece);
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
B441ed1:{NFSU2_TR(0x441ed1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L441f2d;}}
}
B441ed3:L441ed3:{c.instructions+=6;NFSU2_TR(0x441ed3);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B441ed9:{NFSU2_TR(0x441ed9);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B441edd:{NFSU2_TR(0x441edd);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B441ee3:{NFSU2_TR(0x441ee3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B441ee5:{NFSU2_TR(0x441ee5);
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
B441ee8:{NFSU2_TR(0x441ee8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L441f17;}}
}
B441eea:L441eea:{c.instructions+=6;NFSU2_TR(0x441eea);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441eee:{NFSU2_TR(0x441eee);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441ef4:{NFSU2_TR(0x441ef4);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B441ef8:{NFSU2_TR(0x441ef8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B441efa:{NFSU2_TR(0x441efa);
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
B441efd:{NFSU2_TR(0x441efd);
if(r1(R+514)){{goto L441f07;}}
}
B441eff:L441eff:{c.instructions+=2;NFSU2_TR(0x441eff);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B441f01:{NFSU2_TR(0x441f01);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441f07:L441f07:{c.instructions+=5;NFSU2_TR(0x441f07);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B441f0b:{NFSU2_TR(0x441f0b);
{u32 ea_=u32(u32(7892908u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441f11:{NFSU2_TR(0x441f11);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441f15:{NFSU2_TR(0x441f15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B441f16:{NFSU2_TR(0x441f16);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441f17:L441f17:{c.instructions+=6;NFSU2_TR(0x441f17);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441f1d:{NFSU2_TR(0x441f1d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B441f21:{NFSU2_TR(0x441f21);
{u32 ea_=u32(u32(7892908u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441f27:{NFSU2_TR(0x441f27);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441f2b:{NFSU2_TR(0x441f2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B441f2c:{NFSU2_TR(0x441f2c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441f2d:L441f2d:{c.instructions+=1;NFSU2_TR(0x441f2d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B441f2f:L441f2f:{c.instructions+=4;NFSU2_TR(0x441f2f);
{u32 ea_=u32(u32(7892908u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441f35:{NFSU2_TR(0x441f35);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B441f39:{NFSU2_TR(0x441f39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B441f3a:{NFSU2_TR(0x441f3a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441f40:L441f40:{c.instructions+=3;NFSU2_TR(0x441f40);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B441f44:{NFSU2_TR(0x441f44);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B441f47:{NFSU2_TR(0x441f47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x441f4cull));
TAIL_STATIC(0x59fa10u,59f);
}
B441f4c:L441f4c:{c.instructions+=4;NFSU2_TR(0x441f4c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B441f52:{NFSU2_TR(0x441f52);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B441f54:{NFSU2_TR(0x441f54);
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
B441f57:{NFSU2_TR(0x441f57);
if(r1(R+514)){{goto L441f5f;}}
}
B441f59:L441f59:{c.instructions+=2;NFSU2_TR(0x441f59);
w4(R+0,u32(0x1ull));
}
B441f5e:{NFSU2_TR(0x441f5e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441f5f:L441f5f:{c.instructions+=2;NFSU2_TR(0x441f5f);
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
B441f61:{NFSU2_TR(0x441f61);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441f70:L441f70:{c.instructions+=4;NFSU2_TR(0x441f70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B441f74:{NFSU2_TR(0x441f74);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B441f76:{NFSU2_TR(0x441f76);
w4(R+0,u32(0x7ec1fcull));
}
B441f7b:{NFSU2_TR(0x441f7b);
{goto L441f80;}
}
B441f80:L441f80:{c.instructions+=2;NFSU2_TR(0x441f80);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
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
B441f82:{NFSU2_TR(0x441f82);
if(r1(R+518)){{goto L441f95;}}
}
B441f84:L441f84:{c.instructions+=4;NFSU2_TR(0x441f84);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B441f87:{NFSU2_TR(0x441f87);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B441f88:{NFSU2_TR(0x441f88);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7ec274ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7ec274ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7ec274ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B441f8d:{NFSU2_TR(0x441f8d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x441f80u);}goto L441f80;}}
}
B441f8f:L441f8f:{c.instructions+=2;NFSU2_TR(0x441f8f);
w4(R+0,u32(0x7875a8ull));
}
B441f94:{NFSU2_TR(0x441f94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441f95:L441f95:{c.instructions+=3;NFSU2_TR(0x441f95);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B441f98:{NFSU2_TR(0x441f98);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ec200ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B441f9f:{NFSU2_TR(0x441f9f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441fa0:L441fa0:{c.instructions+=4;NFSU2_TR(0x441fa0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B441fa4:{NFSU2_TR(0x441fa4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B441fa6:{NFSU2_TR(0x441fa6);
w4(R+0,u32(0x7ec1fcull));
}
B441fab:{NFSU2_TR(0x441fab);
{goto L441fb0;}
}
B441fb0:L441fb0:{c.instructions+=2;NFSU2_TR(0x441fb0);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
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
B441fb2:{NFSU2_TR(0x441fb2);
if(r1(R+518)){{goto L441fc2;}}
}
B441fb4:L441fb4:{c.instructions+=4;NFSU2_TR(0x441fb4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B441fb7:{NFSU2_TR(0x441fb7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B441fb8:{NFSU2_TR(0x441fb8);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7ec274ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7ec274ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B441fbd:{NFSU2_TR(0x441fbd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x441fb0u);}goto L441fb0;}}
}
B441fbf:L441fbf:{c.instructions+=2;NFSU2_TR(0x441fbf);
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
B441fc1:{NFSU2_TR(0x441fc1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441fc2:L441fc2:{c.instructions+=3;NFSU2_TR(0x441fc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B441fc5:{NFSU2_TR(0x441fc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ec1f8ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B441fcc:{NFSU2_TR(0x441fcc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B441fd0:L441fd0:{c.instructions+=5;NFSU2_TR(0x441fd0);
{u32 ea_=u32(u32(8561908u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B441fd6:{NFSU2_TR(0x441fd6);
{u32 ea_=u32(u32(7894448u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B441fdc:{NFSU2_TR(0x441fdc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B441fde:{NFSU2_TR(0x441fde);
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
B441fe1:{NFSU2_TR(0x441fe1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x442008u,442);}
}
B441fe3:L441fe3:{c.instructions+=5;NFSU2_TR(0x441fe3);
__builtin_memmove((R+0),gp(0x82a4f0),4);
}
B441fe8:{NFSU2_TR(0x441fe8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B441fe9:{NFSU2_TR(0x441fe9);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B441fec:{NFSU2_TR(0x441fec);
__builtin_memmove(gp(0x82a4f0),(R+0),4);
}
B441ff1:{NFSU2_TR(0x441ff1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L441ffd;}}
}
B441ff3:L441ff3:{c.instructions+=1;NFSU2_TR(0x441ff3);
s4(0x82a4f0,u32(0x0ull));
}
B441ffd:L441ffd:{c.instructions+=1;NFSU2_TR(0x441ffd);
s4(0x82a4f4,u32(0x0ull));
TAIL_STATIC(0x442007u,442);
}
XIT:NFSU2_TR_EXIT(0x441,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
