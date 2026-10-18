#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_40d(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5d2(u8* __restrict R,Cpu& c);
u32 body_5d4(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5d9(u8* __restrict R,Cpu& c);
u32 body_5da(u8* __restrict R,Cpu& c);
u32 body_5dc(u8* __restrict R,Cpu& c);
u32 body_5de(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5dd,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5dd,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5dd(u8* __restrict R,Cpu& c);
u32 page_5dd(Cpu& c){return body_5dd(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5dd(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5dd001:goto L5dd001;
case 0x5dd003:c.instructions+=4;goto B5dd003;
case 0x5dd009:c.instructions+=3;goto B5dd009;
case 0x5dd00b:c.instructions+=2;goto B5dd00b;
case 0x5dd010:c.instructions+=1;goto B5dd010;
case 0x5dd012:goto L5dd012;
case 0x5dd014:c.instructions+=9;goto B5dd014;
case 0x5dd016:c.instructions+=8;goto B5dd016;
case 0x5dd019:c.instructions+=7;goto B5dd019;
case 0x5dd01b:c.instructions+=6;goto B5dd01b;
case 0x5dd01e:c.instructions+=5;goto B5dd01e;
case 0x5dd020:c.instructions+=4;goto B5dd020;
case 0x5dd024:c.instructions+=3;goto B5dd024;
case 0x5dd027:c.instructions+=2;goto B5dd027;
case 0x5dd029:c.instructions+=1;goto B5dd029;
case 0x5dd02b:goto L5dd02b;
case 0x5dd02e:c.instructions+=2;goto B5dd02e;
case 0x5dd035:c.instructions+=1;goto B5dd035;
case 0x5dd03a:goto L5dd03a;
case 0x5dd03c:c.instructions+=6;goto B5dd03c;
case 0x5dd03e:c.instructions+=5;goto B5dd03e;
case 0x5dd041:c.instructions+=4;goto B5dd041;
case 0x5dd043:c.instructions+=3;goto B5dd043;
case 0x5dd046:c.instructions+=2;goto B5dd046;
case 0x5dd048:c.instructions+=1;goto B5dd048;
case 0x5dd04a:goto L5dd04a;
case 0x5dd04d:c.instructions+=2;goto B5dd04d;
case 0x5dd051:c.instructions+=1;goto B5dd051;
case 0x5dd056:goto L5dd056;
case 0x5dd058:c.instructions+=1;goto B5dd058;
case 0x5dd05d:goto L5dd05d;
case 0x5dd05f:c.instructions+=1;goto B5dd05f;
case 0x5dd061:goto L5dd061;
case 0x5dd064:c.instructions+=4;goto B5dd064;
case 0x5dd066:c.instructions+=3;goto B5dd066;
case 0x5dd069:c.instructions+=2;goto B5dd069;
case 0x5dd06c:c.instructions+=1;goto B5dd06c;
case 0x5dd06e:goto L5dd06e;
case 0x5dd071:c.instructions+=2;goto B5dd071;
case 0x5dd074:c.instructions+=1;goto B5dd074;
case 0x5dd076:goto L5dd076;
case 0x5dd079:c.instructions+=1;goto B5dd079;
case 0x5dd07b:goto L5dd07b;
case 0x5dd07f:c.instructions+=4;goto B5dd07f;
case 0x5dd082:c.instructions+=3;goto B5dd082;
case 0x5dd084:c.instructions+=2;goto B5dd084;
case 0x5dd086:c.instructions+=1;goto B5dd086;
case 0x5dd08c:goto L5dd08c;
case 0x5dd090:c.instructions+=7;goto B5dd090;
case 0x5dd094:c.instructions+=6;goto B5dd094;
case 0x5dd098:c.instructions+=5;goto B5dd098;
case 0x5dd09e:c.instructions+=4;goto B5dd09e;
case 0x5dd0a2:c.instructions+=3;goto B5dd0a2;
case 0x5dd0a3:c.instructions+=2;goto B5dd0a3;
case 0x5dd0a7:c.instructions+=1;goto B5dd0a7;
case 0x5dd0ac:goto L5dd0ac;
case 0x5dd0ae:c.instructions+=1;goto B5dd0ae;
case 0x5dd0b0:goto L5dd0b0;
case 0x5dd0b4:c.instructions+=5;goto B5dd0b4;
case 0x5dd0b7:c.instructions+=4;goto B5dd0b7;
case 0x5dd0bb:c.instructions+=3;goto B5dd0bb;
case 0x5dd0bf:c.instructions+=2;goto B5dd0bf;
case 0x5dd0c5:c.instructions+=1;goto B5dd0c5;
case 0x5dd0c7:goto L5dd0c7;
case 0x5dd0c9:c.instructions+=1;goto B5dd0c9;
case 0x5dd0ce:goto L5dd0ce;
case 0x5dd0d1:c.instructions+=15;goto B5dd0d1;
case 0x5dd0d5:c.instructions+=14;goto B5dd0d5;
case 0x5dd0d9:c.instructions+=13;goto B5dd0d9;
case 0x5dd0df:c.instructions+=12;goto B5dd0df;
case 0x5dd0e6:c.instructions+=11;goto B5dd0e6;
case 0x5dd0ea:c.instructions+=10;goto B5dd0ea;
case 0x5dd0ec:c.instructions+=9;goto B5dd0ec;
case 0x5dd0f2:c.instructions+=8;goto B5dd0f2;
case 0x5dd0f7:c.instructions+=7;goto B5dd0f7;
case 0x5dd0f9:c.instructions+=6;goto B5dd0f9;
case 0x5dd0fb:c.instructions+=5;goto B5dd0fb;
case 0x5dd0fe:c.instructions+=4;goto B5dd0fe;
case 0x5dd100:c.instructions+=3;goto B5dd100;
case 0x5dd103:c.instructions+=2;goto B5dd103;
case 0x5dd105:c.instructions+=1;goto B5dd105;
case 0x5dd107:goto L5dd107;
case 0x5dd109:c.instructions+=4;goto B5dd109;
case 0x5dd10d:c.instructions+=3;goto B5dd10d;
case 0x5dd110:c.instructions+=2;goto B5dd110;
case 0x5dd112:c.instructions+=1;goto B5dd112;
case 0x5dd114:goto L5dd114;
case 0x5dd117:c.instructions+=2;goto B5dd117;
case 0x5dd11e:c.instructions+=1;goto B5dd11e;
case 0x5dd120:goto L5dd120;
case 0x5dd122:c.instructions+=1;goto B5dd122;
case 0x5dd124:goto L5dd124;
case 0x5dd127:c.instructions+=1;goto B5dd127;
case 0x5dd12b:goto L5dd12b;
case 0x5dd12d:c.instructions+=3;goto B5dd12d;
case 0x5dd12f:c.instructions+=2;goto B5dd12f;
case 0x5dd133:c.instructions+=1;goto B5dd133;
case 0x5dd135:goto L5dd135;
case 0x5dd137:c.instructions+=1;goto B5dd137;
case 0x5dd13c:goto L5dd13c;
case 0x5dd140:c.instructions+=2;goto B5dd140;
case 0x5dd142:c.instructions+=1;goto B5dd142;
case 0x5dd148:goto L5dd148;
case 0x5dd14b:c.instructions+=3;goto B5dd14b;
case 0x5dd14d:c.instructions+=2;goto B5dd14d;
case 0x5dd14f:c.instructions+=1;goto B5dd14f;
case 0x5dd151:goto L5dd151;
case 0x5dd155:c.instructions+=1;goto B5dd155;
case 0x5dd157:goto L5dd157;
case 0x5dd15b:goto L5dd15b;
case 0x5dd15d:c.instructions+=1;goto B5dd15d;
case 0x5dd15f:goto L5dd15f;
case 0x5dd163:c.instructions+=1;goto B5dd163;
case 0x5dd165:goto L5dd165;
case 0x5dd169:goto L5dd169;
case 0x5dd16c:c.instructions+=2;goto B5dd16c;
case 0x5dd16e:c.instructions+=1;goto B5dd16e;
case 0x5dd170:goto L5dd170;
case 0x5dd177:c.instructions+=1;goto B5dd177;
case 0x5dd179:goto L5dd179;
case 0x5dd17b:goto L5dd17b;
case 0x5dd17e:c.instructions+=4;goto B5dd17e;
case 0x5dd181:c.instructions+=3;goto B5dd181;
case 0x5dd188:c.instructions+=2;goto B5dd188;
case 0x5dd18a:c.instructions+=1;goto B5dd18a;
case 0x5dd190:goto L5dd190;
case 0x5dd196:goto L5dd196;
case 0x5dd19a:c.instructions+=1;goto B5dd19a;
case 0x5dd1a0:goto L5dd1a0;
case 0x5dd1a8:c.instructions+=1;goto B5dd1a8;
case 0x5dd1b0:goto L5dd1b0;
case 0x5dd1b4:c.instructions+=4;goto B5dd1b4;
case 0x5dd1b7:c.instructions+=3;goto B5dd1b7;
case 0x5dd1b9:c.instructions+=2;goto B5dd1b9;
case 0x5dd1be:c.instructions+=1;goto B5dd1be;
case 0x5dd1c0:goto L5dd1c0;
case 0x5dd1c6:c.instructions+=1;goto B5dd1c6;
case 0x5dd1c8:goto L5dd1c8;
case 0x5dd1cd:goto L5dd1cd;
case 0x5dd1d1:c.instructions+=2;goto B5dd1d1;
case 0x5dd1d6:c.instructions+=1;goto B5dd1d6;
case 0x5dd1d8:goto L5dd1d8;
case 0x5dd1de:c.instructions+=1;goto B5dd1de;
case 0x5dd1e0:goto L5dd1e0;
case 0x5dd1e1:goto L5dd1e1;
case 0x5dd1e5:c.instructions+=1;goto B5dd1e5;
case 0x5dd1eb:goto L5dd1eb;
case 0x5dd1ed:c.instructions+=2;goto B5dd1ed;
case 0x5dd1ef:c.instructions+=1;goto B5dd1ef;
case 0x5dd1f0:goto L5dd1f0;
case 0x5dd1f3:c.instructions+=2;goto B5dd1f3;
case 0x5dd1f8:c.instructions+=1;goto B5dd1f8;
case 0x5dd1fa:goto L5dd1fa;
case 0x5dd200:c.instructions+=1;goto B5dd200;
case 0x5dd202:goto L5dd202;
case 0x5dd206:c.instructions+=1;goto B5dd206;
case 0x5dd208:goto L5dd208;
case 0x5dd209:goto L5dd209;
case 0x5dd20a:c.instructions+=3;goto B5dd20a;
case 0x5dd20d:c.instructions+=2;goto B5dd20d;
case 0x5dd210:c.instructions+=1;goto B5dd210;
case 0x5dd212:goto L5dd212;
case 0x5dd214:goto L5dd214;
case 0x5dd217:c.instructions+=6;goto B5dd217;
case 0x5dd21b:c.instructions+=5;goto B5dd21b;
case 0x5dd21d:c.instructions+=4;goto B5dd21d;
case 0x5dd220:c.instructions+=3;goto B5dd220;
case 0x5dd222:c.instructions+=2;goto B5dd222;
case 0x5dd224:c.instructions+=1;goto B5dd224;
case 0x5dd226:goto L5dd226;
case 0x5dd228:c.instructions+=3;goto B5dd228;
case 0x5dd22b:c.instructions+=2;goto B5dd22b;
case 0x5dd22e:c.instructions+=1;goto B5dd22e;
case 0x5dd230:goto L5dd230;
case 0x5dd233:c.instructions+=2;goto B5dd233;
case 0x5dd236:c.instructions+=1;goto B5dd236;
case 0x5dd238:goto L5dd238;
case 0x5dd23b:c.instructions+=1;goto B5dd23b;
case 0x5dd23d:goto L5dd23d;
case 0x5dd23f:c.instructions+=6;goto B5dd23f;
case 0x5dd240:c.instructions+=5;goto B5dd240;
case 0x5dd241:c.instructions+=4;goto B5dd241;
case 0x5dd242:c.instructions+=3;goto B5dd242;
case 0x5dd244:c.instructions+=2;goto B5dd244;
case 0x5dd245:c.instructions+=1;goto B5dd245;
case 0x5dd246:goto L5dd246;
case 0x5dd249:c.instructions+=3;goto B5dd249;
case 0x5dd24b:c.instructions+=2;goto B5dd24b;
case 0x5dd24d:c.instructions+=1;goto B5dd24d;
case 0x5dd24f:goto L5dd24f;
case 0x5dd251:c.instructions+=1;goto B5dd251;
case 0x5dd256:goto L5dd256;
case 0x5dd25a:c.instructions+=1;goto B5dd25a;
case 0x5dd25c:goto L5dd25c;
case 0x5dd25f:c.instructions+=4;goto B5dd25f;
case 0x5dd261:c.instructions+=3;goto B5dd261;
case 0x5dd264:c.instructions+=2;goto B5dd264;
case 0x5dd267:c.instructions+=1;goto B5dd267;
case 0x5dd269:goto L5dd269;
case 0x5dd26c:c.instructions+=2;goto B5dd26c;
case 0x5dd26f:c.instructions+=1;goto B5dd26f;
case 0x5dd271:goto L5dd271;
case 0x5dd274:c.instructions+=1;goto B5dd274;
case 0x5dd276:goto L5dd276;
case 0x5dd27a:c.instructions+=1;goto B5dd27a;
case 0x5dd27f:goto L5dd27f;
case 0x5dd282:c.instructions+=8;goto B5dd282;
case 0x5dd287:c.instructions+=7;goto B5dd287;
case 0x5dd28e:c.instructions+=6;goto B5dd28e;
case 0x5dd292:c.instructions+=5;goto B5dd292;
case 0x5dd294:c.instructions+=4;goto B5dd294;
case 0x5dd29a:c.instructions+=3;goto B5dd29a;
case 0x5dd29c:c.instructions+=2;goto B5dd29c;
case 0x5dd2a1:c.instructions+=1;goto B5dd2a1;
case 0x5dd2a3:goto L5dd2a3;
case 0x5dd2a5:c.instructions+=9;goto B5dd2a5;
case 0x5dd2a7:c.instructions+=8;goto B5dd2a7;
case 0x5dd2aa:c.instructions+=7;goto B5dd2aa;
case 0x5dd2ac:c.instructions+=6;goto B5dd2ac;
case 0x5dd2af:c.instructions+=5;goto B5dd2af;
case 0x5dd2b1:c.instructions+=4;goto B5dd2b1;
case 0x5dd2b5:c.instructions+=3;goto B5dd2b5;
case 0x5dd2b8:c.instructions+=2;goto B5dd2b8;
case 0x5dd2ba:c.instructions+=1;goto B5dd2ba;
case 0x5dd2bc:goto L5dd2bc;
case 0x5dd2bf:c.instructions+=2;goto B5dd2bf;
case 0x5dd2c6:c.instructions+=1;goto B5dd2c6;
case 0x5dd2c8:goto L5dd2c8;
case 0x5dd2ca:c.instructions+=6;goto B5dd2ca;
case 0x5dd2cc:c.instructions+=5;goto B5dd2cc;
case 0x5dd2cf:c.instructions+=4;goto B5dd2cf;
case 0x5dd2d1:c.instructions+=3;goto B5dd2d1;
case 0x5dd2d4:c.instructions+=2;goto B5dd2d4;
case 0x5dd2d6:c.instructions+=1;goto B5dd2d6;
case 0x5dd2d8:goto L5dd2d8;
case 0x5dd2db:c.instructions+=1;goto B5dd2db;
case 0x5dd2df:goto L5dd2df;
case 0x5dd2e1:c.instructions+=1;goto B5dd2e1;
case 0x5dd2e7:goto L5dd2e7;
case 0x5dd2e8:c.instructions+=6;goto B5dd2e8;
case 0x5dd2e9:c.instructions+=5;goto B5dd2e9;
case 0x5dd2eb:c.instructions+=4;goto B5dd2eb;
case 0x5dd2ec:c.instructions+=3;goto B5dd2ec;
case 0x5dd2ee:c.instructions+=2;goto B5dd2ee;
case 0x5dd2ef:c.instructions+=1;goto B5dd2ef;
case 0x5dd2f0:goto L5dd2f0;
case 0x5dd2f3:c.instructions+=23;goto B5dd2f3;
case 0x5dd2f7:c.instructions+=22;goto B5dd2f7;
case 0x5dd2fb:c.instructions+=21;goto B5dd2fb;
case 0x5dd2ff:c.instructions+=20;goto B5dd2ff;
case 0x5dd303:c.instructions+=19;goto B5dd303;
case 0x5dd307:c.instructions+=18;goto B5dd307;
case 0x5dd30b:c.instructions+=17;goto B5dd30b;
case 0x5dd30c:c.instructions+=16;goto B5dd30c;
case 0x5dd312:c.instructions+=15;goto B5dd312;
case 0x5dd316:c.instructions+=14;goto B5dd316;
case 0x5dd317:c.instructions+=13;goto B5dd317;
case 0x5dd31b:c.instructions+=12;goto B5dd31b;
case 0x5dd31f:c.instructions+=11;goto B5dd31f;
case 0x5dd320:c.instructions+=10;goto B5dd320;
case 0x5dd324:c.instructions+=9;goto B5dd324;
case 0x5dd325:c.instructions+=8;goto B5dd325;
case 0x5dd326:c.instructions+=7;goto B5dd326;
case 0x5dd32c:c.instructions+=6;goto B5dd32c;
case 0x5dd330:c.instructions+=5;goto B5dd330;
case 0x5dd334:c.instructions+=4;goto B5dd334;
case 0x5dd338:c.instructions+=3;goto B5dd338;
case 0x5dd33a:c.instructions+=2;goto B5dd33a;
case 0x5dd33e:c.instructions+=1;goto B5dd33e;
case 0x5dd343:goto L5dd343;
case 0x5dd347:c.instructions+=6;goto B5dd347;
case 0x5dd348:c.instructions+=5;goto B5dd348;
case 0x5dd34c:c.instructions+=4;goto B5dd34c;
case 0x5dd34d:c.instructions+=3;goto B5dd34d;
case 0x5dd34e:c.instructions+=2;goto B5dd34e;
case 0x5dd34f:c.instructions+=1;goto B5dd34f;
case 0x5dd354:goto L5dd354;
case 0x5dd357:c.instructions+=3;goto B5dd357;
case 0x5dd358:c.instructions+=2;goto B5dd358;
case 0x5dd35b:c.instructions+=1;goto B5dd35b;
case 0x5dd360:goto L5dd360;
case 0x5dd361:c.instructions+=49;goto B5dd361;
case 0x5dd363:c.instructions+=48;goto B5dd363;
case 0x5dd366:c.instructions+=47;goto B5dd366;
case 0x5dd369:c.instructions+=46;goto B5dd369;
case 0x5dd36d:c.instructions+=45;goto B5dd36d;
case 0x5dd371:c.instructions+=44;goto B5dd371;
case 0x5dd375:c.instructions+=43;goto B5dd375;
case 0x5dd377:c.instructions+=42;goto B5dd377;
case 0x5dd37b:c.instructions+=41;goto B5dd37b;
case 0x5dd37f:c.instructions+=40;goto B5dd37f;
case 0x5dd383:c.instructions+=39;goto B5dd383;
case 0x5dd387:c.instructions+=38;goto B5dd387;
case 0x5dd38b:c.instructions+=37;goto B5dd38b;
case 0x5dd38e:c.instructions+=36;goto B5dd38e;
case 0x5dd394:c.instructions+=35;goto B5dd394;
case 0x5dd397:c.instructions+=34;goto B5dd397;
case 0x5dd39b:c.instructions+=33;goto B5dd39b;
case 0x5dd39f:c.instructions+=32;goto B5dd39f;
case 0x5dd3a2:c.instructions+=31;goto B5dd3a2;
case 0x5dd3a8:c.instructions+=30;goto B5dd3a8;
case 0x5dd3a9:c.instructions+=29;goto B5dd3a9;
case 0x5dd3ac:c.instructions+=28;goto B5dd3ac;
case 0x5dd3b0:c.instructions+=27;goto B5dd3b0;
case 0x5dd3b3:c.instructions+=26;goto B5dd3b3;
case 0x5dd3b7:c.instructions+=25;goto B5dd3b7;
case 0x5dd3ba:c.instructions+=24;goto B5dd3ba;
case 0x5dd3be:c.instructions+=23;goto B5dd3be;
case 0x5dd3c2:c.instructions+=22;goto B5dd3c2;
case 0x5dd3c3:c.instructions+=21;goto B5dd3c3;
case 0x5dd3c9:c.instructions+=20;goto B5dd3c9;
case 0x5dd3cd:c.instructions+=19;goto B5dd3cd;
case 0x5dd3ce:c.instructions+=18;goto B5dd3ce;
case 0x5dd3d2:c.instructions+=17;goto B5dd3d2;
case 0x5dd3d4:c.instructions+=16;goto B5dd3d4;
case 0x5dd3d8:c.instructions+=15;goto B5dd3d8;
case 0x5dd3dc:c.instructions+=14;goto B5dd3dc;
case 0x5dd3e0:c.instructions+=13;goto B5dd3e0;
case 0x5dd3e4:c.instructions+=12;goto B5dd3e4;
case 0x5dd3e8:c.instructions+=11;goto B5dd3e8;
case 0x5dd3e9:c.instructions+=10;goto B5dd3e9;
case 0x5dd3ef:c.instructions+=9;goto B5dd3ef;
case 0x5dd3f0:c.instructions+=8;goto B5dd3f0;
case 0x5dd3f4:c.instructions+=7;goto B5dd3f4;
case 0x5dd3f8:c.instructions+=6;goto B5dd3f8;
case 0x5dd3fa:c.instructions+=5;goto B5dd3fa;
case 0x5dd3fe:c.instructions+=4;goto B5dd3fe;
case 0x5dd402:c.instructions+=3;goto B5dd402;
case 0x5dd408:c.instructions+=2;goto B5dd408;
case 0x5dd40c:c.instructions+=1;goto B5dd40c;
case 0x5dd411:goto L5dd411;
case 0x5dd414:c.instructions+=6;goto B5dd414;
case 0x5dd415:c.instructions+=5;goto B5dd415;
case 0x5dd419:c.instructions+=4;goto B5dd419;
case 0x5dd41a:c.instructions+=3;goto B5dd41a;
case 0x5dd41b:c.instructions+=2;goto B5dd41b;
case 0x5dd41c:c.instructions+=1;goto B5dd41c;
case 0x5dd421:goto L5dd421;
case 0x5dd424:c.instructions+=4;goto B5dd424;
case 0x5dd425:c.instructions+=3;goto B5dd425;
case 0x5dd427:c.instructions+=2;goto B5dd427;
case 0x5dd428:c.instructions+=1;goto B5dd428;
case 0x5dd430:goto L5dd430;
case 0x5dd433:c.instructions+=5;goto B5dd433;
case 0x5dd434:c.instructions+=4;goto B5dd434;
case 0x5dd438:c.instructions+=3;goto B5dd438;
case 0x5dd439:c.instructions+=2;goto B5dd439;
case 0x5dd43b:c.instructions+=1;goto B5dd43b;
case 0x5dd440:goto L5dd440;
case 0x5dd444:c.instructions+=12;goto B5dd444;
case 0x5dd448:c.instructions+=11;goto B5dd448;
case 0x5dd44a:c.instructions+=10;goto B5dd44a;
case 0x5dd44e:c.instructions+=9;goto B5dd44e;
case 0x5dd44f:c.instructions+=8;goto B5dd44f;
case 0x5dd453:c.instructions+=7;goto B5dd453;
case 0x5dd454:c.instructions+=6;goto B5dd454;
case 0x5dd455:c.instructions+=5;goto B5dd455;
case 0x5dd459:c.instructions+=4;goto B5dd459;
case 0x5dd45d:c.instructions+=3;goto B5dd45d;
case 0x5dd45e:c.instructions+=2;goto B5dd45e;
case 0x5dd462:c.instructions+=1;goto B5dd462;
case 0x5dd467:goto L5dd467;
case 0x5dd46b:c.instructions+=6;goto B5dd46b;
case 0x5dd46c:c.instructions+=5;goto B5dd46c;
case 0x5dd470:c.instructions+=4;goto B5dd470;
case 0x5dd471:c.instructions+=3;goto B5dd471;
case 0x5dd472:c.instructions+=2;goto B5dd472;
case 0x5dd473:c.instructions+=1;goto B5dd473;
case 0x5dd478:goto L5dd478;
case 0x5dd47b:c.instructions+=3;goto B5dd47b;
case 0x5dd47c:c.instructions+=2;goto B5dd47c;
case 0x5dd47f:c.instructions+=1;goto B5dd47f;
case 0x5dd490:goto L5dd490;
case 0x5dd491:c.instructions+=8;goto B5dd491;
case 0x5dd493:c.instructions+=7;goto B5dd493;
case 0x5dd496:c.instructions+=6;goto B5dd496;
case 0x5dd499:c.instructions+=5;goto B5dd499;
case 0x5dd49a:c.instructions+=4;goto B5dd49a;
case 0x5dd49e:c.instructions+=3;goto B5dd49e;
case 0x5dd49f:c.instructions+=2;goto B5dd49f;
case 0x5dd4a1:c.instructions+=1;goto B5dd4a1;
case 0x5dd4a6:goto L5dd4a6;
case 0x5dd4a9:c.instructions+=11;goto B5dd4a9;
case 0x5dd4ad:c.instructions+=10;goto B5dd4ad;
case 0x5dd4af:c.instructions+=9;goto B5dd4af;
case 0x5dd4b2:c.instructions+=8;goto B5dd4b2;
case 0x5dd4b6:c.instructions+=7;goto B5dd4b6;
case 0x5dd4ba:c.instructions+=6;goto B5dd4ba;
case 0x5dd4be:c.instructions+=5;goto B5dd4be;
case 0x5dd4c2:c.instructions+=4;goto B5dd4c2;
case 0x5dd4c4:c.instructions+=3;goto B5dd4c4;
case 0x5dd4ca:c.instructions+=2;goto B5dd4ca;
case 0x5dd4ce:c.instructions+=1;goto B5dd4ce;
case 0x5dd4d3:goto L5dd4d3;
case 0x5dd4d7:c.instructions+=25;goto B5dd4d7;
case 0x5dd4db:c.instructions+=24;goto B5dd4db;
case 0x5dd4df:c.instructions+=23;goto B5dd4df;
case 0x5dd4e3:c.instructions+=22;goto B5dd4e3;
case 0x5dd4e5:c.instructions+=21;goto B5dd4e5;
case 0x5dd4e9:c.instructions+=20;goto B5dd4e9;
case 0x5dd4ed:c.instructions+=19;goto B5dd4ed;
case 0x5dd4f0:c.instructions+=18;goto B5dd4f0;
case 0x5dd4f3:c.instructions+=17;goto B5dd4f3;
case 0x5dd4f7:c.instructions+=16;goto B5dd4f7;
case 0x5dd4f9:c.instructions+=15;goto B5dd4f9;
case 0x5dd4fd:c.instructions+=14;goto B5dd4fd;
case 0x5dd501:c.instructions+=13;goto B5dd501;
case 0x5dd505:c.instructions+=12;goto B5dd505;
case 0x5dd508:c.instructions+=11;goto B5dd508;
case 0x5dd509:c.instructions+=10;goto B5dd509;
case 0x5dd50d:c.instructions+=9;goto B5dd50d;
case 0x5dd513:c.instructions+=8;goto B5dd513;
case 0x5dd517:c.instructions+=7;goto B5dd517;
case 0x5dd518:c.instructions+=6;goto B5dd518;
case 0x5dd51c:c.instructions+=5;goto B5dd51c;
case 0x5dd51e:c.instructions+=4;goto B5dd51e;
case 0x5dd51f:c.instructions+=3;goto B5dd51f;
case 0x5dd523:c.instructions+=2;goto B5dd523;
case 0x5dd524:c.instructions+=1;goto B5dd524;
case 0x5dd529:goto L5dd529;
case 0x5dd52c:c.instructions+=6;goto B5dd52c;
case 0x5dd52d:c.instructions+=5;goto B5dd52d;
case 0x5dd531:c.instructions+=4;goto B5dd531;
case 0x5dd532:c.instructions+=3;goto B5dd532;
case 0x5dd533:c.instructions+=2;goto B5dd533;
case 0x5dd534:c.instructions+=1;goto B5dd534;
case 0x5dd539:goto L5dd539;
case 0x5dd53c:c.instructions+=4;goto B5dd53c;
case 0x5dd53d:c.instructions+=3;goto B5dd53d;
case 0x5dd53f:c.instructions+=2;goto B5dd53f;
case 0x5dd540:c.instructions+=1;goto B5dd540;
case 0x5dd550:goto L5dd550;
case 0x5dd551:c.instructions+=10;goto B5dd551;
case 0x5dd555:c.instructions+=9;goto B5dd555;
case 0x5dd556:c.instructions+=8;goto B5dd556;
case 0x5dd558:c.instructions+=7;goto B5dd558;
case 0x5dd55a:c.instructions+=6;goto B5dd55a;
case 0x5dd55e:c.instructions+=5;goto B5dd55e;
case 0x5dd560:c.instructions+=4;goto B5dd560;
case 0x5dd561:c.instructions+=3;goto B5dd561;
case 0x5dd565:c.instructions+=2;goto B5dd565;
case 0x5dd567:c.instructions+=1;goto B5dd567;
case 0x5dd569:goto L5dd569;
case 0x5dd56d:c.instructions+=2;goto B5dd56d;
case 0x5dd570:c.instructions+=1;goto B5dd570;
case 0x5dd572:goto L5dd572;
case 0x5dd573:c.instructions+=1;goto B5dd573;
case 0x5dd575:goto L5dd575;
case 0x5dd576:c.instructions+=1;goto B5dd576;
case 0x5dd578:goto L5dd578;
case 0x5dd57b:c.instructions+=2;goto B5dd57b;
case 0x5dd57e:c.instructions+=1;goto B5dd57e;
case 0x5dd580:goto L5dd580;
case 0x5dd583:c.instructions+=2;goto B5dd583;
case 0x5dd586:c.instructions+=1;goto B5dd586;
case 0x5dd588:goto L5dd588;
case 0x5dd58b:c.instructions+=1;goto B5dd58b;
case 0x5dd58e:goto L5dd58e;
case 0x5dd591:c.instructions+=2;goto B5dd591;
case 0x5dd593:c.instructions+=1;goto B5dd593;
case 0x5dd595:goto L5dd595;
case 0x5dd596:c.instructions+=4;goto B5dd596;
case 0x5dd598:c.instructions+=3;goto B5dd598;
case 0x5dd599:c.instructions+=2;goto B5dd599;
case 0x5dd59a:c.instructions+=1;goto B5dd59a;
case 0x5dd59d:goto L5dd59d;
case 0x5dd59e:c.instructions+=2;goto B5dd59e;
case 0x5dd59f:c.instructions+=1;goto B5dd59f;
case 0x5dd5a1:goto L5dd5a1;
case 0x5dd5a5:c.instructions+=3;goto B5dd5a5;
case 0x5dd5a7:c.instructions+=2;goto B5dd5a7;
case 0x5dd5ac:c.instructions+=1;goto B5dd5ac;
case 0x5dd5ae:goto L5dd5ae;
case 0x5dd5b4:c.instructions+=1;goto B5dd5b4;
case 0x5dd5b6:goto L5dd5b6;
case 0x5dd5bb:goto L5dd5bb;
case 0x5dd5bf:c.instructions+=2;goto B5dd5bf;
case 0x5dd5c4:c.instructions+=1;goto B5dd5c4;
case 0x5dd5c6:goto L5dd5c6;
case 0x5dd5cc:c.instructions+=1;goto B5dd5cc;
case 0x5dd5ce:goto L5dd5ce;
case 0x5dd5cf:goto L5dd5cf;
case 0x5dd5d1:c.instructions+=1;goto B5dd5d1;
case 0x5dd5d7:goto L5dd5d7;
case 0x5dd5d8:c.instructions+=2;goto B5dd5d8;
case 0x5dd5da:c.instructions+=1;goto B5dd5da;
case 0x5dd5df:goto L5dd5df;
case 0x5dd5e1:c.instructions+=7;goto B5dd5e1;
case 0x5dd5e4:c.instructions+=6;goto B5dd5e4;
case 0x5dd5e8:c.instructions+=5;goto B5dd5e8;
case 0x5dd5ea:c.instructions+=4;goto B5dd5ea;
case 0x5dd5ed:c.instructions+=3;goto B5dd5ed;
case 0x5dd5f0:c.instructions+=2;goto B5dd5f0;
case 0x5dd5f2:c.instructions+=1;goto B5dd5f2;
case 0x5dd5f4:goto L5dd5f4;
case 0x5dd5f8:c.instructions+=3;goto B5dd5f8;
case 0x5dd5fa:c.instructions+=2;goto B5dd5fa;
case 0x5dd5fd:c.instructions+=1;goto B5dd5fd;
case 0x5dd5ff:goto L5dd5ff;
case 0x5dd600:c.instructions+=1;goto B5dd600;
case 0x5dd602:goto L5dd602;
case 0x5dd603:c.instructions+=1;goto B5dd603;
case 0x5dd605:goto L5dd605;
case 0x5dd607:c.instructions+=3;goto B5dd607;
case 0x5dd60a:c.instructions+=2;goto B5dd60a;
case 0x5dd60d:c.instructions+=1;goto B5dd60d;
case 0x5dd60f:goto L5dd60f;
case 0x5dd612:c.instructions+=1;goto B5dd612;
case 0x5dd614:goto L5dd614;
case 0x5dd617:c.instructions+=4;goto B5dd617;
case 0x5dd619:c.instructions+=3;goto B5dd619;
case 0x5dd61c:c.instructions+=2;goto B5dd61c;
case 0x5dd61f:c.instructions+=1;goto B5dd61f;
case 0x5dd621:goto L5dd621;
case 0x5dd625:c.instructions+=1;goto B5dd625;
case 0x5dd627:goto L5dd627;
case 0x5dd629:c.instructions+=2;goto B5dd629;
case 0x5dd62c:c.instructions+=1;goto B5dd62c;
case 0x5dd62e:goto L5dd62e;
case 0x5dd630:goto L5dd630;
case 0x5dd633:c.instructions+=4;goto B5dd633;
case 0x5dd636:c.instructions+=3;goto B5dd636;
case 0x5dd639:c.instructions+=2;goto B5dd639;
case 0x5dd63b:c.instructions+=1;goto B5dd63b;
case 0x5dd63d:goto L5dd63d;
case 0x5dd641:c.instructions+=2;goto B5dd641;
case 0x5dd643:c.instructions+=1;goto B5dd643;
case 0x5dd645:goto L5dd645;
case 0x5dd647:c.instructions+=2;goto B5dd647;
case 0x5dd64a:c.instructions+=1;goto B5dd64a;
case 0x5dd64c:goto L5dd64c;
case 0x5dd64d:c.instructions+=1;goto B5dd64d;
case 0x5dd64f:goto L5dd64f;
case 0x5dd650:c.instructions+=1;goto B5dd650;
case 0x5dd652:goto L5dd652;
case 0x5dd654:goto L5dd654;
case 0x5dd657:goto L5dd657;
case 0x5dd65a:c.instructions+=2;goto B5dd65a;
case 0x5dd65c:c.instructions+=1;goto B5dd65c;
case 0x5dd65e:goto L5dd65e;
case 0x5dd65f:c.instructions+=1;goto B5dd65f;
case 0x5dd664:goto L5dd664;
case 0x5dd668:goto L5dd668;
case 0x5dd66b:c.instructions+=1;goto B5dd66b;
case 0x5dd66d:goto L5dd66d;
case 0x5dd671:c.instructions+=1;goto B5dd671;
case 0x5dd673:goto L5dd673;
case 0x5dd677:goto L5dd677;
case 0x5dd67a:c.instructions+=2;goto B5dd67a;
case 0x5dd67c:c.instructions+=1;goto B5dd67c;
case 0x5dd67e:goto L5dd67e;
case 0x5dd685:c.instructions+=1;goto B5dd685;
case 0x5dd687:goto L5dd687;
case 0x5dd689:goto L5dd689;
case 0x5dd68c:c.instructions+=5;goto B5dd68c;
case 0x5dd68f:c.instructions+=4;goto B5dd68f;
case 0x5dd692:c.instructions+=3;goto B5dd692;
case 0x5dd695:c.instructions+=2;goto B5dd695;
case 0x5dd69c:c.instructions+=1;goto B5dd69c;
case 0x5dd69e:goto L5dd69e;
case 0x5dd6a2:c.instructions+=5;goto B5dd6a2;
case 0x5dd6a6:c.instructions+=4;goto B5dd6a6;
case 0x5dd6a8:c.instructions+=3;goto B5dd6a8;
case 0x5dd6ab:c.instructions+=2;goto B5dd6ab;
case 0x5dd6af:c.instructions+=1;goto B5dd6af;
case 0x5dd6b1:goto L5dd6b1;
case 0x5dd6b3:c.instructions+=1;goto B5dd6b3;
case 0x5dd6b9:goto L5dd6b9;
case 0x5dd6bb:c.instructions+=1;goto B5dd6bb;
case 0x5dd6bd:goto L5dd6bd;
case 0x5dd6c0:c.instructions+=3;goto B5dd6c0;
case 0x5dd6c6:c.instructions+=2;goto B5dd6c6;
case 0x5dd6cd:c.instructions+=1;goto B5dd6cd;
case 0x5dd6cf:goto L5dd6cf;
case 0x5dd6d1:goto L5dd6d1;
case 0x5dd6d5:c.instructions+=5;goto B5dd6d5;
case 0x5dd6d7:c.instructions+=4;goto B5dd6d7;
case 0x5dd6dd:c.instructions+=3;goto B5dd6dd;
case 0x5dd6df:c.instructions+=2;goto B5dd6df;
case 0x5dd6e4:c.instructions+=1;goto B5dd6e4;
case 0x5dd6e6:goto L5dd6e6;
case 0x5dd6e8:c.instructions+=9;goto B5dd6e8;
case 0x5dd6ea:c.instructions+=8;goto B5dd6ea;
case 0x5dd6ed:c.instructions+=7;goto B5dd6ed;
case 0x5dd6ef:c.instructions+=6;goto B5dd6ef;
case 0x5dd6f2:c.instructions+=5;goto B5dd6f2;
case 0x5dd6f4:c.instructions+=4;goto B5dd6f4;
case 0x5dd6f8:c.instructions+=3;goto B5dd6f8;
case 0x5dd6fb:c.instructions+=2;goto B5dd6fb;
case 0x5dd6fd:c.instructions+=1;goto B5dd6fd;
case 0x5dd6ff:goto L5dd6ff;
case 0x5dd702:c.instructions+=2;goto B5dd702;
case 0x5dd709:c.instructions+=1;goto B5dd709;
case 0x5dd70b:goto L5dd70b;
case 0x5dd70d:c.instructions+=6;goto B5dd70d;
case 0x5dd70f:c.instructions+=5;goto B5dd70f;
case 0x5dd712:c.instructions+=4;goto B5dd712;
case 0x5dd714:c.instructions+=3;goto B5dd714;
case 0x5dd717:c.instructions+=2;goto B5dd717;
case 0x5dd719:c.instructions+=1;goto B5dd719;
case 0x5dd71b:goto L5dd71b;
case 0x5dd71e:c.instructions+=1;goto B5dd71e;
case 0x5dd722:goto L5dd722;
case 0x5dd724:c.instructions+=1;goto B5dd724;
case 0x5dd726:goto L5dd726;
case 0x5dd72a:c.instructions+=2;goto B5dd72a;
case 0x5dd72c:c.instructions+=1;goto B5dd72c;
case 0x5dd72e:goto L5dd72e;
case 0x5dd732:c.instructions+=2;goto B5dd732;
case 0x5dd735:c.instructions+=1;goto B5dd735;
case 0x5dd737:goto L5dd737;
case 0x5dd738:c.instructions+=1;goto B5dd738;
case 0x5dd73a:goto L5dd73a;
case 0x5dd73b:c.instructions+=1;goto B5dd73b;
case 0x5dd73d:goto L5dd73d;
case 0x5dd740:c.instructions+=2;goto B5dd740;
case 0x5dd743:c.instructions+=1;goto B5dd743;
case 0x5dd745:goto L5dd745;
case 0x5dd748:c.instructions+=2;goto B5dd748;
case 0x5dd74b:c.instructions+=1;goto B5dd74b;
case 0x5dd74d:goto L5dd74d;
case 0x5dd750:c.instructions+=1;goto B5dd750;
case 0x5dd753:goto L5dd753;
case 0x5dd756:c.instructions+=2;goto B5dd756;
case 0x5dd758:c.instructions+=1;goto B5dd758;
case 0x5dd75a:goto L5dd75a;
case 0x5dd75b:c.instructions+=6;goto B5dd75b;
case 0x5dd75c:c.instructions+=5;goto B5dd75c;
case 0x5dd75d:c.instructions+=4;goto B5dd75d;
case 0x5dd75f:c.instructions+=3;goto B5dd75f;
case 0x5dd760:c.instructions+=2;goto B5dd760;
case 0x5dd761:c.instructions+=1;goto B5dd761;
case 0x5dd764:goto L5dd764;
case 0x5dd766:goto L5dd766;
case 0x5dd767:c.instructions+=5;goto B5dd767;
case 0x5dd768:c.instructions+=4;goto B5dd768;
case 0x5dd769:c.instructions+=3;goto B5dd769;
case 0x5dd76a:c.instructions+=2;goto B5dd76a;
case 0x5dd76b:c.instructions+=1;goto B5dd76b;
case 0x5dd770:goto L5dd770;
case 0x5dd774:c.instructions+=2;goto B5dd774;
case 0x5dd777:c.instructions+=1;goto B5dd777;
case 0x5dd779:goto L5dd779;
case 0x5dd77a:c.instructions+=1;goto B5dd77a;
case 0x5dd77c:goto L5dd77c;
case 0x5dd77d:c.instructions+=1;goto B5dd77d;
case 0x5dd77f:goto L5dd77f;
case 0x5dd781:c.instructions+=1;goto B5dd781;
case 0x5dd784:goto L5dd784;
case 0x5dd788:c.instructions+=3;goto B5dd788;
case 0x5dd78a:c.instructions+=2;goto B5dd78a;
case 0x5dd78d:c.instructions+=1;goto B5dd78d;
case 0x5dd78f:goto L5dd78f;
case 0x5dd792:c.instructions+=2;goto B5dd792;
case 0x5dd795:c.instructions+=1;goto B5dd795;
case 0x5dd798:goto L5dd798;
case 0x5dd79b:c.instructions+=2;goto B5dd79b;
case 0x5dd79e:c.instructions+=1;goto B5dd79e;
case 0x5dd7a1:goto L5dd7a1;
case 0x5dd7a5:c.instructions+=3;goto B5dd7a5;
case 0x5dd7a7:c.instructions+=2;goto B5dd7a7;
case 0x5dd7aa:c.instructions+=1;goto B5dd7aa;
case 0x5dd7ac:goto L5dd7ac;
case 0x5dd7af:c.instructions+=2;goto B5dd7af;
case 0x5dd7b2:c.instructions+=1;goto B5dd7b2;
case 0x5dd7b5:goto L5dd7b5;
case 0x5dd7b8:c.instructions+=2;goto B5dd7b8;
case 0x5dd7bb:c.instructions+=1;goto B5dd7bb;
case 0x5dd7be:goto L5dd7be;
case 0x5dd7c2:c.instructions+=3;goto B5dd7c2;
case 0x5dd7c4:c.instructions+=2;goto B5dd7c4;
case 0x5dd7c7:c.instructions+=1;goto B5dd7c7;
case 0x5dd7c9:goto L5dd7c9;
case 0x5dd7cc:c.instructions+=2;goto B5dd7cc;
case 0x5dd7cf:c.instructions+=1;goto B5dd7cf;
case 0x5dd7d2:goto L5dd7d2;
case 0x5dd7d5:c.instructions+=2;goto B5dd7d5;
case 0x5dd7d8:c.instructions+=1;goto B5dd7d8;
case 0x5dd7e0:goto L5dd7e0;
case 0x5dd7e3:c.instructions+=22;goto B5dd7e3;
case 0x5dd7e9:c.instructions+=21;goto B5dd7e9;
case 0x5dd7ea:c.instructions+=20;goto B5dd7ea;
case 0x5dd7f0:c.instructions+=19;goto B5dd7f0;
case 0x5dd7f1:c.instructions+=18;goto B5dd7f1;
case 0x5dd7f3:c.instructions+=17;goto B5dd7f3;
case 0x5dd7f4:c.instructions+=16;goto B5dd7f4;
case 0x5dd7f5:c.instructions+=15;goto B5dd7f5;
case 0x5dd7f7:c.instructions+=14;goto B5dd7f7;
case 0x5dd7fb:c.instructions+=13;goto B5dd7fb;
case 0x5dd7fd:c.instructions+=12;goto B5dd7fd;
case 0x5dd801:c.instructions+=11;goto B5dd801;
case 0x5dd803:c.instructions+=10;goto B5dd803;
case 0x5dd807:c.instructions+=9;goto B5dd807;
case 0x5dd809:c.instructions+=8;goto B5dd809;
case 0x5dd80d:c.instructions+=7;goto B5dd80d;
case 0x5dd811:c.instructions+=6;goto B5dd811;
case 0x5dd815:c.instructions+=5;goto B5dd815;
case 0x5dd819:c.instructions+=4;goto B5dd819;
case 0x5dd81b:c.instructions+=3;goto B5dd81b;
case 0x5dd81f:c.instructions+=2;goto B5dd81f;
case 0x5dd823:c.instructions+=1;goto B5dd823;
case 0x5dd828:goto L5dd828;
case 0x5dd82e:c.instructions+=14;goto B5dd82e;
case 0x5dd834:c.instructions+=13;goto B5dd834;
case 0x5dd838:c.instructions+=12;goto B5dd838;
case 0x5dd83c:c.instructions+=11;goto B5dd83c;
case 0x5dd83e:c.instructions+=10;goto B5dd83e;
case 0x5dd840:c.instructions+=9;goto B5dd840;
case 0x5dd844:c.instructions+=8;goto B5dd844;
case 0x5dd846:c.instructions+=7;goto B5dd846;
case 0x5dd848:c.instructions+=6;goto B5dd848;
case 0x5dd84a:c.instructions+=5;goto B5dd84a;
case 0x5dd84c:c.instructions+=4;goto B5dd84c;
case 0x5dd853:c.instructions+=3;goto B5dd853;
case 0x5dd855:c.instructions+=2;goto B5dd855;
case 0x5dd858:c.instructions+=1;goto B5dd858;
case 0x5dd85a:goto L5dd85a;
case 0x5dd85b:c.instructions+=5;goto B5dd85b;
case 0x5dd85c:c.instructions+=4;goto B5dd85c;
case 0x5dd860:c.instructions+=3;goto B5dd860;
case 0x5dd861:c.instructions+=2;goto B5dd861;
case 0x5dd866:c.instructions+=1;goto B5dd866;
case 0x5dd86b:goto L5dd86b;
case 0x5dd86e:c.instructions+=3;goto B5dd86e;
case 0x5dd870:c.instructions+=2;goto B5dd870;
case 0x5dd873:c.instructions+=1;goto B5dd873;
case 0x5dd875:goto L5dd875;
case 0x5dd876:c.instructions+=1;goto B5dd876;
case 0x5dd87b:goto L5dd87b;
case 0x5dd881:c.instructions+=4;goto B5dd881;
case 0x5dd884:c.instructions+=3;goto B5dd884;
case 0x5dd886:c.instructions+=2;goto B5dd886;
case 0x5dd888:c.instructions+=1;goto B5dd888;
case 0x5dd88a:goto L5dd88a;
case 0x5dd890:goto L5dd890;
case 0x5dd893:c.instructions+=1;goto B5dd893;
case 0x5dd895:goto L5dd895;
case 0x5dd896:c.instructions+=3;goto B5dd896;
case 0x5dd89c:c.instructions+=2;goto B5dd89c;
case 0x5dd89e:c.instructions+=1;goto B5dd89e;
case 0x5dd8a0:goto L5dd8a0;
case 0x5dd8a2:goto L5dd8a2;
case 0x5dd8a8:c.instructions+=1;goto B5dd8a8;
case 0x5dd8aa:goto L5dd8aa;
case 0x5dd8ab:c.instructions+=3;goto B5dd8ab;
case 0x5dd8ac:c.instructions+=2;goto B5dd8ac;
case 0x5dd8b0:c.instructions+=1;goto B5dd8b0;
case 0x5dd8b5:goto L5dd8b5;
case 0x5dd8b9:c.instructions+=23;goto B5dd8b9;
case 0x5dd8be:c.instructions+=22;goto B5dd8be;
case 0x5dd8c2:c.instructions+=21;goto B5dd8c2;
case 0x5dd8c6:c.instructions+=20;goto B5dd8c6;
case 0x5dd8ca:c.instructions+=19;goto B5dd8ca;
case 0x5dd8ce:c.instructions+=18;goto B5dd8ce;
case 0x5dd8d2:c.instructions+=17;goto B5dd8d2;
case 0x5dd8d4:c.instructions+=16;goto B5dd8d4;
case 0x5dd8d8:c.instructions+=15;goto B5dd8d8;
case 0x5dd8dc:c.instructions+=14;goto B5dd8dc;
case 0x5dd8de:c.instructions+=13;goto B5dd8de;
case 0x5dd8e0:c.instructions+=12;goto B5dd8e0;
case 0x5dd8e2:c.instructions+=11;goto B5dd8e2;
case 0x5dd8e4:c.instructions+=10;goto B5dd8e4;
case 0x5dd8e6:c.instructions+=9;goto B5dd8e6;
case 0x5dd8e8:c.instructions+=8;goto B5dd8e8;
case 0x5dd8ea:c.instructions+=7;goto B5dd8ea;
case 0x5dd8ec:c.instructions+=6;goto B5dd8ec;
case 0x5dd8f0:c.instructions+=5;goto B5dd8f0;
case 0x5dd8f4:c.instructions+=4;goto B5dd8f4;
case 0x5dd8f8:c.instructions+=3;goto B5dd8f8;
case 0x5dd8fa:c.instructions+=2;goto B5dd8fa;
case 0x5dd8fd:c.instructions+=1;goto B5dd8fd;
case 0x5dd8ff:goto L5dd8ff;
case 0x5dd901:c.instructions+=1;goto B5dd901;
case 0x5dd903:goto L5dd903;
case 0x5dd905:goto L5dd905;
case 0x5dd90a:c.instructions+=3;goto B5dd90a;
case 0x5dd90c:c.instructions+=2;goto B5dd90c;
case 0x5dd910:c.instructions+=1;goto B5dd910;
case 0x5dd912:goto L5dd912;
case 0x5dd916:c.instructions+=9;goto B5dd916;
case 0x5dd918:c.instructions+=8;goto B5dd918;
case 0x5dd91e:c.instructions+=7;goto B5dd91e;
case 0x5dd922:c.instructions+=6;goto B5dd922;
case 0x5dd926:c.instructions+=5;goto B5dd926;
case 0x5dd92a:c.instructions+=4;goto B5dd92a;
case 0x5dd92c:c.instructions+=3;goto B5dd92c;
case 0x5dd92e:c.instructions+=2;goto B5dd92e;
case 0x5dd931:c.instructions+=1;goto B5dd931;
case 0x5dd933:goto L5dd933;
case 0x5dd935:c.instructions+=1;goto B5dd935;
case 0x5dd939:goto L5dd939;
case 0x5dd93d:c.instructions+=4;goto B5dd93d;
case 0x5dd93f:c.instructions+=3;goto B5dd93f;
case 0x5dd941:c.instructions+=2;goto B5dd941;
case 0x5dd944:c.instructions+=1;goto B5dd944;
case 0x5dd946:goto L5dd946;
case 0x5dd948:c.instructions+=1;goto B5dd948;
case 0x5dd94c:goto L5dd94c;
case 0x5dd950:c.instructions+=5;goto B5dd950;
case 0x5dd952:c.instructions+=4;goto B5dd952;
case 0x5dd954:c.instructions+=3;goto B5dd954;
case 0x5dd956:c.instructions+=2;goto B5dd956;
case 0x5dd959:c.instructions+=1;goto B5dd959;
case 0x5dd95b:goto L5dd95b;
case 0x5dd960:c.instructions+=1;goto B5dd960;
case 0x5dd962:goto L5dd962;
case 0x5dd964:goto L5dd964;
case 0x5dd966:c.instructions+=1;goto B5dd966;
case 0x5dd96a:goto L5dd96a;
case 0x5dd96d:c.instructions+=10;goto B5dd96d;
case 0x5dd96f:c.instructions+=9;goto B5dd96f;
case 0x5dd971:c.instructions+=8;goto B5dd971;
case 0x5dd977:c.instructions+=7;goto B5dd977;
case 0x5dd97c:c.instructions+=6;goto B5dd97c;
case 0x5dd97e:c.instructions+=5;goto B5dd97e;
case 0x5dd981:c.instructions+=4;goto B5dd981;
case 0x5dd985:c.instructions+=3;goto B5dd985;
case 0x5dd988:c.instructions+=2;goto B5dd988;
case 0x5dd98e:c.instructions+=1;goto B5dd98e;
case 0x5dd990:goto L5dd990;
case 0x5dd994:c.instructions+=3;goto B5dd994;
case 0x5dd996:c.instructions+=2;goto B5dd996;
case 0x5dd99b:c.instructions+=1;goto B5dd99b;
case 0x5dd99d:goto L5dd99d;
case 0x5dd99f:c.instructions+=1;goto B5dd99f;
case 0x5dd9a1:goto L5dd9a1;
case 0x5dd9a6:goto L5dd9a6;
case 0x5dd9aa:c.instructions+=2;goto B5dd9aa;
case 0x5dd9af:c.instructions+=1;goto B5dd9af;
case 0x5dd9b1:goto L5dd9b1;
case 0x5dd9b3:c.instructions+=1;goto B5dd9b3;
case 0x5dd9b5:goto L5dd9b5;
case 0x5dd9b6:goto L5dd9b6;
case 0x5dd9b8:c.instructions+=1;goto B5dd9b8;
case 0x5dd9ba:goto L5dd9ba;
case 0x5dd9bc:c.instructions+=1;goto B5dd9bc;
case 0x5dd9be:goto L5dd9be;
case 0x5dd9bf:c.instructions+=2;goto B5dd9bf;
case 0x5dd9c1:c.instructions+=1;goto B5dd9c1;
case 0x5dd9c6:goto L5dd9c6;
case 0x5dd9c9:c.instructions+=3;goto B5dd9c9;
case 0x5dd9cc:c.instructions+=2;goto B5dd9cc;
case 0x5dd9cf:c.instructions+=1;goto B5dd9cf;
case 0x5dd9d1:goto L5dd9d1;
case 0x5dd9d3:c.instructions+=2;goto B5dd9d3;
case 0x5dd9d4:c.instructions+=1;goto B5dd9d4;
case 0x5dd9d6:goto L5dd9d6;
case 0x5dd9d8:c.instructions+=2;goto B5dd9d8;
case 0x5dd9d9:c.instructions+=1;goto B5dd9d9;
case 0x5dd9db:goto L5dd9db;
case 0x5dd9df:c.instructions+=5;goto B5dd9df;
case 0x5dd9e3:c.instructions+=4;goto B5dd9e3;
case 0x5dd9e7:c.instructions+=3;goto B5dd9e7;
case 0x5dd9e9:c.instructions+=2;goto B5dd9e9;
case 0x5dd9ec:c.instructions+=1;goto B5dd9ec;
case 0x5dd9ee:goto L5dd9ee;
case 0x5dd9f2:c.instructions+=1;goto B5dd9f2;
case 0x5dd9f6:goto L5dd9f6;
case 0x5dd9fa:c.instructions+=4;goto B5dd9fa;
case 0x5dd9fe:c.instructions+=3;goto B5dd9fe;
case 0x5dda00:c.instructions+=2;goto B5dda00;
case 0x5dda03:c.instructions+=1;goto B5dda03;
case 0x5dda05:goto L5dda05;
case 0x5dda09:c.instructions+=1;goto B5dda09;
case 0x5dda0d:goto L5dda0d;
case 0x5dda11:c.instructions+=6;goto B5dda11;
case 0x5dda16:c.instructions+=5;goto B5dda16;
case 0x5dda1a:c.instructions+=4;goto B5dda1a;
case 0x5dda1e:c.instructions+=3;goto B5dda1e;
case 0x5dda22:c.instructions+=2;goto B5dda22;
case 0x5dda26:c.instructions+=1;goto B5dda26;
case 0x5dda2c:goto L5dda2c;
case 0x5dda2e:c.instructions+=1;goto B5dda2e;
case 0x5dda34:goto L5dda34;
case 0x5dda35:c.instructions+=4;goto B5dda35;
case 0x5dda38:c.instructions+=3;goto B5dda38;
case 0x5dda39:c.instructions+=2;goto B5dda39;
case 0x5dda3e:c.instructions+=1;goto B5dda3e;
case 0x5dda43:goto L5dda43;
case 0x5dda4a:c.instructions+=3;goto B5dda4a;
case 0x5dda4c:c.instructions+=2;goto B5dda4c;
case 0x5dda4e:c.instructions+=1;goto B5dda4e;
case 0x5dda50:goto L5dda50;
case 0x5dda52:c.instructions+=1;goto B5dda52;
case 0x5dda54:goto L5dda54;
case 0x5dda57:c.instructions+=2;goto B5dda57;
case 0x5dda59:c.instructions+=1;goto B5dda59;
case 0x5dda5b:goto L5dda5b;
case 0x5dda5e:goto L5dda5e;
case 0x5dda61:c.instructions+=13;goto B5dda61;
case 0x5dda65:c.instructions+=12;goto B5dda65;
case 0x5dda69:c.instructions+=11;goto B5dda69;
case 0x5dda6b:c.instructions+=10;goto B5dda6b;
case 0x5dda6d:c.instructions+=9;goto B5dda6d;
case 0x5dda6f:c.instructions+=8;goto B5dda6f;
case 0x5dda73:c.instructions+=7;goto B5dda73;
case 0x5dda75:c.instructions+=6;goto B5dda75;
case 0x5dda77:c.instructions+=5;goto B5dda77;
case 0x5dda79:c.instructions+=4;goto B5dda79;
case 0x5dda7b:c.instructions+=3;goto B5dda7b;
case 0x5dda82:c.instructions+=2;goto B5dda82;
case 0x5dda84:c.instructions+=1;goto B5dda84;
case 0x5dda86:goto L5dda86;
case 0x5dda89:c.instructions+=1;goto B5dda89;
case 0x5dda8b:goto L5dda8b;
case 0x5dda8c:c.instructions+=4;goto B5dda8c;
case 0x5dda8d:c.instructions+=3;goto B5dda8d;
case 0x5dda91:c.instructions+=2;goto B5dda91;
case 0x5dda92:c.instructions+=1;goto B5dda92;
case 0x5dda94:goto L5dda94;
case 0x5dda97:c.instructions+=2;goto B5dda97;
case 0x5dda9b:c.instructions+=1;goto B5dda9b;
case 0x5dda9d:goto L5dda9d;
case 0x5dda9e:c.instructions+=3;goto B5dda9e;
case 0x5dda9f:c.instructions+=2;goto B5dda9f;
case 0x5ddaa3:c.instructions+=1;goto B5ddaa3;
case 0x5ddaa4:goto L5ddaa4;
case 0x5ddaa9:c.instructions+=1;goto B5ddaa9;
case 0x5ddaae:goto L5ddaae;
case 0x5ddab2:c.instructions+=16;goto B5ddab2;
case 0x5ddab6:c.instructions+=15;goto B5ddab6;
case 0x5ddaba:c.instructions+=14;goto B5ddaba;
case 0x5ddabe:c.instructions+=13;goto B5ddabe;
case 0x5ddac0:c.instructions+=12;goto B5ddac0;
case 0x5ddac2:c.instructions+=11;goto B5ddac2;
case 0x5ddac4:c.instructions+=10;goto B5ddac4;
case 0x5ddac6:c.instructions+=9;goto B5ddac6;
case 0x5ddac8:c.instructions+=8;goto B5ddac8;
case 0x5ddaca:c.instructions+=7;goto B5ddaca;
case 0x5ddacc:c.instructions+=6;goto B5ddacc;
case 0x5ddace:c.instructions+=5;goto B5ddace;
case 0x5ddad2:c.instructions+=4;goto B5ddad2;
case 0x5ddad4:c.instructions+=3;goto B5ddad4;
case 0x5ddad6:c.instructions+=2;goto B5ddad6;
case 0x5ddad9:c.instructions+=1;goto B5ddad9;
case 0x5ddadb:goto L5ddadb;
case 0x5ddadf:goto L5ddadf;
case 0x5ddae3:c.instructions+=3;goto B5ddae3;
case 0x5ddae5:c.instructions+=2;goto B5ddae5;
case 0x5ddae8:c.instructions+=1;goto B5ddae8;
case 0x5ddaea:goto L5ddaea;
case 0x5ddaec:c.instructions+=1;goto B5ddaec;
case 0x5ddaee:goto L5ddaee;
case 0x5ddaf0:goto L5ddaf0;
case 0x5ddaf5:c.instructions+=3;goto B5ddaf5;
case 0x5ddaf7:c.instructions+=2;goto B5ddaf7;
case 0x5ddafb:c.instructions+=1;goto B5ddafb;
case 0x5ddafd:goto L5ddafd;
case 0x5ddb01:c.instructions+=9;goto B5ddb01;
case 0x5ddb03:c.instructions+=8;goto B5ddb03;
case 0x5ddb09:c.instructions+=7;goto B5ddb09;
case 0x5ddb0d:c.instructions+=6;goto B5ddb0d;
case 0x5ddb11:c.instructions+=5;goto B5ddb11;
case 0x5ddb15:c.instructions+=4;goto B5ddb15;
case 0x5ddb17:c.instructions+=3;goto B5ddb17;
case 0x5ddb19:c.instructions+=2;goto B5ddb19;
case 0x5ddb1c:c.instructions+=1;goto B5ddb1c;
case 0x5ddb1e:goto L5ddb1e;
case 0x5ddb20:c.instructions+=1;goto B5ddb20;
case 0x5ddb24:goto L5ddb24;
case 0x5ddb28:c.instructions+=4;goto B5ddb28;
case 0x5ddb2a:c.instructions+=3;goto B5ddb2a;
case 0x5ddb2c:c.instructions+=2;goto B5ddb2c;
case 0x5ddb2f:c.instructions+=1;goto B5ddb2f;
case 0x5ddb31:goto L5ddb31;
case 0x5ddb33:c.instructions+=1;goto B5ddb33;
case 0x5ddb37:goto L5ddb37;
case 0x5ddb3b:c.instructions+=5;goto B5ddb3b;
case 0x5ddb3d:c.instructions+=4;goto B5ddb3d;
case 0x5ddb3f:c.instructions+=3;goto B5ddb3f;
case 0x5ddb41:c.instructions+=2;goto B5ddb41;
case 0x5ddb44:c.instructions+=1;goto B5ddb44;
case 0x5ddb46:goto L5ddb46;
case 0x5ddb4b:c.instructions+=1;goto B5ddb4b;
case 0x5ddb4d:goto L5ddb4d;
case 0x5ddb4f:goto L5ddb4f;
case 0x5ddb51:c.instructions+=1;goto B5ddb51;
case 0x5ddb55:goto L5ddb55;
case 0x5ddb59:c.instructions+=17;goto B5ddb59;
case 0x5ddb5c:c.instructions+=16;goto B5ddb5c;
case 0x5ddb60:c.instructions+=15;goto B5ddb60;
case 0x5ddb62:c.instructions+=14;goto B5ddb62;
case 0x5ddb64:c.instructions+=13;goto B5ddb64;
case 0x5ddb66:c.instructions+=12;goto B5ddb66;
case 0x5ddb68:c.instructions+=11;goto B5ddb68;
case 0x5ddb6c:c.instructions+=10;goto B5ddb6c;
case 0x5ddb6e:c.instructions+=9;goto B5ddb6e;
case 0x5ddb73:c.instructions+=8;goto B5ddb73;
case 0x5ddb79:c.instructions+=7;goto B5ddb79;
case 0x5ddb7b:c.instructions+=6;goto B5ddb7b;
case 0x5ddb7e:c.instructions+=5;goto B5ddb7e;
case 0x5ddb82:c.instructions+=4;goto B5ddb82;
case 0x5ddb85:c.instructions+=3;goto B5ddb85;
case 0x5ddb87:c.instructions+=2;goto B5ddb87;
case 0x5ddb8a:c.instructions+=1;goto B5ddb8a;
case 0x5ddb8c:goto L5ddb8c;
case 0x5ddb90:c.instructions+=3;goto B5ddb90;
case 0x5ddb93:c.instructions+=2;goto B5ddb93;
case 0x5ddb98:c.instructions+=1;goto B5ddb98;
case 0x5ddb9c:goto L5ddb9c;
case 0x5ddba1:c.instructions+=2;goto B5ddba1;
case 0x5ddba3:c.instructions+=1;goto B5ddba3;
case 0x5ddba5:goto L5ddba5;
case 0x5ddbab:c.instructions+=6;goto B5ddbab;
case 0x5ddbad:c.instructions+=5;goto B5ddbad;
case 0x5ddbaf:c.instructions+=4;goto B5ddbaf;
case 0x5ddbb1:c.instructions+=3;goto B5ddbb1;
case 0x5ddbb3:c.instructions+=2;goto B5ddbb3;
case 0x5ddbb6:c.instructions+=1;goto B5ddbb6;
case 0x5ddbb8:goto L5ddbb8;
case 0x5ddbbe:c.instructions+=1;goto B5ddbbe;
case 0x5ddbc0:goto L5ddbc0;
case 0x5ddbc6:c.instructions+=3;goto B5ddbc6;
case 0x5ddbc8:c.instructions+=2;goto B5ddbc8;
case 0x5ddbcb:c.instructions+=1;goto B5ddbcb;
case 0x5ddbcd:goto L5ddbcd;
case 0x5ddbd3:goto L5ddbd3;
case 0x5ddbd5:c.instructions+=1;goto B5ddbd5;
case 0x5ddbd7:goto L5ddbd7;
case 0x5ddbdd:c.instructions+=3;goto B5ddbdd;
case 0x5ddbdf:c.instructions+=2;goto B5ddbdf;
case 0x5ddbe2:c.instructions+=1;goto B5ddbe2;
case 0x5ddbe4:goto L5ddbe4;
case 0x5ddbe8:c.instructions+=1;goto B5ddbe8;
case 0x5ddbea:goto L5ddbea;
case 0x5ddbee:c.instructions+=1;goto B5ddbee;
case 0x5ddbf0:goto L5ddbf0;
case 0x5ddbf2:goto L5ddbf2;
case 0x5ddbf6:c.instructions+=7;goto B5ddbf6;
case 0x5ddbfa:c.instructions+=6;goto B5ddbfa;
case 0x5ddbfe:c.instructions+=5;goto B5ddbfe;
case 0x5ddc02:c.instructions+=4;goto B5ddc02;
case 0x5ddc06:c.instructions+=3;goto B5ddc06;
case 0x5ddc08:c.instructions+=2;goto B5ddc08;
case 0x5ddc0b:c.instructions+=1;goto B5ddc0b;
case 0x5ddc0d:goto L5ddc0d;
case 0x5ddc11:c.instructions+=1;goto B5ddc11;
case 0x5ddc15:goto L5ddc15;
case 0x5ddc19:c.instructions+=5;goto B5ddc19;
case 0x5ddc1d:c.instructions+=4;goto B5ddc1d;
case 0x5ddc1f:c.instructions+=3;goto B5ddc1f;
case 0x5ddc21:c.instructions+=2;goto B5ddc21;
case 0x5ddc24:c.instructions+=1;goto B5ddc24;
case 0x5ddc26:goto L5ddc26;
case 0x5ddc2a:c.instructions+=1;goto B5ddc2a;
case 0x5ddc2c:goto L5ddc2c;
case 0x5ddc32:c.instructions+=3;goto B5ddc32;
case 0x5ddc38:c.instructions+=2;goto B5ddc38;
case 0x5ddc3c:c.instructions+=1;goto B5ddc3c;
case 0x5ddc40:goto L5ddc40;
case 0x5ddc44:c.instructions+=4;goto B5ddc44;
case 0x5ddc47:c.instructions+=3;goto B5ddc47;
case 0x5ddc49:c.instructions+=2;goto B5ddc49;
case 0x5ddc4e:c.instructions+=1;goto B5ddc4e;
case 0x5ddc50:goto L5ddc50;
case 0x5ddc52:c.instructions+=1;goto B5ddc52;
case 0x5ddc54:goto L5ddc54;
case 0x5ddc59:goto L5ddc59;
case 0x5ddc5d:c.instructions+=2;goto B5ddc5d;
case 0x5ddc62:c.instructions+=1;goto B5ddc62;
case 0x5ddc64:goto L5ddc64;
case 0x5ddc66:c.instructions+=1;goto B5ddc66;
case 0x5ddc68:goto L5ddc68;
case 0x5ddc69:goto L5ddc69;
case 0x5ddc6d:c.instructions+=1;goto B5ddc6d;
case 0x5ddc6f:goto L5ddc6f;
case 0x5ddc73:c.instructions+=2;goto B5ddc73;
case 0x5ddc75:c.instructions+=1;goto B5ddc75;
case 0x5ddc77:goto L5ddc77;
case 0x5ddc79:c.instructions+=2;goto B5ddc79;
case 0x5ddc7b:c.instructions+=1;goto B5ddc7b;
case 0x5ddc80:goto L5ddc80;
case 0x5ddc83:c.instructions+=2;goto B5ddc83;
case 0x5ddc88:c.instructions+=1;goto B5ddc88;
case 0x5ddc8a:goto L5ddc8a;
case 0x5ddc8c:c.instructions+=1;goto B5ddc8c;
case 0x5ddc8e:goto L5ddc8e;
case 0x5ddc92:c.instructions+=1;goto B5ddc92;
case 0x5ddc94:goto L5ddc94;
case 0x5ddc95:goto L5ddc95;
case 0x5ddc96:c.instructions+=3;goto B5ddc96;
case 0x5ddc99:c.instructions+=2;goto B5ddc99;
case 0x5ddc9c:c.instructions+=1;goto B5ddc9c;
case 0x5ddc9e:goto L5ddc9e;
case 0x5ddca0:goto L5ddca0;
case 0x5ddca3:c.instructions+=4;goto B5ddca3;
case 0x5ddca6:c.instructions+=3;goto B5ddca6;
case 0x5ddca9:c.instructions+=2;goto B5ddca9;
case 0x5ddcae:c.instructions+=1;goto B5ddcae;
case 0x5ddcb0:goto L5ddcb0;
case 0x5ddcb5:goto L5ddcb5;
case 0x5ddcb9:c.instructions+=1;goto B5ddcb9;
case 0x5ddcbb:goto L5ddcbb;
case 0x5ddcbe:c.instructions+=2;goto B5ddcbe;
case 0x5ddcc0:c.instructions+=1;goto B5ddcc0;
case 0x5ddcc2:goto L5ddcc2;
case 0x5ddcc6:c.instructions+=7;goto B5ddcc6;
case 0x5ddcca:c.instructions+=6;goto B5ddcca;
case 0x5ddcce:c.instructions+=5;goto B5ddcce;
case 0x5ddccf:c.instructions+=4;goto B5ddccf;
case 0x5ddcd2:c.instructions+=3;goto B5ddcd2;
case 0x5ddcd4:c.instructions+=2;goto B5ddcd4;
case 0x5ddcd8:c.instructions+=1;goto B5ddcd8;
case 0x5ddcde:goto L5ddcde;
case 0x5ddce2:c.instructions+=2;goto B5ddce2;
case 0x5ddce4:c.instructions+=1;goto B5ddce4;
case 0x5ddce6:goto L5ddce6;
case 0x5ddcea:c.instructions+=4;goto B5ddcea;
case 0x5ddcee:c.instructions+=3;goto B5ddcee;
case 0x5ddcf0:c.instructions+=2;goto B5ddcf0;
case 0x5ddcf3:c.instructions+=1;goto B5ddcf3;
case 0x5ddcf5:goto L5ddcf5;
case 0x5ddcf9:c.instructions+=1;goto B5ddcf9;
case 0x5ddcfb:goto L5ddcfb;
case 0x5ddcff:goto L5ddcff;
case 0x5ddd03:c.instructions+=6;goto B5ddd03;
case 0x5ddd06:c.instructions+=5;goto B5ddd06;
case 0x5ddd0a:c.instructions+=4;goto B5ddd0a;
case 0x5ddd0e:c.instructions+=3;goto B5ddd0e;
case 0x5ddd10:c.instructions+=2;goto B5ddd10;
case 0x5ddd13:c.instructions+=1;goto B5ddd13;
case 0x5ddd15:goto L5ddd15;
case 0x5ddd19:c.instructions+=2;goto B5ddd19;
case 0x5ddd1c:c.instructions+=1;goto B5ddd1c;
case 0x5ddd1e:goto L5ddd1e;
case 0x5ddd22:c.instructions+=2;goto B5ddd22;
case 0x5ddd25:c.instructions+=1;goto B5ddd25;
case 0x5ddd27:goto L5ddd27;
case 0x5ddd2b:c.instructions+=4;goto B5ddd2b;
case 0x5ddd2f:c.instructions+=3;goto B5ddd2f;
case 0x5ddd33:c.instructions+=2;goto B5ddd33;
case 0x5ddd36:c.instructions+=1;goto B5ddd36;
case 0x5ddd39:goto L5ddd39;
case 0x5ddd3c:c.instructions+=2;goto B5ddd3c;
case 0x5ddd3e:c.instructions+=1;goto B5ddd3e;
case 0x5ddd40:goto L5ddd40;
case 0x5ddd44:c.instructions+=16;goto B5ddd44;
case 0x5ddd48:c.instructions+=15;goto B5ddd48;
case 0x5ddd4b:c.instructions+=14;goto B5ddd4b;
case 0x5ddd4d:c.instructions+=13;goto B5ddd4d;
case 0x5ddd4f:c.instructions+=12;goto B5ddd4f;
case 0x5ddd52:c.instructions+=11;goto B5ddd52;
case 0x5ddd54:c.instructions+=10;goto B5ddd54;
case 0x5ddd56:c.instructions+=9;goto B5ddd56;
case 0x5ddd59:c.instructions+=8;goto B5ddd59;
case 0x5ddd5b:c.instructions+=7;goto B5ddd5b;
case 0x5ddd5d:c.instructions+=6;goto B5ddd5d;
case 0x5ddd60:c.instructions+=5;goto B5ddd60;
case 0x5ddd62:c.instructions+=4;goto B5ddd62;
case 0x5ddd69:c.instructions+=3;goto B5ddd69;
case 0x5ddd6b:c.instructions+=2;goto B5ddd6b;
case 0x5ddd6e:c.instructions+=1;goto B5ddd6e;
case 0x5ddd70:goto L5ddd70;
case 0x5ddd72:c.instructions+=1;goto B5ddd72;
case 0x5ddd74:goto L5ddd74;
case 0x5ddd76:goto L5ddd76;
case 0x5ddd78:c.instructions+=4;goto B5ddd78;
case 0x5ddd7a:c.instructions+=3;goto B5ddd7a;
case 0x5ddd7d:c.instructions+=2;goto B5ddd7d;
case 0x5ddd7f:c.instructions+=1;goto B5ddd7f;
case 0x5ddd81:goto L5ddd81;
case 0x5ddd85:c.instructions+=2;goto B5ddd85;
case 0x5ddd87:c.instructions+=1;goto B5ddd87;
case 0x5ddd89:goto L5ddd89;
case 0x5ddd8e:c.instructions+=1;goto B5ddd8e;
case 0x5ddd90:goto L5ddd90;
case 0x5ddd92:goto L5ddd92;
case 0x5ddd94:c.instructions+=8;goto B5ddd94;
case 0x5ddd96:c.instructions+=7;goto B5ddd96;
case 0x5ddd99:c.instructions+=6;goto B5ddd99;
case 0x5ddd9b:c.instructions+=5;goto B5ddd9b;
case 0x5ddda0:c.instructions+=4;goto B5ddda0;
case 0x5ddda6:c.instructions+=3;goto B5ddda6;
case 0x5ddda8:c.instructions+=2;goto B5ddda8;
case 0x5dddab:c.instructions+=1;goto B5dddab;
case 0x5dddad:goto L5dddad;
case 0x5dddb4:c.instructions+=2;goto B5dddb4;
case 0x5dddb6:c.instructions+=1;goto B5dddb6;
case 0x5dddb8:goto L5dddb8;
case 0x5dddbb:goto L5dddbb;
case 0x5dddbf:c.instructions+=1;goto B5dddbf;
case 0x5dddc4:goto L5dddc4;
case 0x5dddc8:c.instructions+=6;goto B5dddc8;
case 0x5dddc9:c.instructions+=5;goto B5dddc9;
case 0x5dddca:c.instructions+=4;goto B5dddca;
case 0x5dddcb:c.instructions+=3;goto B5dddcb;
case 0x5dddcc:c.instructions+=2;goto B5dddcc;
case 0x5dddcf:c.instructions+=1;goto B5dddcf;
case 0x5ddde0:goto L5ddde0;
case 0x5ddde3:c.instructions+=23;goto B5ddde3;
case 0x5ddde7:c.instructions+=22;goto B5ddde7;
case 0x5dddea:c.instructions+=21;goto B5dddea;
case 0x5ddded:c.instructions+=20;goto B5ddded;
case 0x5dddf1:c.instructions+=19;goto B5dddf1;
case 0x5dddf5:c.instructions+=18;goto B5dddf5;
case 0x5dddf9:c.instructions+=17;goto B5dddf9;
case 0x5dddfb:c.instructions+=16;goto B5dddfb;
case 0x5dddfd:c.instructions+=15;goto B5dddfd;
case 0x5dde02:c.instructions+=14;goto B5dde02;
case 0x5dde05:c.instructions+=13;goto B5dde05;
case 0x5dde09:c.instructions+=12;goto B5dde09;
case 0x5dde0a:c.instructions+=11;goto B5dde0a;
case 0x5dde0b:c.instructions+=10;goto B5dde0b;
case 0x5dde0f:c.instructions+=9;goto B5dde0f;
case 0x5dde10:c.instructions+=8;goto B5dde10;
case 0x5dde13:c.instructions+=7;goto B5dde13;
case 0x5dde15:c.instructions+=6;goto B5dde15;
case 0x5dde16:c.instructions+=5;goto B5dde16;
case 0x5dde1c:c.instructions+=4;goto B5dde1c;
case 0x5dde24:c.instructions+=3;goto B5dde24;
case 0x5dde27:c.instructions+=2;goto B5dde27;
case 0x5dde2b:c.instructions+=1;goto B5dde2b;
case 0x5dde2d:goto L5dde2d;
case 0x5dde31:c.instructions+=8;goto B5dde31;
case 0x5dde33:c.instructions+=7;goto B5dde33;
case 0x5dde36:c.instructions+=6;goto B5dde36;
case 0x5dde37:c.instructions+=5;goto B5dde37;
case 0x5dde38:c.instructions+=4;goto B5dde38;
case 0x5dde39:c.instructions+=3;goto B5dde39;
case 0x5dde3a:c.instructions+=2;goto B5dde3a;
case 0x5dde3d:c.instructions+=1;goto B5dde3d;
case 0x5dde40:goto L5dde40;
case 0x5dde44:goto L5dde44;
case 0x5dde48:c.instructions+=4;goto B5dde48;
case 0x5dde4c:c.instructions+=3;goto B5dde4c;
case 0x5dde4e:c.instructions+=2;goto B5dde4e;
case 0x5dde51:c.instructions+=1;goto B5dde51;
case 0x5dde57:goto L5dde57;
case 0x5dde59:c.instructions+=12;goto B5dde59;
case 0x5dde5b:c.instructions+=11;goto B5dde5b;
case 0x5dde5e:c.instructions+=10;goto B5dde5e;
case 0x5dde63:c.instructions+=9;goto B5dde63;
case 0x5dde66:c.instructions+=8;goto B5dde66;
case 0x5dde6a:c.instructions+=7;goto B5dde6a;
case 0x5dde6d:c.instructions+=6;goto B5dde6d;
case 0x5dde6e:c.instructions+=5;goto B5dde6e;
case 0x5dde72:c.instructions+=4;goto B5dde72;
case 0x5dde73:c.instructions+=3;goto B5dde73;
case 0x5dde79:c.instructions+=2;goto B5dde79;
case 0x5dde7d:c.instructions+=1;goto B5dde7d;
case 0x5dde82:goto L5dde82;
case 0x5dde86:c.instructions+=13;goto B5dde86;
case 0x5dde8a:c.instructions+=12;goto B5dde8a;
case 0x5dde8e:c.instructions+=11;goto B5dde8e;
case 0x5dde90:c.instructions+=10;goto B5dde90;
case 0x5dde96:c.instructions+=9;goto B5dde96;
case 0x5dde9c:c.instructions+=8;goto B5dde9c;
case 0x5dde9f:c.instructions+=7;goto B5dde9f;
case 0x5ddea1:c.instructions+=6;goto B5ddea1;
case 0x5ddea5:c.instructions+=5;goto B5ddea5;
case 0x5ddea7:c.instructions+=4;goto B5ddea7;
case 0x5ddeab:c.instructions+=3;goto B5ddeab;
case 0x5ddead:c.instructions+=2;goto B5ddead;
case 0x5ddeb1:c.instructions+=1;goto B5ddeb1;
case 0x5ddeb5:goto L5ddeb5;
case 0x5ddeb9:c.instructions+=3;goto B5ddeb9;
case 0x5ddebb:c.instructions+=2;goto B5ddebb;
case 0x5ddec0:c.instructions+=1;goto B5ddec0;
case 0x5ddec2:goto L5ddec2;
case 0x5ddec4:c.instructions+=1;goto B5ddec4;
case 0x5ddec6:goto L5ddec6;
case 0x5ddecb:goto L5ddecb;
case 0x5ddecf:c.instructions+=2;goto B5ddecf;
case 0x5dded4:c.instructions+=1;goto B5dded4;
case 0x5dded6:goto L5dded6;
case 0x5dded8:c.instructions+=1;goto B5dded8;
case 0x5ddeda:goto L5ddeda;
case 0x5ddedb:goto L5ddedb;
case 0x5ddedd:c.instructions+=1;goto B5ddedd;
case 0x5ddee3:goto L5ddee3;
case 0x5ddee4:c.instructions+=2;goto B5ddee4;
case 0x5ddee6:c.instructions+=1;goto B5ddee6;
case 0x5ddeeb:goto L5ddeeb;
case 0x5ddeee:c.instructions+=4;goto B5ddeee;
case 0x5ddef0:c.instructions+=3;goto B5ddef0;
case 0x5ddef3:c.instructions+=2;goto B5ddef3;
case 0x5ddef6:c.instructions+=1;goto B5ddef6;
case 0x5ddef8:goto L5ddef8;
case 0x5ddefa:c.instructions+=3;goto B5ddefa;
case 0x5ddefd:c.instructions+=2;goto B5ddefd;
case 0x5ddf00:c.instructions+=1;goto B5ddf00;
case 0x5ddf02:goto L5ddf02;
case 0x5ddf05:c.instructions+=6;goto B5ddf05;
case 0x5ddf08:c.instructions+=5;goto B5ddf08;
case 0x5ddf0b:c.instructions+=4;goto B5ddf0b;
case 0x5ddf0d:c.instructions+=3;goto B5ddf0d;
case 0x5ddf10:c.instructions+=2;goto B5ddf10;
case 0x5ddf12:c.instructions+=1;goto B5ddf12;
case 0x5ddf14:goto L5ddf14;
case 0x5ddf15:c.instructions+=1;goto B5ddf15;
case 0x5ddf17:goto L5ddf17;
case 0x5ddf1a:c.instructions+=9;goto B5ddf1a;
case 0x5ddf1c:c.instructions+=8;goto B5ddf1c;
case 0x5ddf1e:c.instructions+=7;goto B5ddf1e;
case 0x5ddf21:c.instructions+=6;goto B5ddf21;
case 0x5ddf24:c.instructions+=5;goto B5ddf24;
case 0x5ddf26:c.instructions+=4;goto B5ddf26;
case 0x5ddf29:c.instructions+=3;goto B5ddf29;
case 0x5ddf2c:c.instructions+=2;goto B5ddf2c;
case 0x5ddf2f:c.instructions+=1;goto B5ddf2f;
case 0x5ddf31:goto L5ddf31;
case 0x5ddf35:c.instructions+=1;goto B5ddf35;
case 0x5ddf37:goto L5ddf37;
case 0x5ddf3b:goto L5ddf3b;
case 0x5ddf3e:c.instructions+=1;goto B5ddf3e;
case 0x5ddf40:goto L5ddf40;
case 0x5ddf44:c.instructions+=1;goto B5ddf44;
case 0x5ddf46:goto L5ddf46;
case 0x5ddf4a:goto L5ddf4a;
case 0x5ddf50:c.instructions+=14;goto B5ddf50;
case 0x5ddf53:c.instructions+=13;goto B5ddf53;
case 0x5ddf57:c.instructions+=12;goto B5ddf57;
case 0x5ddf5b:c.instructions+=11;goto B5ddf5b;
case 0x5ddf5e:c.instructions+=10;goto B5ddf5e;
case 0x5ddf61:c.instructions+=9;goto B5ddf61;
case 0x5ddf65:c.instructions+=8;goto B5ddf65;
case 0x5ddf67:c.instructions+=7;goto B5ddf67;
case 0x5ddf6d:c.instructions+=6;goto B5ddf6d;
case 0x5ddf70:c.instructions+=5;goto B5ddf70;
case 0x5ddf74:c.instructions+=4;goto B5ddf74;
case 0x5ddf77:c.instructions+=3;goto B5ddf77;
case 0x5ddf79:c.instructions+=2;goto B5ddf79;
case 0x5ddf7d:c.instructions+=1;goto B5ddf7d;
case 0x5ddf7f:goto L5ddf7f;
case 0x5ddf82:goto L5ddf82;
case 0x5ddf84:c.instructions+=1;goto B5ddf84;
case 0x5ddf8a:goto L5ddf8a;
case 0x5ddf8e:c.instructions+=8;goto B5ddf8e;
case 0x5ddf90:c.instructions+=7;goto B5ddf90;
case 0x5ddf93:c.instructions+=6;goto B5ddf93;
case 0x5ddf94:c.instructions+=5;goto B5ddf94;
case 0x5ddf95:c.instructions+=4;goto B5ddf95;
case 0x5ddf96:c.instructions+=3;goto B5ddf96;
case 0x5ddf97:c.instructions+=2;goto B5ddf97;
case 0x5ddf9a:c.instructions+=1;goto B5ddf9a;
case 0x5ddf9d:goto L5ddf9d;
case 0x5ddf9f:c.instructions+=1;goto B5ddf9f;
case 0x5ddfa5:goto L5ddfa5;
case 0x5ddfa7:c.instructions+=8;goto B5ddfa7;
case 0x5ddfa9:c.instructions+=7;goto B5ddfa9;
case 0x5ddfac:c.instructions+=6;goto B5ddfac;
case 0x5ddfad:c.instructions+=5;goto B5ddfad;
case 0x5ddfae:c.instructions+=4;goto B5ddfae;
case 0x5ddfaf:c.instructions+=3;goto B5ddfaf;
case 0x5ddfb0:c.instructions+=2;goto B5ddfb0;
case 0x5ddfb3:c.instructions+=1;goto B5ddfb3;
case 0x5ddfc0:goto L5ddfc0;
case 0x5ddfc3:c.instructions+=9;goto B5ddfc3;
case 0x5ddfc4:c.instructions+=8;goto B5ddfc4;
case 0x5ddfc5:c.instructions+=7;goto B5ddfc5;
case 0x5ddfc6:c.instructions+=6;goto B5ddfc6;
case 0x5ddfc7:c.instructions+=5;goto B5ddfc7;
case 0x5ddfc9:c.instructions+=4;goto B5ddfc9;
case 0x5ddfcb:c.instructions+=3;goto B5ddfcb;
case 0x5ddfcd:c.instructions+=2;goto B5ddfcd;
case 0x5ddfd3:c.instructions+=1;goto B5ddfd3;
case 0x5ddfd8:goto L5ddfd8;
case 0x5ddfdb:c.instructions+=2;goto B5ddfdb;
case 0x5ddfdd:c.instructions+=1;goto B5ddfdd;
case 0x5ddfdf:goto L5ddfdf;
case 0x5ddfe2:c.instructions+=8;goto B5ddfe2;
case 0x5ddfe7:c.instructions+=7;goto B5ddfe7;
case 0x5ddfec:c.instructions+=6;goto B5ddfec;
case 0x5ddff0:c.instructions+=5;goto B5ddff0;
case 0x5ddff3:c.instructions+=4;goto B5ddff3;
case 0x5ddff6:c.instructions+=3;goto B5ddff6;
case 0x5ddffc:c.instructions+=2;goto B5ddffc;
case 0x5ddfff:c.instructions+=1;goto B5ddfff;
default:missing_instruction(c.pc);}
B5dd001:L5dd001:{c.instructions+=5;NFSU2_TR(0x5dd001);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B5dd003:{NFSU2_TR(0x5dd003);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x8cull))));
}
B5dd009:{NFSU2_TR(0x5dd009);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dd00b:{NFSU2_TR(0x5dd00b);
w4(R+0,u32(0x92492493ull));
}
B5dd010:{NFSU2_TR(0x5dd010);
if(r1(R+518)){{goto L5dd03a;}}
}
B5dd012:L5dd012:{c.instructions+=10;NFSU2_TR(0x5dd012);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5dd014:{NFSU2_TR(0x5dd014);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B5dd016:{NFSU2_TR(0x5dd016);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5dd019:{NFSU2_TR(0x5dd019);
__builtin_memmove((R+0),(R+8),4);
}
B5dd01b:{NFSU2_TR(0x5dd01b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5dd01e:{NFSU2_TR(0x5dd01e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5dd020:{NFSU2_TR(0x5dd020);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5dd024:{NFSU2_TR(0x5dd024);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dd027:{NFSU2_TR(0x5dd027);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dd029:{NFSU2_TR(0x5dd029);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5dd08c;}}
}
B5dd02b:L5dd02b:{c.instructions+=3;NFSU2_TR(0x5dd02b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5dd02e:{NFSU2_TR(0x5dd02e);
u8 U[12];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B5dd035:{NFSU2_TR(0x5dd035);
TAIL_STATIC(0x5dce80u,5dc);
}
B5dd03a:L5dd03a:{c.instructions+=7;NFSU2_TR(0x5dd03a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5dd03c:{NFSU2_TR(0x5dd03c);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B5dd03e:{NFSU2_TR(0x5dd03e);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5dd041:{NFSU2_TR(0x5dd041);
__builtin_memmove((R+0),(R+8),4);
}
B5dd043:{NFSU2_TR(0x5dd043);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5dd046:{NFSU2_TR(0x5dd046);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5dd048:{NFSU2_TR(0x5dd048);
if(r1(R+518)){{goto L5dd08c;}}
}
B5dd04a:L5dd04a:{c.instructions+=3;NFSU2_TR(0x5dd04a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5dd04d:{NFSU2_TR(0x5dd04d);
u8 U[12];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B5dd051:{NFSU2_TR(0x5dd051);
TAIL_STATIC(0x5dce80u,5dc);
}
B5dd056:L5dd056:{c.instructions+=2;NFSU2_TR(0x5dd056);
__builtin_memmove((R+4),(R+0),4);
}
B5dd058:{NFSU2_TR(0x5dd058);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dd05dull));
TAIL_STATIC(0x5d8760u,5d8);
}
B5dd05d:L5dd05d:{c.instructions+=2;NFSU2_TR(0x5dd05d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dd05f:{NFSU2_TR(0x5dd05f);
if(r1(R+518)){{goto L5dd08c;}}
}
B5dd061:L5dd061:{c.instructions+=5;NFSU2_TR(0x5dd061);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dd064:{NFSU2_TR(0x5dd064);
__builtin_memmove((R+4),(R+0),1);
}
B5dd066:{NFSU2_TR(0x5dd066);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5dd069:{NFSU2_TR(0x5dd069);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5dd06c:{NFSU2_TR(0x5dd06c);
if(r1(R+518)){{goto L5dd08c;}}
}
B5dd06e:L5dd06e:{c.instructions+=3;NFSU2_TR(0x5dd06e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B5dd071:{NFSU2_TR(0x5dd071);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dd074:{NFSU2_TR(0x5dd074);
if(r1(R+518)){{goto L5dd08c;}}
}
B5dd076:L5dd076:{c.instructions+=2;NFSU2_TR(0x5dd076);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dd079:{NFSU2_TR(0x5dd079);
if(r1(R+518)){{goto L5dd08c;}}
}
B5dd07b:L5dd07b:{c.instructions+=5;NFSU2_TR(0x5dd07b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dd07f:{NFSU2_TR(0x5dd07f);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5dd082:{NFSU2_TR(0x5dd082);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B5dd084:{NFSU2_TR(0x5dd084);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dd086:{NFSU2_TR(0x5dd086);
if(r1(R+518)){{goto L5dd23d;}}
}
B5dd08c:L5dd08c:{c.instructions+=8;NFSU2_TR(0x5dd08c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dd090:{NFSU2_TR(0x5dd090);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5dd094:{NFSU2_TR(0x5dd094);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5dd098:{NFSU2_TR(0x5dd098);
__builtin_memmove((R+8),gp(0x883db4),4);
}
B5dd09e:{NFSU2_TR(0x5dd09e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5dd0a2:{NFSU2_TR(0x5dd0a2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5dd0a3:{NFSU2_TR(0x5dd0a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dd0a7:{NFSU2_TR(0x5dd0a7);
TAIL_STATIC(0x5dcd91u,5dc);
}
B5dd0ac:L5dd0ac:{c.instructions+=2;NFSU2_TR(0x5dd0ac);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dd0ae:{NFSU2_TR(0x5dd0ae);
if(r1(R+518)){{goto L5dd0c7;}}
}
B5dd0b0:L5dd0b0:{c.instructions+=6;NFSU2_TR(0x5dd0b0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B5dd0b4:{NFSU2_TR(0x5dd0b4);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5dd0b7:{NFSU2_TR(0x5dd0b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dd0bb:{NFSU2_TR(0x5dd0bb);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5dd0bf:{NFSU2_TR(0x5dd0bf);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dd0c5:{NFSU2_TR(0x5dd0c5);
{goto L5dd0ce;}
}
B5dd0c7:L5dd0c7:{c.instructions+=2;NFSU2_TR(0x5dd0c7);
__builtin_memmove((R+4),(R+24),4);
}
B5dd0c9:{NFSU2_TR(0x5dd0c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dd0ceull));
TAIL_STATIC(0x40ccc0u,40c);
}
B5dd0ce:L5dd0ce:{c.instructions+=16;NFSU2_TR(0x5dd0ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dd0d1:{NFSU2_TR(0x5dd0d1);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5dd0d5:{NFSU2_TR(0x5dd0d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5dd0d9:{NFSU2_TR(0x5dd0d9);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ffull))));
}
B5dd0df:{NFSU2_TR(0x5dd0df);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5dd0e6:{NFSU2_TR(0x5dd0e6);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dd0ea:{NFSU2_TR(0x5dd0ea);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B5dd0ec:{NFSU2_TR(0x5dd0ec);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x8cull))));
}
B5dd0f2:{NFSU2_TR(0x5dd0f2);
w4(R+0,u32(0x92492493ull));
}
B5dd0f7:{NFSU2_TR(0x5dd0f7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5dd0f9:{NFSU2_TR(0x5dd0f9);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B5dd0fb:{NFSU2_TR(0x5dd0fb);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5dd0fe:{NFSU2_TR(0x5dd0fe);
__builtin_memmove((R+0),(R+8),4);
}
B5dd100:{NFSU2_TR(0x5dd100);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5dd103:{NFSU2_TR(0x5dd103);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dd105:{NFSU2_TR(0x5dd105);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dd120;}}
}
B5dd107:L5dd107:{c.instructions+=5;NFSU2_TR(0x5dd107);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5dd109:{NFSU2_TR(0x5dd109);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5dd10d:{NFSU2_TR(0x5dd10d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dd110:{NFSU2_TR(0x5dd110);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dd112:{NFSU2_TR(0x5dd112);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5dd13c;}}
}
B5dd114:L5dd114:{c.instructions+=3;NFSU2_TR(0x5dd114);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5dd117:{NFSU2_TR(0x5dd117);
u8 U[12];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5dd11e:{NFSU2_TR(0x5dd11e);
{goto L5dd12b;}
}
B5dd120:L5dd120:{c.instructions+=2;NFSU2_TR(0x5dd120);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5dd122:{NFSU2_TR(0x5dd122);
if(r1(R+518)){{goto L5dd13c;}}
}
B5dd124:L5dd124:{c.instructions+=2;NFSU2_TR(0x5dd124);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5dd127:{NFSU2_TR(0x5dd127);
u8 U[12];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5dd12b:L5dd12b:{c.instructions+=4;NFSU2_TR(0x5dd12b);
__builtin_memmove((R+0),(R+4),4);
}
B5dd12d:{NFSU2_TR(0x5dd12d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dd12f:{NFSU2_TR(0x5dd12f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dd133:{NFSU2_TR(0x5dd133);
if(r1(R+518)){{goto L5dd13c;}}
}
B5dd135:L5dd135:{c.instructions+=2;NFSU2_TR(0x5dd135);
__builtin_memmove((R+24),(R+4),4);
}
B5dd137:{NFSU2_TR(0x5dd137);
TAIL_STATIC(0x5dcd59u,5dc);
}
B5dd13c:L5dd13c:{c.instructions+=3;NFSU2_TR(0x5dd13c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dd140:{NFSU2_TR(0x5dd140);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dd142:{NFSU2_TR(0x5dd142);
if(r1(R+518)){{goto L5dd23d;}}
}
B5dd148:L5dd148:{c.instructions+=4;NFSU2_TR(0x5dd148);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5dd14b:{NFSU2_TR(0x5dd14b);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B5dd14d:{NFSU2_TR(0x5dd14d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dd14f:{NFSU2_TR(0x5dd14f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dd157;}}
}
B5dd151:L5dd151:{c.instructions+=2;NFSU2_TR(0x5dd151);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5dd155:{NFSU2_TR(0x5dd155);
{goto L5dd15b;}
}
B5dd157:L5dd157:{c.instructions+=1;NFSU2_TR(0x5dd157);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5dd15b:L5dd15b:{c.instructions+=2;NFSU2_TR(0x5dd15b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dd15d:{NFSU2_TR(0x5dd15d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dd165;}}
}
B5dd15f:L5dd15f:{c.instructions+=2;NFSU2_TR(0x5dd15f);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5dd163:{NFSU2_TR(0x5dd163);
{goto L5dd169;}
}
B5dd165:L5dd165:{c.instructions+=1;NFSU2_TR(0x5dd165);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5dd169:L5dd169:{c.instructions+=3;NFSU2_TR(0x5dd169);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B5dd16c:{NFSU2_TR(0x5dd16c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5dd16e:{NFSU2_TR(0x5dd16e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5dd179;}}
}
B5dd170:L5dd170:{c.instructions+=2;NFSU2_TR(0x5dd170);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5dd177:{NFSU2_TR(0x5dd177);
{goto L5dd17b;}
}
B5dd179:L5dd179:{c.instructions+=1;NFSU2_TR(0x5dd179);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5dd17b:L5dd17b:{c.instructions+=5;NFSU2_TR(0x5dd17b);
w4(R+8,u32(s32(s16(r2(R+4)))));
}
B5dd17e:{NFSU2_TR(0x5dd17e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5dd181:{NFSU2_TR(0x5dd181);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B5dd188:{NFSU2_TR(0x5dd188);
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
B5dd18a:{NFSU2_TR(0x5dd18a);
if(r1(R+518)){{goto L5dd2e7;}}
}
B5dd190:L5dd190:{c.instructions+=1;NFSU2_TR(0x5dd190);
__builtin_memmove((R+12),gp(0x883db0),4);
}
B5dd196:L5dd196:{c.instructions+=2;NFSU2_TR(0x5dd196);
u8 U[22];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+14)));
w4(U+18,u32(u32(r4(R+28))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5dd19a:{NFSU2_TR(0x5dd19a);
if(r1(R+518)){{goto L5dd2e7;}}
}
B5dd1a0:L5dd1a0:{c.instructions+=2;NFSU2_TR(0x5dd1a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dd1a8:{NFSU2_TR(0x5dd1a8);
{goto L5dd1b0;}
}
B5dd1b0:L5dd1b0:{c.instructions+=5;NFSU2_TR(0x5dd1b0);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5dd1b4:{NFSU2_TR(0x5dd1b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5dd1b7:{NFSU2_TR(0x5dd1b7);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5dd1b9:{NFSU2_TR(0x5dd1b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dd1be:{NFSU2_TR(0x5dd1be);
if(r1(R+518)){{goto L5dd1cd;}}
}
B5dd1c0:L5dd1c0:{c.instructions+=2;NFSU2_TR(0x5dd1c0);
u8 U[8];
__builtin_memmove((U+0),gp(0x883db4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dd1c6:{NFSU2_TR(0x5dd1c6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5dd1cd;}}
}
B5dd1c8:L5dd1c8:{c.instructions+=1;NFSU2_TR(0x5dd1c8);
w4(R+8,u32(0x1ull));
}
B5dd1cd:L5dd1cd:{c.instructions+=3;NFSU2_TR(0x5dd1cd);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5dd1d1:{NFSU2_TR(0x5dd1d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dd1d6:{NFSU2_TR(0x5dd1d6);
if(r1(R+518)){{goto L5dd1e1;}}
}
B5dd1d8:L5dd1d8:{c.instructions+=2;NFSU2_TR(0x5dd1d8);
u8 U[8];
__builtin_memmove((U+0),gp(0x883db4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dd1de:{NFSU2_TR(0x5dd1de);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5dd1e1;}}
}
B5dd1e0:L5dd1e0:{c.instructions+=1;NFSU2_TR(0x5dd1e0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5dd1e1:L5dd1e1:{c.instructions+=2;NFSU2_TR(0x5dd1e1);
u8 U[16];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+8)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5dd1e5:{NFSU2_TR(0x5dd1e5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5dd27f;}}
}
B5dd1eb:L5dd1eb:{c.instructions+=3;NFSU2_TR(0x5dd1eb);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5dd1ed:{NFSU2_TR(0x5dd1ed);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5dd1ef:{NFSU2_TR(0x5dd1ef);
}
B5dd1f0:L5dd1f0:{c.instructions+=3;NFSU2_TR(0x5dd1f0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(r2(U+0)));
}
B5dd1f3:{NFSU2_TR(0x5dd1f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dd1f8:{NFSU2_TR(0x5dd1f8);
if(r1(R+518)){{goto L5dd209;}}
}
B5dd1fa:L5dd1fa:{c.instructions+=2;NFSU2_TR(0x5dd1fa);
u8 U[8];
__builtin_memmove((U+0),gp(0x883db4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dd200:{NFSU2_TR(0x5dd200);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5dd209;}}
}
B5dd202:L5dd202:{c.instructions+=2;NFSU2_TR(0x5dd202);
u8 U[16];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5dd206:{NFSU2_TR(0x5dd206);
if(r1(R+518)){{goto L5dd246;}}
}
B5dd208:L5dd208:{c.instructions+=1;NFSU2_TR(0x5dd208);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5dd209:L5dd209:{c.instructions+=4;NFSU2_TR(0x5dd209);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5dd20a:{NFSU2_TR(0x5dd20a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B5dd20d:{NFSU2_TR(0x5dd20d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dd210:{NFSU2_TR(0x5dd210);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dd1f0u);}goto L5dd1f0;}}
}
B5dd212:L5dd212:{c.instructions+=1;NFSU2_TR(0x5dd212);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5dd214:L5dd214:{c.instructions+=7;NFSU2_TR(0x5dd214);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dd217:{NFSU2_TR(0x5dd217);
u8 U[5];
w4(U+0,u32(u32(u32(0x19ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5dd21b:{NFSU2_TR(0x5dd21b);
__builtin_memmove((R+0),(R+8),4);
}
B5dd21d:{NFSU2_TR(0x5dd21d);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5dd220:{NFSU2_TR(0x5dd220);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
}
B5dd222:{NFSU2_TR(0x5dd222);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+4))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
}
B5dd224:{NFSU2_TR(0x5dd224);
if(r1(R+518)){{goto L5dd24f;}}
}
B5dd226:L5dd226:{c.instructions+=4;NFSU2_TR(0x5dd226);
__builtin_memmove((R+4),(R+8),1);
}
B5dd228:{NFSU2_TR(0x5dd228);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5dd22b:{NFSU2_TR(0x5dd22b);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5dd22e:{NFSU2_TR(0x5dd22e);
if(r1(R+518)){{goto L5dd276;}}
}
B5dd230:L5dd230:{c.instructions+=3;NFSU2_TR(0x5dd230);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfull))));
}
B5dd233:{NFSU2_TR(0x5dd233);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dd236:{NFSU2_TR(0x5dd236);
if(r1(R+518)){{goto L5dd276;}}
}
B5dd238:L5dd238:{c.instructions+=2;NFSU2_TR(0x5dd238);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dd23b:{NFSU2_TR(0x5dd23b);
if(r1(R+518)){{goto L5dd276;}}
}
B5dd23d:L5dd23d:{c.instructions+=7;NFSU2_TR(0x5dd23d);
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
B5dd23f:{NFSU2_TR(0x5dd23f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dd240:{NFSU2_TR(0x5dd240);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dd241:{NFSU2_TR(0x5dd241);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5dd242:{NFSU2_TR(0x5dd242);
__builtin_memmove((R+16),(R+20),4);
}
B5dd244:{NFSU2_TR(0x5dd244);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5dd245:{NFSU2_TR(0x5dd245);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dd246:L5dd246:{c.instructions+=4;NFSU2_TR(0x5dd246);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5dd249:{NFSU2_TR(0x5dd249);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B5dd24b:{NFSU2_TR(0x5dd24b);
__builtin_memmove((R+24),(R+0),4);
}
B5dd24d:{NFSU2_TR(0x5dd24d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dd214u);}goto L5dd214;}
}
B5dd24f:L5dd24f:{c.instructions+=2;NFSU2_TR(0x5dd24f);
__builtin_memmove((R+4),(R+24),4);
}
B5dd251:{NFSU2_TR(0x5dd251);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dd256ull));
TAIL_STATIC(0x5d8760u,5d8);
}
B5dd256:L5dd256:{c.instructions+=2;NFSU2_TR(0x5dd256);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5dd25a:{NFSU2_TR(0x5dd25a);
if(r1(R+518)){{goto L5dd276;}}
}
B5dd25c:L5dd25c:{c.instructions+=5;NFSU2_TR(0x5dd25c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dd25f:{NFSU2_TR(0x5dd25f);
__builtin_memmove((R+8),(R+0),1);
}
B5dd261:{NFSU2_TR(0x5dd261);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xfull))));
}
B5dd264:{NFSU2_TR(0x5dd264);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5dd267:{NFSU2_TR(0x5dd267);
if(r1(R+518)){{goto L5dd276;}}
}
B5dd269:L5dd269:{c.instructions+=3;NFSU2_TR(0x5dd269);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B5dd26c:{NFSU2_TR(0x5dd26c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dd26f:{NFSU2_TR(0x5dd26f);
if(r1(R+518)){{goto L5dd276;}}
}
B5dd271:L5dd271:{c.instructions+=2;NFSU2_TR(0x5dd271);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dd274:{NFSU2_TR(0x5dd274);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dd27f;}}
}
B5dd276:L5dd276:{c.instructions+=2;NFSU2_TR(0x5dd276);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5dd27a:{NFSU2_TR(0x5dd27a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dd1b0u);}goto L5dd1b0;}
}
B5dd27f:L5dd27f:{c.instructions+=9;NFSU2_TR(0x5dd27f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dd282:{NFSU2_TR(0x5dd282);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
}
B5dd287:{NFSU2_TR(0x5dd287);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5dd28e:{NFSU2_TR(0x5dd28e);
u8 U[5];
w4(U+0,u32(u32(u32(0x19ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5dd292:{NFSU2_TR(0x5dd292);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B5dd294:{NFSU2_TR(0x5dd294);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x8cull))));
}
B5dd29a:{NFSU2_TR(0x5dd29a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dd29c:{NFSU2_TR(0x5dd29c);
w4(R+0,u32(0x92492493ull));
}
B5dd2a1:{NFSU2_TR(0x5dd2a1);
if(r1(R+518)){{goto L5dd2c8;}}
}
B5dd2a3:L5dd2a3:{c.instructions+=10;NFSU2_TR(0x5dd2a3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5dd2a5:{NFSU2_TR(0x5dd2a5);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B5dd2a7:{NFSU2_TR(0x5dd2a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5dd2aa:{NFSU2_TR(0x5dd2aa);
__builtin_memmove((R+0),(R+8),4);
}
B5dd2ac:{NFSU2_TR(0x5dd2ac);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5dd2af:{NFSU2_TR(0x5dd2af);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5dd2b1:{NFSU2_TR(0x5dd2b1);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5dd2b5:{NFSU2_TR(0x5dd2b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dd2b8:{NFSU2_TR(0x5dd2b8);
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
B5dd2ba:{NFSU2_TR(0x5dd2ba);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5dd2e7;}}
}
B5dd2bc:L5dd2bc:{c.instructions+=3;NFSU2_TR(0x5dd2bc);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5dd2bf:{NFSU2_TR(0x5dd2bf);
u8 U[12];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B5dd2c6:{NFSU2_TR(0x5dd2c6);
{goto L5dd2df;}
}
B5dd2c8:L5dd2c8:{c.instructions+=7;NFSU2_TR(0x5dd2c8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5dd2ca:{NFSU2_TR(0x5dd2ca);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B5dd2cc:{NFSU2_TR(0x5dd2cc);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5dd2cf:{NFSU2_TR(0x5dd2cf);
__builtin_memmove((R+0),(R+8),4);
}
B5dd2d1:{NFSU2_TR(0x5dd2d1);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5dd2d4:{NFSU2_TR(0x5dd2d4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),r4(R+0)));
w1(R+523,scarry<u32>(r4(R+8),r4(R+0)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5dd2d6:{NFSU2_TR(0x5dd2d6);
if(r1(R+518)){{goto L5dd2e7;}}
}
B5dd2d8:L5dd2d8:{c.instructions+=2;NFSU2_TR(0x5dd2d8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5dd2db:{NFSU2_TR(0x5dd2db);
u8 U[12];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B5dd2df:L5dd2df:{c.instructions+=2;NFSU2_TR(0x5dd2df);
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
B5dd2e1:{NFSU2_TR(0x5dd2e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dd196u);}goto L5dd196;}}
}
B5dd2e7:L5dd2e7:{c.instructions+=7;NFSU2_TR(0x5dd2e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dd2e8:{NFSU2_TR(0x5dd2e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dd2e9:{NFSU2_TR(0x5dd2e9);
w1(R+0,u8(0x1ull));
}
B5dd2eb:{NFSU2_TR(0x5dd2eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5dd2ec:{NFSU2_TR(0x5dd2ec);
__builtin_memmove((R+16),(R+20),4);
}
B5dd2ee:{NFSU2_TR(0x5dd2ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5dd2ef:{NFSU2_TR(0x5dd2ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dd2f0:L5dd2f0:{c.instructions+=24;NFSU2_TR(0x5dd2f0);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5dd2f3:{NFSU2_TR(0x5dd2f3);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5dd2f7:{NFSU2_TR(0x5dd2f7);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5dd2fb:{NFSU2_TR(0x5dd2fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5dd2ff:{NFSU2_TR(0x5dd2ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dd303:{NFSU2_TR(0x5dd303);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5dd307:{NFSU2_TR(0x5dd307);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5dd30b:{NFSU2_TR(0x5dd30b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd30c:{NFSU2_TR(0x5dd30c);
{u32 ea_=u32(u32(8972912u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dd312:{NFSU2_TR(0x5dd312);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5dd316:{NFSU2_TR(0x5dd316);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd317:{NFSU2_TR(0x5dd317);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5dd31b:{NFSU2_TR(0x5dd31b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dd31f:{NFSU2_TR(0x5dd31f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd320:{NFSU2_TR(0x5dd320);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5dd324:{NFSU2_TR(0x5dd324);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd325:{NFSU2_TR(0x5dd325);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd326:{NFSU2_TR(0x5dd326);
{u32 ea_=u32(u32(8972912u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dd32c:{NFSU2_TR(0x5dd32c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5dd330:{NFSU2_TR(0x5dd330);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dd334:{NFSU2_TR(0x5dd334);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dd338:{NFSU2_TR(0x5dd338);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5dd33a:{NFSU2_TR(0x5dd33a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dd33e:{NFSU2_TR(0x5dd33e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dd343ull));
TAIL_STATIC(0x43d090u,43d);
}
B5dd343:L5dd343:{c.instructions+=7;NFSU2_TR(0x5dd343);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dd347:{NFSU2_TR(0x5dd347);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd348:{NFSU2_TR(0x5dd348);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5dd34c:{NFSU2_TR(0x5dd34c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd34d:{NFSU2_TR(0x5dd34d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd34e:{NFSU2_TR(0x5dd34e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd34f:{NFSU2_TR(0x5dd34f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dd354ull));
TAIL_STATIC(0x43d090u,43d);
}
B5dd354:L5dd354:{c.instructions+=4;NFSU2_TR(0x5dd354);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B5dd357:{NFSU2_TR(0x5dd357);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dd358:{NFSU2_TR(0x5dd358);
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
B5dd35b:{NFSU2_TR(0x5dd35b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dd360:L5dd360:{c.instructions+=50;NFSU2_TR(0x5dd360);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd361:{NFSU2_TR(0x5dd361);
__builtin_memmove((R+20),(R+16),4);
}
B5dd363:{NFSU2_TR(0x5dd363);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5dd366:{NFSU2_TR(0x5dd366);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x3cull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x3cull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x3cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5dd369:{NFSU2_TR(0x5dd369);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5dd36d:{NFSU2_TR(0x5dd36d);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5dd371:{NFSU2_TR(0x5dd371);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dd375:{NFSU2_TR(0x5dd375);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5dd377:{NFSU2_TR(0x5dd377);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dd37b:{NFSU2_TR(0x5dd37b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5dd37f:{NFSU2_TR(0x5dd37f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x21ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5dd383:{NFSU2_TR(0x5dd383);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dd387:{NFSU2_TR(0x5dd387);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5dd38b:{NFSU2_TR(0x5dd38b);
u8 U[45];
w4(U+37,u32(u32(u32(0xdull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+8),4);
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
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
B5dd38e:{NFSU2_TR(0x5dd38e);
{u32 ea_=u32(u32(8972912u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dd394:{NFSU2_TR(0x5dd394);
u8 U[45];
w4(U+37,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
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
B5dd397:{NFSU2_TR(0x5dd397);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5dd39b:{NFSU2_TR(0x5dd39b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dd39f:{NFSU2_TR(0x5dd39f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dd3a2:{NFSU2_TR(0x5dd3a2);
{u32 ea_=u32(u32(8972912u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dd3a8:{NFSU2_TR(0x5dd3a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd3a9:{NFSU2_TR(0x5dd3a9);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dd3ac:{NFSU2_TR(0x5dd3ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5dd3b0:{NFSU2_TR(0x5dd3b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5dd3b3:{NFSU2_TR(0x5dd3b3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dd3b7:{NFSU2_TR(0x5dd3b7);
u8 U[45];
w4(U+37,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+4),4);
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+4))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B5dd3ba:{NFSU2_TR(0x5dd3ba);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5dd3be:{NFSU2_TR(0x5dd3be);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dd3c2:{NFSU2_TR(0x5dd3c2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd3c3:{NFSU2_TR(0x5dd3c3);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dd3c9:{NFSU2_TR(0x5dd3c9);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5dd3cd:{NFSU2_TR(0x5dd3cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd3ce:{NFSU2_TR(0x5dd3ce);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dd3d2:{NFSU2_TR(0x5dd3d2);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5dd3d4:{NFSU2_TR(0x5dd3d4);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dd3d8:{NFSU2_TR(0x5dd3d8);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5dd3dc:{NFSU2_TR(0x5dd3dc);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5dd3e0:{NFSU2_TR(0x5dd3e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dd3e4:{NFSU2_TR(0x5dd3e4);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5dd3e8:{NFSU2_TR(0x5dd3e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd3e9:{NFSU2_TR(0x5dd3e9);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dd3ef:{NFSU2_TR(0x5dd3ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd3f0:{NFSU2_TR(0x5dd3f0);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dd3f4:{NFSU2_TR(0x5dd3f4);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dd3f8:{NFSU2_TR(0x5dd3f8);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5dd3fa:{NFSU2_TR(0x5dd3fa);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dd3fe:{NFSU2_TR(0x5dd3fe);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5dd402:{NFSU2_TR(0x5dd402);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dd408:{NFSU2_TR(0x5dd408);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dd40c:{NFSU2_TR(0x5dd40c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dd411ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B5dd411:L5dd411:{c.instructions+=7;NFSU2_TR(0x5dd411);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dd414:{NFSU2_TR(0x5dd414);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd415:{NFSU2_TR(0x5dd415);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5dd419:{NFSU2_TR(0x5dd419);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd41a:{NFSU2_TR(0x5dd41a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd41b:{NFSU2_TR(0x5dd41b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd41c:{NFSU2_TR(0x5dd41c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dd421ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B5dd421:L5dd421:{c.instructions+=5;NFSU2_TR(0x5dd421);
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
B5dd424:{NFSU2_TR(0x5dd424);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dd425:{NFSU2_TR(0x5dd425);
__builtin_memmove((R+16),(R+20),4);
}
B5dd427:{NFSU2_TR(0x5dd427);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5dd428:{NFSU2_TR(0x5dd428);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dd430:L5dd430:{c.instructions+=6;NFSU2_TR(0x5dd430);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B5dd433:{NFSU2_TR(0x5dd433);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd434:{NFSU2_TR(0x5dd434);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5dd438:{NFSU2_TR(0x5dd438);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd439:{NFSU2_TR(0x5dd439);
__builtin_memmove((R+24),(R+4),4);
}
B5dd43b:{NFSU2_TR(0x5dd43b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dd440ull));
TAIL_STATIC(0x401aa0u,401);
}
B5dd440:L5dd440:{c.instructions+=13;NFSU2_TR(0x5dd440);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dd444:{NFSU2_TR(0x5dd444);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dd448:{NFSU2_TR(0x5dd448);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5dd44a:{NFSU2_TR(0x5dd44a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dd44e:{NFSU2_TR(0x5dd44e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd44f:{NFSU2_TR(0x5dd44f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5dd453:{NFSU2_TR(0x5dd453);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd454:{NFSU2_TR(0x5dd454);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd455:{NFSU2_TR(0x5dd455);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5dd459:{NFSU2_TR(0x5dd459);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dd45d:{NFSU2_TR(0x5dd45d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd45e:{NFSU2_TR(0x5dd45e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dd462:{NFSU2_TR(0x5dd462);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dd467ull));
TAIL_STATIC(0x43d090u,43d);
}
B5dd467:L5dd467:{c.instructions+=7;NFSU2_TR(0x5dd467);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dd46b:{NFSU2_TR(0x5dd46b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd46c:{NFSU2_TR(0x5dd46c);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5dd470:{NFSU2_TR(0x5dd470);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd471:{NFSU2_TR(0x5dd471);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd472:{NFSU2_TR(0x5dd472);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd473:{NFSU2_TR(0x5dd473);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dd478ull));
TAIL_STATIC(0x43d090u,43d);
}
B5dd478:L5dd478:{c.instructions+=4;NFSU2_TR(0x5dd478);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B5dd47b:{NFSU2_TR(0x5dd47b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dd47c:{NFSU2_TR(0x5dd47c);
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
B5dd47f:{NFSU2_TR(0x5dd47f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dd490:L5dd490:{c.instructions+=9;NFSU2_TR(0x5dd490);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd491:{NFSU2_TR(0x5dd491);
__builtin_memmove((R+20),(R+16),4);
}
B5dd493:{NFSU2_TR(0x5dd493);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5dd496:{NFSU2_TR(0x5dd496);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x3cull))));
}
B5dd499:{NFSU2_TR(0x5dd499);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd49a:{NFSU2_TR(0x5dd49a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5dd49e:{NFSU2_TR(0x5dd49e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd49f:{NFSU2_TR(0x5dd49f);
__builtin_memmove((R+24),(R+4),4);
}
B5dd4a1:{NFSU2_TR(0x5dd4a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dd4a6ull));
TAIL_STATIC(0x401aa0u,401);
}
B5dd4a6:L5dd4a6:{c.instructions+=12;NFSU2_TR(0x5dd4a6);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dd4a9:{NFSU2_TR(0x5dd4a9);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5dd4ad:{NFSU2_TR(0x5dd4ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5dd4af:{NFSU2_TR(0x5dd4af);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5dd4b2:{NFSU2_TR(0x5dd4b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dd4b6:{NFSU2_TR(0x5dd4b6);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dd4ba:{NFSU2_TR(0x5dd4ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dd4be:{NFSU2_TR(0x5dd4be);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5dd4c2:{NFSU2_TR(0x5dd4c2);
__builtin_memmove((R+4),(R+24),4);
}
B5dd4c4:{NFSU2_TR(0x5dd4c4);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dd4ca:{NFSU2_TR(0x5dd4ca);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dd4ce:{NFSU2_TR(0x5dd4ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dd4d3ull));
TAIL_STATIC(0x40d310u,40d);
}
B5dd4d3:L5dd4d3:{c.instructions+=26;NFSU2_TR(0x5dd4d3);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dd4d7:{NFSU2_TR(0x5dd4d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dd4db:{NFSU2_TR(0x5dd4db);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dd4df:{NFSU2_TR(0x5dd4df);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dd4e3:{NFSU2_TR(0x5dd4e3);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5dd4e5:{NFSU2_TR(0x5dd4e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dd4e9:{NFSU2_TR(0x5dd4e9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5dd4ed:{NFSU2_TR(0x5dd4ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5dd4f0:{NFSU2_TR(0x5dd4f0);
u8 U[45];
w4(U+37,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
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
B5dd4f3:{NFSU2_TR(0x5dd4f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dd4f7:{NFSU2_TR(0x5dd4f7);
__builtin_memmove((R+8),(R+4),4);
}
B5dd4f9:{NFSU2_TR(0x5dd4f9);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dd4fd:{NFSU2_TR(0x5dd4fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dd501:{NFSU2_TR(0x5dd501);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5dd505:{NFSU2_TR(0x5dd505);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dd508:{NFSU2_TR(0x5dd508);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd509:{NFSU2_TR(0x5dd509);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dd50d:{NFSU2_TR(0x5dd50d);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dd513:{NFSU2_TR(0x5dd513);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5dd517:{NFSU2_TR(0x5dd517);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd518:{NFSU2_TR(0x5dd518);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5dd51c:{NFSU2_TR(0x5dd51c);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5dd51e:{NFSU2_TR(0x5dd51e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd51f:{NFSU2_TR(0x5dd51f);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dd523:{NFSU2_TR(0x5dd523);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd524:{NFSU2_TR(0x5dd524);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dd529ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B5dd529:L5dd529:{c.instructions+=7;NFSU2_TR(0x5dd529);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dd52c:{NFSU2_TR(0x5dd52c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd52d:{NFSU2_TR(0x5dd52d);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5dd531:{NFSU2_TR(0x5dd531);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd532:{NFSU2_TR(0x5dd532);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd533:{NFSU2_TR(0x5dd533);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd534:{NFSU2_TR(0x5dd534);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dd539ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B5dd539:L5dd539:{c.instructions+=5;NFSU2_TR(0x5dd539);
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
B5dd53c:{NFSU2_TR(0x5dd53c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dd53d:{NFSU2_TR(0x5dd53d);
__builtin_memmove((R+16),(R+20),4);
}
B5dd53f:{NFSU2_TR(0x5dd53f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5dd540:{NFSU2_TR(0x5dd540);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dd550:L5dd550:{c.instructions+=11;NFSU2_TR(0x5dd550);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd551:{NFSU2_TR(0x5dd551);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dd555:{NFSU2_TR(0x5dd555);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd556:{NFSU2_TR(0x5dd556);
__builtin_memmove((R+20),(R+4),4);
}
B5dd558:{NFSU2_TR(0x5dd558);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B5dd55a:{NFSU2_TR(0x5dd55a);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5dd55e:{NFSU2_TR(0x5dd55e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dd560:{NFSU2_TR(0x5dd560);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd561:{NFSU2_TR(0x5dd561);
u8 U[5];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5dd565:{NFSU2_TR(0x5dd565);
__builtin_memmove((R+24),(R+20),4);
}
B5dd567:{NFSU2_TR(0x5dd567);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dd59d;}}
}
B5dd569:L5dd569:{c.instructions+=3;NFSU2_TR(0x5dd569);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dd56d:{NFSU2_TR(0x5dd56d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5dd570:{NFSU2_TR(0x5dd570);
if(r1(R+518)){{goto L5dd588;}}
}
B5dd572:L5dd572:{c.instructions+=2;NFSU2_TR(0x5dd572);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5dd573:{NFSU2_TR(0x5dd573);
if(r1(R+518)){{goto L5dd580;}}
}
B5dd575:L5dd575:{c.instructions+=2;NFSU2_TR(0x5dd575);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5dd576:{NFSU2_TR(0x5dd576);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dd595;}}
}
B5dd578:L5dd578:{c.instructions+=3;NFSU2_TR(0x5dd578);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dd57b:{NFSU2_TR(0x5dd57b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1bull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5dd57e:{NFSU2_TR(0x5dd57e);
{goto L5dd58e;}
}
B5dd580:L5dd580:{c.instructions+=3;NFSU2_TR(0x5dd580);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dd583:{NFSU2_TR(0x5dd583);
u8 U[4];
w4(U+0,u32(u32(u32(0x19ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5dd586:{NFSU2_TR(0x5dd586);
{goto L5dd58e;}
}
B5dd588:L5dd588:{c.instructions+=2;NFSU2_TR(0x5dd588);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dd58b:{NFSU2_TR(0x5dd58b);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5dd58e:L5dd58e:{c.instructions+=3;NFSU2_TR(0x5dd58e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B5dd591:{NFSU2_TR(0x5dd591);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dd593:{NFSU2_TR(0x5dd593);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dd59d;}}
}
B5dd595:L5dd595:{c.instructions+=5;NFSU2_TR(0x5dd595);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dd596:{NFSU2_TR(0x5dd596);
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
B5dd598:{NFSU2_TR(0x5dd598);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5dd599:{NFSU2_TR(0x5dd599);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5dd59a:{NFSU2_TR(0x5dd59a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dd59d:L5dd59d:{c.instructions+=3;NFSU2_TR(0x5dd59d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd59e:{NFSU2_TR(0x5dd59e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd59f:{NFSU2_TR(0x5dd59f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5dd5a1:L5dd5a1:{c.instructions+=4;NFSU2_TR(0x5dd5a1);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5dd5a5:{NFSU2_TR(0x5dd5a5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5dd5a7:{NFSU2_TR(0x5dd5a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dd5ac:{NFSU2_TR(0x5dd5ac);
if(r1(R+518)){{goto L5dd5bb;}}
}
B5dd5ae:L5dd5ae:{c.instructions+=2;NFSU2_TR(0x5dd5ae);
u8 U[8];
__builtin_memmove((U+0),gp(0x883db4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dd5b4:{NFSU2_TR(0x5dd5b4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5dd5bb;}}
}
B5dd5b6:L5dd5b6:{c.instructions+=1;NFSU2_TR(0x5dd5b6);
w4(R+4,u32(0x1ull));
}
B5dd5bb:L5dd5bb:{c.instructions+=3;NFSU2_TR(0x5dd5bb);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5dd5bf:{NFSU2_TR(0x5dd5bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dd5c4:{NFSU2_TR(0x5dd5c4);
if(r1(R+518)){{goto L5dd5cf;}}
}
B5dd5c6:L5dd5c6:{c.instructions+=2;NFSU2_TR(0x5dd5c6);
u8 U[8];
__builtin_memmove((U+0),gp(0x883db4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dd5cc:{NFSU2_TR(0x5dd5cc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5dd5cf;}}
}
B5dd5ce:L5dd5ce:{c.instructions+=1;NFSU2_TR(0x5dd5ce);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5dd5cf:L5dd5cf:{c.instructions+=2;NFSU2_TR(0x5dd5cf);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dd5d1:{NFSU2_TR(0x5dd5d1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5dd6b9;}}
}
B5dd5d7:L5dd5d7:{c.instructions+=3;NFSU2_TR(0x5dd5d7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd5d8:{NFSU2_TR(0x5dd5d8);
__builtin_memmove((R+4),(R+20),4);
}
B5dd5da:{NFSU2_TR(0x5dd5da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dd5dfull));
TAIL_STATIC(0x5d43c0u,5d4);
}
B5dd5df:L5dd5df:{c.instructions+=8;NFSU2_TR(0x5dd5df);
__builtin_memmove((R+28),(R+0),4);
}
B5dd5e1:{NFSU2_TR(0x5dd5e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dd5e4:{NFSU2_TR(0x5dd5e4);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5dd5e8:{NFSU2_TR(0x5dd5e8);
__builtin_memmove((R+8),(R+4),4);
}
B5dd5ea:{NFSU2_TR(0x5dd5ea);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5dd5ed:{NFSU2_TR(0x5dd5ed);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x1ull))));
}
B5dd5f0:{NFSU2_TR(0x5dd5f0);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+0))));
w1(R+518,u8((r1(R+8))==(u8(0x0ull))));
}
B5dd5f2:{NFSU2_TR(0x5dd5f2);
if(r1(R+518)){{goto L5dd65e;}}
}
B5dd5f4:L5dd5f4:{c.instructions+=4;NFSU2_TR(0x5dd5f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dd5f8:{NFSU2_TR(0x5dd5f8);
__builtin_memmove((R+8),(R+0),4);
}
B5dd5fa:{NFSU2_TR(0x5dd5fa);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5dd5fd:{NFSU2_TR(0x5dd5fd);
if(r1(R+518)){{goto L5dd62e;}}
}
B5dd5ff:L5dd5ff:{c.instructions+=2;NFSU2_TR(0x5dd5ff);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5dd600:{NFSU2_TR(0x5dd600);
if(r1(R+518)){{goto L5dd627;}}
}
B5dd602:L5dd602:{c.instructions+=2;NFSU2_TR(0x5dd602);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5dd603:{NFSU2_TR(0x5dd603);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dd63d;}}
}
B5dd605:L5dd605:{c.instructions+=4;NFSU2_TR(0x5dd605);
__builtin_memmove((R+8),(R+4),1);
}
B5dd607:{NFSU2_TR(0x5dd607);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xfull))));
}
B5dd60a:{NFSU2_TR(0x5dd60a);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5dd60d:{NFSU2_TR(0x5dd60d);
if(r1(R+518)){{goto L5dd614;}}
}
B5dd60f:L5dd60f:{c.instructions+=2;NFSU2_TR(0x5dd60f);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x8ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5dd612:{NFSU2_TR(0x5dd612);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dd63d;}}
}
B5dd614:L5dd614:{c.instructions+=5;NFSU2_TR(0x5dd614);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dd617:{NFSU2_TR(0x5dd617);
__builtin_memmove((R+8),(R+4),1);
}
B5dd619:{NFSU2_TR(0x5dd619);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xfull))));
}
B5dd61c:{NFSU2_TR(0x5dd61c);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5dd61f:{NFSU2_TR(0x5dd61f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dd664;}}
}
B5dd621:L5dd621:{c.instructions+=2;NFSU2_TR(0x5dd621);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B5dd625:{NFSU2_TR(0x5dd625);
{goto L5dd668;}
}
B5dd627:L5dd627:{c.instructions+=3;NFSU2_TR(0x5dd627);
__builtin_memmove((R+8),(R+4),4);
}
B5dd629:{NFSU2_TR(0x5dd629);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5dd62c:{NFSU2_TR(0x5dd62c);
{goto L5dd630;}
}
B5dd62e:L5dd62e:{c.instructions+=1;NFSU2_TR(0x5dd62e);
__builtin_memmove((R+8),(R+4),1);
}
B5dd630:L5dd630:{c.instructions+=5;NFSU2_TR(0x5dd630);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xfull))));
}
B5dd633:{NFSU2_TR(0x5dd633);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5dd636:{NFSU2_TR(0x5dd636);
__builtin_memmove((R+8),(R+518),1);
}
B5dd639:{NFSU2_TR(0x5dd639);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dd63b:{NFSU2_TR(0x5dd63b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dd614u);}goto L5dd614;}}
}
B5dd63d:L5dd63d:{c.instructions+=3;NFSU2_TR(0x5dd63d);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5dd641:{NFSU2_TR(0x5dd641);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dd643:{NFSU2_TR(0x5dd643);
if(r1(R+518)){{goto L5dd65e;}}
}
B5dd645:L5dd645:{c.instructions+=3;NFSU2_TR(0x5dd645);
__builtin_memmove((R+8),(R+0),4);
}
B5dd647:{NFSU2_TR(0x5dd647);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5dd64a:{NFSU2_TR(0x5dd64a);
if(r1(R+518)){{goto L5dd657;}}
}
B5dd64c:L5dd64c:{c.instructions+=2;NFSU2_TR(0x5dd64c);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5dd64d:{NFSU2_TR(0x5dd64d);
if(r1(R+518)){{goto L5dd654;}}
}
B5dd64f:L5dd64f:{c.instructions+=2;NFSU2_TR(0x5dd64f);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5dd650:{NFSU2_TR(0x5dd650);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dd65e;}}
}
B5dd652:L5dd652:{c.instructions+=1;NFSU2_TR(0x5dd652);
{goto L5dd657;}
}
B5dd654:L5dd654:{c.instructions+=1;NFSU2_TR(0x5dd654);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5dd657:L5dd657:{c.instructions+=3;NFSU2_TR(0x5dd657);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5dd65a:{NFSU2_TR(0x5dd65a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dd65c:{NFSU2_TR(0x5dd65c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dd614u);}goto L5dd614;}}
}
B5dd65e:L5dd65e:{c.instructions+=2;NFSU2_TR(0x5dd65e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5dd65f:{NFSU2_TR(0x5dd65f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dd5a1u);}goto L5dd5a1;}
}
B5dd664:L5dd664:{c.instructions+=1;NFSU2_TR(0x5dd664);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B5dd668:L5dd668:{c.instructions+=2;NFSU2_TR(0x5dd668);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5dd66b:{NFSU2_TR(0x5dd66b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dd673;}}
}
B5dd66d:L5dd66d:{c.instructions+=2;NFSU2_TR(0x5dd66d);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5dd671:{NFSU2_TR(0x5dd671);
{goto L5dd677;}
}
B5dd673:L5dd673:{c.instructions+=1;NFSU2_TR(0x5dd673);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5dd677:L5dd677:{c.instructions+=3;NFSU2_TR(0x5dd677);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B5dd67a:{NFSU2_TR(0x5dd67a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5dd67c:{NFSU2_TR(0x5dd67c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5dd687;}}
}
B5dd67e:L5dd67e:{c.instructions+=2;NFSU2_TR(0x5dd67e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5dd685:{NFSU2_TR(0x5dd685);
{goto L5dd689;}
}
B5dd687:L5dd687:{c.instructions+=1;NFSU2_TR(0x5dd687);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5dd689:L5dd689:{c.instructions+=6;NFSU2_TR(0x5dd689);
w4(R+8,u32(s32(s16(r2(R+24)))));
}
B5dd68c:{NFSU2_TR(0x5dd68c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5dd68f:{NFSU2_TR(0x5dd68f);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5dd692:{NFSU2_TR(0x5dd692);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dd695:{NFSU2_TR(0x5dd695);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B5dd69c:{NFSU2_TR(0x5dd69c);
if(r1(R+518)){{goto L5dd6b1;}}
}
B5dd69e:L5dd69e:{c.instructions+=6;NFSU2_TR(0x5dd69e);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5dd6a2:{NFSU2_TR(0x5dd6a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dd6a6:{NFSU2_TR(0x5dd6a6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dd6a8:{NFSU2_TR(0x5dd6a8);
__builtin_memmove((R+0),(R+518),1);
}
B5dd6ab:{NFSU2_TR(0x5dd6ab);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5dd6af:{NFSU2_TR(0x5dd6af);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B5dd6b1:L5dd6b1:{c.instructions+=2;NFSU2_TR(0x5dd6b1);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B5dd6b3:{NFSU2_TR(0x5dd6b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dd764;}}
}
B5dd6b9:L5dd6b9:{c.instructions+=2;NFSU2_TR(0x5dd6b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dd6bb:{NFSU2_TR(0x5dd6bb);
if(r1(R+518)){{goto L5dd6cf;}}
}
B5dd6bd:L5dd6bd:{c.instructions+=4;NFSU2_TR(0x5dd6bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dd6c0:{NFSU2_TR(0x5dd6c0);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ffull))));
}
B5dd6c6:{NFSU2_TR(0x5dd6c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5dd6cd:{NFSU2_TR(0x5dd6cd);
{goto L5dd6d1;}
}
B5dd6cf:L5dd6cf:{c.instructions+=1;NFSU2_TR(0x5dd6cf);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5dd6d1:L5dd6d1:{c.instructions+=6;NFSU2_TR(0x5dd6d1);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5dd6d5:{NFSU2_TR(0x5dd6d5);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B5dd6d7:{NFSU2_TR(0x5dd6d7);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x8cull))));
}
B5dd6dd:{NFSU2_TR(0x5dd6dd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dd6df:{NFSU2_TR(0x5dd6df);
w4(R+0,u32(0x92492493ull));
}
B5dd6e4:{NFSU2_TR(0x5dd6e4);
if(r1(R+518)){{goto L5dd70b;}}
}
B5dd6e6:L5dd6e6:{c.instructions+=10;NFSU2_TR(0x5dd6e6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5dd6e8:{NFSU2_TR(0x5dd6e8);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B5dd6ea:{NFSU2_TR(0x5dd6ea);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5dd6ed:{NFSU2_TR(0x5dd6ed);
__builtin_memmove((R+0),(R+8),4);
}
B5dd6ef:{NFSU2_TR(0x5dd6ef);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5dd6f2:{NFSU2_TR(0x5dd6f2);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5dd6f4:{NFSU2_TR(0x5dd6f4);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5dd6f8:{NFSU2_TR(0x5dd6f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dd6fb:{NFSU2_TR(0x5dd6fb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dd6fd:{NFSU2_TR(0x5dd6fd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5dd75a;}}
}
B5dd6ff:L5dd6ff:{c.instructions+=3;NFSU2_TR(0x5dd6ff);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5dd702:{NFSU2_TR(0x5dd702);
u8 U[12];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5dd709:{NFSU2_TR(0x5dd709);
{goto L5dd722;}
}
B5dd70b:L5dd70b:{c.instructions+=7;NFSU2_TR(0x5dd70b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5dd70d:{NFSU2_TR(0x5dd70d);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B5dd70f:{NFSU2_TR(0x5dd70f);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5dd712:{NFSU2_TR(0x5dd712);
__builtin_memmove((R+0),(R+8),4);
}
B5dd714:{NFSU2_TR(0x5dd714);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5dd717:{NFSU2_TR(0x5dd717);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5dd719:{NFSU2_TR(0x5dd719);
if(r1(R+518)){{goto L5dd75a;}}
}
B5dd71b:L5dd71b:{c.instructions+=2;NFSU2_TR(0x5dd71b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5dd71e:{NFSU2_TR(0x5dd71e);
u8 U[12];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5dd722:L5dd722:{c.instructions+=2;NFSU2_TR(0x5dd722);
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
B5dd724:{NFSU2_TR(0x5dd724);
if(r1(R+518)){{goto L5dd766;}}
}
B5dd726:L5dd726:{c.instructions+=3;NFSU2_TR(0x5dd726);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5dd72a:{NFSU2_TR(0x5dd72a);
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
B5dd72c:{NFSU2_TR(0x5dd72c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dd766;}}
}
B5dd72e:L5dd72e:{c.instructions+=3;NFSU2_TR(0x5dd72e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dd732:{NFSU2_TR(0x5dd732);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5dd735:{NFSU2_TR(0x5dd735);
if(r1(R+518)){{goto L5dd74d;}}
}
B5dd737:L5dd737:{c.instructions+=2;NFSU2_TR(0x5dd737);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5dd738:{NFSU2_TR(0x5dd738);
if(r1(R+518)){{goto L5dd745;}}
}
B5dd73a:L5dd73a:{c.instructions+=2;NFSU2_TR(0x5dd73a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5dd73b:{NFSU2_TR(0x5dd73b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dd75a;}}
}
B5dd73d:L5dd73d:{c.instructions+=3;NFSU2_TR(0x5dd73d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dd740:{NFSU2_TR(0x5dd740);
u8 U[4];
w4(U+0,u32(u32(u32(0x1bull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5dd743:{NFSU2_TR(0x5dd743);
{goto L5dd753;}
}
B5dd745:L5dd745:{c.instructions+=3;NFSU2_TR(0x5dd745);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dd748:{NFSU2_TR(0x5dd748);
u8 U[4];
w4(U+0,u32(u32(u32(0x19ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5dd74b:{NFSU2_TR(0x5dd74b);
{goto L5dd753;}
}
B5dd74d:L5dd74d:{c.instructions+=2;NFSU2_TR(0x5dd74d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dd750:{NFSU2_TR(0x5dd750);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5dd753:L5dd753:{c.instructions+=3;NFSU2_TR(0x5dd753);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1ull))));
}
B5dd756:{NFSU2_TR(0x5dd756);
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
B5dd758:{NFSU2_TR(0x5dd758);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dd766;}}
}
B5dd75a:L5dd75a:{c.instructions+=7;NFSU2_TR(0x5dd75a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dd75b:{NFSU2_TR(0x5dd75b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5dd75c:{NFSU2_TR(0x5dd75c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dd75d:{NFSU2_TR(0x5dd75d);
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
B5dd75f:{NFSU2_TR(0x5dd75f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5dd760:{NFSU2_TR(0x5dd760);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5dd761:{NFSU2_TR(0x5dd761);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dd764:L5dd764:{c.instructions+=1;NFSU2_TR(0x5dd764);
__builtin_memmove((R+0),(R+24),4);
}
B5dd766:L5dd766:{c.instructions+=6;NFSU2_TR(0x5dd766);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dd767:{NFSU2_TR(0x5dd767);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5dd768:{NFSU2_TR(0x5dd768);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dd769:{NFSU2_TR(0x5dd769);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5dd76a:{NFSU2_TR(0x5dd76a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5dd76b:{NFSU2_TR(0x5dd76b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dd770:L5dd770:{c.instructions+=3;NFSU2_TR(0x5dd770);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dd774:{NFSU2_TR(0x5dd774);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5dd777:{NFSU2_TR(0x5dd777);
if(r1(R+518)){{goto L5dd7be;}}
}
B5dd779:L5dd779:{c.instructions+=2;NFSU2_TR(0x5dd779);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5dd77a:{NFSU2_TR(0x5dd77a);
if(r1(R+518)){{goto L5dd7a1;}}
}
B5dd77c:L5dd77c:{c.instructions+=2;NFSU2_TR(0x5dd77c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5dd77d:{NFSU2_TR(0x5dd77d);
if(r1(R+518)){{goto L5dd784;}}
}
B5dd77f:L5dd77f:{c.instructions+=2;NFSU2_TR(0x5dd77f);
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
B5dd781:{NFSU2_TR(0x5dd781);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dd784:L5dd784:{c.instructions+=4;NFSU2_TR(0x5dd784);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5dd788:{NFSU2_TR(0x5dd788);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dd78a:{NFSU2_TR(0x5dd78a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dd78d:{NFSU2_TR(0x5dd78d);
if(r1(R+518)){{goto L5dd798;}}
}
B5dd78f:L5dd78f:{c.instructions+=3;NFSU2_TR(0x5dd78f);
u8 U[4];
w4(U+0,u32(u32(u32(0x1bull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5dd792:{NFSU2_TR(0x5dd792);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5dd795:{NFSU2_TR(0x5dd795);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dd798:L5dd798:{c.instructions+=3;NFSU2_TR(0x5dd798);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5dd79b:{NFSU2_TR(0x5dd79b);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5dd79e:{NFSU2_TR(0x5dd79e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dd7a1:L5dd7a1:{c.instructions+=4;NFSU2_TR(0x5dd7a1);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5dd7a5:{NFSU2_TR(0x5dd7a5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dd7a7:{NFSU2_TR(0x5dd7a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dd7aa:{NFSU2_TR(0x5dd7aa);
if(r1(R+518)){{goto L5dd7b5;}}
}
B5dd7ac:L5dd7ac:{c.instructions+=3;NFSU2_TR(0x5dd7ac);
u8 U[4];
w4(U+0,u32(u32(u32(0x19ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5dd7af:{NFSU2_TR(0x5dd7af);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5dd7b2:{NFSU2_TR(0x5dd7b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dd7b5:L5dd7b5:{c.instructions+=3;NFSU2_TR(0x5dd7b5);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5dd7b8:{NFSU2_TR(0x5dd7b8);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5dd7bb:{NFSU2_TR(0x5dd7bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dd7be:L5dd7be:{c.instructions+=4;NFSU2_TR(0x5dd7be);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5dd7c2:{NFSU2_TR(0x5dd7c2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dd7c4:{NFSU2_TR(0x5dd7c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dd7c7:{NFSU2_TR(0x5dd7c7);
if(r1(R+518)){{goto L5dd7d2;}}
}
B5dd7c9:L5dd7c9:{c.instructions+=3;NFSU2_TR(0x5dd7c9);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5dd7cc:{NFSU2_TR(0x5dd7cc);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5dd7cf:{NFSU2_TR(0x5dd7cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dd7d2:L5dd7d2:{c.instructions+=3;NFSU2_TR(0x5dd7d2);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5dd7d5:{NFSU2_TR(0x5dd7d5);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5dd7d8:{NFSU2_TR(0x5dd7d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dd7e0:L5dd7e0:{c.instructions+=23;NFSU2_TR(0x5dd7e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x78ull))));
}
B5dd7e3:{NFSU2_TR(0x5dd7e3);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dd7e9:{NFSU2_TR(0x5dd7e9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd7ea:{NFSU2_TR(0x5dd7ea);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dd7f0:{NFSU2_TR(0x5dd7f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd7f1:{NFSU2_TR(0x5dd7f1);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5dd7f3:{NFSU2_TR(0x5dd7f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd7f4:{NFSU2_TR(0x5dd7f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd7f5:{NFSU2_TR(0x5dd7f5);
__builtin_memmove((R+28),(R+4),4);
}
B5dd7f7:{NFSU2_TR(0x5dd7f7);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dd7fb:{NFSU2_TR(0x5dd7fb);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5dd7fd:{NFSU2_TR(0x5dd7fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5dd801:{NFSU2_TR(0x5dd801);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5dd803:{NFSU2_TR(0x5dd803);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dd807:{NFSU2_TR(0x5dd807);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5dd809:{NFSU2_TR(0x5dd809);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dd80d:{NFSU2_TR(0x5dd80d);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5dd811:{NFSU2_TR(0x5dd811);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5dd815:{NFSU2_TR(0x5dd815);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dd819:{NFSU2_TR(0x5dd819);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5dd81b:{NFSU2_TR(0x5dd81b);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5dd81f:{NFSU2_TR(0x5dd81f);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dd823:{NFSU2_TR(0x5dd823);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dd828ull));
TAIL_STATIC(0x5da2f0u,5da);
}
B5dd828:L5dd828:{c.instructions+=15;NFSU2_TR(0x5dd828);
{u32 ea_=u32(r4(R+28)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dd82e:{NFSU2_TR(0x5dd82e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8cull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dd834:{NFSU2_TR(0x5dd834);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5dd838:{NFSU2_TR(0x5dd838);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dd83c:{NFSU2_TR(0x5dd83c);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5dd83e:{NFSU2_TR(0x5dd83e);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dd840:{NFSU2_TR(0x5dd840);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5dd844:{NFSU2_TR(0x5dd844);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5dd846:{NFSU2_TR(0x5dd846);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5dd848:{NFSU2_TR(0x5dd848);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5dd84a:{NFSU2_TR(0x5dd84a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5dd84c:{NFSU2_TR(0x5dd84c);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5dd853:{NFSU2_TR(0x5dd853);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5dd855:{NFSU2_TR(0x5dd855);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dd858:{NFSU2_TR(0x5dd858);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dd86b;}}
}
B5dd85a:L5dd85a:{c.instructions+=6;NFSU2_TR(0x5dd85a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd85b:{NFSU2_TR(0x5dd85b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd85c:{NFSU2_TR(0x5dd85c);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5dd860:{NFSU2_TR(0x5dd860);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd861:{NFSU2_TR(0x5dd861);
w4(R+4,u32(0x88f298ull));
}
B5dd866:{NFSU2_TR(0x5dd866);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dd86bull));
TAIL_STATIC(0x5d9e30u,5d9);
}
B5dd86b:L5dd86b:{c.instructions+=4;NFSU2_TR(0x5dd86b);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5dd86e:{NFSU2_TR(0x5dd86e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dd870:{NFSU2_TR(0x5dd870);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5dd873:{NFSU2_TR(0x5dd873);
if(r1(R+518)){{goto L5dd8b5;}}
}
B5dd875:L5dd875:{c.instructions+=2;NFSU2_TR(0x5dd875);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd876:{NFSU2_TR(0x5dd876);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dd87bull));
TAIL_STATIC(0x43db50u,43d);
}
B5dd87b:L5dd87b:{c.instructions+=5;NFSU2_TR(0x5dd87b);
__builtin_memmove((R+28),gp(0x88f298),4);
}
B5dd881:{NFSU2_TR(0x5dd881);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5dd884:{NFSU2_TR(0x5dd884);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5dd886:{NFSU2_TR(0x5dd886);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dd888:{NFSU2_TR(0x5dd888);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5dd8b5;}}
}
B5dd88a:L5dd88a:{c.instructions+=1;NFSU2_TR(0x5dd88a);
__builtin_memmove((R+8),gp(0x88f29c),4);
}
B5dd890:L5dd890:{c.instructions+=2;NFSU2_TR(0x5dd890);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5dd893:{NFSU2_TR(0x5dd893);
if(r1(R+518)){{goto L5dd8a2;}}
}
B5dd895:L5dd895:{c.instructions+=4;NFSU2_TR(0x5dd895);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5dd896:{NFSU2_TR(0x5dd896);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xdcull))));
}
B5dd89c:{NFSU2_TR(0x5dd89c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dd89e:{NFSU2_TR(0x5dd89e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dd890u);}goto L5dd890;}}
}
B5dd8a0:L5dd8a0:{c.instructions+=1;NFSU2_TR(0x5dd8a0);
{goto L5dd8b5;}
}
B5dd8a2:L5dd8a2:{c.instructions+=2;NFSU2_TR(0x5dd8a2);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5dd8a8:{NFSU2_TR(0x5dd8a8);
if(r1(R+518)){{goto L5dd8b5;}}
}
B5dd8aa:L5dd8aa:{c.instructions+=4;NFSU2_TR(0x5dd8aa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd8ab:{NFSU2_TR(0x5dd8ab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd8ac:{NFSU2_TR(0x5dd8ac);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5dd8b0:{NFSU2_TR(0x5dd8b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dd8b5ull));
TAIL_STATIC(0x5da450u,5da);
}
B5dd8b5:L5dd8b5:{c.instructions+=24;NFSU2_TR(0x5dd8b5);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dd8b9:{NFSU2_TR(0x5dd8b9);
__builtin_memmove((R+0),gp(0x88f2b8),4);
}
B5dd8be:{NFSU2_TR(0x5dd8be);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5dd8c2:{NFSU2_TR(0x5dd8c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dd8c6:{NFSU2_TR(0x5dd8c6);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dd8ca:{NFSU2_TR(0x5dd8ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dd8ce:{NFSU2_TR(0x5dd8ce);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5dd8d2:{NFSU2_TR(0x5dd8d2);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B5dd8d4:{NFSU2_TR(0x5dd8d4);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5dd8d8:{NFSU2_TR(0x5dd8d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dd8dc:{NFSU2_TR(0x5dd8dc);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5dd8de:{NFSU2_TR(0x5dd8de);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5dd8e0:{NFSU2_TR(0x5dd8e0);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5dd8e2:{NFSU2_TR(0x5dd8e2);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5dd8e4:{NFSU2_TR(0x5dd8e4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5dd8e6:{NFSU2_TR(0x5dd8e6);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5dd8e8:{NFSU2_TR(0x5dd8e8);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5dd8ea:{NFSU2_TR(0x5dd8ea);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5dd8ec:{NFSU2_TR(0x5dd8ec);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dd8f0:{NFSU2_TR(0x5dd8f0);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dd8f4:{NFSU2_TR(0x5dd8f4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5dd8f8:{NFSU2_TR(0x5dd8f8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5dd8fa:{NFSU2_TR(0x5dd8fa);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5dd8fd:{NFSU2_TR(0x5dd8fd);
if(r1(R+514)){{goto L5dd903;}}
}
B5dd8ff:L5dd8ff:{c.instructions+=2;NFSU2_TR(0x5dd8ff);
w1(R+4,u8(0x1ull));
}
B5dd901:{NFSU2_TR(0x5dd901);
{goto L5dd905;}
}
B5dd903:L5dd903:{c.instructions+=1;NFSU2_TR(0x5dd903);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B5dd905:L5dd905:{c.instructions+=4;NFSU2_TR(0x5dd905);
__builtin_memmove((R+0),gp(0x88f2bc),1);
}
B5dd90a:{NFSU2_TR(0x5dd90a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dd90c:{NFSU2_TR(0x5dd90c);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5dd910:{NFSU2_TR(0x5dd910);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dd96a;}}
}
B5dd912:L5dd912:{c.instructions+=10;NFSU2_TR(0x5dd912);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dd916:{NFSU2_TR(0x5dd916);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5dd918:{NFSU2_TR(0x5dd918);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dd91e:{NFSU2_TR(0x5dd91e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5dd922:{NFSU2_TR(0x5dd922);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dd926:{NFSU2_TR(0x5dd926);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dd92a:{NFSU2_TR(0x5dd92a);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5dd92c:{NFSU2_TR(0x5dd92c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5dd92e:{NFSU2_TR(0x5dd92e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dd931:{NFSU2_TR(0x5dd931);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dd939;}}
}
B5dd933:L5dd933:{c.instructions+=2;NFSU2_TR(0x5dd933);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5dd935:{NFSU2_TR(0x5dd935);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dd939:L5dd939:{c.instructions+=5;NFSU2_TR(0x5dd939);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dd93d:{NFSU2_TR(0x5dd93d);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5dd93f:{NFSU2_TR(0x5dd93f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5dd941:{NFSU2_TR(0x5dd941);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5dd944:{NFSU2_TR(0x5dd944);
if(r1(R+514)){{goto L5dd94c;}}
}
B5dd946:L5dd946:{c.instructions+=2;NFSU2_TR(0x5dd946);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5dd948:{NFSU2_TR(0x5dd948);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dd94c:L5dd94c:{c.instructions+=6;NFSU2_TR(0x5dd94c);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dd950:{NFSU2_TR(0x5dd950);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5dd952:{NFSU2_TR(0x5dd952);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5dd954:{NFSU2_TR(0x5dd954);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5dd956:{NFSU2_TR(0x5dd956);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5dd959:{NFSU2_TR(0x5dd959);
if(r1(R+514)){{goto L5dd962;}}
}
B5dd95b:L5dd95b:{c.instructions+=2;NFSU2_TR(0x5dd95b);
w4(R+0,u32(0x1ull));
}
B5dd960:{NFSU2_TR(0x5dd960);
{goto L5dd964;}
}
B5dd962:L5dd962:{c.instructions+=1;NFSU2_TR(0x5dd962);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5dd964:L5dd964:{c.instructions+=2;NFSU2_TR(0x5dd964);
w1(R+4,u8(u32(r1(R+4))&u32(r1(R+0))));
}
B5dd966:{NFSU2_TR(0x5dd966);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5dd96a:L5dd96a:{c.instructions+=11;NFSU2_TR(0x5dd96a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dd96d:{NFSU2_TR(0x5dd96d);
w1(R+512,u8((r1(R+4))!=(u8(0x0ull))));
w1(R+4,u8(0-u32(r1(R+4))));
}
B5dd96f:{NFSU2_TR(0x5dd96f);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5dd971:{NFSU2_TR(0x5dd971);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x20000000ull))));
}
B5dd977:{NFSU2_TR(0x5dd977);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xdfffffffull))));
}
B5dd97c:{NFSU2_TR(0x5dd97c);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B5dd97e:{NFSU2_TR(0x5dd97e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dd981:{NFSU2_TR(0x5dd981);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dd985:{NFSU2_TR(0x5dd985);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dd988:{NFSU2_TR(0x5dd988);
__builtin_memmove((R+20),gp(0x883db4),4);
}
B5dd98e:{NFSU2_TR(0x5dd98e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5dd990:L5dd990:{c.instructions+=4;NFSU2_TR(0x5dd990);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5dd994:{NFSU2_TR(0x5dd994);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5dd996:{NFSU2_TR(0x5dd996);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dd99b:{NFSU2_TR(0x5dd99b);
if(r1(R+518)){{goto L5dd9a6;}}
}
B5dd99d:L5dd99d:{c.instructions+=2;NFSU2_TR(0x5dd99d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dd99f:{NFSU2_TR(0x5dd99f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5dd9a6;}}
}
B5dd9a1:L5dd9a1:{c.instructions+=1;NFSU2_TR(0x5dd9a1);
w4(R+4,u32(0x1ull));
}
B5dd9a6:L5dd9a6:{c.instructions+=3;NFSU2_TR(0x5dd9a6);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5dd9aa:{NFSU2_TR(0x5dd9aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dd9af:{NFSU2_TR(0x5dd9af);
if(r1(R+518)){{goto L5dd9b6;}}
}
B5dd9b1:L5dd9b1:{c.instructions+=2;NFSU2_TR(0x5dd9b1);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dd9b3:{NFSU2_TR(0x5dd9b3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5dd9b6;}}
}
B5dd9b5:L5dd9b5:{c.instructions+=1;NFSU2_TR(0x5dd9b5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5dd9b6:L5dd9b6:{c.instructions+=2;NFSU2_TR(0x5dd9b6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dd9b8:{NFSU2_TR(0x5dd9b8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5dd9db;}}
}
B5dd9ba:L5dd9ba:{c.instructions+=2;NFSU2_TR(0x5dd9ba);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dd9bc:{NFSU2_TR(0x5dd9bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dd9d6;}}
}
B5dd9be:L5dd9be:{c.instructions+=3;NFSU2_TR(0x5dd9be);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dd9bf:{NFSU2_TR(0x5dd9bf);
__builtin_memmove((R+4),(R+24),4);
}
B5dd9c1:{NFSU2_TR(0x5dd9c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dd9c6ull));
TAIL_STATIC(0x5d43c0u,5d4);
}
B5dd9c6:L5dd9c6:{c.instructions+=4;NFSU2_TR(0x5dd9c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dd9c9:{NFSU2_TR(0x5dd9c9);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5dd9cc:{NFSU2_TR(0x5dd9cc);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dd9cf:{NFSU2_TR(0x5dd9cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dd9d6;}}
}
B5dd9d1:L5dd9d1:{c.instructions+=3;NFSU2_TR(0x5dd9d1);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B5dd9d3:{NFSU2_TR(0x5dd9d3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5dd9d4:{NFSU2_TR(0x5dd9d4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dd990u);}goto L5dd990;}
}
B5dd9d6:L5dd9d6:{c.instructions+=3;NFSU2_TR(0x5dd9d6);
w1(R+8,u8(0x1ull));
}
B5dd9d8:{NFSU2_TR(0x5dd9d8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5dd9d9:{NFSU2_TR(0x5dd9d9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dd990u);}goto L5dd990;}
}
B5dd9db:L5dd9db:{c.instructions+=6;NFSU2_TR(0x5dd9db);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dd9df:{NFSU2_TR(0x5dd9df);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5dd9e3:{NFSU2_TR(0x5dd9e3);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5dd9e7:{NFSU2_TR(0x5dd9e7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5dd9e9:{NFSU2_TR(0x5dd9e9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dd9ec:{NFSU2_TR(0x5dd9ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dd9f6;}}
}
B5dd9ee:L5dd9ee:{c.instructions+=2;NFSU2_TR(0x5dd9ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dd9f2:{NFSU2_TR(0x5dd9f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dd9f6:L5dd9f6:{c.instructions+=5;NFSU2_TR(0x5dd9f6);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dd9fa:{NFSU2_TR(0x5dd9fa);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5dd9fe:{NFSU2_TR(0x5dd9fe);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5dda00:{NFSU2_TR(0x5dda00);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5dda03:{NFSU2_TR(0x5dda03);
if(r1(R+514)){{goto L5dda0d;}}
}
B5dda05:L5dda05:{c.instructions+=2;NFSU2_TR(0x5dda05);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dda09:{NFSU2_TR(0x5dda09);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dda0d:L5dda0d:{c.instructions+=7;NFSU2_TR(0x5dda0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dda11:{NFSU2_TR(0x5dda11);
w4(R+0,u32(0x1ull));
}
B5dda16:{NFSU2_TR(0x5dda16);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+523,sborrow<u16>(r2(U+6),r2(R+0)));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+0))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5dda1a:{NFSU2_TR(0x5dda1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dda1e:{NFSU2_TR(0x5dda1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dda22:{NFSU2_TR(0x5dda22);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dda26:{NFSU2_TR(0x5dda26);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ddd27;}}
}
B5dda2c:L5dda2c:{c.instructions+=2;NFSU2_TR(0x5dda2c);
__builtin_memmove((R+28),(R+8),4);
}
B5dda2e:{NFSU2_TR(0x5dda2e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
}
B5dda34:L5dda34:{c.instructions+=5;NFSU2_TR(0x5dda34);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dda35:{NFSU2_TR(0x5dda35);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5dda38:{NFSU2_TR(0x5dda38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dda39:{NFSU2_TR(0x5dda39);
w4(R+4,u32(0x88f298ull));
}
B5dda3e:{NFSU2_TR(0x5dda3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dda43ull));
TAIL_STATIC(0x5d2e60u,5d2);
}
B5dda43:L5dda43:{c.instructions+=4;NFSU2_TR(0x5dda43);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dda4a:{NFSU2_TR(0x5dda4a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5dda4c:{NFSU2_TR(0x5dda4c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dda4e:{NFSU2_TR(0x5dda4e);
if(r1(R+518)){{goto L5dda5e;}}
}
B5dda50:L5dda50:{c.instructions+=2;NFSU2_TR(0x5dda50);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dda52:{NFSU2_TR(0x5dda52);
if(r1(R+518)){{goto L5dda5e;}}
}
B5dda54:L5dda54:{c.instructions+=3;NFSU2_TR(0x5dda54);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5dda57:{NFSU2_TR(0x5dda57);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dda59:{NFSU2_TR(0x5dda59);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dda5e;}}
}
B5dda5b:L5dda5b:{c.instructions+=1;NFSU2_TR(0x5dda5b);
u8 U[1];
w1(U+0,u8(0x1ull));
s1(u32(r4(R+4)),r1(U+0));
}
B5dda5e:L5dda5e:{c.instructions+=14;NFSU2_TR(0x5dda5e);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dda61:{NFSU2_TR(0x5dda61);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5dda65:{NFSU2_TR(0x5dda65);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5dda69:{NFSU2_TR(0x5dda69);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dda6b:{NFSU2_TR(0x5dda6b);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5dda6d:{NFSU2_TR(0x5dda6d);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dda6f:{NFSU2_TR(0x5dda6f);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5dda73:{NFSU2_TR(0x5dda73);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5dda75:{NFSU2_TR(0x5dda75);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5dda77:{NFSU2_TR(0x5dda77);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5dda79:{NFSU2_TR(0x5dda79);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5dda7b:{NFSU2_TR(0x5dda7b);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5dda82:{NFSU2_TR(0x5dda82);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5dda84:{NFSU2_TR(0x5dda84);
if(r1(R+518)){{goto L5dda94;}}
}
B5dda86:L5dda86:{c.instructions+=2;NFSU2_TR(0x5dda86);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dda89:{NFSU2_TR(0x5dda89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ddaae;}}
}
B5dda8b:L5dda8b:{c.instructions+=5;NFSU2_TR(0x5dda8b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dda8c:{NFSU2_TR(0x5dda8c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dda8d:{NFSU2_TR(0x5dda8d);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5dda91:{NFSU2_TR(0x5dda91);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dda92:{NFSU2_TR(0x5dda92);
{goto L5ddaa4;}
}
B5dda94:L5dda94:{c.instructions+=3;NFSU2_TR(0x5dda94);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dda97:{NFSU2_TR(0x5dda97);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dda9b:{NFSU2_TR(0x5dda9b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ddaae;}}
}
B5dda9d:L5dda9d:{c.instructions+=4;NFSU2_TR(0x5dda9d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dda9e:{NFSU2_TR(0x5dda9e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dda9f:{NFSU2_TR(0x5dda9f);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ddaa3:{NFSU2_TR(0x5ddaa3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ddaa4:L5ddaa4:{c.instructions+=2;NFSU2_TR(0x5ddaa4);
w4(R+4,u32(0x88f298ull));
}
B5ddaa9:{NFSU2_TR(0x5ddaa9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ddaaeull));
TAIL_STATIC(0x5d9e30u,5d9);
}
B5ddaae:L5ddaae:{c.instructions+=17;NFSU2_TR(0x5ddaae);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ddab2:{NFSU2_TR(0x5ddab2);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ddab6:{NFSU2_TR(0x5ddab6);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ddaba:{NFSU2_TR(0x5ddaba);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ddabe:{NFSU2_TR(0x5ddabe);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5ddac0:{NFSU2_TR(0x5ddac0);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5ddac2:{NFSU2_TR(0x5ddac2);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5ddac4:{NFSU2_TR(0x5ddac4);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5ddac6:{NFSU2_TR(0x5ddac6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5ddac8:{NFSU2_TR(0x5ddac8);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5ddaca:{NFSU2_TR(0x5ddaca);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5ddacc:{NFSU2_TR(0x5ddacc);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ddace:{NFSU2_TR(0x5ddace);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ddad2:{NFSU2_TR(0x5ddad2);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5ddad4:{NFSU2_TR(0x5ddad4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ddad6:{NFSU2_TR(0x5ddad6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ddad9:{NFSU2_TR(0x5ddad9);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5ddadf;}}
}
B5ddadb:L5ddadb:{c.instructions+=1;NFSU2_TR(0x5ddadb);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5ddadf:L5ddadf:{c.instructions+=4;NFSU2_TR(0x5ddadf);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ddae3:{NFSU2_TR(0x5ddae3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ddae5:{NFSU2_TR(0x5ddae5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ddae8:{NFSU2_TR(0x5ddae8);
if(r1(R+514)){{goto L5ddaee;}}
}
B5ddaea:L5ddaea:{c.instructions+=2;NFSU2_TR(0x5ddaea);
w1(R+4,u8(0x1ull));
}
B5ddaec:{NFSU2_TR(0x5ddaec);
{goto L5ddaf0;}
}
B5ddaee:L5ddaee:{c.instructions+=1;NFSU2_TR(0x5ddaee);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B5ddaf0:L5ddaf0:{c.instructions+=4;NFSU2_TR(0x5ddaf0);
__builtin_memmove((R+0),gp(0x88f2bc),1);
}
B5ddaf5:{NFSU2_TR(0x5ddaf5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ddaf7:{NFSU2_TR(0x5ddaf7);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5ddafb:{NFSU2_TR(0x5ddafb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ddb55;}}
}
B5ddafd:L5ddafd:{c.instructions+=10;NFSU2_TR(0x5ddafd);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ddb01:{NFSU2_TR(0x5ddb01);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5ddb03:{NFSU2_TR(0x5ddb03);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ddb09:{NFSU2_TR(0x5ddb09);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ddb0d:{NFSU2_TR(0x5ddb0d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ddb11:{NFSU2_TR(0x5ddb11);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ddb15:{NFSU2_TR(0x5ddb15);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5ddb17:{NFSU2_TR(0x5ddb17);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ddb19:{NFSU2_TR(0x5ddb19);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ddb1c:{NFSU2_TR(0x5ddb1c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ddb24;}}
}
B5ddb1e:L5ddb1e:{c.instructions+=2;NFSU2_TR(0x5ddb1e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ddb20:{NFSU2_TR(0x5ddb20);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ddb24:L5ddb24:{c.instructions+=5;NFSU2_TR(0x5ddb24);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ddb28:{NFSU2_TR(0x5ddb28);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5ddb2a:{NFSU2_TR(0x5ddb2a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ddb2c:{NFSU2_TR(0x5ddb2c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ddb2f:{NFSU2_TR(0x5ddb2f);
if(r1(R+514)){{goto L5ddb37;}}
}
B5ddb31:L5ddb31:{c.instructions+=2;NFSU2_TR(0x5ddb31);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ddb33:{NFSU2_TR(0x5ddb33);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ddb37:L5ddb37:{c.instructions+=6;NFSU2_TR(0x5ddb37);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ddb3b:{NFSU2_TR(0x5ddb3b);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5ddb3d:{NFSU2_TR(0x5ddb3d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ddb3f:{NFSU2_TR(0x5ddb3f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ddb41:{NFSU2_TR(0x5ddb41);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ddb44:{NFSU2_TR(0x5ddb44);
if(r1(R+514)){{goto L5ddb4d;}}
}
B5ddb46:L5ddb46:{c.instructions+=2;NFSU2_TR(0x5ddb46);
w4(R+0,u32(0x1ull));
}
B5ddb4b:{NFSU2_TR(0x5ddb4b);
{goto L5ddb4f;}
}
B5ddb4d:L5ddb4d:{c.instructions+=1;NFSU2_TR(0x5ddb4d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ddb4f:L5ddb4f:{c.instructions+=2;NFSU2_TR(0x5ddb4f);
w1(R+4,u8(u32(r1(R+4))&u32(r1(R+0))));
}
B5ddb51:{NFSU2_TR(0x5ddb51);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5ddb55:L5ddb55:{c.instructions+=18;NFSU2_TR(0x5ddb55);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ddb59:{NFSU2_TR(0x5ddb59);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ddb5c:{NFSU2_TR(0x5ddb5c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ddb60:{NFSU2_TR(0x5ddb60);
__builtin_memmove((R+0),(R+4),1);
}
B5ddb62:{NFSU2_TR(0x5ddb62);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B5ddb64:{NFSU2_TR(0x5ddb64);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5ddb66:{NFSU2_TR(0x5ddb66);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5ddb68:{NFSU2_TR(0x5ddb68);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ddb6c:{NFSU2_TR(0x5ddb6c);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5ddb6e:{NFSU2_TR(0x5ddb6e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x20000000ull))));
}
B5ddb73:{NFSU2_TR(0x5ddb73);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xdfffffffull))));
}
B5ddb79:{NFSU2_TR(0x5ddb79);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B5ddb7b:{NFSU2_TR(0x5ddb7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ddb7e:{NFSU2_TR(0x5ddb7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ddb82:{NFSU2_TR(0x5ddb82);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ddb85:{NFSU2_TR(0x5ddb85);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ddb87:{NFSU2_TR(0x5ddb87);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ddb8a:{NFSU2_TR(0x5ddb8a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ddb9c;}}
}
B5ddb8c:L5ddb8c:{c.instructions+=4;NFSU2_TR(0x5ddb8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ddb90:{NFSU2_TR(0x5ddb90);
w4(R+0,u32(u32(r4(R+0))^u32(u32(0x1ull))));
}
B5ddb93:{NFSU2_TR(0x5ddb93);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5ddb98:{NFSU2_TR(0x5ddb98);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ddb9c:L5ddb9c:{c.instructions+=3;NFSU2_TR(0x5ddb9c);
__builtin_memmove((R+0),gp(0x88f2bc),1);
}
B5ddba1:{NFSU2_TR(0x5ddba1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ddba3:{NFSU2_TR(0x5ddba3);
if(r1(R+518)){{goto L5ddbd3;}}
}
B5ddba5:L5ddba5:{c.instructions+=7;NFSU2_TR(0x5ddba5);
{u32 ea_=u32(u32(8975028u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ddbab:{NFSU2_TR(0x5ddbab);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5ddbad:{NFSU2_TR(0x5ddbad);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5ddbaf:{NFSU2_TR(0x5ddbaf);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5ddbb1:{NFSU2_TR(0x5ddbb1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ddbb3:{NFSU2_TR(0x5ddbb3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ddbb6:{NFSU2_TR(0x5ddbb6);
if(r1(R+514)){{goto L5ddbc0;}}
}
B5ddbb8:L5ddbb8:{c.instructions+=2;NFSU2_TR(0x5ddbb8);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ddbbe:{NFSU2_TR(0x5ddbbe);
{goto L5ddbd3;}
}
B5ddbc0:L5ddbc0:{c.instructions+=4;NFSU2_TR(0x5ddbc0);
{u32 ea_=u32(u32(8975028u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5ddbc6:{NFSU2_TR(0x5ddbc6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ddbc8:{NFSU2_TR(0x5ddbc8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ddbcb:{NFSU2_TR(0x5ddbcb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ddbd3;}}
}
B5ddbcd:L5ddbcd:{c.instructions+=1;NFSU2_TR(0x5ddbcd);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ddbd3:L5ddbd3:{c.instructions+=2;NFSU2_TR(0x5ddbd3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ddbd5:{NFSU2_TR(0x5ddbd5);
if(r1(R+518)){{goto L5ddbf0;}}
}
B5ddbd7:L5ddbd7:{c.instructions+=4;NFSU2_TR(0x5ddbd7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ddbdd:{NFSU2_TR(0x5ddbdd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ddbdf:{NFSU2_TR(0x5ddbdf);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ddbe2:{NFSU2_TR(0x5ddbe2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ddbea;}}
}
B5ddbe4:L5ddbe4:{c.instructions+=2;NFSU2_TR(0x5ddbe4);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5ddbe8:{NFSU2_TR(0x5ddbe8);
{goto L5ddbf2;}
}
B5ddbea:L5ddbea:{c.instructions+=2;NFSU2_TR(0x5ddbea);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5ddbee:{NFSU2_TR(0x5ddbee);
{goto L5ddbf2;}
}
B5ddbf0:L5ddbf0:{c.instructions+=1;NFSU2_TR(0x5ddbf0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ddbf2:L5ddbf2:{c.instructions+=8;NFSU2_TR(0x5ddbf2);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ddbf6:{NFSU2_TR(0x5ddbf6);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ddbfa:{NFSU2_TR(0x5ddbfa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ddbfe:{NFSU2_TR(0x5ddbfe);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ddc02:{NFSU2_TR(0x5ddc02);
{u32 ea_=u32((r4(R+4)*8u)+r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ddc06:{NFSU2_TR(0x5ddc06);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ddc08:{NFSU2_TR(0x5ddc08);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ddc0b:{NFSU2_TR(0x5ddc0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ddc15;}}
}
B5ddc0d:L5ddc0d:{c.instructions+=2;NFSU2_TR(0x5ddc0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ddc11:{NFSU2_TR(0x5ddc11);
u8 U[16];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5ddc15:L5ddc15:{c.instructions+=6;NFSU2_TR(0x5ddc15);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ddc19:{NFSU2_TR(0x5ddc19);
u8 U[12];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5ddc1d:{NFSU2_TR(0x5ddc1d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ddc1f:{NFSU2_TR(0x5ddc1f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ddc21:{NFSU2_TR(0x5ddc21);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ddc24:{NFSU2_TR(0x5ddc24);
if(r1(R+514)){{goto L5ddc2c;}}
}
B5ddc26:L5ddc26:{c.instructions+=2;NFSU2_TR(0x5ddc26);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ddc2a:{NFSU2_TR(0x5ddc2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5ddc2c:L5ddc2c:{c.instructions+=4;NFSU2_TR(0x5ddc2c);
__builtin_memmove((R+20),gp(0x883db4),4);
}
B5ddc32:{NFSU2_TR(0x5ddc32);
__builtin_memmove((R+12),gp(0x883db0),4);
}
B5ddc38:{NFSU2_TR(0x5ddc38);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ddc3c:{NFSU2_TR(0x5ddc3c);
__builtin_memmove((R+16),(R+16),4);
}
B5ddc40:L5ddc40:{c.instructions+=5;NFSU2_TR(0x5ddc40);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5ddc44:{NFSU2_TR(0x5ddc44);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ddc47:{NFSU2_TR(0x5ddc47);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5ddc49:{NFSU2_TR(0x5ddc49);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ddc4e:{NFSU2_TR(0x5ddc4e);
if(r1(R+518)){{goto L5ddc59;}}
}
B5ddc50:L5ddc50:{c.instructions+=2;NFSU2_TR(0x5ddc50);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ddc52:{NFSU2_TR(0x5ddc52);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5ddc59;}}
}
B5ddc54:L5ddc54:{c.instructions+=1;NFSU2_TR(0x5ddc54);
w4(R+8,u32(0x1ull));
}
B5ddc59:L5ddc59:{c.instructions+=3;NFSU2_TR(0x5ddc59);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5ddc5d:{NFSU2_TR(0x5ddc5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ddc62:{NFSU2_TR(0x5ddc62);
if(r1(R+518)){{goto L5ddc69;}}
}
B5ddc64:L5ddc64:{c.instructions+=2;NFSU2_TR(0x5ddc64);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ddc66:{NFSU2_TR(0x5ddc66);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5ddc69;}}
}
B5ddc68:L5ddc68:{c.instructions+=1;NFSU2_TR(0x5ddc68);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5ddc69:L5ddc69:{c.instructions+=2;NFSU2_TR(0x5ddc69);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+8)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5ddc6d:{NFSU2_TR(0x5ddc6d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5ddcc2;}}
}
B5ddc6f:L5ddc6f:{c.instructions+=3;NFSU2_TR(0x5ddc6f);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5ddc73:{NFSU2_TR(0x5ddc73);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ddc75:{NFSU2_TR(0x5ddc75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ddcb0;}}
}
B5ddc77:L5ddc77:{c.instructions+=3;NFSU2_TR(0x5ddc77);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5ddc79:{NFSU2_TR(0x5ddc79);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5ddc7b:{NFSU2_TR(0x5ddc7b);
{goto L5ddc80;}
}
B5ddc80:L5ddc80:{c.instructions+=3;NFSU2_TR(0x5ddc80);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(r2(U+0)));
}
B5ddc83:{NFSU2_TR(0x5ddc83);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ddc88:{NFSU2_TR(0x5ddc88);
if(r1(R+518)){{goto L5ddc95;}}
}
B5ddc8a:L5ddc8a:{c.instructions+=2;NFSU2_TR(0x5ddc8a);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ddc8c:{NFSU2_TR(0x5ddc8c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5ddc95;}}
}
B5ddc8e:L5ddc8e:{c.instructions+=2;NFSU2_TR(0x5ddc8e);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5ddc92:{NFSU2_TR(0x5ddc92);
if(r1(R+518)){{goto L5ddcbb;}}
}
B5ddc94:L5ddc94:{c.instructions+=1;NFSU2_TR(0x5ddc94);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5ddc95:L5ddc95:{c.instructions+=4;NFSU2_TR(0x5ddc95);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5ddc96:{NFSU2_TR(0x5ddc96);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B5ddc99:{NFSU2_TR(0x5ddc99);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ddc9c:{NFSU2_TR(0x5ddc9c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ddc80u);}goto L5ddc80;}}
}
B5ddc9e:L5ddc9e:{c.instructions+=1;NFSU2_TR(0x5ddc9e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ddca0:L5ddca0:{c.instructions+=5;NFSU2_TR(0x5ddca0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ddca3:{NFSU2_TR(0x5ddca3);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5ddca6:{NFSU2_TR(0x5ddca6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ddca9:{NFSU2_TR(0x5ddca9);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5ddcae:{NFSU2_TR(0x5ddcae);
if(r1(R+518)){{goto L5ddcb5;}}
}
B5ddcb0:L5ddcb0:{c.instructions+=1;NFSU2_TR(0x5ddcb0);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5ddcb5:L5ddcb5:{c.instructions+=2;NFSU2_TR(0x5ddcb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5ddcb9:{NFSU2_TR(0x5ddcb9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ddc40u);}goto L5ddc40;}
}
B5ddcbb:L5ddcbb:{c.instructions+=3;NFSU2_TR(0x5ddcbb);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5ddcbe:{NFSU2_TR(0x5ddcbe);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B5ddcc0:{NFSU2_TR(0x5ddcc0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ddca0u);}goto L5ddca0;}
}
B5ddcc2:L5ddcc2:{c.instructions+=8;NFSU2_TR(0x5ddcc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ddcc6:{NFSU2_TR(0x5ddcc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ddcca:{NFSU2_TR(0x5ddcca);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5ddcce:{NFSU2_TR(0x5ddcce);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5ddccf:{NFSU2_TR(0x5ddccf);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x38ull))));
}
B5ddcd2:{NFSU2_TR(0x5ddcd2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ddcd4:{NFSU2_TR(0x5ddcd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ddcd8:{NFSU2_TR(0x5ddcd8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dda34u);}goto L5dda34;}}
}
B5ddcde:L5ddcde:{c.instructions+=3;NFSU2_TR(0x5ddcde);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5ddce2:{NFSU2_TR(0x5ddce2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ddce4:{NFSU2_TR(0x5ddce4);
if(r1(R+518)){{goto L5ddd27;}}
}
B5ddce6:L5ddce6:{c.instructions+=5;NFSU2_TR(0x5ddce6);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ddcea:{NFSU2_TR(0x5ddcea);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ddcee:{NFSU2_TR(0x5ddcee);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ddcf0:{NFSU2_TR(0x5ddcf0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ddcf3:{NFSU2_TR(0x5ddcf3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ddcfb;}}
}
B5ddcf5:L5ddcf5:{c.instructions+=2;NFSU2_TR(0x5ddcf5);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ddcf9:{NFSU2_TR(0x5ddcf9);
{goto L5ddcff;}
}
B5ddcfb:L5ddcfb:{c.instructions+=1;NFSU2_TR(0x5ddcfb);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ddcff:L5ddcff:{c.instructions+=7;NFSU2_TR(0x5ddcff);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ddd03:{NFSU2_TR(0x5ddd03);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ddd06:{NFSU2_TR(0x5ddd06);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ddd0a:{NFSU2_TR(0x5ddd0a);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ddd0e:{NFSU2_TR(0x5ddd0e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ddd10:{NFSU2_TR(0x5ddd10);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ddd13:{NFSU2_TR(0x5ddd13);
if(r1(R+514)){{goto L5ddd1e;}}
}
B5ddd15:L5ddd15:{c.instructions+=3;NFSU2_TR(0x5ddd15);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ddd19:{NFSU2_TR(0x5ddd19);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ddd1c:{NFSU2_TR(0x5ddd1c);
{goto L5ddd39;}
}
B5ddd1e:L5ddd1e:{c.instructions+=3;NFSU2_TR(0x5ddd1e);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ddd22:{NFSU2_TR(0x5ddd22);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ddd25:{NFSU2_TR(0x5ddd25);
{goto L5ddd39;}
}
B5ddd27:L5ddd27:{c.instructions+=5;NFSU2_TR(0x5ddd27);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ddd2b:{NFSU2_TR(0x5ddd2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ddd2f:{NFSU2_TR(0x5ddd2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ddd33:{NFSU2_TR(0x5ddd33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ddd36:{NFSU2_TR(0x5ddd36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ddd39:L5ddd39:{c.instructions+=3;NFSU2_TR(0x5ddd39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ddd3c:{NFSU2_TR(0x5ddd3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ddd3e:{NFSU2_TR(0x5ddd3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dddad;}}
}
B5ddd40:L5ddd40:{c.instructions+=17;NFSU2_TR(0x5ddd40);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ddd44:{NFSU2_TR(0x5ddd44);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5ddd48:{NFSU2_TR(0x5ddd48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5ddd4b:{NFSU2_TR(0x5ddd4b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5ddd4d:{NFSU2_TR(0x5ddd4d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ddd4f:{NFSU2_TR(0x5ddd4f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
__builtin_memmove((R+8),(U+2),1);
}
B5ddd52:{NFSU2_TR(0x5ddd52);
__builtin_memmove((R+20),(R+12),4);
}
B5ddd54:{NFSU2_TR(0x5ddd54);
__builtin_memmove((R+0),(R+4),4);
}
B5ddd56:{NFSU2_TR(0x5ddd56);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5ddd59:{NFSU2_TR(0x5ddd59);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B5ddd5b:{NFSU2_TR(0x5ddd5b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+12))));
}
B5ddd5d:{NFSU2_TR(0x5ddd5d);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x2ull))));
}
B5ddd60:{NFSU2_TR(0x5ddd60);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+8))));
}
B5ddd62:{NFSU2_TR(0x5ddd62);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ddd69:{NFSU2_TR(0x5ddd69);
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
B5ddd6b:{NFSU2_TR(0x5ddd6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ddd6e:{NFSU2_TR(0x5ddd6e);
if(r1(R+518)){{goto L5dddbb;}}
}
B5ddd70:L5ddd70:{c.instructions+=2;NFSU2_TR(0x5ddd70);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ddd72:{NFSU2_TR(0x5ddd72);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5ddd76;}}
}
B5ddd74:L5ddd74:{c.instructions+=1;NFSU2_TR(0x5ddd74);
__builtin_memmove((R+4),(R+28),4);
}
B5ddd76:L5ddd76:{c.instructions+=5;NFSU2_TR(0x5ddd76);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+4))));
}
B5ddd78:{NFSU2_TR(0x5ddd78);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ddd7a:{NFSU2_TR(0x5ddd7a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+0),(U+0),1);
}
B5ddd7d:{NFSU2_TR(0x5ddd7d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ddd7f:{NFSU2_TR(0x5ddd7f);
if(r1(R+518)){{goto L5ddd90;}}
}
B5ddd81:L5ddd81:{c.instructions+=3;NFSU2_TR(0x5ddd81);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5ddd85:{NFSU2_TR(0x5ddd85);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ddd87:{NFSU2_TR(0x5ddd87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ddd90;}}
}
B5ddd89:L5ddd89:{c.instructions+=2;NFSU2_TR(0x5ddd89);
w4(R+4,u32(0x1ull));
}
B5ddd8e:{NFSU2_TR(0x5ddd8e);
{goto L5ddd92;}
}
B5ddd90:L5ddd90:{c.instructions+=1;NFSU2_TR(0x5ddd90);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5ddd92:L5ddd92:{c.instructions+=9;NFSU2_TR(0x5ddd92);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B5ddd94:{NFSU2_TR(0x5ddd94);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+8)),r1(U+0));
}
B5ddd96:{NFSU2_TR(0x5ddd96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ddd99:{NFSU2_TR(0x5ddd99);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5ddd9b:{NFSU2_TR(0x5ddd9b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x800ull))));
}
B5ddda0:{NFSU2_TR(0x5ddda0);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffff7ffull))));
}
B5ddda6:{NFSU2_TR(0x5ddda6);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ddda8:{NFSU2_TR(0x5ddda8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dddab:{NFSU2_TR(0x5dddab);
{goto L5dddbb;}
}
B5dddad:L5dddad:{c.instructions+=3;NFSU2_TR(0x5dddad);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dddb4:{NFSU2_TR(0x5dddb4);
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
B5dddb6:{NFSU2_TR(0x5dddb6);
if(r1(R+518)){{goto L5dddbb;}}
}
B5dddb8:L5dddb8:{c.instructions+=1;NFSU2_TR(0x5dddb8);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B5dddbb:L5dddbb:{c.instructions+=2;NFSU2_TR(0x5dddbb);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5dddbf:{NFSU2_TR(0x5dddbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dddc4ull));
TAIL_STATIC(0x4022c0u,402);
}
B5dddc4:L5dddc4:{c.instructions+=7;NFSU2_TR(0x5dddc4);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dddc8:{NFSU2_TR(0x5dddc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dddc9:{NFSU2_TR(0x5dddc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dddca:{NFSU2_TR(0x5dddca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5dddcb:{NFSU2_TR(0x5dddcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5dddcc:{NFSU2_TR(0x5dddcc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x78ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x78ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x78ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5dddcf:{NFSU2_TR(0x5dddcf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ddde0:L5ddde0:{c.instructions+=24;NFSU2_TR(0x5ddde0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B5ddde3:{NFSU2_TR(0x5ddde3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ddde7:{NFSU2_TR(0x5ddde7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5dddea:{NFSU2_TR(0x5dddea);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5ddded:{NFSU2_TR(0x5ddded);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5dddf1:{NFSU2_TR(0x5dddf1);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5dddf5:{NFSU2_TR(0x5dddf5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dddf9:{NFSU2_TR(0x5dddf9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5dddfb:{NFSU2_TR(0x5dddfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5dddfd:{NFSU2_TR(0x5dddfd);
u8 U[13];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(r1(U+12)));
}
B5dde02:{NFSU2_TR(0x5dde02);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5dde05:{NFSU2_TR(0x5dde05);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dde09:{NFSU2_TR(0x5dde09);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dde0a:{NFSU2_TR(0x5dde0a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dde0b:{NFSU2_TR(0x5dde0b);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5dde0f:{NFSU2_TR(0x5dde0f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dde10:{NFSU2_TR(0x5dde10);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5dde13:{NFSU2_TR(0x5dde13);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dde15:{NFSU2_TR(0x5dde15);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dde16:{NFSU2_TR(0x5dde16);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dde1c:{NFSU2_TR(0x5dde1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dde24:{NFSU2_TR(0x5dde24);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5dde27:{NFSU2_TR(0x5dde27);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dde2b:{NFSU2_TR(0x5dde2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dde44;}}
}
B5dde2d:L5dde2d:{c.instructions+=9;NFSU2_TR(0x5dde2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dde31:{NFSU2_TR(0x5dde31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5dde33:{NFSU2_TR(0x5dde33);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dde36:{NFSU2_TR(0x5dde36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dde37:{NFSU2_TR(0x5dde37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dde38:{NFSU2_TR(0x5dde38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5dde39:{NFSU2_TR(0x5dde39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5dde3a:{NFSU2_TR(0x5dde3a);
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
B5dde3d:{NFSU2_TR(0x5dde3d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dde40:L5dde40:{c.instructions+=1;NFSU2_TR(0x5dde40);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dde44:L5dde44:{c.instructions+=5;NFSU2_TR(0x5dde44);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dde48:{NFSU2_TR(0x5dde48);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5dde4c:{NFSU2_TR(0x5dde4c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5dde4e:{NFSU2_TR(0x5dde4e);
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
B5dde51:{NFSU2_TR(0x5dde51);
if(r1(R+514)){{goto L5ddf9d;}}
}
B5dde57:L5dde57:{c.instructions+=13;NFSU2_TR(0x5dde57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5dde59:{NFSU2_TR(0x5dde59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5dde5b:{NFSU2_TR(0x5dde5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dde5e:{NFSU2_TR(0x5dde5e);
u8 U[13];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(r1(U+12)));
}
B5dde63:{NFSU2_TR(0x5dde63);
u8 U[45];
w4(U+37,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+8),4);
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
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
B5dde66:{NFSU2_TR(0x5dde66);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dde6a:{NFSU2_TR(0x5dde6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dde6d:{NFSU2_TR(0x5dde6d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dde6e:{NFSU2_TR(0x5dde6e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5dde72:{NFSU2_TR(0x5dde72);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dde73:{NFSU2_TR(0x5dde73);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dde79:{NFSU2_TR(0x5dde79);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dde7d:{NFSU2_TR(0x5dde7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dde82ull));
TAIL_STATIC(0x43ce10u,43c);
}
B5dde82:L5dde82:{c.instructions+=14;NFSU2_TR(0x5dde82);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dde86:{NFSU2_TR(0x5dde86);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5dde8a:{NFSU2_TR(0x5dde8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dde8e:{NFSU2_TR(0x5dde8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5dde90:{NFSU2_TR(0x5dde90);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5dde96:{NFSU2_TR(0x5dde96);
__builtin_memmove((R+12),gp(0x883db4),4);
}
B5dde9c:{NFSU2_TR(0x5dde9c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5dde9f:{NFSU2_TR(0x5dde9f);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5ddea1:{NFSU2_TR(0x5ddea1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ddea5:{NFSU2_TR(0x5ddea5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5ddea7:{NFSU2_TR(0x5ddea7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ddeab:{NFSU2_TR(0x5ddeab);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5ddead:{NFSU2_TR(0x5ddead);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ddeb1:{NFSU2_TR(0x5ddeb1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ddeb5:L5ddeb5:{c.instructions+=4;NFSU2_TR(0x5ddeb5);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5ddeb9:{NFSU2_TR(0x5ddeb9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5ddebb:{NFSU2_TR(0x5ddebb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ddec0:{NFSU2_TR(0x5ddec0);
if(r1(R+518)){{goto L5ddecb;}}
}
B5ddec2:L5ddec2:{c.instructions+=2;NFSU2_TR(0x5ddec2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ddec4:{NFSU2_TR(0x5ddec4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5ddecb;}}
}
B5ddec6:L5ddec6:{c.instructions+=1;NFSU2_TR(0x5ddec6);
w4(R+4,u32(0x1ull));
}
B5ddecb:L5ddecb:{c.instructions+=3;NFSU2_TR(0x5ddecb);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5ddecf:{NFSU2_TR(0x5ddecf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dded4:{NFSU2_TR(0x5dded4);
if(r1(R+518)){{goto L5ddedb;}}
}
B5dded6:L5dded6:{c.instructions+=2;NFSU2_TR(0x5dded6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dded8:{NFSU2_TR(0x5dded8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5ddedb;}}
}
B5ddeda:L5ddeda:{c.instructions+=1;NFSU2_TR(0x5ddeda);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5ddedb:L5ddedb:{c.instructions+=2;NFSU2_TR(0x5ddedb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ddedd:{NFSU2_TR(0x5ddedd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5ddf7f;}}
}
B5ddee3:L5ddee3:{c.instructions+=3;NFSU2_TR(0x5ddee3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ddee4:{NFSU2_TR(0x5ddee4);
__builtin_memmove((R+4),(R+28),4);
}
B5ddee6:{NFSU2_TR(0x5ddee6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ddeebull));
TAIL_STATIC(0x5d43c0u,5d4);
}
B5ddeeb:L5ddeeb:{c.instructions+=5;NFSU2_TR(0x5ddeeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ddeee:{NFSU2_TR(0x5ddeee);
__builtin_memmove((R+8),(R+4),1);
}
B5ddef0:{NFSU2_TR(0x5ddef0);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xfull))));
}
B5ddef3:{NFSU2_TR(0x5ddef3);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5ddef6:{NFSU2_TR(0x5ddef6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ddf14;}}
}
B5ddef8:L5ddef8:{c.instructions+=4;NFSU2_TR(0x5ddef8);
__builtin_memmove((R+8),(R+4),4);
}
B5ddefa:{NFSU2_TR(0x5ddefa);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5ddefd:{NFSU2_TR(0x5ddefd);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ddf00:{NFSU2_TR(0x5ddf00);
if(r1(R+518)){{goto L5ddf14;}}
}
B5ddf02:L5ddf02:{c.instructions+=7;NFSU2_TR(0x5ddf02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ddf05:{NFSU2_TR(0x5ddf05);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5ddf08:{NFSU2_TR(0x5ddf08);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x1ull))));
}
B5ddf0b:{NFSU2_TR(0x5ddf0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ddf0d:{NFSU2_TR(0x5ddf0d);
__builtin_memmove((R+8),(R+518),1);
}
B5ddf10:{NFSU2_TR(0x5ddf10);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+8))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
}
B5ddf12:{NFSU2_TR(0x5ddf12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ddf17;}}
}
B5ddf14:L5ddf14:{c.instructions+=2;NFSU2_TR(0x5ddf14);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5ddf15:{NFSU2_TR(0x5ddf15);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ddeb5u);}goto L5ddeb5;}
}
B5ddf17:L5ddf17:{c.instructions+=10;NFSU2_TR(0x5ddf17);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ddf1a:{NFSU2_TR(0x5ddf1a);
__builtin_memmove((R+4),(R+8),4);
}
B5ddf1c:{NFSU2_TR(0x5ddf1c);
__builtin_memmove((R+24),(R+8),4);
}
B5ddf1e:{NFSU2_TR(0x5ddf1e);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5ddf21:{NFSU2_TR(0x5ddf21);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B5ddf24:{NFSU2_TR(0x5ddf24);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+24))));
}
B5ddf26:{NFSU2_TR(0x5ddf26);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xfull))));
}
B5ddf29:{NFSU2_TR(0x5ddf29);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1ull))));
}
B5ddf2c:{NFSU2_TR(0x5ddf2c);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5ddf2f:{NFSU2_TR(0x5ddf2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ddf37;}}
}
B5ddf31:L5ddf31:{c.instructions+=2;NFSU2_TR(0x5ddf31);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B5ddf35:{NFSU2_TR(0x5ddf35);
{goto L5ddf3b;}
}
B5ddf37:L5ddf37:{c.instructions+=1;NFSU2_TR(0x5ddf37);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B5ddf3b:L5ddf3b:{c.instructions+=2;NFSU2_TR(0x5ddf3b);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5ddf3e:{NFSU2_TR(0x5ddf3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ddf46;}}
}
B5ddf40:L5ddf40:{c.instructions+=2;NFSU2_TR(0x5ddf40);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5ddf44:{NFSU2_TR(0x5ddf44);
{goto L5ddf4a;}
}
B5ddf46:L5ddf46:{c.instructions+=1;NFSU2_TR(0x5ddf46);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5ddf4a:L5ddf4a:{c.instructions+=15;NFSU2_TR(0x5ddf4a);
{u32 ea_=u32(u32(8013720u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ddf50:{NFSU2_TR(0x5ddf50);
w4(R+8,u32(s32(s16(r2(R+24)))));
}
B5ddf53:{NFSU2_TR(0x5ddf53);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ddf57:{NFSU2_TR(0x5ddf57);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ddf5b:{NFSU2_TR(0x5ddf5b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5ddf5e:{NFSU2_TR(0x5ddf5e);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B5ddf61:{NFSU2_TR(0x5ddf61);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ddf65:{NFSU2_TR(0x5ddf65);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5ddf67:{NFSU2_TR(0x5ddf67);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x190ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5ddf6d:{NFSU2_TR(0x5ddf6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5ddf70:{NFSU2_TR(0x5ddf70);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ddf74:{NFSU2_TR(0x5ddf74);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5ddf77:{NFSU2_TR(0x5ddf77);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B5ddf79:{NFSU2_TR(0x5ddf79);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B5ddf7d:{NFSU2_TR(0x5ddf7d);
{goto L5ddf82;}
}
B5ddf7f:L5ddf7f:{c.instructions+=1;NFSU2_TR(0x5ddf7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ddf82:L5ddf82:{c.instructions+=2;NFSU2_TR(0x5ddf82);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ddf84:{NFSU2_TR(0x5ddf84);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dde40u);}goto L5dde40;}}
}
B5ddf8a:L5ddf8a:{c.instructions+=9;NFSU2_TR(0x5ddf8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ddf8e:{NFSU2_TR(0x5ddf8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ddf90:{NFSU2_TR(0x5ddf90);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ddf93:{NFSU2_TR(0x5ddf93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ddf94:{NFSU2_TR(0x5ddf94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ddf95:{NFSU2_TR(0x5ddf95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ddf96:{NFSU2_TR(0x5ddf96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ddf97:{NFSU2_TR(0x5ddf97);
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
B5ddf9a:{NFSU2_TR(0x5ddf9a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ddf9d:L5ddf9d:{c.instructions+=2;NFSU2_TR(0x5ddf9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ddf9f:{NFSU2_TR(0x5ddf9f);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dde2du);}goto L5dde2d;}}
}
B5ddfa5:L5ddfa5:{c.instructions+=9;NFSU2_TR(0x5ddfa5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ddfa7:{NFSU2_TR(0x5ddfa7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ddfa9:{NFSU2_TR(0x5ddfa9);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ddfac:{NFSU2_TR(0x5ddfac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ddfad:{NFSU2_TR(0x5ddfad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ddfae:{NFSU2_TR(0x5ddfae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ddfaf:{NFSU2_TR(0x5ddfaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ddfb0:{NFSU2_TR(0x5ddfb0);
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
B5ddfb3:{NFSU2_TR(0x5ddfb3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ddfc0:L5ddfc0:{c.instructions+=10;NFSU2_TR(0x5ddfc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5ddfc3:{NFSU2_TR(0x5ddfc3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ddfc4:{NFSU2_TR(0x5ddfc4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ddfc5:{NFSU2_TR(0x5ddfc5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ddfc6:{NFSU2_TR(0x5ddfc6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ddfc7:{NFSU2_TR(0x5ddfc7);
__builtin_memmove((R+12),(R+4),4);
}
B5ddfc9:{NFSU2_TR(0x5ddfc9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5ddfcb:{NFSU2_TR(0x5ddfcb);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ddfcd:{NFSU2_TR(0x5ddfcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4674ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ddfd3:{NFSU2_TR(0x5ddfd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ddfd8ull));
TAIL_STATIC(0x575620u,575);
}
B5ddfd8:L5ddfd8:{c.instructions+=3;NFSU2_TR(0x5ddfd8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ddfdb:{NFSU2_TR(0x5ddfdb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ddfdd:{NFSU2_TR(0x5ddfdd);
if(r1(R+518)){TAIL_STATIC(0x5de00au,5de);}
}
B5ddfdf:L5ddfdf:{c.instructions+=9;NFSU2_TR(0x5ddfdf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ddfe2:{NFSU2_TR(0x5ddfe2);
w4(R+8,u32(0x4ull));
}
B5ddfe7:{NFSU2_TR(0x5ddfe7);
w4(R+24,u32(0xbf800000ull));
}
B5ddfec:{NFSU2_TR(0x5ddfec);
__builtin_memmove((R+16),(R+16),4);
}
B5ddff0:{NFSU2_TR(0x5ddff0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ddff3:{NFSU2_TR(0x5ddff3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ddff6:{NFSU2_TR(0x5ddff6);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
s4(u32(r4(R+4)),r4(U+0));
}
B5ddffc:{NFSU2_TR(0x5ddffc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ddfff:{NFSU2_TR(0x5ddfff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x5de002u,5de);
}
XIT:NFSU2_TR_EXIT(0x5dd,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
