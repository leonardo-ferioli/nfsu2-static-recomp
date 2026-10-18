#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_409(u8* __restrict R,Cpu& c);
u32 body_411(u8* __restrict R,Cpu& c);
u32 body_42f(u8* __restrict R,Cpu& c);
u32 body_431(u8* __restrict R,Cpu& c);
u32 body_432(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_57d(u8* __restrict R,Cpu& c);
u32 body_5a4(u8* __restrict R,Cpu& c);
u32 body_5d5(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5ee(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f1(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_5fb(u8* __restrict R,Cpu& c);
u32 body_637(u8* __restrict R,Cpu& c);
u32 body_63a(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x430,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x430,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_430(u8* __restrict R,Cpu& c);
u32 page_430(Cpu& c){return body_430(c.regs.data(),c);}
__attribute__((noinline)) u32 body_430(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x430004:goto L430004;
case 0x430007:c.instructions+=2;goto B430007;
case 0x430009:c.instructions+=1;goto B430009;
case 0x43000b:goto L43000b;
case 0x43000c:c.instructions+=3;goto B43000c;
case 0x43000e:c.instructions+=2;goto B43000e;
case 0x43000f:c.instructions+=1;goto B43000f;
case 0x430016:goto L430016;
case 0x430017:c.instructions+=14;goto B430017;
case 0x430018:c.instructions+=13;goto B430018;
case 0x430019:c.instructions+=12;goto B430019;
case 0x43001a:c.instructions+=11;goto B43001a;
case 0x43001b:c.instructions+=10;goto B43001b;
case 0x43001c:c.instructions+=9;goto B43001c;
case 0x43001d:c.instructions+=8;goto B43001d;
case 0x43001e:c.instructions+=7;goto B43001e;
case 0x43001f:c.instructions+=6;goto B43001f;
case 0x430020:c.instructions+=5;goto B430020;
case 0x430021:c.instructions+=4;goto B430021;
case 0x430025:c.instructions+=3;goto B430025;
case 0x430028:c.instructions+=2;goto B430028;
case 0x43002b:c.instructions+=1;goto B43002b;
case 0x43002d:goto L43002d;
case 0x430030:c.instructions+=4;goto B430030;
case 0x430033:c.instructions+=3;goto B430033;
case 0x430035:c.instructions+=2;goto B430035;
case 0x430037:c.instructions+=1;goto B430037;
case 0x430039:goto L430039;
case 0x43003d:c.instructions+=3;goto B43003d;
case 0x43003f:c.instructions+=2;goto B43003f;
case 0x430041:c.instructions+=1;goto B430041;
case 0x430043:goto L430043;
case 0x430047:c.instructions+=2;goto B430047;
case 0x430049:c.instructions+=1;goto B430049;
case 0x43004b:goto L43004b;
case 0x43004c:c.instructions+=1;goto B43004c;
case 0x430051:goto L430051;
case 0x430053:c.instructions+=1;goto B430053;
case 0x430055:goto L430055;
case 0x430057:c.instructions+=2;goto B430057;
case 0x430058:c.instructions+=1;goto B430058;
case 0x43005b:goto L43005b;
case 0x43005d:c.instructions+=2;goto B43005d;
case 0x43005e:c.instructions+=1;goto B43005e;
case 0x430070:goto L430070;
case 0x430074:c.instructions+=6;goto B430074;
case 0x430075:c.instructions+=5;goto B430075;
case 0x430076:c.instructions+=4;goto B430076;
case 0x430078:c.instructions+=3;goto B430078;
case 0x43007d:c.instructions+=2;goto B43007d;
case 0x43007e:c.instructions+=1;goto B43007e;
case 0x430080:goto L430080;
case 0x430083:c.instructions+=2;goto B430083;
case 0x430089:c.instructions+=1;goto B430089;
case 0x43008b:goto L43008b;
case 0x43008e:c.instructions+=1;goto B43008e;
case 0x430094:goto L430094;
case 0x430096:c.instructions+=2;goto B430096;
case 0x430098:c.instructions+=1;goto B430098;
case 0x43009a:goto L43009a;
case 0x43009e:c.instructions+=1;goto B43009e;
case 0x4300a0:goto L4300a0;
case 0x4300a3:c.instructions+=2;goto B4300a3;
case 0x4300a5:c.instructions+=1;goto B4300a5;
case 0x4300a7:goto L4300a7;
case 0x4300a8:c.instructions+=3;goto B4300a8;
case 0x4300ab:c.instructions+=2;goto B4300ab;
case 0x4300ad:c.instructions+=1;goto B4300ad;
case 0x4300af:goto L4300af;
case 0x4300b0:c.instructions+=4;goto B4300b0;
case 0x4300b1:c.instructions+=3;goto B4300b1;
case 0x4300b3:c.instructions+=2;goto B4300b3;
case 0x4300b4:c.instructions+=1;goto B4300b4;
case 0x4300b5:goto L4300b5;
case 0x4300b9:c.instructions+=4;goto B4300b9;
case 0x4300bc:c.instructions+=3;goto B4300bc;
case 0x4300c1:c.instructions+=2;goto B4300c1;
case 0x4300c4:c.instructions+=1;goto B4300c4;
case 0x4300c6:goto L4300c6;
case 0x4300c8:c.instructions+=7;goto B4300c8;
case 0x4300cc:c.instructions+=6;goto B4300cc;
case 0x4300cd:c.instructions+=5;goto B4300cd;
case 0x4300ce:c.instructions+=4;goto B4300ce;
case 0x4300d0:c.instructions+=3;goto B4300d0;
case 0x4300d3:c.instructions+=2;goto B4300d3;
case 0x4300d4:c.instructions+=1;goto B4300d4;
case 0x4300d5:goto L4300d5;
case 0x4300da:c.instructions+=8;goto B4300da;
case 0x4300dd:c.instructions+=7;goto B4300dd;
case 0x4300df:c.instructions+=6;goto B4300df;
case 0x4300e0:c.instructions+=5;goto B4300e0;
case 0x4300e1:c.instructions+=4;goto B4300e1;
case 0x4300e2:c.instructions+=3;goto B4300e2;
case 0x4300e4:c.instructions+=2;goto B4300e4;
case 0x4300e7:c.instructions+=1;goto B4300e7;
case 0x4300f0:goto L4300f0;
case 0x4300f4:c.instructions+=6;goto B4300f4;
case 0x4300f5:c.instructions+=5;goto B4300f5;
case 0x4300f6:c.instructions+=4;goto B4300f6;
case 0x4300f8:c.instructions+=3;goto B4300f8;
case 0x4300fd:c.instructions+=2;goto B4300fd;
case 0x4300fe:c.instructions+=1;goto B4300fe;
case 0x430100:goto L430100;
case 0x430103:c.instructions+=2;goto B430103;
case 0x430109:c.instructions+=1;goto B430109;
case 0x43010b:goto L43010b;
case 0x43010e:c.instructions+=1;goto B43010e;
case 0x430114:goto L430114;
case 0x430116:c.instructions+=2;goto B430116;
case 0x430118:c.instructions+=1;goto B430118;
case 0x43011a:goto L43011a;
case 0x43011e:c.instructions+=1;goto B43011e;
case 0x430120:goto L430120;
case 0x430123:c.instructions+=2;goto B430123;
case 0x430125:c.instructions+=1;goto B430125;
case 0x430127:goto L430127;
case 0x430128:c.instructions+=3;goto B430128;
case 0x43012b:c.instructions+=2;goto B43012b;
case 0x43012d:c.instructions+=1;goto B43012d;
case 0x43012f:goto L43012f;
case 0x430130:c.instructions+=4;goto B430130;
case 0x430131:c.instructions+=3;goto B430131;
case 0x430133:c.instructions+=2;goto B430133;
case 0x430134:c.instructions+=1;goto B430134;
case 0x430135:goto L430135;
case 0x430139:c.instructions+=10;goto B430139;
case 0x43013c:c.instructions+=9;goto B43013c;
case 0x430141:c.instructions+=8;goto B430141;
case 0x430146:c.instructions+=7;goto B430146;
case 0x430148:c.instructions+=6;goto B430148;
case 0x430149:c.instructions+=5;goto B430149;
case 0x43014a:c.instructions+=4;goto B43014a;
case 0x43014b:c.instructions+=3;goto B43014b;
case 0x43014d:c.instructions+=2;goto B43014d;
case 0x430150:c.instructions+=1;goto B430150;
case 0x430160:goto L430160;
case 0x430164:c.instructions+=6;goto B430164;
case 0x430165:c.instructions+=5;goto B430165;
case 0x430166:c.instructions+=4;goto B430166;
case 0x430168:c.instructions+=3;goto B430168;
case 0x43016d:c.instructions+=2;goto B43016d;
case 0x43016e:c.instructions+=1;goto B43016e;
case 0x430170:goto L430170;
case 0x430173:c.instructions+=2;goto B430173;
case 0x430179:c.instructions+=1;goto B430179;
case 0x43017b:goto L43017b;
case 0x43017e:c.instructions+=1;goto B43017e;
case 0x430184:goto L430184;
case 0x430186:c.instructions+=2;goto B430186;
case 0x430188:c.instructions+=1;goto B430188;
case 0x43018a:goto L43018a;
case 0x43018e:c.instructions+=1;goto B43018e;
case 0x430190:goto L430190;
case 0x430193:c.instructions+=2;goto B430193;
case 0x430195:c.instructions+=1;goto B430195;
case 0x430197:goto L430197;
case 0x430198:c.instructions+=3;goto B430198;
case 0x43019b:c.instructions+=2;goto B43019b;
case 0x43019d:c.instructions+=1;goto B43019d;
case 0x43019f:goto L43019f;
case 0x4301a0:c.instructions+=4;goto B4301a0;
case 0x4301a1:c.instructions+=3;goto B4301a1;
case 0x4301a3:c.instructions+=2;goto B4301a3;
case 0x4301a4:c.instructions+=1;goto B4301a4;
case 0x4301a5:goto L4301a5;
case 0x4301a9:c.instructions+=10;goto B4301a9;
case 0x4301ac:c.instructions+=9;goto B4301ac;
case 0x4301b1:c.instructions+=8;goto B4301b1;
case 0x4301b6:c.instructions+=7;goto B4301b6;
case 0x4301b8:c.instructions+=6;goto B4301b8;
case 0x4301b9:c.instructions+=5;goto B4301b9;
case 0x4301ba:c.instructions+=4;goto B4301ba;
case 0x4301bb:c.instructions+=3;goto B4301bb;
case 0x4301bd:c.instructions+=2;goto B4301bd;
case 0x4301c0:c.instructions+=1;goto B4301c0;
case 0x4301d0:goto L4301d0;
case 0x4301d2:c.instructions+=32;goto B4301d2;
case 0x4301d4:c.instructions+=31;goto B4301d4;
case 0x4301d6:c.instructions+=30;goto B4301d6;
case 0x4301dc:c.instructions+=29;goto B4301dc;
case 0x4301df:c.instructions+=28;goto B4301df;
case 0x4301e2:c.instructions+=27;goto B4301e2;
case 0x4301e5:c.instructions+=26;goto B4301e5;
case 0x4301e8:c.instructions+=25;goto B4301e8;
case 0x4301eb:c.instructions+=24;goto B4301eb;
case 0x4301ee:c.instructions+=23;goto B4301ee;
case 0x4301f1:c.instructions+=22;goto B4301f1;
case 0x4301f4:c.instructions+=21;goto B4301f4;
case 0x4301f7:c.instructions+=20;goto B4301f7;
case 0x4301fa:c.instructions+=19;goto B4301fa;
case 0x4301fd:c.instructions+=18;goto B4301fd;
case 0x430200:c.instructions+=17;goto B430200;
case 0x430203:c.instructions+=16;goto B430203;
case 0x430206:c.instructions+=15;goto B430206;
case 0x430209:c.instructions+=14;goto B430209;
case 0x43020c:c.instructions+=13;goto B43020c;
case 0x43020f:c.instructions+=12;goto B43020f;
case 0x430212:c.instructions+=11;goto B430212;
case 0x430215:c.instructions+=10;goto B430215;
case 0x430218:c.instructions+=9;goto B430218;
case 0x43021b:c.instructions+=8;goto B43021b;
case 0x43021e:c.instructions+=7;goto B43021e;
case 0x430221:c.instructions+=6;goto B430221;
case 0x430224:c.instructions+=5;goto B430224;
case 0x430227:c.instructions+=4;goto B430227;
case 0x43022a:c.instructions+=3;goto B43022a;
case 0x43022d:c.instructions+=2;goto B43022d;
case 0x430230:c.instructions+=1;goto B430230;
case 0x430240:goto L430240;
case 0x430245:c.instructions+=11;goto B430245;
case 0x430248:c.instructions+=10;goto B430248;
case 0x43024b:c.instructions+=9;goto B43024b;
case 0x43024e:c.instructions+=8;goto B43024e;
case 0x430251:c.instructions+=7;goto B430251;
case 0x430252:c.instructions+=6;goto B430252;
case 0x430256:c.instructions+=5;goto B430256;
case 0x430259:c.instructions+=4;goto B430259;
case 0x43025b:c.instructions+=3;goto B43025b;
case 0x430260:c.instructions+=2;goto B430260;
case 0x430262:c.instructions+=1;goto B430262;
case 0x430264:goto L430264;
case 0x430269:c.instructions+=2;goto B430269;
case 0x43026b:c.instructions+=1;goto B43026b;
case 0x43026d:goto L43026d;
case 0x430272:c.instructions+=2;goto B430272;
case 0x430274:c.instructions+=1;goto B430274;
case 0x430276:goto L430276;
case 0x430278:c.instructions+=2;goto B430278;
case 0x430279:c.instructions+=1;goto B430279;
case 0x43027e:goto L43027e;
case 0x430280:goto L430280;
case 0x430285:c.instructions+=3;goto B430285;
case 0x430287:c.instructions+=2;goto B430287;
case 0x43028c:c.instructions+=1;goto B43028c;
case 0x43028e:goto L43028e;
case 0x430293:goto L430293;
case 0x430295:c.instructions+=2;goto B430295;
case 0x430296:c.instructions+=1;goto B430296;
case 0x43029b:goto L43029b;
case 0x43029e:c.instructions+=2;goto B43029e;
case 0x4302a0:c.instructions+=1;goto B4302a0;
case 0x4302a2:goto L4302a2;
case 0x4302a5:c.instructions+=3;goto B4302a5;
case 0x4302a7:c.instructions+=2;goto B4302a7;
case 0x4302aa:c.instructions+=1;goto B4302aa;
case 0x4302ad:goto L4302ad;
case 0x4302ae:c.instructions+=1;goto B4302ae;
case 0x4302c0:goto L4302c0;
case 0x4302c1:c.instructions+=4;goto B4302c1;
case 0x4302c3:c.instructions+=3;goto B4302c3;
case 0x4302c6:c.instructions+=2;goto B4302c6;
case 0x4302c8:c.instructions+=1;goto B4302c8;
case 0x4302ca:goto L4302ca;
case 0x4302cf:c.instructions+=3;goto B4302cf;
case 0x4302d5:c.instructions+=2;goto B4302d5;
case 0x4302d7:c.instructions+=1;goto B4302d7;
case 0x4302d9:goto L4302d9;
case 0x4302dd:c.instructions+=1;goto B4302dd;
case 0x4302e2:goto L4302e2;
case 0x4302e6:goto L4302e6;
case 0x4302e7:c.instructions+=1;goto B4302e7;
case 0x4302f0:goto L4302f0;
case 0x4302f5:c.instructions+=3;goto B4302f5;
case 0x4302fb:c.instructions+=2;goto B4302fb;
case 0x4302fd:c.instructions+=1;goto B4302fd;
case 0x4302ff:goto L4302ff;
case 0x430304:goto L430304;
case 0x430310:goto L430310;
case 0x430311:c.instructions+=4;goto B430311;
case 0x430313:c.instructions+=3;goto B430313;
case 0x430316:c.instructions+=2;goto B430316;
case 0x430318:c.instructions+=1;goto B430318;
case 0x43031a:goto L43031a;
case 0x43031f:c.instructions+=3;goto B43031f;
case 0x430325:c.instructions+=2;goto B430325;
case 0x430327:c.instructions+=1;goto B430327;
case 0x430329:goto L430329;
case 0x43032d:c.instructions+=1;goto B43032d;
case 0x430332:goto L430332;
case 0x430336:goto L430336;
case 0x430337:c.instructions+=1;goto B430337;
case 0x430340:goto L430340;
case 0x430343:c.instructions+=1;goto B430343;
case 0x430350:goto L430350;
case 0x430353:c.instructions+=4;goto B430353;
case 0x430355:c.instructions+=3;goto B430355;
case 0x430357:c.instructions+=2;goto B430357;
case 0x43035a:c.instructions+=1;goto B43035a;
case 0x430360:goto L430360;
case 0x430361:c.instructions+=16;goto B430361;
case 0x430363:c.instructions+=15;goto B430363;
case 0x430366:c.instructions+=14;goto B430366;
case 0x430369:c.instructions+=13;goto B430369;
case 0x43036e:c.instructions+=12;goto B43036e;
case 0x430371:c.instructions+=11;goto B430371;
case 0x430374:c.instructions+=10;goto B430374;
case 0x430377:c.instructions+=9;goto B430377;
case 0x43037a:c.instructions+=8;goto B43037a;
case 0x43037d:c.instructions+=7;goto B43037d;
case 0x430382:c.instructions+=6;goto B430382;
case 0x430384:c.instructions+=5;goto B430384;
case 0x430386:c.instructions+=4;goto B430386;
case 0x43038a:c.instructions+=3;goto B43038a;
case 0x43038e:c.instructions+=2;goto B43038e;
case 0x430392:c.instructions+=1;goto B430392;
case 0x430394:goto L430394;
case 0x430399:c.instructions+=1;goto B430399;
case 0x43039e:goto L43039e;
case 0x4303a0:c.instructions+=1;goto B4303a0;
case 0x4303a2:goto L4303a2;
case 0x4303a7:c.instructions+=2;goto B4303a7;
case 0x4303a9:c.instructions+=1;goto B4303a9;
case 0x4303ab:goto L4303ab;
case 0x4303b0:c.instructions+=2;goto B4303b0;
case 0x4303b2:c.instructions+=1;goto B4303b2;
case 0x4303b4:goto L4303b4;
case 0x4303b6:c.instructions+=2;goto B4303b6;
case 0x4303b7:c.instructions+=1;goto B4303b7;
case 0x4303bc:goto L4303bc;
case 0x4303be:goto L4303be;
case 0x4303c3:c.instructions+=3;goto B4303c3;
case 0x4303c5:c.instructions+=2;goto B4303c5;
case 0x4303ca:c.instructions+=1;goto B4303ca;
case 0x4303cc:goto L4303cc;
case 0x4303d1:goto L4303d1;
case 0x4303d3:c.instructions+=2;goto B4303d3;
case 0x4303d4:c.instructions+=1;goto B4303d4;
case 0x4303d9:goto L4303d9;
case 0x4303dc:c.instructions+=2;goto B4303dc;
case 0x4303de:c.instructions+=1;goto B4303de;
case 0x4303e0:goto L4303e0;
case 0x4303e3:c.instructions+=3;goto B4303e3;
case 0x4303e7:c.instructions+=2;goto B4303e7;
case 0x4303ea:c.instructions+=1;goto B4303ea;
case 0x4303ee:goto L4303ee;
case 0x4303f2:c.instructions+=4;goto B4303f2;
case 0x4303f3:c.instructions+=3;goto B4303f3;
case 0x4303f8:c.instructions+=2;goto B4303f8;
case 0x4303fa:c.instructions+=1;goto B4303fa;
case 0x4303ff:goto L4303ff;
case 0x430401:c.instructions+=2;goto B430401;
case 0x430402:c.instructions+=1;goto B430402;
case 0x430403:goto L430403;
case 0x430407:c.instructions+=4;goto B430407;
case 0x430408:c.instructions+=3;goto B430408;
case 0x43040d:c.instructions+=2;goto B43040d;
case 0x43040f:c.instructions+=1;goto B43040f;
case 0x430414:goto L430414;
case 0x430416:c.instructions+=2;goto B430416;
case 0x430417:c.instructions+=1;goto B430417;
case 0x430420:goto L430420;
case 0x430423:c.instructions+=4;goto B430423;
case 0x430425:c.instructions+=3;goto B430425;
case 0x430427:c.instructions+=2;goto B430427;
case 0x43042a:c.instructions+=1;goto B43042a;
case 0x430430:goto L430430;
case 0x430431:c.instructions+=11;goto B430431;
case 0x430433:c.instructions+=10;goto B430433;
case 0x430436:c.instructions+=9;goto B430436;
case 0x430439:c.instructions+=8;goto B430439;
case 0x43043e:c.instructions+=7;goto B43043e;
case 0x430441:c.instructions+=6;goto B430441;
case 0x430442:c.instructions+=5;goto B430442;
case 0x430443:c.instructions+=4;goto B430443;
case 0x430445:c.instructions+=3;goto B430445;
case 0x430447:c.instructions+=2;goto B430447;
case 0x430448:c.instructions+=1;goto B430448;
case 0x43044a:goto L43044a;
case 0x43044f:c.instructions+=1;goto B43044f;
case 0x430450:goto L430450;
case 0x430453:c.instructions+=3;goto B430453;
case 0x430459:c.instructions+=2;goto B430459;
case 0x43045b:c.instructions+=1;goto B43045b;
case 0x43045d:goto L43045d;
case 0x43045f:c.instructions+=1;goto B43045f;
case 0x430464:goto L430464;
case 0x430466:c.instructions+=2;goto B430466;
case 0x430468:c.instructions+=1;goto B430468;
case 0x43046d:goto L43046d;
case 0x430472:goto L430472;
case 0x430475:c.instructions+=4;goto B430475;
case 0x430476:c.instructions+=3;goto B430476;
case 0x430479:c.instructions+=2;goto B430479;
case 0x43047b:c.instructions+=1;goto B43047b;
case 0x43047d:goto L43047d;
case 0x430483:c.instructions+=3;goto B430483;
case 0x430485:c.instructions+=2;goto B430485;
case 0x430487:c.instructions+=1;goto B430487;
case 0x430489:goto L430489;
case 0x430490:goto L430490;
case 0x430497:c.instructions+=3;goto B430497;
case 0x430499:c.instructions+=2;goto B430499;
case 0x43049b:c.instructions+=1;goto B43049b;
case 0x4304a0:goto L4304a0;
case 0x4304a5:c.instructions+=3;goto B4304a5;
case 0x4304a6:c.instructions+=2;goto B4304a6;
case 0x4304a8:c.instructions+=1;goto B4304a8;
case 0x4304aa:goto L4304aa;
case 0x4304af:goto L4304af;
case 0x4304b2:c.instructions+=11;goto B4304b2;
case 0x4304b5:c.instructions+=10;goto B4304b5;
case 0x4304b8:c.instructions+=9;goto B4304b8;
case 0x4304bb:c.instructions+=8;goto B4304bb;
case 0x4304be:c.instructions+=7;goto B4304be;
case 0x4304c3:c.instructions+=6;goto B4304c3;
case 0x4304c5:c.instructions+=5;goto B4304c5;
case 0x4304c7:c.instructions+=4;goto B4304c7;
case 0x4304cb:c.instructions+=3;goto B4304cb;
case 0x4304cf:c.instructions+=2;goto B4304cf;
case 0x4304d3:c.instructions+=1;goto B4304d3;
case 0x4304d5:goto L4304d5;
case 0x4304d7:c.instructions+=2;goto B4304d7;
case 0x4304d8:c.instructions+=1;goto B4304d8;
case 0x4304dd:goto L4304dd;
case 0x4304df:goto L4304df;
case 0x4304e4:c.instructions+=3;goto B4304e4;
case 0x4304e6:c.instructions+=2;goto B4304e6;
case 0x4304ec:c.instructions+=1;goto B4304ec;
case 0x4304ee:goto L4304ee;
case 0x4304f0:c.instructions+=2;goto B4304f0;
case 0x4304f5:c.instructions+=1;goto B4304f5;
case 0x4304f7:goto L4304f7;
case 0x4304fc:c.instructions+=1;goto B4304fc;
case 0x4304fe:goto L4304fe;
case 0x430500:c.instructions+=2;goto B430500;
case 0x430505:c.instructions+=1;goto B430505;
case 0x430507:goto L430507;
case 0x43050c:goto L43050c;
case 0x43050e:c.instructions+=2;goto B43050e;
case 0x43050f:c.instructions+=1;goto B43050f;
case 0x430514:goto L430514;
case 0x430517:c.instructions+=2;goto B430517;
case 0x430519:c.instructions+=1;goto B430519;
case 0x43051b:goto L43051b;
case 0x43051e:c.instructions+=3;goto B43051e;
case 0x430522:c.instructions+=2;goto B430522;
case 0x430525:c.instructions+=1;goto B430525;
case 0x430529:goto L430529;
case 0x43052d:c.instructions+=4;goto B43052d;
case 0x43052e:c.instructions+=3;goto B43052e;
case 0x430530:c.instructions+=2;goto B430530;
case 0x430535:c.instructions+=1;goto B430535;
case 0x43053a:goto L43053a;
case 0x43053b:c.instructions+=5;goto B43053b;
case 0x43053c:c.instructions+=4;goto B43053c;
case 0x43053d:c.instructions+=3;goto B43053d;
case 0x43053f:c.instructions+=2;goto B43053f;
case 0x430540:c.instructions+=1;goto B430540;
case 0x430550:goto L430550;
case 0x430553:c.instructions+=1;goto B430553;
case 0x430560:goto L430560;
case 0x430563:c.instructions+=4;goto B430563;
case 0x430565:c.instructions+=3;goto B430565;
case 0x430567:c.instructions+=2;goto B430567;
case 0x43056a:c.instructions+=1;goto B43056a;
case 0x430570:goto L430570;
case 0x430574:c.instructions+=3;goto B430574;
case 0x430578:c.instructions+=2;goto B430578;
case 0x43057b:c.instructions+=1;goto B43057b;
case 0x430580:goto L430580;
case 0x430584:c.instructions+=3;goto B430584;
case 0x430588:c.instructions+=2;goto B430588;
case 0x43058b:c.instructions+=1;goto B43058b;
case 0x430590:goto L430590;
case 0x430593:c.instructions+=1;goto B430593;
case 0x4305a0:goto L4305a0;
case 0x4305a4:c.instructions+=1;goto B4305a4;
case 0x4305b0:goto L4305b0;
case 0x4305b3:c.instructions+=1;goto B4305b3;
case 0x4305c0:goto L4305c0;
case 0x4305c4:c.instructions+=1;goto B4305c4;
case 0x4305d0:goto L4305d0;
case 0x4305d4:c.instructions+=1;goto B4305d4;
case 0x4305e0:goto L4305e0;
case 0x4305e3:c.instructions+=1;goto B4305e3;
case 0x4305f0:goto L4305f0;
case 0x4305f4:c.instructions+=1;goto B4305f4;
case 0x430600:goto L430600;
case 0x430606:c.instructions+=1;goto B430606;
case 0x430610:goto L430610;
case 0x430615:c.instructions+=4;goto B430615;
case 0x430616:c.instructions+=3;goto B430616;
case 0x430618:c.instructions+=2;goto B430618;
case 0x43061e:c.instructions+=1;goto B43061e;
case 0x430620:goto L430620;
case 0x430621:c.instructions+=1;goto B430621;
case 0x430626:goto L430626;
case 0x430629:goto L430629;
case 0x43062b:c.instructions+=2;goto B43062b;
case 0x43062c:c.instructions+=1;goto B43062c;
case 0x430630:goto L430630;
case 0x430635:c.instructions+=4;goto B430635;
case 0x430636:c.instructions+=3;goto B430636;
case 0x430638:c.instructions+=2;goto B430638;
case 0x43063e:c.instructions+=1;goto B43063e;
case 0x430640:goto L430640;
case 0x430641:c.instructions+=1;goto B430641;
case 0x430646:goto L430646;
case 0x430649:goto L430649;
case 0x43064b:c.instructions+=2;goto B43064b;
case 0x43064c:c.instructions+=1;goto B43064c;
case 0x430650:goto L430650;
case 0x430653:c.instructions+=1;goto B430653;
case 0x430660:goto L430660;
case 0x430663:c.instructions+=1;goto B430663;
case 0x430670:goto L430670;
case 0x430673:c.instructions+=1;goto B430673;
case 0x430680:goto L430680;
case 0x430683:c.instructions+=2;goto B430683;
case 0x430685:c.instructions+=1;goto B430685;
case 0x430687:goto L430687;
case 0x43068e:goto L43068e;
case 0x430690:c.instructions+=1;goto B430690;
case 0x4306a0:goto L4306a0;
case 0x4306a4:c.instructions+=12;goto B4306a4;
case 0x4306a7:c.instructions+=11;goto B4306a7;
case 0x4306ab:c.instructions+=10;goto B4306ab;
case 0x4306ae:c.instructions+=9;goto B4306ae;
case 0x4306b1:c.instructions+=8;goto B4306b1;
case 0x4306b2:c.instructions+=7;goto B4306b2;
case 0x4306b5:c.instructions+=6;goto B4306b5;
case 0x4306b7:c.instructions+=5;goto B4306b7;
case 0x4306b9:c.instructions+=4;goto B4306b9;
case 0x4306bc:c.instructions+=3;goto B4306bc;
case 0x4306bd:c.instructions+=2;goto B4306bd;
case 0x4306bf:c.instructions+=1;goto B4306bf;
case 0x4306c0:goto L4306c0;
case 0x4306c5:c.instructions+=3;goto B4306c5;
case 0x4306c7:c.instructions+=2;goto B4306c7;
case 0x4306c9:c.instructions+=1;goto B4306c9;
case 0x4306cb:goto L4306cb;
case 0x4306d1:c.instructions+=1;goto B4306d1;
case 0x4306d3:goto L4306d3;
case 0x4306d7:c.instructions+=5;goto B4306d7;
case 0x4306da:c.instructions+=4;goto B4306da;
case 0x4306dd:c.instructions+=3;goto B4306dd;
case 0x4306e0:c.instructions+=2;goto B4306e0;
case 0x4306e2:c.instructions+=1;goto B4306e2;
case 0x4306e3:goto L4306e3;
case 0x4306e5:c.instructions+=1;goto B4306e5;
case 0x4306f0:goto L4306f0;
case 0x4306f5:c.instructions+=1;goto B4306f5;
case 0x430700:goto L430700;
case 0x430701:c.instructions+=6;goto B430701;
case 0x430702:c.instructions+=5;goto B430702;
case 0x430703:c.instructions+=4;goto B430703;
case 0x430705:c.instructions+=3;goto B430705;
case 0x430707:c.instructions+=2;goto B430707;
case 0x430709:c.instructions+=1;goto B430709;
case 0x430710:goto L430710;
case 0x430715:c.instructions+=3;goto B430715;
case 0x430718:c.instructions+=2;goto B430718;
case 0x43071a:c.instructions+=1;goto B43071a;
case 0x43071c:goto L43071c;
case 0x43071f:c.instructions+=6;goto B43071f;
case 0x430724:c.instructions+=5;goto B430724;
case 0x430726:c.instructions+=4;goto B430726;
case 0x430729:c.instructions+=3;goto B430729;
case 0x430730:c.instructions+=2;goto B430730;
case 0x430731:c.instructions+=1;goto B430731;
case 0x430736:goto L430736;
case 0x430738:c.instructions+=4;goto B430738;
case 0x43073a:c.instructions+=3;goto B43073a;
case 0x43073d:c.instructions+=2;goto B43073d;
case 0x430740:c.instructions+=1;goto B430740;
case 0x430742:goto L430742;
case 0x430747:c.instructions+=2;goto B430747;
case 0x430749:c.instructions+=1;goto B430749;
case 0x43074b:goto L43074b;
case 0x43074c:c.instructions+=1;goto B43074c;
case 0x43074e:goto L43074e;
case 0x430754:c.instructions+=3;goto B430754;
case 0x430757:c.instructions+=2;goto B430757;
case 0x430759:c.instructions+=1;goto B430759;
case 0x43075b:goto L43075b;
case 0x430761:c.instructions+=6;goto B430761;
case 0x430764:c.instructions+=5;goto B430764;
case 0x430766:c.instructions+=4;goto B430766;
case 0x430769:c.instructions+=3;goto B430769;
case 0x430770:c.instructions+=2;goto B430770;
case 0x430771:c.instructions+=1;goto B430771;
case 0x430776:goto L430776;
case 0x430778:c.instructions+=4;goto B430778;
case 0x43077a:c.instructions+=3;goto B43077a;
case 0x43077d:c.instructions+=2;goto B43077d;
case 0x430780:c.instructions+=1;goto B430780;
case 0x430782:goto L430782;
case 0x430787:c.instructions+=2;goto B430787;
case 0x430789:c.instructions+=1;goto B430789;
case 0x43078b:goto L43078b;
case 0x43078c:c.instructions+=1;goto B43078c;
case 0x43078e:goto L43078e;
case 0x43078f:c.instructions+=4;goto B43078f;
case 0x430791:c.instructions+=3;goto B430791;
case 0x430792:c.instructions+=2;goto B430792;
case 0x430793:c.instructions+=1;goto B430793;
case 0x4307a0:goto L4307a0;
case 0x4307b0:goto L4307b0;
case 0x4307b7:c.instructions+=1;goto B4307b7;
case 0x4307c0:goto L4307c0;
case 0x4307c3:c.instructions+=3;goto B4307c3;
case 0x4307c6:c.instructions+=2;goto B4307c6;
case 0x4307c8:c.instructions+=1;goto B4307c8;
case 0x4307d0:goto L4307d0;
case 0x4307d3:c.instructions+=2;goto B4307d3;
case 0x4307d5:c.instructions+=1;goto B4307d5;
case 0x4307d7:goto L4307d7;
case 0x4307da:c.instructions+=1;goto B4307da;
case 0x4307dc:goto L4307dc;
case 0x4307e1:c.instructions+=1;goto B4307e1;
case 0x4307e2:goto L4307e2;
case 0x4307e4:c.instructions+=1;goto B4307e4;
case 0x4307f0:goto L4307f0;
case 0x4307f4:c.instructions+=12;goto B4307f4;
case 0x4307fb:c.instructions+=11;goto B4307fb;
case 0x430801:c.instructions+=10;goto B430801;
case 0x430804:c.instructions+=9;goto B430804;
case 0x43080a:c.instructions+=8;goto B43080a;
case 0x43080b:c.instructions+=7;goto B43080b;
case 0x43080c:c.instructions+=6;goto B43080c;
case 0x430810:c.instructions+=5;goto B430810;
case 0x430811:c.instructions+=4;goto B430811;
case 0x430814:c.instructions+=3;goto B430814;
case 0x430817:c.instructions+=2;goto B430817;
case 0x430818:c.instructions+=1;goto B430818;
case 0x43081a:goto L43081a;
case 0x43081e:c.instructions+=1;goto B43081e;
case 0x430820:goto L430820;
case 0x430822:goto L430822;
case 0x430828:c.instructions+=2;goto B430828;
case 0x43082b:c.instructions+=1;goto B43082b;
case 0x43082d:goto L43082d;
case 0x430831:c.instructions+=1;goto B430831;
case 0x430833:goto L430833;
case 0x430838:goto L430838;
case 0x43083e:c.instructions+=2;goto B43083e;
case 0x430841:c.instructions+=1;goto B430841;
case 0x430843:goto L430843;
case 0x430847:c.instructions+=1;goto B430847;
case 0x430849:goto L430849;
case 0x43084e:goto L43084e;
case 0x430854:c.instructions+=2;goto B430854;
case 0x430857:c.instructions+=1;goto B430857;
case 0x430859:goto L430859;
case 0x43085d:c.instructions+=1;goto B43085d;
case 0x43085f:goto L43085f;
case 0x430864:goto L430864;
case 0x43086a:c.instructions+=2;goto B43086a;
case 0x43086d:c.instructions+=1;goto B43086d;
case 0x43086f:goto L43086f;
case 0x430873:c.instructions+=1;goto B430873;
case 0x430875:goto L430875;
case 0x43087a:goto L43087a;
case 0x430880:c.instructions+=2;goto B430880;
case 0x430883:c.instructions+=1;goto B430883;
case 0x430885:goto L430885;
case 0x430889:c.instructions+=1;goto B430889;
case 0x43088b:goto L43088b;
case 0x430890:goto L430890;
case 0x430896:c.instructions+=2;goto B430896;
case 0x430899:c.instructions+=1;goto B430899;
case 0x43089b:goto L43089b;
case 0x43089f:c.instructions+=1;goto B43089f;
case 0x4308a1:goto L4308a1;
case 0x4308a6:goto L4308a6;
case 0x4308ac:c.instructions+=2;goto B4308ac;
case 0x4308af:c.instructions+=1;goto B4308af;
case 0x4308b1:goto L4308b1;
case 0x4308b5:c.instructions+=1;goto B4308b5;
case 0x4308b7:goto L4308b7;
case 0x4308bc:goto L4308bc;
case 0x4308be:c.instructions+=1;goto B4308be;
case 0x4308c4:goto L4308c4;
case 0x4308c7:c.instructions+=22;goto B4308c7;
case 0x4308ce:c.instructions+=21;goto B4308ce;
case 0x4308d5:c.instructions+=20;goto B4308d5;
case 0x4308dc:c.instructions+=19;goto B4308dc;
case 0x4308e3:c.instructions+=18;goto B4308e3;
case 0x4308ea:c.instructions+=17;goto B4308ea;
case 0x4308ed:c.instructions+=16;goto B4308ed;
case 0x4308f4:c.instructions+=15;goto B4308f4;
case 0x4308fb:c.instructions+=14;goto B4308fb;
case 0x430902:c.instructions+=13;goto B430902;
case 0x430909:c.instructions+=12;goto B430909;
case 0x430910:c.instructions+=11;goto B430910;
case 0x430917:c.instructions+=10;goto B430917;
case 0x430919:c.instructions+=9;goto B430919;
case 0x430920:c.instructions+=8;goto B430920;
case 0x430927:c.instructions+=7;goto B430927;
case 0x43092e:c.instructions+=6;goto B43092e;
case 0x430935:c.instructions+=5;goto B430935;
case 0x43093c:c.instructions+=4;goto B43093c;
case 0x430943:c.instructions+=3;goto B430943;
case 0x43094a:c.instructions+=2;goto B43094a;
case 0x430951:c.instructions+=1;goto B430951;
case 0x430958:goto L430958;
case 0x430959:c.instructions+=3;goto B430959;
case 0x43095a:c.instructions+=2;goto B43095a;
case 0x43095b:c.instructions+=1;goto B43095b;
case 0x430960:goto L430960;
case 0x430961:c.instructions+=6;goto B430961;
case 0x430966:c.instructions+=5;goto B430966;
case 0x430967:c.instructions+=4;goto B430967;
case 0x430969:c.instructions+=3;goto B430969;
case 0x43096b:c.instructions+=2;goto B43096b;
case 0x43096f:c.instructions+=1;goto B43096f;
case 0x430971:goto L430971;
case 0x430977:c.instructions+=5;goto B430977;
case 0x430978:c.instructions+=4;goto B430978;
case 0x430979:c.instructions+=3;goto B430979;
case 0x43097a:c.instructions+=2;goto B43097a;
case 0x43097f:c.instructions+=1;goto B43097f;
case 0x430980:goto L430980;
case 0x430987:c.instructions+=3;goto B430987;
case 0x43098a:c.instructions+=2;goto B43098a;
case 0x43098b:c.instructions+=1;goto B43098b;
case 0x430990:goto L430990;
case 0x430996:c.instructions+=5;goto B430996;
case 0x430999:c.instructions+=4;goto B430999;
case 0x43099f:c.instructions+=3;goto B43099f;
case 0x4309a1:c.instructions+=2;goto B4309a1;
case 0x4309a3:c.instructions+=1;goto B4309a3;
case 0x4309a5:goto L4309a5;
case 0x4309a8:goto L4309a8;
case 0x4309aa:c.instructions+=1;goto B4309aa;
case 0x4309ac:goto L4309ac;
case 0x4309ad:c.instructions+=3;goto B4309ad;
case 0x4309b0:c.instructions+=2;goto B4309b0;
case 0x4309b2:c.instructions+=1;goto B4309b2;
case 0x4309b4:goto L4309b4;
case 0x4309b6:goto L4309b6;
case 0x4309ba:c.instructions+=5;goto B4309ba;
case 0x4309bd:c.instructions+=4;goto B4309bd;
case 0x4309be:c.instructions+=3;goto B4309be;
case 0x4309c1:c.instructions+=2;goto B4309c1;
case 0x4309c3:c.instructions+=1;goto B4309c3;
case 0x4309c5:goto L4309c5;
case 0x4309c6:c.instructions+=2;goto B4309c6;
case 0x4309c7:c.instructions+=1;goto B4309c7;
case 0x4309c8:goto L4309c8;
case 0x4309c9:c.instructions+=2;goto B4309c9;
case 0x4309ca:c.instructions+=1;goto B4309ca;
case 0x4309d0:goto L4309d0;
case 0x4309d1:c.instructions+=16;goto B4309d1;
case 0x4309d3:c.instructions+=15;goto B4309d3;
case 0x4309d6:c.instructions+=14;goto B4309d6;
case 0x4309d9:c.instructions+=13;goto B4309d9;
case 0x4309dc:c.instructions+=12;goto B4309dc;
case 0x4309dd:c.instructions+=11;goto B4309dd;
case 0x4309de:c.instructions+=10;goto B4309de;
case 0x4309df:c.instructions+=9;goto B4309df;
case 0x4309e2:c.instructions+=8;goto B4309e2;
case 0x4309e4:c.instructions+=7;goto B4309e4;
case 0x4309ea:c.instructions+=6;goto B4309ea;
case 0x4309ed:c.instructions+=5;goto B4309ed;
case 0x4309f3:c.instructions+=4;goto B4309f3;
case 0x4309f7:c.instructions+=3;goto B4309f7;
case 0x4309fd:c.instructions+=2;goto B4309fd;
case 0x4309fe:c.instructions+=1;goto B4309fe;
case 0x430a03:goto L430a03;
case 0x430a06:c.instructions+=6;goto B430a06;
case 0x430a09:c.instructions+=5;goto B430a09;
case 0x430a0c:c.instructions+=4;goto B430a0c;
case 0x430a0d:c.instructions+=3;goto B430a0d;
case 0x430a11:c.instructions+=2;goto B430a11;
case 0x430a12:c.instructions+=1;goto B430a12;
case 0x430a17:goto L430a17;
case 0x430a1b:c.instructions+=6;goto B430a1b;
case 0x430a1c:c.instructions+=5;goto B430a1c;
case 0x430a1f:c.instructions+=4;goto B430a1f;
case 0x430a20:c.instructions+=3;goto B430a20;
case 0x430a24:c.instructions+=2;goto B430a24;
case 0x430a25:c.instructions+=1;goto B430a25;
case 0x430a2a:goto L430a2a;
case 0x430a2e:c.instructions+=6;goto B430a2e;
case 0x430a2f:c.instructions+=5;goto B430a2f;
case 0x430a35:c.instructions+=4;goto B430a35;
case 0x430a39:c.instructions+=3;goto B430a39;
case 0x430a3a:c.instructions+=2;goto B430a3a;
case 0x430a3b:c.instructions+=1;goto B430a3b;
case 0x430a40:goto L430a40;
case 0x430a43:c.instructions+=10;goto B430a43;
case 0x430a47:c.instructions+=9;goto B430a47;
case 0x430a4b:c.instructions+=8;goto B430a4b;
case 0x430a4f:c.instructions+=7;goto B430a4f;
case 0x430a53:c.instructions+=6;goto B430a53;
case 0x430a57:c.instructions+=5;goto B430a57;
case 0x430a5b:c.instructions+=4;goto B430a5b;
case 0x430a5c:c.instructions+=3;goto B430a5c;
case 0x430a5d:c.instructions+=2;goto B430a5d;
case 0x430a61:c.instructions+=1;goto B430a61;
case 0x430a66:goto L430a66;
case 0x430a69:c.instructions+=4;goto B430a69;
case 0x430a6b:c.instructions+=3;goto B430a6b;
case 0x430a71:c.instructions+=2;goto B430a71;
case 0x430a73:c.instructions+=1;goto B430a73;
case 0x430a75:goto L430a75;
case 0x430a77:c.instructions+=6;goto B430a77;
case 0x430a78:c.instructions+=5;goto B430a78;
case 0x430a7a:c.instructions+=4;goto B430a7a;
case 0x430a7e:c.instructions+=3;goto B430a7e;
case 0x430a7f:c.instructions+=2;goto B430a7f;
case 0x430a81:c.instructions+=1;goto B430a81;
case 0x430a86:goto L430a86;
case 0x430a89:c.instructions+=2;goto B430a89;
case 0x430a8b:c.instructions+=1;goto B430a8b;
case 0x430a8d:goto L430a8d;
case 0x430a8f:c.instructions+=2;goto B430a8f;
case 0x430a91:c.instructions+=1;goto B430a91;
case 0x430a96:goto L430a96;
case 0x430a9a:c.instructions+=1;goto B430a9a;
case 0x430a9c:goto L430a9c;
case 0x430aa2:c.instructions+=2;goto B430aa2;
case 0x430aa4:c.instructions+=1;goto B430aa4;
case 0x430aa6:goto L430aa6;
case 0x430aa8:c.instructions+=2;goto B430aa8;
case 0x430aaa:c.instructions+=1;goto B430aaa;
case 0x430aaf:goto L430aaf;
case 0x430ab3:c.instructions+=1;goto B430ab3;
case 0x430ab5:goto L430ab5;
case 0x430abb:c.instructions+=6;goto B430abb;
case 0x430abc:c.instructions+=5;goto B430abc;
case 0x430abd:c.instructions+=4;goto B430abd;
case 0x430ac1:c.instructions+=3;goto B430ac1;
case 0x430ac2:c.instructions+=2;goto B430ac2;
case 0x430ac5:c.instructions+=1;goto B430ac5;
case 0x430aca:goto L430aca;
case 0x430ace:c.instructions+=12;goto B430ace;
case 0x430ad2:c.instructions+=11;goto B430ad2;
case 0x430ad8:c.instructions+=10;goto B430ad8;
case 0x430ade:c.instructions+=9;goto B430ade;
case 0x430adf:c.instructions+=8;goto B430adf;
case 0x430ae5:c.instructions+=7;goto B430ae5;
case 0x430aeb:c.instructions+=6;goto B430aeb;
case 0x430aec:c.instructions+=5;goto B430aec;
case 0x430aed:c.instructions+=4;goto B430aed;
case 0x430aee:c.instructions+=3;goto B430aee;
case 0x430af0:c.instructions+=2;goto B430af0;
case 0x430af1:c.instructions+=1;goto B430af1;
case 0x430b00:goto L430b00;
case 0x430b02:c.instructions+=9;goto B430b02;
case 0x430b04:c.instructions+=8;goto B430b04;
case 0x430b06:c.instructions+=7;goto B430b06;
case 0x430b09:c.instructions+=6;goto B430b09;
case 0x430b0c:c.instructions+=5;goto B430b0c;
case 0x430b0f:c.instructions+=4;goto B430b0f;
case 0x430b12:c.instructions+=3;goto B430b12;
case 0x430b15:c.instructions+=2;goto B430b15;
case 0x430b18:c.instructions+=1;goto B430b18;
case 0x430b20:goto L430b20;
case 0x430b21:c.instructions+=4;goto B430b21;
case 0x430b25:c.instructions+=3;goto B430b25;
case 0x430b2a:c.instructions+=2;goto B430b2a;
case 0x430b2b:c.instructions+=1;goto B430b2b;
case 0x430b30:goto L430b30;
case 0x430b33:c.instructions+=2;goto B430b33;
case 0x430b35:c.instructions+=1;goto B430b35;
case 0x430b37:goto L430b37;
case 0x430b3c:c.instructions+=2;goto B430b3c;
case 0x430b3d:c.instructions+=1;goto B430b3d;
case 0x430b3e:goto L430b3e;
case 0x430b43:c.instructions+=2;goto B430b43;
case 0x430b44:c.instructions+=1;goto B430b44;
case 0x430b49:goto L430b49;
case 0x430b4c:c.instructions+=2;goto B430b4c;
case 0x430b4e:c.instructions+=1;goto B430b4e;
case 0x430b50:goto L430b50;
case 0x430b55:c.instructions+=2;goto B430b55;
case 0x430b56:c.instructions+=1;goto B430b56;
case 0x430b57:goto L430b57;
case 0x430b5c:c.instructions+=2;goto B430b5c;
case 0x430b5d:c.instructions+=1;goto B430b5d;
case 0x430b62:goto L430b62;
case 0x430b65:c.instructions+=2;goto B430b65;
case 0x430b67:c.instructions+=1;goto B430b67;
case 0x430b69:goto L430b69;
case 0x430b6e:c.instructions+=2;goto B430b6e;
case 0x430b6f:c.instructions+=1;goto B430b6f;
case 0x430b70:goto L430b70;
case 0x430b75:c.instructions+=2;goto B430b75;
case 0x430b76:c.instructions+=1;goto B430b76;
case 0x430b7b:goto L430b7b;
case 0x430b7e:c.instructions+=2;goto B430b7e;
case 0x430b80:c.instructions+=1;goto B430b80;
case 0x430b82:goto L430b82;
case 0x430b87:c.instructions+=2;goto B430b87;
case 0x430b88:c.instructions+=1;goto B430b88;
case 0x430b89:goto L430b89;
case 0x430b8e:c.instructions+=2;goto B430b8e;
case 0x430b8f:c.instructions+=1;goto B430b8f;
case 0x430b94:goto L430b94;
case 0x430b97:c.instructions+=2;goto B430b97;
case 0x430b99:c.instructions+=1;goto B430b99;
case 0x430b9b:goto L430b9b;
case 0x430ba0:c.instructions+=2;goto B430ba0;
case 0x430ba1:c.instructions+=1;goto B430ba1;
case 0x430ba2:goto L430ba2;
case 0x430ba7:c.instructions+=2;goto B430ba7;
case 0x430ba8:c.instructions+=1;goto B430ba8;
case 0x430bad:goto L430bad;
case 0x430bb0:c.instructions+=2;goto B430bb0;
case 0x430bb2:c.instructions+=1;goto B430bb2;
case 0x430bb4:goto L430bb4;
case 0x430bb9:c.instructions+=2;goto B430bb9;
case 0x430bba:c.instructions+=1;goto B430bba;
case 0x430bbb:goto L430bbb;
case 0x430bc0:c.instructions+=2;goto B430bc0;
case 0x430bc1:c.instructions+=1;goto B430bc1;
case 0x430bc6:goto L430bc6;
case 0x430bc9:c.instructions+=2;goto B430bc9;
case 0x430bcb:c.instructions+=1;goto B430bcb;
case 0x430bcd:goto L430bcd;
case 0x430bd2:c.instructions+=2;goto B430bd2;
case 0x430bd3:c.instructions+=1;goto B430bd3;
case 0x430bd4:goto L430bd4;
case 0x430bd9:c.instructions+=2;goto B430bd9;
case 0x430bda:c.instructions+=1;goto B430bda;
case 0x430bdf:goto L430bdf;
case 0x430be2:c.instructions+=2;goto B430be2;
case 0x430be4:c.instructions+=1;goto B430be4;
case 0x430be6:goto L430be6;
case 0x430beb:c.instructions+=2;goto B430beb;
case 0x430bec:c.instructions+=1;goto B430bec;
case 0x430bed:goto L430bed;
case 0x430bf2:c.instructions+=2;goto B430bf2;
case 0x430bf3:c.instructions+=1;goto B430bf3;
case 0x430bf8:goto L430bf8;
case 0x430bfb:c.instructions+=2;goto B430bfb;
case 0x430bfd:c.instructions+=1;goto B430bfd;
case 0x430bff:goto L430bff;
case 0x430c04:c.instructions+=2;goto B430c04;
case 0x430c05:c.instructions+=1;goto B430c05;
case 0x430c06:goto L430c06;
case 0x430c0b:c.instructions+=2;goto B430c0b;
case 0x430c0c:c.instructions+=1;goto B430c0c;
case 0x430c11:goto L430c11;
case 0x430c14:c.instructions+=2;goto B430c14;
case 0x430c16:c.instructions+=1;goto B430c16;
case 0x430c18:goto L430c18;
case 0x430c1d:c.instructions+=2;goto B430c1d;
case 0x430c1e:c.instructions+=1;goto B430c1e;
case 0x430c1f:goto L430c1f;
case 0x430c24:c.instructions+=2;goto B430c24;
case 0x430c25:c.instructions+=1;goto B430c25;
case 0x430c2a:goto L430c2a;
case 0x430c2d:c.instructions+=2;goto B430c2d;
case 0x430c2f:c.instructions+=1;goto B430c2f;
case 0x430c31:goto L430c31;
case 0x430c36:c.instructions+=2;goto B430c36;
case 0x430c37:c.instructions+=1;goto B430c37;
case 0x430c38:goto L430c38;
case 0x430c3d:c.instructions+=2;goto B430c3d;
case 0x430c3e:c.instructions+=1;goto B430c3e;
case 0x430c43:goto L430c43;
case 0x430c46:c.instructions+=2;goto B430c46;
case 0x430c48:c.instructions+=1;goto B430c48;
case 0x430c4a:goto L430c4a;
case 0x430c4f:c.instructions+=2;goto B430c4f;
case 0x430c50:c.instructions+=1;goto B430c50;
case 0x430c51:goto L430c51;
case 0x430c56:c.instructions+=2;goto B430c56;
case 0x430c57:c.instructions+=1;goto B430c57;
case 0x430c5c:goto L430c5c;
case 0x430c5f:c.instructions+=2;goto B430c5f;
case 0x430c61:c.instructions+=1;goto B430c61;
case 0x430c63:goto L430c63;
case 0x430c68:c.instructions+=2;goto B430c68;
case 0x430c69:c.instructions+=1;goto B430c69;
case 0x430c6a:goto L430c6a;
case 0x430c6f:c.instructions+=2;goto B430c6f;
case 0x430c70:c.instructions+=1;goto B430c70;
case 0x430c75:goto L430c75;
case 0x430c78:c.instructions+=6;goto B430c78;
case 0x430c7a:c.instructions+=5;goto B430c7a;
case 0x430c7c:c.instructions+=4;goto B430c7c;
case 0x430c7f:c.instructions+=3;goto B430c7f;
case 0x430c82:c.instructions+=2;goto B430c82;
case 0x430c83:c.instructions+=1;goto B430c83;
case 0x430c90:goto L430c90;
case 0x430c91:c.instructions+=4;goto B430c91;
case 0x430c95:c.instructions+=3;goto B430c95;
case 0x430c9a:c.instructions+=2;goto B430c9a;
case 0x430c9b:c.instructions+=1;goto B430c9b;
case 0x430ca0:goto L430ca0;
case 0x430ca3:c.instructions+=2;goto B430ca3;
case 0x430ca5:c.instructions+=1;goto B430ca5;
case 0x430ca7:goto L430ca7;
case 0x430cac:c.instructions+=2;goto B430cac;
case 0x430cad:c.instructions+=1;goto B430cad;
case 0x430cae:goto L430cae;
case 0x430cb3:c.instructions+=2;goto B430cb3;
case 0x430cb4:c.instructions+=1;goto B430cb4;
case 0x430cb9:goto L430cb9;
case 0x430cbc:c.instructions+=2;goto B430cbc;
case 0x430cbe:c.instructions+=1;goto B430cbe;
case 0x430cc0:goto L430cc0;
case 0x430cc5:c.instructions+=2;goto B430cc5;
case 0x430cc6:c.instructions+=1;goto B430cc6;
case 0x430cc7:goto L430cc7;
case 0x430ccc:c.instructions+=2;goto B430ccc;
case 0x430ccd:c.instructions+=1;goto B430ccd;
case 0x430cd2:goto L430cd2;
case 0x430cd5:c.instructions+=2;goto B430cd5;
case 0x430cd7:c.instructions+=1;goto B430cd7;
case 0x430cd9:goto L430cd9;
case 0x430cde:c.instructions+=2;goto B430cde;
case 0x430cdf:c.instructions+=1;goto B430cdf;
case 0x430ce0:goto L430ce0;
case 0x430ce5:c.instructions+=2;goto B430ce5;
case 0x430ce6:c.instructions+=1;goto B430ce6;
case 0x430ceb:goto L430ceb;
case 0x430cee:c.instructions+=6;goto B430cee;
case 0x430cf0:c.instructions+=5;goto B430cf0;
case 0x430cf2:c.instructions+=4;goto B430cf2;
case 0x430cf5:c.instructions+=3;goto B430cf5;
case 0x430cf8:c.instructions+=2;goto B430cf8;
case 0x430cf9:c.instructions+=1;goto B430cf9;
case 0x430d00:goto L430d00;
case 0x430d01:c.instructions+=4;goto B430d01;
case 0x430d05:c.instructions+=3;goto B430d05;
case 0x430d0a:c.instructions+=2;goto B430d0a;
case 0x430d0b:c.instructions+=1;goto B430d0b;
case 0x430d10:goto L430d10;
case 0x430d13:c.instructions+=2;goto B430d13;
case 0x430d15:c.instructions+=1;goto B430d15;
case 0x430d17:goto L430d17;
case 0x430d1c:c.instructions+=2;goto B430d1c;
case 0x430d1d:c.instructions+=1;goto B430d1d;
case 0x430d1e:goto L430d1e;
case 0x430d23:c.instructions+=2;goto B430d23;
case 0x430d24:c.instructions+=1;goto B430d24;
case 0x430d29:goto L430d29;
case 0x430d2c:c.instructions+=6;goto B430d2c;
case 0x430d2e:c.instructions+=5;goto B430d2e;
case 0x430d30:c.instructions+=4;goto B430d30;
case 0x430d33:c.instructions+=3;goto B430d33;
case 0x430d36:c.instructions+=2;goto B430d36;
case 0x430d37:c.instructions+=1;goto B430d37;
case 0x430d40:goto L430d40;
case 0x430d41:c.instructions+=4;goto B430d41;
case 0x430d45:c.instructions+=3;goto B430d45;
case 0x430d4a:c.instructions+=2;goto B430d4a;
case 0x430d4b:c.instructions+=1;goto B430d4b;
case 0x430d50:goto L430d50;
case 0x430d53:c.instructions+=2;goto B430d53;
case 0x430d55:c.instructions+=1;goto B430d55;
case 0x430d57:goto L430d57;
case 0x430d58:c.instructions+=1;goto B430d58;
case 0x430d59:goto L430d59;
case 0x430d5e:c.instructions+=2;goto B430d5e;
case 0x430d5f:c.instructions+=1;goto B430d5f;
case 0x430d64:goto L430d64;
case 0x430d67:c.instructions+=2;goto B430d67;
case 0x430d69:c.instructions+=1;goto B430d69;
case 0x430d6b:goto L430d6b;
case 0x430d70:c.instructions+=2;goto B430d70;
case 0x430d71:c.instructions+=1;goto B430d71;
case 0x430d72:goto L430d72;
case 0x430d77:c.instructions+=2;goto B430d77;
case 0x430d78:c.instructions+=1;goto B430d78;
case 0x430d7d:goto L430d7d;
case 0x430d80:c.instructions+=2;goto B430d80;
case 0x430d82:c.instructions+=1;goto B430d82;
case 0x430d84:goto L430d84;
case 0x430d89:c.instructions+=2;goto B430d89;
case 0x430d8a:c.instructions+=1;goto B430d8a;
case 0x430d8b:goto L430d8b;
case 0x430d90:c.instructions+=2;goto B430d90;
case 0x430d91:c.instructions+=1;goto B430d91;
case 0x430d96:goto L430d96;
case 0x430d99:c.instructions+=6;goto B430d99;
case 0x430d9b:c.instructions+=5;goto B430d9b;
case 0x430d9d:c.instructions+=4;goto B430d9d;
case 0x430da0:c.instructions+=3;goto B430da0;
case 0x430da3:c.instructions+=2;goto B430da3;
case 0x430da4:c.instructions+=1;goto B430da4;
case 0x430db0:goto L430db0;
case 0x430db4:c.instructions+=4;goto B430db4;
case 0x430db7:c.instructions+=3;goto B430db7;
case 0x430dbb:c.instructions+=2;goto B430dbb;
case 0x430dbe:c.instructions+=1;goto B430dbe;
case 0x430dc0:goto L430dc0;
case 0x430dc2:c.instructions+=11;goto B430dc2;
case 0x430dc6:c.instructions+=10;goto B430dc6;
case 0x430dc9:c.instructions+=9;goto B430dc9;
case 0x430dcc:c.instructions+=8;goto B430dcc;
case 0x430dd0:c.instructions+=7;goto B430dd0;
case 0x430dd1:c.instructions+=6;goto B430dd1;
case 0x430dd5:c.instructions+=5;goto B430dd5;
case 0x430dd6:c.instructions+=4;goto B430dd6;
case 0x430dd7:c.instructions+=3;goto B430dd7;
case 0x430dd9:c.instructions+=2;goto B430dd9;
case 0x430dde:c.instructions+=1;goto B430dde;
case 0x430de3:goto L430de3;
case 0x430de5:goto L430de5;
case 0x430de8:c.instructions+=12;goto B430de8;
case 0x430deb:c.instructions+=11;goto B430deb;
case 0x430def:c.instructions+=10;goto B430def;
case 0x430df2:c.instructions+=9;goto B430df2;
case 0x430df5:c.instructions+=8;goto B430df5;
case 0x430df9:c.instructions+=7;goto B430df9;
case 0x430dfc:c.instructions+=6;goto B430dfc;
case 0x430dff:c.instructions+=5;goto B430dff;
case 0x430e02:c.instructions+=4;goto B430e02;
case 0x430e06:c.instructions+=3;goto B430e06;
case 0x430e08:c.instructions+=2;goto B430e08;
case 0x430e0d:c.instructions+=1;goto B430e0d;
case 0x430e12:goto L430e12;
case 0x430e14:goto L430e14;
case 0x430e17:c.instructions+=12;goto B430e17;
case 0x430e1a:c.instructions+=11;goto B430e1a;
case 0x430e1e:c.instructions+=10;goto B430e1e;
case 0x430e21:c.instructions+=9;goto B430e21;
case 0x430e24:c.instructions+=8;goto B430e24;
case 0x430e28:c.instructions+=7;goto B430e28;
case 0x430e2b:c.instructions+=6;goto B430e2b;
case 0x430e2e:c.instructions+=5;goto B430e2e;
case 0x430e31:c.instructions+=4;goto B430e31;
case 0x430e35:c.instructions+=3;goto B430e35;
case 0x430e37:c.instructions+=2;goto B430e37;
case 0x430e3c:c.instructions+=1;goto B430e3c;
case 0x430e41:goto L430e41;
case 0x430e43:goto L430e43;
case 0x430e46:c.instructions+=12;goto B430e46;
case 0x430e49:c.instructions+=11;goto B430e49;
case 0x430e4d:c.instructions+=10;goto B430e4d;
case 0x430e50:c.instructions+=9;goto B430e50;
case 0x430e53:c.instructions+=8;goto B430e53;
case 0x430e57:c.instructions+=7;goto B430e57;
case 0x430e5a:c.instructions+=6;goto B430e5a;
case 0x430e5d:c.instructions+=5;goto B430e5d;
case 0x430e60:c.instructions+=4;goto B430e60;
case 0x430e64:c.instructions+=3;goto B430e64;
case 0x430e69:c.instructions+=2;goto B430e69;
case 0x430e6e:c.instructions+=1;goto B430e6e;
case 0x430e70:goto L430e70;
case 0x430e72:goto L430e72;
case 0x430e75:c.instructions+=12;goto B430e75;
case 0x430e78:c.instructions+=11;goto B430e78;
case 0x430e7c:c.instructions+=10;goto B430e7c;
case 0x430e7f:c.instructions+=9;goto B430e7f;
case 0x430e82:c.instructions+=8;goto B430e82;
case 0x430e85:c.instructions+=7;goto B430e85;
case 0x430e88:c.instructions+=6;goto B430e88;
case 0x430e89:c.instructions+=5;goto B430e89;
case 0x430e8c:c.instructions+=4;goto B430e8c;
case 0x430e8d:c.instructions+=3;goto B430e8d;
case 0x430e90:c.instructions+=2;goto B430e90;
case 0x430e91:c.instructions+=1;goto B430e91;
case 0x430ea0:goto L430ea0;
case 0x430ea2:c.instructions+=11;goto B430ea2;
case 0x430ea6:c.instructions+=10;goto B430ea6;
case 0x430ea9:c.instructions+=9;goto B430ea9;
case 0x430eac:c.instructions+=8;goto B430eac;
case 0x430eb0:c.instructions+=7;goto B430eb0;
case 0x430eb1:c.instructions+=6;goto B430eb1;
case 0x430eb5:c.instructions+=5;goto B430eb5;
case 0x430eb6:c.instructions+=4;goto B430eb6;
case 0x430eb7:c.instructions+=3;goto B430eb7;
case 0x430eb9:c.instructions+=2;goto B430eb9;
case 0x430ebe:c.instructions+=1;goto B430ebe;
case 0x430ec3:goto L430ec3;
case 0x430ec5:goto L430ec5;
case 0x430ec8:c.instructions+=9;goto B430ec8;
case 0x430ecb:c.instructions+=8;goto B430ecb;
case 0x430ecf:c.instructions+=7;goto B430ecf;
case 0x430ed2:c.instructions+=6;goto B430ed2;
case 0x430ed5:c.instructions+=5;goto B430ed5;
case 0x430ed8:c.instructions+=4;goto B430ed8;
case 0x430edc:c.instructions+=3;goto B430edc;
case 0x430ede:c.instructions+=2;goto B430ede;
case 0x430ee3:c.instructions+=1;goto B430ee3;
case 0x430ee8:goto L430ee8;
case 0x430eea:goto L430eea;
case 0x430eed:c.instructions+=9;goto B430eed;
case 0x430ef0:c.instructions+=8;goto B430ef0;
case 0x430ef4:c.instructions+=7;goto B430ef4;
case 0x430ef7:c.instructions+=6;goto B430ef7;
case 0x430efa:c.instructions+=5;goto B430efa;
case 0x430efd:c.instructions+=4;goto B430efd;
case 0x430f01:c.instructions+=3;goto B430f01;
case 0x430f03:c.instructions+=2;goto B430f03;
case 0x430f08:c.instructions+=1;goto B430f08;
case 0x430f0d:goto L430f0d;
case 0x430f0f:goto L430f0f;
case 0x430f12:c.instructions+=9;goto B430f12;
case 0x430f15:c.instructions+=8;goto B430f15;
case 0x430f19:c.instructions+=7;goto B430f19;
case 0x430f1c:c.instructions+=6;goto B430f1c;
case 0x430f1f:c.instructions+=5;goto B430f1f;
case 0x430f22:c.instructions+=4;goto B430f22;
case 0x430f26:c.instructions+=3;goto B430f26;
case 0x430f28:c.instructions+=2;goto B430f28;
case 0x430f2d:c.instructions+=1;goto B430f2d;
case 0x430f32:goto L430f32;
case 0x430f34:goto L430f34;
case 0x430f37:c.instructions+=9;goto B430f37;
case 0x430f3a:c.instructions+=8;goto B430f3a;
case 0x430f3e:c.instructions+=7;goto B430f3e;
case 0x430f41:c.instructions+=6;goto B430f41;
case 0x430f44:c.instructions+=5;goto B430f44;
case 0x430f47:c.instructions+=4;goto B430f47;
case 0x430f4e:c.instructions+=3;goto B430f4e;
case 0x430f50:c.instructions+=2;goto B430f50;
case 0x430f55:c.instructions+=1;goto B430f55;
case 0x430f5a:goto L430f5a;
case 0x430f5c:goto L430f5c;
case 0x430f5f:c.instructions+=9;goto B430f5f;
case 0x430f62:c.instructions+=8;goto B430f62;
case 0x430f66:c.instructions+=7;goto B430f66;
case 0x430f69:c.instructions+=6;goto B430f69;
case 0x430f6c:c.instructions+=5;goto B430f6c;
case 0x430f6f:c.instructions+=4;goto B430f6f;
case 0x430f76:c.instructions+=3;goto B430f76;
case 0x430f78:c.instructions+=2;goto B430f78;
case 0x430f7d:c.instructions+=1;goto B430f7d;
case 0x430f82:goto L430f82;
case 0x430f84:goto L430f84;
case 0x430f87:c.instructions+=9;goto B430f87;
case 0x430f8a:c.instructions+=8;goto B430f8a;
case 0x430f8e:c.instructions+=7;goto B430f8e;
case 0x430f91:c.instructions+=6;goto B430f91;
case 0x430f94:c.instructions+=5;goto B430f94;
case 0x430f97:c.instructions+=4;goto B430f97;
case 0x430f9e:c.instructions+=3;goto B430f9e;
case 0x430fa3:c.instructions+=2;goto B430fa3;
case 0x430fa8:c.instructions+=1;goto B430fa8;
case 0x430faa:goto L430faa;
case 0x430fac:goto L430fac;
case 0x430faf:c.instructions+=9;goto B430faf;
case 0x430fb2:c.instructions+=8;goto B430fb2;
case 0x430fb5:c.instructions+=7;goto B430fb5;
case 0x430fb9:c.instructions+=6;goto B430fb9;
case 0x430fbc:c.instructions+=5;goto B430fbc;
case 0x430fbf:c.instructions+=4;goto B430fbf;
case 0x430fc6:c.instructions+=3;goto B430fc6;
case 0x430fc8:c.instructions+=2;goto B430fc8;
case 0x430fcd:c.instructions+=1;goto B430fcd;
case 0x430fd2:goto L430fd2;
case 0x430fd4:goto L430fd4;
case 0x430fd7:c.instructions+=9;goto B430fd7;
case 0x430fda:c.instructions+=8;goto B430fda;
case 0x430fde:c.instructions+=7;goto B430fde;
case 0x430fe1:c.instructions+=6;goto B430fe1;
case 0x430fe4:c.instructions+=5;goto B430fe4;
case 0x430fe7:c.instructions+=4;goto B430fe7;
case 0x430fee:c.instructions+=3;goto B430fee;
case 0x430ff0:c.instructions+=2;goto B430ff0;
case 0x430ff5:c.instructions+=1;goto B430ff5;
case 0x430ffa:goto L430ffa;
case 0x430ffc:goto L430ffc;
case 0x430fff:c.instructions+=1;goto B430fff;
default:missing_instruction(c.pc);}
B430004:L430004:{c.instructions+=3;NFSU2_TR(0x430004);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B430007:{NFSU2_TR(0x430007);
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
B430009:{NFSU2_TR(0x430009);
if(r1(R+518)){TAIL_STATIC(0x42ffe3u,42f);}
}
B43000b:L43000b:{c.instructions+=4;NFSU2_TR(0x43000b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43000c:{NFSU2_TR(0x43000c);
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
B43000e:{NFSU2_TR(0x43000e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43000f:{NFSU2_TR(0x43000f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430016:L430016:{c.instructions+=15;NFSU2_TR(0x430016);
}
B430017:{NFSU2_TR(0x430017);
}
B430018:{NFSU2_TR(0x430018);
}
B430019:{NFSU2_TR(0x430019);
}
B43001a:{NFSU2_TR(0x43001a);
}
B43001b:{NFSU2_TR(0x43001b);
}
B43001c:{NFSU2_TR(0x43001c);
}
B43001d:{NFSU2_TR(0x43001d);
}
B43001e:{NFSU2_TR(0x43001e);
}
B43001f:{NFSU2_TR(0x43001f);
}
B430020:{NFSU2_TR(0x430020);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430021:{NFSU2_TR(0x430021);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B430025:{NFSU2_TR(0x430025);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B430028:{NFSU2_TR(0x430028);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43002b:{NFSU2_TR(0x43002b);
if(r1(R+518)){{goto L43005b;}}
}
B43002d:L43002d:{c.instructions+=5;NFSU2_TR(0x43002d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B430030:{NFSU2_TR(0x430030);
w4(R+8,u32(r1(R+8)));
}
B430033:{NFSU2_TR(0x430033);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B430035:{NFSU2_TR(0x430035);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B430037:{NFSU2_TR(0x430037);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43005b;}}
}
B430039:L430039:{c.instructions+=4;NFSU2_TR(0x430039);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B43003d:{NFSU2_TR(0x43003d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43003f:{NFSU2_TR(0x43003f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B430041:{NFSU2_TR(0x430041);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L43005b;}}
}
B430043:L430043:{c.instructions+=3;NFSU2_TR(0x430043);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B430047:{NFSU2_TR(0x430047);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B430049:{NFSU2_TR(0x430049);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L43005b;}}
}
B43004b:L43004b:{c.instructions+=2;NFSU2_TR(0x43004b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43004c:{NFSU2_TR(0x43004c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430051ull));
TAIL_STATIC(0x42ffd0u,42f);
}
B430051:L430051:{c.instructions+=2;NFSU2_TR(0x430051);
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
B430053:{NFSU2_TR(0x430053);
if(r1(R+518)){{goto L43005b;}}
}
B430055:L430055:{c.instructions+=3;NFSU2_TR(0x430055);
w1(R+0,u8(0x1ull));
}
B430057:{NFSU2_TR(0x430057);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B430058:{NFSU2_TR(0x430058);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43005b:L43005b:{c.instructions+=3;NFSU2_TR(0x43005b);
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
B43005d:{NFSU2_TR(0x43005d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43005e:{NFSU2_TR(0x43005e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430070:L430070:{c.instructions+=7;NFSU2_TR(0x430070);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B430074:{NFSU2_TR(0x430074);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430075:{NFSU2_TR(0x430075);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430076:{NFSU2_TR(0x430076);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B430078:{NFSU2_TR(0x430078);
__builtin_memmove((R+0),gp(0x827ad4),4);
}
B43007d:{NFSU2_TR(0x43007d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43007e:{NFSU2_TR(0x43007e);
if(r1(R+518)){{goto L43008b;}}
}
B430080:L430080:{c.instructions+=3;NFSU2_TR(0x430080);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B430083:{NFSU2_TR(0x430083);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x37cull))));
__builtin_memmove((R+24),(U+0),4);
}
B430089:{NFSU2_TR(0x430089);
{goto L430094;}
}
B43008b:L43008b:{c.instructions+=2;NFSU2_TR(0x43008b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43008e:{NFSU2_TR(0x43008e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x91cull))));
__builtin_memmove((R+24),(U+0),4);
}
B430094:L430094:{c.instructions+=3;NFSU2_TR(0x430094);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B430096:{NFSU2_TR(0x430096);
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
B430098:{NFSU2_TR(0x430098);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L4300af;}}
}
B43009a:L43009a:{c.instructions+=2;NFSU2_TR(0x43009a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43009e:{NFSU2_TR(0x43009e);
__builtin_memmove((R+4),(R+24),4);
}
B4300a0:L4300a0:{c.instructions+=3;NFSU2_TR(0x4300a0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+12,u32(r2(U+0)));
}
B4300a3:{NFSU2_TR(0x4300a3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4300a5:{NFSU2_TR(0x4300a5);
if(r1(R+518)){{goto L4300b5;}}
}
B4300a7:L4300a7:{c.instructions+=4;NFSU2_TR(0x4300a7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4300a8:{NFSU2_TR(0x4300a8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B4300ab:{NFSU2_TR(0x4300ab);
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
B4300ad:{NFSU2_TR(0x4300ad);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4300a0u);}goto L4300a0;}}
}
B4300af:L4300af:{c.instructions+=5;NFSU2_TR(0x4300af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4300b0:{NFSU2_TR(0x4300b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4300b1:{NFSU2_TR(0x4300b1);
w1(R+0,u8(0x1ull));
}
B4300b3:{NFSU2_TR(0x4300b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4300b4:{NFSU2_TR(0x4300b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4300b5:L4300b5:{c.instructions+=5;NFSU2_TR(0x4300b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4300b9:{NFSU2_TR(0x4300b9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x20ull))));
}
B4300bc:{NFSU2_TR(0x4300bc);
w4(R+8,u32(0x1ull));
}
B4300c1:{NFSU2_TR(0x4300c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4300c4:{NFSU2_TR(0x4300c4);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L4300d5;}}
}
B4300c6:L4300c6:{c.instructions+=8;NFSU2_TR(0x4300c6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B4300c8:{NFSU2_TR(0x4300c8);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B4300cc:{NFSU2_TR(0x4300cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4300cd:{NFSU2_TR(0x4300cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4300ce:{NFSU2_TR(0x4300ce);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+4))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4300d0:{NFSU2_TR(0x4300d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B4300d3:{NFSU2_TR(0x4300d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4300d4:{NFSU2_TR(0x4300d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4300d5:L4300d5:{c.instructions+=9;NFSU2_TR(0x4300d5);
u8 U[14];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B4300da:{NFSU2_TR(0x4300da);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xffffffe0ull))));
}
B4300dd:{NFSU2_TR(0x4300dd);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B4300df:{NFSU2_TR(0x4300df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4300e0:{NFSU2_TR(0x4300e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4300e1:{NFSU2_TR(0x4300e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4300e2:{NFSU2_TR(0x4300e2);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4300e4:{NFSU2_TR(0x4300e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B4300e7:{NFSU2_TR(0x4300e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4300f0:L4300f0:{c.instructions+=7;NFSU2_TR(0x4300f0);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4300f4:{NFSU2_TR(0x4300f4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4300f5:{NFSU2_TR(0x4300f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4300f6:{NFSU2_TR(0x4300f6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4300f8:{NFSU2_TR(0x4300f8);
__builtin_memmove((R+0),gp(0x827ad4),4);
}
B4300fd:{NFSU2_TR(0x4300fd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4300fe:{NFSU2_TR(0x4300fe);
if(r1(R+518)){{goto L43010b;}}
}
B430100:L430100:{c.instructions+=3;NFSU2_TR(0x430100);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B430103:{NFSU2_TR(0x430103);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x37cull))));
__builtin_memmove((R+28),(U+0),4);
}
B430109:{NFSU2_TR(0x430109);
{goto L430114;}
}
B43010b:L43010b:{c.instructions+=2;NFSU2_TR(0x43010b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43010e:{NFSU2_TR(0x43010e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x91cull))));
__builtin_memmove((R+28),(U+0),4);
}
B430114:L430114:{c.instructions+=3;NFSU2_TR(0x430114);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B430116:{NFSU2_TR(0x430116);
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
B430118:{NFSU2_TR(0x430118);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L43012f;}}
}
B43011a:L43011a:{c.instructions+=2;NFSU2_TR(0x43011a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43011e:{NFSU2_TR(0x43011e);
__builtin_memmove((R+4),(R+28),4);
}
B430120:L430120:{c.instructions+=3;NFSU2_TR(0x430120);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+12,u32(r2(U+0)));
}
B430123:{NFSU2_TR(0x430123);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B430125:{NFSU2_TR(0x430125);
if(r1(R+518)){{goto L430135;}}
}
B430127:L430127:{c.instructions+=4;NFSU2_TR(0x430127);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B430128:{NFSU2_TR(0x430128);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B43012b:{NFSU2_TR(0x43012b);
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
B43012d:{NFSU2_TR(0x43012d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x430120u);}goto L430120;}}
}
B43012f:L43012f:{c.instructions+=5;NFSU2_TR(0x43012f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B430130:{NFSU2_TR(0x430130);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B430131:{NFSU2_TR(0x430131);
w1(R+0,u8(0x1ull));
}
B430133:{NFSU2_TR(0x430133);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B430134:{NFSU2_TR(0x430134);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430135:L430135:{c.instructions+=11;NFSU2_TR(0x430135);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B430139:{NFSU2_TR(0x430139);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B43013c:{NFSU2_TR(0x43013c);
u8 U[14];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B430141:{NFSU2_TR(0x430141);
w4(R+8,u32(0x1ull));
}
B430146:{NFSU2_TR(0x430146);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B430148:{NFSU2_TR(0x430148);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B430149:{NFSU2_TR(0x430149);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43014a:{NFSU2_TR(0x43014a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43014b:{NFSU2_TR(0x43014b);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43014d:{NFSU2_TR(0x43014d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B430150:{NFSU2_TR(0x430150);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430160:L430160:{c.instructions+=7;NFSU2_TR(0x430160);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B430164:{NFSU2_TR(0x430164);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430165:{NFSU2_TR(0x430165);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430166:{NFSU2_TR(0x430166);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B430168:{NFSU2_TR(0x430168);
__builtin_memmove((R+0),gp(0x827ad4),4);
}
B43016d:{NFSU2_TR(0x43016d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43016e:{NFSU2_TR(0x43016e);
if(r1(R+518)){{goto L43017b;}}
}
B430170:L430170:{c.instructions+=3;NFSU2_TR(0x430170);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B430173:{NFSU2_TR(0x430173);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x37cull))));
__builtin_memmove((R+28),(U+0),4);
}
B430179:{NFSU2_TR(0x430179);
{goto L430184;}
}
B43017b:L43017b:{c.instructions+=2;NFSU2_TR(0x43017b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43017e:{NFSU2_TR(0x43017e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x91cull))));
__builtin_memmove((R+28),(U+0),4);
}
B430184:L430184:{c.instructions+=3;NFSU2_TR(0x430184);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B430186:{NFSU2_TR(0x430186);
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
B430188:{NFSU2_TR(0x430188);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L43019f;}}
}
B43018a:L43018a:{c.instructions+=2;NFSU2_TR(0x43018a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43018e:{NFSU2_TR(0x43018e);
__builtin_memmove((R+4),(R+28),4);
}
B430190:L430190:{c.instructions+=3;NFSU2_TR(0x430190);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+12,u32(r2(U+0)));
}
B430193:{NFSU2_TR(0x430193);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B430195:{NFSU2_TR(0x430195);
if(r1(R+518)){{goto L4301a5;}}
}
B430197:L430197:{c.instructions+=4;NFSU2_TR(0x430197);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B430198:{NFSU2_TR(0x430198);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B43019b:{NFSU2_TR(0x43019b);
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
B43019d:{NFSU2_TR(0x43019d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x430190u);}goto L430190;}}
}
B43019f:L43019f:{c.instructions+=5;NFSU2_TR(0x43019f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4301a0:{NFSU2_TR(0x4301a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4301a1:{NFSU2_TR(0x4301a1);
w1(R+0,u8(0x1ull));
}
B4301a3:{NFSU2_TR(0x4301a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4301a4:{NFSU2_TR(0x4301a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4301a5:L4301a5:{c.instructions+=11;NFSU2_TR(0x4301a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4301a9:{NFSU2_TR(0x4301a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4301ac:{NFSU2_TR(0x4301ac);
u8 U[14];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B4301b1:{NFSU2_TR(0x4301b1);
w4(R+8,u32(0x1ull));
}
B4301b6:{NFSU2_TR(0x4301b6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B4301b8:{NFSU2_TR(0x4301b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4301b9:{NFSU2_TR(0x4301b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4301ba:{NFSU2_TR(0x4301ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4301bb:{NFSU2_TR(0x4301bb);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4301bd:{NFSU2_TR(0x4301bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B4301c0:{NFSU2_TR(0x4301c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4301d0:L4301d0:{c.instructions+=33;NFSU2_TR(0x4301d0);
__builtin_memmove((R+0),(R+4),4);
}
B4301d2:{NFSU2_TR(0x4301d2);
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
B4301d4:{NFSU2_TR(0x4301d4);
w1(R+8,u8(0x1ull));
}
B4301d6:{NFSU2_TR(0x4301d6);
u8 U[4];
w4(U+0,u32(0x785da0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4301dc:{NFSU2_TR(0x4301dc);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4301df:{NFSU2_TR(0x4301df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4301e2:{NFSU2_TR(0x4301e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4301e5:{NFSU2_TR(0x4301e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4301e8:{NFSU2_TR(0x4301e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4301eb:{NFSU2_TR(0x4301eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4301ee:{NFSU2_TR(0x4301ee);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4301f1:{NFSU2_TR(0x4301f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4301f4:{NFSU2_TR(0x4301f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4301f7:{NFSU2_TR(0x4301f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4301fa:{NFSU2_TR(0x4301fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4301fd:{NFSU2_TR(0x4301fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B430200:{NFSU2_TR(0x430200);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B430203:{NFSU2_TR(0x430203);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B430206:{NFSU2_TR(0x430206);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B430209:{NFSU2_TR(0x430209);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43020c:{NFSU2_TR(0x43020c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43020f:{NFSU2_TR(0x43020f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B430212:{NFSU2_TR(0x430212);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B430215:{NFSU2_TR(0x430215);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B430218:{NFSU2_TR(0x430218);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43021b:{NFSU2_TR(0x43021b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B43021e:{NFSU2_TR(0x43021e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B430221:{NFSU2_TR(0x430221);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B430224:{NFSU2_TR(0x430224);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x61ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B430227:{NFSU2_TR(0x430227);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x62ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B43022a:{NFSU2_TR(0x43022a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x63ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B43022d:{NFSU2_TR(0x43022d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B430230:{NFSU2_TR(0x430230);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430240:L430240:{c.instructions+=12;NFSU2_TR(0x430240);
__builtin_memmove((R+0),gp(0x890080),4);
}
B430245:{NFSU2_TR(0x430245);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B430248:{NFSU2_TR(0x430248);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43024b:{NFSU2_TR(0x43024b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43024e:{NFSU2_TR(0x43024e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B430251:{NFSU2_TR(0x430251);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430252:{NFSU2_TR(0x430252);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B430256:{NFSU2_TR(0x430256);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B430259:{NFSU2_TR(0x430259);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B43025b:{NFSU2_TR(0x43025b);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B430260:{NFSU2_TR(0x430260);
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
B430262:{NFSU2_TR(0x430262);
if(r1(R+518)){{goto L4302ad;}}
}
B430264:L430264:{c.instructions+=3;NFSU2_TR(0x430264);
__builtin_memmove((R+0),gp(0x864fac),4);
}
B430269:{NFSU2_TR(0x430269);
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
B43026b:{NFSU2_TR(0x43026b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4302ad;}}
}
B43026d:L43026d:{c.instructions+=3;NFSU2_TR(0x43026d);
__builtin_memmove((R+0),gp(0x865020),4);
}
B430272:{NFSU2_TR(0x430272);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B430274:{NFSU2_TR(0x430274);
if(r1(R+518)){{goto L430280;}}
}
B430276:L430276:{c.instructions+=3;NFSU2_TR(0x430276);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430278:{NFSU2_TR(0x430278);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430279:{NFSU2_TR(0x430279);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43027eull));
TAIL_STATIC(0x5d8620u,5d8);
}
B43027e:L43027e:{c.instructions+=1;NFSU2_TR(0x43027e);
{goto L43029b;}
}
B430280:L430280:{c.instructions+=4;NFSU2_TR(0x430280);
__builtin_memmove((R+0),gp(0x89e7a4),4);
}
B430285:{NFSU2_TR(0x430285);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B430287:{NFSU2_TR(0x430287);
w4(R+0,u32(0x785d18ull));
}
B43028c:{NFSU2_TR(0x43028c);
if(r1(R+518)){{goto L430293;}}
}
B43028e:L43028e:{c.instructions+=1;NFSU2_TR(0x43028e);
w4(R+0,u32(0x785cf0ull));
}
B430293:L430293:{c.instructions+=3;NFSU2_TR(0x430293);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430295:{NFSU2_TR(0x430295);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430296:{NFSU2_TR(0x430296);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43029bull));
TAIL_STATIC(0x5d8660u,5d8);
}
B43029b:L43029b:{c.instructions+=3;NFSU2_TR(0x43029b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B43029e:{NFSU2_TR(0x43029e);
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
B4302a0:{NFSU2_TR(0x4302a0);
if(r1(R+518)){{goto L4302ad;}}
}
B4302a2:L4302a2:{c.instructions+=4;NFSU2_TR(0x4302a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4302a5:{NFSU2_TR(0x4302a5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4302a7:{NFSU2_TR(0x4302a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4302aa:{NFSU2_TR(0x4302aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4302ad:L4302ad:{c.instructions+=2;NFSU2_TR(0x4302ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4302ae:{NFSU2_TR(0x4302ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4302c0:L4302c0:{c.instructions+=5;NFSU2_TR(0x4302c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4302c1:{NFSU2_TR(0x4302c1);
__builtin_memmove((R+24),(R+4),4);
}
B4302c3:{NFSU2_TR(0x4302c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x62ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4302c6:{NFSU2_TR(0x4302c6);
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
B4302c8:{NFSU2_TR(0x4302c8);
if(r1(R+518)){{goto L4302e6;}}
}
B4302ca:L4302ca:{c.instructions+=4;NFSU2_TR(0x4302ca);
__builtin_memmove((R+0),gp(0x890080),4);
}
B4302cf:{NFSU2_TR(0x4302cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4302d5:{NFSU2_TR(0x4302d5);
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
B4302d7:{NFSU2_TR(0x4302d7);
if(r1(R+518)){{goto L4302e2;}}
}
B4302d9:L4302d9:{c.instructions+=2;NFSU2_TR(0x4302d9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x61ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4302dd:{NFSU2_TR(0x4302dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4302e2ull));
TAIL_STATIC(0x4099b0u,409);
}
B4302e2:L4302e2:{c.instructions+=1;NFSU2_TR(0x4302e2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x62ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4302e6:L4302e6:{c.instructions+=2;NFSU2_TR(0x4302e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4302e7:{NFSU2_TR(0x4302e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4302f0:L4302f0:{c.instructions+=4;NFSU2_TR(0x4302f0);
__builtin_memmove((R+0),gp(0x890080),4);
}
B4302f5:{NFSU2_TR(0x4302f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4302fb:{NFSU2_TR(0x4302fb);
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
B4302fd:{NFSU2_TR(0x4302fd);
if(r1(R+518)){{goto L430304;}}
}
B4302ff:L4302ff:{c.instructions+=1;NFSU2_TR(0x4302ff);
TAIL_STATIC(0x411220u,411);
}
B430304:L430304:{c.instructions+=1;NFSU2_TR(0x430304);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430310:L430310:{c.instructions+=5;NFSU2_TR(0x430310);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430311:{NFSU2_TR(0x430311);
__builtin_memmove((R+24),(R+4),4);
}
B430313:{NFSU2_TR(0x430313);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x62ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B430316:{NFSU2_TR(0x430316);
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
B430318:{NFSU2_TR(0x430318);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L430336;}}
}
B43031a:L43031a:{c.instructions+=4;NFSU2_TR(0x43031a);
__builtin_memmove((R+0),gp(0x890080),4);
}
B43031f:{NFSU2_TR(0x43031f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B430325:{NFSU2_TR(0x430325);
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
B430327:{NFSU2_TR(0x430327);
if(r1(R+518)){{goto L430332;}}
}
B430329:L430329:{c.instructions+=2;NFSU2_TR(0x430329);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x61ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43032d:{NFSU2_TR(0x43032d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430332ull));
TAIL_STATIC(0x409a30u,409);
}
B430332:L430332:{c.instructions+=1;NFSU2_TR(0x430332);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x62ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B430336:L430336:{c.instructions+=2;NFSU2_TR(0x430336);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B430337:{NFSU2_TR(0x430337);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430340:L430340:{c.instructions+=2;NFSU2_TR(0x430340);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x61ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B430343:{NFSU2_TR(0x430343);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430350:L430350:{c.instructions+=5;NFSU2_TR(0x430350);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B430353:{NFSU2_TR(0x430353);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B430355:{NFSU2_TR(0x430355);
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
B430357:{NFSU2_TR(0x430357);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B43035a:{NFSU2_TR(0x43035a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430360:L430360:{c.instructions+=17;NFSU2_TR(0x430360);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430361:{NFSU2_TR(0x430361);
__builtin_memmove((R+20),(R+16),4);
}
B430363:{NFSU2_TR(0x430363);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B430366:{NFSU2_TR(0x430366);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B430369:{NFSU2_TR(0x430369);
__builtin_memmove((R+0),gp(0x890080),4);
}
B43036e:{NFSU2_TR(0x43036e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B430371:{NFSU2_TR(0x430371);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B430374:{NFSU2_TR(0x430374);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B430377:{NFSU2_TR(0x430377);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43037a:{NFSU2_TR(0x43037a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B43037d:{NFSU2_TR(0x43037d);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B430382:{NFSU2_TR(0x430382);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B430384:{NFSU2_TR(0x430384);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B430386:{NFSU2_TR(0x430386);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43038a:{NFSU2_TR(0x43038a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B43038e:{NFSU2_TR(0x43038e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B430392:{NFSU2_TR(0x430392);
if(r1(R+518)){{goto L430403;}}
}
B430394:L430394:{c.instructions+=2;NFSU2_TR(0x430394);
w4(R+4,u32(0x89e7a0ull));
}
B430399:{NFSU2_TR(0x430399);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43039eull));
TAIL_STATIC(0x5ed990u,5ed);
}
B43039e:L43039e:{c.instructions+=2;NFSU2_TR(0x43039e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4303a0:{NFSU2_TR(0x4303a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L430403;}}
}
B4303a2:L4303a2:{c.instructions+=3;NFSU2_TR(0x4303a2);
__builtin_memmove((R+0),gp(0x864fac),4);
}
B4303a7:{NFSU2_TR(0x4303a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4303a9:{NFSU2_TR(0x4303a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L430403;}}
}
B4303ab:L4303ab:{c.instructions+=3;NFSU2_TR(0x4303ab);
__builtin_memmove((R+0),gp(0x865020),4);
}
B4303b0:{NFSU2_TR(0x4303b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4303b2:{NFSU2_TR(0x4303b2);
if(r1(R+518)){{goto L4303be;}}
}
B4303b4:L4303b4:{c.instructions+=3;NFSU2_TR(0x4303b4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4303b6:{NFSU2_TR(0x4303b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4303b7:{NFSU2_TR(0x4303b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4303bcull));
TAIL_STATIC(0x5d8620u,5d8);
}
B4303bc:L4303bc:{c.instructions+=1;NFSU2_TR(0x4303bc);
{goto L4303d9;}
}
B4303be:L4303be:{c.instructions+=4;NFSU2_TR(0x4303be);
__builtin_memmove((R+0),gp(0x89e7a4),4);
}
B4303c3:{NFSU2_TR(0x4303c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4303c5:{NFSU2_TR(0x4303c5);
w4(R+0,u32(0x785d18ull));
}
B4303ca:{NFSU2_TR(0x4303ca);
if(r1(R+518)){{goto L4303d1;}}
}
B4303cc:L4303cc:{c.instructions+=1;NFSU2_TR(0x4303cc);
w4(R+0,u32(0x785cf0ull));
}
B4303d1:L4303d1:{c.instructions+=3;NFSU2_TR(0x4303d1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4303d3:{NFSU2_TR(0x4303d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4303d4:{NFSU2_TR(0x4303d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4303d9ull));
TAIL_STATIC(0x5d8660u,5d8);
}
B4303d9:L4303d9:{c.instructions+=3;NFSU2_TR(0x4303d9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4303dc:{NFSU2_TR(0x4303dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4303de:{NFSU2_TR(0x4303de);
if(r1(R+518)){{goto L4303ee;}}
}
B4303e0:L4303e0:{c.instructions+=4;NFSU2_TR(0x4303e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4303e3:{NFSU2_TR(0x4303e3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4303e7:{NFSU2_TR(0x4303e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4303ea:{NFSU2_TR(0x4303ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4303ee:L4303ee:{c.instructions+=5;NFSU2_TR(0x4303ee);
__builtin_memmove((R+4),(R+16),4);
}
B4303f2:{NFSU2_TR(0x4303f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4303f3:{NFSU2_TR(0x4303f3);
w4(R+4,u32(0x88eb00ull));
}
B4303f8:{NFSU2_TR(0x4303f8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4303fa:{NFSU2_TR(0x4303fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4303ffull));
TAIL_STATIC(0x5d5fd0u,5d5);
}
B4303ff:L4303ff:{c.instructions+=3;NFSU2_TR(0x4303ff);
__builtin_memmove((R+16),(R+20),4);
}
B430401:{NFSU2_TR(0x430401);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B430402:{NFSU2_TR(0x430402);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430403:L430403:{c.instructions+=5;NFSU2_TR(0x430403);
__builtin_memmove((R+8),(R+16),4);
}
B430407:{NFSU2_TR(0x430407);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430408:{NFSU2_TR(0x430408);
w4(R+4,u32(0x88eb00ull));
}
B43040d:{NFSU2_TR(0x43040d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43040f:{NFSU2_TR(0x43040f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430414ull));
TAIL_STATIC(0x5d5fd0u,5d5);
}
B430414:L430414:{c.instructions+=3;NFSU2_TR(0x430414);
__builtin_memmove((R+16),(R+20),4);
}
B430416:{NFSU2_TR(0x430416);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B430417:{NFSU2_TR(0x430417);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430420:L430420:{c.instructions+=5;NFSU2_TR(0x430420);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B430423:{NFSU2_TR(0x430423);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B430425:{NFSU2_TR(0x430425);
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
B430427:{NFSU2_TR(0x430427);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B43042a:{NFSU2_TR(0x43042a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430430:L430430:{c.instructions+=12;NFSU2_TR(0x430430);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430431:{NFSU2_TR(0x430431);
__builtin_memmove((R+20),(R+16),4);
}
B430433:{NFSU2_TR(0x430433);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B430436:{NFSU2_TR(0x430436);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B430439:{NFSU2_TR(0x430439);
__builtin_memmove((R+0),gp(0x890080),4);
}
B43043e:{NFSU2_TR(0x43043e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B430441:{NFSU2_TR(0x430441);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430442:{NFSU2_TR(0x430442);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430443:{NFSU2_TR(0x430443);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B430445:{NFSU2_TR(0x430445);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B430447:{NFSU2_TR(0x430447);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430448:{NFSU2_TR(0x430448);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L43047d;}}
}
B43044a:L43044a:{c.instructions+=2;NFSU2_TR(0x43044a);
w4(R+28,u32(0x1cull));
}
B43044f:{NFSU2_TR(0x43044f);
}
B430450:L430450:{c.instructions+=4;NFSU2_TR(0x430450);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B430453:{NFSU2_TR(0x430453);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x958ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B430459:{NFSU2_TR(0x430459);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43045b:{NFSU2_TR(0x43045b);
if(r1(R+518)){{goto L430472;}}
}
B43045d:L43045d:{c.instructions+=2;NFSU2_TR(0x43045d);
__builtin_memmove((R+4),(R+24),4);
}
B43045f:{NFSU2_TR(0x43045f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430464ull));
TAIL_STATIC(0x637d70u,637);
}
B430464:L430464:{c.instructions+=3;NFSU2_TR(0x430464);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430466:{NFSU2_TR(0x430466);
__builtin_memmove((R+4),(R+24),4);
}
B430468:{NFSU2_TR(0x430468);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43046dull));
TAIL_STATIC(0x63a4b0u,63a);
}
B43046d:L43046d:{c.instructions+=1;NFSU2_TR(0x43046d);
__builtin_memmove((R+0),gp(0x890080),4);
}
B430472:L430472:{c.instructions+=5;NFSU2_TR(0x430472);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B430475:{NFSU2_TR(0x430475);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B430476:{NFSU2_TR(0x430476);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B430479:{NFSU2_TR(0x430479);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B43047b:{NFSU2_TR(0x43047b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x430450u);}goto L430450;}}
}
B43047d:L43047d:{c.instructions+=4;NFSU2_TR(0x43047d);
__builtin_memmove((R+4),gp(0x8900bc),4);
}
B430483:{NFSU2_TR(0x430483);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B430485:{NFSU2_TR(0x430485);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B430487:{NFSU2_TR(0x430487);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4304af;}}
}
B430489:L430489:{c.instructions+=1;NFSU2_TR(0x430489);
__builtin_memmove((R+16),(R+16),4);
}
B430490:L430490:{c.instructions+=4;NFSU2_TR(0x430490);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B430497:{NFSU2_TR(0x430497);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430499:{NFSU2_TR(0x430499);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43049b:{NFSU2_TR(0x43049b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4304a0ull));
TAIL_STATIC(0x5f1fd0u,5f1);
}
B4304a0:L4304a0:{c.instructions+=4;NFSU2_TR(0x4304a0);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B4304a5:{NFSU2_TR(0x4304a5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4304a6:{NFSU2_TR(0x4304a6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4304a8:{NFSU2_TR(0x4304a8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x430490u);}goto L430490;}}
}
B4304aa:L4304aa:{c.instructions+=1;NFSU2_TR(0x4304aa);
__builtin_memmove((R+0),gp(0x890080),4);
}
B4304af:L4304af:{c.instructions+=12;NFSU2_TR(0x4304af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4304b2:{NFSU2_TR(0x4304b2);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4304b5:{NFSU2_TR(0x4304b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4304b8:{NFSU2_TR(0x4304b8);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4304bb:{NFSU2_TR(0x4304bb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B4304be:{NFSU2_TR(0x4304be);
__builtin_memmove((R+0),gp(0x865020),4);
}
B4304c3:{NFSU2_TR(0x4304c3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4304c5:{NFSU2_TR(0x4304c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4304c7:{NFSU2_TR(0x4304c7);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4304cb:{NFSU2_TR(0x4304cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4304cf:{NFSU2_TR(0x4304cf);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4304d3:{NFSU2_TR(0x4304d3);
if(r1(R+518)){{goto L4304df;}}
}
B4304d5:L4304d5:{c.instructions+=3;NFSU2_TR(0x4304d5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4304d7:{NFSU2_TR(0x4304d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4304d8:{NFSU2_TR(0x4304d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4304ddull));
TAIL_STATIC(0x5d8620u,5d8);
}
B4304dd:L4304dd:{c.instructions+=1;NFSU2_TR(0x4304dd);
{goto L430514;}
}
B4304df:L4304df:{c.instructions+=4;NFSU2_TR(0x4304df);
__builtin_memmove((R+0),gp(0x89e7a4),4);
}
B4304e4:{NFSU2_TR(0x4304e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4304e6:{NFSU2_TR(0x4304e6);
__builtin_memmove((R+4),gp(0x89e7b4),4);
}
B4304ec:{NFSU2_TR(0x4304ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4304fe;}}
}
B4304ee:L4304ee:{c.instructions+=3;NFSU2_TR(0x4304ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4304f0:{NFSU2_TR(0x4304f0);
w4(R+0,u32(0x785d18ull));
}
B4304f5:{NFSU2_TR(0x4304f5);
if(r1(R+518)){{goto L43050c;}}
}
B4304f7:L4304f7:{c.instructions+=2;NFSU2_TR(0x4304f7);
w4(R+0,u32(0x785d04ull));
}
B4304fc:{NFSU2_TR(0x4304fc);
{goto L43050c;}
}
B4304fe:L4304fe:{c.instructions+=3;NFSU2_TR(0x4304fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B430500:{NFSU2_TR(0x430500);
w4(R+0,u32(0x785cf0ull));
}
B430505:{NFSU2_TR(0x430505);
if(r1(R+518)){{goto L43050c;}}
}
B430507:L430507:{c.instructions+=1;NFSU2_TR(0x430507);
w4(R+0,u32(0x785cdcull));
}
B43050c:L43050c:{c.instructions+=3;NFSU2_TR(0x43050c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43050e:{NFSU2_TR(0x43050e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43050f:{NFSU2_TR(0x43050f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430514ull));
TAIL_STATIC(0x5d8660u,5d8);
}
B430514:L430514:{c.instructions+=3;NFSU2_TR(0x430514);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B430517:{NFSU2_TR(0x430517);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B430519:{NFSU2_TR(0x430519);
if(r1(R+518)){{goto L430529;}}
}
B43051b:L43051b:{c.instructions+=4;NFSU2_TR(0x43051b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43051e:{NFSU2_TR(0x43051e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B430522:{NFSU2_TR(0x430522);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B430525:{NFSU2_TR(0x430525);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B430529:L430529:{c.instructions+=5;NFSU2_TR(0x430529);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B43052d:{NFSU2_TR(0x43052d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43052e:{NFSU2_TR(0x43052e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430530:{NFSU2_TR(0x430530);
w4(R+4,u32(0x88eb00ull));
}
B430535:{NFSU2_TR(0x430535);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43053aull));
TAIL_STATIC(0x5d5fd0u,5d5);
}
B43053a:L43053a:{c.instructions+=6;NFSU2_TR(0x43053a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43053b:{NFSU2_TR(0x43053b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43053c:{NFSU2_TR(0x43053c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43053d:{NFSU2_TR(0x43053d);
__builtin_memmove((R+16),(R+20),4);
}
B43053f:{NFSU2_TR(0x43053f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B430540:{NFSU2_TR(0x430540);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430550:L430550:{c.instructions+=2;NFSU2_TR(0x430550);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B430553:{NFSU2_TR(0x430553);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430560:L430560:{c.instructions+=5;NFSU2_TR(0x430560);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B430563:{NFSU2_TR(0x430563);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B430565:{NFSU2_TR(0x430565);
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
B430567:{NFSU2_TR(0x430567);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B43056a:{NFSU2_TR(0x43056a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430570:L430570:{c.instructions+=4;NFSU2_TR(0x430570);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B430574:{NFSU2_TR(0x430574);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B430578:{NFSU2_TR(0x430578);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43057b:{NFSU2_TR(0x43057b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430580:L430580:{c.instructions+=4;NFSU2_TR(0x430580);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B430584:{NFSU2_TR(0x430584);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B430588:{NFSU2_TR(0x430588);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43058b:{NFSU2_TR(0x43058b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430590:L430590:{c.instructions+=2;NFSU2_TR(0x430590);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B430593:{NFSU2_TR(0x430593);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4305a0:L4305a0:{c.instructions+=2;NFSU2_TR(0x4305a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4305a4:{NFSU2_TR(0x4305a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4305b0:L4305b0:{c.instructions+=2;NFSU2_TR(0x4305b0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4305b3:{NFSU2_TR(0x4305b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4305c0:L4305c0:{c.instructions+=2;NFSU2_TR(0x4305c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4305c4:{NFSU2_TR(0x4305c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4305d0:L4305d0:{c.instructions+=2;NFSU2_TR(0x4305d0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4305d4:{NFSU2_TR(0x4305d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4305e0:L4305e0:{c.instructions+=2;NFSU2_TR(0x4305e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4305e3:{NFSU2_TR(0x4305e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4305f0:L4305f0:{c.instructions+=2;NFSU2_TR(0x4305f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4305f4:{NFSU2_TR(0x4305f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430600:L430600:{c.instructions+=2;NFSU2_TR(0x430600);
u8 U[4];
w4(U+0,u32(0x785da4ull));
s4(u32(r4(R+4)),r4(U+0));
}
B430606:{NFSU2_TR(0x430606);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430610:L430610:{c.instructions+=5;NFSU2_TR(0x430610);
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
B430615:{NFSU2_TR(0x430615);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430616:{NFSU2_TR(0x430616);
__builtin_memmove((R+24),(R+4),4);
}
B430618:{NFSU2_TR(0x430618);
u8 U[4];
w4(U+0,u32(0x785da4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B43061e:{NFSU2_TR(0x43061e);
if(r1(R+518)){{goto L430629;}}
}
B430620:L430620:{c.instructions+=2;NFSU2_TR(0x430620);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430621:{NFSU2_TR(0x430621);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430626ull));
TAIL_STATIC(0x575630u,575);
}
B430626:L430626:{c.instructions+=1;NFSU2_TR(0x430626);
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
B430629:L430629:{c.instructions+=3;NFSU2_TR(0x430629);
__builtin_memmove((R+0),(R+24),4);
}
B43062b:{NFSU2_TR(0x43062b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43062c:{NFSU2_TR(0x43062c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430630:L430630:{c.instructions+=5;NFSU2_TR(0x430630);
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
B430635:{NFSU2_TR(0x430635);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430636:{NFSU2_TR(0x430636);
__builtin_memmove((R+24),(R+4),4);
}
B430638:{NFSU2_TR(0x430638);
u8 U[4];
w4(U+0,u32(0x785dc4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B43063e:{NFSU2_TR(0x43063e);
if(r1(R+518)){{goto L430649;}}
}
B430640:L430640:{c.instructions+=2;NFSU2_TR(0x430640);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430641:{NFSU2_TR(0x430641);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430646ull));
TAIL_STATIC(0x575630u,575);
}
B430646:L430646:{c.instructions+=1;NFSU2_TR(0x430646);
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
B430649:L430649:{c.instructions+=3;NFSU2_TR(0x430649);
__builtin_memmove((R+0),(R+24),4);
}
B43064b:{NFSU2_TR(0x43064b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43064c:{NFSU2_TR(0x43064c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430650:L430650:{c.instructions+=2;NFSU2_TR(0x430650);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B430653:{NFSU2_TR(0x430653);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430660:L430660:{c.instructions+=2;NFSU2_TR(0x430660);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B430663:{NFSU2_TR(0x430663);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430670:L430670:{c.instructions+=2;NFSU2_TR(0x430670);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B430673:{NFSU2_TR(0x430673);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430680:L430680:{c.instructions+=3;NFSU2_TR(0x430680);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B430683:{NFSU2_TR(0x430683);
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
B430685:{NFSU2_TR(0x430685);
if(r1(R+518)){{goto L43068e;}}
}
B430687:L430687:{c.instructions+=1;NFSU2_TR(0x430687);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43068e:L43068e:{c.instructions+=2;NFSU2_TR(0x43068e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B430690:{NFSU2_TR(0x430690);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4306a0:L4306a0:{c.instructions+=13;NFSU2_TR(0x4306a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4306a4:{NFSU2_TR(0x4306a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4306a7:{NFSU2_TR(0x4306a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4306ab:{NFSU2_TR(0x4306ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4306ae:{NFSU2_TR(0x4306ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x29ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4306b1:{NFSU2_TR(0x4306b1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4306b2:{NFSU2_TR(0x4306b2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x29ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B4306b5:{NFSU2_TR(0x4306b5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4306b7:{NFSU2_TR(0x4306b7);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(R+4))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+4),r1(U+3)));
w1(U+4,u8(u32(r1(R+4))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4306b9:{NFSU2_TR(0x4306b9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+8),(U+0),1);
}
B4306bc:{NFSU2_TR(0x4306bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4306bd:{NFSU2_TR(0x4306bd);
__builtin_memmove((R+0),(R+8),4);
}
B4306bf:{NFSU2_TR(0x4306bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4306c0:L4306c0:{c.instructions+=4;NFSU2_TR(0x4306c0);
__builtin_memmove((R+0),gp(0x86501c),4);
}
B4306c5:{NFSU2_TR(0x4306c5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4306c7:{NFSU2_TR(0x4306c7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4306c9:{NFSU2_TR(0x4306c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4306e3;}}
}
B4306cb:L4306cb:{c.instructions+=2;NFSU2_TR(0x4306cb);
u8 U[5];
__builtin_memmove((U+3),gp(0x827adc),1);
w1(R+512,u8((r1(U+3))<(r1(R+4))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+4)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4306d1:{NFSU2_TR(0x4306d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4306e3;}}
}
B4306d3:L4306d3:{c.instructions+=6;NFSU2_TR(0x4306d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4306d7:{NFSU2_TR(0x4306d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4306da:{NFSU2_TR(0x4306da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4306dd:{NFSU2_TR(0x4306dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4306e0:{NFSU2_TR(0x4306e0);
w1(R+0,u8(0x1ull));
}
B4306e2:{NFSU2_TR(0x4306e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4306e3:L4306e3:{c.instructions+=2;NFSU2_TR(0x4306e3);
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
B4306e5:{NFSU2_TR(0x4306e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4306f0:L4306f0:{c.instructions+=2;NFSU2_TR(0x4306f0);
w4(R+0,u32(0x186a00ull));
}
B4306f5:{NFSU2_TR(0x4306f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430700:L430700:{c.instructions+=7;NFSU2_TR(0x430700);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430701:{NFSU2_TR(0x430701);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430702:{NFSU2_TR(0x430702);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430703:{NFSU2_TR(0x430703);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B430705:{NFSU2_TR(0x430705);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B430707:{NFSU2_TR(0x430707);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B430709:{NFSU2_TR(0x430709);
__builtin_memmove((R+16),(R+16),4);
}
B430710:L430710:{c.instructions+=4;NFSU2_TR(0x430710);
__builtin_memmove((R+0),gp(0x827e20),4);
}
B430715:{NFSU2_TR(0x430715);
w4(R+4,u32(r1(R+0)));
}
B430718:{NFSU2_TR(0x430718);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B43071a:{NFSU2_TR(0x43071a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L43074e;}}
}
B43071c:L43071c:{c.instructions+=7;NFSU2_TR(0x43071c);
w4(R+8,u32(r1(R+1)));
}
B43071f:{NFSU2_TR(0x43071f);
__builtin_memmove((R+0),gp(0x827ad8),4);
}
B430724:{NFSU2_TR(0x430724);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B430726:{NFSU2_TR(0x430726);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B430729:{NFSU2_TR(0x430729);
u8 U[12];
w4(U+0,u32(u32(u32(0x808ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B430730:{NFSU2_TR(0x430730);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430731:{NFSU2_TR(0x430731);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430736ull));
TAIL_STATIC(0x57d900u,57d);
}
B430736:L430736:{c.instructions+=5;NFSU2_TR(0x430736);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B430738:{NFSU2_TR(0x430738);
__builtin_memmove((R+0),(R+24),4);
}
B43073a:{NFSU2_TR(0x43073a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43073d:{NFSU2_TR(0x43073d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B430740:{NFSU2_TR(0x430740);
if(r1(R+518)){{goto L43074b;}}
}
B430742:L430742:{c.instructions+=3;NFSU2_TR(0x430742);
w4(R+4,u32(0x10ull));
}
B430747:{NFSU2_TR(0x430747);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B430749:{NFSU2_TR(0x430749);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B43074b:L43074b:{c.instructions+=2;NFSU2_TR(0x43074b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B43074c:{NFSU2_TR(0x43074c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x430710u);}goto L430710;}
}
B43074e:L43074e:{c.instructions+=4;NFSU2_TR(0x43074e);
__builtin_memmove((R+0),gp(0x827e22),2);
}
B430754:{NFSU2_TR(0x430754);
w4(R+8,u32(r1(R+0)));
}
B430757:{NFSU2_TR(0x430757);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B430759:{NFSU2_TR(0x430759);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L43078e;}}
}
B43075b:L43075b:{c.instructions+=7;NFSU2_TR(0x43075b);
__builtin_memmove((R+4),gp(0x827ad8),4);
}
B430761:{NFSU2_TR(0x430761);
w4(R+0,u32(r1(R+1)));
}
B430764:{NFSU2_TR(0x430764);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B430766:{NFSU2_TR(0x430766);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B430769:{NFSU2_TR(0x430769);
u8 U[12];
w4(U+0,u32(u32(u32(0x808ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B430770:{NFSU2_TR(0x430770);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430771:{NFSU2_TR(0x430771);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430776ull));
TAIL_STATIC(0x57d900u,57d);
}
B430776:L430776:{c.instructions+=5;NFSU2_TR(0x430776);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B430778:{NFSU2_TR(0x430778);
__builtin_memmove((R+0),(R+24),4);
}
B43077a:{NFSU2_TR(0x43077a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43077d:{NFSU2_TR(0x43077d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B430780:{NFSU2_TR(0x430780);
if(r1(R+518)){{goto L43078b;}}
}
B430782:L430782:{c.instructions+=3;NFSU2_TR(0x430782);
w4(R+8,u32(0x10ull));
}
B430787:{NFSU2_TR(0x430787);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B430789:{NFSU2_TR(0x430789);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B43078b:L43078b:{c.instructions+=2;NFSU2_TR(0x43078b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B43078c:{NFSU2_TR(0x43078c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x430710u);}goto L430710;}
}
B43078e:L43078e:{c.instructions+=5;NFSU2_TR(0x43078e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43078f:{NFSU2_TR(0x43078f);
__builtin_memmove((R+0),(R+24),4);
}
B430791:{NFSU2_TR(0x430791);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B430792:{NFSU2_TR(0x430792);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B430793:{NFSU2_TR(0x430793);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4307a0:L4307a0:{c.instructions+=1;NFSU2_TR(0x4307a0);
TAIL_STATIC(0x432400u,432);
}
B4307b0:L4307b0:{c.instructions+=2;NFSU2_TR(0x4307b0);
s1(0x827af9,u8(0x1ull));
}
B4307b7:{NFSU2_TR(0x4307b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4307c0:L4307c0:{c.instructions+=4;NFSU2_TR(0x4307c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4307c3:{NFSU2_TR(0x4307c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4307c6:{NFSU2_TR(0x4307c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4307c8:{NFSU2_TR(0x4307c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4307d0:L4307d0:{c.instructions+=3;NFSU2_TR(0x4307d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4307d3:{NFSU2_TR(0x4307d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4307d5:{NFSU2_TR(0x4307d5);
if(r1(R+518)){{goto L4307e2;}}
}
B4307d7:L4307d7:{c.instructions+=2;NFSU2_TR(0x4307d7);
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
B4307da:{NFSU2_TR(0x4307da);
if(r1(R+518)){{goto L4307e2;}}
}
B4307dc:L4307dc:{c.instructions+=2;NFSU2_TR(0x4307dc);
w4(R+0,u32(0x1ull));
}
B4307e1:{NFSU2_TR(0x4307e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4307e2:L4307e2:{c.instructions+=2;NFSU2_TR(0x4307e2);
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
B4307e4:{NFSU2_TR(0x4307e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4307f0:L4307f0:{c.instructions+=13;NFSU2_TR(0x4307f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4307f4:{NFSU2_TR(0x4307f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4307fb:{NFSU2_TR(0x4307fb);
__builtin_memmove((R+8),gp(0x827ba8),4);
}
B430801:{NFSU2_TR(0x430801);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B430804:{NFSU2_TR(0x430804);
__builtin_memmove((R+4),gp(0x890080),4);
}
B43080a:{NFSU2_TR(0x43080a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43080b:{NFSU2_TR(0x43080b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43080c:{NFSU2_TR(0x43080c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B430810:{NFSU2_TR(0x430810);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B430811:{NFSU2_TR(0x430811);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B430814:{NFSU2_TR(0x430814);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B430817:{NFSU2_TR(0x430817);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430818:{NFSU2_TR(0x430818);
if(r1(R+518)){{goto L430822;}}
}
B43081a:L43081a:{c.instructions+=2;NFSU2_TR(0x43081a);
u8 U[24];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+0))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B43081e:{NFSU2_TR(0x43081e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L430822;}}
}
B430820:L430820:{c.instructions+=1;NFSU2_TR(0x430820);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B430822:L430822:{c.instructions+=3;NFSU2_TR(0x430822);
__builtin_memmove((R+8),gp(0x827bbc),4);
}
B430828:{NFSU2_TR(0x430828);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43082b:{NFSU2_TR(0x43082b);
if(r1(R+518)){{goto L430838;}}
}
B43082d:L43082d:{c.instructions+=2;NFSU2_TR(0x43082d);
u8 U[24];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+0))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B430831:{NFSU2_TR(0x430831);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L430838;}}
}
B430833:L430833:{c.instructions+=1;NFSU2_TR(0x430833);
w4(R+12,u32(0x1ull));
}
B430838:L430838:{c.instructions+=3;NFSU2_TR(0x430838);
__builtin_memmove((R+8),gp(0x827bd0),4);
}
B43083e:{NFSU2_TR(0x43083e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B430841:{NFSU2_TR(0x430841);
if(r1(R+518)){{goto L43084e;}}
}
B430843:L430843:{c.instructions+=2;NFSU2_TR(0x430843);
u8 U[24];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+0))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B430847:{NFSU2_TR(0x430847);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43084e;}}
}
B430849:L430849:{c.instructions+=1;NFSU2_TR(0x430849);
w4(R+12,u32(0x2ull));
}
B43084e:L43084e:{c.instructions+=3;NFSU2_TR(0x43084e);
__builtin_memmove((R+8),gp(0x827be4),4);
}
B430854:{NFSU2_TR(0x430854);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B430857:{NFSU2_TR(0x430857);
if(r1(R+518)){{goto L430864;}}
}
B430859:L430859:{c.instructions+=2;NFSU2_TR(0x430859);
u8 U[24];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+0))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B43085d:{NFSU2_TR(0x43085d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L430864;}}
}
B43085f:L43085f:{c.instructions+=1;NFSU2_TR(0x43085f);
w4(R+12,u32(0x3ull));
}
B430864:L430864:{c.instructions+=3;NFSU2_TR(0x430864);
__builtin_memmove((R+8),gp(0x827bf8),4);
}
B43086a:{NFSU2_TR(0x43086a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43086d:{NFSU2_TR(0x43086d);
if(r1(R+518)){{goto L43087a;}}
}
B43086f:L43086f:{c.instructions+=2;NFSU2_TR(0x43086f);
u8 U[24];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+0))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B430873:{NFSU2_TR(0x430873);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43087a;}}
}
B430875:L430875:{c.instructions+=1;NFSU2_TR(0x430875);
w4(R+12,u32(0x4ull));
}
B43087a:L43087a:{c.instructions+=3;NFSU2_TR(0x43087a);
__builtin_memmove((R+8),gp(0x827c0c),4);
}
B430880:{NFSU2_TR(0x430880);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B430883:{NFSU2_TR(0x430883);
if(r1(R+518)){{goto L430890;}}
}
B430885:L430885:{c.instructions+=2;NFSU2_TR(0x430885);
u8 U[24];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+0))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B430889:{NFSU2_TR(0x430889);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L430890;}}
}
B43088b:L43088b:{c.instructions+=1;NFSU2_TR(0x43088b);
w4(R+12,u32(0x5ull));
}
B430890:L430890:{c.instructions+=3;NFSU2_TR(0x430890);
__builtin_memmove((R+8),gp(0x827c20),4);
}
B430896:{NFSU2_TR(0x430896);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B430899:{NFSU2_TR(0x430899);
if(r1(R+518)){{goto L4308a6;}}
}
B43089b:L43089b:{c.instructions+=2;NFSU2_TR(0x43089b);
u8 U[24];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+0))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B43089f:{NFSU2_TR(0x43089f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4308a6;}}
}
B4308a1:L4308a1:{c.instructions+=1;NFSU2_TR(0x4308a1);
w4(R+12,u32(0x6ull));
}
B4308a6:L4308a6:{c.instructions+=3;NFSU2_TR(0x4308a6);
__builtin_memmove((R+8),gp(0x827c34),4);
}
B4308ac:{NFSU2_TR(0x4308ac);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4308af:{NFSU2_TR(0x4308af);
if(r1(R+518)){{goto L4308bc;}}
}
B4308b1:L4308b1:{c.instructions+=2;NFSU2_TR(0x4308b1);
u8 U[24];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+0))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B4308b5:{NFSU2_TR(0x4308b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4308bc;}}
}
B4308b7:L4308b7:{c.instructions+=1;NFSU2_TR(0x4308b7);
w4(R+12,u32(0x7ull));
}
B4308bc:L4308bc:{c.instructions+=2;NFSU2_TR(0x4308bc);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4308be:{NFSU2_TR(0x4308be);
if(r1(R+518)){{goto L430958;}}
}
B4308c4:L4308c4:{c.instructions+=23;NFSU2_TR(0x4308c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4308c7:{NFSU2_TR(0x4308c7);
{u32 ea_=u32((r4(R+0)*4u)+u32(8551324u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4308ce:{NFSU2_TR(0x4308ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827b98ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B4308d5:{NFSU2_TR(0x4308d5);
{u32 ea_=u32((r4(R+0)*4u)+u32(8551328u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4308dc:{NFSU2_TR(0x4308dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827ba4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B4308e3:{NFSU2_TR(0x4308e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827ba8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B4308ea:{NFSU2_TR(0x4308ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4308ed:{NFSU2_TR(0x4308ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827b98ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4308f4:{NFSU2_TR(0x4308f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827b98ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B4308fb:{NFSU2_TR(0x4308fb);
{u32 ea_=u32((r4(R+4)*4u)+u32(8551328u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B430902:{NFSU2_TR(0x430902);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827b9cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B430909:{NFSU2_TR(0x430909);
{u32 ea_=u32((r4(R+0)*4u)+u32(8551328u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B430910:{NFSU2_TR(0x430910);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827b9cull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B430917:{NFSU2_TR(0x430917);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B430919:{NFSU2_TR(0x430919);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827ba4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B430920:{NFSU2_TR(0x430920);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827ba4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B430927:{NFSU2_TR(0x430927);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827ba8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B43092e:{NFSU2_TR(0x43092e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827ba8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B430935:{NFSU2_TR(0x430935);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827b98ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B43093c:{NFSU2_TR(0x43093c);
{u32 ea_=u32((r4(R+4)*4u)+u32(8551324u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B430943:{NFSU2_TR(0x430943);
{u32 ea_=u32((r4(R+4)*4u)+u32(8551328u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43094a:{NFSU2_TR(0x43094a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827ba4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B430951:{NFSU2_TR(0x430951);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x827ba8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B430958:L430958:{c.instructions+=4;NFSU2_TR(0x430958);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B430959:{NFSU2_TR(0x430959);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43095a:{NFSU2_TR(0x43095a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43095b:{NFSU2_TR(0x43095b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430960:L430960:{c.instructions+=7;NFSU2_TR(0x430960);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430961:{NFSU2_TR(0x430961);
__builtin_memmove((R+0),gp(0x85105c),4);
}
B430966:{NFSU2_TR(0x430966);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430967:{NFSU2_TR(0x430967);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B430969:{NFSU2_TR(0x430969);
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
B43096b:{NFSU2_TR(0x43096b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43096f:{NFSU2_TR(0x43096f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4309c8;}}
}
B430971:L430971:{c.instructions+=6;NFSU2_TR(0x430971);
__builtin_memmove((R+4),gp(0x890080),4);
}
B430977:{NFSU2_TR(0x430977);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430978:{NFSU2_TR(0x430978);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430979:{NFSU2_TR(0x430979);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43097a:{NFSU2_TR(0x43097a);
w4(R+20,u32(0x827ba8ull));
}
B43097f:{NFSU2_TR(0x43097f);
}
B430980:L430980:{c.instructions+=4;NFSU2_TR(0x430980);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x851044ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B430987:{NFSU2_TR(0x430987);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43098a:{NFSU2_TR(0x43098a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43098b:{NFSU2_TR(0x43098b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430990ull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B430990:L430990:{c.instructions+=6;NFSU2_TR(0x430990);
__builtin_memmove((R+4),gp(0x890118),4);
}
B430996:{NFSU2_TR(0x430996);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B430999:{NFSU2_TR(0x430999);
__builtin_memmove((R+4),gp(0x890080),4);
}
B43099f:{NFSU2_TR(0x43099f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4309a1:{NFSU2_TR(0x4309a1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4309a3:{NFSU2_TR(0x4309a3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4309b4;}}
}
B4309a5:L4309a5:{c.instructions+=1;NFSU2_TR(0x4309a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4309a8:L4309a8:{c.instructions+=2;NFSU2_TR(0x4309a8);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4309aa:{NFSU2_TR(0x4309aa);
if(r1(R+518)){{goto L4309b6;}}
}
B4309ac:L4309ac:{c.instructions+=4;NFSU2_TR(0x4309ac);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B4309ad:{NFSU2_TR(0x4309ad);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B4309b0:{NFSU2_TR(0x4309b0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4309b2:{NFSU2_TR(0x4309b2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4309a8u);}goto L4309a8;}}
}
B4309b4:L4309b4:{c.instructions+=1;NFSU2_TR(0x4309b4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4309b6:L4309b6:{c.instructions+=6;NFSU2_TR(0x4309b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4309ba:{NFSU2_TR(0x4309ba);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+20)),r4(U+0));
}
B4309bd:{NFSU2_TR(0x4309bd);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4309be:{NFSU2_TR(0x4309be);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x14ull))));
}
B4309c1:{NFSU2_TR(0x4309c1);
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
B4309c3:{NFSU2_TR(0x4309c3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x430980u);}goto L430980;}}
}
B4309c5:L4309c5:{c.instructions+=3;NFSU2_TR(0x4309c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4309c6:{NFSU2_TR(0x4309c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4309c7:{NFSU2_TR(0x4309c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4309c8:L4309c8:{c.instructions+=3;NFSU2_TR(0x4309c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4309c9:{NFSU2_TR(0x4309c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4309ca:{NFSU2_TR(0x4309ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4309d0:L4309d0:{c.instructions+=17;NFSU2_TR(0x4309d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4309d1:{NFSU2_TR(0x4309d1);
__builtin_memmove((R+20),(R+16),4);
}
B4309d3:{NFSU2_TR(0x4309d3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4309d6:{NFSU2_TR(0x4309d6);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x54ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x54ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x54ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4309d9:{NFSU2_TR(0x4309d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4309dc:{NFSU2_TR(0x4309dc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4309dd:{NFSU2_TR(0x4309dd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4309de:{NFSU2_TR(0x4309de);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4309df:{NFSU2_TR(0x4309df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B4309e2:{NFSU2_TR(0x4309e2);
__builtin_memmove((R+12),(R+4),4);
}
B4309e4:{NFSU2_TR(0x4309e4);
__builtin_memmove((R+4),gp(0x890080),4);
}
B4309ea:{NFSU2_TR(0x4309ea);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+28),4);
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+28))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B4309ed:{NFSU2_TR(0x4309ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x827ba8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4309f3:{NFSU2_TR(0x4309f3);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B4309f7:{NFSU2_TR(0x4309f7);
__builtin_memmove((R+4),gp(0x890118),4);
}
B4309fd:{NFSU2_TR(0x4309fd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4309fe:{NFSU2_TR(0x4309fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430a03ull));
TAIL_STATIC(0x5eef60u,5ee);
}
B430a03:L430a03:{c.instructions+=7;NFSU2_TR(0x430a03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B430a06:{NFSU2_TR(0x430a06);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B430a09:{NFSU2_TR(0x430a09);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x40ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B430a0c:{NFSU2_TR(0x430a0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430a0d:{NFSU2_TR(0x430a0d);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B430a11:{NFSU2_TR(0x430a11);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430a12:{NFSU2_TR(0x430a12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430a17ull));
TAIL_STATIC(0x4012b0u,401);
}
B430a17:L430a17:{c.instructions+=7;NFSU2_TR(0x430a17);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B430a1b:{NFSU2_TR(0x430a1b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430a1c:{NFSU2_TR(0x430a1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B430a1f:{NFSU2_TR(0x430a1f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430a20:{NFSU2_TR(0x430a20);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B430a24:{NFSU2_TR(0x430a24);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430a25:{NFSU2_TR(0x430a25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430a2aull));
TAIL_STATIC(0x43c990u,43c);
}
B430a2a:L430a2a:{c.instructions+=7;NFSU2_TR(0x430a2a);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B430a2e:{NFSU2_TR(0x430a2e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430a2f:{NFSU2_TR(0x430a2f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xa0ull))));
}
B430a35:{NFSU2_TR(0x430a35);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B430a39:{NFSU2_TR(0x430a39);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430a3a:{NFSU2_TR(0x430a3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430a3b:{NFSU2_TR(0x430a3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430a40ull));
TAIL_STATIC(0x43c990u,43c);
}
B430a40:L430a40:{c.instructions+=11;NFSU2_TR(0x430a40);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B430a43:{NFSU2_TR(0x430a43);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B430a47:{NFSU2_TR(0x430a47);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B430a4b:{NFSU2_TR(0x430a4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B430a4f:{NFSU2_TR(0x430a4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B430a53:{NFSU2_TR(0x430a53);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B430a57:{NFSU2_TR(0x430a57);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B430a5b:{NFSU2_TR(0x430a5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430a5c:{NFSU2_TR(0x430a5c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430a5d:{NFSU2_TR(0x430a5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B430a61:{NFSU2_TR(0x430a61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430a66ull));
TAIL_STATIC(0x43e6d0u,43e);
}
B430a66:L430a66:{c.instructions+=5;NFSU2_TR(0x430a66);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B430a69:{NFSU2_TR(0x430a69);
__builtin_memmove((R+12),(R+0),4);
}
B430a6b:{NFSU2_TR(0x430a6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x827ba4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B430a71:{NFSU2_TR(0x430a71);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B430a73:{NFSU2_TR(0x430a73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L430a86;}}
}
B430a75:L430a75:{c.instructions+=7;NFSU2_TR(0x430a75);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430a77:{NFSU2_TR(0x430a77);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430a78:{NFSU2_TR(0x430a78);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430a7a:{NFSU2_TR(0x430a7a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B430a7e:{NFSU2_TR(0x430a7e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430a7f:{NFSU2_TR(0x430a7f);
__builtin_memmove((R+4),(R+24),4);
}
B430a81:{NFSU2_TR(0x430a81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430a86ull));
TAIL_STATIC(0x5fbd60u,5fb);
}
B430a86:L430a86:{c.instructions+=3;NFSU2_TR(0x430a86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B430a89:{NFSU2_TR(0x430a89);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B430a8b:{NFSU2_TR(0x430a8b);
if(r1(R+518)){{goto L430a96;}}
}
B430a8d:L430a8d:{c.instructions+=3;NFSU2_TR(0x430a8d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430a8f:{NFSU2_TR(0x430a8f);
__builtin_memmove((R+4),(R+24),4);
}
B430a91:{NFSU2_TR(0x430a91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430a96ull));
TAIL_STATIC(0x5eba30u,5eb);
}
B430a96:L430a96:{c.instructions+=2;NFSU2_TR(0x430a96);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B430a9a:{NFSU2_TR(0x430a9a);
if(r1(R+518)){{goto L430ab5;}}
}
B430a9c:L430a9c:{c.instructions+=3;NFSU2_TR(0x430a9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B430aa2:{NFSU2_TR(0x430aa2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B430aa4:{NFSU2_TR(0x430aa4);
if(r1(R+518)){{goto L430aaf;}}
}
B430aa6:L430aa6:{c.instructions+=3;NFSU2_TR(0x430aa6);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430aa8:{NFSU2_TR(0x430aa8);
__builtin_memmove((R+4),(R+24),4);
}
B430aaa:{NFSU2_TR(0x430aaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430aafull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B430aaf:L430aaf:{c.instructions+=2;NFSU2_TR(0x430aaf);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x5ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B430ab3:{NFSU2_TR(0x430ab3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L430aca;}}
}
B430ab5:L430ab5:{c.instructions+=7;NFSU2_TR(0x430ab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x827ba4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B430abb:{NFSU2_TR(0x430abb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430abc:{NFSU2_TR(0x430abc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430abd:{NFSU2_TR(0x430abd);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B430ac1:{NFSU2_TR(0x430ac1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430ac2:{NFSU2_TR(0x430ac2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B430ac5:{NFSU2_TR(0x430ac5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430acaull));
TAIL_STATIC(0x5a40a0u,5a4);
}
B430aca:L430aca:{c.instructions+=13;NFSU2_TR(0x430aca);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B430ace:{NFSU2_TR(0x430ace);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B430ad2:{NFSU2_TR(0x430ad2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x827ba0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B430ad8:{NFSU2_TR(0x430ad8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x827ba4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B430ade:{NFSU2_TR(0x430ade);
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
B430adf:{NFSU2_TR(0x430adf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x827b9cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B430ae5:{NFSU2_TR(0x430ae5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x827ba4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B430aeb:{NFSU2_TR(0x430aeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B430aec:{NFSU2_TR(0x430aec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B430aed:{NFSU2_TR(0x430aed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B430aee:{NFSU2_TR(0x430aee);
__builtin_memmove((R+16),(R+20),4);
}
B430af0:{NFSU2_TR(0x430af0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B430af1:{NFSU2_TR(0x430af1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430b00:L430b00:{c.instructions+=10;NFSU2_TR(0x430b00);
__builtin_memmove((R+0),(R+4),4);
}
B430b02:{NFSU2_TR(0x430b02);
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
B430b04:{NFSU2_TR(0x430b04);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B430b06:{NFSU2_TR(0x430b06);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B430b09:{NFSU2_TR(0x430b09);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B430b0c:{NFSU2_TR(0x430b0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B430b0f:{NFSU2_TR(0x430b0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B430b12:{NFSU2_TR(0x430b12);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B430b15:{NFSU2_TR(0x430b15);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B430b18:{NFSU2_TR(0x430b18);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430b20:L430b20:{c.instructions+=5;NFSU2_TR(0x430b20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430b21:{NFSU2_TR(0x430b21);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B430b25:{NFSU2_TR(0x430b25);
u8 U[4];
w4(U+0,u32(0x785ef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430b2a:{NFSU2_TR(0x430b2a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430b2b:{NFSU2_TR(0x430b2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430b30ull));
TAIL_STATIC(0x43dc30u,43d);
}
B430b30:L430b30:{c.instructions+=3;NFSU2_TR(0x430b30);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B430b33:{NFSU2_TR(0x430b33);
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
B430b35:{NFSU2_TR(0x430b35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L430b3e;}}
}
B430b37:L430b37:{c.instructions+=3;NFSU2_TR(0x430b37);
w4(R+0,u32(0x1ull));
}
B430b3c:{NFSU2_TR(0x430b3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B430b3d:{NFSU2_TR(0x430b3d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430b3e:L430b3e:{c.instructions+=3;NFSU2_TR(0x430b3e);
u8 U[4];
w4(U+0,u32(0x785edcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430b43:{NFSU2_TR(0x430b43);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430b44:{NFSU2_TR(0x430b44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430b49ull));
TAIL_STATIC(0x43dc30u,43d);
}
B430b49:L430b49:{c.instructions+=3;NFSU2_TR(0x430b49);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B430b4c:{NFSU2_TR(0x430b4c);
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
B430b4e:{NFSU2_TR(0x430b4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L430b57;}}
}
B430b50:L430b50:{c.instructions+=3;NFSU2_TR(0x430b50);
w4(R+0,u32(0x2ull));
}
B430b55:{NFSU2_TR(0x430b55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B430b56:{NFSU2_TR(0x430b56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430b57:L430b57:{c.instructions+=3;NFSU2_TR(0x430b57);
u8 U[4];
w4(U+0,u32(0x785ec4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430b5c:{NFSU2_TR(0x430b5c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430b5d:{NFSU2_TR(0x430b5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430b62ull));
TAIL_STATIC(0x43dc30u,43d);
}
B430b62:L430b62:{c.instructions+=3;NFSU2_TR(0x430b62);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B430b65:{NFSU2_TR(0x430b65);
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
B430b67:{NFSU2_TR(0x430b67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L430b70;}}
}
B430b69:L430b69:{c.instructions+=3;NFSU2_TR(0x430b69);
w4(R+0,u32(0x3ull));
}
B430b6e:{NFSU2_TR(0x430b6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B430b6f:{NFSU2_TR(0x430b6f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430b70:L430b70:{c.instructions+=3;NFSU2_TR(0x430b70);
u8 U[4];
w4(U+0,u32(0x785eb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430b75:{NFSU2_TR(0x430b75);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430b76:{NFSU2_TR(0x430b76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430b7bull));
TAIL_STATIC(0x43dc30u,43d);
}
B430b7b:L430b7b:{c.instructions+=3;NFSU2_TR(0x430b7b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B430b7e:{NFSU2_TR(0x430b7e);
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
B430b80:{NFSU2_TR(0x430b80);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L430b89;}}
}
B430b82:L430b82:{c.instructions+=3;NFSU2_TR(0x430b82);
w4(R+0,u32(0x4ull));
}
B430b87:{NFSU2_TR(0x430b87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B430b88:{NFSU2_TR(0x430b88);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430b89:L430b89:{c.instructions+=3;NFSU2_TR(0x430b89);
u8 U[4];
w4(U+0,u32(0x785e9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430b8e:{NFSU2_TR(0x430b8e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430b8f:{NFSU2_TR(0x430b8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430b94ull));
TAIL_STATIC(0x43dc30u,43d);
}
B430b94:L430b94:{c.instructions+=3;NFSU2_TR(0x430b94);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B430b97:{NFSU2_TR(0x430b97);
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
B430b99:{NFSU2_TR(0x430b99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L430ba2;}}
}
B430b9b:L430b9b:{c.instructions+=3;NFSU2_TR(0x430b9b);
w4(R+0,u32(0x5ull));
}
B430ba0:{NFSU2_TR(0x430ba0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B430ba1:{NFSU2_TR(0x430ba1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430ba2:L430ba2:{c.instructions+=3;NFSU2_TR(0x430ba2);
u8 U[4];
w4(U+0,u32(0x785e88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430ba7:{NFSU2_TR(0x430ba7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430ba8:{NFSU2_TR(0x430ba8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430badull));
TAIL_STATIC(0x43dc30u,43d);
}
B430bad:L430bad:{c.instructions+=3;NFSU2_TR(0x430bad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B430bb0:{NFSU2_TR(0x430bb0);
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
B430bb2:{NFSU2_TR(0x430bb2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L430bbb;}}
}
B430bb4:L430bb4:{c.instructions+=3;NFSU2_TR(0x430bb4);
w4(R+0,u32(0x6ull));
}
B430bb9:{NFSU2_TR(0x430bb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B430bba:{NFSU2_TR(0x430bba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430bbb:L430bbb:{c.instructions+=3;NFSU2_TR(0x430bbb);
u8 U[4];
w4(U+0,u32(0x785e78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430bc0:{NFSU2_TR(0x430bc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430bc1:{NFSU2_TR(0x430bc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430bc6ull));
TAIL_STATIC(0x43dc30u,43d);
}
B430bc6:L430bc6:{c.instructions+=3;NFSU2_TR(0x430bc6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B430bc9:{NFSU2_TR(0x430bc9);
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
B430bcb:{NFSU2_TR(0x430bcb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L430bd4;}}
}
B430bcd:L430bcd:{c.instructions+=3;NFSU2_TR(0x430bcd);
w4(R+0,u32(0x7ull));
}
B430bd2:{NFSU2_TR(0x430bd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B430bd3:{NFSU2_TR(0x430bd3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430bd4:L430bd4:{c.instructions+=3;NFSU2_TR(0x430bd4);
u8 U[4];
w4(U+0,u32(0x785e68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430bd9:{NFSU2_TR(0x430bd9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430bda:{NFSU2_TR(0x430bda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430bdfull));
TAIL_STATIC(0x43dc30u,43d);
}
B430bdf:L430bdf:{c.instructions+=3;NFSU2_TR(0x430bdf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B430be2:{NFSU2_TR(0x430be2);
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
B430be4:{NFSU2_TR(0x430be4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L430bed;}}
}
B430be6:L430be6:{c.instructions+=3;NFSU2_TR(0x430be6);
w4(R+0,u32(0x8ull));
}
B430beb:{NFSU2_TR(0x430beb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B430bec:{NFSU2_TR(0x430bec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430bed:L430bed:{c.instructions+=3;NFSU2_TR(0x430bed);
u8 U[4];
w4(U+0,u32(0x785e58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430bf2:{NFSU2_TR(0x430bf2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430bf3:{NFSU2_TR(0x430bf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430bf8ull));
TAIL_STATIC(0x43dc30u,43d);
}
B430bf8:L430bf8:{c.instructions+=3;NFSU2_TR(0x430bf8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B430bfb:{NFSU2_TR(0x430bfb);
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
B430bfd:{NFSU2_TR(0x430bfd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L430c06;}}
}
B430bff:L430bff:{c.instructions+=3;NFSU2_TR(0x430bff);
w4(R+0,u32(0x9ull));
}
B430c04:{NFSU2_TR(0x430c04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B430c05:{NFSU2_TR(0x430c05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430c06:L430c06:{c.instructions+=3;NFSU2_TR(0x430c06);
u8 U[4];
w4(U+0,u32(0x785e48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430c0b:{NFSU2_TR(0x430c0b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430c0c:{NFSU2_TR(0x430c0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430c11ull));
TAIL_STATIC(0x43dc30u,43d);
}
B430c11:L430c11:{c.instructions+=3;NFSU2_TR(0x430c11);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B430c14:{NFSU2_TR(0x430c14);
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
B430c16:{NFSU2_TR(0x430c16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L430c1f;}}
}
B430c18:L430c18:{c.instructions+=3;NFSU2_TR(0x430c18);
w4(R+0,u32(0xaull));
}
B430c1d:{NFSU2_TR(0x430c1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B430c1e:{NFSU2_TR(0x430c1e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430c1f:L430c1f:{c.instructions+=3;NFSU2_TR(0x430c1f);
u8 U[4];
w4(U+0,u32(0x785e34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430c24:{NFSU2_TR(0x430c24);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430c25:{NFSU2_TR(0x430c25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430c2aull));
TAIL_STATIC(0x43dc30u,43d);
}
B430c2a:L430c2a:{c.instructions+=3;NFSU2_TR(0x430c2a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B430c2d:{NFSU2_TR(0x430c2d);
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
B430c2f:{NFSU2_TR(0x430c2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L430c38;}}
}
B430c31:L430c31:{c.instructions+=3;NFSU2_TR(0x430c31);
w4(R+0,u32(0xbull));
}
B430c36:{NFSU2_TR(0x430c36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B430c37:{NFSU2_TR(0x430c37);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430c38:L430c38:{c.instructions+=3;NFSU2_TR(0x430c38);
u8 U[4];
w4(U+0,u32(0x785e24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430c3d:{NFSU2_TR(0x430c3d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430c3e:{NFSU2_TR(0x430c3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430c43ull));
TAIL_STATIC(0x43dc30u,43d);
}
B430c43:L430c43:{c.instructions+=3;NFSU2_TR(0x430c43);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B430c46:{NFSU2_TR(0x430c46);
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
B430c48:{NFSU2_TR(0x430c48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L430c51;}}
}
B430c4a:L430c4a:{c.instructions+=3;NFSU2_TR(0x430c4a);
w4(R+0,u32(0xcull));
}
B430c4f:{NFSU2_TR(0x430c4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B430c50:{NFSU2_TR(0x430c50);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430c51:L430c51:{c.instructions+=3;NFSU2_TR(0x430c51);
u8 U[4];
w4(U+0,u32(0x785e10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430c56:{NFSU2_TR(0x430c56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430c57:{NFSU2_TR(0x430c57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430c5cull));
TAIL_STATIC(0x43dc30u,43d);
}
B430c5c:L430c5c:{c.instructions+=3;NFSU2_TR(0x430c5c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B430c5f:{NFSU2_TR(0x430c5f);
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
B430c61:{NFSU2_TR(0x430c61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L430c6a;}}
}
B430c63:L430c63:{c.instructions+=3;NFSU2_TR(0x430c63);
w4(R+0,u32(0xdull));
}
B430c68:{NFSU2_TR(0x430c68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B430c69:{NFSU2_TR(0x430c69);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430c6a:L430c6a:{c.instructions+=3;NFSU2_TR(0x430c6a);
u8 U[4];
w4(U+0,u32(0x785e00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430c6f:{NFSU2_TR(0x430c6f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430c70:{NFSU2_TR(0x430c70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430c75ull));
TAIL_STATIC(0x43dc30u,43d);
}
B430c75:L430c75:{c.instructions+=7;NFSU2_TR(0x430c75);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B430c78:{NFSU2_TR(0x430c78);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B430c7a:{NFSU2_TR(0x430c7a);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B430c7c:{NFSU2_TR(0x430c7c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff2ull))));
}
B430c7f:{NFSU2_TR(0x430c7f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xeull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xeull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B430c82:{NFSU2_TR(0x430c82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B430c83:{NFSU2_TR(0x430c83);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430c90:L430c90:{c.instructions+=5;NFSU2_TR(0x430c90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430c91:{NFSU2_TR(0x430c91);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B430c95:{NFSU2_TR(0x430c95);
u8 U[4];
w4(U+0,u32(0x785f48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430c9a:{NFSU2_TR(0x430c9a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430c9b:{NFSU2_TR(0x430c9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430ca0ull));
TAIL_STATIC(0x43dc30u,43d);
}
B430ca0:L430ca0:{c.instructions+=3;NFSU2_TR(0x430ca0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B430ca3:{NFSU2_TR(0x430ca3);
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
B430ca5:{NFSU2_TR(0x430ca5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L430cae;}}
}
B430ca7:L430ca7:{c.instructions+=3;NFSU2_TR(0x430ca7);
w4(R+0,u32(0xaull));
}
B430cac:{NFSU2_TR(0x430cac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B430cad:{NFSU2_TR(0x430cad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430cae:L430cae:{c.instructions+=3;NFSU2_TR(0x430cae);
u8 U[4];
w4(U+0,u32(0x785f34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430cb3:{NFSU2_TR(0x430cb3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430cb4:{NFSU2_TR(0x430cb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430cb9ull));
TAIL_STATIC(0x43dc30u,43d);
}
B430cb9:L430cb9:{c.instructions+=3;NFSU2_TR(0x430cb9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B430cbc:{NFSU2_TR(0x430cbc);
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
B430cbe:{NFSU2_TR(0x430cbe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L430cc7;}}
}
B430cc0:L430cc0:{c.instructions+=3;NFSU2_TR(0x430cc0);
w4(R+0,u32(0xbull));
}
B430cc5:{NFSU2_TR(0x430cc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B430cc6:{NFSU2_TR(0x430cc6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430cc7:L430cc7:{c.instructions+=3;NFSU2_TR(0x430cc7);
u8 U[4];
w4(U+0,u32(0x785f1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430ccc:{NFSU2_TR(0x430ccc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430ccd:{NFSU2_TR(0x430ccd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430cd2ull));
TAIL_STATIC(0x43dc30u,43d);
}
B430cd2:L430cd2:{c.instructions+=3;NFSU2_TR(0x430cd2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B430cd5:{NFSU2_TR(0x430cd5);
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
B430cd7:{NFSU2_TR(0x430cd7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L430ce0;}}
}
B430cd9:L430cd9:{c.instructions+=3;NFSU2_TR(0x430cd9);
w4(R+0,u32(0xcull));
}
B430cde:{NFSU2_TR(0x430cde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B430cdf:{NFSU2_TR(0x430cdf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430ce0:L430ce0:{c.instructions+=3;NFSU2_TR(0x430ce0);
u8 U[4];
w4(U+0,u32(0x785f08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430ce5:{NFSU2_TR(0x430ce5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430ce6:{NFSU2_TR(0x430ce6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430cebull));
TAIL_STATIC(0x43dc30u,43d);
}
B430ceb:L430ceb:{c.instructions+=7;NFSU2_TR(0x430ceb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B430cee:{NFSU2_TR(0x430cee);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B430cf0:{NFSU2_TR(0x430cf0);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B430cf2:{NFSU2_TR(0x430cf2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff2ull))));
}
B430cf5:{NFSU2_TR(0x430cf5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xdull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xdull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xdull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B430cf8:{NFSU2_TR(0x430cf8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B430cf9:{NFSU2_TR(0x430cf9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430d00:L430d00:{c.instructions+=5;NFSU2_TR(0x430d00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430d01:{NFSU2_TR(0x430d01);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B430d05:{NFSU2_TR(0x430d05);
u8 U[4];
w4(U+0,u32(0x785f64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430d0a:{NFSU2_TR(0x430d0a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430d0b:{NFSU2_TR(0x430d0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430d10ull));
TAIL_STATIC(0x43dc30u,43d);
}
B430d10:L430d10:{c.instructions+=3;NFSU2_TR(0x430d10);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B430d13:{NFSU2_TR(0x430d13);
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
B430d15:{NFSU2_TR(0x430d15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L430d1e;}}
}
B430d17:L430d17:{c.instructions+=3;NFSU2_TR(0x430d17);
w4(R+0,u32(0x1ull));
}
B430d1c:{NFSU2_TR(0x430d1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B430d1d:{NFSU2_TR(0x430d1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430d1e:L430d1e:{c.instructions+=3;NFSU2_TR(0x430d1e);
u8 U[4];
w4(U+0,u32(0x785f54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430d23:{NFSU2_TR(0x430d23);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430d24:{NFSU2_TR(0x430d24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430d29ull));
TAIL_STATIC(0x43dc30u,43d);
}
B430d29:L430d29:{c.instructions+=7;NFSU2_TR(0x430d29);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B430d2c:{NFSU2_TR(0x430d2c);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B430d2e:{NFSU2_TR(0x430d2e);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B430d30:{NFSU2_TR(0x430d30);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffdull))));
}
B430d33:{NFSU2_TR(0x430d33);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x2ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x2ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B430d36:{NFSU2_TR(0x430d36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B430d37:{NFSU2_TR(0x430d37);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430d40:L430d40:{c.instructions+=5;NFSU2_TR(0x430d40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430d41:{NFSU2_TR(0x430d41);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B430d45:{NFSU2_TR(0x430d45);
u8 U[4];
w4(U+0,u32(0x785fa4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430d4a:{NFSU2_TR(0x430d4a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430d4b:{NFSU2_TR(0x430d4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430d50ull));
TAIL_STATIC(0x43dc30u,43d);
}
B430d50:L430d50:{c.instructions+=3;NFSU2_TR(0x430d50);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B430d53:{NFSU2_TR(0x430d53);
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
B430d55:{NFSU2_TR(0x430d55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L430d59;}}
}
B430d57:L430d57:{c.instructions+=2;NFSU2_TR(0x430d57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B430d58:{NFSU2_TR(0x430d58);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430d59:L430d59:{c.instructions+=3;NFSU2_TR(0x430d59);
u8 U[4];
w4(U+0,u32(0x785f94ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430d5e:{NFSU2_TR(0x430d5e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430d5f:{NFSU2_TR(0x430d5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430d64ull));
TAIL_STATIC(0x43dc30u,43d);
}
B430d64:L430d64:{c.instructions+=3;NFSU2_TR(0x430d64);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B430d67:{NFSU2_TR(0x430d67);
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
B430d69:{NFSU2_TR(0x430d69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L430d72;}}
}
B430d6b:L430d6b:{c.instructions+=3;NFSU2_TR(0x430d6b);
w4(R+0,u32(0x1ull));
}
B430d70:{NFSU2_TR(0x430d70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B430d71:{NFSU2_TR(0x430d71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430d72:L430d72:{c.instructions+=3;NFSU2_TR(0x430d72);
u8 U[4];
w4(U+0,u32(0x785f84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430d77:{NFSU2_TR(0x430d77);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430d78:{NFSU2_TR(0x430d78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430d7dull));
TAIL_STATIC(0x43dc30u,43d);
}
B430d7d:L430d7d:{c.instructions+=3;NFSU2_TR(0x430d7d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B430d80:{NFSU2_TR(0x430d80);
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
B430d82:{NFSU2_TR(0x430d82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L430d8b;}}
}
B430d84:L430d84:{c.instructions+=3;NFSU2_TR(0x430d84);
w4(R+0,u32(0x2ull));
}
B430d89:{NFSU2_TR(0x430d89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B430d8a:{NFSU2_TR(0x430d8a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430d8b:L430d8b:{c.instructions+=3;NFSU2_TR(0x430d8b);
u8 U[4];
w4(U+0,u32(0x785f74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430d90:{NFSU2_TR(0x430d90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430d91:{NFSU2_TR(0x430d91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x430d96ull));
TAIL_STATIC(0x43dc30u,43d);
}
B430d96:L430d96:{c.instructions+=7;NFSU2_TR(0x430d96);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B430d99:{NFSU2_TR(0x430d99);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B430d9b:{NFSU2_TR(0x430d9b);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B430d9d:{NFSU2_TR(0x430d9d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffcull))));
}
B430da0:{NFSU2_TR(0x430da0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x3ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x3ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B430da3:{NFSU2_TR(0x430da3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B430da4:{NFSU2_TR(0x430da4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430db0:L430db0:{c.instructions+=5;NFSU2_TR(0x430db0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B430db4:{NFSU2_TR(0x430db4);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B430db7:{NFSU2_TR(0x430db7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B430dbb:{NFSU2_TR(0x430dbb);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B430dbe:{NFSU2_TR(0x430dbe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430dc0:L430dc0:{c.instructions+=12;NFSU2_TR(0x430dc0);
__builtin_memmove((R+0),(R+4),4);
}
B430dc2:{NFSU2_TR(0x430dc2);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B430dc6:{NFSU2_TR(0x430dc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B430dc9:{NFSU2_TR(0x430dc9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B430dcc:{NFSU2_TR(0x430dcc);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B430dd0:{NFSU2_TR(0x430dd0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430dd1:{NFSU2_TR(0x430dd1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B430dd5:{NFSU2_TR(0x430dd5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430dd6:{NFSU2_TR(0x430dd6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430dd7:{NFSU2_TR(0x430dd7);
__builtin_memmove((R+28),(R+8),4);
}
B430dd9:{NFSU2_TR(0x430dd9);
w4(R+4,u32(0x7ull));
}
B430dde:{NFSU2_TR(0x430dde);
w4(R+24,u32(0x7ea240ull));
}
B430de3:L430de3:{c.instructions+=1;NFSU2_TR(0x430de3);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L430de5;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x430de3u);}goto L430de3;}
}
B430de5:L430de5:{c.instructions+=13;NFSU2_TR(0x430de5);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B430de8:{NFSU2_TR(0x430de8);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B430deb:{NFSU2_TR(0x430deb);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B430def:{NFSU2_TR(0x430def);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B430df2:{NFSU2_TR(0x430df2);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B430df5:{NFSU2_TR(0x430df5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B430df9:{NFSU2_TR(0x430df9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B430dfc:{NFSU2_TR(0x430dfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B430dff:{NFSU2_TR(0x430dff);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B430e02:{NFSU2_TR(0x430e02);
u8 U[12];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B430e06:{NFSU2_TR(0x430e06);
__builtin_memmove((R+28),(R+8),4);
}
B430e08:{NFSU2_TR(0x430e08);
w4(R+4,u32(0x7ull));
}
B430e0d:{NFSU2_TR(0x430e0d);
w4(R+24,u32(0x7ea25cull));
}
B430e12:L430e12:{c.instructions+=1;NFSU2_TR(0x430e12);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L430e14;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x430e12u);}goto L430e12;}
}
B430e14:L430e14:{c.instructions+=13;NFSU2_TR(0x430e14);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B430e17:{NFSU2_TR(0x430e17);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B430e1a:{NFSU2_TR(0x430e1a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B430e1e:{NFSU2_TR(0x430e1e);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B430e21:{NFSU2_TR(0x430e21);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B430e24:{NFSU2_TR(0x430e24);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B430e28:{NFSU2_TR(0x430e28);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B430e2b:{NFSU2_TR(0x430e2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B430e2e:{NFSU2_TR(0x430e2e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B430e31:{NFSU2_TR(0x430e31);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B430e35:{NFSU2_TR(0x430e35);
__builtin_memmove((R+28),(R+8),4);
}
B430e37:{NFSU2_TR(0x430e37);
w4(R+4,u32(0x7ull));
}
B430e3c:{NFSU2_TR(0x430e3c);
w4(R+24,u32(0x7ea278ull));
}
B430e41:L430e41:{c.instructions+=1;NFSU2_TR(0x430e41);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L430e43;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x430e41u);}goto L430e41;}
}
B430e43:L430e43:{c.instructions+=13;NFSU2_TR(0x430e43);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B430e46:{NFSU2_TR(0x430e46);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B430e49:{NFSU2_TR(0x430e49);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B430e4d:{NFSU2_TR(0x430e4d);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B430e50:{NFSU2_TR(0x430e50);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B430e53:{NFSU2_TR(0x430e53);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B430e57:{NFSU2_TR(0x430e57);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B430e5a:{NFSU2_TR(0x430e5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B430e5d:{NFSU2_TR(0x430e5d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B430e60:{NFSU2_TR(0x430e60);
u8 U[12];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B430e64:{NFSU2_TR(0x430e64);
w4(R+4,u32(0x7ull));
}
B430e69:{NFSU2_TR(0x430e69);
w4(R+24,u32(0x7ea294ull));
}
B430e6e:{NFSU2_TR(0x430e6e);
__builtin_memmove((R+28),(R+8),4);
}
B430e70:L430e70:{c.instructions+=1;NFSU2_TR(0x430e70);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L430e72;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x430e70u);}goto L430e70;}
}
B430e72:L430e72:{c.instructions+=13;NFSU2_TR(0x430e72);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B430e75:{NFSU2_TR(0x430e75);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B430e78:{NFSU2_TR(0x430e78);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B430e7c:{NFSU2_TR(0x430e7c);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B430e7f:{NFSU2_TR(0x430e7f);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B430e82:{NFSU2_TR(0x430e82);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B430e85:{NFSU2_TR(0x430e85);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B430e88:{NFSU2_TR(0x430e88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B430e89:{NFSU2_TR(0x430e89);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x4ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B430e8c:{NFSU2_TR(0x430e8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B430e8d:{NFSU2_TR(0x430e8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B430e90:{NFSU2_TR(0x430e90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B430e91:{NFSU2_TR(0x430e91);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B430ea0:L430ea0:{c.instructions+=12;NFSU2_TR(0x430ea0);
__builtin_memmove((R+0),(R+4),4);
}
B430ea2:{NFSU2_TR(0x430ea2);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B430ea6:{NFSU2_TR(0x430ea6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B430ea9:{NFSU2_TR(0x430ea9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B430eac:{NFSU2_TR(0x430eac);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B430eb0:{NFSU2_TR(0x430eb0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430eb1:{NFSU2_TR(0x430eb1);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B430eb5:{NFSU2_TR(0x430eb5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430eb6:{NFSU2_TR(0x430eb6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B430eb7:{NFSU2_TR(0x430eb7);
__builtin_memmove((R+28),(R+12),4);
}
B430eb9:{NFSU2_TR(0x430eb9);
w4(R+4,u32(0x7ull));
}
B430ebe:{NFSU2_TR(0x430ebe);
w4(R+24,u32(0x7ea2b0ull));
}
B430ec3:L430ec3:{c.instructions+=1;NFSU2_TR(0x430ec3);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L430ec5;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x430ec3u);}goto L430ec3;}
}
B430ec5:L430ec5:{c.instructions+=10;NFSU2_TR(0x430ec5);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B430ec8:{NFSU2_TR(0x430ec8);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B430ecb:{NFSU2_TR(0x430ecb);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B430ecf:{NFSU2_TR(0x430ecf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B430ed2:{NFSU2_TR(0x430ed2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B430ed5:{NFSU2_TR(0x430ed5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B430ed8:{NFSU2_TR(0x430ed8);
u8 U[12];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B430edc:{NFSU2_TR(0x430edc);
__builtin_memmove((R+28),(R+12),4);
}
B430ede:{NFSU2_TR(0x430ede);
w4(R+4,u32(0x7ull));
}
B430ee3:{NFSU2_TR(0x430ee3);
w4(R+24,u32(0x7ea2ccull));
}
B430ee8:L430ee8:{c.instructions+=1;NFSU2_TR(0x430ee8);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L430eea;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x430ee8u);}goto L430ee8;}
}
B430eea:L430eea:{c.instructions+=10;NFSU2_TR(0x430eea);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B430eed:{NFSU2_TR(0x430eed);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B430ef0:{NFSU2_TR(0x430ef0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B430ef4:{NFSU2_TR(0x430ef4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B430ef7:{NFSU2_TR(0x430ef7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B430efa:{NFSU2_TR(0x430efa);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B430efd:{NFSU2_TR(0x430efd);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B430f01:{NFSU2_TR(0x430f01);
__builtin_memmove((R+28),(R+12),4);
}
B430f03:{NFSU2_TR(0x430f03);
w4(R+4,u32(0x7ull));
}
B430f08:{NFSU2_TR(0x430f08);
w4(R+24,u32(0x7ea2e8ull));
}
B430f0d:L430f0d:{c.instructions+=1;NFSU2_TR(0x430f0d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L430f0f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x430f0du);}goto L430f0d;}
}
B430f0f:L430f0f:{c.instructions+=10;NFSU2_TR(0x430f0f);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B430f12:{NFSU2_TR(0x430f12);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B430f15:{NFSU2_TR(0x430f15);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B430f19:{NFSU2_TR(0x430f19);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B430f1c:{NFSU2_TR(0x430f1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B430f1f:{NFSU2_TR(0x430f1f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B430f22:{NFSU2_TR(0x430f22);
u8 U[12];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B430f26:{NFSU2_TR(0x430f26);
__builtin_memmove((R+28),(R+12),4);
}
B430f28:{NFSU2_TR(0x430f28);
w4(R+4,u32(0x7ull));
}
B430f2d:{NFSU2_TR(0x430f2d);
w4(R+24,u32(0x7ea304ull));
}
B430f32:L430f32:{c.instructions+=1;NFSU2_TR(0x430f32);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L430f34;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x430f32u);}goto L430f32;}
}
B430f34:L430f34:{c.instructions+=10;NFSU2_TR(0x430f34);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B430f37:{NFSU2_TR(0x430f37);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B430f3a:{NFSU2_TR(0x430f3a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B430f3e:{NFSU2_TR(0x430f3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B430f41:{NFSU2_TR(0x430f41);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B430f44:{NFSU2_TR(0x430f44);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B430f47:{NFSU2_TR(0x430f47);
u8 U[12];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B430f4e:{NFSU2_TR(0x430f4e);
__builtin_memmove((R+28),(R+12),4);
}
B430f50:{NFSU2_TR(0x430f50);
w4(R+4,u32(0x7ull));
}
B430f55:{NFSU2_TR(0x430f55);
w4(R+24,u32(0x7ea320ull));
}
B430f5a:L430f5a:{c.instructions+=1;NFSU2_TR(0x430f5a);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L430f5c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x430f5au);}goto L430f5a;}
}
B430f5c:L430f5c:{c.instructions+=10;NFSU2_TR(0x430f5c);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B430f5f:{NFSU2_TR(0x430f5f);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B430f62:{NFSU2_TR(0x430f62);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B430f66:{NFSU2_TR(0x430f66);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B430f69:{NFSU2_TR(0x430f69);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B430f6c:{NFSU2_TR(0x430f6c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B430f6f:{NFSU2_TR(0x430f6f);
u8 U[12];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B430f76:{NFSU2_TR(0x430f76);
__builtin_memmove((R+28),(R+12),4);
}
B430f78:{NFSU2_TR(0x430f78);
w4(R+4,u32(0x7ull));
}
B430f7d:{NFSU2_TR(0x430f7d);
w4(R+24,u32(0x7ea33cull));
}
B430f82:L430f82:{c.instructions+=1;NFSU2_TR(0x430f82);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L430f84;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x430f82u);}goto L430f82;}
}
B430f84:L430f84:{c.instructions+=10;NFSU2_TR(0x430f84);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B430f87:{NFSU2_TR(0x430f87);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B430f8a:{NFSU2_TR(0x430f8a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B430f8e:{NFSU2_TR(0x430f8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B430f91:{NFSU2_TR(0x430f91);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B430f94:{NFSU2_TR(0x430f94);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B430f97:{NFSU2_TR(0x430f97);
u8 U[12];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B430f9e:{NFSU2_TR(0x430f9e);
w4(R+4,u32(0x7ull));
}
B430fa3:{NFSU2_TR(0x430fa3);
w4(R+24,u32(0x7ea358ull));
}
B430fa8:{NFSU2_TR(0x430fa8);
__builtin_memmove((R+28),(R+12),4);
}
B430faa:L430faa:{c.instructions+=1;NFSU2_TR(0x430faa);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L430fac;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x430faau);}goto L430faa;}
}
B430fac:L430fac:{c.instructions+=10;NFSU2_TR(0x430fac);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B430faf:{NFSU2_TR(0x430faf);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B430fb2:{NFSU2_TR(0x430fb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B430fb5:{NFSU2_TR(0x430fb5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B430fb9:{NFSU2_TR(0x430fb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B430fbc:{NFSU2_TR(0x430fbc);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B430fbf:{NFSU2_TR(0x430fbf);
u8 U[12];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B430fc6:{NFSU2_TR(0x430fc6);
__builtin_memmove((R+28),(R+12),4);
}
B430fc8:{NFSU2_TR(0x430fc8);
w4(R+4,u32(0x7ull));
}
B430fcd:{NFSU2_TR(0x430fcd);
w4(R+24,u32(0x7ea374ull));
}
B430fd2:L430fd2:{c.instructions+=1;NFSU2_TR(0x430fd2);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L430fd4;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x430fd2u);}goto L430fd2;}
}
B430fd4:L430fd4:{c.instructions+=10;NFSU2_TR(0x430fd4);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B430fd7:{NFSU2_TR(0x430fd7);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B430fda:{NFSU2_TR(0x430fda);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B430fde:{NFSU2_TR(0x430fde);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B430fe1:{NFSU2_TR(0x430fe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B430fe4:{NFSU2_TR(0x430fe4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B430fe7:{NFSU2_TR(0x430fe7);
u8 U[12];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B430fee:{NFSU2_TR(0x430fee);
__builtin_memmove((R+28),(R+12),4);
}
B430ff0:{NFSU2_TR(0x430ff0);
w4(R+4,u32(0x7ull));
}
B430ff5:{NFSU2_TR(0x430ff5);
w4(R+24,u32(0x7ea390ull));
}
B430ffa:L430ffa:{c.instructions+=1;NFSU2_TR(0x430ffa);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L430ffc;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x430ffau);}goto L430ffa;}
}
B430ffc:L430ffc:{c.instructions+=2;NFSU2_TR(0x430ffc);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B430fff:{NFSU2_TR(0x430fff);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
TAIL_STATIC(0x431002u,431);
}
XIT:NFSU2_TR_EXIT(0x430,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
