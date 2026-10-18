#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_431(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_48a(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_48d(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5b7(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5bb(u8* __restrict R,Cpu& c);
u32 body_5bc(u8* __restrict R,Cpu& c);
u32 body_5c0(u8* __restrict R,Cpu& c);
u32 body_5c2(u8* __restrict R,Cpu& c);
u32 body_5c3(u8* __restrict R,Cpu& c);
u32 body_5c7(u8* __restrict R,Cpu& c);
u32 body_5ce(u8* __restrict R,Cpu& c);
u32 body_5d2(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x48c,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x48c,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_48c(u8* __restrict R,Cpu& c);
u32 page_48c(Cpu& c){return body_48c(c.regs.data(),c);}
__attribute__((noinline)) u32 body_48c(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x48c005:goto L48c005;
case 0x48c00c:c.instructions+=1;goto B48c00c;
case 0x48c00e:goto L48c00e;
case 0x48c011:c.instructions+=2;goto B48c011;
case 0x48c018:c.instructions+=1;goto B48c018;
case 0x48c01a:goto L48c01a;
case 0x48c021:goto L48c021;
case 0x48c023:c.instructions+=3;goto B48c023;
case 0x48c02a:c.instructions+=2;goto B48c02a;
case 0x48c02e:c.instructions+=1;goto B48c02e;
case 0x48c033:goto L48c033;
case 0x48c03a:c.instructions+=1;goto B48c03a;
case 0x48c040:goto L48c040;
case 0x48c044:c.instructions+=2;goto B48c044;
case 0x48c046:c.instructions+=1;goto B48c046;
case 0x48c048:goto L48c048;
case 0x48c04b:c.instructions+=2;goto B48c04b;
case 0x48c04c:c.instructions+=1;goto B48c04c;
case 0x48c051:goto L48c051;
case 0x48c054:goto L48c054;
case 0x48c05b:c.instructions+=4;goto B48c05b;
case 0x48c05d:c.instructions+=3;goto B48c05d;
case 0x48c064:c.instructions+=2;goto B48c064;
case 0x48c06b:c.instructions+=1;goto B48c06b;
case 0x48c071:goto L48c071;
case 0x48c075:c.instructions+=5;goto B48c075;
case 0x48c079:c.instructions+=4;goto B48c079;
case 0x48c07b:c.instructions+=3;goto B48c07b;
case 0x48c07d:c.instructions+=2;goto B48c07d;
case 0x48c084:c.instructions+=1;goto B48c084;
case 0x48c08a:goto L48c08a;
case 0x48c08d:c.instructions+=2;goto B48c08d;
case 0x48c08f:c.instructions+=1;goto B48c08f;
case 0x48c091:goto L48c091;
case 0x48c094:c.instructions+=6;goto B48c094;
case 0x48c097:c.instructions+=5;goto B48c097;
case 0x48c09d:c.instructions+=4;goto B48c09d;
case 0x48c0a2:c.instructions+=3;goto B48c0a2;
case 0x48c0a4:c.instructions+=2;goto B48c0a4;
case 0x48c0a6:c.instructions+=1;goto B48c0a6;
case 0x48c0ac:goto L48c0ac;
case 0x48c0af:c.instructions+=4;goto B48c0af;
case 0x48c0b2:c.instructions+=3;goto B48c0b2;
case 0x48c0b3:c.instructions+=2;goto B48c0b3;
case 0x48c0b6:c.instructions+=1;goto B48c0b6;
case 0x48c0b8:goto L48c0b8;
case 0x48c0bf:c.instructions+=1;goto B48c0bf;
case 0x48c0c6:goto L48c0c6;
case 0x48c0c9:c.instructions+=1;goto B48c0c9;
case 0x48c0cf:goto L48c0cf;
case 0x48c0d6:c.instructions+=1;goto B48c0d6;
case 0x48c0d8:goto L48c0d8;
case 0x48c0dd:goto L48c0dd;
case 0x48c0e0:c.instructions+=1;goto B48c0e0;
case 0x48c0e2:goto L48c0e2;
case 0x48c0e9:c.instructions+=1;goto B48c0e9;
case 0x48c0ef:goto L48c0ef;
case 0x48c0f1:goto L48c0f1;
case 0x48c0f8:c.instructions+=1;goto B48c0f8;
case 0x48c0fa:goto L48c0fa;
case 0x48c101:c.instructions+=3;goto B48c101;
case 0x48c107:c.instructions+=2;goto B48c107;
case 0x48c109:c.instructions+=1;goto B48c109;
case 0x48c10f:goto L48c10f;
case 0x48c112:c.instructions+=8;goto B48c112;
case 0x48c118:c.instructions+=7;goto B48c118;
case 0x48c11b:c.instructions+=6;goto B48c11b;
case 0x48c11e:c.instructions+=5;goto B48c11e;
case 0x48c120:c.instructions+=4;goto B48c120;
case 0x48c123:c.instructions+=3;goto B48c123;
case 0x48c12a:c.instructions+=2;goto B48c12a;
case 0x48c131:c.instructions+=1;goto B48c131;
case 0x48c137:goto L48c137;
case 0x48c13e:c.instructions+=2;goto B48c13e;
case 0x48c140:c.instructions+=1;goto B48c140;
case 0x48c142:goto L48c142;
case 0x48c144:c.instructions+=1;goto B48c144;
case 0x48c14a:goto L48c14a;
case 0x48c14e:c.instructions+=2;goto B48c14e;
case 0x48c150:c.instructions+=1;goto B48c150;
case 0x48c152:goto L48c152;
case 0x48c159:c.instructions+=4;goto B48c159;
case 0x48c15c:c.instructions+=3;goto B48c15c;
case 0x48c15d:c.instructions+=2;goto B48c15d;
case 0x48c164:c.instructions+=1;goto B48c164;
case 0x48c169:goto L48c169;
case 0x48c16c:c.instructions+=2;goto B48c16c;
case 0x48c16e:c.instructions+=1;goto B48c16e;
case 0x48c174:goto L48c174;
case 0x48c176:c.instructions+=1;goto B48c176;
case 0x48c178:goto L48c178;
case 0x48c17b:c.instructions+=2;goto B48c17b;
case 0x48c17d:c.instructions+=1;goto B48c17d;
case 0x48c17f:goto L48c17f;
case 0x48c180:c.instructions+=3;goto B48c180;
case 0x48c187:c.instructions+=2;goto B48c187;
case 0x48c188:c.instructions+=1;goto B48c188;
case 0x48c18a:goto L48c18a;
case 0x48c190:c.instructions+=3;goto B48c190;
case 0x48c191:c.instructions+=2;goto B48c191;
case 0x48c198:c.instructions+=1;goto B48c198;
case 0x48c199:goto L48c199;
case 0x48c19e:goto L48c19e;
case 0x48c1a1:c.instructions+=5;goto B48c1a1;
case 0x48c1a7:c.instructions+=4;goto B48c1a7;
case 0x48c1a8:c.instructions+=3;goto B48c1a8;
case 0x48c1af:c.instructions+=2;goto B48c1af;
case 0x48c1b0:c.instructions+=1;goto B48c1b0;
case 0x48c1b5:goto L48c1b5;
case 0x48c1bb:c.instructions+=7;goto B48c1bb;
case 0x48c1bf:c.instructions+=6;goto B48c1bf;
case 0x48c1c3:c.instructions+=5;goto B48c1c3;
case 0x48c1c6:c.instructions+=4;goto B48c1c6;
case 0x48c1cc:c.instructions+=3;goto B48c1cc;
case 0x48c1ce:c.instructions+=2;goto B48c1ce;
case 0x48c1d1:c.instructions+=1;goto B48c1d1;
case 0x48c1d3:goto L48c1d3;
case 0x48c1d9:c.instructions+=2;goto B48c1d9;
case 0x48c1dd:c.instructions+=1;goto B48c1dd;
case 0x48c1df:goto L48c1df;
case 0x48c1e3:c.instructions+=4;goto B48c1e3;
case 0x48c1e9:c.instructions+=3;goto B48c1e9;
case 0x48c1eb:c.instructions+=2;goto B48c1eb;
case 0x48c1ee:c.instructions+=1;goto B48c1ee;
case 0x48c1f0:goto L48c1f0;
case 0x48c1f5:c.instructions+=1;goto B48c1f5;
case 0x48c1f9:goto L48c1f9;
case 0x48c1fd:c.instructions+=33;goto B48c1fd;
case 0x48c201:c.instructions+=32;goto B48c201;
case 0x48c204:c.instructions+=31;goto B48c204;
case 0x48c206:c.instructions+=30;goto B48c206;
case 0x48c208:c.instructions+=29;goto B48c208;
case 0x48c20a:c.instructions+=28;goto B48c20a;
case 0x48c211:c.instructions+=27;goto B48c211;
case 0x48c219:c.instructions+=26;goto B48c219;
case 0x48c21b:c.instructions+=25;goto B48c21b;
case 0x48c222:c.instructions+=24;goto B48c222;
case 0x48c225:c.instructions+=23;goto B48c225;
case 0x48c227:c.instructions+=22;goto B48c227;
case 0x48c229:c.instructions+=21;goto B48c229;
case 0x48c234:c.instructions+=20;goto B48c234;
case 0x48c236:c.instructions+=19;goto B48c236;
case 0x48c23d:c.instructions+=18;goto B48c23d;
case 0x48c242:c.instructions+=17;goto B48c242;
case 0x48c244:c.instructions+=16;goto B48c244;
case 0x48c246:c.instructions+=15;goto B48c246;
case 0x48c24a:c.instructions+=14;goto B48c24a;
case 0x48c24e:c.instructions+=13;goto B48c24e;
case 0x48c253:c.instructions+=12;goto B48c253;
case 0x48c255:c.instructions+=11;goto B48c255;
case 0x48c259:c.instructions+=10;goto B48c259;
case 0x48c25f:c.instructions+=9;goto B48c25f;
case 0x48c263:c.instructions+=8;goto B48c263;
case 0x48c267:c.instructions+=7;goto B48c267;
case 0x48c26b:c.instructions+=6;goto B48c26b;
case 0x48c26d:c.instructions+=5;goto B48c26d;
case 0x48c274:c.instructions+=4;goto B48c274;
case 0x48c278:c.instructions+=3;goto B48c278;
case 0x48c27e:c.instructions+=2;goto B48c27e;
case 0x48c285:c.instructions+=1;goto B48c285;
case 0x48c28b:goto L48c28b;
case 0x48c290:goto L48c290;
case 0x48c294:c.instructions+=21;goto B48c294;
case 0x48c296:c.instructions+=20;goto B48c296;
case 0x48c29a:c.instructions+=19;goto B48c29a;
case 0x48c2a1:c.instructions+=18;goto B48c2a1;
case 0x48c2a8:c.instructions+=17;goto B48c2a8;
case 0x48c2ac:c.instructions+=16;goto B48c2ac;
case 0x48c2b3:c.instructions+=15;goto B48c2b3;
case 0x48c2b9:c.instructions+=14;goto B48c2b9;
case 0x48c2c0:c.instructions+=13;goto B48c2c0;
case 0x48c2c6:c.instructions+=12;goto B48c2c6;
case 0x48c2ca:c.instructions+=11;goto B48c2ca;
case 0x48c2cd:c.instructions+=10;goto B48c2cd;
case 0x48c2d1:c.instructions+=9;goto B48c2d1;
case 0x48c2d5:c.instructions+=8;goto B48c2d5;
case 0x48c2d8:c.instructions+=7;goto B48c2d8;
case 0x48c2d9:c.instructions+=6;goto B48c2d9;
case 0x48c2dd:c.instructions+=5;goto B48c2dd;
case 0x48c2e0:c.instructions+=4;goto B48c2e0;
case 0x48c2e1:c.instructions+=3;goto B48c2e1;
case 0x48c2e5:c.instructions+=2;goto B48c2e5;
case 0x48c2e6:c.instructions+=1;goto B48c2e6;
case 0x48c2eb:goto L48c2eb;
case 0x48c2f2:c.instructions+=5;goto B48c2f2;
case 0x48c2f8:c.instructions+=4;goto B48c2f8;
case 0x48c2fb:c.instructions+=3;goto B48c2fb;
case 0x48c2fd:c.instructions+=2;goto B48c2fd;
case 0x48c300:c.instructions+=1;goto B48c300;
case 0x48c306:goto L48c306;
case 0x48c30d:c.instructions+=5;goto B48c30d;
case 0x48c313:c.instructions+=4;goto B48c313;
case 0x48c31a:c.instructions+=3;goto B48c31a;
case 0x48c31c:c.instructions+=2;goto B48c31c;
case 0x48c31f:c.instructions+=1;goto B48c31f;
case 0x48c321:goto L48c321;
case 0x48c323:c.instructions+=1;goto B48c323;
case 0x48c329:goto L48c329;
case 0x48c330:c.instructions+=6;goto B48c330;
case 0x48c337:c.instructions+=5;goto B48c337;
case 0x48c33e:c.instructions+=4;goto B48c33e;
case 0x48c344:c.instructions+=3;goto B48c344;
case 0x48c346:c.instructions+=2;goto B48c346;
case 0x48c349:c.instructions+=1;goto B48c349;
case 0x48c34f:goto L48c34f;
case 0x48c356:c.instructions+=5;goto B48c356;
case 0x48c35c:c.instructions+=4;goto B48c35c;
case 0x48c363:c.instructions+=3;goto B48c363;
case 0x48c365:c.instructions+=2;goto B48c365;
case 0x48c368:c.instructions+=1;goto B48c368;
case 0x48c36a:goto L48c36a;
case 0x48c36c:c.instructions+=1;goto B48c36c;
case 0x48c372:goto L48c372;
case 0x48c379:c.instructions+=6;goto B48c379;
case 0x48c380:c.instructions+=5;goto B48c380;
case 0x48c387:c.instructions+=4;goto B48c387;
case 0x48c38d:c.instructions+=3;goto B48c38d;
case 0x48c38f:c.instructions+=2;goto B48c38f;
case 0x48c392:c.instructions+=1;goto B48c392;
case 0x48c398:goto L48c398;
case 0x48c39f:c.instructions+=5;goto B48c39f;
case 0x48c3a5:c.instructions+=4;goto B48c3a5;
case 0x48c3ac:c.instructions+=3;goto B48c3ac;
case 0x48c3ae:c.instructions+=2;goto B48c3ae;
case 0x48c3b1:c.instructions+=1;goto B48c3b1;
case 0x48c3b3:goto L48c3b3;
case 0x48c3b5:c.instructions+=1;goto B48c3b5;
case 0x48c3bb:goto L48c3bb;
case 0x48c3c2:c.instructions+=6;goto B48c3c2;
case 0x48c3c9:c.instructions+=5;goto B48c3c9;
case 0x48c3d0:c.instructions+=4;goto B48c3d0;
case 0x48c3d6:c.instructions+=3;goto B48c3d6;
case 0x48c3d8:c.instructions+=2;goto B48c3d8;
case 0x48c3db:c.instructions+=1;goto B48c3db;
case 0x48c3dd:goto L48c3dd;
case 0x48c3e4:c.instructions+=5;goto B48c3e4;
case 0x48c3ea:c.instructions+=4;goto B48c3ea;
case 0x48c3f1:c.instructions+=3;goto B48c3f1;
case 0x48c3f3:c.instructions+=2;goto B48c3f3;
case 0x48c3f6:c.instructions+=1;goto B48c3f6;
case 0x48c3f8:goto L48c3f8;
case 0x48c3fa:c.instructions+=2;goto B48c3fa;
case 0x48c402:c.instructions+=1;goto B48c402;
case 0x48c404:goto L48c404;
case 0x48c40a:c.instructions+=1;goto B48c40a;
case 0x48c40f:goto L48c40f;
case 0x48c415:c.instructions+=1;goto B48c415;
case 0x48c41a:goto L48c41a;
case 0x48c420:c.instructions+=1;goto B48c420;
case 0x48c422:goto L48c422;
case 0x48c428:goto L48c428;
case 0x48c42c:goto L48c42c;
case 0x48c430:c.instructions+=3;goto B48c430;
case 0x48c434:c.instructions+=2;goto B48c434;
case 0x48c43b:c.instructions+=1;goto B48c43b;
case 0x48c440:goto L48c440;
case 0x48c447:c.instructions+=16;goto B48c447;
case 0x48c44b:c.instructions+=15;goto B48c44b;
case 0x48c44c:c.instructions+=14;goto B48c44c;
case 0x48c453:c.instructions+=13;goto B48c453;
case 0x48c45a:c.instructions+=12;goto B48c45a;
case 0x48c45e:c.instructions+=11;goto B48c45e;
case 0x48c45f:c.instructions+=10;goto B48c45f;
case 0x48c466:c.instructions+=9;goto B48c466;
case 0x48c467:c.instructions+=8;goto B48c467;
case 0x48c469:c.instructions+=7;goto B48c469;
case 0x48c46b:c.instructions+=6;goto B48c46b;
case 0x48c472:c.instructions+=5;goto B48c472;
case 0x48c476:c.instructions+=4;goto B48c476;
case 0x48c478:c.instructions+=3;goto B48c478;
case 0x48c47f:c.instructions+=2;goto B48c47f;
case 0x48c486:c.instructions+=1;goto B48c486;
case 0x48c48b:goto L48c48b;
case 0x48c492:c.instructions+=7;goto B48c492;
case 0x48c499:c.instructions+=6;goto B48c499;
case 0x48c49f:c.instructions+=5;goto B48c49f;
case 0x48c4a3:c.instructions+=4;goto B48c4a3;
case 0x48c4a6:c.instructions+=3;goto B48c4a6;
case 0x48c4a8:c.instructions+=2;goto B48c4a8;
case 0x48c4ab:c.instructions+=1;goto B48c4ab;
case 0x48c4ad:goto L48c4ad;
case 0x48c4b4:c.instructions+=4;goto B48c4b4;
case 0x48c4ba:c.instructions+=3;goto B48c4ba;
case 0x48c4bc:c.instructions+=2;goto B48c4bc;
case 0x48c4bf:c.instructions+=1;goto B48c4bf;
case 0x48c4c1:goto L48c4c1;
case 0x48c4c8:c.instructions+=3;goto B48c4c8;
case 0x48c4cf:c.instructions+=2;goto B48c4cf;
case 0x48c4d6:c.instructions+=1;goto B48c4d6;
case 0x48c4d8:goto L48c4d8;
case 0x48c4de:goto L48c4de;
case 0x48c4e2:c.instructions+=3;goto B48c4e2;
case 0x48c4e4:c.instructions+=2;goto B48c4e4;
case 0x48c4e7:c.instructions+=1;goto B48c4e7;
case 0x48c4e9:goto L48c4e9;
case 0x48c4eb:c.instructions+=5;goto B48c4eb;
case 0x48c4ef:c.instructions+=4;goto B48c4ef;
case 0x48c4f6:c.instructions+=3;goto B48c4f6;
case 0x48c4fd:c.instructions+=2;goto B48c4fd;
case 0x48c501:c.instructions+=1;goto B48c501;
case 0x48c505:goto L48c505;
case 0x48c50c:c.instructions+=2;goto B48c50c;
case 0x48c510:c.instructions+=1;goto B48c510;
case 0x48c515:goto L48c515;
case 0x48c518:c.instructions+=1;goto B48c518;
case 0x48c51a:goto L48c51a;
case 0x48c51c:c.instructions+=1;goto B48c51c;
case 0x48c51e:goto L48c51e;
case 0x48c520:goto L48c520;
case 0x48c524:c.instructions+=27;goto B48c524;
case 0x48c52b:c.instructions+=26;goto B48c52b;
case 0x48c52d:c.instructions+=25;goto B48c52d;
case 0x48c52f:c.instructions+=24;goto B48c52f;
case 0x48c533:c.instructions+=23;goto B48c533;
case 0x48c53a:c.instructions+=22;goto B48c53a;
case 0x48c53c:c.instructions+=21;goto B48c53c;
case 0x48c540:c.instructions+=20;goto B48c540;
case 0x48c547:c.instructions+=19;goto B48c547;
case 0x48c54e:c.instructions+=18;goto B48c54e;
case 0x48c550:c.instructions+=17;goto B48c550;
case 0x48c554:c.instructions+=16;goto B48c554;
case 0x48c558:c.instructions+=15;goto B48c558;
case 0x48c55c:c.instructions+=14;goto B48c55c;
case 0x48c560:c.instructions+=13;goto B48c560;
case 0x48c564:c.instructions+=12;goto B48c564;
case 0x48c566:c.instructions+=11;goto B48c566;
case 0x48c56d:c.instructions+=10;goto B48c56d;
case 0x48c570:c.instructions+=9;goto B48c570;
case 0x48c572:c.instructions+=8;goto B48c572;
case 0x48c576:c.instructions+=7;goto B48c576;
case 0x48c57a:c.instructions+=6;goto B48c57a;
case 0x48c581:c.instructions+=5;goto B48c581;
case 0x48c588:c.instructions+=4;goto B48c588;
case 0x48c58c:c.instructions+=3;goto B48c58c;
case 0x48c593:c.instructions+=2;goto B48c593;
case 0x48c59a:c.instructions+=1;goto B48c59a;
case 0x48c5a0:goto L48c5a0;
case 0x48c5a4:c.instructions+=41;goto B48c5a4;
case 0x48c5a8:c.instructions+=40;goto B48c5a8;
case 0x48c5af:c.instructions+=39;goto B48c5af;
case 0x48c5b3:c.instructions+=38;goto B48c5b3;
case 0x48c5ba:c.instructions+=37;goto B48c5ba;
case 0x48c5c1:c.instructions+=36;goto B48c5c1;
case 0x48c5c7:c.instructions+=35;goto B48c5c7;
case 0x48c5cb:c.instructions+=34;goto B48c5cb;
case 0x48c5d2:c.instructions+=33;goto B48c5d2;
case 0x48c5d9:c.instructions+=32;goto B48c5d9;
case 0x48c5e0:c.instructions+=31;goto B48c5e0;
case 0x48c5e7:c.instructions+=30;goto B48c5e7;
case 0x48c5ee:c.instructions+=29;goto B48c5ee;
case 0x48c5f2:c.instructions+=28;goto B48c5f2;
case 0x48c5f8:c.instructions+=27;goto B48c5f8;
case 0x48c5ff:c.instructions+=26;goto B48c5ff;
case 0x48c606:c.instructions+=25;goto B48c606;
case 0x48c60d:c.instructions+=24;goto B48c60d;
case 0x48c60f:c.instructions+=23;goto B48c60f;
case 0x48c616:c.instructions+=22;goto B48c616;
case 0x48c61d:c.instructions+=21;goto B48c61d;
case 0x48c621:c.instructions+=20;goto B48c621;
case 0x48c628:c.instructions+=19;goto B48c628;
case 0x48c62f:c.instructions+=18;goto B48c62f;
case 0x48c636:c.instructions+=17;goto B48c636;
case 0x48c638:c.instructions+=16;goto B48c638;
case 0x48c643:c.instructions+=15;goto B48c643;
case 0x48c645:c.instructions+=14;goto B48c645;
case 0x48c649:c.instructions+=13;goto B48c649;
case 0x48c650:c.instructions+=12;goto B48c650;
case 0x48c657:c.instructions+=11;goto B48c657;
case 0x48c65e:c.instructions+=10;goto B48c65e;
case 0x48c665:c.instructions+=9;goto B48c665;
case 0x48c66c:c.instructions+=8;goto B48c66c;
case 0x48c66e:c.instructions+=7;goto B48c66e;
case 0x48c672:c.instructions+=6;goto B48c672;
case 0x48c679:c.instructions+=5;goto B48c679;
case 0x48c680:c.instructions+=4;goto B48c680;
case 0x48c681:c.instructions+=3;goto B48c681;
case 0x48c688:c.instructions+=2;goto B48c688;
case 0x48c690:c.instructions+=1;goto B48c690;
case 0x48c695:goto L48c695;
case 0x48c698:c.instructions+=2;goto B48c698;
case 0x48c69a:c.instructions+=1;goto B48c69a;
case 0x48c6a0:goto L48c6a0;
case 0x48c6a5:goto L48c6a5;
case 0x48c6a7:c.instructions+=22;goto B48c6a7;
case 0x48c6aa:c.instructions+=21;goto B48c6aa;
case 0x48c6ac:c.instructions+=20;goto B48c6ac;
case 0x48c6af:c.instructions+=19;goto B48c6af;
case 0x48c6b2:c.instructions+=18;goto B48c6b2;
case 0x48c6b9:c.instructions+=17;goto B48c6b9;
case 0x48c6bd:c.instructions+=16;goto B48c6bd;
case 0x48c6c4:c.instructions+=15;goto B48c6c4;
case 0x48c6cb:c.instructions+=14;goto B48c6cb;
case 0x48c6cf:c.instructions+=13;goto B48c6cf;
case 0x48c6d3:c.instructions+=12;goto B48c6d3;
case 0x48c6da:c.instructions+=11;goto B48c6da;
case 0x48c6de:c.instructions+=10;goto B48c6de;
case 0x48c6e5:c.instructions+=9;goto B48c6e5;
case 0x48c6ec:c.instructions+=8;goto B48c6ec;
case 0x48c6f0:c.instructions+=7;goto B48c6f0;
case 0x48c6f3:c.instructions+=6;goto B48c6f3;
case 0x48c6f7:c.instructions+=5;goto B48c6f7;
case 0x48c6fa:c.instructions+=4;goto B48c6fa;
case 0x48c6fe:c.instructions+=3;goto B48c6fe;
case 0x48c701:c.instructions+=2;goto B48c701;
case 0x48c705:c.instructions+=1;goto B48c705;
case 0x48c70b:goto L48c70b;
case 0x48c70d:c.instructions+=1;goto B48c70d;
case 0x48c713:goto L48c713;
case 0x48c71a:c.instructions+=4;goto B48c71a;
case 0x48c71c:c.instructions+=3;goto B48c71c;
case 0x48c71d:c.instructions+=2;goto B48c71d;
case 0x48c71e:c.instructions+=1;goto B48c71e;
case 0x48c723:goto L48c723;
case 0x48c72a:c.instructions+=78;goto B48c72a;
case 0x48c72e:c.instructions+=77;goto B48c72e;
case 0x48c731:c.instructions+=76;goto B48c731;
case 0x48c738:c.instructions+=75;goto B48c738;
case 0x48c73c:c.instructions+=74;goto B48c73c;
case 0x48c73e:c.instructions+=73;goto B48c73e;
case 0x48c745:c.instructions+=72;goto B48c745;
case 0x48c749:c.instructions+=71;goto B48c749;
case 0x48c74b:c.instructions+=70;goto B48c74b;
case 0x48c752:c.instructions+=69;goto B48c752;
case 0x48c756:c.instructions+=68;goto B48c756;
case 0x48c758:c.instructions+=67;goto B48c758;
case 0x48c75f:c.instructions+=66;goto B48c75f;
case 0x48c763:c.instructions+=65;goto B48c763;
case 0x48c76a:c.instructions+=64;goto B48c76a;
case 0x48c76e:c.instructions+=63;goto B48c76e;
case 0x48c770:c.instructions+=62;goto B48c770;
case 0x48c777:c.instructions+=61;goto B48c777;
case 0x48c77b:c.instructions+=60;goto B48c77b;
case 0x48c77d:c.instructions+=59;goto B48c77d;
case 0x48c784:c.instructions+=58;goto B48c784;
case 0x48c788:c.instructions+=57;goto B48c788;
case 0x48c78a:c.instructions+=56;goto B48c78a;
case 0x48c791:c.instructions+=55;goto B48c791;
case 0x48c798:c.instructions+=54;goto B48c798;
case 0x48c79f:c.instructions+=53;goto B48c79f;
case 0x48c7a3:c.instructions+=52;goto B48c7a3;
case 0x48c7aa:c.instructions+=51;goto B48c7aa;
case 0x48c7ae:c.instructions+=50;goto B48c7ae;
case 0x48c7b0:c.instructions+=49;goto B48c7b0;
case 0x48c7b7:c.instructions+=48;goto B48c7b7;
case 0x48c7bb:c.instructions+=47;goto B48c7bb;
case 0x48c7bf:c.instructions+=46;goto B48c7bf;
case 0x48c7c1:c.instructions+=45;goto B48c7c1;
case 0x48c7c8:c.instructions+=44;goto B48c7c8;
case 0x48c7cc:c.instructions+=43;goto B48c7cc;
case 0x48c7ce:c.instructions+=42;goto B48c7ce;
case 0x48c7d5:c.instructions+=41;goto B48c7d5;
case 0x48c7dc:c.instructions+=40;goto B48c7dc;
case 0x48c7e3:c.instructions+=39;goto B48c7e3;
case 0x48c7e7:c.instructions+=38;goto B48c7e7;
case 0x48c7eb:c.instructions+=37;goto B48c7eb;
case 0x48c7f2:c.instructions+=36;goto B48c7f2;
case 0x48c7f6:c.instructions+=35;goto B48c7f6;
case 0x48c7f8:c.instructions+=34;goto B48c7f8;
case 0x48c7ff:c.instructions+=33;goto B48c7ff;
case 0x48c803:c.instructions+=32;goto B48c803;
case 0x48c805:c.instructions+=31;goto B48c805;
case 0x48c80c:c.instructions+=30;goto B48c80c;
case 0x48c810:c.instructions+=29;goto B48c810;
case 0x48c812:c.instructions+=28;goto B48c812;
case 0x48c819:c.instructions+=27;goto B48c819;
case 0x48c81d:c.instructions+=26;goto B48c81d;
case 0x48c824:c.instructions+=25;goto B48c824;
case 0x48c828:c.instructions+=24;goto B48c828;
case 0x48c82a:c.instructions+=23;goto B48c82a;
case 0x48c831:c.instructions+=22;goto B48c831;
case 0x48c835:c.instructions+=21;goto B48c835;
case 0x48c837:c.instructions+=20;goto B48c837;
case 0x48c83e:c.instructions+=19;goto B48c83e;
case 0x48c842:c.instructions+=18;goto B48c842;
case 0x48c844:c.instructions+=17;goto B48c844;
case 0x48c84b:c.instructions+=16;goto B48c84b;
case 0x48c84f:c.instructions+=15;goto B48c84f;
case 0x48c856:c.instructions+=14;goto B48c856;
case 0x48c85a:c.instructions+=13;goto B48c85a;
case 0x48c85c:c.instructions+=12;goto B48c85c;
case 0x48c863:c.instructions+=11;goto B48c863;
case 0x48c867:c.instructions+=10;goto B48c867;
case 0x48c869:c.instructions+=9;goto B48c869;
case 0x48c870:c.instructions+=8;goto B48c870;
case 0x48c874:c.instructions+=7;goto B48c874;
case 0x48c876:c.instructions+=6;goto B48c876;
case 0x48c87d:c.instructions+=5;goto B48c87d;
case 0x48c87f:c.instructions+=4;goto B48c87f;
case 0x48c883:c.instructions+=3;goto B48c883;
case 0x48c88a:c.instructions+=2;goto B48c88a;
case 0x48c88e:c.instructions+=1;goto B48c88e;
case 0x48c893:goto L48c893;
case 0x48c896:c.instructions+=1;goto B48c896;
case 0x48c898:goto L48c898;
case 0x48c899:c.instructions+=2;goto B48c899;
case 0x48c89b:c.instructions+=1;goto B48c89b;
case 0x48c8a0:goto L48c8a0;
case 0x48c8a4:c.instructions+=2;goto B48c8a4;
case 0x48c8a5:c.instructions+=1;goto B48c8a5;
case 0x48c8aa:goto L48c8aa;
case 0x48c8ae:c.instructions+=12;goto B48c8ae;
case 0x48c8b2:c.instructions+=11;goto B48c8b2;
case 0x48c8b6:c.instructions+=10;goto B48c8b6;
case 0x48c8ba:c.instructions+=9;goto B48c8ba;
case 0x48c8be:c.instructions+=8;goto B48c8be;
case 0x48c8c0:c.instructions+=7;goto B48c8c0;
case 0x48c8c3:c.instructions+=6;goto B48c8c3;
case 0x48c8c7:c.instructions+=5;goto B48c8c7;
case 0x48c8cb:c.instructions+=4;goto B48c8cb;
case 0x48c8d3:c.instructions+=3;goto B48c8d3;
case 0x48c8d7:c.instructions+=2;goto B48c8d7;
case 0x48c8df:c.instructions+=1;goto B48c8df;
case 0x48c8e4:goto L48c8e4;
case 0x48c8e7:c.instructions+=1;goto B48c8e7;
case 0x48c8e9:goto L48c8e9;
case 0x48c8ea:c.instructions+=2;goto B48c8ea;
case 0x48c8ec:c.instructions+=1;goto B48c8ec;
case 0x48c8f1:goto L48c8f1;
case 0x48c8f5:c.instructions+=2;goto B48c8f5;
case 0x48c8f6:c.instructions+=1;goto B48c8f6;
case 0x48c8fb:goto L48c8fb;
case 0x48c8ff:c.instructions+=12;goto B48c8ff;
case 0x48c903:c.instructions+=11;goto B48c903;
case 0x48c907:c.instructions+=10;goto B48c907;
case 0x48c90b:c.instructions+=9;goto B48c90b;
case 0x48c90f:c.instructions+=8;goto B48c90f;
case 0x48c911:c.instructions+=7;goto B48c911;
case 0x48c914:c.instructions+=6;goto B48c914;
case 0x48c918:c.instructions+=5;goto B48c918;
case 0x48c920:c.instructions+=4;goto B48c920;
case 0x48c924:c.instructions+=3;goto B48c924;
case 0x48c92c:c.instructions+=2;goto B48c92c;
case 0x48c930:c.instructions+=1;goto B48c930;
case 0x48c932:goto L48c932;
case 0x48c935:c.instructions+=1;goto B48c935;
case 0x48c937:goto L48c937;
case 0x48c938:c.instructions+=2;goto B48c938;
case 0x48c93a:c.instructions+=1;goto B48c93a;
case 0x48c93f:goto L48c93f;
case 0x48c943:c.instructions+=2;goto B48c943;
case 0x48c944:c.instructions+=1;goto B48c944;
case 0x48c949:goto L48c949;
case 0x48c94d:c.instructions+=11;goto B48c94d;
case 0x48c951:c.instructions+=10;goto B48c951;
case 0x48c957:c.instructions+=9;goto B48c957;
case 0x48c95b:c.instructions+=8;goto B48c95b;
case 0x48c95f:c.instructions+=7;goto B48c95f;
case 0x48c961:c.instructions+=6;goto B48c961;
case 0x48c963:c.instructions+=5;goto B48c963;
case 0x48c966:c.instructions+=4;goto B48c966;
case 0x48c96a:c.instructions+=3;goto B48c96a;
case 0x48c96e:c.instructions+=2;goto B48c96e;
case 0x48c976:c.instructions+=1;goto B48c976;
case 0x48c97a:goto L48c97a;
case 0x48c97e:goto L48c97e;
case 0x48c982:c.instructions+=74;goto B48c982;
case 0x48c989:c.instructions+=73;goto B48c989;
case 0x48c98f:c.instructions+=72;goto B48c98f;
case 0x48c993:c.instructions+=71;goto B48c993;
case 0x48c995:c.instructions+=70;goto B48c995;
case 0x48c999:c.instructions+=69;goto B48c999;
case 0x48c99d:c.instructions+=68;goto B48c99d;
case 0x48c9a1:c.instructions+=67;goto B48c9a1;
case 0x48c9a5:c.instructions+=66;goto B48c9a5;
case 0x48c9a9:c.instructions+=65;goto B48c9a9;
case 0x48c9ad:c.instructions+=64;goto B48c9ad;
case 0x48c9b4:c.instructions+=63;goto B48c9b4;
case 0x48c9ba:c.instructions+=62;goto B48c9ba;
case 0x48c9be:c.instructions+=61;goto B48c9be;
case 0x48c9c0:c.instructions+=60;goto B48c9c0;
case 0x48c9c2:c.instructions+=59;goto B48c9c2;
case 0x48c9c6:c.instructions+=58;goto B48c9c6;
case 0x48c9ca:c.instructions+=57;goto B48c9ca;
case 0x48c9cc:c.instructions+=56;goto B48c9cc;
case 0x48c9d0:c.instructions+=55;goto B48c9d0;
case 0x48c9d4:c.instructions+=54;goto B48c9d4;
case 0x48c9d6:c.instructions+=53;goto B48c9d6;
case 0x48c9d8:c.instructions+=52;goto B48c9d8;
case 0x48c9df:c.instructions+=51;goto B48c9df;
case 0x48c9e1:c.instructions+=50;goto B48c9e1;
case 0x48c9e5:c.instructions+=49;goto B48c9e5;
case 0x48c9ec:c.instructions+=48;goto B48c9ec;
case 0x48c9f0:c.instructions+=47;goto B48c9f0;
case 0x48c9f4:c.instructions+=46;goto B48c9f4;
case 0x48c9fb:c.instructions+=45;goto B48c9fb;
case 0x48c9fd:c.instructions+=44;goto B48c9fd;
case 0x48ca04:c.instructions+=43;goto B48ca04;
case 0x48ca08:c.instructions+=42;goto B48ca08;
case 0x48ca0a:c.instructions+=41;goto B48ca0a;
case 0x48ca0c:c.instructions+=40;goto B48ca0c;
case 0x48ca0e:c.instructions+=39;goto B48ca0e;
case 0x48ca12:c.instructions+=38;goto B48ca12;
case 0x48ca16:c.instructions+=37;goto B48ca16;
case 0x48ca1a:c.instructions+=36;goto B48ca1a;
case 0x48ca21:c.instructions+=35;goto B48ca21;
case 0x48ca28:c.instructions+=34;goto B48ca28;
case 0x48ca2c:c.instructions+=33;goto B48ca2c;
case 0x48ca33:c.instructions+=32;goto B48ca33;
case 0x48ca3a:c.instructions+=31;goto B48ca3a;
case 0x48ca3e:c.instructions+=30;goto B48ca3e;
case 0x48ca45:c.instructions+=29;goto B48ca45;
case 0x48ca4c:c.instructions+=28;goto B48ca4c;
case 0x48ca50:c.instructions+=27;goto B48ca50;
case 0x48ca57:c.instructions+=26;goto B48ca57;
case 0x48ca5e:c.instructions+=25;goto B48ca5e;
case 0x48ca62:c.instructions+=24;goto B48ca62;
case 0x48ca64:c.instructions+=23;goto B48ca64;
case 0x48ca6b:c.instructions+=22;goto B48ca6b;
case 0x48ca6f:c.instructions+=21;goto B48ca6f;
case 0x48ca71:c.instructions+=20;goto B48ca71;
case 0x48ca78:c.instructions+=19;goto B48ca78;
case 0x48ca7f:c.instructions+=18;goto B48ca7f;
case 0x48ca83:c.instructions+=17;goto B48ca83;
case 0x48ca8a:c.instructions+=16;goto B48ca8a;
case 0x48ca8c:c.instructions+=15;goto B48ca8c;
case 0x48ca90:c.instructions+=14;goto B48ca90;
case 0x48ca97:c.instructions+=13;goto B48ca97;
case 0x48ca9b:c.instructions+=12;goto B48ca9b;
case 0x48caa2:c.instructions+=11;goto B48caa2;
case 0x48caa9:c.instructions+=10;goto B48caa9;
case 0x48caad:c.instructions+=9;goto B48caad;
case 0x48cab4:c.instructions+=8;goto B48cab4;
case 0x48cabb:c.instructions+=7;goto B48cabb;
case 0x48cac2:c.instructions+=6;goto B48cac2;
case 0x48cac6:c.instructions+=5;goto B48cac6;
case 0x48cacd:c.instructions+=4;goto B48cacd;
case 0x48cad4:c.instructions+=3;goto B48cad4;
case 0x48cad8:c.instructions+=2;goto B48cad8;
case 0x48cadf:c.instructions+=1;goto B48cadf;
case 0x48cae4:goto L48cae4;
case 0x48caeb:c.instructions+=42;goto B48caeb;
case 0x48caf2:c.instructions+=41;goto B48caf2;
case 0x48caf9:c.instructions+=40;goto B48caf9;
case 0x48cb00:c.instructions+=39;goto B48cb00;
case 0x48cb07:c.instructions+=38;goto B48cb07;
case 0x48cb0e:c.instructions+=37;goto B48cb0e;
case 0x48cb15:c.instructions+=36;goto B48cb15;
case 0x48cb1c:c.instructions+=35;goto B48cb1c;
case 0x48cb23:c.instructions+=34;goto B48cb23;
case 0x48cb2a:c.instructions+=33;goto B48cb2a;
case 0x48cb31:c.instructions+=32;goto B48cb31;
case 0x48cb38:c.instructions+=31;goto B48cb38;
case 0x48cb3f:c.instructions+=30;goto B48cb3f;
case 0x48cb46:c.instructions+=29;goto B48cb46;
case 0x48cb4d:c.instructions+=28;goto B48cb4d;
case 0x48cb54:c.instructions+=27;goto B48cb54;
case 0x48cb5b:c.instructions+=26;goto B48cb5b;
case 0x48cb62:c.instructions+=25;goto B48cb62;
case 0x48cb69:c.instructions+=24;goto B48cb69;
case 0x48cb70:c.instructions+=23;goto B48cb70;
case 0x48cb77:c.instructions+=22;goto B48cb77;
case 0x48cb7e:c.instructions+=21;goto B48cb7e;
case 0x48cb85:c.instructions+=20;goto B48cb85;
case 0x48cb89:c.instructions+=19;goto B48cb89;
case 0x48cb90:c.instructions+=18;goto B48cb90;
case 0x48cb94:c.instructions+=17;goto B48cb94;
case 0x48cb9b:c.instructions+=16;goto B48cb9b;
case 0x48cba2:c.instructions+=15;goto B48cba2;
case 0x48cba9:c.instructions+=14;goto B48cba9;
case 0x48cbab:c.instructions+=13;goto B48cbab;
case 0x48cbb2:c.instructions+=12;goto B48cbb2;
case 0x48cbb6:c.instructions+=11;goto B48cbb6;
case 0x48cbbd:c.instructions+=10;goto B48cbbd;
case 0x48cbc4:c.instructions+=9;goto B48cbc4;
case 0x48cbcb:c.instructions+=8;goto B48cbcb;
case 0x48cbd2:c.instructions+=7;goto B48cbd2;
case 0x48cbd9:c.instructions+=6;goto B48cbd9;
case 0x48cbdb:c.instructions+=5;goto B48cbdb;
case 0x48cbe2:c.instructions+=4;goto B48cbe2;
case 0x48cbe9:c.instructions+=3;goto B48cbe9;
case 0x48cbf0:c.instructions+=2;goto B48cbf0;
case 0x48cbf3:c.instructions+=1;goto B48cbf3;
case 0x48cbf8:goto L48cbf8;
case 0x48cbff:c.instructions+=3;goto B48cbff;
case 0x48cc01:c.instructions+=2;goto B48cc01;
case 0x48cc04:c.instructions+=1;goto B48cc04;
case 0x48cc09:goto L48cc09;
case 0x48cc10:c.instructions+=3;goto B48cc10;
case 0x48cc12:c.instructions+=2;goto B48cc12;
case 0x48cc15:c.instructions+=1;goto B48cc15;
case 0x48cc1a:goto L48cc1a;
case 0x48cc21:c.instructions+=13;goto B48cc21;
case 0x48cc23:c.instructions+=12;goto B48cc23;
case 0x48cc25:c.instructions+=11;goto B48cc25;
case 0x48cc2a:c.instructions+=10;goto B48cc2a;
case 0x48cc2c:c.instructions+=9;goto B48cc2c;
case 0x48cc2d:c.instructions+=8;goto B48cc2d;
case 0x48cc30:c.instructions+=7;goto B48cc30;
case 0x48cc37:c.instructions+=6;goto B48cc37;
case 0x48cc38:c.instructions+=5;goto B48cc38;
case 0x48cc3f:c.instructions+=4;goto B48cc3f;
case 0x48cc46:c.instructions+=3;goto B48cc46;
case 0x48cc4d:c.instructions+=2;goto B48cc4d;
case 0x48cc54:c.instructions+=1;goto B48cc54;
case 0x48cc59:goto L48cc59;
case 0x48cc60:c.instructions+=1;goto B48cc60;
case 0x48cc65:goto L48cc65;
case 0x48cc69:c.instructions+=12;goto B48cc69;
case 0x48cc70:c.instructions+=11;goto B48cc70;
case 0x48cc74:c.instructions+=10;goto B48cc74;
case 0x48cc78:c.instructions+=9;goto B48cc78;
case 0x48cc7f:c.instructions+=8;goto B48cc7f;
case 0x48cc80:c.instructions+=7;goto B48cc80;
case 0x48cc84:c.instructions+=6;goto B48cc84;
case 0x48cc88:c.instructions+=5;goto B48cc88;
case 0x48cc8f:c.instructions+=4;goto B48cc8f;
case 0x48cc93:c.instructions+=3;goto B48cc93;
case 0x48cc95:c.instructions+=2;goto B48cc95;
case 0x48cc9c:c.instructions+=1;goto B48cc9c;
case 0x48cca2:goto L48cca2;
case 0x48cca6:c.instructions+=2;goto B48cca6;
case 0x48cca8:c.instructions+=1;goto B48cca8;
case 0x48ccaa:goto L48ccaa;
case 0x48ccae:c.instructions+=6;goto B48ccae;
case 0x48ccb5:c.instructions+=5;goto B48ccb5;
case 0x48ccbc:c.instructions+=4;goto B48ccbc;
case 0x48ccbd:c.instructions+=3;goto B48ccbd;
case 0x48ccbe:c.instructions+=2;goto B48ccbe;
case 0x48ccbf:c.instructions+=1;goto B48ccbf;
case 0x48ccc4:goto L48ccc4;
case 0x48ccc7:goto L48ccc7;
case 0x48ccce:c.instructions+=3;goto B48ccce;
case 0x48ccd2:c.instructions+=2;goto B48ccd2;
case 0x48ccd4:c.instructions+=1;goto B48ccd4;
case 0x48ccdb:goto L48ccdb;
case 0x48cce2:c.instructions+=3;goto B48cce2;
case 0x48cce9:c.instructions+=2;goto B48cce9;
case 0x48ccf0:c.instructions+=1;goto B48ccf0;
case 0x48ccf6:goto L48ccf6;
case 0x48ccfa:c.instructions+=2;goto B48ccfa;
case 0x48ccfc:c.instructions+=1;goto B48ccfc;
case 0x48ccfe:goto L48ccfe;
case 0x48cd03:goto L48cd03;
case 0x48cd04:c.instructions+=3;goto B48cd04;
case 0x48cd07:c.instructions+=2;goto B48cd07;
case 0x48cd0b:c.instructions+=1;goto B48cd0b;
case 0x48cd11:goto L48cd11;
case 0x48cd18:c.instructions+=10;goto B48cd18;
case 0x48cd1b:c.instructions+=9;goto B48cd1b;
case 0x48cd22:c.instructions+=8;goto B48cd22;
case 0x48cd24:c.instructions+=7;goto B48cd24;
case 0x48cd27:c.instructions+=6;goto B48cd27;
case 0x48cd28:c.instructions+=5;goto B48cd28;
case 0x48cd29:c.instructions+=4;goto B48cd29;
case 0x48cd2a:c.instructions+=3;goto B48cd2a;
case 0x48cd2c:c.instructions+=2;goto B48cd2c;
case 0x48cd2d:c.instructions+=1;goto B48cd2d;
case 0x48cd60:goto L48cd60;
case 0x48cd61:c.instructions+=2;goto B48cd61;
case 0x48cd66:c.instructions+=1;goto B48cd66;
case 0x48cd6b:goto L48cd6b;
case 0x48cd70:c.instructions+=2;goto B48cd70;
case 0x48cd75:c.instructions+=1;goto B48cd75;
case 0x48cd7a:goto L48cd7a;
case 0x48cd7c:c.instructions+=11;goto B48cd7c;
case 0x48cd81:c.instructions+=10;goto B48cd81;
case 0x48cd86:c.instructions+=9;goto B48cd86;
case 0x48cd8b:c.instructions+=8;goto B48cd8b;
case 0x48cd90:c.instructions+=7;goto B48cd90;
case 0x48cd95:c.instructions+=6;goto B48cd95;
case 0x48cd97:c.instructions+=5;goto B48cd97;
case 0x48cd9c:c.instructions+=4;goto B48cd9c;
case 0x48cda6:c.instructions+=3;goto B48cda6;
case 0x48cdab:c.instructions+=2;goto B48cdab;
case 0x48cdb5:c.instructions+=1;goto B48cdb5;
case 0x48cdba:goto L48cdba;
case 0x48cdbf:c.instructions+=5;goto B48cdbf;
case 0x48cdc2:c.instructions+=4;goto B48cdc2;
case 0x48cdc5:c.instructions+=3;goto B48cdc5;
case 0x48cdc8:c.instructions+=2;goto B48cdc8;
case 0x48cdcb:c.instructions+=1;goto B48cdcb;
case 0x48cdd0:goto L48cdd0;
case 0x48cdd5:goto L48cdd5;
case 0x48cdda:goto L48cdda;
case 0x48cddf:goto L48cddf;
case 0x48cde5:c.instructions+=2;goto B48cde5;
case 0x48cde7:c.instructions+=1;goto B48cde7;
case 0x48cdec:goto L48cdec;
case 0x48cdee:goto L48cdee;
case 0x48cdf3:goto L48cdf3;
case 0x48cdf8:goto L48cdf8;
case 0x48cdfd:goto L48cdfd;
case 0x48ce02:goto L48ce02;
case 0x48ce07:goto L48ce07;
case 0x48ce08:c.instructions+=1;goto B48ce08;
case 0x48ce10:goto L48ce10;
case 0x48ce11:c.instructions+=12;goto B48ce11;
case 0x48ce13:c.instructions+=11;goto B48ce13;
case 0x48ce14:c.instructions+=10;goto B48ce14;
case 0x48ce19:c.instructions+=9;goto B48ce19;
case 0x48ce1a:c.instructions+=8;goto B48ce1a;
case 0x48ce1d:c.instructions+=7;goto B48ce1d;
case 0x48ce1e:c.instructions+=6;goto B48ce1e;
case 0x48ce20:c.instructions+=5;goto B48ce20;
case 0x48ce22:c.instructions+=4;goto B48ce22;
case 0x48ce23:c.instructions+=3;goto B48ce23;
case 0x48ce26:c.instructions+=2;goto B48ce26;
case 0x48ce29:c.instructions+=1;goto B48ce29;
case 0x48ce2b:goto L48ce2b;
case 0x48ce2c:c.instructions+=4;goto B48ce2c;
case 0x48ce2d:c.instructions+=3;goto B48ce2d;
case 0x48ce2e:c.instructions+=2;goto B48ce2e;
case 0x48ce33:c.instructions+=1;goto B48ce33;
case 0x48ce38:goto L48ce38;
case 0x48ce3a:c.instructions+=3;goto B48ce3a;
case 0x48ce3f:c.instructions+=2;goto B48ce3f;
case 0x48ce41:c.instructions+=1;goto B48ce41;
case 0x48ce43:goto L48ce43;
case 0x48ce45:c.instructions+=4;goto B48ce45;
case 0x48ce46:c.instructions+=3;goto B48ce46;
case 0x48ce47:c.instructions+=2;goto B48ce47;
case 0x48ce4c:c.instructions+=1;goto B48ce4c;
case 0x48ce51:goto L48ce51;
case 0x48ce54:goto L48ce54;
case 0x48ce55:c.instructions+=4;goto B48ce55;
case 0x48ce57:c.instructions+=3;goto B48ce57;
case 0x48ce58:c.instructions+=2;goto B48ce58;
case 0x48ce59:c.instructions+=1;goto B48ce59;
case 0x48ce5b:goto L48ce5b;
case 0x48ce5e:c.instructions+=2;goto B48ce5e;
case 0x48ce60:c.instructions+=1;goto B48ce60;
case 0x48ce62:goto L48ce62;
case 0x48ce64:c.instructions+=3;goto B48ce64;
case 0x48ce66:c.instructions+=2;goto B48ce66;
case 0x48ce67:c.instructions+=1;goto B48ce67;
case 0x48ce68:goto L48ce68;
case 0x48ce6d:c.instructions+=3;goto B48ce6d;
case 0x48ce6f:c.instructions+=2;goto B48ce6f;
case 0x48ce70:c.instructions+=1;goto B48ce70;
case 0x48ce80:goto L48ce80;
case 0x48ce81:c.instructions+=6;goto B48ce81;
case 0x48ce82:c.instructions+=5;goto B48ce82;
case 0x48ce85:c.instructions+=4;goto B48ce85;
case 0x48ce86:c.instructions+=3;goto B48ce86;
case 0x48ce89:c.instructions+=2;goto B48ce89;
case 0x48ce8b:c.instructions+=1;goto B48ce8b;
case 0x48ce8d:goto L48ce8d;
case 0x48ce91:goto L48ce91;
case 0x48ce94:c.instructions+=3;goto B48ce94;
case 0x48ce95:c.instructions+=2;goto B48ce95;
case 0x48ce96:c.instructions+=1;goto B48ce96;
case 0x48ce9b:goto L48ce9b;
case 0x48ce9e:c.instructions+=2;goto B48ce9e;
case 0x48cea0:c.instructions+=1;goto B48cea0;
case 0x48cea2:goto L48cea2;
case 0x48cea4:c.instructions+=2;goto B48cea4;
case 0x48cea6:c.instructions+=1;goto B48cea6;
case 0x48cea8:goto L48cea8;
case 0x48cea9:c.instructions+=4;goto B48cea9;
case 0x48ceaa:c.instructions+=3;goto B48ceaa;
case 0x48ceac:c.instructions+=2;goto B48ceac;
case 0x48cead:c.instructions+=1;goto B48cead;
case 0x48ceb0:goto L48ceb0;
case 0x48ceb2:c.instructions+=13;goto B48ceb2;
case 0x48ceb5:c.instructions+=12;goto B48ceb5;
case 0x48ceb7:c.instructions+=11;goto B48ceb7;
case 0x48ceba:c.instructions+=10;goto B48ceba;
case 0x48cebc:c.instructions+=9;goto B48cebc;
case 0x48cebe:c.instructions+=8;goto B48cebe;
case 0x48cec1:c.instructions+=7;goto B48cec1;
case 0x48cec4:c.instructions+=6;goto B48cec4;
case 0x48cec6:c.instructions+=5;goto B48cec6;
case 0x48cec7:c.instructions+=4;goto B48cec7;
case 0x48cec9:c.instructions+=3;goto B48cec9;
case 0x48ceca:c.instructions+=2;goto B48ceca;
case 0x48cecb:c.instructions+=1;goto B48cecb;
case 0x48ced0:goto L48ced0;
case 0x48ced1:c.instructions+=6;goto B48ced1;
case 0x48ced2:c.instructions+=5;goto B48ced2;
case 0x48ced5:c.instructions+=4;goto B48ced5;
case 0x48ced6:c.instructions+=3;goto B48ced6;
case 0x48ced9:c.instructions+=2;goto B48ced9;
case 0x48cedb:c.instructions+=1;goto B48cedb;
case 0x48cedd:goto L48cedd;
case 0x48cee1:goto L48cee1;
case 0x48cee7:c.instructions+=2;goto B48cee7;
case 0x48cee9:c.instructions+=1;goto B48cee9;
case 0x48ceeb:goto L48ceeb;
case 0x48cef1:c.instructions+=2;goto B48cef1;
case 0x48cef3:c.instructions+=1;goto B48cef3;
case 0x48cef5:goto L48cef5;
case 0x48cefb:c.instructions+=6;goto B48cefb;
case 0x48cefd:c.instructions+=5;goto B48cefd;
case 0x48ceff:c.instructions+=4;goto B48ceff;
case 0x48cf00:c.instructions+=3;goto B48cf00;
case 0x48cf01:c.instructions+=2;goto B48cf01;
case 0x48cf02:c.instructions+=1;goto B48cf02;
case 0x48cf07:goto L48cf07;
case 0x48cf0a:c.instructions+=2;goto B48cf0a;
case 0x48cf0c:c.instructions+=1;goto B48cf0c;
case 0x48cf0e:goto L48cf0e;
case 0x48cf10:c.instructions+=2;goto B48cf10;
case 0x48cf12:c.instructions+=1;goto B48cf12;
case 0x48cf14:goto L48cf14;
case 0x48cf15:c.instructions+=4;goto B48cf15;
case 0x48cf16:c.instructions+=3;goto B48cf16;
case 0x48cf18:c.instructions+=2;goto B48cf18;
case 0x48cf19:c.instructions+=1;goto B48cf19;
case 0x48cf1c:goto L48cf1c;
case 0x48cf1e:c.instructions+=13;goto B48cf1e;
case 0x48cf21:c.instructions+=12;goto B48cf21;
case 0x48cf23:c.instructions+=11;goto B48cf23;
case 0x48cf26:c.instructions+=10;goto B48cf26;
case 0x48cf28:c.instructions+=9;goto B48cf28;
case 0x48cf2a:c.instructions+=8;goto B48cf2a;
case 0x48cf2d:c.instructions+=7;goto B48cf2d;
case 0x48cf30:c.instructions+=6;goto B48cf30;
case 0x48cf32:c.instructions+=5;goto B48cf32;
case 0x48cf33:c.instructions+=4;goto B48cf33;
case 0x48cf35:c.instructions+=3;goto B48cf35;
case 0x48cf36:c.instructions+=2;goto B48cf36;
case 0x48cf37:c.instructions+=1;goto B48cf37;
case 0x48cf40:goto L48cf40;
case 0x48cf41:c.instructions+=6;goto B48cf41;
case 0x48cf44:c.instructions+=5;goto B48cf44;
case 0x48cf45:c.instructions+=4;goto B48cf45;
case 0x48cf47:c.instructions+=3;goto B48cf47;
case 0x48cf49:c.instructions+=2;goto B48cf49;
case 0x48cf4a:c.instructions+=1;goto B48cf4a;
case 0x48cf4c:goto L48cf4c;
case 0x48cf50:goto L48cf50;
case 0x48cf56:c.instructions+=2;goto B48cf56;
case 0x48cf58:c.instructions+=1;goto B48cf58;
case 0x48cf5a:goto L48cf5a;
case 0x48cf60:c.instructions+=2;goto B48cf60;
case 0x48cf62:c.instructions+=1;goto B48cf62;
case 0x48cf64:goto L48cf64;
case 0x48cf6a:c.instructions+=6;goto B48cf6a;
case 0x48cf6c:c.instructions+=5;goto B48cf6c;
case 0x48cf6e:c.instructions+=4;goto B48cf6e;
case 0x48cf6f:c.instructions+=3;goto B48cf6f;
case 0x48cf70:c.instructions+=2;goto B48cf70;
case 0x48cf71:c.instructions+=1;goto B48cf71;
case 0x48cf76:goto L48cf76;
case 0x48cf79:c.instructions+=2;goto B48cf79;
case 0x48cf7b:c.instructions+=1;goto B48cf7b;
case 0x48cf7d:goto L48cf7d;
case 0x48cf7f:c.instructions+=2;goto B48cf7f;
case 0x48cf81:c.instructions+=1;goto B48cf81;
case 0x48cf83:goto L48cf83;
case 0x48cf85:goto L48cf85;
case 0x48cf86:c.instructions+=3;goto B48cf86;
case 0x48cf87:c.instructions+=2;goto B48cf87;
case 0x48cf88:c.instructions+=1;goto B48cf88;
case 0x48cf90:goto L48cf90;
case 0x48cf96:c.instructions+=12;goto B48cf96;
case 0x48cf97:c.instructions+=11;goto B48cf97;
case 0x48cf98:c.instructions+=10;goto B48cf98;
case 0x48cf9f:c.instructions+=9;goto B48cf9f;
case 0x48cfa0:c.instructions+=8;goto B48cfa0;
case 0x48cfa7:c.instructions+=7;goto B48cfa7;
case 0x48cfa9:c.instructions+=6;goto B48cfa9;
case 0x48cfaa:c.instructions+=5;goto B48cfaa;
case 0x48cfad:c.instructions+=4;goto B48cfad;
case 0x48cfae:c.instructions+=3;goto B48cfae;
case 0x48cfb0:c.instructions+=2;goto B48cfb0;
case 0x48cfb4:c.instructions+=1;goto B48cfb4;
case 0x48cfb9:goto L48cfb9;
case 0x48cfbc:c.instructions+=7;goto B48cfbc;
case 0x48cfbe:c.instructions+=6;goto B48cfbe;
case 0x48cfc5:c.instructions+=5;goto B48cfc5;
case 0x48cfc8:c.instructions+=4;goto B48cfc8;
case 0x48cfca:c.instructions+=3;goto B48cfca;
case 0x48cfce:c.instructions+=2;goto B48cfce;
case 0x48cfd1:c.instructions+=1;goto B48cfd1;
case 0x48cfd7:goto L48cfd7;
case 0x48cfda:c.instructions+=9;goto B48cfda;
case 0x48cfdd:c.instructions+=8;goto B48cfdd;
case 0x48cfde:c.instructions+=7;goto B48cfde;
case 0x48cfe1:c.instructions+=6;goto B48cfe1;
case 0x48cfe4:c.instructions+=5;goto B48cfe4;
case 0x48cfe6:c.instructions+=4;goto B48cfe6;
case 0x48cfe9:c.instructions+=3;goto B48cfe9;
case 0x48cfec:c.instructions+=2;goto B48cfec;
case 0x48cfef:c.instructions+=1;goto B48cfef;
case 0x48cff1:goto L48cff1;
case 0x48cff2:c.instructions+=3;goto B48cff2;
case 0x48cff3:c.instructions+=2;goto B48cff3;
case 0x48cff5:c.instructions+=1;goto B48cff5;
case 0x48cffa:goto L48cffa;
case 0x48cffe:c.instructions+=1;goto B48cffe;
default:missing_instruction(c.pc);}
B48c005:L48c005:{c.instructions+=2;NFSU2_TR(0x48c005);
u8 U[8];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c00c:{NFSU2_TR(0x48c00c);
if(r1(R+518)){{goto L48c01a;}}
}
B48c00e:L48c00e:{c.instructions+=3;NFSU2_TR(0x48c00e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48c011:{NFSU2_TR(0x48c011);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c018:{NFSU2_TR(0x48c018);
{goto L48c021;}
}
B48c01a:L48c01a:{c.instructions+=1;NFSU2_TR(0x48c01a);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c021:L48c021:{c.instructions+=4;NFSU2_TR(0x48c021);
__builtin_memmove((R+4),(R+28),4);
}
B48c023:{NFSU2_TR(0x48c023);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c02a:{NFSU2_TR(0x48c02a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c02e:{NFSU2_TR(0x48c02e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48c033ull));
TAIL_STATIC(0x502fd0u,502);
}
B48c033:L48c033:{c.instructions+=2;NFSU2_TR(0x48c033);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c03a:{NFSU2_TR(0x48c03a);
__builtin_memmove((R+12),(R+12),4);
}
B48c040:L48c040:{c.instructions+=3;NFSU2_TR(0x48c040);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48c044:{NFSU2_TR(0x48c044);
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
B48c046:{NFSU2_TR(0x48c046);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48c054;}}
}
B48c048:L48c048:{c.instructions+=3;NFSU2_TR(0x48c048);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48c04b:{NFSU2_TR(0x48c04b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48c04c:{NFSU2_TR(0x48c04c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48c051ull));
TAIL_STATIC(0x5b7de0u,5b7);
}
B48c051:L48c051:{c.instructions+=1;NFSU2_TR(0x48c051);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B48c054:L48c054:{c.instructions+=5;NFSU2_TR(0x48c054);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48c05b:{NFSU2_TR(0x48c05b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B48c05d:{NFSU2_TR(0x48c05d);
u8 U[16];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B48c064:{NFSU2_TR(0x48c064);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c06b:{NFSU2_TR(0x48c06b);
if(r1(R+518)){{goto L48ccf6;}}
}
B48c071:L48c071:{c.instructions+=6;NFSU2_TR(0x48c071);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48c075:{NFSU2_TR(0x48c075);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B48c079:{NFSU2_TR(0x48c079);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48c07b:{NFSU2_TR(0x48c07b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B48c07d:{NFSU2_TR(0x48c07d);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c084:{NFSU2_TR(0x48c084);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48ccdb;}}
}
B48c08a:L48c08a:{c.instructions+=3;NFSU2_TR(0x48c08a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48c08d:{NFSU2_TR(0x48c08d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48c08f:{NFSU2_TR(0x48c08f);
if(r1(R+518)){{goto L48c10f;}}
}
B48c091:L48c091:{c.instructions+=7;NFSU2_TR(0x48c091);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48c094:{NFSU2_TR(0x48c094);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48c097:{NFSU2_TR(0x48c097);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48c09d:{NFSU2_TR(0x48c09d);
w4(R+8,u32(0x1ull));
}
B48c0a2:{NFSU2_TR(0x48c0a2);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B48c0a4:{NFSU2_TR(0x48c0a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48c0a6:{NFSU2_TR(0x48c0a6);
if(r1(R+518)){{goto L48ccdb;}}
}
B48c0ac:L48c0ac:{c.instructions+=5;NFSU2_TR(0x48c0ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48c0af:{NFSU2_TR(0x48c0af);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48c0b2:{NFSU2_TR(0x48c0b2);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B48c0b3:{NFSU2_TR(0x48c0b3);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x19ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x19ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x19ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B48c0b6:{NFSU2_TR(0x48c0b6);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L48c10f;}}
}
B48c0b8:L48c0b8:{c.instructions+=2;NFSU2_TR(0x48c0b8);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48cd40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B48c0bf:{NFSU2_TR(0x48c0bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x48cd30ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B48c0c6:L48c0c6:{c.instructions+=2;NFSU2_TR(0x48c0c6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48c0c9:{NFSU2_TR(0x48c0c9);
if(r1(R+518)){{goto L48ccdb;}}
}
B48c0cf:L48c0cf:{c.instructions+=2;NFSU2_TR(0x48c0cf);
u8 U[16];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B48c0d6:{NFSU2_TR(0x48c0d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48c10f;}}
}
B48c0d8:L48c0d8:{c.instructions+=1;NFSU2_TR(0x48c0d8);
{goto L48ccdb;}
}
B48c0dd:L48c0dd:{c.instructions+=2;NFSU2_TR(0x48c0dd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48c0e0:{NFSU2_TR(0x48c0e0);
if(r1(R+518)){{goto L48c10f;}}
}
B48c0e2:L48c0e2:{c.instructions+=2;NFSU2_TR(0x48c0e2);
u8 U[16];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B48c0e9:{NFSU2_TR(0x48c0e9);
if(r1(R+518)){{goto L48ccdb;}}
}
B48c0ef:L48c0ef:{c.instructions+=1;NFSU2_TR(0x48c0ef);
{goto L48c10f;}
}
B48c0f1:L48c0f1:{c.instructions+=2;NFSU2_TR(0x48c0f1);
u8 U[16];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B48c0f8:{NFSU2_TR(0x48c0f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48c10f;}}
}
B48c0fa:L48c0fa:{c.instructions+=4;NFSU2_TR(0x48c0fa);
u8 U[8];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48c101:{NFSU2_TR(0x48c101);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x284ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48c107:{NFSU2_TR(0x48c107);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48c109:{NFSU2_TR(0x48c109);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48ccdb;}}
}
B48c10f:L48c10f:{c.instructions+=9;NFSU2_TR(0x48c10f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48c112:{NFSU2_TR(0x48c112);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c118:{NFSU2_TR(0x48c118);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B48c11b:{NFSU2_TR(0x48c11b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48c11e:{NFSU2_TR(0x48c11e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48c120:{NFSU2_TR(0x48c120);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B48c123:{NFSU2_TR(0x48c123);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c12a:{NFSU2_TR(0x48c12a);
{u32 ea_=u32(r4(R+16)+u32(228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c131:{NFSU2_TR(0x48c131);
if(r1(R+518)){{goto L48ccdb;}}
}
B48c137:L48c137:{c.instructions+=3;NFSU2_TR(0x48c137);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48c13e:{NFSU2_TR(0x48c13e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48c140:{NFSU2_TR(0x48c140);
if(r1(R+518)){{goto L48c14a;}}
}
B48c142:L48c142:{c.instructions+=2;NFSU2_TR(0x48c142);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48c144:{NFSU2_TR(0x48c144);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48ccdb;}}
}
B48c14a:L48c14a:{c.instructions+=3;NFSU2_TR(0x48c14a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48c14e:{NFSU2_TR(0x48c14e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48c150:{NFSU2_TR(0x48c150);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48c174;}}
}
B48c152:L48c152:{c.instructions+=5;NFSU2_TR(0x48c152);
u8 U[8];
w4(U+0,u32(u32(u32(0x234ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c159:{NFSU2_TR(0x48c159);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48c15c:{NFSU2_TR(0x48c15c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48c15d:{NFSU2_TR(0x48c15d);
u8 U[8];
w4(U+0,u32(u32(u32(0x23cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c164:{NFSU2_TR(0x48c164);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48c169ull));
TAIL_STATIC(0x5b7e60u,5b7);
}
B48c169:L48c169:{c.instructions+=3;NFSU2_TR(0x48c169);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B48c16c:{NFSU2_TR(0x48c16c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48c16e:{NFSU2_TR(0x48c16e);
if(r1(R+518)){{goto L48ccdb;}}
}
B48c174:L48c174:{c.instructions+=2;NFSU2_TR(0x48c174);
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
B48c176:{NFSU2_TR(0x48c176);
if(r1(R+518)){{goto L48c18a;}}
}
B48c178:L48c178:{c.instructions+=3;NFSU2_TR(0x48c178);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B48c17b:{NFSU2_TR(0x48c17b);
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
B48c17d:{NFSU2_TR(0x48c17d);
if(r1(R+518)){{goto L48c18a;}}
}
B48c17f:L48c17f:{c.instructions+=4;NFSU2_TR(0x48c17f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48c180:{NFSU2_TR(0x48c180);
u8 U[4];
w4(U+0,u32(u32(u32(0x374ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B48c187:{NFSU2_TR(0x48c187);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48c188:{NFSU2_TR(0x48c188);
{goto L48c199;}
}
B48c18a:L48c18a:{c.instructions+=4;NFSU2_TR(0x48c18a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((R+0),(U+0),4);
}
B48c190:{NFSU2_TR(0x48c190);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48c191:{NFSU2_TR(0x48c191);
u8 U[4];
w4(U+0,u32(u32(u32(0x374ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B48c198:{NFSU2_TR(0x48c198);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48c199:L48c199:{c.instructions+=1;NFSU2_TR(0x48c199);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48c19eull));
TAIL_STATIC(0x4012b0u,401);
}
B48c19e:L48c19e:{c.instructions+=6;NFSU2_TR(0x48c19e);
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
B48c1a1:{NFSU2_TR(0x48c1a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((R+8),(U+0),4);
}
B48c1a7:{NFSU2_TR(0x48c1a7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48c1a8:{NFSU2_TR(0x48c1a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x3b4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B48c1af:{NFSU2_TR(0x48c1af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48c1b0:{NFSU2_TR(0x48c1b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48c1b5ull));
TAIL_STATIC(0x4012b0u,401);
}
B48c1b5:L48c1b5:{c.instructions+=8;NFSU2_TR(0x48c1b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48c1bb:{NFSU2_TR(0x48c1bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c1bf:{NFSU2_TR(0x48c1bf);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c1c3:{NFSU2_TR(0x48c1c3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B48c1c6:{NFSU2_TR(0x48c1c6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B48c1cc:{NFSU2_TR(0x48c1cc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48c1ce:{NFSU2_TR(0x48c1ce);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B48c1d1:{NFSU2_TR(0x48c1d1);
if(r1(R+514)){{goto L48c1df;}}
}
B48c1d3:L48c1d3:{c.instructions+=3;NFSU2_TR(0x48c1d3);
__builtin_memmove((R+8),gp(0x78d768),4);
}
B48c1d9:{NFSU2_TR(0x48c1d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c1dd:{NFSU2_TR(0x48c1dd);
{goto L48c1f9;}
}
B48c1df:L48c1df:{c.instructions+=5;NFSU2_TR(0x48c1df);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c1e3:{NFSU2_TR(0x48c1e3);
{u32 ea_=u32(u32(7919464u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B48c1e9:{NFSU2_TR(0x48c1e9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48c1eb:{NFSU2_TR(0x48c1eb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B48c1ee:{NFSU2_TR(0x48c1ee);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L48c1f9;}}
}
B48c1f0:L48c1f0:{c.instructions+=2;NFSU2_TR(0x48c1f0);
__builtin_memmove((R+0),gp(0x78d768),4);
}
B48c1f5:{NFSU2_TR(0x48c1f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c1f9:L48c1f9:{c.instructions+=34;NFSU2_TR(0x48c1f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(s32(s8(r1(U+4)))));
}
B48c1fd:{NFSU2_TR(0x48c1fd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B48c201:{NFSU2_TR(0x48c201);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B48c204:{NFSU2_TR(0x48c204);
__builtin_memmove((R+4),(R+28),4);
}
B48c206:{NFSU2_TR(0x48c206);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B48c208:{NFSU2_TR(0x48c208);
__builtin_memmove((R+4),(R+8),4);
}
B48c20a:{NFSU2_TR(0x48c20a);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c211:{NFSU2_TR(0x48c211);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48c219:{NFSU2_TR(0x48c219);
w4(R+0,u32(~u32(r4(R+0))));
}
B48c21b:{NFSU2_TR(0x48c21b);
u8 U[8];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c222:{NFSU2_TR(0x48c222);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B48c225:{NFSU2_TR(0x48c225);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B48c227:{NFSU2_TR(0x48c227);
__builtin_memmove((R+4),(R+28),4);
}
B48c229:{NFSU2_TR(0x48c229);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48c234:{NFSU2_TR(0x48c234);
w4(R+0,u32(~u32(r4(R+0))));
}
B48c236:{NFSU2_TR(0x48c236);
u8 U[8];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c23d:{NFSU2_TR(0x48c23d);
w4(R+0,u32(0x1ull));
}
B48c242:{NFSU2_TR(0x48c242);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B48c244:{NFSU2_TR(0x48c244);
__builtin_memmove((R+4),(R+8),4);
}
B48c246:{NFSU2_TR(0x48c246);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c24a:{NFSU2_TR(0x48c24a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B48c24e:{NFSU2_TR(0x48c24e);
w4(R+0,u32(0x1ull));
}
B48c253:{NFSU2_TR(0x48c253);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B48c255:{NFSU2_TR(0x48c255);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48c259:{NFSU2_TR(0x48c259);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B48c25f:{NFSU2_TR(0x48c25f);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B48c263:{NFSU2_TR(0x48c263);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c267:{NFSU2_TR(0x48c267);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B48c26b:{NFSU2_TR(0x48c26b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48c26d:{NFSU2_TR(0x48c26d);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c274:{NFSU2_TR(0x48c274);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B48c278:{NFSU2_TR(0x48c278);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B48c27e:{NFSU2_TR(0x48c27e);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c285:{NFSU2_TR(0x48c285);
if(r1(R+518)){{goto L48cca2;}}
}
B48c28b:L48c28b:{c.instructions+=1;NFSU2_TR(0x48c28b);
{goto L48c290;}
}
B48c290:L48c290:{c.instructions+=22;NFSU2_TR(0x48c290);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B48c294:{NFSU2_TR(0x48c294);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B48c296:{NFSU2_TR(0x48c296);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c29a:{NFSU2_TR(0x48c29a);
u8 U[4];
w4(U+0,u32(u32(u32(0x370ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B48c2a1:{NFSU2_TR(0x48c2a1);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c2a8:{NFSU2_TR(0x48c2a8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B48c2ac:{NFSU2_TR(0x48c2ac);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B48c2b3:{NFSU2_TR(0x48c2b3);
{u32 ea_=u32(u32(7919972u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c2b9:{NFSU2_TR(0x48c2b9);
{u32 ea_=u32(r4(R+16)+u32(228u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c2c0:{NFSU2_TR(0x48c2c0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B48c2c6:{NFSU2_TR(0x48c2c6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c2ca:{NFSU2_TR(0x48c2ca);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c2cd:{NFSU2_TR(0x48c2cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B48c2d1:{NFSU2_TR(0x48c2d1);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c2d5:{NFSU2_TR(0x48c2d5);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c2d8:{NFSU2_TR(0x48c2d8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48c2d9:{NFSU2_TR(0x48c2d9);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c2dd:{NFSU2_TR(0x48c2dd);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c2e0:{NFSU2_TR(0x48c2e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48c2e1:{NFSU2_TR(0x48c2e1);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c2e5:{NFSU2_TR(0x48c2e5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48c2e6:{NFSU2_TR(0x48c2e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48c2ebull));
TAIL_STATIC(0x4881d0u,488);
}
B48c2eb:L48c2eb:{c.instructions+=6;NFSU2_TR(0x48c2eb);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c2f2:{NFSU2_TR(0x48c2f2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B48c2f8:{NFSU2_TR(0x48c2f8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B48c2fb:{NFSU2_TR(0x48c2fb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48c2fd:{NFSU2_TR(0x48c2fd);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48c300:{NFSU2_TR(0x48c300);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48c404;}}
}
B48c306:L48c306:{c.instructions+=6;NFSU2_TR(0x48c306);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c30d:{NFSU2_TR(0x48c30d);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c313:{NFSU2_TR(0x48c313);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B48c31a:{NFSU2_TR(0x48c31a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48c31c:{NFSU2_TR(0x48c31c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B48c31f:{NFSU2_TR(0x48c31f);
if(r1(R+514)){{goto L48c329;}}
}
B48c321:L48c321:{c.instructions+=2;NFSU2_TR(0x48c321);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48c323:{NFSU2_TR(0x48c323);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c329:L48c329:{c.instructions+=7;NFSU2_TR(0x48c329);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B48c330:{NFSU2_TR(0x48c330);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c337:{NFSU2_TR(0x48c337);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c33e:{NFSU2_TR(0x48c33e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B48c344:{NFSU2_TR(0x48c344);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48c346:{NFSU2_TR(0x48c346);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48c349:{NFSU2_TR(0x48c349);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48c40f;}}
}
B48c34f:L48c34f:{c.instructions+=6;NFSU2_TR(0x48c34f);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c356:{NFSU2_TR(0x48c356);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c35c:{NFSU2_TR(0x48c35c);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B48c363:{NFSU2_TR(0x48c363);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48c365:{NFSU2_TR(0x48c365);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B48c368:{NFSU2_TR(0x48c368);
if(r1(R+514)){{goto L48c372;}}
}
B48c36a:L48c36a:{c.instructions+=2;NFSU2_TR(0x48c36a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48c36c:{NFSU2_TR(0x48c36c);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c372:L48c372:{c.instructions+=7;NFSU2_TR(0x48c372);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B48c379:{NFSU2_TR(0x48c379);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c380:{NFSU2_TR(0x48c380);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c387:{NFSU2_TR(0x48c387);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B48c38d:{NFSU2_TR(0x48c38d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48c38f:{NFSU2_TR(0x48c38f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48c392:{NFSU2_TR(0x48c392);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48c41a;}}
}
B48c398:L48c398:{c.instructions+=6;NFSU2_TR(0x48c398);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c39f:{NFSU2_TR(0x48c39f);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c3a5:{NFSU2_TR(0x48c3a5);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B48c3ac:{NFSU2_TR(0x48c3ac);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48c3ae:{NFSU2_TR(0x48c3ae);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B48c3b1:{NFSU2_TR(0x48c3b1);
if(r1(R+514)){{goto L48c3bb;}}
}
B48c3b3:L48c3b3:{c.instructions+=2;NFSU2_TR(0x48c3b3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48c3b5:{NFSU2_TR(0x48c3b5);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c3bb:L48c3bb:{c.instructions+=7;NFSU2_TR(0x48c3bb);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B48c3c2:{NFSU2_TR(0x48c3c2);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c3c9:{NFSU2_TR(0x48c3c9);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c3d0:{NFSU2_TR(0x48c3d0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B48c3d6:{NFSU2_TR(0x48c3d6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48c3d8:{NFSU2_TR(0x48c3d8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48c3db:{NFSU2_TR(0x48c3db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48c422;}}
}
B48c3dd:L48c3dd:{c.instructions+=6;NFSU2_TR(0x48c3dd);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c3e4:{NFSU2_TR(0x48c3e4);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c3ea:{NFSU2_TR(0x48c3ea);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B48c3f1:{NFSU2_TR(0x48c3f1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48c3f3:{NFSU2_TR(0x48c3f3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B48c3f6:{NFSU2_TR(0x48c3f6);
if(r1(R+514)){{goto L48c428;}}
}
B48c3f8:L48c3f8:{c.instructions+=3;NFSU2_TR(0x48c3f8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48c3fa:{NFSU2_TR(0x48c3fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
w4(U+4,u32(0x437f0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48c402:{NFSU2_TR(0x48c402);
{goto L48c42c;}
}
B48c404:L48c404:{c.instructions+=2;NFSU2_TR(0x48c404);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c40a:{NFSU2_TR(0x48c40a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48c329u);}goto L48c329;}
}
B48c40f:L48c40f:{c.instructions+=2;NFSU2_TR(0x48c40f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c415:{NFSU2_TR(0x48c415);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48c372u);}goto L48c372;}
}
B48c41a:L48c41a:{c.instructions+=2;NFSU2_TR(0x48c41a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c420:{NFSU2_TR(0x48c420);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48c3bbu);}goto L48c3bb;}
}
B48c422:L48c422:{c.instructions+=1;NFSU2_TR(0x48c422);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c428:L48c428:{c.instructions+=1;NFSU2_TR(0x48c428);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c42c:L48c42c:{c.instructions+=4;NFSU2_TR(0x48c42c);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48c430:{NFSU2_TR(0x48c430);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c434:{NFSU2_TR(0x48c434);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c43b:{NFSU2_TR(0x48c43b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48c440ull));
TAIL_STATIC(0x75bed4u,75b);
}
B48c440:L48c440:{c.instructions+=17;NFSU2_TR(0x48c440);
{u32 ea_=u32(r4(R+16)+u32(808u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c447:{NFSU2_TR(0x48c447);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c44b:{NFSU2_TR(0x48c44b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48c44c:{NFSU2_TR(0x48c44c);
{u32 ea_=u32(r4(R+16)+u32(828u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c453:{NFSU2_TR(0x48c453);
u8 U[4];
w4(U+0,u32(u32(u32(0x3b4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B48c45a:{NFSU2_TR(0x48c45a);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c45e:{NFSU2_TR(0x48c45e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48c45f:{NFSU2_TR(0x48c45f);
u8 U[4];
w4(U+0,u32(u32(u32(0x1d8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B48c466:{NFSU2_TR(0x48c466);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48c467:{NFSU2_TR(0x48c467);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48c469:{NFSU2_TR(0x48c469);
__builtin_memmove((R+28),(R+0),4);
}
B48c46b:{NFSU2_TR(0x48c46b);
{u32 ea_=u32(r4(R+16)+u32(852u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c472:{NFSU2_TR(0x48c472);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c476:{NFSU2_TR(0x48c476);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48c478:{NFSU2_TR(0x48c478);
{u32 ea_=u32(r4(R+16)+u32(868u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48c47f:{NFSU2_TR(0x48c47f);
{u32 ea_=u32(r4(R+16)+u32(468u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c486:{NFSU2_TR(0x48c486);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48c48bull));
TAIL_STATIC(0x4881d0u,488);
}
B48c48b:L48c48b:{c.instructions+=8;NFSU2_TR(0x48c48b);
{u32 ea_=u32(r4(R+16)+u32(476u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c492:{NFSU2_TR(0x48c492);
u8 U[8];
w4(U+0,u32(u32(u32(0x1dcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48c499:{NFSU2_TR(0x48c499);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B48c49f:{NFSU2_TR(0x48c49f);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c4a3:{NFSU2_TR(0x48c4a3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B48c4a6:{NFSU2_TR(0x48c4a6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48c4a8:{NFSU2_TR(0x48c4a8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48c4ab:{NFSU2_TR(0x48c4ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48c4d8;}}
}
B48c4ad:L48c4ad:{c.instructions+=5;NFSU2_TR(0x48c4ad);
{u32 ea_=u32(r4(R+16)+u32(456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c4b4:{NFSU2_TR(0x48c4b4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B48c4ba:{NFSU2_TR(0x48c4ba);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48c4bc:{NFSU2_TR(0x48c4bc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48c4bf:{NFSU2_TR(0x48c4bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48c4d8;}}
}
B48c4c1:L48c4c1:{c.instructions+=4;NFSU2_TR(0x48c4c1);
{u32 ea_=u32(r4(R+16)+u32(464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c4c8:{NFSU2_TR(0x48c4c8);
{u32 ea_=u32(r4(R+16)+u32(456u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B48c4cf:{NFSU2_TR(0x48c4cf);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c4d6:{NFSU2_TR(0x48c4d6);
{goto L48c4de;}
}
B48c4d8:L48c4d8:{c.instructions+=1;NFSU2_TR(0x48c4d8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c4de:L48c4de:{c.instructions+=4;NFSU2_TR(0x48c4de);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B48c4e2:{NFSU2_TR(0x48c4e2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48c4e4:{NFSU2_TR(0x48c4e4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48c4e7:{NFSU2_TR(0x48c4e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48c505;}}
}
B48c4e9:L48c4e9:{c.instructions+=6;NFSU2_TR(0x48c4e9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48c4eb:{NFSU2_TR(0x48c4eb);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c4ef:{NFSU2_TR(0x48c4ef);
{u32 ea_=u32(r4(R+16)+u32(456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c4f6:{NFSU2_TR(0x48c4f6);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B48c4fd:{NFSU2_TR(0x48c4fd);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c501:{NFSU2_TR(0x48c501);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c505:L48c505:{c.instructions+=3;NFSU2_TR(0x48c505);
{u32 ea_=u32(r4(R+16)+u32(468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c50c:{NFSU2_TR(0x48c50c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+12),(U+4),2);
}
B48c510:{NFSU2_TR(0x48c510);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48c515ull));
TAIL_STATIC(0x75bed4u,75b);
}
B48c515:L48c515:{c.instructions+=2;NFSU2_TR(0x48c515);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48c518:{NFSU2_TR(0x48c518);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48c51e;}}
}
B48c51a:L48c51a:{c.instructions+=2;NFSU2_TR(0x48c51a);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B48c51c:{NFSU2_TR(0x48c51c);
{goto L48c520;}
}
B48c51e:L48c51e:{c.instructions+=1;NFSU2_TR(0x48c51e);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B48c520:L48c520:{c.instructions+=28;NFSU2_TR(0x48c520);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B48c524:{NFSU2_TR(0x48c524);
u8 U[8];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48c52b:{NFSU2_TR(0x48c52b);
__builtin_memmove((R+4),(R+0),4);
}
B48c52d:{NFSU2_TR(0x48c52d);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B48c52f:{NFSU2_TR(0x48c52f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c533:{NFSU2_TR(0x48c533);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48c53a:{NFSU2_TR(0x48c53a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r1(U+0))));
}
B48c53c:{NFSU2_TR(0x48c53c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B48c540:{NFSU2_TR(0x48c540);
u8 U[8];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48c547:{NFSU2_TR(0x48c547);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c54e:{NFSU2_TR(0x48c54e);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B48c550:{NFSU2_TR(0x48c550);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48c554:{NFSU2_TR(0x48c554);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c558:{NFSU2_TR(0x48c558);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c55c:{NFSU2_TR(0x48c55c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B48c560:{NFSU2_TR(0x48c560);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B48c564:{NFSU2_TR(0x48c564);
__builtin_memmove((R+24),(R+0),4);
}
B48c566:{NFSU2_TR(0x48c566);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c56d:{NFSU2_TR(0x48c56d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B48c570:{NFSU2_TR(0x48c570);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48c572:{NFSU2_TR(0x48c572);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c576:{NFSU2_TR(0x48c576);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c57a:{NFSU2_TR(0x48c57a);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48c581:{NFSU2_TR(0x48c581);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c588:{NFSU2_TR(0x48c588);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c58c:{NFSU2_TR(0x48c58c);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48c593:{NFSU2_TR(0x48c593);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c59a:{NFSU2_TR(0x48c59a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48c6a5;}}
}
B48c5a0:L48c5a0:{c.instructions+=42;NFSU2_TR(0x48c5a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48c5a4:{NFSU2_TR(0x48c5a4);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c5a8:{NFSU2_TR(0x48c5a8);
{u32 ea_=u32((r4(R+24)*8u)+u32(8337732u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c5af:{NFSU2_TR(0x48c5af);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48c5b3:{NFSU2_TR(0x48c5b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x244ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c5ba:{NFSU2_TR(0x48c5ba);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48c5c1:{NFSU2_TR(0x48c5c1);
{u32 ea_=u32(u32(7919468u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c5c7:{NFSU2_TR(0x48c5c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48c5cb:{NFSU2_TR(0x48c5cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x254ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c5d2:{NFSU2_TR(0x48c5d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7f3944ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B48c5d9:{NFSU2_TR(0x48c5d9);
{u32 ea_=u32(r4(R+16)+u32(608u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c5e0:{NFSU2_TR(0x48c5e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x248ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c5e7:{NFSU2_TR(0x48c5e7);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48c5ee:{NFSU2_TR(0x48c5ee);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c5f2:{NFSU2_TR(0x48c5f2);
{u32 ea_=u32(u32(7919468u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c5f8:{NFSU2_TR(0x48c5f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x258ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c5ff:{NFSU2_TR(0x48c5ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7f3948ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B48c606:{NFSU2_TR(0x48c606);
u8 U[8];
w4(U+0,u32(u32(u32(0x240ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c60d:{NFSU2_TR(0x48c60d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c60f:{NFSU2_TR(0x48c60f);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48c616:{NFSU2_TR(0x48c616);
u8 U[8];
w4(U+0,u32(u32(u32(0x250ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c61d:{NFSU2_TR(0x48c61d);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48c621:{NFSU2_TR(0x48c621);
{u32 ea_=u32(r4(R+16)+u32(612u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c628:{NFSU2_TR(0x48c628);
u8 U[8];
w4(U+0,u32(u32(u32(0x25cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c62f:{NFSU2_TR(0x48c62f);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48c636:{NFSU2_TR(0x48c636);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B48c638:{NFSU2_TR(0x48c638);
u8 U[8];
w4(U+0,u32(u32(u32(0x24cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48c643:{NFSU2_TR(0x48c643);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c645:{NFSU2_TR(0x48c645);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48c649:{NFSU2_TR(0x48c649);
u8 U[8];
w4(U+0,u32(u32(u32(0x270ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c650:{NFSU2_TR(0x48c650);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48c657:{NFSU2_TR(0x48c657);
{u32 ea_=u32(r4(R+16)+u32(616u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c65e:{NFSU2_TR(0x48c65e);
u8 U[8];
w4(U+0,u32(u32(u32(0x278ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c665:{NFSU2_TR(0x48c665);
u8 U[8];
w4(U+0,u32(u32(u32(0x27cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c66c:{NFSU2_TR(0x48c66c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c66e:{NFSU2_TR(0x48c66e);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48c672:{NFSU2_TR(0x48c672);
u8 U[8];
w4(U+0,u32(u32(u32(0x274ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c679:{NFSU2_TR(0x48c679);
u8 U[4];
w4(U+0,u32(u32(u32(0x230ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B48c680:{NFSU2_TR(0x48c680);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48c681:{NFSU2_TR(0x48c681);
{u32 ea_=u32(r4(R+16)+u32(624u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c688:{NFSU2_TR(0x48c688);
u8 U[6];
w4(U+0,u32(u32(u32(0x284ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B48c690:{NFSU2_TR(0x48c690);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48c695ull));
TAIL_STATIC(0x5c0e10u,5c0);
}
B48c695:L48c695:{c.instructions+=3;NFSU2_TR(0x48c695);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B48c698:{NFSU2_TR(0x48c698);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48c69a:{NFSU2_TR(0x48c69a);
if(r1(R+518)){{goto L48ccaa;}}
}
B48c6a0:L48c6a0:{c.instructions+=1;NFSU2_TR(0x48c6a0);
{goto L48cc59;}
}
B48c6a5:L48c6a5:{c.instructions+=23;NFSU2_TR(0x48c6a5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48c6a7:{NFSU2_TR(0x48c6a7);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B48c6aa:{NFSU2_TR(0x48c6aa);
__builtin_memmove((R+4),(R+0),4);
}
B48c6ac:{NFSU2_TR(0x48c6ac);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B48c6af:{NFSU2_TR(0x48c6af);
u8 U[2];
w2(U+0,u16(u32(r2(R+12))&u32(r2(R+12))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B48c6b2:{NFSU2_TR(0x48c6b2);
{u32 ea_=u32(r4(R+4)+r4(R+16)+u32(384u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c6b9:{NFSU2_TR(0x48c6b9);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B48c6bd:{NFSU2_TR(0x48c6bd);
u8 U[16];
w4(U+0,u32(u32(u32(0x1e0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B48c6c4:{NFSU2_TR(0x48c6c4);
{u32 ea_=u32(r4(R+4)+r4(R+16)+u32(388u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c6cb:{NFSU2_TR(0x48c6cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c6cf:{NFSU2_TR(0x48c6cf);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c6d3:{NFSU2_TR(0x48c6d3);
{u32 ea_=u32(r4(R+4)+r4(R+16)+u32(392u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c6da:{NFSU2_TR(0x48c6da);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c6de:{NFSU2_TR(0x48c6de);
{u32 ea_=u32(r4(R+4)+r4(R+16)+u32(396u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c6e5:{NFSU2_TR(0x48c6e5);
u8 U[12];
w4(U+0,u32(u32(u32(0x1e0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B48c6ec:{NFSU2_TR(0x48c6ec);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c6f0:{NFSU2_TR(0x48c6f0);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c6f3:{NFSU2_TR(0x48c6f3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c6f7:{NFSU2_TR(0x48c6f7);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c6fa:{NFSU2_TR(0x48c6fa);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c6fe:{NFSU2_TR(0x48c6fe);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c701:{NFSU2_TR(0x48c701);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c705:{NFSU2_TR(0x48c705);
if(r1(R+518)){{goto L48c97e;}}
}
B48c70b:L48c70b:{c.instructions+=2;NFSU2_TR(0x48c70b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48c70d:{NFSU2_TR(0x48c70d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48c893;}}
}
B48c713:L48c713:{c.instructions+=5;NFSU2_TR(0x48c713);
u8 U[4];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B48c71a:{NFSU2_TR(0x48c71a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48c71c:{NFSU2_TR(0x48c71c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48c71d:{NFSU2_TR(0x48c71d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48c71e:{NFSU2_TR(0x48c71e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48c723ull));
TAIL_STATIC(0x5bac90u,5ba);
}
B48c723:L48c723:{c.instructions+=79;NFSU2_TR(0x48c723);
{u32 ea_=u32(r4(R+16)+u32(312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c72a:{NFSU2_TR(0x48c72a);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c72e:{NFSU2_TR(0x48c72e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B48c731:{NFSU2_TR(0x48c731);
{u32 ea_=u32(r4(R+16)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c738:{NFSU2_TR(0x48c738);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c73c:{NFSU2_TR(0x48c73c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48c73e:{NFSU2_TR(0x48c73e);
{u32 ea_=u32(r4(R+16)+u32(272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c745:{NFSU2_TR(0x48c745);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c749:{NFSU2_TR(0x48c749);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48c74b:{NFSU2_TR(0x48c74b);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c752:{NFSU2_TR(0x48c752);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c756:{NFSU2_TR(0x48c756);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48c758:{NFSU2_TR(0x48c758);
{u32 ea_=u32(r4(R+16)+u32(308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c75f:{NFSU2_TR(0x48c75f);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c763:{NFSU2_TR(0x48c763);
{u32 ea_=u32(r4(R+16)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c76a:{NFSU2_TR(0x48c76a);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c76e:{NFSU2_TR(0x48c76e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48c770:{NFSU2_TR(0x48c770);
{u32 ea_=u32(r4(R+16)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c777:{NFSU2_TR(0x48c777);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c77b:{NFSU2_TR(0x48c77b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48c77d:{NFSU2_TR(0x48c77d);
{u32 ea_=u32(r4(R+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c784:{NFSU2_TR(0x48c784);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c788:{NFSU2_TR(0x48c788);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48c78a:{NFSU2_TR(0x48c78a);
{u32 ea_=u32(r4(R+16)+u32(548u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c791:{NFSU2_TR(0x48c791);
u8 U[8];
w4(U+0,u32(u32(u32(0x224ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48c798:{NFSU2_TR(0x48c798);
{u32 ea_=u32(r4(R+16)+u32(312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c79f:{NFSU2_TR(0x48c79f);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c7a3:{NFSU2_TR(0x48c7a3);
{u32 ea_=u32(r4(R+16)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c7aa:{NFSU2_TR(0x48c7aa);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c7ae:{NFSU2_TR(0x48c7ae);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48c7b0:{NFSU2_TR(0x48c7b0);
{u32 ea_=u32(r4(R+16)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c7b7:{NFSU2_TR(0x48c7b7);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c7bb:{NFSU2_TR(0x48c7bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c7bf:{NFSU2_TR(0x48c7bf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48c7c1:{NFSU2_TR(0x48c7c1);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c7c8:{NFSU2_TR(0x48c7c8);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c7cc:{NFSU2_TR(0x48c7cc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48c7ce:{NFSU2_TR(0x48c7ce);
{u32 ea_=u32(r4(R+16)+u32(552u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c7d5:{NFSU2_TR(0x48c7d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x228ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48c7dc:{NFSU2_TR(0x48c7dc);
{u32 ea_=u32(r4(R+16)+u32(304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c7e3:{NFSU2_TR(0x48c7e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c7e7:{NFSU2_TR(0x48c7e7);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c7eb:{NFSU2_TR(0x48c7eb);
{u32 ea_=u32(r4(R+16)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c7f2:{NFSU2_TR(0x48c7f2);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c7f6:{NFSU2_TR(0x48c7f6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48c7f8:{NFSU2_TR(0x48c7f8);
{u32 ea_=u32(r4(R+16)+u32(272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c7ff:{NFSU2_TR(0x48c7ff);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c803:{NFSU2_TR(0x48c803);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48c805:{NFSU2_TR(0x48c805);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c80c:{NFSU2_TR(0x48c80c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c810:{NFSU2_TR(0x48c810);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48c812:{NFSU2_TR(0x48c812);
{u32 ea_=u32(r4(R+16)+u32(308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c819:{NFSU2_TR(0x48c819);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c81d:{NFSU2_TR(0x48c81d);
{u32 ea_=u32(r4(R+16)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c824:{NFSU2_TR(0x48c824);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c828:{NFSU2_TR(0x48c828);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48c82a:{NFSU2_TR(0x48c82a);
{u32 ea_=u32(r4(R+16)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c831:{NFSU2_TR(0x48c831);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c835:{NFSU2_TR(0x48c835);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48c837:{NFSU2_TR(0x48c837);
{u32 ea_=u32(r4(R+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c83e:{NFSU2_TR(0x48c83e);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c842:{NFSU2_TR(0x48c842);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48c844:{NFSU2_TR(0x48c844);
{u32 ea_=u32(r4(R+16)+u32(312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c84b:{NFSU2_TR(0x48c84b);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c84f:{NFSU2_TR(0x48c84f);
{u32 ea_=u32(r4(R+16)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c856:{NFSU2_TR(0x48c856);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c85a:{NFSU2_TR(0x48c85a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48c85c:{NFSU2_TR(0x48c85c);
{u32 ea_=u32(r4(R+16)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c863:{NFSU2_TR(0x48c863);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c867:{NFSU2_TR(0x48c867);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48c869:{NFSU2_TR(0x48c869);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c870:{NFSU2_TR(0x48c870);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c874:{NFSU2_TR(0x48c874);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48c876:{NFSU2_TR(0x48c876);
{u32 ea_=u32(r4(R+16)+u32(872u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c87d:{NFSU2_TR(0x48c87d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B48c87f:{NFSU2_TR(0x48c87f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c883:{NFSU2_TR(0x48c883);
u8 U[8];
w4(U+0,u32(u32(u32(0x368ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48c88a:{NFSU2_TR(0x48c88a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c88e:{NFSU2_TR(0x48c88e);
{goto L48c97a;}
}
B48c893:L48c893:{c.instructions+=2;NFSU2_TR(0x48c893);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48c896:{NFSU2_TR(0x48c896);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48c8e4;}}
}
B48c898:L48c898:{c.instructions+=3;NFSU2_TR(0x48c898);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48c899:{NFSU2_TR(0x48c899);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48c89b:{NFSU2_TR(0x48c89b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48c8a0ull));
TAIL_STATIC(0x43c370u,43c);
}
B48c8a0:L48c8a0:{c.instructions+=3;NFSU2_TR(0x48c8a0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c8a4:{NFSU2_TR(0x48c8a4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48c8a5:{NFSU2_TR(0x48c8a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48c8aaull));
TAIL_STATIC(0x43c2b0u,43c);
}
B48c8aa:L48c8aa:{c.instructions+=13;NFSU2_TR(0x48c8aa);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c8ae:{NFSU2_TR(0x48c8ae);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c8b2:{NFSU2_TR(0x48c8b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48c8b6:{NFSU2_TR(0x48c8b6);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c8ba:{NFSU2_TR(0x48c8ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48c8be:{NFSU2_TR(0x48c8be);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B48c8c0:{NFSU2_TR(0x48c8c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B48c8c3:{NFSU2_TR(0x48c8c3);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c8c7:{NFSU2_TR(0x48c8c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c8cb:{NFSU2_TR(0x48c8cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48c8d3:{NFSU2_TR(0x48c8d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c8d7:{NFSU2_TR(0x48c8d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48c8df:{NFSU2_TR(0x48c8df);
{goto L48c97e;}
}
B48c8e4:L48c8e4:{c.instructions+=2;NFSU2_TR(0x48c8e4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48c8e7:{NFSU2_TR(0x48c8e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48c932;}}
}
B48c8e9:L48c8e9:{c.instructions+=3;NFSU2_TR(0x48c8e9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48c8ea:{NFSU2_TR(0x48c8ea);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48c8ec:{NFSU2_TR(0x48c8ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48c8f1ull));
TAIL_STATIC(0x43c370u,43c);
}
B48c8f1:L48c8f1:{c.instructions+=3;NFSU2_TR(0x48c8f1);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c8f5:{NFSU2_TR(0x48c8f5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48c8f6:{NFSU2_TR(0x48c8f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48c8fbull));
TAIL_STATIC(0x43c2b0u,43c);
}
B48c8fb:L48c8fb:{c.instructions+=13;NFSU2_TR(0x48c8fb);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c8ff:{NFSU2_TR(0x48c8ff);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c903:{NFSU2_TR(0x48c903);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48c907:{NFSU2_TR(0x48c907);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c90b:{NFSU2_TR(0x48c90b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48c90f:{NFSU2_TR(0x48c90f);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B48c911:{NFSU2_TR(0x48c911);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B48c914:{NFSU2_TR(0x48c914);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c918:{NFSU2_TR(0x48c918);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48c920:{NFSU2_TR(0x48c920);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c924:{NFSU2_TR(0x48c924);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48c92c:{NFSU2_TR(0x48c92c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c930:{NFSU2_TR(0x48c930);
{goto L48c97e;}
}
B48c932:L48c932:{c.instructions+=2;NFSU2_TR(0x48c932);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48c935:{NFSU2_TR(0x48c935);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48c97e;}}
}
B48c937:L48c937:{c.instructions+=3;NFSU2_TR(0x48c937);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48c938:{NFSU2_TR(0x48c938);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48c93a:{NFSU2_TR(0x48c93a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48c93full));
TAIL_STATIC(0x43c370u,43c);
}
B48c93f:L48c93f:{c.instructions+=3;NFSU2_TR(0x48c93f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c943:{NFSU2_TR(0x48c943);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48c944:{NFSU2_TR(0x48c944);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48c949ull));
TAIL_STATIC(0x43c2b0u,43c);
}
B48c949:L48c949:{c.instructions+=12;NFSU2_TR(0x48c949);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c94d:{NFSU2_TR(0x48c94d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48c951:{NFSU2_TR(0x48c951);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c957:{NFSU2_TR(0x48c957);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48c95b:{NFSU2_TR(0x48c95b);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c95f:{NFSU2_TR(0x48c95f);
__builtin_memmove((R+4),(R+8),4);
}
B48c961:{NFSU2_TR(0x48c961);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B48c963:{NFSU2_TR(0x48c963);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B48c966:{NFSU2_TR(0x48c966);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c96a:{NFSU2_TR(0x48c96a);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c96e:{NFSU2_TR(0x48c96e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48c976:{NFSU2_TR(0x48c976);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48c97a:L48c97a:{c.instructions+=1;NFSU2_TR(0x48c97a);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c97e:L48c97e:{c.instructions+=75;NFSU2_TR(0x48c97e);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c982:{NFSU2_TR(0x48c982);
{u32 ea_=u32((r4(R+24)*8u)+u32(8337732u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c989:{NFSU2_TR(0x48c989);
{u32 ea_=u32(u32(7919468u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c98f:{NFSU2_TR(0x48c98f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B48c993:{NFSU2_TR(0x48c993);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B48c995:{NFSU2_TR(0x48c995);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c999:{NFSU2_TR(0x48c999);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c99d:{NFSU2_TR(0x48c99d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c9a1:{NFSU2_TR(0x48c9a1);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c9a5:{NFSU2_TR(0x48c9a5);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c9a9:{NFSU2_TR(0x48c9a9);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c9ad:{NFSU2_TR(0x48c9ad);
{u32 ea_=u32((r4(R+24)*8u)+u32(8337736u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c9b4:{NFSU2_TR(0x48c9b4);
{u32 ea_=u32(u32(7919468u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c9ba:{NFSU2_TR(0x48c9ba);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c9be:{NFSU2_TR(0x48c9be);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B48c9c0:{NFSU2_TR(0x48c9c0);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B48c9c2:{NFSU2_TR(0x48c9c2);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c9c6:{NFSU2_TR(0x48c9c6);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c9ca:{NFSU2_TR(0x48c9ca);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B48c9cc:{NFSU2_TR(0x48c9cc);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48c9d0:{NFSU2_TR(0x48c9d0);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c9d4:{NFSU2_TR(0x48c9d4);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B48c9d6:{NFSU2_TR(0x48c9d6);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B48c9d8:{NFSU2_TR(0x48c9d8);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c9df:{NFSU2_TR(0x48c9df);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B48c9e1:{NFSU2_TR(0x48c9e1);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48c9e5:{NFSU2_TR(0x48c9e5);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c9ec:{NFSU2_TR(0x48c9ec);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48c9f0:{NFSU2_TR(0x48c9f0);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48c9f4:{NFSU2_TR(0x48c9f4);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48c9fb:{NFSU2_TR(0x48c9fb);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B48c9fd:{NFSU2_TR(0x48c9fd);
{u32 ea_=u32(r4(R+16)+u32(784u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48ca04:{NFSU2_TR(0x48ca04);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ca08:{NFSU2_TR(0x48ca08);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B48ca0a:{NFSU2_TR(0x48ca0a);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B48ca0c:{NFSU2_TR(0x48ca0c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48ca0e:{NFSU2_TR(0x48ca0e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ca12:{NFSU2_TR(0x48ca12);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48ca16:{NFSU2_TR(0x48ca16);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ca1a:{NFSU2_TR(0x48ca1a);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48ca21:{NFSU2_TR(0x48ca21);
{u32 ea_=u32(r4(R+16)+u32(320u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48ca28:{NFSU2_TR(0x48ca28);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ca2c:{NFSU2_TR(0x48ca2c);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48ca33:{NFSU2_TR(0x48ca33);
{u32 ea_=u32(r4(R+16)+u32(324u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48ca3a:{NFSU2_TR(0x48ca3a);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ca3e:{NFSU2_TR(0x48ca3e);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48ca45:{NFSU2_TR(0x48ca45);
{u32 ea_=u32(r4(R+16)+u32(328u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48ca4c:{NFSU2_TR(0x48ca4c);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ca50:{NFSU2_TR(0x48ca50);
{u32 ea_=u32(r4(R+16)+u32(784u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48ca57:{NFSU2_TR(0x48ca57);
{u32 ea_=u32(r4(R+16)+u32(352u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48ca5e:{NFSU2_TR(0x48ca5e);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ca62:{NFSU2_TR(0x48ca62);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B48ca64:{NFSU2_TR(0x48ca64);
{u32 ea_=u32(r4(R+16)+u32(356u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48ca6b:{NFSU2_TR(0x48ca6b);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ca6f:{NFSU2_TR(0x48ca6f);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B48ca71:{NFSU2_TR(0x48ca71);
{u32 ea_=u32(r4(R+16)+u32(360u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48ca78:{NFSU2_TR(0x48ca78);
{u32 ea_=u32(r4(R+16)+u32(784u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ca7f:{NFSU2_TR(0x48ca7f);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48ca83:{NFSU2_TR(0x48ca83);
{u32 ea_=u32(r4(R+16)+u32(368u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48ca8a:{NFSU2_TR(0x48ca8a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B48ca8c:{NFSU2_TR(0x48ca8c);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48ca90:{NFSU2_TR(0x48ca90);
{u32 ea_=u32(r4(R+16)+u32(372u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48ca97:{NFSU2_TR(0x48ca97);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48ca9b:{NFSU2_TR(0x48ca9b);
{u32 ea_=u32(r4(R+16)+u32(376u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48caa2:{NFSU2_TR(0x48caa2);
{u32 ea_=u32(r4(R+16)+u32(208u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48caa9:{NFSU2_TR(0x48caa9);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48caad:{NFSU2_TR(0x48caad);
{u32 ea_=u32(r4(R+16)+u32(336u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48cab4:{NFSU2_TR(0x48cab4);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48cabb:{NFSU2_TR(0x48cabb);
u8 U[4];
w4(U+0,u32(u32(u32(0x290ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B48cac2:{NFSU2_TR(0x48cac2);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48cac6:{NFSU2_TR(0x48cac6);
{u32 ea_=u32(r4(R+16)+u32(340u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48cacd:{NFSU2_TR(0x48cacd);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48cad4:{NFSU2_TR(0x48cad4);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48cad8:{NFSU2_TR(0x48cad8);
{u32 ea_=u32(r4(R+16)+u32(344u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48cadf:{NFSU2_TR(0x48cadf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48cae4ull));
TAIL_STATIC(0x5bb1c0u,5bb);
}
B48cae4:L48cae4:{c.instructions+=43;NFSU2_TR(0x48cae4);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48caeb:{NFSU2_TR(0x48caeb);
u8 U[8];
w4(U+0,u32(u32(u32(0x140ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48caf2:{NFSU2_TR(0x48caf2);
u8 U[8];
w4(U+0,u32(u32(u32(0x144ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48caf9:{NFSU2_TR(0x48caf9);
u8 U[8];
w4(U+0,u32(u32(u32(0x148ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48cb00:{NFSU2_TR(0x48cb00);
u8 U[8];
w4(U+0,u32(u32(u32(0x290ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48cb07:{NFSU2_TR(0x48cb07);
u8 U[8];
w4(U+0,u32(u32(u32(0x160ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48cb0e:{NFSU2_TR(0x48cb0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x294ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48cb15:{NFSU2_TR(0x48cb15);
u8 U[8];
w4(U+0,u32(u32(u32(0x164ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48cb1c:{NFSU2_TR(0x48cb1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x298ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48cb23:{NFSU2_TR(0x48cb23);
u8 U[8];
w4(U+0,u32(u32(u32(0x168ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48cb2a:{NFSU2_TR(0x48cb2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2a0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48cb31:{NFSU2_TR(0x48cb31);
u8 U[8];
w4(U+0,u32(u32(u32(0x170ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48cb38:{NFSU2_TR(0x48cb38);
u8 U[8];
w4(U+0,u32(u32(u32(0x2a4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48cb3f:{NFSU2_TR(0x48cb3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x174ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48cb46:{NFSU2_TR(0x48cb46);
u8 U[8];
w4(U+0,u32(u32(u32(0x2a8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48cb4d:{NFSU2_TR(0x48cb4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48cb54:{NFSU2_TR(0x48cb54);
u8 U[8];
w4(U+0,u32(u32(u32(0x2c0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48cb5b:{NFSU2_TR(0x48cb5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x150ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48cb62:{NFSU2_TR(0x48cb62);
u8 U[8];
w4(U+0,u32(u32(u32(0x2c4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48cb69:{NFSU2_TR(0x48cb69);
u8 U[8];
w4(U+0,u32(u32(u32(0x154ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48cb70:{NFSU2_TR(0x48cb70);
u8 U[8];
w4(U+0,u32(u32(u32(0x2c8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48cb77:{NFSU2_TR(0x48cb77);
u8 U[8];
w4(U+0,u32(u32(u32(0x158ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48cb7e:{NFSU2_TR(0x48cb7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2b0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48cb85:{NFSU2_TR(0x48cb85);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48cb89:{NFSU2_TR(0x48cb89);
u8 U[8];
w4(U+0,u32(u32(u32(0x2b4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48cb90:{NFSU2_TR(0x48cb90);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48cb94:{NFSU2_TR(0x48cb94);
u8 U[8];
w4(U+0,u32(u32(u32(0x2b8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48cb9b:{NFSU2_TR(0x48cb9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48cba2:{NFSU2_TR(0x48cba2);
u8 U[8];
w4(U+0,u32(u32(u32(0x2d0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48cba9:{NFSU2_TR(0x48cba9);
__builtin_memmove((R+8),(R+0),4);
}
B48cbab:{NFSU2_TR(0x48cbab);
u8 U[8];
w4(U+0,u32(u32(u32(0x2d4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48cbb2:{NFSU2_TR(0x48cbb2);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48cbb6:{NFSU2_TR(0x48cbb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x2d8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48cbbd:{NFSU2_TR(0x48cbbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48cbc4:{NFSU2_TR(0x48cbc4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2dcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48cbcb:{NFSU2_TR(0x48cbcb);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48cbd2:{NFSU2_TR(0x48cbd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x2e8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48cbd9:{NFSU2_TR(0x48cbd9);
__builtin_memmove((R+0),(R+4),4);
}
B48cbdb:{NFSU2_TR(0x48cbdb);
u8 U[8];
w4(U+0,u32(u32(u32(0x2ecull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48cbe2:{NFSU2_TR(0x48cbe2);
u8 U[8];
w4(U+0,u32(u32(u32(0x2e0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48cbe9:{NFSU2_TR(0x48cbe9);
u8 U[8];
w4(U+0,u32(u32(u32(0x2e4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48cbf0:{NFSU2_TR(0x48cbf0);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B48cbf3:{NFSU2_TR(0x48cbf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48cbf8ull));
TAIL_STATIC(0x75bed4u,75b);
}
B48cbf8:L48cbf8:{c.instructions+=4;NFSU2_TR(0x48cbf8);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48cbff:{NFSU2_TR(0x48cbff);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B48cc01:{NFSU2_TR(0x48cc01);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B48cc04:{NFSU2_TR(0x48cc04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48cc09ull));
TAIL_STATIC(0x75bed4u,75b);
}
B48cc09:L48cc09:{c.instructions+=4;NFSU2_TR(0x48cc09);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48cc10:{NFSU2_TR(0x48cc10);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B48cc12:{NFSU2_TR(0x48cc12);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B48cc15:{NFSU2_TR(0x48cc15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48cc1aull));
TAIL_STATIC(0x75bed4u,75b);
}
B48cc1a:L48cc1a:{c.instructions+=14;NFSU2_TR(0x48cc1a);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48cc21:{NFSU2_TR(0x48cc21);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48cc23:{NFSU2_TR(0x48cc23);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48cc25:{NFSU2_TR(0x48cc25);
u8 U[4];
w4(U+0,u32(0x872e90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48cc2a:{NFSU2_TR(0x48cc2a);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B48cc2c:{NFSU2_TR(0x48cc2c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48cc2d:{NFSU2_TR(0x48cc2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48cc30:{NFSU2_TR(0x48cc30);
u8 U[4];
w4(U+0,u32(u32(u32(0x2a0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B48cc37:{NFSU2_TR(0x48cc37);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48cc38:{NFSU2_TR(0x48cc38);
u8 U[8];
w4(U+0,u32(u32(u32(0x304ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48cc3f:{NFSU2_TR(0x48cc3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x308ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48cc46:{NFSU2_TR(0x48cc46);
u8 U[8];
w4(U+0,u32(u32(u32(0x30cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48cc4d:{NFSU2_TR(0x48cc4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x310ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48cc54:{NFSU2_TR(0x48cc54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48cc59ull));
TAIL_STATIC(0x5c7e80u,5c7);
}
B48cc59:L48cc59:{c.instructions+=2;NFSU2_TR(0x48cc59);
{u32 ea_=u32(r4(R+16)+u32(456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48cc60:{NFSU2_TR(0x48cc60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48cc65ull));
TAIL_STATIC(0x75bed4u,75b);
}
B48cc65:L48cc65:{c.instructions+=13;NFSU2_TR(0x48cc65);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48cc69:{NFSU2_TR(0x48cc69);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48cc70:{NFSU2_TR(0x48cc70);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48cc74:{NFSU2_TR(0x48cc74);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B48cc78:{NFSU2_TR(0x48cc78);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48cc7f:{NFSU2_TR(0x48cc7f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B48cc80:{NFSU2_TR(0x48cc80);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48cc84:{NFSU2_TR(0x48cc84);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48cc88:{NFSU2_TR(0x48cc88);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48cc8f:{NFSU2_TR(0x48cc8f);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B48cc93:{NFSU2_TR(0x48cc93);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48cc95:{NFSU2_TR(0x48cc95);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48cc9c:{NFSU2_TR(0x48cc9c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48c290u);}goto L48c290;}}
}
B48cca2:L48cca2:{c.instructions+=3;NFSU2_TR(0x48cca2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48cca6:{NFSU2_TR(0x48cca6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48cca8:{NFSU2_TR(0x48cca8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48ccc7;}}
}
B48ccaa:L48ccaa:{c.instructions+=7;NFSU2_TR(0x48ccaa);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48ccae:{NFSU2_TR(0x48ccae);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48ccb5:{NFSU2_TR(0x48ccb5);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48ccbc:{NFSU2_TR(0x48ccbc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ccbd:{NFSU2_TR(0x48ccbd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ccbe:{NFSU2_TR(0x48ccbe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ccbf:{NFSU2_TR(0x48ccbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48ccc4ull));
TAIL_STATIC(0x5ce120u,5ce);
}
B48ccc4:L48ccc4:{c.instructions+=1;NFSU2_TR(0x48ccc4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B48ccc7:L48ccc7:{c.instructions+=4;NFSU2_TR(0x48ccc7);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48ccce:{NFSU2_TR(0x48ccce);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48ccd2:{NFSU2_TR(0x48ccd2);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B48ccd4:{NFSU2_TR(0x48ccd4);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ccdb:L48ccdb:{c.instructions+=4;NFSU2_TR(0x48ccdb);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B48cce2:{NFSU2_TR(0x48cce2);
u8 U[16];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B48cce9:{NFSU2_TR(0x48cce9);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ccf0:{NFSU2_TR(0x48ccf0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48c071u);}goto L48c071;}}
}
B48ccf6:L48ccf6:{c.instructions+=3;NFSU2_TR(0x48ccf6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48ccfa:{NFSU2_TR(0x48ccfa);
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
B48ccfc:{NFSU2_TR(0x48ccfc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48cd03;}}
}
B48ccfe:L48ccfe:{c.instructions+=1;NFSU2_TR(0x48ccfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48cd03ull));
TAIL_STATIC(0x5b7e80u,5b7);
}
B48cd03:L48cd03:{c.instructions+=4;NFSU2_TR(0x48cd03);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B48cd04:{NFSU2_TR(0x48cd04);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B48cd07:{NFSU2_TR(0x48cd07);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48cd0b:{NFSU2_TR(0x48cd0b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48c040u);}goto L48c040;}}
}
B48cd11:L48cd11:{c.instructions+=11;NFSU2_TR(0x48cd11);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48cd18:{NFSU2_TR(0x48cd18);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48cd1b:{NFSU2_TR(0x48cd1b);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48cd22:{NFSU2_TR(0x48cd22);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+8),r4(R+4)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B48cd24:{NFSU2_TR(0x48cd24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48cd27:{NFSU2_TR(0x48cd27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48cd28:{NFSU2_TR(0x48cd28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48cd29:{NFSU2_TR(0x48cd29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48cd2a:{NFSU2_TR(0x48cd2a);
__builtin_memmove((R+16),(R+20),4);
}
B48cd2c:{NFSU2_TR(0x48cd2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48cd2d:{NFSU2_TR(0x48cd2d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48cd60:L48cd60:{c.instructions+=3;NFSU2_TR(0x48cd60);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48cd61:{NFSU2_TR(0x48cd61);
u8 U[4];
w4(U+0,u32(0x64000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48cd66:{NFSU2_TR(0x48cd66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48cd6bull));
TAIL_STATIC(0x575620u,575);
}
B48cd6b:L48cd6b:{c.instructions+=3;NFSU2_TR(0x48cd6b);
u8 U[4];
w4(U+0,u32(0x64000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48cd70:{NFSU2_TR(0x48cd70);
__builtin_memmove(gp(0x82cc24),(R+0),4);
}
B48cd75:{NFSU2_TR(0x48cd75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48cd7aull));
TAIL_STATIC(0x575620u,575);
}
B48cd7a:L48cd7a:{c.instructions+=12;NFSU2_TR(0x48cd7a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48cd7c:{NFSU2_TR(0x48cd7c);
__builtin_memmove(gp(0x82cc28),(R+0),4);
}
B48cd81:{NFSU2_TR(0x48cd81);
__builtin_memmove((R+0),gp(0x82cc24),4);
}
B48cd86:{NFSU2_TR(0x48cd86);
u8 U[4];
w4(U+0,u32(0x78d968ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48cd8b:{NFSU2_TR(0x48cd8b);
__builtin_memmove(gp(0x82da5c),(R+0),4);
}
B48cd90:{NFSU2_TR(0x48cd90);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x64000ull))));
}
B48cd95:{NFSU2_TR(0x48cd95);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48cd97:{NFSU2_TR(0x48cd97);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48cd9c:{NFSU2_TR(0x48cd9c);
s4(0x82da54,u32(0x64000ull));
}
B48cda6:{NFSU2_TR(0x48cda6);
__builtin_memmove(gp(0x82da60),(R+0),4);
}
B48cdab:{NFSU2_TR(0x48cdab);
s4(0x82da68,u32(0x0ull));
}
B48cdb5:{NFSU2_TR(0x48cdb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48cdbaull));
TAIL_STATIC(0x440df0u,440);
}
B48cdba:L48cdba:{c.instructions+=6;NFSU2_TR(0x48cdba);
__builtin_memmove(gp(0x82da4c),(R+0),4);
}
B48cdbf:{NFSU2_TR(0x48cdbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48cdc2:{NFSU2_TR(0x48cdc2);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffdull))));
}
B48cdc5:{NFSU2_TR(0x48cdc5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B48cdc8:{NFSU2_TR(0x48cdc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48cdcb:{NFSU2_TR(0x48cdcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48cdd0ull));
TAIL_STATIC(0x488ef0u,488);
}
B48cdd0:L48cdd0:{c.instructions+=1;NFSU2_TR(0x48cdd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48cdd5ull));
TAIL_STATIC(0x48b1f0u,48b);
}
B48cdd5:L48cdd5:{c.instructions+=1;NFSU2_TR(0x48cdd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48cddaull));
TAIL_STATIC(0x48de90u,48d);
}
B48cdda:L48cdda:{c.instructions+=1;NFSU2_TR(0x48cdda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48cddfull));
TAIL_STATIC(0x5c2f90u,5c2);
}
B48cddf:L48cddf:{c.instructions+=3;NFSU2_TR(0x48cddf);
__builtin_memmove((R+28),gp(0x7f399c),4);
}
B48cde5:{NFSU2_TR(0x48cde5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B48cde7:{NFSU2_TR(0x48cde7);
w4(R+4,u32(0x28ull));
}
B48cdec:L48cdec:{c.instructions+=1;NFSU2_TR(0x48cdec);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L48cdee;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48cdecu);}goto L48cdec;}
}
B48cdee:L48cdee:{c.instructions+=1;NFSU2_TR(0x48cdee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48cdf3ull));
TAIL_STATIC(0x5bb700u,5bb);
}
B48cdf3:L48cdf3:{c.instructions+=1;NFSU2_TR(0x48cdf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48cdf8ull));
TAIL_STATIC(0x48ab60u,48a);
}
B48cdf8:L48cdf8:{c.instructions+=1;NFSU2_TR(0x48cdf8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48cdfdull));
TAIL_STATIC(0x5c33d0u,5c3);
}
B48cdfd:L48cdfd:{c.instructions+=1;NFSU2_TR(0x48cdfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48ce02ull));
TAIL_STATIC(0x4022c0u,402);
}
B48ce02:L48ce02:{c.instructions+=1;NFSU2_TR(0x48ce02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48ce07ull));
TAIL_STATIC(0x431840u,431);
}
B48ce07:L48ce07:{c.instructions+=2;NFSU2_TR(0x48ce07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48ce08:{NFSU2_TR(0x48ce08);
TAIL_STATIC(0x5d24f0u,5d2);
}
B48ce10:L48ce10:{c.instructions+=13;NFSU2_TR(0x48ce10);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ce11:{NFSU2_TR(0x48ce11);
__builtin_memmove((R+20),(R+16),4);
}
B48ce13:{NFSU2_TR(0x48ce13);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ce14:{NFSU2_TR(0x48ce14);
__builtin_memmove((R+0),gp(0x832e58),1);
}
B48ce19:{NFSU2_TR(0x48ce19);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ce1a:{NFSU2_TR(0x48ce1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B48ce1d:{NFSU2_TR(0x48ce1d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ce1e:{NFSU2_TR(0x48ce1e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B48ce20:{NFSU2_TR(0x48ce20);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48ce22:{NFSU2_TR(0x48ce22);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ce23:{NFSU2_TR(0x48ce23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B48ce26:{NFSU2_TR(0x48ce26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ce29:{NFSU2_TR(0x48ce29);
if(r1(R+518)){{goto L48ce54;}}
}
B48ce2b:L48ce2b:{c.instructions+=5;NFSU2_TR(0x48ce2b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ce2c:{NFSU2_TR(0x48ce2c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ce2d:{NFSU2_TR(0x48ce2d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ce2e:{NFSU2_TR(0x48ce2e);
w4(R+4,u32(0x832e50ull));
}
B48ce33:{NFSU2_TR(0x48ce33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48ce38ull));
TAIL_STATIC(0x5bc300u,5bc);
}
B48ce38:L48ce38:{c.instructions+=4;NFSU2_TR(0x48ce38);
__builtin_memmove((R+24),(R+0),4);
}
B48ce3a:{NFSU2_TR(0x48ce3a);
__builtin_memmove((R+0),gp(0x832e58),1);
}
B48ce3f:{NFSU2_TR(0x48ce3f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48ce41:{NFSU2_TR(0x48ce41);
if(r1(R+518)){{goto L48ce54;}}
}
B48ce43:L48ce43:{c.instructions+=5;NFSU2_TR(0x48ce43);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ce45:{NFSU2_TR(0x48ce45);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ce46:{NFSU2_TR(0x48ce46);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ce47:{NFSU2_TR(0x48ce47);
w4(R+4,u32(0x832e50ull));
}
B48ce4c:{NFSU2_TR(0x48ce4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48ce51ull));
TAIL_STATIC(0x5bc300u,5bc);
}
B48ce51:L48ce51:{c.instructions+=1;NFSU2_TR(0x48ce51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ce54:L48ce54:{c.instructions+=5;NFSU2_TR(0x48ce54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48ce55:{NFSU2_TR(0x48ce55);
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
B48ce57:{NFSU2_TR(0x48ce57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48ce58:{NFSU2_TR(0x48ce58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48ce59:{NFSU2_TR(0x48ce59);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48ce68;}}
}
B48ce5b:L48ce5b:{c.instructions+=3;NFSU2_TR(0x48ce5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48ce5e:{NFSU2_TR(0x48ce5e);
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
B48ce60:{NFSU2_TR(0x48ce60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48ce68;}}
}
B48ce62:L48ce62:{c.instructions+=4;NFSU2_TR(0x48ce62);
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
B48ce64:{NFSU2_TR(0x48ce64);
__builtin_memmove((R+16),(R+20),4);
}
B48ce66:{NFSU2_TR(0x48ce66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48ce67:{NFSU2_TR(0x48ce67);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48ce68:L48ce68:{c.instructions+=4;NFSU2_TR(0x48ce68);
w4(R+0,u32(0x1ull));
}
B48ce6d:{NFSU2_TR(0x48ce6d);
__builtin_memmove((R+16),(R+20),4);
}
B48ce6f:{NFSU2_TR(0x48ce6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48ce70:{NFSU2_TR(0x48ce70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48ce80:L48ce80:{c.instructions+=7;NFSU2_TR(0x48ce80);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ce81:{NFSU2_TR(0x48ce81);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ce82:{NFSU2_TR(0x48ce82);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48ce85:{NFSU2_TR(0x48ce85);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ce86:{NFSU2_TR(0x48ce86);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48ce89:{NFSU2_TR(0x48ce89);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48ce8b:{NFSU2_TR(0x48ce8b);
if(r1(R+518)){{goto L48cea8;}}
}
B48ce8d:L48ce8d:{c.instructions+=1;NFSU2_TR(0x48ce8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B48ce91:L48ce91:{c.instructions+=4;NFSU2_TR(0x48ce91);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B48ce94:{NFSU2_TR(0x48ce94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ce95:{NFSU2_TR(0x48ce95);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ce96:{NFSU2_TR(0x48ce96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48ce9bull));
TAIL_STATIC(0x43dc30u,43d);
}
B48ce9b:L48ce9b:{c.instructions+=3;NFSU2_TR(0x48ce9b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B48ce9e:{NFSU2_TR(0x48ce9e);
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
B48cea0:{NFSU2_TR(0x48cea0);
if(r1(R+518)){{goto L48ceb0;}}
}
B48cea2:L48cea2:{c.instructions+=3;NFSU2_TR(0x48cea2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B48cea4:{NFSU2_TR(0x48cea4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48cea6:{NFSU2_TR(0x48cea6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48ce91u);}goto L48ce91;}}
}
B48cea8:L48cea8:{c.instructions+=5;NFSU2_TR(0x48cea8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48cea9:{NFSU2_TR(0x48cea9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48ceaa:{NFSU2_TR(0x48ceaa);
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
B48ceac:{NFSU2_TR(0x48ceac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48cead:{NFSU2_TR(0x48cead);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48ceb0:L48ceb0:{c.instructions+=14;NFSU2_TR(0x48ceb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B48ceb2:{NFSU2_TR(0x48ceb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48ceb5:{NFSU2_TR(0x48ceb5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B48ceb7:{NFSU2_TR(0x48ceb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ceba:{NFSU2_TR(0x48ceba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B48cebc:{NFSU2_TR(0x48cebc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+28)),r4(U+0));
}
B48cebe:{NFSU2_TR(0x48cebe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48cec1:{NFSU2_TR(0x48cec1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48cec4:{NFSU2_TR(0x48cec4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B48cec6:{NFSU2_TR(0x48cec6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48cec7:{NFSU2_TR(0x48cec7);
__builtin_memmove((R+0),(R+24),4);
}
B48cec9:{NFSU2_TR(0x48cec9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48ceca:{NFSU2_TR(0x48ceca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48cecb:{NFSU2_TR(0x48cecb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48ced0:L48ced0:{c.instructions+=7;NFSU2_TR(0x48ced0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ced1:{NFSU2_TR(0x48ced1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ced2:{NFSU2_TR(0x48ced2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48ced5:{NFSU2_TR(0x48ced5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ced6:{NFSU2_TR(0x48ced6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48ced9:{NFSU2_TR(0x48ced9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48cedb:{NFSU2_TR(0x48cedb);
if(r1(R+518)){{goto L48cf14;}}
}
B48cedd:L48cedd:{c.instructions+=1;NFSU2_TR(0x48cedd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B48cee1:L48cee1:{c.instructions+=3;NFSU2_TR(0x48cee1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B48cee7:{NFSU2_TR(0x48cee7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48cee9:{NFSU2_TR(0x48cee9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48cf0e;}}
}
B48ceeb:L48ceeb:{c.instructions+=3;NFSU2_TR(0x48ceeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48cef1:{NFSU2_TR(0x48cef1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48cef3:{NFSU2_TR(0x48cef3);
if(r1(R+518)){{goto L48cf0e;}}
}
B48cef5:L48cef5:{c.instructions+=7;NFSU2_TR(0x48cef5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48cefb:{NFSU2_TR(0x48cefb);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48cefd:{NFSU2_TR(0x48cefd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ceff:{NFSU2_TR(0x48ceff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48cf00:{NFSU2_TR(0x48cf00);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48cf01:{NFSU2_TR(0x48cf01);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48cf02:{NFSU2_TR(0x48cf02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48cf07ull));
TAIL_STATIC(0x488bc0u,488);
}
B48cf07:L48cf07:{c.instructions+=3;NFSU2_TR(0x48cf07);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B48cf0a:{NFSU2_TR(0x48cf0a);
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
B48cf0c:{NFSU2_TR(0x48cf0c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48cf1c;}}
}
B48cf0e:L48cf0e:{c.instructions+=3;NFSU2_TR(0x48cf0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B48cf10:{NFSU2_TR(0x48cf10);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48cf12:{NFSU2_TR(0x48cf12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48cee1u);}goto L48cee1;}}
}
B48cf14:L48cf14:{c.instructions+=5;NFSU2_TR(0x48cf14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48cf15:{NFSU2_TR(0x48cf15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48cf16:{NFSU2_TR(0x48cf16);
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
B48cf18:{NFSU2_TR(0x48cf18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48cf19:{NFSU2_TR(0x48cf19);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48cf1c:L48cf1c:{c.instructions+=14;NFSU2_TR(0x48cf1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B48cf1e:{NFSU2_TR(0x48cf1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48cf21:{NFSU2_TR(0x48cf21);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B48cf23:{NFSU2_TR(0x48cf23);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48cf26:{NFSU2_TR(0x48cf26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B48cf28:{NFSU2_TR(0x48cf28);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+28)),r4(U+0));
}
B48cf2a:{NFSU2_TR(0x48cf2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48cf2d:{NFSU2_TR(0x48cf2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48cf30:{NFSU2_TR(0x48cf30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B48cf32:{NFSU2_TR(0x48cf32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48cf33:{NFSU2_TR(0x48cf33);
__builtin_memmove((R+0),(R+24),4);
}
B48cf35:{NFSU2_TR(0x48cf35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48cf36:{NFSU2_TR(0x48cf36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48cf37:{NFSU2_TR(0x48cf37);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48cf40:L48cf40:{c.instructions+=7;NFSU2_TR(0x48cf40);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48cf41:{NFSU2_TR(0x48cf41);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48cf44:{NFSU2_TR(0x48cf44);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48cf45:{NFSU2_TR(0x48cf45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B48cf47:{NFSU2_TR(0x48cf47);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48cf49:{NFSU2_TR(0x48cf49);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48cf4a:{NFSU2_TR(0x48cf4a);
if(r1(R+518)){{goto L48cf83;}}
}
B48cf4c:L48cf4c:{c.instructions+=1;NFSU2_TR(0x48cf4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B48cf50:L48cf50:{c.instructions+=3;NFSU2_TR(0x48cf50);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B48cf56:{NFSU2_TR(0x48cf56);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48cf58:{NFSU2_TR(0x48cf58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48cf7d;}}
}
B48cf5a:L48cf5a:{c.instructions+=3;NFSU2_TR(0x48cf5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48cf60:{NFSU2_TR(0x48cf60);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48cf62:{NFSU2_TR(0x48cf62);
if(r1(R+518)){{goto L48cf7d;}}
}
B48cf64:L48cf64:{c.instructions+=7;NFSU2_TR(0x48cf64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48cf6a:{NFSU2_TR(0x48cf6a);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48cf6c:{NFSU2_TR(0x48cf6c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48cf6e:{NFSU2_TR(0x48cf6e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48cf6f:{NFSU2_TR(0x48cf6f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48cf70:{NFSU2_TR(0x48cf70);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48cf71:{NFSU2_TR(0x48cf71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48cf76ull));
TAIL_STATIC(0x488bc0u,488);
}
B48cf76:L48cf76:{c.instructions+=3;NFSU2_TR(0x48cf76);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B48cf79:{NFSU2_TR(0x48cf79);
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
B48cf7b:{NFSU2_TR(0x48cf7b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48cf85;}}
}
B48cf7d:L48cf7d:{c.instructions+=3;NFSU2_TR(0x48cf7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B48cf7f:{NFSU2_TR(0x48cf7f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48cf81:{NFSU2_TR(0x48cf81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48cf50u);}goto L48cf50;}}
}
B48cf83:L48cf83:{c.instructions+=1;NFSU2_TR(0x48cf83);
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
B48cf85:L48cf85:{c.instructions+=4;NFSU2_TR(0x48cf85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48cf86:{NFSU2_TR(0x48cf86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48cf87:{NFSU2_TR(0x48cf87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48cf88:{NFSU2_TR(0x48cf88);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48cf90:L48cf90:{c.instructions+=13;NFSU2_TR(0x48cf90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8cull))));
}
B48cf96:{NFSU2_TR(0x48cf96);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48cf97:{NFSU2_TR(0x48cf97);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48cf98:{NFSU2_TR(0x48cf98);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B48cf9f:{NFSU2_TR(0x48cf9f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48cfa0:{NFSU2_TR(0x48cfa0);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48cfa7:{NFSU2_TR(0x48cfa7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B48cfa9:{NFSU2_TR(0x48cfa9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48cfaa:{NFSU2_TR(0x48cfaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B48cfad:{NFSU2_TR(0x48cfad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48cfae:{NFSU2_TR(0x48cfae);
__builtin_memmove((R+4),(R+28),4);
}
B48cfb0:{NFSU2_TR(0x48cfb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48cfb4:{NFSU2_TR(0x48cfb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48cfb9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48ced0u);}goto L48ced0;}
}
B48cfb9:L48cfb9:{c.instructions+=8;NFSU2_TR(0x48cfb9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B48cfbc:{NFSU2_TR(0x48cfbc);
__builtin_memmove((R+12),(R+0),4);
}
B48cfbe:{NFSU2_TR(0x48cfbe);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48cfc5:{NFSU2_TR(0x48cfc5);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xefull))));
}
B48cfc8:{NFSU2_TR(0x48cfc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48cfca:{NFSU2_TR(0x48cfca);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48cfce:{NFSU2_TR(0x48cfce);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B48cfd1:{NFSU2_TR(0x48cfd1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x48d0b2u,48d);}
}
B48cfd7:L48cfd7:{c.instructions+=10;NFSU2_TR(0x48cfd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48cfda:{NFSU2_TR(0x48cfda);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48cfdd:{NFSU2_TR(0x48cfdd);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B48cfde:{NFSU2_TR(0x48cfde);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48cfe1:{NFSU2_TR(0x48cfe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48cfe4:{NFSU2_TR(0x48cfe4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B48cfe6:{NFSU2_TR(0x48cfe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48cfe9:{NFSU2_TR(0x48cfe9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B48cfec:{NFSU2_TR(0x48cfec);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48cfef:{NFSU2_TR(0x48cfef);
if(r1(R+518)){TAIL_STATIC(0x48d003u,48d);}
}
B48cff1:L48cff1:{c.instructions+=4;NFSU2_TR(0x48cff1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48cff2:{NFSU2_TR(0x48cff2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48cff3:{NFSU2_TR(0x48cff3);
__builtin_memmove((R+4),(R+28),4);
}
B48cff5:{NFSU2_TR(0x48cff5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48cffaull));
TAIL_STATIC(0x488d60u,488);
}
B48cffa:L48cffa:{c.instructions+=2;NFSU2_TR(0x48cffa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0xdfull))));
s1(u32(r4(U+0)),r1(U+4));
}
B48cffe:{NFSU2_TR(0x48cffe);
TAIL_STATIC(0x48d0b2u,48d);
}
XIT:NFSU2_TR_EXIT(0x48c,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
