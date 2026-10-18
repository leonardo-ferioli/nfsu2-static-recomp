#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_409(u8* __restrict R,Cpu& c);
u32 body_40b(u8* __restrict R,Cpu& c);
u32 body_40d(u8* __restrict R,Cpu& c);
u32 body_423(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_5ac(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5dc(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5f6(u8* __restrict R,Cpu& c);
u32 body_60f(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61c(u8* __restrict R,Cpu& c);
u32 body_63b(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x40c,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x40c,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_40c(u8* __restrict R,Cpu& c);
u32 page_40c(Cpu& c){return body_40c(c.regs.data(),c);}
__attribute__((noinline)) u32 body_40c(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x40c000:goto L40c000;
case 0x40c002:c.instructions+=1;goto B40c002;
case 0x40c007:goto L40c007;
case 0x40c009:goto L40c009;
case 0x40c00a:goto L40c00a;
case 0x40c00f:c.instructions+=6;goto B40c00f;
case 0x40c012:c.instructions+=5;goto B40c012;
case 0x40c015:c.instructions+=4;goto B40c015;
case 0x40c016:c.instructions+=3;goto B40c016;
case 0x40c018:c.instructions+=2;goto B40c018;
case 0x40c01a:c.instructions+=1;goto B40c01a;
case 0x40c01c:goto L40c01c;
case 0x40c01d:c.instructions+=4;goto B40c01d;
case 0x40c01e:c.instructions+=3;goto B40c01e;
case 0x40c020:c.instructions+=2;goto B40c020;
case 0x40c021:c.instructions+=1;goto B40c021;
case 0x40c030:goto L40c030;
case 0x40c031:c.instructions+=25;goto B40c031;
case 0x40c033:c.instructions+=24;goto B40c033;
case 0x40c036:c.instructions+=23;goto B40c036;
case 0x40c039:c.instructions+=22;goto B40c039;
case 0x40c03c:c.instructions+=21;goto B40c03c;
case 0x40c03d:c.instructions+=20;goto B40c03d;
case 0x40c03e:c.instructions+=19;goto B40c03e;
case 0x40c040:c.instructions+=18;goto B40c040;
case 0x40c043:c.instructions+=17;goto B40c043;
case 0x40c046:c.instructions+=16;goto B40c046;
case 0x40c04a:c.instructions+=15;goto B40c04a;
case 0x40c04d:c.instructions+=14;goto B40c04d;
case 0x40c051:c.instructions+=13;goto B40c051;
case 0x40c055:c.instructions+=12;goto B40c055;
case 0x40c059:c.instructions+=11;goto B40c059;
case 0x40c05a:c.instructions+=10;goto B40c05a;
case 0x40c05e:c.instructions+=9;goto B40c05e;
case 0x40c066:c.instructions+=8;goto B40c066;
case 0x40c06a:c.instructions+=7;goto B40c06a;
case 0x40c06e:c.instructions+=6;goto B40c06e;
case 0x40c070:c.instructions+=5;goto B40c070;
case 0x40c072:c.instructions+=4;goto B40c072;
case 0x40c078:c.instructions+=3;goto B40c078;
case 0x40c07a:c.instructions+=2;goto B40c07a;
case 0x40c07d:c.instructions+=1;goto B40c07d;
case 0x40c07f:goto L40c07f;
case 0x40c085:c.instructions+=3;goto B40c085;
case 0x40c08b:c.instructions+=2;goto B40c08b;
case 0x40c08f:c.instructions+=1;goto B40c08f;
case 0x40c093:goto L40c093;
case 0x40c097:c.instructions+=4;goto B40c097;
case 0x40c098:c.instructions+=3;goto B40c098;
case 0x40c09c:c.instructions+=2;goto B40c09c;
case 0x40c09d:c.instructions+=1;goto B40c09d;
case 0x40c0a2:goto L40c0a2;
case 0x40c0a5:c.instructions+=4;goto B40c0a5;
case 0x40c0ab:c.instructions+=3;goto B40c0ab;
case 0x40c0af:c.instructions+=2;goto B40c0af;
case 0x40c0b7:c.instructions+=1;goto B40c0b7;
case 0x40c0c0:goto L40c0c0;
case 0x40c0c4:c.instructions+=2;goto B40c0c4;
case 0x40c0cc:c.instructions+=1;goto B40c0cc;
case 0x40c0d0:goto L40c0d0;
case 0x40c0d3:c.instructions+=4;goto B40c0d3;
case 0x40c0d5:c.instructions+=3;goto B40c0d5;
case 0x40c0d7:c.instructions+=2;goto B40c0d7;
case 0x40c0da:c.instructions+=1;goto B40c0da;
case 0x40c0e0:goto L40c0e0;
case 0x40c0e2:c.instructions+=2;goto B40c0e2;
case 0x40c0e3:c.instructions+=1;goto B40c0e3;
case 0x40c0e8:goto L40c0e8;
case 0x40c0eb:c.instructions+=2;goto B40c0eb;
case 0x40c0ed:c.instructions+=1;goto B40c0ed;
case 0x40c0f2:goto L40c0f2;
case 0x40c0f4:c.instructions+=1;goto B40c0f4;
case 0x40c0fa:goto L40c0fa;
case 0x40c0fe:c.instructions+=2;goto B40c0fe;
case 0x40c100:c.instructions+=1;goto B40c100;
case 0x40c106:goto L40c106;
case 0x40c109:c.instructions+=13;goto B40c109;
case 0x40c10c:c.instructions+=12;goto B40c10c;
case 0x40c110:c.instructions+=11;goto B40c110;
case 0x40c114:c.instructions+=10;goto B40c114;
case 0x40c118:c.instructions+=9;goto B40c118;
case 0x40c11c:c.instructions+=8;goto B40c11c;
case 0x40c120:c.instructions+=7;goto B40c120;
case 0x40c124:c.instructions+=6;goto B40c124;
case 0x40c126:c.instructions+=5;goto B40c126;
case 0x40c128:c.instructions+=4;goto B40c128;
case 0x40c12e:c.instructions+=3;goto B40c12e;
case 0x40c130:c.instructions+=2;goto B40c130;
case 0x40c133:c.instructions+=1;goto B40c133;
case 0x40c135:goto L40c135;
case 0x40c13b:c.instructions+=3;goto B40c13b;
case 0x40c141:c.instructions+=2;goto B40c141;
case 0x40c145:c.instructions+=1;goto B40c145;
case 0x40c149:goto L40c149;
case 0x40c14d:c.instructions+=4;goto B40c14d;
case 0x40c14e:c.instructions+=3;goto B40c14e;
case 0x40c152:c.instructions+=2;goto B40c152;
case 0x40c153:c.instructions+=1;goto B40c153;
case 0x40c158:goto L40c158;
case 0x40c15c:c.instructions+=2;goto B40c15c;
case 0x40c15f:c.instructions+=1;goto B40c15f;
case 0x40c164:goto L40c164;
case 0x40c167:c.instructions+=12;goto B40c167;
case 0x40c169:c.instructions+=11;goto B40c169;
case 0x40c16c:c.instructions+=10;goto B40c16c;
case 0x40c16f:c.instructions+=9;goto B40c16f;
case 0x40c173:c.instructions+=8;goto B40c173;
case 0x40c175:c.instructions+=7;goto B40c175;
case 0x40c177:c.instructions+=6;goto B40c177;
case 0x40c17b:c.instructions+=5;goto B40c17b;
case 0x40c17d:c.instructions+=4;goto B40c17d;
case 0x40c183:c.instructions+=3;goto B40c183;
case 0x40c185:c.instructions+=2;goto B40c185;
case 0x40c188:c.instructions+=1;goto B40c188;
case 0x40c18e:goto L40c18e;
case 0x40c190:c.instructions+=10;goto B40c190;
case 0x40c194:c.instructions+=9;goto B40c194;
case 0x40c196:c.instructions+=8;goto B40c196;
case 0x40c198:c.instructions+=7;goto B40c198;
case 0x40c19a:c.instructions+=6;goto B40c19a;
case 0x40c19c:c.instructions+=5;goto B40c19c;
case 0x40c19e:c.instructions+=4;goto B40c19e;
case 0x40c1a0:c.instructions+=3;goto B40c1a0;
case 0x40c1a2:c.instructions+=2;goto B40c1a2;
case 0x40c1a6:c.instructions+=1;goto B40c1a6;
case 0x40c1ab:goto L40c1ab;
case 0x40c1ae:c.instructions+=7;goto B40c1ae;
case 0x40c1b0:c.instructions+=6;goto B40c1b0;
case 0x40c1b3:c.instructions+=5;goto B40c1b3;
case 0x40c1b8:c.instructions+=4;goto B40c1b8;
case 0x40c1bc:c.instructions+=3;goto B40c1bc;
case 0x40c1be:c.instructions+=2;goto B40c1be;
case 0x40c1c4:c.instructions+=1;goto B40c1c4;
case 0x40c1c6:goto L40c1c6;
case 0x40c1c8:c.instructions+=5;goto B40c1c8;
case 0x40c1ce:c.instructions+=4;goto B40c1ce;
case 0x40c1d4:c.instructions+=3;goto B40c1d4;
case 0x40c1da:c.instructions+=2;goto B40c1da;
case 0x40c1e0:c.instructions+=1;goto B40c1e0;
case 0x40c1e4:goto L40c1e4;
case 0x40c1e8:c.instructions+=4;goto B40c1e8;
case 0x40c1ea:c.instructions+=3;goto B40c1ea;
case 0x40c1ec:c.instructions+=2;goto B40c1ec;
case 0x40c1ef:c.instructions+=1;goto B40c1ef;
case 0x40c1f1:goto L40c1f1;
case 0x40c1f3:c.instructions+=1;goto B40c1f3;
case 0x40c1f7:goto L40c1f7;
case 0x40c1fb:c.instructions+=4;goto B40c1fb;
case 0x40c1fd:c.instructions+=3;goto B40c1fd;
case 0x40c1ff:c.instructions+=2;goto B40c1ff;
case 0x40c202:c.instructions+=1;goto B40c202;
case 0x40c204:goto L40c204;
case 0x40c206:c.instructions+=1;goto B40c206;
case 0x40c20a:goto L40c20a;
case 0x40c20e:c.instructions+=5;goto B40c20e;
case 0x40c210:c.instructions+=4;goto B40c210;
case 0x40c212:c.instructions+=3;goto B40c212;
case 0x40c214:c.instructions+=2;goto B40c214;
case 0x40c217:c.instructions+=1;goto B40c217;
case 0x40c21d:goto L40c21d;
case 0x40c223:c.instructions+=3;goto B40c223;
case 0x40c225:c.instructions+=2;goto B40c225;
case 0x40c228:c.instructions+=1;goto B40c228;
case 0x40c22e:goto L40c22e;
case 0x40c230:c.instructions+=12;goto B40c230;
case 0x40c236:c.instructions+=11;goto B40c236;
case 0x40c23a:c.instructions+=10;goto B40c23a;
case 0x40c240:c.instructions+=9;goto B40c240;
case 0x40c245:c.instructions+=8;goto B40c245;
case 0x40c24b:c.instructions+=7;goto B40c24b;
case 0x40c251:c.instructions+=6;goto B40c251;
case 0x40c255:c.instructions+=5;goto B40c255;
case 0x40c25b:c.instructions+=4;goto B40c25b;
case 0x40c25f:c.instructions+=3;goto B40c25f;
case 0x40c261:c.instructions+=2;goto B40c261;
case 0x40c265:c.instructions+=1;goto B40c265;
case 0x40c267:goto L40c267;
case 0x40c26d:c.instructions+=5;goto B40c26d;
case 0x40c273:c.instructions+=4;goto B40c273;
case 0x40c277:c.instructions+=3;goto B40c277;
case 0x40c27d:c.instructions+=2;goto B40c27d;
case 0x40c283:c.instructions+=1;goto B40c283;
case 0x40c287:goto L40c287;
case 0x40c28d:c.instructions+=3;goto B40c28d;
case 0x40c28f:c.instructions+=2;goto B40c28f;
case 0x40c292:c.instructions+=1;goto B40c292;
case 0x40c298:goto L40c298;
case 0x40c29c:c.instructions+=4;goto B40c29c;
case 0x40c2a0:c.instructions+=3;goto B40c2a0;
case 0x40c2a2:c.instructions+=2;goto B40c2a2;
case 0x40c2a5:c.instructions+=1;goto B40c2a5;
case 0x40c2a7:goto L40c2a7;
case 0x40c2ab:c.instructions+=1;goto B40c2ab;
case 0x40c2ad:goto L40c2ad;
case 0x40c2b1:goto L40c2b1;
case 0x40c2b5:c.instructions+=4;goto B40c2b5;
case 0x40c2b7:c.instructions+=3;goto B40c2b7;
case 0x40c2b9:c.instructions+=2;goto B40c2b9;
case 0x40c2bc:c.instructions+=1;goto B40c2bc;
case 0x40c2be:goto L40c2be;
case 0x40c2c0:c.instructions+=1;goto B40c2c0;
case 0x40c2c4:goto L40c2c4;
case 0x40c2c8:c.instructions+=5;goto B40c2c8;
case 0x40c2ca:c.instructions+=4;goto B40c2ca;
case 0x40c2cc:c.instructions+=3;goto B40c2cc;
case 0x40c2ce:c.instructions+=2;goto B40c2ce;
case 0x40c2d1:c.instructions+=1;goto B40c2d1;
case 0x40c2d3:goto L40c2d3;
case 0x40c2d7:c.instructions+=8;goto B40c2d7;
case 0x40c2db:c.instructions+=7;goto B40c2db;
case 0x40c2df:c.instructions+=6;goto B40c2df;
case 0x40c2e3:c.instructions+=5;goto B40c2e3;
case 0x40c2e5:c.instructions+=4;goto B40c2e5;
case 0x40c2e9:c.instructions+=3;goto B40c2e9;
case 0x40c2ed:c.instructions+=2;goto B40c2ed;
case 0x40c2ee:c.instructions+=1;goto B40c2ee;
case 0x40c2f3:goto L40c2f3;
case 0x40c2f8:c.instructions+=9;goto B40c2f8;
case 0x40c2fb:c.instructions+=8;goto B40c2fb;
case 0x40c2fd:c.instructions+=7;goto B40c2fd;
case 0x40c2ff:c.instructions+=6;goto B40c2ff;
case 0x40c302:c.instructions+=5;goto B40c302;
case 0x40c306:c.instructions+=4;goto B40c306;
case 0x40c30a:c.instructions+=3;goto B40c30a;
case 0x40c310:c.instructions+=2;goto B40c310;
case 0x40c316:c.instructions+=1;goto B40c316;
case 0x40c318:goto L40c318;
case 0x40c31a:c.instructions+=2;goto B40c31a;
case 0x40c320:c.instructions+=1;goto B40c320;
case 0x40c326:goto L40c326;
case 0x40c328:c.instructions+=5;goto B40c328;
case 0x40c32a:c.instructions+=4;goto B40c32a;
case 0x40c32c:c.instructions+=3;goto B40c32c;
case 0x40c32e:c.instructions+=2;goto B40c32e;
case 0x40c331:c.instructions+=1;goto B40c331;
case 0x40c333:goto L40c333;
case 0x40c337:c.instructions+=2;goto B40c337;
case 0x40c33a:c.instructions+=1;goto B40c33a;
case 0x40c33c:goto L40c33c;
case 0x40c33e:goto L40c33e;
case 0x40c340:goto L40c340;
case 0x40c344:c.instructions+=4;goto B40c344;
case 0x40c347:c.instructions+=3;goto B40c347;
case 0x40c348:c.instructions+=2;goto B40c348;
case 0x40c34c:c.instructions+=1;goto B40c34c;
case 0x40c352:goto L40c352;
case 0x40c356:c.instructions+=1;goto B40c356;
case 0x40c35c:goto L40c35c;
case 0x40c360:c.instructions+=6;goto B40c360;
case 0x40c361:c.instructions+=5;goto B40c361;
case 0x40c362:c.instructions+=4;goto B40c362;
case 0x40c363:c.instructions+=3;goto B40c363;
case 0x40c365:c.instructions+=2;goto B40c365;
case 0x40c366:c.instructions+=1;goto B40c366;
case 0x40c370:goto L40c370;
case 0x40c374:c.instructions+=10;goto B40c374;
case 0x40c375:c.instructions+=9;goto B40c375;
case 0x40c378:c.instructions+=8;goto B40c378;
case 0x40c37b:c.instructions+=7;goto B40c37b;
case 0x40c37e:c.instructions+=6;goto B40c37e;
case 0x40c380:c.instructions+=5;goto B40c380;
case 0x40c382:c.instructions+=4;goto B40c382;
case 0x40c385:c.instructions+=3;goto B40c385;
case 0x40c386:c.instructions+=2;goto B40c386;
case 0x40c38b:c.instructions+=1;goto B40c38b;
case 0x40c390:goto L40c390;
case 0x40c396:c.instructions+=6;goto B40c396;
case 0x40c39c:c.instructions+=5;goto B40c39c;
case 0x40c39e:c.instructions+=4;goto B40c39e;
case 0x40c3a0:c.instructions+=3;goto B40c3a0;
case 0x40c3a5:c.instructions+=2;goto B40c3a5;
case 0x40c3ab:c.instructions+=1;goto B40c3ab;
case 0x40c3b0:goto L40c3b0;
case 0x40c3b1:c.instructions+=1;goto B40c3b1;
case 0x40c3c0:goto L40c3c0;
case 0x40c3c4:c.instructions+=6;goto B40c3c4;
case 0x40c3c8:c.instructions+=5;goto B40c3c8;
case 0x40c3cb:c.instructions+=4;goto B40c3cb;
case 0x40c3cd:c.instructions+=3;goto B40c3cd;
case 0x40c3cf:c.instructions+=2;goto B40c3cf;
case 0x40c3d1:c.instructions+=1;goto B40c3d1;
case 0x40c3d3:goto L40c3d3;
case 0x40c3d8:c.instructions+=1;goto B40c3d8;
case 0x40c3da:goto L40c3da;
case 0x40c3e0:c.instructions+=8;goto B40c3e0;
case 0x40c3e2:c.instructions+=7;goto B40c3e2;
case 0x40c3e6:c.instructions+=6;goto B40c3e6;
case 0x40c3ea:c.instructions+=5;goto B40c3ea;
case 0x40c3f0:c.instructions+=4;goto B40c3f0;
case 0x40c3f6:c.instructions+=3;goto B40c3f6;
case 0x40c3f8:c.instructions+=2;goto B40c3f8;
case 0x40c3fb:c.instructions+=1;goto B40c3fb;
case 0x40c3fd:goto L40c3fd;
case 0x40c402:c.instructions+=1;goto B40c402;
case 0x40c405:goto L40c405;
case 0x40c407:c.instructions+=1;goto B40c407;
case 0x40c410:goto L40c410;
case 0x40c411:c.instructions+=4;goto B40c411;
case 0x40c412:c.instructions+=3;goto B40c412;
case 0x40c418:c.instructions+=2;goto B40c418;
case 0x40c41d:c.instructions+=1;goto B40c41d;
case 0x40c420:goto L40c420;
case 0x40c422:c.instructions+=3;goto B40c422;
case 0x40c423:c.instructions+=2;goto B40c423;
case 0x40c428:c.instructions+=1;goto B40c428;
case 0x40c42d:goto L40c42d;
case 0x40c433:c.instructions+=2;goto B40c433;
case 0x40c434:c.instructions+=1;goto B40c434;
case 0x40c436:goto L40c436;
case 0x40c437:c.instructions+=2;goto B40c437;
case 0x40c438:c.instructions+=1;goto B40c438;
case 0x40c440:goto L40c440;
case 0x40c442:c.instructions+=3;goto B40c442;
case 0x40c444:c.instructions+=2;goto B40c444;
case 0x40c446:c.instructions+=1;goto B40c446;
case 0x40c448:goto L40c448;
case 0x40c44c:c.instructions+=34;goto B40c44c;
case 0x40c44f:c.instructions+=33;goto B40c44f;
case 0x40c452:c.instructions+=32;goto B40c452;
case 0x40c454:c.instructions+=31;goto B40c454;
case 0x40c457:c.instructions+=30;goto B40c457;
case 0x40c459:c.instructions+=29;goto B40c459;
case 0x40c45d:c.instructions+=28;goto B40c45d;
case 0x40c460:c.instructions+=27;goto B40c460;
case 0x40c463:c.instructions+=26;goto B40c463;
case 0x40c466:c.instructions+=25;goto B40c466;
case 0x40c468:c.instructions+=24;goto B40c468;
case 0x40c46b:c.instructions+=23;goto B40c46b;
case 0x40c46e:c.instructions+=22;goto B40c46e;
case 0x40c472:c.instructions+=21;goto B40c472;
case 0x40c475:c.instructions+=20;goto B40c475;
case 0x40c478:c.instructions+=19;goto B40c478;
case 0x40c47a:c.instructions+=18;goto B40c47a;
case 0x40c47d:c.instructions+=17;goto B40c47d;
case 0x40c47f:c.instructions+=16;goto B40c47f;
case 0x40c483:c.instructions+=15;goto B40c483;
case 0x40c486:c.instructions+=14;goto B40c486;
case 0x40c489:c.instructions+=13;goto B40c489;
case 0x40c48f:c.instructions+=12;goto B40c48f;
case 0x40c493:c.instructions+=11;goto B40c493;
case 0x40c499:c.instructions+=10;goto B40c499;
case 0x40c49d:c.instructions+=9;goto B40c49d;
case 0x40c4a3:c.instructions+=8;goto B40c4a3;
case 0x40c4a6:c.instructions+=7;goto B40c4a6;
case 0x40c4ac:c.instructions+=6;goto B40c4ac;
case 0x40c4b2:c.instructions+=5;goto B40c4b2;
case 0x40c4b7:c.instructions+=4;goto B40c4b7;
case 0x40c4bd:c.instructions+=3;goto B40c4bd;
case 0x40c4bf:c.instructions+=2;goto B40c4bf;
case 0x40c4c2:c.instructions+=1;goto B40c4c2;
case 0x40c4c5:goto L40c4c5;
case 0x40c4c7:c.instructions+=1;goto B40c4c7;
case 0x40c4d0:goto L40c4d0;
case 0x40c4d1:c.instructions+=7;goto B40c4d1;
case 0x40c4d2:c.instructions+=6;goto B40c4d2;
case 0x40c4d4:c.instructions+=5;goto B40c4d4;
case 0x40c4da:c.instructions+=4;goto B40c4da;
case 0x40c4dc:c.instructions+=3;goto B40c4dc;
case 0x40c4de:c.instructions+=2;goto B40c4de;
case 0x40c4e6:c.instructions+=1;goto B40c4e6;
case 0x40c4e8:goto L40c4e8;
case 0x40c4e9:c.instructions+=3;goto B40c4e9;
case 0x40c4ea:c.instructions+=2;goto B40c4ea;
case 0x40c4eb:c.instructions+=1;goto B40c4eb;
case 0x40c4f0:goto L40c4f0;
case 0x40c4f2:c.instructions+=1;goto B40c4f2;
case 0x40c4f4:goto L40c4f4;
case 0x40c4f6:c.instructions+=4;goto B40c4f6;
case 0x40c4f8:c.instructions+=3;goto B40c4f8;
case 0x40c4f9:c.instructions+=2;goto B40c4f9;
case 0x40c4fb:c.instructions+=1;goto B40c4fb;
case 0x40c4fd:goto L40c4fd;
case 0x40c500:goto L40c500;
case 0x40c502:c.instructions+=9;goto B40c502;
case 0x40c505:c.instructions+=8;goto B40c505;
case 0x40c508:c.instructions+=7;goto B40c508;
case 0x40c50b:c.instructions+=6;goto B40c50b;
case 0x40c50e:c.instructions+=5;goto B40c50e;
case 0x40c511:c.instructions+=4;goto B40c511;
case 0x40c513:c.instructions+=3;goto B40c513;
case 0x40c515:c.instructions+=2;goto B40c515;
case 0x40c518:c.instructions+=1;goto B40c518;
case 0x40c51a:goto L40c51a;
case 0x40c51d:c.instructions+=2;goto B40c51d;
case 0x40c51f:c.instructions+=1;goto B40c51f;
case 0x40c521:goto L40c521;
case 0x40c527:c.instructions+=5;goto B40c527;
case 0x40c528:c.instructions+=4;goto B40c528;
case 0x40c52b:c.instructions+=3;goto B40c52b;
case 0x40c52c:c.instructions+=2;goto B40c52c;
case 0x40c52e:c.instructions+=1;goto B40c52e;
case 0x40c530:goto L40c530;
case 0x40c534:c.instructions+=5;goto B40c534;
case 0x40c53a:c.instructions+=4;goto B40c53a;
case 0x40c53b:c.instructions+=3;goto B40c53b;
case 0x40c53d:c.instructions+=2;goto B40c53d;
case 0x40c541:c.instructions+=1;goto B40c541;
case 0x40c543:goto L40c543;
case 0x40c544:c.instructions+=2;goto B40c544;
case 0x40c545:c.instructions+=1;goto B40c545;
case 0x40c546:goto L40c546;
case 0x40c547:c.instructions+=2;goto B40c547;
case 0x40c548:c.instructions+=1;goto B40c548;
case 0x40c550:goto L40c550;
case 0x40c552:c.instructions+=9;goto B40c552;
case 0x40c554:c.instructions+=8;goto B40c554;
case 0x40c556:c.instructions+=7;goto B40c556;
case 0x40c559:c.instructions+=6;goto B40c559;
case 0x40c55f:c.instructions+=5;goto B40c55f;
case 0x40c565:c.instructions+=4;goto B40c565;
case 0x40c56b:c.instructions+=3;goto B40c56b;
case 0x40c571:c.instructions+=2;goto B40c571;
case 0x40c577:c.instructions+=1;goto B40c577;
case 0x40c580:goto L40c580;
case 0x40c581:c.instructions+=11;goto B40c581;
case 0x40c583:c.instructions+=10;goto B40c583;
case 0x40c58a:c.instructions+=9;goto B40c58a;
case 0x40c58e:c.instructions+=8;goto B40c58e;
case 0x40c592:c.instructions+=7;goto B40c592;
case 0x40c599:c.instructions+=6;goto B40c599;
case 0x40c59d:c.instructions+=5;goto B40c59d;
case 0x40c59e:c.instructions+=4;goto B40c59e;
case 0x40c5a2:c.instructions+=3;goto B40c5a2;
case 0x40c5a4:c.instructions+=2;goto B40c5a4;
case 0x40c5a8:c.instructions+=1;goto B40c5a8;
case 0x40c5aa:goto L40c5aa;
case 0x40c5ae:c.instructions+=3;goto B40c5ae;
case 0x40c5af:c.instructions+=2;goto B40c5af;
case 0x40c5b1:c.instructions+=1;goto B40c5b1;
case 0x40c5b6:goto L40c5b6;
case 0x40c5b8:c.instructions+=1;goto B40c5b8;
case 0x40c5ba:goto L40c5ba;
case 0x40c5c0:c.instructions+=9;goto B40c5c0;
case 0x40c5c7:c.instructions+=8;goto B40c5c7;
case 0x40c5ca:c.instructions+=7;goto B40c5ca;
case 0x40c5cf:c.instructions+=6;goto B40c5cf;
case 0x40c5d5:c.instructions+=5;goto B40c5d5;
case 0x40c5d7:c.instructions+=4;goto B40c5d7;
case 0x40c5d8:c.instructions+=3;goto B40c5d8;
case 0x40c5de:c.instructions+=2;goto B40c5de;
case 0x40c5df:c.instructions+=1;goto B40c5df;
case 0x40c5e2:goto L40c5e2;
case 0x40c5e9:c.instructions+=7;goto B40c5e9;
case 0x40c5f0:c.instructions+=6;goto B40c5f0;
case 0x40c5f6:c.instructions+=5;goto B40c5f6;
case 0x40c5f8:c.instructions+=4;goto B40c5f8;
case 0x40c5f9:c.instructions+=3;goto B40c5f9;
case 0x40c5ff:c.instructions+=2;goto B40c5ff;
case 0x40c600:c.instructions+=1;goto B40c600;
case 0x40c610:goto L40c610;
case 0x40c614:c.instructions+=19;goto B40c614;
case 0x40c617:c.instructions+=18;goto B40c617;
case 0x40c61a:c.instructions+=17;goto B40c61a;
case 0x40c61d:c.instructions+=16;goto B40c61d;
case 0x40c61e:c.instructions+=15;goto B40c61e;
case 0x40c624:c.instructions+=14;goto B40c624;
case 0x40c628:c.instructions+=13;goto B40c628;
case 0x40c62a:c.instructions+=12;goto B40c62a;
case 0x40c630:c.instructions+=11;goto B40c630;
case 0x40c633:c.instructions+=10;goto B40c633;
case 0x40c636:c.instructions+=9;goto B40c636;
case 0x40c638:c.instructions+=8;goto B40c638;
case 0x40c639:c.instructions+=7;goto B40c639;
case 0x40c63b:c.instructions+=6;goto B40c63b;
case 0x40c63e:c.instructions+=5;goto B40c63e;
case 0x40c63f:c.instructions+=4;goto B40c63f;
case 0x40c645:c.instructions+=3;goto B40c645;
case 0x40c648:c.instructions+=2;goto B40c648;
case 0x40c64b:c.instructions+=1;goto B40c64b;
case 0x40c650:goto L40c650;
case 0x40c653:c.instructions+=2;goto B40c653;
case 0x40c656:c.instructions+=1;goto B40c656;
case 0x40c658:goto L40c658;
case 0x40c65d:goto L40c65d;
case 0x40c65f:c.instructions+=1;goto B40c65f;
case 0x40c661:goto L40c661;
case 0x40c664:c.instructions+=5;goto B40c664;
case 0x40c667:c.instructions+=4;goto B40c667;
case 0x40c668:c.instructions+=3;goto B40c668;
case 0x40c66b:c.instructions+=2;goto B40c66b;
case 0x40c66e:c.instructions+=1;goto B40c66e;
case 0x40c670:goto L40c670;
case 0x40c673:c.instructions+=5;goto B40c673;
case 0x40c676:c.instructions+=4;goto B40c676;
case 0x40c677:c.instructions+=3;goto B40c677;
case 0x40c678:c.instructions+=2;goto B40c678;
case 0x40c679:c.instructions+=1;goto B40c679;
case 0x40c67b:goto L40c67b;
case 0x40c680:goto L40c680;
case 0x40c686:c.instructions+=10;goto B40c686;
case 0x40c68a:c.instructions+=9;goto B40c68a;
case 0x40c68d:c.instructions+=8;goto B40c68d;
case 0x40c690:c.instructions+=7;goto B40c690;
case 0x40c692:c.instructions+=6;goto B40c692;
case 0x40c694:c.instructions+=5;goto B40c694;
case 0x40c697:c.instructions+=4;goto B40c697;
case 0x40c69a:c.instructions+=3;goto B40c69a;
case 0x40c69d:c.instructions+=2;goto B40c69d;
case 0x40c6a4:c.instructions+=1;goto B40c6a4;
case 0x40c6b0:goto L40c6b0;
case 0x40c6b6:c.instructions+=2;goto B40c6b6;
case 0x40c6b8:c.instructions+=1;goto B40c6b8;
case 0x40c6ba:goto L40c6ba;
case 0x40c6c0:c.instructions+=17;goto B40c6c0;
case 0x40c6c3:c.instructions+=16;goto B40c6c3;
case 0x40c6c6:c.instructions+=15;goto B40c6c6;
case 0x40c6ca:c.instructions+=14;goto B40c6ca;
case 0x40c6cb:c.instructions+=13;goto B40c6cb;
case 0x40c6cd:c.instructions+=12;goto B40c6cd;
case 0x40c6cf:c.instructions+=11;goto B40c6cf;
case 0x40c6d2:c.instructions+=10;goto B40c6d2;
case 0x40c6d5:c.instructions+=9;goto B40c6d5;
case 0x40c6d8:c.instructions+=8;goto B40c6d8;
case 0x40c6db:c.instructions+=7;goto B40c6db;
case 0x40c6e1:c.instructions+=6;goto B40c6e1;
case 0x40c6e2:c.instructions+=5;goto B40c6e2;
case 0x40c6e4:c.instructions+=4;goto B40c6e4;
case 0x40c6e7:c.instructions+=3;goto B40c6e7;
case 0x40c6ed:c.instructions+=2;goto B40c6ed;
case 0x40c6ee:c.instructions+=1;goto B40c6ee;
case 0x40c6f0:goto L40c6f0;
case 0x40c6fa:goto L40c6fa;
case 0x40c700:c.instructions+=4;goto B40c700;
case 0x40c706:c.instructions+=3;goto B40c706;
case 0x40c708:c.instructions+=2;goto B40c708;
case 0x40c70b:c.instructions+=1;goto B40c70b;
case 0x40c711:goto L40c711;
case 0x40c720:goto L40c720;
case 0x40c726:c.instructions+=2;goto B40c726;
case 0x40c728:c.instructions+=1;goto B40c728;
case 0x40c72a:goto L40c72a;
case 0x40c730:c.instructions+=2;goto B40c730;
case 0x40c732:c.instructions+=1;goto B40c732;
case 0x40c734:goto L40c734;
case 0x40c73e:c.instructions+=1;goto B40c73e;
case 0x40c740:goto L40c740;
case 0x40c741:c.instructions+=1;goto B40c741;
case 0x40c747:goto L40c747;
case 0x40c74d:c.instructions+=13;goto B40c74d;
case 0x40c753:c.instructions+=12;goto B40c753;
case 0x40c755:c.instructions+=11;goto B40c755;
case 0x40c758:c.instructions+=10;goto B40c758;
case 0x40c75e:c.instructions+=9;goto B40c75e;
case 0x40c762:c.instructions+=8;goto B40c762;
case 0x40c765:c.instructions+=7;goto B40c765;
case 0x40c768:c.instructions+=6;goto B40c768;
case 0x40c76a:c.instructions+=5;goto B40c76a;
case 0x40c76c:c.instructions+=4;goto B40c76c;
case 0x40c76f:c.instructions+=3;goto B40c76f;
case 0x40c772:c.instructions+=2;goto B40c772;
case 0x40c775:c.instructions+=1;goto B40c775;
case 0x40c778:goto L40c778;
case 0x40c780:goto L40c780;
case 0x40c782:c.instructions+=3;goto B40c782;
case 0x40c788:c.instructions+=2;goto B40c788;
case 0x40c78a:c.instructions+=1;goto B40c78a;
case 0x40c78c:goto L40c78c;
case 0x40c78d:c.instructions+=6;goto B40c78d;
case 0x40c791:c.instructions+=5;goto B40c791;
case 0x40c792:c.instructions+=4;goto B40c792;
case 0x40c798:c.instructions+=3;goto B40c798;
case 0x40c79b:c.instructions+=2;goto B40c79b;
case 0x40c79d:c.instructions+=1;goto B40c79d;
case 0x40c7a2:goto L40c7a2;
case 0x40c7a4:goto L40c7a4;
case 0x40c7aa:c.instructions+=7;goto B40c7aa;
case 0x40c7ab:c.instructions+=6;goto B40c7ab;
case 0x40c7ad:c.instructions+=5;goto B40c7ad;
case 0x40c7b0:c.instructions+=4;goto B40c7b0;
case 0x40c7b1:c.instructions+=3;goto B40c7b1;
case 0x40c7b7:c.instructions+=2;goto B40c7b7;
case 0x40c7b8:c.instructions+=1;goto B40c7b8;
case 0x40c7ba:goto L40c7ba;
case 0x40c7c4:goto L40c7c4;
case 0x40c7ca:c.instructions+=4;goto B40c7ca;
case 0x40c7d0:c.instructions+=3;goto B40c7d0;
case 0x40c7d2:c.instructions+=2;goto B40c7d2;
case 0x40c7d5:c.instructions+=1;goto B40c7d5;
case 0x40c7db:goto L40c7db;
case 0x40c7e0:goto L40c7e0;
case 0x40c7e6:c.instructions+=2;goto B40c7e6;
case 0x40c7e8:c.instructions+=1;goto B40c7e8;
case 0x40c7ea:goto L40c7ea;
case 0x40c7f0:c.instructions+=2;goto B40c7f0;
case 0x40c7f2:c.instructions+=1;goto B40c7f2;
case 0x40c7f4:goto L40c7f4;
case 0x40c7fe:c.instructions+=1;goto B40c7fe;
case 0x40c800:goto L40c800;
case 0x40c801:c.instructions+=1;goto B40c801;
case 0x40c807:goto L40c807;
case 0x40c808:c.instructions+=10;goto B40c808;
case 0x40c80e:c.instructions+=9;goto B40c80e;
case 0x40c80f:c.instructions+=8;goto B40c80f;
case 0x40c815:c.instructions+=7;goto B40c815;
case 0x40c817:c.instructions+=6;goto B40c817;
case 0x40c81b:c.instructions+=5;goto B40c81b;
case 0x40c81e:c.instructions+=4;goto B40c81e;
case 0x40c821:c.instructions+=3;goto B40c821;
case 0x40c823:c.instructions+=2;goto B40c823;
case 0x40c829:c.instructions+=1;goto B40c829;
case 0x40c82e:goto L40c82e;
case 0x40c830:goto L40c830;
case 0x40c831:c.instructions+=1;goto B40c831;
case 0x40c832:goto L40c832;
case 0x40c840:goto L40c840;
case 0x40c841:c.instructions+=5;goto B40c841;
case 0x40c842:c.instructions+=4;goto B40c842;
case 0x40c843:c.instructions+=3;goto B40c843;
case 0x40c846:c.instructions+=2;goto B40c846;
case 0x40c849:c.instructions+=1;goto B40c849;
case 0x40c84f:goto L40c84f;
case 0x40c851:c.instructions+=5;goto B40c851;
case 0x40c855:c.instructions+=4;goto B40c855;
case 0x40c857:c.instructions+=3;goto B40c857;
case 0x40c859:c.instructions+=2;goto B40c859;
case 0x40c85c:c.instructions+=1;goto B40c85c;
case 0x40c85e:goto L40c85e;
case 0x40c861:c.instructions+=6;goto B40c861;
case 0x40c865:c.instructions+=5;goto B40c865;
case 0x40c866:c.instructions+=4;goto B40c866;
case 0x40c867:c.instructions+=3;goto B40c867;
case 0x40c869:c.instructions+=2;goto B40c869;
case 0x40c86a:c.instructions+=1;goto B40c86a;
case 0x40c86d:goto L40c86d;
case 0x40c871:c.instructions+=4;goto B40c871;
case 0x40c875:c.instructions+=3;goto B40c875;
case 0x40c877:c.instructions+=2;goto B40c877;
case 0x40c87a:c.instructions+=1;goto B40c87a;
case 0x40c87c:goto L40c87c;
case 0x40c880:c.instructions+=6;goto B40c880;
case 0x40c884:c.instructions+=5;goto B40c884;
case 0x40c885:c.instructions+=4;goto B40c885;
case 0x40c886:c.instructions+=3;goto B40c886;
case 0x40c888:c.instructions+=2;goto B40c888;
case 0x40c889:c.instructions+=1;goto B40c889;
case 0x40c88c:goto L40c88c;
case 0x40c88f:c.instructions+=3;goto B40c88f;
case 0x40c891:c.instructions+=2;goto B40c891;
case 0x40c893:c.instructions+=1;goto B40c893;
case 0x40c895:goto L40c895;
case 0x40c897:goto L40c897;
case 0x40c89b:c.instructions+=4;goto B40c89b;
case 0x40c89d:c.instructions+=3;goto B40c89d;
case 0x40c89f:c.instructions+=2;goto B40c89f;
case 0x40c8a2:c.instructions+=1;goto B40c8a2;
case 0x40c8a4:goto L40c8a4;
case 0x40c8a8:c.instructions+=4;goto B40c8a8;
case 0x40c8ab:c.instructions+=3;goto B40c8ab;
case 0x40c8ad:c.instructions+=2;goto B40c8ad;
case 0x40c8b0:c.instructions+=1;goto B40c8b0;
case 0x40c8b2:goto L40c8b2;
case 0x40c8b3:c.instructions+=3;goto B40c8b3;
case 0x40c8b6:c.instructions+=2;goto B40c8b6;
case 0x40c8b8:c.instructions+=1;goto B40c8b8;
case 0x40c8ba:goto L40c8ba;
case 0x40c8bb:c.instructions+=3;goto B40c8bb;
case 0x40c8bc:c.instructions+=2;goto B40c8bc;
case 0x40c8bd:c.instructions+=1;goto B40c8bd;
case 0x40c8c0:goto L40c8c0;
case 0x40c8c4:c.instructions+=13;goto B40c8c4;
case 0x40c8c5:c.instructions+=12;goto B40c8c5;
case 0x40c8c8:c.instructions+=11;goto B40c8c8;
case 0x40c8cc:c.instructions+=10;goto B40c8cc;
case 0x40c8d0:c.instructions+=9;goto B40c8d0;
case 0x40c8d3:c.instructions+=8;goto B40c8d3;
case 0x40c8d7:c.instructions+=7;goto B40c8d7;
case 0x40c8d9:c.instructions+=6;goto B40c8d9;
case 0x40c8dc:c.instructions+=5;goto B40c8dc;
case 0x40c8dd:c.instructions+=4;goto B40c8dd;
case 0x40c8e1:c.instructions+=3;goto B40c8e1;
case 0x40c8e2:c.instructions+=2;goto B40c8e2;
case 0x40c8e3:c.instructions+=1;goto B40c8e3;
case 0x40c8e8:goto L40c8e8;
case 0x40c8e9:c.instructions+=3;goto B40c8e9;
case 0x40c8ea:c.instructions+=2;goto B40c8ea;
case 0x40c8eb:c.instructions+=1;goto B40c8eb;
case 0x40c8ee:goto L40c8ee;
case 0x40c8f0:c.instructions+=1;goto B40c8f0;
case 0x40c8f2:goto L40c8f2;
case 0x40c8f4:c.instructions+=3;goto B40c8f4;
case 0x40c8f7:c.instructions+=2;goto B40c8f7;
case 0x40c8fb:c.instructions+=1;goto B40c8fb;
case 0x40c8fd:goto L40c8fd;
case 0x40c8fe:c.instructions+=3;goto B40c8fe;
case 0x40c8ff:c.instructions+=2;goto B40c8ff;
case 0x40c900:c.instructions+=1;goto B40c900;
case 0x40c910:goto L40c910;
case 0x40c912:c.instructions+=10;goto B40c912;
case 0x40c917:c.instructions+=9;goto B40c917;
case 0x40c91d:c.instructions+=8;goto B40c91d;
case 0x40c91e:c.instructions+=7;goto B40c91e;
case 0x40c925:c.instructions+=6;goto B40c925;
case 0x40c926:c.instructions+=5;goto B40c926;
case 0x40c927:c.instructions+=4;goto B40c927;
case 0x40c929:c.instructions+=3;goto B40c929;
case 0x40c92c:c.instructions+=2;goto B40c92c;
case 0x40c930:c.instructions+=1;goto B40c930;
case 0x40c935:goto L40c935;
case 0x40c937:c.instructions+=6;goto B40c937;
case 0x40c939:c.instructions+=5;goto B40c939;
case 0x40c93b:c.instructions+=4;goto B40c93b;
case 0x40c93d:c.instructions+=3;goto B40c93d;
case 0x40c93f:c.instructions+=2;goto B40c93f;
case 0x40c947:c.instructions+=1;goto B40c947;
case 0x40c94c:goto L40c94c;
case 0x40c950:c.instructions+=5;goto B40c950;
case 0x40c952:c.instructions+=4;goto B40c952;
case 0x40c953:c.instructions+=3;goto B40c953;
case 0x40c95a:c.instructions+=2;goto B40c95a;
case 0x40c95d:c.instructions+=1;goto B40c95d;
case 0x40c960:goto L40c960;
case 0x40c964:c.instructions+=8;goto B40c964;
case 0x40c965:c.instructions+=7;goto B40c965;
case 0x40c96b:c.instructions+=6;goto B40c96b;
case 0x40c96d:c.instructions+=5;goto B40c96d;
case 0x40c973:c.instructions+=4;goto B40c973;
case 0x40c97a:c.instructions+=3;goto B40c97a;
case 0x40c97c:c.instructions+=2;goto B40c97c;
case 0x40c97f:c.instructions+=1;goto B40c97f;
case 0x40c981:goto L40c981;
case 0x40c986:c.instructions+=1;goto B40c986;
case 0x40c988:goto L40c988;
case 0x40c98a:goto L40c98a;
case 0x40c98d:c.instructions+=7;goto B40c98d;
case 0x40c991:c.instructions+=6;goto B40c991;
case 0x40c994:c.instructions+=5;goto B40c994;
case 0x40c99a:c.instructions+=4;goto B40c99a;
case 0x40c9a0:c.instructions+=3;goto B40c9a0;
case 0x40c9a6:c.instructions+=2;goto B40c9a6;
case 0x40c9ac:c.instructions+=1;goto B40c9ac;
case 0x40c9b1:goto L40c9b1;
case 0x40c9b4:c.instructions+=3;goto B40c9b4;
case 0x40c9b6:c.instructions+=2;goto B40c9b6;
case 0x40c9b7:c.instructions+=1;goto B40c9b7;
case 0x40c9c0:goto L40c9c0;
case 0x40c9c2:c.instructions+=1;goto B40c9c2;
case 0x40c9c5:goto L40c9c5;
case 0x40c9c8:c.instructions+=4;goto B40c9c8;
case 0x40c9ca:c.instructions+=3;goto B40c9ca;
case 0x40c9cc:c.instructions+=2;goto B40c9cc;
case 0x40c9cd:c.instructions+=1;goto B40c9cd;
case 0x40c9d0:goto L40c9d0;
case 0x40c9d1:c.instructions+=3;goto B40c9d1;
case 0x40c9d3:c.instructions+=2;goto B40c9d3;
case 0x40c9d5:c.instructions+=1;goto B40c9d5;
case 0x40c9d8:goto L40c9d8;
case 0x40c9db:c.instructions+=1;goto B40c9db;
case 0x40c9dd:goto L40c9dd;
case 0x40c9df:c.instructions+=2;goto B40c9df;
case 0x40c9e1:c.instructions+=1;goto B40c9e1;
case 0x40c9e4:goto L40c9e4;
case 0x40c9e7:c.instructions+=1;goto B40c9e7;
case 0x40c9e9:goto L40c9e9;
case 0x40c9eb:c.instructions+=2;goto B40c9eb;
case 0x40c9ec:c.instructions+=1;goto B40c9ec;
case 0x40c9ed:goto L40c9ed;
case 0x40c9f2:c.instructions+=2;goto B40c9f2;
case 0x40c9f3:c.instructions+=1;goto B40c9f3;
case 0x40ca00:goto L40ca00;
case 0x40ca02:c.instructions+=1;goto B40ca02;
case 0x40ca05:goto L40ca05;
case 0x40ca08:c.instructions+=4;goto B40ca08;
case 0x40ca0a:c.instructions+=3;goto B40ca0a;
case 0x40ca0c:c.instructions+=2;goto B40ca0c;
case 0x40ca0d:c.instructions+=1;goto B40ca0d;
case 0x40ca10:goto L40ca10;
case 0x40ca12:c.instructions+=1;goto B40ca12;
case 0x40ca15:goto L40ca15;
case 0x40ca18:c.instructions+=4;goto B40ca18;
case 0x40ca1a:c.instructions+=3;goto B40ca1a;
case 0x40ca1c:c.instructions+=2;goto B40ca1c;
case 0x40ca1d:c.instructions+=1;goto B40ca1d;
case 0x40ca20:goto L40ca20;
case 0x40ca24:c.instructions+=4;goto B40ca24;
case 0x40ca25:c.instructions+=3;goto B40ca25;
case 0x40ca26:c.instructions+=2;goto B40ca26;
case 0x40ca28:c.instructions+=1;goto B40ca28;
case 0x40ca2d:goto L40ca2d;
case 0x40ca34:c.instructions+=4;goto B40ca34;
case 0x40ca3a:c.instructions+=3;goto B40ca3a;
case 0x40ca3c:c.instructions+=2;goto B40ca3c;
case 0x40ca3d:c.instructions+=1;goto B40ca3d;
case 0x40ca40:goto L40ca40;
case 0x40ca45:c.instructions+=1;goto B40ca45;
case 0x40ca50:goto L40ca50;
case 0x40ca55:c.instructions+=1;goto B40ca55;
case 0x40ca60:goto L40ca60;
case 0x40ca65:c.instructions+=1;goto B40ca65;
case 0x40ca70:goto L40ca70;
case 0x40ca74:c.instructions+=4;goto B40ca74;
case 0x40ca75:c.instructions+=3;goto B40ca75;
case 0x40ca76:c.instructions+=2;goto B40ca76;
case 0x40ca78:c.instructions+=1;goto B40ca78;
case 0x40ca7d:goto L40ca7d;
case 0x40ca84:c.instructions+=4;goto B40ca84;
case 0x40ca8a:c.instructions+=3;goto B40ca8a;
case 0x40ca8c:c.instructions+=2;goto B40ca8c;
case 0x40ca8d:c.instructions+=1;goto B40ca8d;
case 0x40ca90:goto L40ca90;
case 0x40ca95:c.instructions+=1;goto B40ca95;
case 0x40caa0:goto L40caa0;
case 0x40caa5:c.instructions+=1;goto B40caa5;
case 0x40cab0:goto L40cab0;
case 0x40cab4:c.instructions+=4;goto B40cab4;
case 0x40cab5:c.instructions+=3;goto B40cab5;
case 0x40cab6:c.instructions+=2;goto B40cab6;
case 0x40cab8:c.instructions+=1;goto B40cab8;
case 0x40cabd:goto L40cabd;
case 0x40cac4:c.instructions+=4;goto B40cac4;
case 0x40caca:c.instructions+=3;goto B40caca;
case 0x40cacc:c.instructions+=2;goto B40cacc;
case 0x40cacd:c.instructions+=1;goto B40cacd;
case 0x40cad0:goto L40cad0;
case 0x40cad5:c.instructions+=1;goto B40cad5;
case 0x40cae0:goto L40cae0;
case 0x40cae4:c.instructions+=2;goto B40cae4;
case 0x40cae6:c.instructions+=1;goto B40cae6;
case 0x40caeb:goto L40caeb;
case 0x40caf0:goto L40caf0;
case 0x40caf4:c.instructions+=4;goto B40caf4;
case 0x40caf5:c.instructions+=3;goto B40caf5;
case 0x40caf6:c.instructions+=2;goto B40caf6;
case 0x40caf8:c.instructions+=1;goto B40caf8;
case 0x40cafd:goto L40cafd;
case 0x40cb04:c.instructions+=4;goto B40cb04;
case 0x40cb0a:c.instructions+=3;goto B40cb0a;
case 0x40cb0c:c.instructions+=2;goto B40cb0c;
case 0x40cb0d:c.instructions+=1;goto B40cb0d;
case 0x40cb10:goto L40cb10;
case 0x40cb15:c.instructions+=1;goto B40cb15;
case 0x40cb20:goto L40cb20;
case 0x40cb25:c.instructions+=1;goto B40cb25;
case 0x40cb30:goto L40cb30;
case 0x40cb34:c.instructions+=4;goto B40cb34;
case 0x40cb35:c.instructions+=3;goto B40cb35;
case 0x40cb36:c.instructions+=2;goto B40cb36;
case 0x40cb38:c.instructions+=1;goto B40cb38;
case 0x40cb3d:goto L40cb3d;
case 0x40cb44:c.instructions+=4;goto B40cb44;
case 0x40cb4a:c.instructions+=3;goto B40cb4a;
case 0x40cb4c:c.instructions+=2;goto B40cb4c;
case 0x40cb4d:c.instructions+=1;goto B40cb4d;
case 0x40cb50:goto L40cb50;
case 0x40cb55:c.instructions+=1;goto B40cb55;
case 0x40cb60:goto L40cb60;
case 0x40cb66:c.instructions+=1;goto B40cb66;
case 0x40cb70:goto L40cb70;
case 0x40cb74:c.instructions+=2;goto B40cb74;
case 0x40cb76:c.instructions+=1;goto B40cb76;
case 0x40cb7b:goto L40cb7b;
case 0x40cb80:goto L40cb80;
case 0x40cb84:c.instructions+=4;goto B40cb84;
case 0x40cb85:c.instructions+=3;goto B40cb85;
case 0x40cb86:c.instructions+=2;goto B40cb86;
case 0x40cb88:c.instructions+=1;goto B40cb88;
case 0x40cb8d:goto L40cb8d;
case 0x40cb94:c.instructions+=4;goto B40cb94;
case 0x40cb9a:c.instructions+=3;goto B40cb9a;
case 0x40cb9c:c.instructions+=2;goto B40cb9c;
case 0x40cb9d:c.instructions+=1;goto B40cb9d;
case 0x40cba0:goto L40cba0;
case 0x40cba5:c.instructions+=1;goto B40cba5;
case 0x40cbb0:goto L40cbb0;
case 0x40cbb5:c.instructions+=1;goto B40cbb5;
case 0x40cbc0:goto L40cbc0;
case 0x40cbc4:c.instructions+=5;goto B40cbc4;
case 0x40cbc7:c.instructions+=4;goto B40cbc7;
case 0x40cbc9:c.instructions+=3;goto B40cbc9;
case 0x40cbca:c.instructions+=2;goto B40cbca;
case 0x40cbcc:c.instructions+=1;goto B40cbcc;
case 0x40cbce:goto L40cbce;
case 0x40cbd2:c.instructions+=20;goto B40cbd2;
case 0x40cbd6:c.instructions+=19;goto B40cbd6;
case 0x40cbda:c.instructions+=18;goto B40cbda;
case 0x40cbde:c.instructions+=17;goto B40cbde;
case 0x40cbe2:c.instructions+=16;goto B40cbe2;
case 0x40cbe6:c.instructions+=15;goto B40cbe6;
case 0x40cbec:c.instructions+=14;goto B40cbec;
case 0x40cbf0:c.instructions+=13;goto B40cbf0;
case 0x40cbf6:c.instructions+=12;goto B40cbf6;
case 0x40cbf9:c.instructions+=11;goto B40cbf9;
case 0x40cbfc:c.instructions+=10;goto B40cbfc;
case 0x40cbfe:c.instructions+=9;goto B40cbfe;
case 0x40cc00:c.instructions+=8;goto B40cc00;
case 0x40cc02:c.instructions+=7;goto B40cc02;
case 0x40cc03:c.instructions+=6;goto B40cc03;
case 0x40cc05:c.instructions+=5;goto B40cc05;
case 0x40cc07:c.instructions+=4;goto B40cc07;
case 0x40cc09:c.instructions+=3;goto B40cc09;
case 0x40cc0b:c.instructions+=2;goto B40cc0b;
case 0x40cc0e:c.instructions+=1;goto B40cc0e;
case 0x40cc11:goto L40cc11;
case 0x40cc15:c.instructions+=3;goto B40cc15;
case 0x40cc16:c.instructions+=2;goto B40cc16;
case 0x40cc18:c.instructions+=1;goto B40cc18;
case 0x40cc1d:goto L40cc1d;
case 0x40cc21:c.instructions+=10;goto B40cc21;
case 0x40cc24:c.instructions+=9;goto B40cc24;
case 0x40cc27:c.instructions+=8;goto B40cc27;
case 0x40cc2b:c.instructions+=7;goto B40cc2b;
case 0x40cc2d:c.instructions+=6;goto B40cc2d;
case 0x40cc2f:c.instructions+=5;goto B40cc2f;
case 0x40cc30:c.instructions+=4;goto B40cc30;
case 0x40cc34:c.instructions+=3;goto B40cc34;
case 0x40cc36:c.instructions+=2;goto B40cc36;
case 0x40cc39:c.instructions+=1;goto B40cc39;
case 0x40cc40:goto L40cc40;
case 0x40cc44:c.instructions+=5;goto B40cc44;
case 0x40cc47:c.instructions+=4;goto B40cc47;
case 0x40cc49:c.instructions+=3;goto B40cc49;
case 0x40cc4a:c.instructions+=2;goto B40cc4a;
case 0x40cc4c:c.instructions+=1;goto B40cc4c;
case 0x40cc4e:goto L40cc4e;
case 0x40cc52:c.instructions+=20;goto B40cc52;
case 0x40cc56:c.instructions+=19;goto B40cc56;
case 0x40cc5a:c.instructions+=18;goto B40cc5a;
case 0x40cc5e:c.instructions+=17;goto B40cc5e;
case 0x40cc62:c.instructions+=16;goto B40cc62;
case 0x40cc66:c.instructions+=15;goto B40cc66;
case 0x40cc6c:c.instructions+=14;goto B40cc6c;
case 0x40cc70:c.instructions+=13;goto B40cc70;
case 0x40cc76:c.instructions+=12;goto B40cc76;
case 0x40cc78:c.instructions+=11;goto B40cc78;
case 0x40cc7a:c.instructions+=10;goto B40cc7a;
case 0x40cc7c:c.instructions+=9;goto B40cc7c;
case 0x40cc7f:c.instructions+=8;goto B40cc7f;
case 0x40cc82:c.instructions+=7;goto B40cc82;
case 0x40cc83:c.instructions+=6;goto B40cc83;
case 0x40cc85:c.instructions+=5;goto B40cc85;
case 0x40cc87:c.instructions+=4;goto B40cc87;
case 0x40cc89:c.instructions+=3;goto B40cc89;
case 0x40cc8b:c.instructions+=2;goto B40cc8b;
case 0x40cc8e:c.instructions+=1;goto B40cc8e;
case 0x40cc91:goto L40cc91;
case 0x40cc95:c.instructions+=3;goto B40cc95;
case 0x40cc96:c.instructions+=2;goto B40cc96;
case 0x40cc98:c.instructions+=1;goto B40cc98;
case 0x40cc9d:goto L40cc9d;
case 0x40cca1:c.instructions+=10;goto B40cca1;
case 0x40cca3:c.instructions+=9;goto B40cca3;
case 0x40cca5:c.instructions+=8;goto B40cca5;
case 0x40cca9:c.instructions+=7;goto B40cca9;
case 0x40ccac:c.instructions+=6;goto B40ccac;
case 0x40ccaf:c.instructions+=5;goto B40ccaf;
case 0x40ccb0:c.instructions+=4;goto B40ccb0;
case 0x40ccb4:c.instructions+=3;goto B40ccb4;
case 0x40ccb6:c.instructions+=2;goto B40ccb6;
case 0x40ccb9:c.instructions+=1;goto B40ccb9;
case 0x40ccc0:goto L40ccc0;
case 0x40ccc1:c.instructions+=3;goto B40ccc1;
case 0x40ccc2:c.instructions+=2;goto B40ccc2;
case 0x40ccc4:c.instructions+=1;goto B40ccc4;
case 0x40ccc9:goto L40ccc9;
case 0x40cccb:c.instructions+=1;goto B40cccb;
case 0x40cccd:goto L40cccd;
case 0x40ccd1:c.instructions+=7;goto B40ccd1;
case 0x40ccd4:c.instructions+=6;goto B40ccd4;
case 0x40ccd8:c.instructions+=5;goto B40ccd8;
case 0x40ccd9:c.instructions+=4;goto B40ccd9;
case 0x40ccdd:c.instructions+=3;goto B40ccdd;
case 0x40cce3:c.instructions+=2;goto B40cce3;
case 0x40cce4:c.instructions+=1;goto B40cce4;
case 0x40cce5:goto L40cce5;
case 0x40cce9:c.instructions+=7;goto B40cce9;
case 0x40ccec:c.instructions+=6;goto B40ccec;
case 0x40ccf0:c.instructions+=5;goto B40ccf0;
case 0x40ccf1:c.instructions+=4;goto B40ccf1;
case 0x40ccf5:c.instructions+=3;goto B40ccf5;
case 0x40ccfb:c.instructions+=2;goto B40ccfb;
case 0x40ccfc:c.instructions+=1;goto B40ccfc;
case 0x40cd00:goto L40cd00;
case 0x40cd01:c.instructions+=22;goto B40cd01;
case 0x40cd05:c.instructions+=21;goto B40cd05;
case 0x40cd09:c.instructions+=20;goto B40cd09;
case 0x40cd0d:c.instructions+=19;goto B40cd0d;
case 0x40cd11:c.instructions+=18;goto B40cd11;
case 0x40cd15:c.instructions+=17;goto B40cd15;
case 0x40cd19:c.instructions+=16;goto B40cd19;
case 0x40cd1f:c.instructions+=15;goto B40cd1f;
case 0x40cd23:c.instructions+=14;goto B40cd23;
case 0x40cd29:c.instructions+=13;goto B40cd29;
case 0x40cd2b:c.instructions+=12;goto B40cd2b;
case 0x40cd2d:c.instructions+=11;goto B40cd2d;
case 0x40cd2f:c.instructions+=10;goto B40cd2f;
case 0x40cd32:c.instructions+=9;goto B40cd32;
case 0x40cd35:c.instructions+=8;goto B40cd35;
case 0x40cd37:c.instructions+=7;goto B40cd37;
case 0x40cd39:c.instructions+=6;goto B40cd39;
case 0x40cd3b:c.instructions+=5;goto B40cd3b;
case 0x40cd3d:c.instructions+=4;goto B40cd3d;
case 0x40cd43:c.instructions+=3;goto B40cd43;
case 0x40cd45:c.instructions+=2;goto B40cd45;
case 0x40cd48:c.instructions+=1;goto B40cd48;
case 0x40cd4a:goto L40cd4a;
case 0x40cd4e:c.instructions+=7;goto B40cd4e;
case 0x40cd51:c.instructions+=6;goto B40cd51;
case 0x40cd55:c.instructions+=5;goto B40cd55;
case 0x40cd59:c.instructions+=4;goto B40cd59;
case 0x40cd5f:c.instructions+=3;goto B40cd5f;
case 0x40cd61:c.instructions+=2;goto B40cd61;
case 0x40cd62:c.instructions+=1;goto B40cd62;
case 0x40cd65:goto L40cd65;
case 0x40cd69:c.instructions+=8;goto B40cd69;
case 0x40cd6c:c.instructions+=7;goto B40cd6c;
case 0x40cd70:c.instructions+=6;goto B40cd70;
case 0x40cd74:c.instructions+=5;goto B40cd74;
case 0x40cd7a:c.instructions+=4;goto B40cd7a;
case 0x40cd7c:c.instructions+=3;goto B40cd7c;
case 0x40cd7e:c.instructions+=2;goto B40cd7e;
case 0x40cd7f:c.instructions+=1;goto B40cd7f;
case 0x40cd90:goto L40cd90;
case 0x40cd93:c.instructions+=5;goto B40cd93;
case 0x40cd94:c.instructions+=4;goto B40cd94;
case 0x40cd98:c.instructions+=3;goto B40cd98;
case 0x40cd99:c.instructions+=2;goto B40cd99;
case 0x40cd9b:c.instructions+=1;goto B40cd9b;
case 0x40cda0:goto L40cda0;
case 0x40cda4:c.instructions+=11;goto B40cda4;
case 0x40cda6:c.instructions+=10;goto B40cda6;
case 0x40cda8:c.instructions+=9;goto B40cda8;
case 0x40cdac:c.instructions+=8;goto B40cdac;
case 0x40cdaf:c.instructions+=7;goto B40cdaf;
case 0x40cdb2:c.instructions+=6;goto B40cdb2;
case 0x40cdb6:c.instructions+=5;goto B40cdb6;
case 0x40cdb8:c.instructions+=4;goto B40cdb8;
case 0x40cdbe:c.instructions+=3;goto B40cdbe;
case 0x40cdc0:c.instructions+=2;goto B40cdc0;
case 0x40cdc3:c.instructions+=1;goto B40cdc3;
case 0x40cdc5:goto L40cdc5;
case 0x40cdc9:c.instructions+=9;goto B40cdc9;
case 0x40cdcc:c.instructions+=8;goto B40cdcc;
case 0x40cdd0:c.instructions+=7;goto B40cdd0;
case 0x40cdd1:c.instructions+=6;goto B40cdd1;
case 0x40cdd5:c.instructions+=5;goto B40cdd5;
case 0x40cddb:c.instructions+=4;goto B40cddb;
case 0x40cddd:c.instructions+=3;goto B40cddd;
case 0x40cddf:c.instructions+=2;goto B40cddf;
case 0x40cde2:c.instructions+=1;goto B40cde2;
case 0x40cde5:goto L40cde5;
case 0x40cde9:c.instructions+=8;goto B40cde9;
case 0x40cdec:c.instructions+=7;goto B40cdec;
case 0x40cdf0:c.instructions+=6;goto B40cdf0;
case 0x40cdf1:c.instructions+=5;goto B40cdf1;
case 0x40cdf5:c.instructions+=4;goto B40cdf5;
case 0x40cdfb:c.instructions+=3;goto B40cdfb;
case 0x40cdfd:c.instructions+=2;goto B40cdfd;
case 0x40ce00:c.instructions+=1;goto B40ce00;
case 0x40ce10:goto L40ce10;
case 0x40ce11:c.instructions+=7;goto B40ce11;
case 0x40ce15:c.instructions+=6;goto B40ce15;
case 0x40ce16:c.instructions+=5;goto B40ce16;
case 0x40ce1c:c.instructions+=4;goto B40ce1c;
case 0x40ce1e:c.instructions+=3;goto B40ce1e;
case 0x40ce20:c.instructions+=2;goto B40ce20;
case 0x40ce23:c.instructions+=1;goto B40ce23;
case 0x40ce25:goto L40ce25;
case 0x40ce29:c.instructions+=8;goto B40ce29;
case 0x40ce2c:c.instructions+=7;goto B40ce2c;
case 0x40ce30:c.instructions+=6;goto B40ce30;
case 0x40ce31:c.instructions+=5;goto B40ce31;
case 0x40ce35:c.instructions+=4;goto B40ce35;
case 0x40ce3b:c.instructions+=3;goto B40ce3b;
case 0x40ce3f:c.instructions+=2;goto B40ce3f;
case 0x40ce40:c.instructions+=1;goto B40ce40;
case 0x40ce43:goto L40ce43;
case 0x40ce45:c.instructions+=1;goto B40ce45;
case 0x40ce4a:goto L40ce4a;
case 0x40ce4c:c.instructions+=1;goto B40ce4c;
case 0x40ce4e:goto L40ce4e;
case 0x40ce52:c.instructions+=9;goto B40ce52;
case 0x40ce55:c.instructions+=8;goto B40ce55;
case 0x40ce59:c.instructions+=7;goto B40ce59;
case 0x40ce5a:c.instructions+=6;goto B40ce5a;
case 0x40ce5e:c.instructions+=5;goto B40ce5e;
case 0x40ce64:c.instructions+=4;goto B40ce64;
case 0x40ce68:c.instructions+=3;goto B40ce68;
case 0x40ce6a:c.instructions+=2;goto B40ce6a;
case 0x40ce6b:c.instructions+=1;goto B40ce6b;
case 0x40ce6e:goto L40ce6e;
case 0x40ce72:c.instructions+=9;goto B40ce72;
case 0x40ce75:c.instructions+=8;goto B40ce75;
case 0x40ce79:c.instructions+=7;goto B40ce79;
case 0x40ce7a:c.instructions+=6;goto B40ce7a;
case 0x40ce7e:c.instructions+=5;goto B40ce7e;
case 0x40ce84:c.instructions+=4;goto B40ce84;
case 0x40ce88:c.instructions+=3;goto B40ce88;
case 0x40ce8a:c.instructions+=2;goto B40ce8a;
case 0x40ce8b:c.instructions+=1;goto B40ce8b;
case 0x40ce90:goto L40ce90;
case 0x40ce91:c.instructions+=21;goto B40ce91;
case 0x40ce95:c.instructions+=20;goto B40ce95;
case 0x40ce99:c.instructions+=19;goto B40ce99;
case 0x40ce9d:c.instructions+=18;goto B40ce9d;
case 0x40cea1:c.instructions+=17;goto B40cea1;
case 0x40cea2:c.instructions+=16;goto B40cea2;
case 0x40cea6:c.instructions+=15;goto B40cea6;
case 0x40ceaa:c.instructions+=14;goto B40ceaa;
case 0x40ceb0:c.instructions+=13;goto B40ceb0;
case 0x40ceb4:c.instructions+=12;goto B40ceb4;
case 0x40ceba:c.instructions+=11;goto B40ceba;
case 0x40cebd:c.instructions+=10;goto B40cebd;
case 0x40cec0:c.instructions+=9;goto B40cec0;
case 0x40cec2:c.instructions+=8;goto B40cec2;
case 0x40cec4:c.instructions+=7;goto B40cec4;
case 0x40cec6:c.instructions+=6;goto B40cec6;
case 0x40cec8:c.instructions+=5;goto B40cec8;
case 0x40ceca:c.instructions+=4;goto B40ceca;
case 0x40cecd:c.instructions+=3;goto B40cecd;
case 0x40cecf:c.instructions+=2;goto B40cecf;
case 0x40ced1:c.instructions+=1;goto B40ced1;
case 0x40ced6:goto L40ced6;
case 0x40ced7:c.instructions+=1;goto B40ced7;
case 0x40cee0:goto L40cee0;
case 0x40cee1:c.instructions+=7;goto B40cee1;
case 0x40cee5:c.instructions+=6;goto B40cee5;
case 0x40cee6:c.instructions+=5;goto B40cee6;
case 0x40ceec:c.instructions+=4;goto B40ceec;
case 0x40ceee:c.instructions+=3;goto B40ceee;
case 0x40cef0:c.instructions+=2;goto B40cef0;
case 0x40cef3:c.instructions+=1;goto B40cef3;
case 0x40cef5:goto L40cef5;
case 0x40cef9:c.instructions+=9;goto B40cef9;
case 0x40cefc:c.instructions+=8;goto B40cefc;
case 0x40cf00:c.instructions+=7;goto B40cf00;
case 0x40cf01:c.instructions+=6;goto B40cf01;
case 0x40cf05:c.instructions+=5;goto B40cf05;
case 0x40cf0b:c.instructions+=4;goto B40cf0b;
case 0x40cf0f:c.instructions+=3;goto B40cf0f;
case 0x40cf11:c.instructions+=2;goto B40cf11;
case 0x40cf12:c.instructions+=1;goto B40cf12;
case 0x40cf15:goto L40cf15;
case 0x40cf17:c.instructions+=1;goto B40cf17;
case 0x40cf1c:goto L40cf1c;
case 0x40cf1e:c.instructions+=1;goto B40cf1e;
case 0x40cf20:goto L40cf20;
case 0x40cf24:c.instructions+=8;goto B40cf24;
case 0x40cf27:c.instructions+=7;goto B40cf27;
case 0x40cf2b:c.instructions+=6;goto B40cf2b;
case 0x40cf2c:c.instructions+=5;goto B40cf2c;
case 0x40cf30:c.instructions+=4;goto B40cf30;
case 0x40cf36:c.instructions+=3;goto B40cf36;
case 0x40cf3a:c.instructions+=2;goto B40cf3a;
case 0x40cf3b:c.instructions+=1;goto B40cf3b;
case 0x40cf3e:goto L40cf3e;
case 0x40cf42:c.instructions+=8;goto B40cf42;
case 0x40cf45:c.instructions+=7;goto B40cf45;
case 0x40cf49:c.instructions+=6;goto B40cf49;
case 0x40cf4a:c.instructions+=5;goto B40cf4a;
case 0x40cf4e:c.instructions+=4;goto B40cf4e;
case 0x40cf54:c.instructions+=3;goto B40cf54;
case 0x40cf58:c.instructions+=2;goto B40cf58;
case 0x40cf59:c.instructions+=1;goto B40cf59;
case 0x40cf60:goto L40cf60;
case 0x40cf63:c.instructions+=1;goto B40cf63;
case 0x40cf70:goto L40cf70;
case 0x40cf71:c.instructions+=2;goto B40cf71;
case 0x40cf73:c.instructions+=1;goto B40cf73;
case 0x40cf78:goto L40cf78;
case 0x40cf7d:c.instructions+=1;goto B40cf7d;
case 0x40cf7f:goto L40cf7f;
case 0x40cf80:c.instructions+=1;goto B40cf80;
case 0x40cf85:goto L40cf85;
case 0x40cf88:goto L40cf88;
case 0x40cf8a:c.instructions+=2;goto B40cf8a;
case 0x40cf8b:c.instructions+=1;goto B40cf8b;
case 0x40cf90:goto L40cf90;
case 0x40cf92:c.instructions+=12;goto B40cf92;
case 0x40cf97:c.instructions+=11;goto B40cf97;
case 0x40cf9d:c.instructions+=10;goto B40cf9d;
case 0x40cf9e:c.instructions+=9;goto B40cf9e;
case 0x40cfa5:c.instructions+=8;goto B40cfa5;
case 0x40cfa6:c.instructions+=7;goto B40cfa6;
case 0x40cfa7:c.instructions+=6;goto B40cfa7;
case 0x40cfa9:c.instructions+=5;goto B40cfa9;
case 0x40cfad:c.instructions+=4;goto B40cfad;
case 0x40cfb3:c.instructions+=3;goto B40cfb3;
case 0x40cfb9:c.instructions+=2;goto B40cfb9;
case 0x40cfc1:c.instructions+=1;goto B40cfc1;
case 0x40cfc6:goto L40cfc6;
case 0x40cfc8:c.instructions+=2;goto B40cfc8;
case 0x40cfd0:c.instructions+=1;goto B40cfd0;
case 0x40cfd5:goto L40cfd5;
case 0x40cfd9:c.instructions+=4;goto B40cfd9;
case 0x40cfda:c.instructions+=3;goto B40cfda;
case 0x40cfe1:c.instructions+=2;goto B40cfe1;
case 0x40cfe4:c.instructions+=1;goto B40cfe4;
case 0x40cff0:goto L40cff0;
case 0x40cff1:c.instructions+=2;goto B40cff1;
case 0x40cff3:c.instructions+=1;goto B40cff3;
case 0x40cff8:goto L40cff8;
case 0x40cffd:c.instructions+=1;goto B40cffd;
case 0x40cfff:goto L40cfff;
default:missing_instruction(c.pc);}
B40c000:L40c000:{c.instructions+=2;NFSU2_TR(0x40c000);
__builtin_memmove((R+4),(R+24),4);
}
B40c002:{NFSU2_TR(0x40c002);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40c007ull));
TAIL_STATIC(0x5f6e20u,5f6);
}
B40c007:L40c007:{c.instructions+=1;NFSU2_TR(0x40c007);
{goto L40c00a;}
}
B40c009:L40c009:{c.instructions+=1;NFSU2_TR(0x40c009);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B40c00a:L40c00a:{c.instructions+=7;NFSU2_TR(0x40c00a);
__builtin_memmove((R+0),gp(0x890080),4);
}
B40c00f:{NFSU2_TR(0x40c00f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40c012:{NFSU2_TR(0x40c012);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40c015:{NFSU2_TR(0x40c015);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B40c016:{NFSU2_TR(0x40c016);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B40c018:{NFSU2_TR(0x40c018);
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
B40c01a:{NFSU2_TR(0x40c01a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x40bfc8u,40b);}
}
B40c01c:L40c01c:{c.instructions+=5;NFSU2_TR(0x40c01c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40c01d:{NFSU2_TR(0x40c01d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40c01e:{NFSU2_TR(0x40c01e);
__builtin_memmove((R+0),(R+12),4);
}
B40c020:{NFSU2_TR(0x40c020);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40c021:{NFSU2_TR(0x40c021);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40c030:L40c030:{c.instructions+=26;NFSU2_TR(0x40c030);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c031:{NFSU2_TR(0x40c031);
__builtin_memmove((R+20),(R+16),4);
}
B40c033:{NFSU2_TR(0x40c033);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B40c036:{NFSU2_TR(0x40c036);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B40c039:{NFSU2_TR(0x40c039);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40c03c:{NFSU2_TR(0x40c03c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c03d:{NFSU2_TR(0x40c03d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c03e:{NFSU2_TR(0x40c03e);
__builtin_memmove((R+24),(R+4),4);
}
B40c040:{NFSU2_TR(0x40c040);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40c043:{NFSU2_TR(0x40c043);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40c046:{NFSU2_TR(0x40c046);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c04a:{NFSU2_TR(0x40c04a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40c04d:{NFSU2_TR(0x40c04d);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c051:{NFSU2_TR(0x40c051);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c055:{NFSU2_TR(0x40c055);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40c059:{NFSU2_TR(0x40c059);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c05a:{NFSU2_TR(0x40c05a);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c05e:{NFSU2_TR(0x40c05e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40c066:{NFSU2_TR(0x40c066);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40c06a:{NFSU2_TR(0x40c06a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c06e:{NFSU2_TR(0x40c06e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40c070:{NFSU2_TR(0x40c070);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B40c072:{NFSU2_TR(0x40c072);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40c078:{NFSU2_TR(0x40c078);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40c07a:{NFSU2_TR(0x40c07a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40c07d:{NFSU2_TR(0x40c07d);
if(r1(R+514)){{goto L40c093;}}
}
B40c07f:L40c07f:{c.instructions+=4;NFSU2_TR(0x40c07f);
{u32 ea_=u32(r4(R+4)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c085:{NFSU2_TR(0x40c085);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40c08b:{NFSU2_TR(0x40c08b);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40c08f:{NFSU2_TR(0x40c08f);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c093:L40c093:{c.instructions+=5;NFSU2_TR(0x40c093);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B40c097:{NFSU2_TR(0x40c097);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c098:{NFSU2_TR(0x40c098);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B40c09c:{NFSU2_TR(0x40c09c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c09d:{NFSU2_TR(0x40c09d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40c0a2ull));
TAIL_STATIC(0x43ce50u,43c);
}
B40c0a2:L40c0a2:{c.instructions+=5;NFSU2_TR(0x40c0a2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B40c0a5:{NFSU2_TR(0x40c0a5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1b18ull))));
}
B40c0ab:{NFSU2_TR(0x40c0ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c0af:{NFSU2_TR(0x40c0af);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40c0b7:{NFSU2_TR(0x40c0b7);
{goto L40c0c0;}
}
B40c0c0:L40c0c0:{c.instructions+=3;NFSU2_TR(0x40c0c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B40c0c4:{NFSU2_TR(0x40c0c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40c0cc:{NFSU2_TR(0x40c0cc);
__builtin_memmove((R+16),(R+16),4);
}
B40c0d0:L40c0d0:{c.instructions+=5;NFSU2_TR(0x40c0d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40c0d3:{NFSU2_TR(0x40c0d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40c0d5:{NFSU2_TR(0x40c0d5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+12),(U+0),1);
}
B40c0d7:{NFSU2_TR(0x40c0d7);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+28)),r1(U+0));
}
B40c0da:{NFSU2_TR(0x40c0da);
if(r1(R+518)){{goto L40c340;}}
}
B40c0e0:L40c0e0:{c.instructions+=3;NFSU2_TR(0x40c0e0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c0e2:{NFSU2_TR(0x40c0e2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c0e3:{NFSU2_TR(0x40c0e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40c0e8ull));
TAIL_STATIC(0x60f530u,60f);
}
B40c0e8:L40c0e8:{c.instructions+=3;NFSU2_TR(0x40c0e8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B40c0eb:{NFSU2_TR(0x40c0eb);
__builtin_memmove((R+4),(R+24),4);
}
B40c0ed:{NFSU2_TR(0x40c0ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40c0f2ull));
TAIL_STATIC(0x5ed430u,5ed);
}
B40c0f2:L40c0f2:{c.instructions+=2;NFSU2_TR(0x40c0f2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40c0f4:{NFSU2_TR(0x40c0f4);
if(r1(R+518)){{goto L40c340;}}
}
B40c0fa:L40c0fa:{c.instructions+=3;NFSU2_TR(0x40c0fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40c0fe:{NFSU2_TR(0x40c0fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40c100:{NFSU2_TR(0x40c100);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40c340;}}
}
B40c106:L40c106:{c.instructions+=14;NFSU2_TR(0x40c106);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40c109:{NFSU2_TR(0x40c109);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40c10c:{NFSU2_TR(0x40c10c);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c110:{NFSU2_TR(0x40c110);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c114:{NFSU2_TR(0x40c114);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40c118:{NFSU2_TR(0x40c118);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c11c:{NFSU2_TR(0x40c11c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c120:{NFSU2_TR(0x40c120);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40c124:{NFSU2_TR(0x40c124);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40c126:{NFSU2_TR(0x40c126);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B40c128:{NFSU2_TR(0x40c128);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40c12e:{NFSU2_TR(0x40c12e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40c130:{NFSU2_TR(0x40c130);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40c133:{NFSU2_TR(0x40c133);
if(r1(R+514)){{goto L40c149;}}
}
B40c135:L40c135:{c.instructions+=4;NFSU2_TR(0x40c135);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c13b:{NFSU2_TR(0x40c13b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40c141:{NFSU2_TR(0x40c141);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40c145:{NFSU2_TR(0x40c145);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c149:L40c149:{c.instructions+=5;NFSU2_TR(0x40c149);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B40c14d:{NFSU2_TR(0x40c14d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c14e:{NFSU2_TR(0x40c14e);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B40c152:{NFSU2_TR(0x40c152);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c153:{NFSU2_TR(0x40c153);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40c158ull));
TAIL_STATIC(0x43ce50u,43c);
}
B40c158:L40c158:{c.instructions+=3;NFSU2_TR(0x40c158);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40c15c:{NFSU2_TR(0x40c15c);
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
B40c15f:{NFSU2_TR(0x40c15f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40c164ull));
TAIL_STATIC(0x401890u,401);
}
B40c164:L40c164:{c.instructions+=13;NFSU2_TR(0x40c164);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c167:{NFSU2_TR(0x40c167);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40c169:{NFSU2_TR(0x40c169);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c16c:{NFSU2_TR(0x40c16c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40c16f:{NFSU2_TR(0x40c16f);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c173:{NFSU2_TR(0x40c173);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40c175:{NFSU2_TR(0x40c175);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B40c177:{NFSU2_TR(0x40c177);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40c17b:{NFSU2_TR(0x40c17b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40c17d:{NFSU2_TR(0x40c17d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40c183:{NFSU2_TR(0x40c183);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40c185:{NFSU2_TR(0x40c185);
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
B40c188:{NFSU2_TR(0x40c188);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40c33c;}}
}
B40c18e:L40c18e:{c.instructions+=11;NFSU2_TR(0x40c18e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B40c190:{NFSU2_TR(0x40c190);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40c194:{NFSU2_TR(0x40c194);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40c196:{NFSU2_TR(0x40c196);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B40c198:{NFSU2_TR(0x40c198);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B40c19a:{NFSU2_TR(0x40c19a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40c19c:{NFSU2_TR(0x40c19c);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B40c19e:{NFSU2_TR(0x40c19e);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B40c1a0:{NFSU2_TR(0x40c1a0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40c1a2:{NFSU2_TR(0x40c1a2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40c1a6:{NFSU2_TR(0x40c1a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40c1abull));
TAIL_STATIC(0x401890u,401);
}
B40c1ab:L40c1ab:{c.instructions+=8;NFSU2_TR(0x40c1ab);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c1ae:{NFSU2_TR(0x40c1ae);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40c1b0:{NFSU2_TR(0x40c1b0);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40c1b3:{NFSU2_TR(0x40c1b3);
__builtin_memmove((R+0),gp(0x783ce4),4);
}
B40c1b8:{NFSU2_TR(0x40c1b8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c1bc:{NFSU2_TR(0x40c1bc);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B40c1be:{NFSU2_TR(0x40c1be);
{u32 ea_=u32(u32(7879904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c1c4:{NFSU2_TR(0x40c1c4);
if(r1(R+518)){{goto L40c1e4;}}
}
B40c1c6:L40c1c6:{c.instructions+=6;NFSU2_TR(0x40c1c6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40c1c8:{NFSU2_TR(0x40c1c8);
{u32 ea_=u32(u32(7879904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c1ce:{NFSU2_TR(0x40c1ce);
{u32 ea_=u32(u32(7879912u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40c1d4:{NFSU2_TR(0x40c1d4);
{u32 ea_=u32(u32(7879912u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c1da:{NFSU2_TR(0x40c1da);
{u32 ea_=u32(u32(7879908u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40c1e0:{NFSU2_TR(0x40c1e0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40c1e4:L40c1e4:{c.instructions+=5;NFSU2_TR(0x40c1e4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c1e8:{NFSU2_TR(0x40c1e8);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40c1ea:{NFSU2_TR(0x40c1ea);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40c1ec:{NFSU2_TR(0x40c1ec);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40c1ef:{NFSU2_TR(0x40c1ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40c1f7;}}
}
B40c1f1:L40c1f1:{c.instructions+=2;NFSU2_TR(0x40c1f1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40c1f3:{NFSU2_TR(0x40c1f3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c1f7:L40c1f7:{c.instructions+=5;NFSU2_TR(0x40c1f7);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c1fb:{NFSU2_TR(0x40c1fb);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40c1fd:{NFSU2_TR(0x40c1fd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40c1ff:{NFSU2_TR(0x40c1ff);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40c202:{NFSU2_TR(0x40c202);
if(r1(R+514)){{goto L40c20a;}}
}
B40c204:L40c204:{c.instructions+=2;NFSU2_TR(0x40c204);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40c206:{NFSU2_TR(0x40c206);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c20a:L40c20a:{c.instructions+=6;NFSU2_TR(0x40c20a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c20e:{NFSU2_TR(0x40c20e);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40c210:{NFSU2_TR(0x40c210);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40c212:{NFSU2_TR(0x40c212);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40c214:{NFSU2_TR(0x40c214);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40c217:{NFSU2_TR(0x40c217);
if(r1(R+514)){{goto L40c33e;}}
}
B40c21d:L40c21d:{c.instructions+=4;NFSU2_TR(0x40c21d);
{u32 ea_=u32(u32(7879940u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40c223:{NFSU2_TR(0x40c223);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40c225:{NFSU2_TR(0x40c225);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40c228:{NFSU2_TR(0x40c228);
if(r1(R+514)){{goto L40c340;}}
}
B40c22e:L40c22e:{c.instructions+=13;NFSU2_TR(0x40c22e);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40c230:{NFSU2_TR(0x40c230);
{u32 ea_=u32(r4(R+24)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c236:{NFSU2_TR(0x40c236);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40c23a:{NFSU2_TR(0x40c23a);
__builtin_memmove((R+8),gp(0x783cf0),4);
}
B40c240:{NFSU2_TR(0x40c240);
__builtin_memmove((R+0),gp(0x783cf4),4);
}
B40c245:{NFSU2_TR(0x40c245);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40c24b:{NFSU2_TR(0x40c24b);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c251:{NFSU2_TR(0x40c251);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c255:{NFSU2_TR(0x40c255);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40c25b:{NFSU2_TR(0x40c25b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c25f:{NFSU2_TR(0x40c25f);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B40c261:{NFSU2_TR(0x40c261);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40c265:{NFSU2_TR(0x40c265);
if(r1(R+518)){{goto L40c287;}}
}
B40c267:L40c267:{c.instructions+=6;NFSU2_TR(0x40c267);
{u32 ea_=u32(u32(7879920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c26d:{NFSU2_TR(0x40c26d);
{u32 ea_=u32(u32(7879928u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40c273:{NFSU2_TR(0x40c273);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40c277:{NFSU2_TR(0x40c277);
{u32 ea_=u32(u32(7879928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c27d:{NFSU2_TR(0x40c27d);
{u32 ea_=u32(u32(7879924u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40c283:{NFSU2_TR(0x40c283);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40c287:L40c287:{c.instructions+=4;NFSU2_TR(0x40c287);
{u32 ea_=u32(u32(7879916u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40c28d:{NFSU2_TR(0x40c28d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40c28f:{NFSU2_TR(0x40c28f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40c292:{NFSU2_TR(0x40c292);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40c340;}}
}
B40c298:L40c298:{c.instructions+=5;NFSU2_TR(0x40c298);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c29c:{NFSU2_TR(0x40c29c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40c2a0:{NFSU2_TR(0x40c2a0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40c2a2:{NFSU2_TR(0x40c2a2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40c2a5:{NFSU2_TR(0x40c2a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40c2ad;}}
}
B40c2a7:L40c2a7:{c.instructions+=2;NFSU2_TR(0x40c2a7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c2ab:{NFSU2_TR(0x40c2ab);
{goto L40c2b1;}
}
B40c2ad:L40c2ad:{c.instructions+=1;NFSU2_TR(0x40c2ad);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c2b1:L40c2b1:{c.instructions+=5;NFSU2_TR(0x40c2b1);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c2b5:{NFSU2_TR(0x40c2b5);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40c2b7:{NFSU2_TR(0x40c2b7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40c2b9:{NFSU2_TR(0x40c2b9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40c2bc:{NFSU2_TR(0x40c2bc);
if(r1(R+514)){{goto L40c2c4;}}
}
B40c2be:L40c2be:{c.instructions+=2;NFSU2_TR(0x40c2be);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40c2c0:{NFSU2_TR(0x40c2c0);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c2c4:L40c2c4:{c.instructions+=6;NFSU2_TR(0x40c2c4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c2c8:{NFSU2_TR(0x40c2c8);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40c2ca:{NFSU2_TR(0x40c2ca);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40c2cc:{NFSU2_TR(0x40c2cc);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40c2ce:{NFSU2_TR(0x40c2ce);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40c2d1:{NFSU2_TR(0x40c2d1);
if(r1(R+514)){{goto L40c340;}}
}
B40c2d3:L40c2d3:{c.instructions+=9;NFSU2_TR(0x40c2d3);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c2d7:{NFSU2_TR(0x40c2d7);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40c2db:{NFSU2_TR(0x40c2db);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c2df:{NFSU2_TR(0x40c2df);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40c2e3:{NFSU2_TR(0x40c2e3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40c2e5:{NFSU2_TR(0x40c2e5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40c2e9:{NFSU2_TR(0x40c2e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40c2ed:{NFSU2_TR(0x40c2ed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c2ee:{NFSU2_TR(0x40c2ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40c2f3ull));
TAIL_STATIC(0x43c490u,43c);
}
B40c2f3:L40c2f3:{c.instructions+=10;NFSU2_TR(0x40c2f3);
w4(R+8,u32(0x4000ull));
}
B40c2f8:{NFSU2_TR(0x40c2f8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B40c2fb:{NFSU2_TR(0x40c2fb);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B40c2fd:{NFSU2_TR(0x40c2fd);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40c2ff:{NFSU2_TR(0x40c2ff);
w4(R+0,u32(r2(R+8)));
}
B40c302:{NFSU2_TR(0x40c302);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c306:{NFSU2_TR(0x40c306);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40c30a:{NFSU2_TR(0x40c30a);
{u32 ea_=u32(u32(7881288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40c310:{NFSU2_TR(0x40c310);
{u32 ea_=u32(u32(7879932u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c316:{NFSU2_TR(0x40c316);
if(r1(R+518)){{goto L40c326;}}
}
B40c318:L40c318:{c.instructions+=3;NFSU2_TR(0x40c318);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40c31a:{NFSU2_TR(0x40c31a);
{u32 ea_=u32(u32(7879936u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c320:{NFSU2_TR(0x40c320);
{u32 ea_=u32(u32(7879932u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40c326:L40c326:{c.instructions+=6;NFSU2_TR(0x40c326);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B40c328:{NFSU2_TR(0x40c328);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40c32a:{NFSU2_TR(0x40c32a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40c32c:{NFSU2_TR(0x40c32c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40c32e:{NFSU2_TR(0x40c32e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40c331:{NFSU2_TR(0x40c331);
if(r1(R+514)){{goto L40c340;}}
}
B40c333:L40c333:{c.instructions+=3;NFSU2_TR(0x40c333);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c337:{NFSU2_TR(0x40c337);
u8 U[1];
w1(U+0,u8(0x1ull));
s1(u32(r4(R+28)),r1(U+0));
}
B40c33a:{NFSU2_TR(0x40c33a);
{goto L40c340;}
}
B40c33c:L40c33c:{c.instructions+=1;NFSU2_TR(0x40c33c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40c33e:L40c33e:{c.instructions+=1;NFSU2_TR(0x40c33e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40c340:L40c340:{c.instructions+=5;NFSU2_TR(0x40c340);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40c344:{NFSU2_TR(0x40c344);
w1(R+512,carry<u32>(r4(R+28),u32(0x10ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B40c347:{NFSU2_TR(0x40c347);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B40c348:{NFSU2_TR(0x40c348);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c34c:{NFSU2_TR(0x40c34c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40c0d0u);}goto L40c0d0;}}
}
B40c352:L40c352:{c.instructions+=2;NFSU2_TR(0x40c352);
u8 U[14];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
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
B40c356:{NFSU2_TR(0x40c356);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40c0c0u);}goto L40c0c0;}}
}
B40c35c:L40c35c:{c.instructions+=7;NFSU2_TR(0x40c35c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40c360:{NFSU2_TR(0x40c360);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40c361:{NFSU2_TR(0x40c361);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40c362:{NFSU2_TR(0x40c362);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40c363:{NFSU2_TR(0x40c363);
__builtin_memmove((R+16),(R+20),4);
}
B40c365:{NFSU2_TR(0x40c365);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40c366:{NFSU2_TR(0x40c366);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40c370:L40c370:{c.instructions+=11;NFSU2_TR(0x40c370);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40c374:{NFSU2_TR(0x40c374);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c375:{NFSU2_TR(0x40c375);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B40c378:{NFSU2_TR(0x40c378);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B40c37b:{NFSU2_TR(0x40c37b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B40c37e:{NFSU2_TR(0x40c37e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c380:{NFSU2_TR(0x40c380);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c382:{NFSU2_TR(0x40c382);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40c385:{NFSU2_TR(0x40c385);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c386:{NFSU2_TR(0x40c386);
w4(R+4,u32(0x8a3288ull));
}
B40c38b:{NFSU2_TR(0x40c38b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40c390ull));
TAIL_STATIC(0x63bc70u,63b);
}
B40c390:L40c390:{c.instructions+=7;NFSU2_TR(0x40c390);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8f8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c396:{NFSU2_TR(0x40c396);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B40c39c:{NFSU2_TR(0x40c39c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c39e:{NFSU2_TR(0x40c39e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c3a0:{NFSU2_TR(0x40c3a0);
w4(R+4,u32(0x8a3288ull));
}
B40c3a5:{NFSU2_TR(0x40c3a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c3ab:{NFSU2_TR(0x40c3ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40c3b0ull));
TAIL_STATIC(0x63bcd0u,63b);
}
B40c3b0:L40c3b0:{c.instructions+=2;NFSU2_TR(0x40c3b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40c3b1:{NFSU2_TR(0x40c3b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40c3c0:L40c3c0:{c.instructions+=7;NFSU2_TR(0x40c3c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40c3c4:{NFSU2_TR(0x40c3c4);
u8 U[12];
w4(U+0,u32(u32(u32(0x9ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B40c3c8:{NFSU2_TR(0x40c3c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B40c3cb:{NFSU2_TR(0x40c3cb);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B40c3cd:{NFSU2_TR(0x40c3cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40c3cf:{NFSU2_TR(0x40c3cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40c3d1:{NFSU2_TR(0x40c3d1);
if(r1(R+518)){{goto L40c405;}}
}
B40c3d3:L40c3d3:{c.instructions+=2;NFSU2_TR(0x40c3d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40c3d8:{NFSU2_TR(0x40c3d8);
if(r1(R+518)){{goto L40c405;}}
}
B40c3da:L40c3da:{c.instructions+=9;NFSU2_TR(0x40c3da);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B40c3e0:{NFSU2_TR(0x40c3e0);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B40c3e2:{NFSU2_TR(0x40c3e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c3e6:{NFSU2_TR(0x40c3e6);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40c3ea:{NFSU2_TR(0x40c3ea);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40c3f0:{NFSU2_TR(0x40c3f0);
{u32 ea_=u32(u32(7879900u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40c3f6:{NFSU2_TR(0x40c3f6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40c3f8:{NFSU2_TR(0x40c3f8);
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
B40c3fb:{NFSU2_TR(0x40c3fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40c405;}}
}
B40c3fd:L40c3fd:{c.instructions+=2;NFSU2_TR(0x40c3fd);
w4(R+0,u32(0x1ull));
}
B40c402:{NFSU2_TR(0x40c402);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40c405:L40c405:{c.instructions+=2;NFSU2_TR(0x40c405);
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
B40c407:{NFSU2_TR(0x40c407);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40c410:L40c410:{c.instructions+=5;NFSU2_TR(0x40c410);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c411:{NFSU2_TR(0x40c411);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c412:{NFSU2_TR(0x40c412);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8f8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40c418:{NFSU2_TR(0x40c418);
w4(R+28,u32(0x3ull));
}
B40c41d:{NFSU2_TR(0x40c41d);
__builtin_memmove((R+4),(R+4),4);
}
B40c420:L40c420:{c.instructions+=4;NFSU2_TR(0x40c420);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40c422:{NFSU2_TR(0x40c422);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c423:{NFSU2_TR(0x40c423);
w4(R+4,u32(0x8a3288ull));
}
B40c428:{NFSU2_TR(0x40c428);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40c42dull));
TAIL_STATIC(0x61ca50u,61c);
}
B40c42d:L40c42d:{c.instructions+=3;NFSU2_TR(0x40c42d);
w1(R+512,carry<u32>(r4(R+24),u32(0x900ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x900ull))));
}
B40c433:{NFSU2_TR(0x40c433);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40c434:{NFSU2_TR(0x40c434);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40c420u);}goto L40c420;}}
}
B40c436:L40c436:{c.instructions+=3;NFSU2_TR(0x40c436);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40c437:{NFSU2_TR(0x40c437);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40c438:{NFSU2_TR(0x40c438);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40c440:L40c440:{c.instructions+=4;NFSU2_TR(0x40c440);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40c442:{NFSU2_TR(0x40c442);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B40c444:{NFSU2_TR(0x40c444);
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
B40c446:{NFSU2_TR(0x40c446);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40c4c5;}}
}
B40c448:L40c448:{c.instructions+=35;NFSU2_TR(0x40c448);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40c44c:{NFSU2_TR(0x40c44c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c44f:{NFSU2_TR(0x40c44f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c452:{NFSU2_TR(0x40c452);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40c454:{NFSU2_TR(0x40c454);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c457:{NFSU2_TR(0x40c457);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B40c459:{NFSU2_TR(0x40c459);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40c45d:{NFSU2_TR(0x40c45d);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40c460:{NFSU2_TR(0x40c460);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40c463:{NFSU2_TR(0x40c463);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c466:{NFSU2_TR(0x40c466);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40c468:{NFSU2_TR(0x40c468);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c46b:{NFSU2_TR(0x40c46b);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40c46e:{NFSU2_TR(0x40c46e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40c472:{NFSU2_TR(0x40c472);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c475:{NFSU2_TR(0x40c475);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c478:{NFSU2_TR(0x40c478);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40c47a:{NFSU2_TR(0x40c47a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c47d:{NFSU2_TR(0x40c47d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B40c47f:{NFSU2_TR(0x40c47f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40c483:{NFSU2_TR(0x40c483);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40c486:{NFSU2_TR(0x40c486);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40c489:{NFSU2_TR(0x40c489);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x16d4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c48f:{NFSU2_TR(0x40c48f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40c493:{NFSU2_TR(0x40c493);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x16d0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c499:{NFSU2_TR(0x40c499);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40c49d:{NFSU2_TR(0x40c49d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17a4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c4a3:{NFSU2_TR(0x40c4a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c4a6:{NFSU2_TR(0x40c4a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17a0ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40c4ac:{NFSU2_TR(0x40c4ac);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B40c4b2:{NFSU2_TR(0x40c4b2);
w4(R+0,u32(0x1ull));
}
B40c4b7:{NFSU2_TR(0x40c4b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17a8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c4bd:{NFSU2_TR(0x40c4bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B40c4bf:{NFSU2_TR(0x40c4bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c4c2:{NFSU2_TR(0x40c4c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40c4c5:L40c4c5:{c.instructions+=2;NFSU2_TR(0x40c4c5);
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
B40c4c7:{NFSU2_TR(0x40c4c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40c4d0:L40c4d0:{c.instructions+=8;NFSU2_TR(0x40c4d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c4d1:{NFSU2_TR(0x40c4d1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c4d2:{NFSU2_TR(0x40c4d2);
__builtin_memmove((R+20),(R+4),4);
}
B40c4d4:{NFSU2_TR(0x40c4d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x16c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40c4da:{NFSU2_TR(0x40c4da);
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
B40c4dc:{NFSU2_TR(0x40c4dc);
w1(R+4,u8(0x1ull));
}
B40c4de:{NFSU2_TR(0x40c4de);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40c4e6:{NFSU2_TR(0x40c4e6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L40c546;}}
}
B40c4e8:L40c4e8:{c.instructions+=4;NFSU2_TR(0x40c4e8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c4e9:{NFSU2_TR(0x40c4e9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c4ea:{NFSU2_TR(0x40c4ea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c4eb:{NFSU2_TR(0x40c4eb);
{goto L40c4f0;}
}
B40c4f0:L40c4f0:{c.instructions+=2;NFSU2_TR(0x40c4f0);
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
B40c4f2:{NFSU2_TR(0x40c4f2);
if(r1(R+518)){{goto L40c543;}}
}
B40c4f4:L40c4f4:{c.instructions+=5;NFSU2_TR(0x40c4f4);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B40c4f6:{NFSU2_TR(0x40c4f6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B40c4f8:{NFSU2_TR(0x40c4f8);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B40c4f9:{NFSU2_TR(0x40c4f9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40c4fb:{NFSU2_TR(0x40c4fb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L40c530;}}
}
B40c4fd:L40c4fd:{c.instructions+=1;NFSU2_TR(0x40c4fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x48ull))));
__builtin_memmove((R+8),(U+0),4);
}
B40c500:L40c500:{c.instructions+=10;NFSU2_TR(0x40c500);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B40c502:{NFSU2_TR(0x40c502);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B40c505:{NFSU2_TR(0x40c505);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c508:{NFSU2_TR(0x40c508);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40c50b:{NFSU2_TR(0x40c50b);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c50e:{NFSU2_TR(0x40c50e);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40c511:{NFSU2_TR(0x40c511);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B40c513:{NFSU2_TR(0x40c513);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40c515:{NFSU2_TR(0x40c515);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40c518:{NFSU2_TR(0x40c518);
if(r1(R+514)){{goto L40c521;}}
}
B40c51a:L40c51a:{c.instructions+=3;NFSU2_TR(0x40c51a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c51d:{NFSU2_TR(0x40c51d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+8)),r4(U+0));
}
B40c51f:{NFSU2_TR(0x40c51f);
w1(R+4,u8(0x1ull));
}
B40c521:L40c521:{c.instructions+=6;NFSU2_TR(0x40c521);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x16c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40c527:{NFSU2_TR(0x40c527);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B40c528:{NFSU2_TR(0x40c528);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B40c52b:{NFSU2_TR(0x40c52b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B40c52c:{NFSU2_TR(0x40c52c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40c52e:{NFSU2_TR(0x40c52e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40c500u);}goto L40c500;}}
}
B40c530:L40c530:{c.instructions+=6;NFSU2_TR(0x40c530);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40c534:{NFSU2_TR(0x40c534);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x16c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40c53a:{NFSU2_TR(0x40c53a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B40c53b:{NFSU2_TR(0x40c53b);
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
B40c53d:{NFSU2_TR(0x40c53d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c541:{NFSU2_TR(0x40c541);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40c4f0u);}goto L40c4f0;}}
}
B40c543:L40c543:{c.instructions+=3;NFSU2_TR(0x40c543);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40c544:{NFSU2_TR(0x40c544);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40c545:{NFSU2_TR(0x40c545);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40c546:L40c546:{c.instructions+=3;NFSU2_TR(0x40c546);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40c547:{NFSU2_TR(0x40c547);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40c548:{NFSU2_TR(0x40c548);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40c550:L40c550:{c.instructions+=10;NFSU2_TR(0x40c550);
__builtin_memmove((R+0),(R+4),4);
}
B40c552:{NFSU2_TR(0x40c552);
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
B40c554:{NFSU2_TR(0x40c554);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B40c556:{NFSU2_TR(0x40c556);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c559:{NFSU2_TR(0x40c559);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40c55f:{NFSU2_TR(0x40c55f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb9ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40c565:{NFSU2_TR(0x40c565);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbaull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40c56b:{NFSU2_TR(0x40c56b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbbull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40c571:{NFSU2_TR(0x40c571);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40c577:{NFSU2_TR(0x40c577);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40c580:L40c580:{c.instructions+=12;NFSU2_TR(0x40c580);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c581:{NFSU2_TR(0x40c581);
__builtin_memmove((R+24),(R+4),4);
}
B40c583:{NFSU2_TR(0x40c583);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B40c58a:{NFSU2_TR(0x40c58a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40c58e:{NFSU2_TR(0x40c58e);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B40c592:{NFSU2_TR(0x40c592);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B40c599:{NFSU2_TR(0x40c599);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B40c59d:{NFSU2_TR(0x40c59d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c59e:{NFSU2_TR(0x40c59e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B40c5a2:{NFSU2_TR(0x40c5a2);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40c5a4:{NFSU2_TR(0x40c5a4);
u8 U[13];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B40c5a8:{NFSU2_TR(0x40c5a8);
if(r1(R+518)){{goto L40c5e2;}}
}
B40c5aa:L40c5aa:{c.instructions+=4;NFSU2_TR(0x40c5aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40c5ae:{NFSU2_TR(0x40c5ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c5af:{NFSU2_TR(0x40c5af);
__builtin_memmove((R+4),(R+28),4);
}
B40c5b1:{NFSU2_TR(0x40c5b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40c5b6ull));
TAIL_STATIC(0x5dcbe0u,5dc);
}
B40c5b6:L40c5b6:{c.instructions+=2;NFSU2_TR(0x40c5b6);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40c5b8:{NFSU2_TR(0x40c5b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40c5e2;}}
}
B40c5ba:L40c5ba:{c.instructions+=10;NFSU2_TR(0x40c5ba);
w1(R+512,u8((r4(R+28))<(m4(0x883db0))));
w4(R+28,u32(u32(r4(R+28))-u32(m4(0x883db0))));
}
B40c5c0:{NFSU2_TR(0x40c5c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B40c5c7:{NFSU2_TR(0x40c5c7);
u8 U[27];
w4(U+19,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
__builtin_memmove((U+23),(R+28),4);
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+19))));
w1(U+5,u8((r4(U+19))==(u32(0x0ull))));
w4(U+6,u32(u32(r4(U+19))-u32(u32(0x1ull))));
w4(U+10,sar<u32>(r4(U+23),u64(r4(U+6))));
w4(U+14,u32(u32(r4(U+10))&u32(u32(0x1ull))));
w1(U+18,u8((r4(U+14))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+5),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+5))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+18))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B40c5ca:{NFSU2_TR(0x40c5ca);
u8 U[14];
w4(U+0,u32(u32(u32(0x26ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),2);
s2(u32(r4(U+8)),r2(U+12));
}
B40c5cf:{NFSU2_TR(0x40c5cf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B40c5d5:{NFSU2_TR(0x40c5d5);
u8 U[3];
w1(R+523,scarry<u8>(r1(R+0),u8(0x1ull)));
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40c5d7:{NFSU2_TR(0x40c5d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40c5d8:{NFSU2_TR(0x40c5d8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40c5de:{NFSU2_TR(0x40c5de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40c5df:{NFSU2_TR(0x40c5df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40c5e2:L40c5e2:{c.instructions+=8;NFSU2_TR(0x40c5e2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B40c5e9:{NFSU2_TR(0x40c5e9);
u8 U[14];
w4(U+0,u32(u32(u32(0x26ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w2(U+12,u16(0xffffull));
s2(u32(r4(U+8)),r2(U+12));
}
B40c5f0:{NFSU2_TR(0x40c5f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B40c5f6:{NFSU2_TR(0x40c5f6);
u8 U[3];
w1(R+523,scarry<u8>(r1(R+0),u8(0x1ull)));
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40c5f8:{NFSU2_TR(0x40c5f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40c5f9:{NFSU2_TR(0x40c5f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40c5ff:{NFSU2_TR(0x40c5ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40c600:{NFSU2_TR(0x40c600);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40c610:L40c610:{c.instructions+=20;NFSU2_TR(0x40c610);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40c614:{NFSU2_TR(0x40c614);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40c617:{NFSU2_TR(0x40c617);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c61a:{NFSU2_TR(0x40c61a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B40c61d:{NFSU2_TR(0x40c61d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c61e:{NFSU2_TR(0x40c61e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40c624:{NFSU2_TR(0x40c624);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40c628:{NFSU2_TR(0x40c628);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B40c62a:{NFSU2_TR(0x40c62a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40c630:{NFSU2_TR(0x40c630);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c633:{NFSU2_TR(0x40c633);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c636:{NFSU2_TR(0x40c636);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B40c638:{NFSU2_TR(0x40c638);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c639:{NFSU2_TR(0x40c639);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B40c63b:{NFSU2_TR(0x40c63b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B40c63e:{NFSU2_TR(0x40c63e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c63f:{NFSU2_TR(0x40c63f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbbull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40c645:{NFSU2_TR(0x40c645);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40c648:{NFSU2_TR(0x40c648);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40c64b:{NFSU2_TR(0x40c64b);
{goto L40c650;}
}
B40c650:L40c650:{c.instructions+=3;NFSU2_TR(0x40c650);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40c653:{NFSU2_TR(0x40c653);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40c656:{NFSU2_TR(0x40c656);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40c65d;}}
}
B40c658:L40c658:{c.instructions+=1;NFSU2_TR(0x40c658);
w4(R+8,u32(0x40ull));
}
B40c65d:L40c65d:{c.instructions+=2;NFSU2_TR(0x40c65d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40c65f:{NFSU2_TR(0x40c65f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40c670;}}
}
B40c661:L40c661:{c.instructions+=6;NFSU2_TR(0x40c661);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((R+8),(U+0),2);
}
B40c664:{NFSU2_TR(0x40c664);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+28)),r2(U+0));
}
B40c667:{NFSU2_TR(0x40c667);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B40c668:{NFSU2_TR(0x40c668);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B40c66b:{NFSU2_TR(0x40c66b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B40c66e:{NFSU2_TR(0x40c66e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40c650u);}goto L40c650;}
}
B40c670:L40c670:{c.instructions+=6;NFSU2_TR(0x40c670);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40c673:{NFSU2_TR(0x40c673);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x40ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x40ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40c676:{NFSU2_TR(0x40c676);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40c677:{NFSU2_TR(0x40c677);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40c678:{NFSU2_TR(0x40c678);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40c679:{NFSU2_TR(0x40c679);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40c680;}}
}
B40c67b:L40c67b:{c.instructions+=1;NFSU2_TR(0x40c67b);
w4(R+0,u32(0x40ull));
}
B40c680:L40c680:{c.instructions+=11;NFSU2_TR(0x40c680);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb9ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40c686:{NFSU2_TR(0x40c686);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40c68a:{NFSU2_TR(0x40c68a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c68d:{NFSU2_TR(0x40c68d);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c690:{NFSU2_TR(0x40c690);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40c692:{NFSU2_TR(0x40c692);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B40c694:{NFSU2_TR(0x40c694);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c697:{NFSU2_TR(0x40c697);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40c69a:{NFSU2_TR(0x40c69a);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40c69d:{NFSU2_TR(0x40c69d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbaull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B40c6a4:{NFSU2_TR(0x40c6a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40c6b0:L40c6b0:{c.instructions+=3;NFSU2_TR(0x40c6b0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B40c6b6:{NFSU2_TR(0x40c6b6);
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
B40c6b8:{NFSU2_TR(0x40c6b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40c711;}}
}
B40c6ba:L40c6ba:{c.instructions+=18;NFSU2_TR(0x40c6ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40c6c0:{NFSU2_TR(0x40c6c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B40c6c3:{NFSU2_TR(0x40c6c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B40c6c6:{NFSU2_TR(0x40c6c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40c6ca:{NFSU2_TR(0x40c6ca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c6cb:{NFSU2_TR(0x40c6cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B40c6cd:{NFSU2_TR(0x40c6cd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B40c6cf:{NFSU2_TR(0x40c6cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40c6d2:{NFSU2_TR(0x40c6d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c6d5:{NFSU2_TR(0x40c6d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40c6d8:{NFSU2_TR(0x40c6d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c6db:{NFSU2_TR(0x40c6db);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40c6e1:{NFSU2_TR(0x40c6e1);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B40c6e2:{NFSU2_TR(0x40c6e2);
__builtin_memmove((R+0),(R+8),4);
}
B40c6e4:{NFSU2_TR(0x40c6e4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x14ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40c6e7:{NFSU2_TR(0x40c6e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c6ed:{NFSU2_TR(0x40c6ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40c6ee:{NFSU2_TR(0x40c6ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40c6fa;}}
}
B40c6f0:L40c6f0:{c.instructions+=1;NFSU2_TR(0x40c6f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40c6fa:L40c6fa:{c.instructions+=5;NFSU2_TR(0x40c6fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40c700:{NFSU2_TR(0x40c700);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40c706:{NFSU2_TR(0x40c706);
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
B40c708:{NFSU2_TR(0x40c708);
__builtin_memmove((R+0),(R+518),1);
}
B40c70b:{NFSU2_TR(0x40c70b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40c711:L40c711:{c.instructions+=1;NFSU2_TR(0x40c711);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40c720:L40c720:{c.instructions+=3;NFSU2_TR(0x40c720);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B40c726:{NFSU2_TR(0x40c726);
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
B40c728:{NFSU2_TR(0x40c728);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40c778;}}
}
B40c72a:L40c72a:{c.instructions+=3;NFSU2_TR(0x40c72a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40c730:{NFSU2_TR(0x40c730);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40c732:{NFSU2_TR(0x40c732);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40c740;}}
}
B40c734:L40c734:{c.instructions+=2;NFSU2_TR(0x40c734);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf0ull))));
w4(U+4,u32(0x13ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40c73e:{NFSU2_TR(0x40c73e);
{goto L40c747;}
}
B40c740:L40c740:{c.instructions+=2;NFSU2_TR(0x40c740);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B40c741:{NFSU2_TR(0x40c741);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c747:L40c747:{c.instructions+=14;NFSU2_TR(0x40c747);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40c74d:{NFSU2_TR(0x40c74d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40c753:{NFSU2_TR(0x40c753);
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
B40c755:{NFSU2_TR(0x40c755);
__builtin_memmove((R+8),(R+518),1);
}
B40c758:{NFSU2_TR(0x40c758);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40c75e:{NFSU2_TR(0x40c75e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40c762:{NFSU2_TR(0x40c762);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B40c765:{NFSU2_TR(0x40c765);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B40c768:{NFSU2_TR(0x40c768);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40c76a:{NFSU2_TR(0x40c76a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B40c76c:{NFSU2_TR(0x40c76c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40c76f:{NFSU2_TR(0x40c76f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c772:{NFSU2_TR(0x40c772);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40c775:{NFSU2_TR(0x40c775);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c778:L40c778:{c.instructions+=1;NFSU2_TR(0x40c778);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40c780:L40c780:{c.instructions+=4;NFSU2_TR(0x40c780);
__builtin_memmove((R+0),(R+4),4);
}
B40c782:{NFSU2_TR(0x40c782);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x15e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B40c788:{NFSU2_TR(0x40c788);
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
B40c78a:{NFSU2_TR(0x40c78a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40c7db;}}
}
B40c78c:L40c78c:{c.instructions+=7;NFSU2_TR(0x40c78c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c78d:{NFSU2_TR(0x40c78d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40c791:{NFSU2_TR(0x40c791);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c792:{NFSU2_TR(0x40c792);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x15e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B40c798:{NFSU2_TR(0x40c798);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B40c79b:{NFSU2_TR(0x40c79b);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B40c79d:{NFSU2_TR(0x40c79d);
w4(R+4,u32(0xeull));
}
B40c7a2:L40c7a2:{c.instructions+=1;NFSU2_TR(0x40c7a2);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L40c7a4;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40c7a2u);}goto L40c7a2;}
}
B40c7a4:L40c7a4:{c.instructions+=8;NFSU2_TR(0x40c7a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x15e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40c7aa:{NFSU2_TR(0x40c7aa);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B40c7ab:{NFSU2_TR(0x40c7ab);
__builtin_memmove((R+4),(R+8),4);
}
B40c7ad:{NFSU2_TR(0x40c7ad);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x64ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40c7b0:{NFSU2_TR(0x40c7b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40c7b1:{NFSU2_TR(0x40c7b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x15e4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c7b7:{NFSU2_TR(0x40c7b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40c7b8:{NFSU2_TR(0x40c7b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40c7c4;}}
}
B40c7ba:L40c7ba:{c.instructions+=1;NFSU2_TR(0x40c7ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x15e4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40c7c4:L40c7c4:{c.instructions+=5;NFSU2_TR(0x40c7c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x15e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40c7ca:{NFSU2_TR(0x40c7ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x15e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40c7d0:{NFSU2_TR(0x40c7d0);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B40c7d2:{NFSU2_TR(0x40c7d2);
__builtin_memmove((R+8),(R+518),1);
}
B40c7d5:{NFSU2_TR(0x40c7d5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x15e8ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40c7db:L40c7db:{c.instructions+=1;NFSU2_TR(0x40c7db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40c7e0:L40c7e0:{c.instructions+=3;NFSU2_TR(0x40c7e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B40c7e6:{NFSU2_TR(0x40c7e6);
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
B40c7e8:{NFSU2_TR(0x40c7e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40c832;}}
}
B40c7ea:L40c7ea:{c.instructions+=3;NFSU2_TR(0x40c7ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40c7f0:{NFSU2_TR(0x40c7f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40c7f2:{NFSU2_TR(0x40c7f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40c800;}}
}
B40c7f4:L40c7f4:{c.instructions+=2;NFSU2_TR(0x40c7f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15e0ull))));
w4(U+4,u32(0x63ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40c7fe:{NFSU2_TR(0x40c7fe);
{goto L40c807;}
}
B40c800:L40c800:{c.instructions+=2;NFSU2_TR(0x40c800);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B40c801:{NFSU2_TR(0x40c801);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15e0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c807:L40c807:{c.instructions+=11;NFSU2_TR(0x40c807);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c808:{NFSU2_TR(0x40c808);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40c80e:{NFSU2_TR(0x40c80e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c80f:{NFSU2_TR(0x40c80f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B40c815:{NFSU2_TR(0x40c815);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40c817:{NFSU2_TR(0x40c817);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40c81b:{NFSU2_TR(0x40c81b);
__builtin_memmove((R+0),(R+518),1);
}
B40c81e:{NFSU2_TR(0x40c81e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B40c821:{NFSU2_TR(0x40c821);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+28),r4(R+4)));
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40c823:{NFSU2_TR(0x40c823);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15e8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40c829:{NFSU2_TR(0x40c829);
w4(R+4,u32(0xeull));
}
B40c82e:L40c82e:{c.instructions+=1;NFSU2_TR(0x40c82e);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L40c830;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40c82eu);}goto L40c82e;}
}
B40c830:L40c830:{c.instructions+=2;NFSU2_TR(0x40c830);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40c831:{NFSU2_TR(0x40c831);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40c832:L40c832:{c.instructions+=1;NFSU2_TR(0x40c832);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40c840:L40c840:{c.instructions+=6;NFSU2_TR(0x40c840);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c841:{NFSU2_TR(0x40c841);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c842:{NFSU2_TR(0x40c842);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c843:{NFSU2_TR(0x40c843);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B40c846:{NFSU2_TR(0x40c846);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40c849:{NFSU2_TR(0x40c849);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L40c8ee;}}
}
B40c84f:L40c84f:{c.instructions+=6;NFSU2_TR(0x40c84f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B40c851:{NFSU2_TR(0x40c851);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c855:{NFSU2_TR(0x40c855);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40c857:{NFSU2_TR(0x40c857);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40c859:{NFSU2_TR(0x40c859);
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
B40c85c:{NFSU2_TR(0x40c85c);
if(r1(R+514)){{goto L40c86d;}}
}
B40c85e:L40c85e:{c.instructions+=7;NFSU2_TR(0x40c85e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40c861:{NFSU2_TR(0x40c861);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40c865:{NFSU2_TR(0x40c865);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40c866:{NFSU2_TR(0x40c866);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40c867:{NFSU2_TR(0x40c867);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B40c869:{NFSU2_TR(0x40c869);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40c86a:{NFSU2_TR(0x40c86a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40c86d:L40c86d:{c.instructions+=5;NFSU2_TR(0x40c86d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c871:{NFSU2_TR(0x40c871);
{u32 ea_=u32((r4(R+28)*8u)+r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40c875:{NFSU2_TR(0x40c875);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40c877:{NFSU2_TR(0x40c877);
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
B40c87a:{NFSU2_TR(0x40c87a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40c88c;}}
}
B40c87c:L40c87c:{c.instructions+=7;NFSU2_TR(0x40c87c);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B40c880:{NFSU2_TR(0x40c880);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40c884:{NFSU2_TR(0x40c884);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40c885:{NFSU2_TR(0x40c885);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40c886:{NFSU2_TR(0x40c886);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B40c888:{NFSU2_TR(0x40c888);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40c889:{NFSU2_TR(0x40c889);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40c88c:L40c88c:{c.instructions+=4;NFSU2_TR(0x40c88c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+12),(U+0),4);
}
B40c88f:{NFSU2_TR(0x40c88f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B40c891:{NFSU2_TR(0x40c891);
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
B40c893:{NFSU2_TR(0x40c893);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L40c8fd;}}
}
B40c895:L40c895:{c.instructions+=1;NFSU2_TR(0x40c895);
__builtin_memmove((R+28),(R+24),4);
}
B40c897:L40c897:{c.instructions+=5;NFSU2_TR(0x40c897);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c89b:{NFSU2_TR(0x40c89b);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40c89d:{NFSU2_TR(0x40c89d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40c89f:{NFSU2_TR(0x40c89f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40c8a2:{NFSU2_TR(0x40c8a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40c8b2;}}
}
B40c8a4:L40c8a4:{c.instructions+=5;NFSU2_TR(0x40c8a4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c8a8:{NFSU2_TR(0x40c8a8);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40c8ab:{NFSU2_TR(0x40c8ab);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40c8ad:{NFSU2_TR(0x40c8ad);
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
B40c8b0:{NFSU2_TR(0x40c8b0);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L40c8c0;}}
}
B40c8b2:L40c8b2:{c.instructions+=4;NFSU2_TR(0x40c8b2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B40c8b3:{NFSU2_TR(0x40c8b3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B40c8b6:{NFSU2_TR(0x40c8b6);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B40c8b8:{NFSU2_TR(0x40c8b8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40c897u);}goto L40c897;}}
}
B40c8ba:L40c8ba:{c.instructions+=4;NFSU2_TR(0x40c8ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40c8bb:{NFSU2_TR(0x40c8bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40c8bc:{NFSU2_TR(0x40c8bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40c8bd:{NFSU2_TR(0x40c8bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40c8c0:L40c8c0:{c.instructions+=14;NFSU2_TR(0x40c8c0);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c8c4:{NFSU2_TR(0x40c8c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c8c5:{NFSU2_TR(0x40c8c5);
{u32 ea_=u32((r4(R+8)*8u)+r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40c8c8:{NFSU2_TR(0x40c8c8);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B40c8cc:{NFSU2_TR(0x40c8cc);
{u32 ea_=u32((r4(R+8)*8u)+r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c8d0:{NFSU2_TR(0x40c8d0);
{u32 ea_=u32((r4(R+8)*8u)+r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40c8d3:{NFSU2_TR(0x40c8d3);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B40c8d7:{NFSU2_TR(0x40c8d7);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B40c8d9:{NFSU2_TR(0x40c8d9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40c8dc:{NFSU2_TR(0x40c8dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c8dd:{NFSU2_TR(0x40c8dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40c8e1:{NFSU2_TR(0x40c8e1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c8e2:{NFSU2_TR(0x40c8e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c8e3:{NFSU2_TR(0x40c8e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40c8e8ull));
TAIL_STATIC(0x576740u,576);
}
B40c8e8:L40c8e8:{c.instructions+=4;NFSU2_TR(0x40c8e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40c8e9:{NFSU2_TR(0x40c8e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40c8ea:{NFSU2_TR(0x40c8ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40c8eb:{NFSU2_TR(0x40c8eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40c8ee:L40c8ee:{c.instructions+=2;NFSU2_TR(0x40c8ee);
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
B40c8f0:{NFSU2_TR(0x40c8f0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L40c8fd;}}
}
B40c8f2:L40c8f2:{c.instructions+=4;NFSU2_TR(0x40c8f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B40c8f4:{NFSU2_TR(0x40c8f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40c8f7:{NFSU2_TR(0x40c8f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40c8fb:{NFSU2_TR(0x40c8fb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B40c8fd:L40c8fd:{c.instructions+=4;NFSU2_TR(0x40c8fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40c8fe:{NFSU2_TR(0x40c8fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40c8ff:{NFSU2_TR(0x40c8ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40c900:{NFSU2_TR(0x40c900);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40c910:L40c910:{c.instructions+=11;NFSU2_TR(0x40c910);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c912:{NFSU2_TR(0x40c912);
u8 U[4];
w4(U+0,u32(0x7713ebull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c917:{NFSU2_TR(0x40c917);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40c91d:{NFSU2_TR(0x40c91d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c91e:{NFSU2_TR(0x40c91e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c925:{NFSU2_TR(0x40c925);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c926:{NFSU2_TR(0x40c926);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c927:{NFSU2_TR(0x40c927);
__builtin_memmove((R+24),(R+4),4);
}
B40c929:{NFSU2_TR(0x40c929);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40c92c:{NFSU2_TR(0x40c92c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c930:{NFSU2_TR(0x40c930);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40c935ull));
TAIL_STATIC(0x5ac6e0u,5ac);
}
B40c935:L40c935:{c.instructions+=7;NFSU2_TR(0x40c935);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c937:{NFSU2_TR(0x40c937);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c939:{NFSU2_TR(0x40c939);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c93b:{NFSU2_TR(0x40c93b);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c93d:{NFSU2_TR(0x40c93d);
__builtin_memmove((R+4),(R+24),4);
}
B40c93f:{NFSU2_TR(0x40c93f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40c947:{NFSU2_TR(0x40c947);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40c94cull));
TAIL_STATIC(0x610270u,610);
}
B40c94c:L40c94c:{c.instructions+=6;NFSU2_TR(0x40c94c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40c950:{NFSU2_TR(0x40c950);
__builtin_memmove((R+0),(R+24),4);
}
B40c952:{NFSU2_TR(0x40c952);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40c953:{NFSU2_TR(0x40c953);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c95a:{NFSU2_TR(0x40c95a);
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
B40c95d:{NFSU2_TR(0x40c95d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40c960:L40c960:{c.instructions+=9;NFSU2_TR(0x40c960);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40c964:{NFSU2_TR(0x40c964);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c965:{NFSU2_TR(0x40c965);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40c96b:{NFSU2_TR(0x40c96b);
__builtin_memmove((R+24),(R+4),4);
}
B40c96d:{NFSU2_TR(0x40c96d);
u8 U[4];
w4(U+0,u32(0x784270ull));
s4(u32(r4(R+24)),r4(U+0));
}
B40c973:{NFSU2_TR(0x40c973);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40c97a:{NFSU2_TR(0x40c97a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40c97c:{NFSU2_TR(0x40c97c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40c97f:{NFSU2_TR(0x40c97f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40c988;}}
}
B40c981:L40c981:{c.instructions+=2;NFSU2_TR(0x40c981);
w4(R+0,u32(0x1ull));
}
B40c986:{NFSU2_TR(0x40c986);
{goto L40c98a;}
}
B40c988:L40c988:{c.instructions+=1;NFSU2_TR(0x40c988);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B40c98a:L40c98a:{c.instructions+=8;NFSU2_TR(0x40c98a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40c98d:{NFSU2_TR(0x40c98d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40c991:{NFSU2_TR(0x40c991);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c994:{NFSU2_TR(0x40c994);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40c99a:{NFSU2_TR(0x40c99a);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40c9a0:{NFSU2_TR(0x40c9a0);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40c9a6:{NFSU2_TR(0x40c9a6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40c9ac:{NFSU2_TR(0x40c9ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40c9b1ull));
TAIL_STATIC(0x75bed4u,75b);
}
B40c9b1:L40c9b1:{c.instructions+=4;NFSU2_TR(0x40c9b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40c9b4:{NFSU2_TR(0x40c9b4);
__builtin_memmove((R+0),(R+24),4);
}
B40c9b6:{NFSU2_TR(0x40c9b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40c9b7:{NFSU2_TR(0x40c9b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40c9c0:L40c9c0:{c.instructions+=2;NFSU2_TR(0x40c9c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40c9c2:{NFSU2_TR(0x40c9c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40c9c5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B40c9c5:L40c9c5:{c.instructions+=5;NFSU2_TR(0x40c9c5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
}
B40c9c8:{NFSU2_TR(0x40c9c8);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B40c9ca:{NFSU2_TR(0x40c9ca);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B40c9cc:{NFSU2_TR(0x40c9cc);
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
B40c9cd:{NFSU2_TR(0x40c9cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40c9d0:L40c9d0:{c.instructions+=4;NFSU2_TR(0x40c9d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40c9d1:{NFSU2_TR(0x40c9d1);
__builtin_memmove((R+24),(R+4),4);
}
B40c9d3:{NFSU2_TR(0x40c9d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40c9d5:{NFSU2_TR(0x40c9d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40c9d8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B40c9d8:L40c9d8:{c.instructions+=2;NFSU2_TR(0x40c9d8);
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
B40c9db:{NFSU2_TR(0x40c9db);
if(r1(R+518)){{goto L40c9ed;}}
}
B40c9dd:L40c9dd:{c.instructions+=3;NFSU2_TR(0x40c9dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B40c9df:{NFSU2_TR(0x40c9df);
__builtin_memmove((R+4),(R+24),4);
}
B40c9e1:{NFSU2_TR(0x40c9e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40c9e4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B40c9e4:L40c9e4:{c.instructions+=2;NFSU2_TR(0x40c9e4);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B40c9e7:{NFSU2_TR(0x40c9e7);
if(r1(R+518)){{goto L40c9ed;}}
}
B40c9e9:L40c9e9:{c.instructions+=3;NFSU2_TR(0x40c9e9);
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
B40c9eb:{NFSU2_TR(0x40c9eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40c9ec:{NFSU2_TR(0x40c9ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40c9ed:L40c9ed:{c.instructions+=3;NFSU2_TR(0x40c9ed);
w4(R+0,u32(0x1ull));
}
B40c9f2:{NFSU2_TR(0x40c9f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40c9f3:{NFSU2_TR(0x40c9f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40ca00:L40ca00:{c.instructions+=2;NFSU2_TR(0x40ca00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40ca02:{NFSU2_TR(0x40ca02);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ca05ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B40ca05:L40ca05:{c.instructions+=5;NFSU2_TR(0x40ca05);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
}
B40ca08:{NFSU2_TR(0x40ca08);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B40ca0a:{NFSU2_TR(0x40ca0a);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B40ca0c:{NFSU2_TR(0x40ca0c);
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
B40ca0d:{NFSU2_TR(0x40ca0d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40ca10:L40ca10:{c.instructions+=2;NFSU2_TR(0x40ca10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40ca12:{NFSU2_TR(0x40ca12);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ca15ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B40ca15:L40ca15:{c.instructions+=5;NFSU2_TR(0x40ca15);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
}
B40ca18:{NFSU2_TR(0x40ca18);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B40ca1a:{NFSU2_TR(0x40ca1a);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B40ca1c:{NFSU2_TR(0x40ca1c);
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
B40ca1d:{NFSU2_TR(0x40ca1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40ca20:L40ca20:{c.instructions+=5;NFSU2_TR(0x40ca20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40ca24:{NFSU2_TR(0x40ca24);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ca25:{NFSU2_TR(0x40ca25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ca26:{NFSU2_TR(0x40ca26);
__builtin_memmove((R+24),(R+4),4);
}
B40ca28:{NFSU2_TR(0x40ca28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ca2dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40c960u);}goto L40c960;}
}
B40ca2d:L40ca2d:{c.instructions+=5;NFSU2_TR(0x40ca2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40ca34:{NFSU2_TR(0x40ca34);
u8 U[4];
w4(U+0,u32(0x784768ull));
s4(u32(r4(R+24)),r4(U+0));
}
B40ca3a:{NFSU2_TR(0x40ca3a);
__builtin_memmove((R+0),(R+24),4);
}
B40ca3c:{NFSU2_TR(0x40ca3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40ca3d:{NFSU2_TR(0x40ca3d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40ca40:L40ca40:{c.instructions+=2;NFSU2_TR(0x40ca40);
w4(R+0,u32(0x7847b8ull));
}
B40ca45:{NFSU2_TR(0x40ca45);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40ca50:L40ca50:{c.instructions+=2;NFSU2_TR(0x40ca50);
w4(R+0,u32(0x3ull));
}
B40ca55:{NFSU2_TR(0x40ca55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40ca60:L40ca60:{c.instructions+=2;NFSU2_TR(0x40ca60);
w4(R+0,u32(0x1ull));
}
B40ca65:{NFSU2_TR(0x40ca65);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40ca70:L40ca70:{c.instructions+=5;NFSU2_TR(0x40ca70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40ca74:{NFSU2_TR(0x40ca74);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ca75:{NFSU2_TR(0x40ca75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ca76:{NFSU2_TR(0x40ca76);
__builtin_memmove((R+24),(R+4),4);
}
B40ca78:{NFSU2_TR(0x40ca78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ca7dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40c960u);}goto L40c960;}
}
B40ca7d:L40ca7d:{c.instructions+=5;NFSU2_TR(0x40ca7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40ca84:{NFSU2_TR(0x40ca84);
u8 U[4];
w4(U+0,u32(0x7847d0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B40ca8a:{NFSU2_TR(0x40ca8a);
__builtin_memmove((R+0),(R+24),4);
}
B40ca8c:{NFSU2_TR(0x40ca8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40ca8d:{NFSU2_TR(0x40ca8d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40ca90:L40ca90:{c.instructions+=2;NFSU2_TR(0x40ca90);
w4(R+0,u32(0x784820ull));
}
B40ca95:{NFSU2_TR(0x40ca95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40caa0:L40caa0:{c.instructions+=2;NFSU2_TR(0x40caa0);
w4(R+0,u32(0x2ull));
}
B40caa5:{NFSU2_TR(0x40caa5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40cab0:L40cab0:{c.instructions+=5;NFSU2_TR(0x40cab0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40cab4:{NFSU2_TR(0x40cab4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40cab5:{NFSU2_TR(0x40cab5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40cab6:{NFSU2_TR(0x40cab6);
__builtin_memmove((R+24),(R+4),4);
}
B40cab8:{NFSU2_TR(0x40cab8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40cabdull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40c960u);}goto L40c960;}
}
B40cabd:L40cabd:{c.instructions+=5;NFSU2_TR(0x40cabd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40cac4:{NFSU2_TR(0x40cac4);
u8 U[4];
w4(U+0,u32(0x784830ull));
s4(u32(r4(R+24)),r4(U+0));
}
B40caca:{NFSU2_TR(0x40caca);
__builtin_memmove((R+0),(R+24),4);
}
B40cacc:{NFSU2_TR(0x40cacc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40cacd:{NFSU2_TR(0x40cacd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40cad0:L40cad0:{c.instructions+=2;NFSU2_TR(0x40cad0);
w4(R+0,u32(0x784880ull));
}
B40cad5:{NFSU2_TR(0x40cad5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40cae0:L40cae0:{c.instructions+=3;NFSU2_TR(0x40cae0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40cae4:{NFSU2_TR(0x40cae4);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40cae6:{NFSU2_TR(0x40cae6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40caebull));
TAIL_STATIC(0x5dcbe0u,5dc);
}
B40caeb:L40caeb:{c.instructions+=1;NFSU2_TR(0x40caeb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40caf0:L40caf0:{c.instructions+=5;NFSU2_TR(0x40caf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40caf4:{NFSU2_TR(0x40caf4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40caf5:{NFSU2_TR(0x40caf5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40caf6:{NFSU2_TR(0x40caf6);
__builtin_memmove((R+24),(R+4),4);
}
B40caf8:{NFSU2_TR(0x40caf8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40cafdull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40c960u);}goto L40c960;}
}
B40cafd:L40cafd:{c.instructions+=5;NFSU2_TR(0x40cafd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40cb04:{NFSU2_TR(0x40cb04);
u8 U[4];
w4(U+0,u32(0x7848a0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B40cb0a:{NFSU2_TR(0x40cb0a);
__builtin_memmove((R+0),(R+24),4);
}
B40cb0c:{NFSU2_TR(0x40cb0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40cb0d:{NFSU2_TR(0x40cb0d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40cb10:L40cb10:{c.instructions+=2;NFSU2_TR(0x40cb10);
w4(R+0,u32(0x7848f0ull));
}
B40cb15:{NFSU2_TR(0x40cb15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40cb20:L40cb20:{c.instructions+=2;NFSU2_TR(0x40cb20);
w4(R+0,u32(0x1ull));
}
B40cb25:{NFSU2_TR(0x40cb25);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40cb30:L40cb30:{c.instructions+=5;NFSU2_TR(0x40cb30);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40cb34:{NFSU2_TR(0x40cb34);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40cb35:{NFSU2_TR(0x40cb35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40cb36:{NFSU2_TR(0x40cb36);
__builtin_memmove((R+24),(R+4),4);
}
B40cb38:{NFSU2_TR(0x40cb38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40cb3dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40c960u);}goto L40c960;}
}
B40cb3d:L40cb3d:{c.instructions+=5;NFSU2_TR(0x40cb3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40cb44:{NFSU2_TR(0x40cb44);
u8 U[4];
w4(U+0,u32(0x784900ull));
s4(u32(r4(R+24)),r4(U+0));
}
B40cb4a:{NFSU2_TR(0x40cb4a);
__builtin_memmove((R+0),(R+24),4);
}
B40cb4c:{NFSU2_TR(0x40cb4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40cb4d:{NFSU2_TR(0x40cb4d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40cb50:L40cb50:{c.instructions+=2;NFSU2_TR(0x40cb50);
w4(R+0,u32(0x784950ull));
}
B40cb55:{NFSU2_TR(0x40cb55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40cb60:L40cb60:{c.instructions+=2;NFSU2_TR(0x40cb60);
{u32 ea_=u32(u32(7882148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40cb66:{NFSU2_TR(0x40cb66);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40cb70:L40cb70:{c.instructions+=3;NFSU2_TR(0x40cb70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40cb74:{NFSU2_TR(0x40cb74);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40cb76:{NFSU2_TR(0x40cb76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40cb7bull));
TAIL_STATIC(0x5dcbe0u,5dc);
}
B40cb7b:L40cb7b:{c.instructions+=1;NFSU2_TR(0x40cb7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40cb80:L40cb80:{c.instructions+=5;NFSU2_TR(0x40cb80);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40cb84:{NFSU2_TR(0x40cb84);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40cb85:{NFSU2_TR(0x40cb85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40cb86:{NFSU2_TR(0x40cb86);
__builtin_memmove((R+24),(R+4),4);
}
B40cb88:{NFSU2_TR(0x40cb88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40cb8dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40c960u);}goto L40c960;}
}
B40cb8d:L40cb8d:{c.instructions+=5;NFSU2_TR(0x40cb8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0xbull));
s4(u32(r4(U+0)),r4(U+4));
}
B40cb94:{NFSU2_TR(0x40cb94);
u8 U[4];
w4(U+0,u32(0x784968ull));
s4(u32(r4(R+24)),r4(U+0));
}
B40cb9a:{NFSU2_TR(0x40cb9a);
__builtin_memmove((R+0),(R+24),4);
}
B40cb9c:{NFSU2_TR(0x40cb9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40cb9d:{NFSU2_TR(0x40cb9d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40cba0:L40cba0:{c.instructions+=2;NFSU2_TR(0x40cba0);
w4(R+0,u32(0x7849b8ull));
}
B40cba5:{NFSU2_TR(0x40cba5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40cbb0:L40cbb0:{c.instructions+=2;NFSU2_TR(0x40cbb0);
w4(R+0,u32(0x4ull));
}
B40cbb5:{NFSU2_TR(0x40cbb5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40cbc0:L40cbc0:{c.instructions+=6;NFSU2_TR(0x40cbc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40cbc4:{NFSU2_TR(0x40cbc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B40cbc7:{NFSU2_TR(0x40cbc7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40cbc9:{NFSU2_TR(0x40cbc9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40cbca:{NFSU2_TR(0x40cbca);
__builtin_memmove((R+24),(R+4),4);
}
B40cbcc:{NFSU2_TR(0x40cbcc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40cc11;}}
}
B40cbce:L40cbce:{c.instructions+=21;NFSU2_TR(0x40cbce);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B40cbd2:{NFSU2_TR(0x40cbd2);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B40cbd6:{NFSU2_TR(0x40cbd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40cbda:{NFSU2_TR(0x40cbda);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40cbde:{NFSU2_TR(0x40cbde);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40cbe2:{NFSU2_TR(0x40cbe2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40cbe6:{NFSU2_TR(0x40cbe6);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40cbec:{NFSU2_TR(0x40cbec);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40cbf0:{NFSU2_TR(0x40cbf0);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40cbf6:{NFSU2_TR(0x40cbf6);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40cbf9:{NFSU2_TR(0x40cbf9);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40cbfc:{NFSU2_TR(0x40cbfc);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40cbfe:{NFSU2_TR(0x40cbfe);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40cc00:{NFSU2_TR(0x40cc00);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40cc02:{NFSU2_TR(0x40cc02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40cc03:{NFSU2_TR(0x40cc03);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B40cc05:{NFSU2_TR(0x40cc05);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40cc07:{NFSU2_TR(0x40cc07);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B40cc09:{NFSU2_TR(0x40cc09);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40cc0b:{NFSU2_TR(0x40cc0b);
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
B40cc0e:{NFSU2_TR(0x40cc0e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40cc11:L40cc11:{c.instructions+=4;NFSU2_TR(0x40cc11);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B40cc15:{NFSU2_TR(0x40cc15);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40cc16:{NFSU2_TR(0x40cc16);
__builtin_memmove((R+4),(R+24),4);
}
B40cc18:{NFSU2_TR(0x40cc18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40cc1dull));
TAIL_STATIC(0x401aa0u,401);
}
B40cc1d:L40cc1d:{c.instructions+=11;NFSU2_TR(0x40cc1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40cc21:{NFSU2_TR(0x40cc21);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40cc24:{NFSU2_TR(0x40cc24);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40cc27:{NFSU2_TR(0x40cc27);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40cc2b:{NFSU2_TR(0x40cc2b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40cc2d:{NFSU2_TR(0x40cc2d);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40cc2f:{NFSU2_TR(0x40cc2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40cc30:{NFSU2_TR(0x40cc30);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40cc34:{NFSU2_TR(0x40cc34);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40cc36:{NFSU2_TR(0x40cc36);
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
B40cc39:{NFSU2_TR(0x40cc39);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40cc40:L40cc40:{c.instructions+=6;NFSU2_TR(0x40cc40);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40cc44:{NFSU2_TR(0x40cc44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B40cc47:{NFSU2_TR(0x40cc47);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40cc49:{NFSU2_TR(0x40cc49);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40cc4a:{NFSU2_TR(0x40cc4a);
__builtin_memmove((R+24),(R+4),4);
}
B40cc4c:{NFSU2_TR(0x40cc4c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40cc91;}}
}
B40cc4e:L40cc4e:{c.instructions+=21;NFSU2_TR(0x40cc4e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B40cc52:{NFSU2_TR(0x40cc52);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B40cc56:{NFSU2_TR(0x40cc56);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40cc5a:{NFSU2_TR(0x40cc5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40cc5e:{NFSU2_TR(0x40cc5e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40cc62:{NFSU2_TR(0x40cc62);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40cc66:{NFSU2_TR(0x40cc66);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40cc6c:{NFSU2_TR(0x40cc6c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40cc70:{NFSU2_TR(0x40cc70);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40cc76:{NFSU2_TR(0x40cc76);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40cc78:{NFSU2_TR(0x40cc78);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40cc7a:{NFSU2_TR(0x40cc7a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40cc7c:{NFSU2_TR(0x40cc7c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40cc7f:{NFSU2_TR(0x40cc7f);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40cc82:{NFSU2_TR(0x40cc82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40cc83:{NFSU2_TR(0x40cc83);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B40cc85:{NFSU2_TR(0x40cc85);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B40cc87:{NFSU2_TR(0x40cc87);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B40cc89:{NFSU2_TR(0x40cc89);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40cc8b:{NFSU2_TR(0x40cc8b);
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
B40cc8e:{NFSU2_TR(0x40cc8e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40cc91:L40cc91:{c.instructions+=4;NFSU2_TR(0x40cc91);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B40cc95:{NFSU2_TR(0x40cc95);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40cc96:{NFSU2_TR(0x40cc96);
__builtin_memmove((R+4),(R+24),4);
}
B40cc98:{NFSU2_TR(0x40cc98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40cc9dull));
TAIL_STATIC(0x401aa0u,401);
}
B40cc9d:L40cc9d:{c.instructions+=11;NFSU2_TR(0x40cc9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40cca1:{NFSU2_TR(0x40cca1);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40cca3:{NFSU2_TR(0x40cca3);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40cca5:{NFSU2_TR(0x40cca5);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40cca9:{NFSU2_TR(0x40cca9);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40ccac:{NFSU2_TR(0x40ccac);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40ccaf:{NFSU2_TR(0x40ccaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40ccb0:{NFSU2_TR(0x40ccb0);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40ccb4:{NFSU2_TR(0x40ccb4);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B40ccb6:{NFSU2_TR(0x40ccb6);
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
B40ccb9:{NFSU2_TR(0x40ccb9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40ccc0:L40ccc0:{c.instructions+=4;NFSU2_TR(0x40ccc0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ccc1:{NFSU2_TR(0x40ccc1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ccc2:{NFSU2_TR(0x40ccc2);
__builtin_memmove((R+24),(R+4),4);
}
B40ccc4:{NFSU2_TR(0x40ccc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ccc9ull));
TAIL_STATIC(0x5d89f0u,5d8);
}
B40ccc9:L40ccc9:{c.instructions+=2;NFSU2_TR(0x40ccc9);
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
B40cccb:{NFSU2_TR(0x40cccb);
if(r1(R+518)){{goto L40cce5;}}
}
B40cccd:L40cccd:{c.instructions+=8;NFSU2_TR(0x40cccd);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B40ccd1:{NFSU2_TR(0x40ccd1);
u8 U[45];
w4(U+37,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
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
B40ccd4:{NFSU2_TR(0x40ccd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40ccd8:{NFSU2_TR(0x40ccd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40ccd9:{NFSU2_TR(0x40ccd9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40ccdd:{NFSU2_TR(0x40ccdd);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40cce3:{NFSU2_TR(0x40cce3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40cce4:{NFSU2_TR(0x40cce4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40cce5:L40cce5:{c.instructions+=8;NFSU2_TR(0x40cce5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B40cce9:{NFSU2_TR(0x40cce9);
u8 U[45];
w4(U+37,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
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
B40ccec:{NFSU2_TR(0x40ccec);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40ccf0:{NFSU2_TR(0x40ccf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40ccf1:{NFSU2_TR(0x40ccf1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40ccf5:{NFSU2_TR(0x40ccf5);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40ccfb:{NFSU2_TR(0x40ccfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40ccfc:{NFSU2_TR(0x40ccfc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40cd00:L40cd00:{c.instructions+=23;NFSU2_TR(0x40cd00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40cd01:{NFSU2_TR(0x40cd01);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B40cd05:{NFSU2_TR(0x40cd05);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B40cd09:{NFSU2_TR(0x40cd09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B40cd0d:{NFSU2_TR(0x40cd0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40cd11:{NFSU2_TR(0x40cd11);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40cd15:{NFSU2_TR(0x40cd15);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B40cd19:{NFSU2_TR(0x40cd19);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40cd1f:{NFSU2_TR(0x40cd1f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40cd23:{NFSU2_TR(0x40cd23);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40cd29:{NFSU2_TR(0x40cd29);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40cd2b:{NFSU2_TR(0x40cd2b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40cd2d:{NFSU2_TR(0x40cd2d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40cd2f:{NFSU2_TR(0x40cd2f);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40cd32:{NFSU2_TR(0x40cd32);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40cd35:{NFSU2_TR(0x40cd35);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B40cd37:{NFSU2_TR(0x40cd37);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B40cd39:{NFSU2_TR(0x40cd39);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B40cd3b:{NFSU2_TR(0x40cd3b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40cd3d:{NFSU2_TR(0x40cd3d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B40cd43:{NFSU2_TR(0x40cd43);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40cd45:{NFSU2_TR(0x40cd45);
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
B40cd48:{NFSU2_TR(0x40cd48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40cd65;}}
}
B40cd4a:L40cd4a:{c.instructions+=8;NFSU2_TR(0x40cd4a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B40cd4e:{NFSU2_TR(0x40cd4e);
u8 U[45];
w4(U+37,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
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
B40cd51:{NFSU2_TR(0x40cd51);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40cd55:{NFSU2_TR(0x40cd55);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40cd59:{NFSU2_TR(0x40cd59);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40cd5f:{NFSU2_TR(0x40cd5f);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B40cd61:{NFSU2_TR(0x40cd61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40cd62:{NFSU2_TR(0x40cd62);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40cd65:L40cd65:{c.instructions+=9;NFSU2_TR(0x40cd65);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B40cd69:{NFSU2_TR(0x40cd69);
u8 U[45];
w4(U+37,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
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
B40cd6c:{NFSU2_TR(0x40cd6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40cd70:{NFSU2_TR(0x40cd70);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40cd74:{NFSU2_TR(0x40cd74);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40cd7a:{NFSU2_TR(0x40cd7a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40cd7c:{NFSU2_TR(0x40cd7c);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B40cd7e:{NFSU2_TR(0x40cd7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40cd7f:{NFSU2_TR(0x40cd7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40cd90:L40cd90:{c.instructions+=6;NFSU2_TR(0x40cd90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B40cd93:{NFSU2_TR(0x40cd93);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40cd94:{NFSU2_TR(0x40cd94);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B40cd98:{NFSU2_TR(0x40cd98);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40cd99:{NFSU2_TR(0x40cd99);
__builtin_memmove((R+24),(R+4),4);
}
B40cd9b:{NFSU2_TR(0x40cd9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40cda0ull));
TAIL_STATIC(0x401aa0u,401);
}
B40cda0:L40cda0:{c.instructions+=12;NFSU2_TR(0x40cda0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40cda4:{NFSU2_TR(0x40cda4);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40cda6:{NFSU2_TR(0x40cda6);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40cda8:{NFSU2_TR(0x40cda8);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40cdac:{NFSU2_TR(0x40cdac);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40cdaf:{NFSU2_TR(0x40cdaf);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40cdb2:{NFSU2_TR(0x40cdb2);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40cdb6:{NFSU2_TR(0x40cdb6);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B40cdb8:{NFSU2_TR(0x40cdb8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B40cdbe:{NFSU2_TR(0x40cdbe);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40cdc0:{NFSU2_TR(0x40cdc0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40cdc3:{NFSU2_TR(0x40cdc3);
if(r1(R+514)){{goto L40cde5;}}
}
B40cdc5:L40cdc5:{c.instructions+=10;NFSU2_TR(0x40cdc5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B40cdc9:{NFSU2_TR(0x40cdc9);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B40cdcc:{NFSU2_TR(0x40cdcc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40cdd0:{NFSU2_TR(0x40cdd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40cdd1:{NFSU2_TR(0x40cdd1);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40cdd5:{NFSU2_TR(0x40cdd5);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40cddb:{NFSU2_TR(0x40cddb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40cddd:{NFSU2_TR(0x40cddd);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B40cddf:{NFSU2_TR(0x40cddf);
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
B40cde2:{NFSU2_TR(0x40cde2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40cde5:L40cde5:{c.instructions+=9;NFSU2_TR(0x40cde5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B40cde9:{NFSU2_TR(0x40cde9);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B40cdec:{NFSU2_TR(0x40cdec);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40cdf0:{NFSU2_TR(0x40cdf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40cdf1:{NFSU2_TR(0x40cdf1);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40cdf5:{NFSU2_TR(0x40cdf5);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40cdfb:{NFSU2_TR(0x40cdfb);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B40cdfd:{NFSU2_TR(0x40cdfd);
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
B40ce00:{NFSU2_TR(0x40ce00);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40ce10:L40ce10:{c.instructions+=8;NFSU2_TR(0x40ce10);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ce11:{NFSU2_TR(0x40ce11);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40ce15:{NFSU2_TR(0x40ce15);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ce16:{NFSU2_TR(0x40ce16);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40ce1c:{NFSU2_TR(0x40ce1c);
__builtin_memmove((R+24),(R+4),4);
}
B40ce1e:{NFSU2_TR(0x40ce1e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40ce20:{NFSU2_TR(0x40ce20);
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
B40ce23:{NFSU2_TR(0x40ce23);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40ce43;}}
}
B40ce25:L40ce25:{c.instructions+=9;NFSU2_TR(0x40ce25);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B40ce29:{NFSU2_TR(0x40ce29);
u8 U[45];
w4(U+37,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
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
B40ce2c:{NFSU2_TR(0x40ce2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40ce30:{NFSU2_TR(0x40ce30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40ce31:{NFSU2_TR(0x40ce31);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40ce35:{NFSU2_TR(0x40ce35);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40ce3b:{NFSU2_TR(0x40ce3b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B40ce3f:{NFSU2_TR(0x40ce3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40ce40:{NFSU2_TR(0x40ce40);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40ce43:L40ce43:{c.instructions+=2;NFSU2_TR(0x40ce43);
__builtin_memmove((R+4),(R+24),4);
}
B40ce45:{NFSU2_TR(0x40ce45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ce4aull));
TAIL_STATIC(0x5d89f0u,5d8);
}
B40ce4a:L40ce4a:{c.instructions+=2;NFSU2_TR(0x40ce4a);
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
B40ce4c:{NFSU2_TR(0x40ce4c);
if(r1(R+518)){{goto L40ce6e;}}
}
B40ce4e:L40ce4e:{c.instructions+=10;NFSU2_TR(0x40ce4e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B40ce52:{NFSU2_TR(0x40ce52);
u8 U[45];
w4(U+37,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
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
B40ce55:{NFSU2_TR(0x40ce55);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40ce59:{NFSU2_TR(0x40ce59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40ce5a:{NFSU2_TR(0x40ce5a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40ce5e:{NFSU2_TR(0x40ce5e);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40ce64:{NFSU2_TR(0x40ce64);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40ce68:{NFSU2_TR(0x40ce68);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B40ce6a:{NFSU2_TR(0x40ce6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40ce6b:{NFSU2_TR(0x40ce6b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40ce6e:L40ce6e:{c.instructions+=10;NFSU2_TR(0x40ce6e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B40ce72:{NFSU2_TR(0x40ce72);
u8 U[45];
w4(U+37,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
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
B40ce75:{NFSU2_TR(0x40ce75);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40ce79:{NFSU2_TR(0x40ce79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40ce7a:{NFSU2_TR(0x40ce7a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40ce7e:{NFSU2_TR(0x40ce7e);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40ce84:{NFSU2_TR(0x40ce84);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40ce88:{NFSU2_TR(0x40ce88);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B40ce8a:{NFSU2_TR(0x40ce8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40ce8b:{NFSU2_TR(0x40ce8b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40ce90:L40ce90:{c.instructions+=22;NFSU2_TR(0x40ce90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ce91:{NFSU2_TR(0x40ce91);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B40ce95:{NFSU2_TR(0x40ce95);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B40ce99:{NFSU2_TR(0x40ce99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B40ce9d:{NFSU2_TR(0x40ce9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40cea1:{NFSU2_TR(0x40cea1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40cea2:{NFSU2_TR(0x40cea2);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40cea6:{NFSU2_TR(0x40cea6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40ceaa:{NFSU2_TR(0x40ceaa);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40ceb0:{NFSU2_TR(0x40ceb0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40ceb4:{NFSU2_TR(0x40ceb4);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40ceba:{NFSU2_TR(0x40ceba);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40cebd:{NFSU2_TR(0x40cebd);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40cec0:{NFSU2_TR(0x40cec0);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B40cec2:{NFSU2_TR(0x40cec2);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40cec4:{NFSU2_TR(0x40cec4);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40cec6:{NFSU2_TR(0x40cec6);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B40cec8:{NFSU2_TR(0x40cec8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40ceca:{NFSU2_TR(0x40ceca);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40cecd:{NFSU2_TR(0x40cecd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40cecf:{NFSU2_TR(0x40cecf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40ced1:{NFSU2_TR(0x40ced1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ced6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40ce10u);}goto L40ce10;}
}
B40ced6:L40ced6:{c.instructions+=2;NFSU2_TR(0x40ced6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40ced7:{NFSU2_TR(0x40ced7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40cee0:L40cee0:{c.instructions+=8;NFSU2_TR(0x40cee0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40cee1:{NFSU2_TR(0x40cee1);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40cee5:{NFSU2_TR(0x40cee5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40cee6:{NFSU2_TR(0x40cee6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40ceec:{NFSU2_TR(0x40ceec);
__builtin_memmove((R+24),(R+4),4);
}
B40ceee:{NFSU2_TR(0x40ceee);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40cef0:{NFSU2_TR(0x40cef0);
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
B40cef3:{NFSU2_TR(0x40cef3);
if(r1(R+514)){{goto L40cf15;}}
}
B40cef5:L40cef5:{c.instructions+=10;NFSU2_TR(0x40cef5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B40cef9:{NFSU2_TR(0x40cef9);
u8 U[45];
w4(U+37,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
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
B40cefc:{NFSU2_TR(0x40cefc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40cf00:{NFSU2_TR(0x40cf00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40cf01:{NFSU2_TR(0x40cf01);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40cf05:{NFSU2_TR(0x40cf05);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40cf0b:{NFSU2_TR(0x40cf0b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40cf0f:{NFSU2_TR(0x40cf0f);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B40cf11:{NFSU2_TR(0x40cf11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40cf12:{NFSU2_TR(0x40cf12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40cf15:L40cf15:{c.instructions+=2;NFSU2_TR(0x40cf15);
__builtin_memmove((R+4),(R+24),4);
}
B40cf17:{NFSU2_TR(0x40cf17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40cf1cull));
TAIL_STATIC(0x5d89f0u,5d8);
}
B40cf1c:L40cf1c:{c.instructions+=2;NFSU2_TR(0x40cf1c);
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
B40cf1e:{NFSU2_TR(0x40cf1e);
if(r1(R+518)){{goto L40cf3e;}}
}
B40cf20:L40cf20:{c.instructions+=9;NFSU2_TR(0x40cf20);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B40cf24:{NFSU2_TR(0x40cf24);
u8 U[45];
w4(U+37,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
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
B40cf27:{NFSU2_TR(0x40cf27);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40cf2b:{NFSU2_TR(0x40cf2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40cf2c:{NFSU2_TR(0x40cf2c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40cf30:{NFSU2_TR(0x40cf30);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40cf36:{NFSU2_TR(0x40cf36);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B40cf3a:{NFSU2_TR(0x40cf3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40cf3b:{NFSU2_TR(0x40cf3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40cf3e:L40cf3e:{c.instructions+=9;NFSU2_TR(0x40cf3e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B40cf42:{NFSU2_TR(0x40cf42);
u8 U[45];
w4(U+37,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
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
B40cf45:{NFSU2_TR(0x40cf45);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40cf49:{NFSU2_TR(0x40cf49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40cf4a:{NFSU2_TR(0x40cf4a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40cf4e:{NFSU2_TR(0x40cf4e);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40cf54:{NFSU2_TR(0x40cf54);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B40cf58:{NFSU2_TR(0x40cf58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40cf59:{NFSU2_TR(0x40cf59);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40cf60:L40cf60:{c.instructions+=2;NFSU2_TR(0x40cf60);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B40cf63:{NFSU2_TR(0x40cf63);
TAIL_STATIC(0x401d40u,401);
}
B40cf70:L40cf70:{c.instructions+=3;NFSU2_TR(0x40cf70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40cf71:{NFSU2_TR(0x40cf71);
__builtin_memmove((R+24),(R+4),4);
}
B40cf73:{NFSU2_TR(0x40cf73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40cf78ull));
TAIL_STATIC(0x4233d0u,423);
}
B40cf78:L40cf78:{c.instructions+=2;NFSU2_TR(0x40cf78);
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
B40cf7d:{NFSU2_TR(0x40cf7d);
if(r1(R+518)){{goto L40cf88;}}
}
B40cf7f:L40cf7f:{c.instructions+=2;NFSU2_TR(0x40cf7f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40cf80:{NFSU2_TR(0x40cf80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40cf85ull));
TAIL_STATIC(0x575630u,575);
}
B40cf85:L40cf85:{c.instructions+=1;NFSU2_TR(0x40cf85);
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
B40cf88:L40cf88:{c.instructions+=3;NFSU2_TR(0x40cf88);
__builtin_memmove((R+0),(R+24),4);
}
B40cf8a:{NFSU2_TR(0x40cf8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40cf8b:{NFSU2_TR(0x40cf8b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40cf90:L40cf90:{c.instructions+=13;NFSU2_TR(0x40cf90);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40cf92:{NFSU2_TR(0x40cf92);
u8 U[4];
w4(U+0,u32(0x7713a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40cf97:{NFSU2_TR(0x40cf97);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40cf9d:{NFSU2_TR(0x40cf9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40cf9e:{NFSU2_TR(0x40cf9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40cfa5:{NFSU2_TR(0x40cfa5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40cfa6:{NFSU2_TR(0x40cfa6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40cfa7:{NFSU2_TR(0x40cfa7);
__builtin_memmove((R+24),(R+4),4);
}
B40cfa9:{NFSU2_TR(0x40cfa9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40cfad:{NFSU2_TR(0x40cfad);
u8 U[4];
w4(U+0,u32(0x784614ull));
s4(u32(r4(R+24)),r4(U+0));
}
B40cfb3:{NFSU2_TR(0x40cfb3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40cfb9:{NFSU2_TR(0x40cfb9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40cfc1:{NFSU2_TR(0x40cfc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40cfc6ull));
TAIL_STATIC(0x401730u,401);
}
B40cfc6:L40cfc6:{c.instructions+=3;NFSU2_TR(0x40cfc6);
__builtin_memmove((R+4),(R+24),4);
}
B40cfc8:{NFSU2_TR(0x40cfc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B40cfd0:{NFSU2_TR(0x40cfd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40cfd5ull));
TAIL_STATIC(0x409c50u,409);
}
B40cfd5:L40cfd5:{c.instructions+=5;NFSU2_TR(0x40cfd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40cfd9:{NFSU2_TR(0x40cfd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40cfda:{NFSU2_TR(0x40cfda);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40cfe1:{NFSU2_TR(0x40cfe1);
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
B40cfe4:{NFSU2_TR(0x40cfe4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40cff0:L40cff0:{c.instructions+=3;NFSU2_TR(0x40cff0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40cff1:{NFSU2_TR(0x40cff1);
__builtin_memmove((R+24),(R+4),4);
}
B40cff3:{NFSU2_TR(0x40cff3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40cff8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40cf90u);}goto L40cf90;}
}
B40cff8:L40cff8:{c.instructions+=2;NFSU2_TR(0x40cff8);
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
B40cffd:{NFSU2_TR(0x40cffd);
if(r1(R+518)){TAIL_STATIC(0x40d008u,40d);}
}
B40cfff:L40cfff:{c.instructions+=1;NFSU2_TR(0x40cfff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x40d000u,40d);
}
XIT:NFSU2_TR_EXIT(0x40c,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
