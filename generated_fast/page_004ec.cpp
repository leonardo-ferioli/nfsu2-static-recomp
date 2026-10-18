#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_4a9(u8* __restrict R,Cpu& c);
u32 body_4aa(u8* __restrict R,Cpu& c);
u32 body_4ab(u8* __restrict R,Cpu& c);
u32 body_4ac(u8* __restrict R,Cpu& c);
u32 body_4c6(u8* __restrict R,Cpu& c);
u32 body_4c7(u8* __restrict R,Cpu& c);
u32 body_4c9(u8* __restrict R,Cpu& c);
u32 body_4da(u8* __restrict R,Cpu& c);
u32 body_4db(u8* __restrict R,Cpu& c);
u32 body_4e9(u8* __restrict R,Cpu& c);
u32 body_4eb(u8* __restrict R,Cpu& c);
u32 body_4ed(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_532(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_5bc(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5ef(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5fe(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4ec,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4ec,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4ec(u8* __restrict R,Cpu& c);
u32 page_4ec(Cpu& c){return body_4ec(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4ec(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4ec005:goto L4ec005;
case 0x4ec008:c.instructions+=2;goto B4ec008;
case 0x4ec00e:c.instructions+=1;goto B4ec00e;
case 0x4ec013:goto L4ec013;
case 0x4ec015:c.instructions+=5;goto B4ec015;
case 0x4ec01c:c.instructions+=4;goto B4ec01c;
case 0x4ec01d:c.instructions+=3;goto B4ec01d;
case 0x4ec021:c.instructions+=2;goto B4ec021;
case 0x4ec025:c.instructions+=1;goto B4ec025;
case 0x4ec02a:goto L4ec02a;
case 0x4ec02d:c.instructions+=5;goto B4ec02d;
case 0x4ec034:c.instructions+=4;goto B4ec034;
case 0x4ec035:c.instructions+=3;goto B4ec035;
case 0x4ec03a:c.instructions+=2;goto B4ec03a;
case 0x4ec03b:c.instructions+=1;goto B4ec03b;
case 0x4ec040:goto L4ec040;
case 0x4ec043:c.instructions+=2;goto B4ec043;
case 0x4ec045:c.instructions+=1;goto B4ec045;
case 0x4ec04a:goto L4ec04a;
case 0x4ec04c:c.instructions+=1;goto B4ec04c;
case 0x4ec04e:goto L4ec04e;
case 0x4ec052:c.instructions+=1;goto B4ec052;
case 0x4ec057:goto L4ec057;
case 0x4ec05b:c.instructions+=2;goto B4ec05b;
case 0x4ec060:c.instructions+=1;goto B4ec060;
case 0x4ec062:goto L4ec062;
case 0x4ec063:c.instructions+=2;goto B4ec063;
case 0x4ec066:c.instructions+=1;goto B4ec066;
case 0x4ec067:goto L4ec067;
case 0x4ec069:goto L4ec069;
case 0x4ec06d:c.instructions+=6;goto B4ec06d;
case 0x4ec071:c.instructions+=5;goto B4ec071;
case 0x4ec073:c.instructions+=4;goto B4ec073;
case 0x4ec079:c.instructions+=3;goto B4ec079;
case 0x4ec07b:c.instructions+=2;goto B4ec07b;
case 0x4ec07e:c.instructions+=1;goto B4ec07e;
case 0x4ec080:goto L4ec080;
case 0x4ec085:c.instructions+=1;goto B4ec085;
case 0x4ec08a:goto L4ec08a;
case 0x4ec08d:c.instructions+=3;goto B4ec08d;
case 0x4ec090:c.instructions+=2;goto B4ec090;
case 0x4ec091:c.instructions+=1;goto B4ec091;
case 0x4ec096:goto L4ec096;
case 0x4ec098:goto L4ec098;
case 0x4ec09b:c.instructions+=2;goto B4ec09b;
case 0x4ec09c:c.instructions+=1;goto B4ec09c;
case 0x4ec0a1:goto L4ec0a1;
case 0x4ec0a4:goto L4ec0a4;
case 0x4ec0a9:c.instructions+=2;goto B4ec0a9;
case 0x4ec0ab:c.instructions+=1;goto B4ec0ab;
case 0x4ec0ad:goto L4ec0ad;
case 0x4ec0b2:c.instructions+=2;goto B4ec0b2;
case 0x4ec0b5:c.instructions+=1;goto B4ec0b5;
case 0x4ec0b7:goto L4ec0b7;
case 0x4ec0ba:c.instructions+=1;goto B4ec0ba;
case 0x4ec0bc:goto L4ec0bc;
case 0x4ec0c1:c.instructions+=3;goto B4ec0c1;
case 0x4ec0c4:c.instructions+=2;goto B4ec0c4;
case 0x4ec0c9:c.instructions+=1;goto B4ec0c9;
case 0x4ec0cb:goto L4ec0cb;
case 0x4ec0d0:goto L4ec0d0;
case 0x4ec0d2:c.instructions+=1;goto B4ec0d2;
case 0x4ec0d5:goto L4ec0d5;
case 0x4ec0d7:c.instructions+=1;goto B4ec0d7;
case 0x4ec0dc:goto L4ec0dc;
case 0x4ec0e2:c.instructions+=4;goto B4ec0e2;
case 0x4ec0e5:c.instructions+=3;goto B4ec0e5;
case 0x4ec0e6:c.instructions+=2;goto B4ec0e6;
case 0x4ec0ea:c.instructions+=1;goto B4ec0ea;
case 0x4ec0ef:goto L4ec0ef;
case 0x4ec0f1:c.instructions+=2;goto B4ec0f1;
case 0x4ec0f3:c.instructions+=1;goto B4ec0f3;
case 0x4ec0f9:goto L4ec0f9;
case 0x4ec0fb:c.instructions+=1;goto B4ec0fb;
case 0x4ec100:goto L4ec100;
case 0x4ec102:c.instructions+=1;goto B4ec102;
case 0x4ec108:goto L4ec108;
case 0x4ec10c:c.instructions+=2;goto B4ec10c;
case 0x4ec10e:c.instructions+=1;goto B4ec10e;
case 0x4ec114:goto L4ec114;
case 0x4ec11b:c.instructions+=2;goto B4ec11b;
case 0x4ec11d:c.instructions+=1;goto B4ec11d;
case 0x4ec123:goto L4ec123;
case 0x4ec12a:c.instructions+=1;goto B4ec12a;
case 0x4ec12c:goto L4ec12c;
case 0x4ec12d:c.instructions+=2;goto B4ec12d;
case 0x4ec132:c.instructions+=1;goto B4ec132;
case 0x4ec137:goto L4ec137;
case 0x4ec139:c.instructions+=2;goto B4ec139;
case 0x4ec13c:c.instructions+=1;goto B4ec13c;
case 0x4ec142:goto L4ec142;
case 0x4ec145:c.instructions+=1;goto B4ec145;
case 0x4ec14b:goto L4ec14b;
case 0x4ec14d:c.instructions+=1;goto B4ec14d;
case 0x4ec153:goto L4ec153;
case 0x4ec156:c.instructions+=1;goto B4ec156;
case 0x4ec15c:goto L4ec15c;
case 0x4ec162:c.instructions+=4;goto B4ec162;
case 0x4ec166:c.instructions+=3;goto B4ec166;
case 0x4ec167:c.instructions+=2;goto B4ec167;
case 0x4ec16c:c.instructions+=1;goto B4ec16c;
case 0x4ec171:goto L4ec171;
case 0x4ec175:c.instructions+=1;goto B4ec175;
case 0x4ec17b:goto L4ec17b;
case 0x4ec17f:c.instructions+=20;goto B4ec17f;
case 0x4ec182:c.instructions+=19;goto B4ec182;
case 0x4ec185:c.instructions+=18;goto B4ec185;
case 0x4ec188:c.instructions+=17;goto B4ec188;
case 0x4ec18b:c.instructions+=16;goto B4ec18b;
case 0x4ec18e:c.instructions+=15;goto B4ec18e;
case 0x4ec191:c.instructions+=14;goto B4ec191;
case 0x4ec194:c.instructions+=13;goto B4ec194;
case 0x4ec197:c.instructions+=12;goto B4ec197;
case 0x4ec199:c.instructions+=11;goto B4ec199;
case 0x4ec19c:c.instructions+=10;goto B4ec19c;
case 0x4ec19e:c.instructions+=9;goto B4ec19e;
case 0x4ec1a1:c.instructions+=8;goto B4ec1a1;
case 0x4ec1a3:c.instructions+=7;goto B4ec1a3;
case 0x4ec1a5:c.instructions+=6;goto B4ec1a5;
case 0x4ec1a8:c.instructions+=5;goto B4ec1a8;
case 0x4ec1aa:c.instructions+=4;goto B4ec1aa;
case 0x4ec1b0:c.instructions+=3;goto B4ec1b0;
case 0x4ec1b2:c.instructions+=2;goto B4ec1b2;
case 0x4ec1b5:c.instructions+=1;goto B4ec1b5;
case 0x4ec1bb:goto L4ec1bb;
case 0x4ec1bd:c.instructions+=16;goto B4ec1bd;
case 0x4ec1bf:c.instructions+=15;goto B4ec1bf;
case 0x4ec1c1:c.instructions+=14;goto B4ec1c1;
case 0x4ec1c3:c.instructions+=13;goto B4ec1c3;
case 0x4ec1c5:c.instructions+=12;goto B4ec1c5;
case 0x4ec1c7:c.instructions+=11;goto B4ec1c7;
case 0x4ec1c9:c.instructions+=10;goto B4ec1c9;
case 0x4ec1cb:c.instructions+=9;goto B4ec1cb;
case 0x4ec1cf:c.instructions+=8;goto B4ec1cf;
case 0x4ec1d1:c.instructions+=7;goto B4ec1d1;
case 0x4ec1d3:c.instructions+=6;goto B4ec1d3;
case 0x4ec1d5:c.instructions+=5;goto B4ec1d5;
case 0x4ec1d9:c.instructions+=4;goto B4ec1d9;
case 0x4ec1df:c.instructions+=3;goto B4ec1df;
case 0x4ec1e1:c.instructions+=2;goto B4ec1e1;
case 0x4ec1e4:c.instructions+=1;goto B4ec1e4;
case 0x4ec1ea:goto L4ec1ea;
case 0x4ec1ee:c.instructions+=4;goto B4ec1ee;
case 0x4ec1f4:c.instructions+=3;goto B4ec1f4;
case 0x4ec1f6:c.instructions+=2;goto B4ec1f6;
case 0x4ec1f9:c.instructions+=1;goto B4ec1f9;
case 0x4ec1ff:goto L4ec1ff;
case 0x4ec200:c.instructions+=5;goto B4ec200;
case 0x4ec206:c.instructions+=4;goto B4ec206;
case 0x4ec20a:c.instructions+=3;goto B4ec20a;
case 0x4ec20b:c.instructions+=2;goto B4ec20b;
case 0x4ec20c:c.instructions+=1;goto B4ec20c;
case 0x4ec211:goto L4ec211;
case 0x4ec218:c.instructions+=34;goto B4ec218;
case 0x4ec21c:c.instructions+=33;goto B4ec21c;
case 0x4ec220:c.instructions+=32;goto B4ec220;
case 0x4ec223:c.instructions+=31;goto B4ec223;
case 0x4ec227:c.instructions+=30;goto B4ec227;
case 0x4ec22d:c.instructions+=29;goto B4ec22d;
case 0x4ec22e:c.instructions+=28;goto B4ec22e;
case 0x4ec235:c.instructions+=27;goto B4ec235;
case 0x4ec239:c.instructions+=26;goto B4ec239;
case 0x4ec23f:c.instructions+=25;goto B4ec23f;
case 0x4ec240:c.instructions+=24;goto B4ec240;
case 0x4ec242:c.instructions+=23;goto B4ec242;
case 0x4ec249:c.instructions+=22;goto B4ec249;
case 0x4ec250:c.instructions+=21;goto B4ec250;
case 0x4ec254:c.instructions+=20;goto B4ec254;
case 0x4ec25a:c.instructions+=19;goto B4ec25a;
case 0x4ec261:c.instructions+=18;goto B4ec261;
case 0x4ec267:c.instructions+=17;goto B4ec267;
case 0x4ec269:c.instructions+=16;goto B4ec269;
case 0x4ec270:c.instructions+=15;goto B4ec270;
case 0x4ec277:c.instructions+=14;goto B4ec277;
case 0x4ec27e:c.instructions+=13;goto B4ec27e;
case 0x4ec284:c.instructions+=12;goto B4ec284;
case 0x4ec28b:c.instructions+=11;goto B4ec28b;
case 0x4ec291:c.instructions+=10;goto B4ec291;
case 0x4ec293:c.instructions+=9;goto B4ec293;
case 0x4ec29a:c.instructions+=8;goto B4ec29a;
case 0x4ec2a1:c.instructions+=7;goto B4ec2a1;
case 0x4ec2a8:c.instructions+=6;goto B4ec2a8;
case 0x4ec2aa:c.instructions+=5;goto B4ec2aa;
case 0x4ec2ae:c.instructions+=4;goto B4ec2ae;
case 0x4ec2b2:c.instructions+=3;goto B4ec2b2;
case 0x4ec2b4:c.instructions+=2;goto B4ec2b4;
case 0x4ec2b8:c.instructions+=1;goto B4ec2b8;
case 0x4ec2bd:goto L4ec2bd;
case 0x4ec2bf:c.instructions+=1;goto B4ec2bf;
case 0x4ec2c4:goto L4ec2c4;
case 0x4ec2c8:c.instructions+=4;goto B4ec2c8;
case 0x4ec2cc:c.instructions+=3;goto B4ec2cc;
case 0x4ec2ce:c.instructions+=2;goto B4ec2ce;
case 0x4ec2d2:c.instructions+=1;goto B4ec2d2;
case 0x4ec2d7:goto L4ec2d7;
case 0x4ec2db:c.instructions+=7;goto B4ec2db;
case 0x4ec2df:c.instructions+=6;goto B4ec2df;
case 0x4ec2e3:c.instructions+=5;goto B4ec2e3;
case 0x4ec2e7:c.instructions+=4;goto B4ec2e7;
case 0x4ec2ed:c.instructions+=3;goto B4ec2ed;
case 0x4ec2ef:c.instructions+=2;goto B4ec2ef;
case 0x4ec2f2:c.instructions+=1;goto B4ec2f2;
case 0x4ec2f8:goto L4ec2f8;
case 0x4ec2fc:c.instructions+=4;goto B4ec2fc;
case 0x4ec302:c.instructions+=3;goto B4ec302;
case 0x4ec304:c.instructions+=2;goto B4ec304;
case 0x4ec307:c.instructions+=1;goto B4ec307;
case 0x4ec30d:goto L4ec30d;
case 0x4ec311:c.instructions+=4;goto B4ec311;
case 0x4ec315:c.instructions+=3;goto B4ec315;
case 0x4ec317:c.instructions+=2;goto B4ec317;
case 0x4ec31a:c.instructions+=1;goto B4ec31a;
case 0x4ec320:goto L4ec320;
case 0x4ec324:c.instructions+=4;goto B4ec324;
case 0x4ec32a:c.instructions+=3;goto B4ec32a;
case 0x4ec32c:c.instructions+=2;goto B4ec32c;
case 0x4ec32f:c.instructions+=1;goto B4ec32f;
case 0x4ec335:goto L4ec335;
case 0x4ec339:c.instructions+=4;goto B4ec339;
case 0x4ec33d:c.instructions+=3;goto B4ec33d;
case 0x4ec33f:c.instructions+=2;goto B4ec33f;
case 0x4ec342:c.instructions+=1;goto B4ec342;
case 0x4ec348:goto L4ec348;
case 0x4ec34c:c.instructions+=10;goto B4ec34c;
case 0x4ec34d:c.instructions+=9;goto B4ec34d;
case 0x4ec351:c.instructions+=8;goto B4ec351;
case 0x4ec356:c.instructions+=7;goto B4ec356;
case 0x4ec35c:c.instructions+=6;goto B4ec35c;
case 0x4ec360:c.instructions+=5;goto B4ec360;
case 0x4ec364:c.instructions+=4;goto B4ec364;
case 0x4ec368:c.instructions+=3;goto B4ec368;
case 0x4ec36e:c.instructions+=2;goto B4ec36e;
case 0x4ec372:c.instructions+=1;goto B4ec372;
case 0x4ec377:goto L4ec377;
case 0x4ec379:c.instructions+=1;goto B4ec379;
case 0x4ec37e:goto L4ec37e;
case 0x4ec380:c.instructions+=1;goto B4ec380;
case 0x4ec382:goto L4ec382;
case 0x4ec387:c.instructions+=2;goto B4ec387;
case 0x4ec38e:c.instructions+=1;goto B4ec38e;
case 0x4ec393:goto L4ec393;
case 0x4ec39a:c.instructions+=2;goto B4ec39a;
case 0x4ec39b:c.instructions+=1;goto B4ec39b;
case 0x4ec3a0:goto L4ec3a0;
case 0x4ec3a3:c.instructions+=3;goto B4ec3a3;
case 0x4ec3a4:c.instructions+=2;goto B4ec3a4;
case 0x4ec3ab:c.instructions+=1;goto B4ec3ab;
case 0x4ec3b0:goto L4ec3b0;
case 0x4ec3b2:c.instructions+=3;goto B4ec3b2;
case 0x4ec3b9:c.instructions+=2;goto B4ec3b9;
case 0x4ec3ba:c.instructions+=1;goto B4ec3ba;
case 0x4ec3bc:goto L4ec3bc;
case 0x4ec3c1:c.instructions+=7;goto B4ec3c1;
case 0x4ec3c5:c.instructions+=6;goto B4ec3c5;
case 0x4ec3c9:c.instructions+=5;goto B4ec3c9;
case 0x4ec3cd:c.instructions+=4;goto B4ec3cd;
case 0x4ec3d1:c.instructions+=3;goto B4ec3d1;
case 0x4ec3d3:c.instructions+=2;goto B4ec3d3;
case 0x4ec3d7:c.instructions+=1;goto B4ec3d7;
case 0x4ec3d8:goto L4ec3d8;
case 0x4ec3da:c.instructions+=1;goto B4ec3da;
case 0x4ec3df:goto L4ec3df;
case 0x4ec3e3:c.instructions+=12;goto B4ec3e3;
case 0x4ec3e9:c.instructions+=11;goto B4ec3e9;
case 0x4ec3ed:c.instructions+=10;goto B4ec3ed;
case 0x4ec3ef:c.instructions+=9;goto B4ec3ef;
case 0x4ec3f3:c.instructions+=8;goto B4ec3f3;
case 0x4ec3f7:c.instructions+=7;goto B4ec3f7;
case 0x4ec3fb:c.instructions+=6;goto B4ec3fb;
case 0x4ec3ff:c.instructions+=5;goto B4ec3ff;
case 0x4ec401:c.instructions+=4;goto B4ec401;
case 0x4ec407:c.instructions+=3;goto B4ec407;
case 0x4ec408:c.instructions+=2;goto B4ec408;
case 0x4ec40c:c.instructions+=1;goto B4ec40c;
case 0x4ec411:goto L4ec411;
case 0x4ec415:c.instructions+=7;goto B4ec415;
case 0x4ec417:c.instructions+=6;goto B4ec417;
case 0x4ec41c:c.instructions+=5;goto B4ec41c;
case 0x4ec421:c.instructions+=4;goto B4ec421;
case 0x4ec422:c.instructions+=3;goto B4ec422;
case 0x4ec428:c.instructions+=2;goto B4ec428;
case 0x4ec42b:c.instructions+=1;goto B4ec42b;
case 0x4ec430:goto L4ec430;
case 0x4ec434:c.instructions+=8;goto B4ec434;
case 0x4ec436:c.instructions+=7;goto B4ec436;
case 0x4ec43a:c.instructions+=6;goto B4ec43a;
case 0x4ec43d:c.instructions+=5;goto B4ec43d;
case 0x4ec43f:c.instructions+=4;goto B4ec43f;
case 0x4ec443:c.instructions+=3;goto B4ec443;
case 0x4ec444:c.instructions+=2;goto B4ec444;
case 0x4ec44c:c.instructions+=1;goto B4ec44c;
case 0x4ec451:goto L4ec451;
case 0x4ec453:c.instructions+=2;goto B4ec453;
case 0x4ec454:c.instructions+=1;goto B4ec454;
case 0x4ec459:goto L4ec459;
case 0x4ec45b:goto L4ec45b;
case 0x4ec45d:c.instructions+=2;goto B4ec45d;
case 0x4ec45f:c.instructions+=1;goto B4ec45f;
case 0x4ec461:goto L4ec461;
case 0x4ec463:c.instructions+=2;goto B4ec463;
case 0x4ec464:c.instructions+=1;goto B4ec464;
case 0x4ec466:goto L4ec466;
case 0x4ec468:c.instructions+=1;goto B4ec468;
case 0x4ec469:goto L4ec469;
case 0x4ec46e:goto L4ec46e;
case 0x4ec471:c.instructions+=4;goto B4ec471;
case 0x4ec472:c.instructions+=3;goto B4ec472;
case 0x4ec475:c.instructions+=2;goto B4ec475;
case 0x4ec478:c.instructions+=1;goto B4ec478;
case 0x4ec47e:goto L4ec47e;
case 0x4ec484:c.instructions+=4;goto B4ec484;
case 0x4ec488:c.instructions+=3;goto B4ec488;
case 0x4ec489:c.instructions+=2;goto B4ec489;
case 0x4ec48c:c.instructions+=1;goto B4ec48c;
case 0x4ec491:goto L4ec491;
case 0x4ec492:c.instructions+=5;goto B4ec492;
case 0x4ec493:c.instructions+=4;goto B4ec493;
case 0x4ec494:c.instructions+=3;goto B4ec494;
case 0x4ec496:c.instructions+=2;goto B4ec496;
case 0x4ec497:c.instructions+=1;goto B4ec497;
case 0x4ec4a0:goto L4ec4a0;
case 0x4ec4a5:c.instructions+=6;goto B4ec4a5;
case 0x4ec4ab:c.instructions+=5;goto B4ec4ab;
case 0x4ec4b1:c.instructions+=4;goto B4ec4b1;
case 0x4ec4b2:c.instructions+=3;goto B4ec4b2;
case 0x4ec4b5:c.instructions+=2;goto B4ec4b5;
case 0x4ec4b7:c.instructions+=1;goto B4ec4b7;
case 0x4ec4bd:goto L4ec4bd;
case 0x4ec4c4:c.instructions+=4;goto B4ec4c4;
case 0x4ec4c7:c.instructions+=3;goto B4ec4c7;
case 0x4ec4c8:c.instructions+=2;goto B4ec4c8;
case 0x4ec4cd:c.instructions+=1;goto B4ec4cd;
case 0x4ec4d2:goto L4ec4d2;
case 0x4ec4d5:c.instructions+=5;goto B4ec4d5;
case 0x4ec4d6:c.instructions+=4;goto B4ec4d6;
case 0x4ec4da:c.instructions+=3;goto B4ec4da;
case 0x4ec4df:c.instructions+=2;goto B4ec4df;
case 0x4ec4e0:c.instructions+=1;goto B4ec4e0;
case 0x4ec4e5:goto L4ec4e5;
case 0x4ec4ea:c.instructions+=3;goto B4ec4ea;
case 0x4ec4ed:c.instructions+=2;goto B4ec4ed;
case 0x4ec4f0:c.instructions+=1;goto B4ec4f0;
case 0x4ec4f2:goto L4ec4f2;
case 0x4ec4f5:c.instructions+=3;goto B4ec4f5;
case 0x4ec4f8:c.instructions+=2;goto B4ec4f8;
case 0x4ec4fb:c.instructions+=1;goto B4ec4fb;
case 0x4ec4fd:goto L4ec4fd;
case 0x4ec4ff:c.instructions+=3;goto B4ec4ff;
case 0x4ec501:c.instructions+=2;goto B4ec501;
case 0x4ec508:c.instructions+=1;goto B4ec508;
case 0x4ec50d:goto L4ec50d;
case 0x4ec511:c.instructions+=3;goto B4ec511;
case 0x4ec512:c.instructions+=2;goto B4ec512;
case 0x4ec513:c.instructions+=1;goto B4ec513;
case 0x4ec518:goto L4ec518;
case 0x4ec519:c.instructions+=2;goto B4ec519;
case 0x4ec51a:c.instructions+=1;goto B4ec51a;
case 0x4ec51f:goto L4ec51f;
case 0x4ec521:c.instructions+=4;goto B4ec521;
case 0x4ec525:c.instructions+=3;goto B4ec525;
case 0x4ec526:c.instructions+=2;goto B4ec526;
case 0x4ec527:c.instructions+=1;goto B4ec527;
case 0x4ec52c:goto L4ec52c;
case 0x4ec52f:c.instructions+=3;goto B4ec52f;
case 0x4ec530:c.instructions+=2;goto B4ec530;
case 0x4ec533:c.instructions+=1;goto B4ec533;
case 0x4ec538:goto L4ec538;
case 0x4ec53b:c.instructions+=6;goto B4ec53b;
case 0x4ec53c:c.instructions+=5;goto B4ec53c;
case 0x4ec53d:c.instructions+=4;goto B4ec53d;
case 0x4ec540:c.instructions+=3;goto B4ec540;
case 0x4ec541:c.instructions+=2;goto B4ec541;
case 0x4ec547:c.instructions+=1;goto B4ec547;
case 0x4ec548:goto L4ec548;
case 0x4ec54d:c.instructions+=2;goto B4ec54d;
case 0x4ec54f:c.instructions+=1;goto B4ec54f;
case 0x4ec551:goto L4ec551;
case 0x4ec555:c.instructions+=3;goto B4ec555;
case 0x4ec556:c.instructions+=2;goto B4ec556;
case 0x4ec559:c.instructions+=1;goto B4ec559;
case 0x4ec55e:goto L4ec55e;
case 0x4ec55f:c.instructions+=2;goto B4ec55f;
case 0x4ec565:c.instructions+=1;goto B4ec565;
case 0x4ec570:goto L4ec570;
case 0x4ec575:c.instructions+=5;goto B4ec575;
case 0x4ec57b:c.instructions+=4;goto B4ec57b;
case 0x4ec57c:c.instructions+=3;goto B4ec57c;
case 0x4ec57f:c.instructions+=2;goto B4ec57f;
case 0x4ec581:c.instructions+=1;goto B4ec581;
case 0x4ec583:goto L4ec583;
case 0x4ec588:c.instructions+=1;goto B4ec588;
case 0x4ec58d:goto L4ec58d;
case 0x4ec590:c.instructions+=3;goto B4ec590;
case 0x4ec593:c.instructions+=2;goto B4ec593;
case 0x4ec594:c.instructions+=1;goto B4ec594;
case 0x4ec599:goto L4ec599;
case 0x4ec59a:c.instructions+=1;goto B4ec59a;
case 0x4ec5a0:goto L4ec5a0;
case 0x4ec5a1:c.instructions+=6;goto B4ec5a1;
case 0x4ec5a3:c.instructions+=5;goto B4ec5a3;
case 0x4ec5a6:c.instructions+=4;goto B4ec5a6;
case 0x4ec5a8:c.instructions+=3;goto B4ec5a8;
case 0x4ec5a9:c.instructions+=2;goto B4ec5a9;
case 0x4ec5ad:c.instructions+=1;goto B4ec5ad;
case 0x4ec5af:goto L4ec5af;
case 0x4ec5b0:c.instructions+=1;goto B4ec5b0;
case 0x4ec5b5:goto L4ec5b5;
case 0x4ec5b8:c.instructions+=2;goto B4ec5b8;
case 0x4ec5ba:c.instructions+=1;goto B4ec5ba;
case 0x4ec5bc:goto L4ec5bc;
case 0x4ec5bd:c.instructions+=1;goto B4ec5bd;
case 0x4ec5c2:goto L4ec5c2;
case 0x4ec5c5:c.instructions+=2;goto B4ec5c5;
case 0x4ec5c7:c.instructions+=1;goto B4ec5c7;
case 0x4ec5c9:goto L4ec5c9;
case 0x4ec5ca:c.instructions+=1;goto B4ec5ca;
case 0x4ec5cf:goto L4ec5cf;
case 0x4ec5d2:c.instructions+=2;goto B4ec5d2;
case 0x4ec5d4:c.instructions+=1;goto B4ec5d4;
case 0x4ec5d6:goto L4ec5d6;
case 0x4ec5d7:c.instructions+=1;goto B4ec5d7;
case 0x4ec5dc:goto L4ec5dc;
case 0x4ec5df:c.instructions+=2;goto B4ec5df;
case 0x4ec5e1:c.instructions+=1;goto B4ec5e1;
case 0x4ec5e3:goto L4ec5e3;
case 0x4ec5e4:c.instructions+=1;goto B4ec5e4;
case 0x4ec5e9:goto L4ec5e9;
case 0x4ec5ec:c.instructions+=2;goto B4ec5ec;
case 0x4ec5ee:c.instructions+=1;goto B4ec5ee;
case 0x4ec5f0:goto L4ec5f0;
case 0x4ec5f1:c.instructions+=1;goto B4ec5f1;
case 0x4ec5f6:goto L4ec5f6;
case 0x4ec5f9:c.instructions+=2;goto B4ec5f9;
case 0x4ec5fb:c.instructions+=1;goto B4ec5fb;
case 0x4ec5fd:goto L4ec5fd;
case 0x4ec5fe:c.instructions+=1;goto B4ec5fe;
case 0x4ec603:goto L4ec603;
case 0x4ec606:c.instructions+=2;goto B4ec606;
case 0x4ec608:c.instructions+=1;goto B4ec608;
case 0x4ec60a:goto L4ec60a;
case 0x4ec60b:c.instructions+=1;goto B4ec60b;
case 0x4ec610:goto L4ec610;
case 0x4ec613:c.instructions+=2;goto B4ec613;
case 0x4ec615:c.instructions+=1;goto B4ec615;
case 0x4ec617:goto L4ec617;
case 0x4ec618:c.instructions+=1;goto B4ec618;
case 0x4ec61d:goto L4ec61d;
case 0x4ec620:c.instructions+=2;goto B4ec620;
case 0x4ec622:c.instructions+=1;goto B4ec622;
case 0x4ec624:goto L4ec624;
case 0x4ec625:c.instructions+=1;goto B4ec625;
case 0x4ec62a:goto L4ec62a;
case 0x4ec62d:c.instructions+=2;goto B4ec62d;
case 0x4ec62f:c.instructions+=1;goto B4ec62f;
case 0x4ec631:goto L4ec631;
case 0x4ec632:c.instructions+=1;goto B4ec632;
case 0x4ec637:goto L4ec637;
case 0x4ec63a:c.instructions+=2;goto B4ec63a;
case 0x4ec63c:c.instructions+=1;goto B4ec63c;
case 0x4ec63e:goto L4ec63e;
case 0x4ec63f:c.instructions+=1;goto B4ec63f;
case 0x4ec644:goto L4ec644;
case 0x4ec647:c.instructions+=2;goto B4ec647;
case 0x4ec649:c.instructions+=1;goto B4ec649;
case 0x4ec64b:goto L4ec64b;
case 0x4ec64c:c.instructions+=1;goto B4ec64c;
case 0x4ec651:goto L4ec651;
case 0x4ec654:c.instructions+=2;goto B4ec654;
case 0x4ec656:c.instructions+=1;goto B4ec656;
case 0x4ec658:goto L4ec658;
case 0x4ec659:c.instructions+=1;goto B4ec659;
case 0x4ec65e:goto L4ec65e;
case 0x4ec661:c.instructions+=2;goto B4ec661;
case 0x4ec663:c.instructions+=1;goto B4ec663;
case 0x4ec665:goto L4ec665;
case 0x4ec666:c.instructions+=1;goto B4ec666;
case 0x4ec66b:goto L4ec66b;
case 0x4ec66e:c.instructions+=2;goto B4ec66e;
case 0x4ec670:c.instructions+=1;goto B4ec670;
case 0x4ec672:goto L4ec672;
case 0x4ec673:c.instructions+=1;goto B4ec673;
case 0x4ec678:goto L4ec678;
case 0x4ec67b:c.instructions+=2;goto B4ec67b;
case 0x4ec67d:c.instructions+=1;goto B4ec67d;
case 0x4ec67f:goto L4ec67f;
case 0x4ec680:c.instructions+=1;goto B4ec680;
case 0x4ec685:goto L4ec685;
case 0x4ec688:c.instructions+=2;goto B4ec688;
case 0x4ec68a:c.instructions+=1;goto B4ec68a;
case 0x4ec68c:goto L4ec68c;
case 0x4ec68d:c.instructions+=1;goto B4ec68d;
case 0x4ec692:goto L4ec692;
case 0x4ec695:c.instructions+=2;goto B4ec695;
case 0x4ec697:c.instructions+=1;goto B4ec697;
case 0x4ec699:goto L4ec699;
case 0x4ec69a:c.instructions+=1;goto B4ec69a;
case 0x4ec69f:goto L4ec69f;
case 0x4ec6a2:c.instructions+=2;goto B4ec6a2;
case 0x4ec6a4:c.instructions+=1;goto B4ec6a4;
case 0x4ec6a6:goto L4ec6a6;
case 0x4ec6a7:c.instructions+=1;goto B4ec6a7;
case 0x4ec6ac:goto L4ec6ac;
case 0x4ec6af:c.instructions+=2;goto B4ec6af;
case 0x4ec6b1:c.instructions+=1;goto B4ec6b1;
case 0x4ec6b3:goto L4ec6b3;
case 0x4ec6b4:c.instructions+=1;goto B4ec6b4;
case 0x4ec6b9:goto L4ec6b9;
case 0x4ec6bc:c.instructions+=2;goto B4ec6bc;
case 0x4ec6be:c.instructions+=1;goto B4ec6be;
case 0x4ec6c0:goto L4ec6c0;
case 0x4ec6c1:c.instructions+=1;goto B4ec6c1;
case 0x4ec6c6:goto L4ec6c6;
case 0x4ec6c9:c.instructions+=2;goto B4ec6c9;
case 0x4ec6cb:c.instructions+=1;goto B4ec6cb;
case 0x4ec6cd:goto L4ec6cd;
case 0x4ec6d2:goto L4ec6d2;
case 0x4ec6d8:c.instructions+=2;goto B4ec6d8;
case 0x4ec6da:c.instructions+=1;goto B4ec6da;
case 0x4ec6dc:goto L4ec6dc;
case 0x4ec6dd:c.instructions+=1;goto B4ec6dd;
case 0x4ec6e2:goto L4ec6e2;
case 0x4ec6e3:c.instructions+=2;goto B4ec6e3;
case 0x4ec6e4:c.instructions+=1;goto B4ec6e4;
case 0x4ec6f0:goto L4ec6f0;
case 0x4ec6f5:c.instructions+=2;goto B4ec6f5;
case 0x4ec6fa:c.instructions+=1;goto B4ec6fa;
case 0x4ec6fc:goto L4ec6fc;
case 0x4ec6fd:c.instructions+=1;goto B4ec6fd;
case 0x4ec700:goto L4ec700;
case 0x4ec702:c.instructions+=6;goto B4ec702;
case 0x4ec705:c.instructions+=5;goto B4ec705;
case 0x4ec708:c.instructions+=4;goto B4ec708;
case 0x4ec70a:c.instructions+=3;goto B4ec70a;
case 0x4ec70b:c.instructions+=2;goto B4ec70b;
case 0x4ec70e:c.instructions+=1;goto B4ec70e;
case 0x4ec713:goto L4ec713;
case 0x4ec718:c.instructions+=3;goto B4ec718;
case 0x4ec719:c.instructions+=2;goto B4ec719;
case 0x4ec71a:c.instructions+=1;goto B4ec71a;
case 0x4ec71f:goto L4ec71f;
case 0x4ec724:c.instructions+=3;goto B4ec724;
case 0x4ec727:c.instructions+=2;goto B4ec727;
case 0x4ec72c:c.instructions+=1;goto B4ec72c;
case 0x4ec72e:goto L4ec72e;
case 0x4ec72f:goto L4ec72f;
case 0x4ec730:goto L4ec730;
case 0x4ec731:c.instructions+=4;goto B4ec731;
case 0x4ec737:c.instructions+=3;goto B4ec737;
case 0x4ec738:c.instructions+=2;goto B4ec738;
case 0x4ec73d:c.instructions+=1;goto B4ec73d;
case 0x4ec742:goto L4ec742;
case 0x4ec744:c.instructions+=1;goto B4ec744;
case 0x4ec746:goto L4ec746;
case 0x4ec74a:c.instructions+=1;goto B4ec74a;
case 0x4ec750:goto L4ec750;
case 0x4ec753:c.instructions+=2;goto B4ec753;
case 0x4ec756:c.instructions+=1;goto B4ec756;
case 0x4ec758:goto L4ec758;
case 0x4ec75a:c.instructions+=2;goto B4ec75a;
case 0x4ec75c:c.instructions+=1;goto B4ec75c;
case 0x4ec75e:goto L4ec75e;
case 0x4ec75f:c.instructions+=3;goto B4ec75f;
case 0x4ec761:c.instructions+=2;goto B4ec761;
case 0x4ec762:c.instructions+=1;goto B4ec762;
case 0x4ec763:goto L4ec763;
case 0x4ec765:c.instructions+=6;goto B4ec765;
case 0x4ec768:c.instructions+=5;goto B4ec768;
case 0x4ec76b:c.instructions+=4;goto B4ec76b;
case 0x4ec76d:c.instructions+=3;goto B4ec76d;
case 0x4ec76e:c.instructions+=2;goto B4ec76e;
case 0x4ec771:c.instructions+=1;goto B4ec771;
case 0x4ec776:goto L4ec776;
case 0x4ec77b:c.instructions+=7;goto B4ec77b;
case 0x4ec77e:c.instructions+=6;goto B4ec77e;
case 0x4ec77f:c.instructions+=5;goto B4ec77f;
case 0x4ec784:c.instructions+=4;goto B4ec784;
case 0x4ec786:c.instructions+=3;goto B4ec786;
case 0x4ec787:c.instructions+=2;goto B4ec787;
case 0x4ec788:c.instructions+=1;goto B4ec788;
case 0x4ec790:goto L4ec790;
case 0x4ec792:c.instructions+=12;goto B4ec792;
case 0x4ec797:c.instructions+=11;goto B4ec797;
case 0x4ec79d:c.instructions+=10;goto B4ec79d;
case 0x4ec79e:c.instructions+=9;goto B4ec79e;
case 0x4ec7a5:c.instructions+=8;goto B4ec7a5;
case 0x4ec7a6:c.instructions+=7;goto B4ec7a6;
case 0x4ec7ab:c.instructions+=6;goto B4ec7ab;
case 0x4ec7ac:c.instructions+=5;goto B4ec7ac;
case 0x4ec7ad:c.instructions+=4;goto B4ec7ad;
case 0x4ec7ae:c.instructions+=3;goto B4ec7ae;
case 0x4ec7af:c.instructions+=2;goto B4ec7af;
case 0x4ec7b1:c.instructions+=1;goto B4ec7b1;
case 0x4ec7b6:goto L4ec7b6;
case 0x4ec7b8:c.instructions+=6;goto B4ec7b8;
case 0x4ec7bb:c.instructions+=5;goto B4ec7bb;
case 0x4ec7bf:c.instructions+=4;goto B4ec7bf;
case 0x4ec7c1:c.instructions+=3;goto B4ec7c1;
case 0x4ec7c3:c.instructions+=2;goto B4ec7c3;
case 0x4ec7c7:c.instructions+=1;goto B4ec7c7;
case 0x4ec7c9:goto L4ec7c9;
case 0x4ec7cd:c.instructions+=2;goto B4ec7cd;
case 0x4ec7ce:c.instructions+=1;goto B4ec7ce;
case 0x4ec7d3:goto L4ec7d3;
case 0x4ec7d7:c.instructions+=9;goto B4ec7d7;
case 0x4ec7da:c.instructions+=8;goto B4ec7da;
case 0x4ec7dd:c.instructions+=7;goto B4ec7dd;
case 0x4ec7e0:c.instructions+=6;goto B4ec7e0;
case 0x4ec7e3:c.instructions+=5;goto B4ec7e3;
case 0x4ec7e6:c.instructions+=4;goto B4ec7e6;
case 0x4ec7e9:c.instructions+=3;goto B4ec7e9;
case 0x4ec7ec:c.instructions+=2;goto B4ec7ec;
case 0x4ec7ee:c.instructions+=1;goto B4ec7ee;
case 0x4ec7f0:goto L4ec7f0;
case 0x4ec7f2:goto L4ec7f2;
case 0x4ec7f5:c.instructions+=11;goto B4ec7f5;
case 0x4ec7f7:c.instructions+=10;goto B4ec7f7;
case 0x4ec7fa:c.instructions+=9;goto B4ec7fa;
case 0x4ec7fc:c.instructions+=8;goto B4ec7fc;
case 0x4ec7fd:c.instructions+=7;goto B4ec7fd;
case 0x4ec800:c.instructions+=6;goto B4ec800;
case 0x4ec804:c.instructions+=5;goto B4ec804;
case 0x4ec805:c.instructions+=4;goto B4ec805;
case 0x4ec806:c.instructions+=3;goto B4ec806;
case 0x4ec80d:c.instructions+=2;goto B4ec80d;
case 0x4ec810:c.instructions+=1;goto B4ec810;
case 0x4ec820:goto L4ec820;
case 0x4ec822:c.instructions+=11;goto B4ec822;
case 0x4ec827:c.instructions+=10;goto B4ec827;
case 0x4ec82d:c.instructions+=9;goto B4ec82d;
case 0x4ec82e:c.instructions+=8;goto B4ec82e;
case 0x4ec835:c.instructions+=7;goto B4ec835;
case 0x4ec836:c.instructions+=6;goto B4ec836;
case 0x4ec83b:c.instructions+=5;goto B4ec83b;
case 0x4ec83c:c.instructions+=4;goto B4ec83c;
case 0x4ec83d:c.instructions+=3;goto B4ec83d;
case 0x4ec83e:c.instructions+=2;goto B4ec83e;
case 0x4ec840:c.instructions+=1;goto B4ec840;
case 0x4ec845:goto L4ec845;
case 0x4ec847:c.instructions+=5;goto B4ec847;
case 0x4ec84a:c.instructions+=4;goto B4ec84a;
case 0x4ec84e:c.instructions+=3;goto B4ec84e;
case 0x4ec850:c.instructions+=2;goto B4ec850;
case 0x4ec858:c.instructions+=1;goto B4ec858;
case 0x4ec85a:goto L4ec85a;
case 0x4ec85e:c.instructions+=2;goto B4ec85e;
case 0x4ec85f:c.instructions+=1;goto B4ec85f;
case 0x4ec864:goto L4ec864;
case 0x4ec868:c.instructions+=12;goto B4ec868;
case 0x4ec86c:c.instructions+=11;goto B4ec86c;
case 0x4ec86f:c.instructions+=10;goto B4ec86f;
case 0x4ec873:c.instructions+=9;goto B4ec873;
case 0x4ec876:c.instructions+=8;goto B4ec876;
case 0x4ec87a:c.instructions+=7;goto B4ec87a;
case 0x4ec87d:c.instructions+=6;goto B4ec87d;
case 0x4ec880:c.instructions+=5;goto B4ec880;
case 0x4ec883:c.instructions+=4;goto B4ec883;
case 0x4ec886:c.instructions+=3;goto B4ec886;
case 0x4ec88d:c.instructions+=2;goto B4ec88d;
case 0x4ec88f:c.instructions+=1;goto B4ec88f;
case 0x4ec891:goto L4ec891;
case 0x4ec893:goto L4ec893;
case 0x4ec896:c.instructions+=10;goto B4ec896;
case 0x4ec898:c.instructions+=9;goto B4ec898;
case 0x4ec89b:c.instructions+=8;goto B4ec89b;
case 0x4ec89e:c.instructions+=7;goto B4ec89e;
case 0x4ec8a2:c.instructions+=6;goto B4ec8a2;
case 0x4ec8a4:c.instructions+=5;goto B4ec8a4;
case 0x4ec8a5:c.instructions+=4;goto B4ec8a5;
case 0x4ec8a6:c.instructions+=3;goto B4ec8a6;
case 0x4ec8ad:c.instructions+=2;goto B4ec8ad;
case 0x4ec8b0:c.instructions+=1;goto B4ec8b0;
case 0x4ec8c0:goto L4ec8c0;
case 0x4ec8c1:c.instructions+=8;goto B4ec8c1;
case 0x4ec8c3:c.instructions+=7;goto B4ec8c3;
case 0x4ec8c6:c.instructions+=6;goto B4ec8c6;
case 0x4ec8c7:c.instructions+=5;goto B4ec8c7;
case 0x4ec8ca:c.instructions+=4;goto B4ec8ca;
case 0x4ec8cd:c.instructions+=3;goto B4ec8cd;
case 0x4ec8ce:c.instructions+=2;goto B4ec8ce;
case 0x4ec8d0:c.instructions+=1;goto B4ec8d0;
case 0x4ec8d2:goto L4ec8d2;
case 0x4ec8d5:c.instructions+=2;goto B4ec8d5;
case 0x4ec8d7:c.instructions+=1;goto B4ec8d7;
case 0x4ec8d9:goto L4ec8d9;
case 0x4ec8da:c.instructions+=2;goto B4ec8da;
case 0x4ec8df:c.instructions+=1;goto B4ec8df;
case 0x4ec8e4:goto L4ec8e4;
case 0x4ec8e6:c.instructions+=1;goto B4ec8e6;
case 0x4ec8e8:goto L4ec8e8;
case 0x4ec8ea:c.instructions+=10;goto B4ec8ea;
case 0x4ec8ed:c.instructions+=9;goto B4ec8ed;
case 0x4ec8f0:c.instructions+=8;goto B4ec8f0;
case 0x4ec8f3:c.instructions+=7;goto B4ec8f3;
case 0x4ec8f6:c.instructions+=6;goto B4ec8f6;
case 0x4ec8f9:c.instructions+=5;goto B4ec8f9;
case 0x4ec8fc:c.instructions+=4;goto B4ec8fc;
case 0x4ec8ff:c.instructions+=3;goto B4ec8ff;
case 0x4ec901:c.instructions+=2;goto B4ec901;
case 0x4ec904:c.instructions+=1;goto B4ec904;
case 0x4ec909:goto L4ec909;
case 0x4ec90a:c.instructions+=1;goto B4ec90a;
case 0x4ec90f:goto L4ec90f;
case 0x4ec912:c.instructions+=14;goto B4ec912;
case 0x4ec915:c.instructions+=13;goto B4ec915;
case 0x4ec918:c.instructions+=12;goto B4ec918;
case 0x4ec91a:c.instructions+=11;goto B4ec91a;
case 0x4ec91d:c.instructions+=10;goto B4ec91d;
case 0x4ec923:c.instructions+=9;goto B4ec923;
case 0x4ec925:c.instructions+=8;goto B4ec925;
case 0x4ec929:c.instructions+=7;goto B4ec929;
case 0x4ec92c:c.instructions+=6;goto B4ec92c;
case 0x4ec92f:c.instructions+=5;goto B4ec92f;
case 0x4ec935:c.instructions+=4;goto B4ec935;
case 0x4ec938:c.instructions+=3;goto B4ec938;
case 0x4ec939:c.instructions+=2;goto B4ec939;
case 0x4ec93a:c.instructions+=1;goto B4ec93a;
case 0x4ec93f:goto L4ec93f;
case 0x4ec940:c.instructions+=2;goto B4ec940;
case 0x4ec942:c.instructions+=1;goto B4ec942;
case 0x4ec947:goto L4ec947;
case 0x4ec948:c.instructions+=4;goto B4ec948;
case 0x4ec949:c.instructions+=3;goto B4ec949;
case 0x4ec94b:c.instructions+=2;goto B4ec94b;
case 0x4ec94c:c.instructions+=1;goto B4ec94c;
case 0x4ec950:goto L4ec950;
case 0x4ec951:c.instructions+=20;goto B4ec951;
case 0x4ec953:c.instructions+=19;goto B4ec953;
case 0x4ec955:c.instructions+=18;goto B4ec955;
case 0x4ec95a:c.instructions+=17;goto B4ec95a;
case 0x4ec960:c.instructions+=16;goto B4ec960;
case 0x4ec961:c.instructions+=15;goto B4ec961;
case 0x4ec968:c.instructions+=14;goto B4ec968;
case 0x4ec969:c.instructions+=13;goto B4ec969;
case 0x4ec96a:c.instructions+=12;goto B4ec96a;
case 0x4ec96b:c.instructions+=11;goto B4ec96b;
case 0x4ec96d:c.instructions+=10;goto B4ec96d;
case 0x4ec96e:c.instructions+=9;goto B4ec96e;
case 0x4ec971:c.instructions+=8;goto B4ec971;
case 0x4ec973:c.instructions+=7;goto B4ec973;
case 0x4ec976:c.instructions+=6;goto B4ec976;
case 0x4ec979:c.instructions+=5;goto B4ec979;
case 0x4ec97c:c.instructions+=4;goto B4ec97c;
case 0x4ec982:c.instructions+=3;goto B4ec982;
case 0x4ec983:c.instructions+=2;goto B4ec983;
case 0x4ec98a:c.instructions+=1;goto B4ec98a;
case 0x4ec98f:goto L4ec98f;
case 0x4ec992:c.instructions+=5;goto B4ec992;
case 0x4ec994:c.instructions+=4;goto B4ec994;
case 0x4ec996:c.instructions+=3;goto B4ec996;
case 0x4ec998:c.instructions+=2;goto B4ec998;
case 0x4ec99b:c.instructions+=1;goto B4ec99b;
case 0x4ec9a0:goto L4ec9a0;
case 0x4ec9a5:c.instructions+=4;goto B4ec9a5;
case 0x4ec9a6:c.instructions+=3;goto B4ec9a6;
case 0x4ec9a8:c.instructions+=2;goto B4ec9a8;
case 0x4ec9aa:c.instructions+=1;goto B4ec9aa;
case 0x4ec9af:goto L4ec9af;
case 0x4ec9b2:c.instructions+=3;goto B4ec9b2;
case 0x4ec9b7:c.instructions+=2;goto B4ec9b7;
case 0x4ec9b8:c.instructions+=1;goto B4ec9b8;
case 0x4ec9bd:goto L4ec9bd;
case 0x4ec9c0:c.instructions+=4;goto B4ec9c0;
case 0x4ec9c3:c.instructions+=3;goto B4ec9c3;
case 0x4ec9c8:c.instructions+=2;goto B4ec9c8;
case 0x4ec9c9:c.instructions+=1;goto B4ec9c9;
case 0x4ec9ce:goto L4ec9ce;
case 0x4ec9d1:c.instructions+=4;goto B4ec9d1;
case 0x4ec9d4:c.instructions+=3;goto B4ec9d4;
case 0x4ec9d9:c.instructions+=2;goto B4ec9d9;
case 0x4ec9da:c.instructions+=1;goto B4ec9da;
case 0x4ec9df:goto L4ec9df;
case 0x4ec9e2:c.instructions+=4;goto B4ec9e2;
case 0x4ec9e7:c.instructions+=3;goto B4ec9e7;
case 0x4ec9ea:c.instructions+=2;goto B4ec9ea;
case 0x4ec9ec:c.instructions+=1;goto B4ec9ec;
case 0x4ec9f2:goto L4ec9f2;
case 0x4ec9f7:c.instructions+=3;goto B4ec9f7;
case 0x4ec9f9:c.instructions+=2;goto B4ec9f9;
case 0x4ec9ff:c.instructions+=1;goto B4ec9ff;
case 0x4eca05:goto L4eca05;
case 0x4eca0a:c.instructions+=2;goto B4eca0a;
case 0x4eca0c:c.instructions+=1;goto B4eca0c;
case 0x4eca12:goto L4eca12;
case 0x4eca14:c.instructions+=1;goto B4eca14;
case 0x4eca16:goto L4eca16;
case 0x4eca1d:c.instructions+=15;goto B4eca1d;
case 0x4eca22:c.instructions+=14;goto B4eca22;
case 0x4eca25:c.instructions+=13;goto B4eca25;
case 0x4eca2b:c.instructions+=12;goto B4eca2b;
case 0x4eca31:c.instructions+=11;goto B4eca31;
case 0x4eca34:c.instructions+=10;goto B4eca34;
case 0x4eca3a:c.instructions+=9;goto B4eca3a;
case 0x4eca3d:c.instructions+=8;goto B4eca3d;
case 0x4eca40:c.instructions+=7;goto B4eca40;
case 0x4eca41:c.instructions+=6;goto B4eca41;
case 0x4eca42:c.instructions+=5;goto B4eca42;
case 0x4eca43:c.instructions+=4;goto B4eca43;
case 0x4eca48:c.instructions+=3;goto B4eca48;
case 0x4eca49:c.instructions+=2;goto B4eca49;
case 0x4eca4b:c.instructions+=1;goto B4eca4b;
case 0x4eca50:goto L4eca50;
case 0x4eca53:goto L4eca53;
case 0x4eca58:c.instructions+=2;goto B4eca58;
case 0x4eca5a:c.instructions+=1;goto B4eca5a;
case 0x4eca5c:goto L4eca5c;
case 0x4eca63:c.instructions+=15;goto B4eca63;
case 0x4eca68:c.instructions+=14;goto B4eca68;
case 0x4eca6b:c.instructions+=13;goto B4eca6b;
case 0x4eca71:c.instructions+=12;goto B4eca71;
case 0x4eca74:c.instructions+=11;goto B4eca74;
case 0x4eca7a:c.instructions+=10;goto B4eca7a;
case 0x4eca7d:c.instructions+=9;goto B4eca7d;
case 0x4eca80:c.instructions+=8;goto B4eca80;
case 0x4eca81:c.instructions+=7;goto B4eca81;
case 0x4eca87:c.instructions+=6;goto B4eca87;
case 0x4eca88:c.instructions+=5;goto B4eca88;
case 0x4eca89:c.instructions+=4;goto B4eca89;
case 0x4eca8e:c.instructions+=3;goto B4eca8e;
case 0x4eca90:c.instructions+=2;goto B4eca90;
case 0x4eca92:c.instructions+=1;goto B4eca92;
case 0x4eca97:goto L4eca97;
case 0x4eca9a:goto L4eca9a;
case 0x4eca9f:c.instructions+=6;goto B4eca9f;
case 0x4ecaa2:c.instructions+=5;goto B4ecaa2;
case 0x4ecaa5:c.instructions+=4;goto B4ecaa5;
case 0x4ecaa7:c.instructions+=3;goto B4ecaa7;
case 0x4ecaa9:c.instructions+=2;goto B4ecaa9;
case 0x4ecaab:c.instructions+=1;goto B4ecaab;
case 0x4ecaad:goto L4ecaad;
case 0x4ecab0:goto L4ecab0;
case 0x4ecab2:c.instructions+=6;goto B4ecab2;
case 0x4ecab6:c.instructions+=5;goto B4ecab6;
case 0x4ecaba:c.instructions+=4;goto B4ecaba;
case 0x4ecabb:c.instructions+=3;goto B4ecabb;
case 0x4ecabd:c.instructions+=2;goto B4ecabd;
case 0x4ecabf:c.instructions+=1;goto B4ecabf;
case 0x4ecac4:goto L4ecac4;
case 0x4ecac9:c.instructions+=6;goto B4ecac9;
case 0x4ecacc:c.instructions+=5;goto B4ecacc;
case 0x4ecacf:c.instructions+=4;goto B4ecacf;
case 0x4ecad0:c.instructions+=3;goto B4ecad0;
case 0x4ecad2:c.instructions+=2;goto B4ecad2;
case 0x4ecad4:c.instructions+=1;goto B4ecad4;
case 0x4ecad6:goto L4ecad6;
case 0x4ecadb:c.instructions+=1;goto B4ecadb;
case 0x4ecae0:goto L4ecae0;
case 0x4ecae2:c.instructions+=1;goto B4ecae2;
case 0x4ecae4:goto L4ecae4;
case 0x4ecaea:c.instructions+=4;goto B4ecaea;
case 0x4ecaed:c.instructions+=3;goto B4ecaed;
case 0x4ecaef:c.instructions+=2;goto B4ecaef;
case 0x4ecaf1:c.instructions+=1;goto B4ecaf1;
case 0x4ecaf3:goto L4ecaf3;
case 0x4ecaf8:c.instructions+=1;goto B4ecaf8;
case 0x4ecb00:goto L4ecb00;
case 0x4ecb03:c.instructions+=3;goto B4ecb03;
case 0x4ecb06:c.instructions+=2;goto B4ecb06;
case 0x4ecb0a:c.instructions+=1;goto B4ecb0a;
case 0x4ecb0c:goto L4ecb0c;
case 0x4ecb13:c.instructions+=1;goto B4ecb13;
case 0x4ecb15:goto L4ecb15;
case 0x4ecb19:c.instructions+=4;goto B4ecb19;
case 0x4ecb1a:c.instructions+=3;goto B4ecb1a;
case 0x4ecb1c:c.instructions+=2;goto B4ecb1c;
case 0x4ecb1e:c.instructions+=1;goto B4ecb1e;
case 0x4ecb23:goto L4ecb23;
case 0x4ecb29:goto L4ecb29;
case 0x4ecb2c:c.instructions+=4;goto B4ecb2c;
case 0x4ecb2d:c.instructions+=3;goto B4ecb2d;
case 0x4ecb30:c.instructions+=2;goto B4ecb30;
case 0x4ecb32:c.instructions+=1;goto B4ecb32;
case 0x4ecb34:goto L4ecb34;
case 0x4ecb39:c.instructions+=2;goto B4ecb39;
case 0x4ecb3b:c.instructions+=1;goto B4ecb3b;
case 0x4ecb3d:goto L4ecb3d;
case 0x4ecb3f:c.instructions+=2;goto B4ecb3f;
case 0x4ecb44:c.instructions+=1;goto B4ecb44;
case 0x4ecb49:goto L4ecb49;
case 0x4ecb4b:c.instructions+=2;goto B4ecb4b;
case 0x4ecb4d:c.instructions+=1;goto B4ecb4d;
case 0x4ecb4f:goto L4ecb4f;
case 0x4ecb50:goto L4ecb50;
case 0x4ecb51:c.instructions+=2;goto B4ecb51;
case 0x4ecb53:c.instructions+=1;goto B4ecb53;
case 0x4ecb58:goto L4ecb58;
case 0x4ecb59:c.instructions+=2;goto B4ecb59;
case 0x4ecb5e:c.instructions+=1;goto B4ecb5e;
case 0x4ecb63:goto L4ecb63;
case 0x4ecb65:c.instructions+=2;goto B4ecb65;
case 0x4ecb67:c.instructions+=1;goto B4ecb67;
case 0x4ecb69:goto L4ecb69;
case 0x4ecb6c:c.instructions+=8;goto B4ecb6c;
case 0x4ecb6d:c.instructions+=7;goto B4ecb6d;
case 0x4ecb6f:c.instructions+=6;goto B4ecb6f;
case 0x4ecb70:c.instructions+=5;goto B4ecb70;
case 0x4ecb71:c.instructions+=4;goto B4ecb71;
case 0x4ecb78:c.instructions+=3;goto B4ecb78;
case 0x4ecb7a:c.instructions+=2;goto B4ecb7a;
case 0x4ecb7b:c.instructions+=1;goto B4ecb7b;
case 0x4ecb80:goto L4ecb80;
case 0x4ecb82:c.instructions+=14;goto B4ecb82;
case 0x4ecb87:c.instructions+=13;goto B4ecb87;
case 0x4ecb8d:c.instructions+=12;goto B4ecb8d;
case 0x4ecb8e:c.instructions+=11;goto B4ecb8e;
case 0x4ecb95:c.instructions+=10;goto B4ecb95;
case 0x4ecb96:c.instructions+=9;goto B4ecb96;
case 0x4ecb97:c.instructions+=8;goto B4ecb97;
case 0x4ecb98:c.instructions+=7;goto B4ecb98;
case 0x4ecb99:c.instructions+=6;goto B4ecb99;
case 0x4ecb9b:c.instructions+=5;goto B4ecb9b;
case 0x4ecb9c:c.instructions+=4;goto B4ecb9c;
case 0x4ecba0:c.instructions+=3;goto B4ecba0;
case 0x4ecba3:c.instructions+=2;goto B4ecba3;
case 0x4ecbab:c.instructions+=1;goto B4ecbab;
case 0x4ecbb0:goto L4ecbb0;
case 0x4ecbb2:c.instructions+=2;goto B4ecbb2;
case 0x4ecbb4:c.instructions+=1;goto B4ecbb4;
case 0x4ecbb6:goto L4ecbb6;
case 0x4ecbb9:c.instructions+=2;goto B4ecbb9;
case 0x4ecbbb:c.instructions+=1;goto B4ecbbb;
case 0x4ecbbd:goto L4ecbbd;
case 0x4ecbbf:c.instructions+=1;goto B4ecbbf;
case 0x4ecbc1:goto L4ecbc1;
case 0x4ecbc3:goto L4ecbc3;
case 0x4ecbc8:c.instructions+=3;goto B4ecbc8;
case 0x4ecbca:c.instructions+=2;goto B4ecbca;
case 0x4ecbcb:c.instructions+=1;goto B4ecbcb;
case 0x4ecbd0:goto L4ecbd0;
case 0x4ecbd2:c.instructions+=3;goto B4ecbd2;
case 0x4ecbd5:c.instructions+=2;goto B4ecbd5;
case 0x4ecbd7:c.instructions+=1;goto B4ecbd7;
case 0x4ecbd9:goto L4ecbd9;
case 0x4ecbdc:c.instructions+=3;goto B4ecbdc;
case 0x4ecbde:c.instructions+=2;goto B4ecbde;
case 0x4ecbe6:c.instructions+=1;goto B4ecbe6;
case 0x4ecbe8:goto L4ecbe8;
case 0x4ecbea:c.instructions+=6;goto B4ecbea;
case 0x4ecbed:c.instructions+=5;goto B4ecbed;
case 0x4ecbef:c.instructions+=4;goto B4ecbef;
case 0x4ecbf2:c.instructions+=3;goto B4ecbf2;
case 0x4ecbf5:c.instructions+=2;goto B4ecbf5;
case 0x4ecbf7:c.instructions+=1;goto B4ecbf7;
case 0x4ecbf9:goto L4ecbf9;
case 0x4ecbff:c.instructions+=2;goto B4ecbff;
case 0x4ecc04:c.instructions+=1;goto B4ecc04;
case 0x4ecc09:goto L4ecc09;
case 0x4ecc0b:c.instructions+=1;goto B4ecc0b;
case 0x4ecc0d:goto L4ecc0d;
case 0x4ecc10:goto L4ecc10;
case 0x4ecc13:c.instructions+=1;goto B4ecc13;
case 0x4ecc15:goto L4ecc15;
case 0x4ecc17:c.instructions+=2;goto B4ecc17;
case 0x4ecc19:c.instructions+=1;goto B4ecc19;
case 0x4ecc1b:goto L4ecc1b;
case 0x4ecc21:c.instructions+=1;goto B4ecc21;
case 0x4ecc26:goto L4ecc26;
case 0x4ecc28:c.instructions+=1;goto B4ecc28;
case 0x4ecc2a:goto L4ecc2a;
case 0x4ecc2d:c.instructions+=1;goto B4ecc2d;
case 0x4ecc2f:goto L4ecc2f;
case 0x4ecc31:goto L4ecc31;
case 0x4ecc37:c.instructions+=4;goto B4ecc37;
case 0x4ecc3c:c.instructions+=3;goto B4ecc3c;
case 0x4ecc3f:c.instructions+=2;goto B4ecc3f;
case 0x4ecc46:c.instructions+=1;goto B4ecc46;
case 0x4ecc48:goto L4ecc48;
case 0x4ecc4d:c.instructions+=3;goto B4ecc4d;
case 0x4ecc4e:c.instructions+=2;goto B4ecc4e;
case 0x4ecc4f:c.instructions+=1;goto B4ecc4f;
case 0x4ecc54:goto L4ecc54;
case 0x4ecc57:c.instructions+=3;goto B4ecc57;
case 0x4ecc5a:c.instructions+=2;goto B4ecc5a;
case 0x4ecc5c:c.instructions+=1;goto B4ecc5c;
case 0x4ecc5e:goto L4ecc5e;
case 0x4ecc62:c.instructions+=7;goto B4ecc62;
case 0x4ecc63:c.instructions+=6;goto B4ecc63;
case 0x4ecc64:c.instructions+=5;goto B4ecc64;
case 0x4ecc65:c.instructions+=4;goto B4ecc65;
case 0x4ecc66:c.instructions+=3;goto B4ecc66;
case 0x4ecc6d:c.instructions+=2;goto B4ecc6d;
case 0x4ecc70:c.instructions+=1;goto B4ecc70;
case 0x4ecc80:goto L4ecc80;
case 0x4ecc82:c.instructions+=8;goto B4ecc82;
case 0x4ecc87:c.instructions+=7;goto B4ecc87;
case 0x4ecc8d:c.instructions+=6;goto B4ecc8d;
case 0x4ecc8e:c.instructions+=5;goto B4ecc8e;
case 0x4ecc95:c.instructions+=4;goto B4ecc95;
case 0x4ecc96:c.instructions+=3;goto B4ecc96;
case 0x4ecc9b:c.instructions+=2;goto B4ecc9b;
case 0x4ecc9d:c.instructions+=1;goto B4ecc9d;
case 0x4ecc9f:goto L4ecc9f;
case 0x4ecca4:c.instructions+=2;goto B4ecca4;
case 0x4ecca6:c.instructions+=1;goto B4ecca6;
case 0x4ecca8:goto L4ecca8;
case 0x4ecca9:c.instructions+=3;goto B4ecca9;
case 0x4eccad:c.instructions+=2;goto B4eccad;
case 0x4eccae:c.instructions+=1;goto B4eccae;
case 0x4eccb3:goto L4eccb3;
case 0x4eccb5:c.instructions+=1;goto B4eccb5;
case 0x4eccba:goto L4eccba;
case 0x4eccbd:c.instructions+=4;goto B4eccbd;
case 0x4eccc1:c.instructions+=3;goto B4eccc1;
case 0x4eccc3:c.instructions+=2;goto B4eccc3;
case 0x4ecccb:c.instructions+=1;goto B4ecccb;
case 0x4ecccd:goto L4ecccd;
case 0x4eccce:c.instructions+=2;goto B4eccce;
case 0x4eccd0:c.instructions+=1;goto B4eccd0;
case 0x4eccd5:goto L4eccd5;
case 0x4eccd7:goto L4eccd7;
case 0x4eccd9:goto L4eccd9;
case 0x4eccde:c.instructions+=1;goto B4eccde;
case 0x4eccdf:goto L4eccdf;
case 0x4ecce3:c.instructions+=3;goto B4ecce3;
case 0x4eccea:c.instructions+=2;goto B4eccea;
case 0x4ecced:c.instructions+=1;goto B4ecced;
case 0x4eccf0:goto L4eccf0;
case 0x4eccf6:c.instructions+=2;goto B4eccf6;
case 0x4eccf8:c.instructions+=1;goto B4eccf8;
case 0x4eccfa:goto L4eccfa;
case 0x4eccfe:c.instructions+=2;goto B4eccfe;
case 0x4eccff:c.instructions+=1;goto B4eccff;
case 0x4ecd04:goto L4ecd04;
case 0x4ecd10:goto L4ecd10;
case 0x4ecd12:c.instructions+=14;goto B4ecd12;
case 0x4ecd17:c.instructions+=13;goto B4ecd17;
case 0x4ecd1d:c.instructions+=12;goto B4ecd1d;
case 0x4ecd1e:c.instructions+=11;goto B4ecd1e;
case 0x4ecd25:c.instructions+=10;goto B4ecd25;
case 0x4ecd26:c.instructions+=9;goto B4ecd26;
case 0x4ecd2a:c.instructions+=8;goto B4ecd2a;
case 0x4ecd2b:c.instructions+=7;goto B4ecd2b;
case 0x4ecd2c:c.instructions+=6;goto B4ecd2c;
case 0x4ecd2d:c.instructions+=5;goto B4ecd2d;
case 0x4ecd2e:c.instructions+=4;goto B4ecd2e;
case 0x4ecd30:c.instructions+=3;goto B4ecd30;
case 0x4ecd31:c.instructions+=2;goto B4ecd31;
case 0x4ecd35:c.instructions+=1;goto B4ecd35;
case 0x4ecd3a:goto L4ecd3a;
case 0x4ecd3d:c.instructions+=28;goto B4ecd3d;
case 0x4ecd3f:c.instructions+=27;goto B4ecd3f;
case 0x4ecd45:c.instructions+=26;goto B4ecd45;
case 0x4ecd49:c.instructions+=25;goto B4ecd49;
case 0x4ecd4b:c.instructions+=24;goto B4ecd4b;
case 0x4ecd4e:c.instructions+=23;goto B4ecd4e;
case 0x4ecd51:c.instructions+=22;goto B4ecd51;
case 0x4ecd53:c.instructions+=21;goto B4ecd53;
case 0x4ecd56:c.instructions+=20;goto B4ecd56;
case 0x4ecd59:c.instructions+=19;goto B4ecd59;
case 0x4ecd5b:c.instructions+=18;goto B4ecd5b;
case 0x4ecd5e:c.instructions+=17;goto B4ecd5e;
case 0x4ecd61:c.instructions+=16;goto B4ecd61;
case 0x4ecd62:c.instructions+=15;goto B4ecd62;
case 0x4ecd63:c.instructions+=14;goto B4ecd63;
case 0x4ecd65:c.instructions+=13;goto B4ecd65;
case 0x4ecd6a:c.instructions+=12;goto B4ecd6a;
case 0x4ecd70:c.instructions+=11;goto B4ecd70;
case 0x4ecd71:c.instructions+=10;goto B4ecd71;
case 0x4ecd73:c.instructions+=9;goto B4ecd73;
case 0x4ecd78:c.instructions+=8;goto B4ecd78;
case 0x4ecd7b:c.instructions+=7;goto B4ecd7b;
case 0x4ecd7e:c.instructions+=6;goto B4ecd7e;
case 0x4ecd81:c.instructions+=5;goto B4ecd81;
case 0x4ecd84:c.instructions+=4;goto B4ecd84;
case 0x4ecd87:c.instructions+=3;goto B4ecd87;
case 0x4ecd8a:c.instructions+=2;goto B4ecd8a;
case 0x4ecd8d:c.instructions+=1;goto B4ecd8d;
case 0x4ecd92:goto L4ecd92;
case 0x4ecd98:c.instructions+=37;goto B4ecd98;
case 0x4ecda2:c.instructions+=36;goto B4ecda2;
case 0x4ecdac:c.instructions+=35;goto B4ecdac;
case 0x4ecdb6:c.instructions+=34;goto B4ecdb6;
case 0x4ecdbc:c.instructions+=33;goto B4ecdbc;
case 0x4ecdc2:c.instructions+=32;goto B4ecdc2;
case 0x4ecdc8:c.instructions+=31;goto B4ecdc8;
case 0x4ecdce:c.instructions+=30;goto B4ecdce;
case 0x4ecdd4:c.instructions+=29;goto B4ecdd4;
case 0x4ecdda:c.instructions+=28;goto B4ecdda;
case 0x4ecddf:c.instructions+=27;goto B4ecddf;
case 0x4ecde5:c.instructions+=26;goto B4ecde5;
case 0x4ecdea:c.instructions+=25;goto B4ecdea;
case 0x4ecdf0:c.instructions+=24;goto B4ecdf0;
case 0x4ecdf6:c.instructions+=23;goto B4ecdf6;
case 0x4ecdfc:c.instructions+=22;goto B4ecdfc;
case 0x4ece02:c.instructions+=21;goto B4ece02;
case 0x4ece08:c.instructions+=20;goto B4ece08;
case 0x4ece0e:c.instructions+=19;goto B4ece0e;
case 0x4ece14:c.instructions+=18;goto B4ece14;
case 0x4ece1e:c.instructions+=17;goto B4ece1e;
case 0x4ece24:c.instructions+=16;goto B4ece24;
case 0x4ece27:c.instructions+=15;goto B4ece27;
case 0x4ece2c:c.instructions+=14;goto B4ece2c;
case 0x4ece31:c.instructions+=13;goto B4ece31;
case 0x4ece37:c.instructions+=12;goto B4ece37;
case 0x4ece3d:c.instructions+=11;goto B4ece3d;
case 0x4ece47:c.instructions+=10;goto B4ece47;
case 0x4ece4d:c.instructions+=9;goto B4ece4d;
case 0x4ece53:c.instructions+=8;goto B4ece53;
case 0x4ece59:c.instructions+=7;goto B4ece59;
case 0x4ece5f:c.instructions+=6;goto B4ece5f;
case 0x4ece65:c.instructions+=5;goto B4ece65;
case 0x4ece6b:c.instructions+=4;goto B4ece6b;
case 0x4ece71:c.instructions+=3;goto B4ece71;
case 0x4ece77:c.instructions+=2;goto B4ece77;
case 0x4ece7b:c.instructions+=1;goto B4ece7b;
case 0x4ece80:goto L4ece80;
case 0x4ece81:c.instructions+=3;goto B4ece81;
case 0x4ece85:c.instructions+=2;goto B4ece85;
case 0x4ece86:c.instructions+=1;goto B4ece86;
case 0x4ece8b:goto L4ece8b;
case 0x4ece8e:c.instructions+=4;goto B4ece8e;
case 0x4ece93:c.instructions+=3;goto B4ece93;
case 0x4ece96:c.instructions+=2;goto B4ece96;
case 0x4ece9a:c.instructions+=1;goto B4ece9a;
case 0x4ece9f:goto L4ece9f;
case 0x4ecea3:c.instructions+=3;goto B4ecea3;
case 0x4ecea4:c.instructions+=2;goto B4ecea4;
case 0x4ecea5:c.instructions+=1;goto B4ecea5;
case 0x4eceaa:goto L4eceaa;
case 0x4ecead:c.instructions+=4;goto B4ecead;
case 0x4eceb0:c.instructions+=3;goto B4eceb0;
case 0x4eceb5:c.instructions+=2;goto B4eceb5;
case 0x4eceb9:c.instructions+=1;goto B4eceb9;
case 0x4ecebe:goto L4ecebe;
case 0x4ecec2:c.instructions+=3;goto B4ecec2;
case 0x4ecec3:c.instructions+=2;goto B4ecec3;
case 0x4ecec4:c.instructions+=1;goto B4ecec4;
case 0x4ecec9:goto L4ecec9;
case 0x4ececc:c.instructions+=4;goto B4ececc;
case 0x4eced1:c.instructions+=3;goto B4eced1;
case 0x4eced4:c.instructions+=2;goto B4eced4;
case 0x4eced8:c.instructions+=1;goto B4eced8;
case 0x4ecedd:goto L4ecedd;
case 0x4ecede:c.instructions+=3;goto B4ecede;
case 0x4ecee2:c.instructions+=2;goto B4ecee2;
case 0x4ecee3:c.instructions+=1;goto B4ecee3;
case 0x4ecee8:goto L4ecee8;
case 0x4eceeb:c.instructions+=4;goto B4eceeb;
case 0x4eceee:c.instructions+=3;goto B4eceee;
case 0x4ecef1:c.instructions+=2;goto B4ecef1;
case 0x4ecef3:c.instructions+=1;goto B4ecef3;
case 0x4ecef9:goto L4ecef9;
case 0x4ecefc:c.instructions+=1;goto B4ecefc;
case 0x4ecf02:goto L4ecf02;
case 0x4ecf05:c.instructions+=1;goto B4ecf05;
case 0x4ecf0b:goto L4ecf0b;
case 0x4ecf0c:c.instructions+=4;goto B4ecf0c;
case 0x4ecf0d:c.instructions+=3;goto B4ecf0d;
case 0x4ecf0e:c.instructions+=2;goto B4ecf0e;
case 0x4ecf10:c.instructions+=1;goto B4ecf10;
case 0x4ecf15:goto L4ecf15;
case 0x4ecf17:c.instructions+=1;goto B4ecf17;
case 0x4ecf1c:goto L4ecf1c;
case 0x4ecf1f:c.instructions+=5;goto B4ecf1f;
case 0x4ecf24:c.instructions+=4;goto B4ecf24;
case 0x4ecf29:c.instructions+=3;goto B4ecf29;
case 0x4ecf2a:c.instructions+=2;goto B4ecf2a;
case 0x4ecf2d:c.instructions+=1;goto B4ecf2d;
case 0x4ecf32:goto L4ecf32;
case 0x4ecf35:c.instructions+=2;goto B4ecf35;
case 0x4ecf36:c.instructions+=1;goto B4ecf36;
case 0x4ecf3b:goto L4ecf3b;
case 0x4ecf3e:c.instructions+=5;goto B4ecf3e;
case 0x4ecf41:c.instructions+=4;goto B4ecf41;
case 0x4ecf46:c.instructions+=3;goto B4ecf46;
case 0x4ecf4b:c.instructions+=2;goto B4ecf4b;
case 0x4ecf4c:c.instructions+=1;goto B4ecf4c;
case 0x4ecf51:goto L4ecf51;
case 0x4ecf54:c.instructions+=2;goto B4ecf54;
case 0x4ecf55:c.instructions+=1;goto B4ecf55;
case 0x4ecf5a:goto L4ecf5a;
case 0x4ecf5d:c.instructions+=3;goto B4ecf5d;
case 0x4ecf62:c.instructions+=2;goto B4ecf62;
case 0x4ecf66:c.instructions+=1;goto B4ecf66;
case 0x4ecf6b:goto L4ecf6b;
case 0x4ecf6f:c.instructions+=3;goto B4ecf6f;
case 0x4ecf70:c.instructions+=2;goto B4ecf70;
case 0x4ecf71:c.instructions+=1;goto B4ecf71;
case 0x4ecf76:goto L4ecf76;
case 0x4ecf7b:c.instructions+=3;goto B4ecf7b;
case 0x4ecf7c:c.instructions+=2;goto B4ecf7c;
case 0x4ecf82:c.instructions+=1;goto B4ecf82;
case 0x4ecf87:goto L4ecf87;
case 0x4ecf8a:c.instructions+=3;goto B4ecf8a;
case 0x4ecf8f:c.instructions+=2;goto B4ecf8f;
case 0x4ecf90:c.instructions+=1;goto B4ecf90;
case 0x4ecf95:goto L4ecf95;
case 0x4ecf9b:c.instructions+=4;goto B4ecf9b;
case 0x4ecf9e:c.instructions+=3;goto B4ecf9e;
case 0x4ecfa3:c.instructions+=2;goto B4ecfa3;
case 0x4ecfa4:c.instructions+=1;goto B4ecfa4;
case 0x4ecfa9:goto L4ecfa9;
case 0x4ecfaf:c.instructions+=4;goto B4ecfaf;
case 0x4ecfb2:c.instructions+=3;goto B4ecfb2;
case 0x4ecfb7:c.instructions+=2;goto B4ecfb7;
case 0x4ecfb8:c.instructions+=1;goto B4ecfb8;
case 0x4ecfbd:goto L4ecfbd;
case 0x4ecfbf:c.instructions+=4;goto B4ecfbf;
case 0x4ecfc4:c.instructions+=3;goto B4ecfc4;
case 0x4ecfc5:c.instructions+=2;goto B4ecfc5;
case 0x4ecfcb:c.instructions+=1;goto B4ecfcb;
case 0x4ecfd0:goto L4ecfd0;
case 0x4ecfd3:c.instructions+=2;goto B4ecfd3;
case 0x4ecfd5:c.instructions+=1;goto B4ecfd5;
case 0x4ecfda:goto L4ecfda;
case 0x4ecfdd:c.instructions+=4;goto B4ecfdd;
case 0x4ecfe2:c.instructions+=3;goto B4ecfe2;
case 0x4ecfe7:c.instructions+=2;goto B4ecfe7;
case 0x4ecfe8:c.instructions+=1;goto B4ecfe8;
case 0x4ecfed:goto L4ecfed;
case 0x4ecff0:c.instructions+=2;goto B4ecff0;
case 0x4ecff1:c.instructions+=1;goto B4ecff1;
case 0x4ecff6:goto L4ecff6;
case 0x4ecff9:c.instructions+=2;goto B4ecff9;
case 0x4ecffb:c.instructions+=1;goto B4ecffb;
default:missing_instruction(c.pc);}
B4ec005:L4ec005:{c.instructions+=3;NFSU2_TR(0x4ec005);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ec008:{NFSU2_TR(0x4ec008);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4ec00e:{NFSU2_TR(0x4ec00e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec013ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4ec013:L4ec013:{c.instructions+=6;NFSU2_TR(0x4ec013);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec015:{NFSU2_TR(0x4ec015);
u8 U[4];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4ec01c:{NFSU2_TR(0x4ec01c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec01d:{NFSU2_TR(0x4ec01d);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4ec021:{NFSU2_TR(0x4ec021);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec025:{NFSU2_TR(0x4ec025);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec02aull));
TAIL_STATIC(0x577240u,577);
}
B4ec02a:L4ec02a:{c.instructions+=6;NFSU2_TR(0x4ec02a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec02d:{NFSU2_TR(0x4ec02d);
u8 U[4];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4ec034:{NFSU2_TR(0x4ec034);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec035:{NFSU2_TR(0x4ec035);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec03a:{NFSU2_TR(0x4ec03a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec03b:{NFSU2_TR(0x4ec03b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec040ull));
TAIL_STATIC(0x537be0u,537);
}
B4ec040:L4ec040:{c.instructions+=3;NFSU2_TR(0x4ec040);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ec043:{NFSU2_TR(0x4ec043);
__builtin_memmove((R+4),(R+24),4);
}
B4ec045:{NFSU2_TR(0x4ec045);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec04aull));
TAIL_STATIC(0x5efa00u,5ef);
}
B4ec04a:L4ec04a:{c.instructions+=2;NFSU2_TR(0x4ec04a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ec04c:{NFSU2_TR(0x4ec04c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ec0a4;}}
}
B4ec04e:L4ec04e:{c.instructions+=2;NFSU2_TR(0x4ec04e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ec052:{NFSU2_TR(0x4ec052);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec057ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4ec057:L4ec057:{c.instructions+=3;NFSU2_TR(0x4ec057);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec05b:{NFSU2_TR(0x4ec05b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80000001ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ec060:{NFSU2_TR(0x4ec060);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L4ec067;}}
}
B4ec062:L4ec062:{c.instructions+=3;NFSU2_TR(0x4ec062);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4ec063:{NFSU2_TR(0x4ec063);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xfffffffeull))));
}
B4ec066:{NFSU2_TR(0x4ec066);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ec067:L4ec067:{c.instructions+=1;NFSU2_TR(0x4ec067);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ec0a4;}}
}
B4ec069:L4ec069:{c.instructions+=7;NFSU2_TR(0x4ec069);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4ec06d:{NFSU2_TR(0x4ec06d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4ec071:{NFSU2_TR(0x4ec071);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4ec073:{NFSU2_TR(0x4ec073);
{u32 ea_=u32(u32(8802644u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4ec079:{NFSU2_TR(0x4ec079);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ec07b:{NFSU2_TR(0x4ec07b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4ec07e:{NFSU2_TR(0x4ec07e);
if(r1(R+514)){{goto L4ec0a4;}}
}
B4ec080:L4ec080:{c.instructions+=2;NFSU2_TR(0x4ec080);
u8 U[4];
w4(U+0,u32(0x862a0519ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec085:{NFSU2_TR(0x4ec085);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec08aull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4ec08a:L4ec08a:{c.instructions+=4;NFSU2_TR(0x4ec08a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec08d:{NFSU2_TR(0x4ec08d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ec090:{NFSU2_TR(0x4ec090);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec091:{NFSU2_TR(0x4ec091);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec096ull));
TAIL_STATIC(0x4ebac0u,4eb);
}
B4ec096:L4ec096:{c.instructions+=1;NFSU2_TR(0x4ec096);
{goto L4ec0a4;}
}
B4ec098:L4ec098:{c.instructions+=3;NFSU2_TR(0x4ec098);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ec09b:{NFSU2_TR(0x4ec09b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec09c:{NFSU2_TR(0x4ec09c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec0a1ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4ec0a1:L4ec0a1:{c.instructions+=1;NFSU2_TR(0x4ec0a1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ec0a4:L4ec0a4:{c.instructions+=3;NFSU2_TR(0x4ec0a4);
__builtin_memmove((R+0),gp(0x8500c9),1);
}
B4ec0a9:{NFSU2_TR(0x4ec0a9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ec0ab:{NFSU2_TR(0x4ec0ab);
if(r1(R+518)){{goto L4ec0cb;}}
}
B4ec0ad:L4ec0ad:{c.instructions+=3;NFSU2_TR(0x4ec0ad);
__builtin_memmove((R+0),gp(0x89cf48),4);
}
B4ec0b2:{NFSU2_TR(0x4ec0b2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ec0b5:{NFSU2_TR(0x4ec0b5);
if(r1(R+518)){{goto L4ec0cb;}}
}
B4ec0b7:L4ec0b7:{c.instructions+=2;NFSU2_TR(0x4ec0b7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ec0ba:{NFSU2_TR(0x4ec0ba);
if(r1(R+518)){{goto L4ec0cb;}}
}
B4ec0bc:L4ec0bc:{c.instructions+=4;NFSU2_TR(0x4ec0bc);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B4ec0c1:{NFSU2_TR(0x4ec0c1);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4ec0c4:{NFSU2_TR(0x4ec0c4);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ec0c9:{NFSU2_TR(0x4ec0c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ec0d0;}}
}
B4ec0cb:L4ec0cb:{c.instructions+=1;NFSU2_TR(0x4ec0cb);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ec0d0:L4ec0d0:{c.instructions+=2;NFSU2_TR(0x4ec0d0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4ec0d2:{NFSU2_TR(0x4ec0d2);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x38ull))));
}
B4ec0d5:L4ec0d5:{c.instructions+=2;NFSU2_TR(0x4ec0d5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec0d7:{NFSU2_TR(0x4ec0d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec0dcull));
TAIL_STATIC(0x48b1e0u,48b);
}
B4ec0dc:L4ec0dc:{c.instructions+=5;NFSU2_TR(0x4ec0dc);
__builtin_memmove((R+4),gp(0x890080),4);
}
B4ec0e2:{NFSU2_TR(0x4ec0e2);
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
B4ec0e5:{NFSU2_TR(0x4ec0e5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec0e6:{NFSU2_TR(0x4ec0e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec0ea:{NFSU2_TR(0x4ec0ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec0efull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B4ec0ef:L4ec0ef:{c.instructions+=3;NFSU2_TR(0x4ec0ef);
__builtin_memmove((R+28),(R+0),4);
}
B4ec0f1:{NFSU2_TR(0x4ec0f1);
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
B4ec0f3:{NFSU2_TR(0x4ec0f3);
if(r1(R+518)){{goto L4ec466;}}
}
B4ec0f9:L4ec0f9:{c.instructions+=2;NFSU2_TR(0x4ec0f9);
__builtin_memmove((R+4),(R+28),4);
}
B4ec0fb:{NFSU2_TR(0x4ec0fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec100ull));
TAIL_STATIC(0x5ec060u,5ec);
}
B4ec100:L4ec100:{c.instructions+=2;NFSU2_TR(0x4ec100);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ec102:{NFSU2_TR(0x4ec102);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ec466;}}
}
B4ec108:L4ec108:{c.instructions+=3;NFSU2_TR(0x4ec108);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4ec10c:{NFSU2_TR(0x4ec10c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ec10e:{NFSU2_TR(0x4ec10e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ec466;}}
}
B4ec114:L4ec114:{c.instructions+=3;NFSU2_TR(0x4ec114);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89cf50ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4ec11b:{NFSU2_TR(0x4ec11b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ec11d:{NFSU2_TR(0x4ec11d);
if(r1(R+518)){{goto L4ec466;}}
}
B4ec123:L4ec123:{c.instructions+=2;NFSU2_TR(0x4ec123);
u8 U[14];
__builtin_memmove((U+6),gp(0x89cf48),4);
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
B4ec12a:{NFSU2_TR(0x4ec12a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4ec15c;}}
}
B4ec12c:L4ec12c:{c.instructions+=3;NFSU2_TR(0x4ec12c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec12d:{NFSU2_TR(0x4ec12d);
w4(R+4,u32(0x89cf48ull));
}
B4ec132:{NFSU2_TR(0x4ec132);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec137ull));
TAIL_STATIC(0x5f0220u,5f0);
}
B4ec137:L4ec137:{c.instructions+=3;NFSU2_TR(0x4ec137);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ec139:{NFSU2_TR(0x4ec139);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ec13c:{NFSU2_TR(0x4ec13c);
if(r1(R+518)){{goto L4ec466;}}
}
B4ec142:L4ec142:{c.instructions+=2;NFSU2_TR(0x4ec142);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ec145:{NFSU2_TR(0x4ec145);
if(r1(R+518)){{goto L4ec466;}}
}
B4ec14b:L4ec14b:{c.instructions+=2;NFSU2_TR(0x4ec14b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ec14d:{NFSU2_TR(0x4ec14d);
if(r1(R+518)){{goto L4ec466;}}
}
B4ec153:L4ec153:{c.instructions+=2;NFSU2_TR(0x4ec153);
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
B4ec156:{NFSU2_TR(0x4ec156);
if(r1(R+518)){{goto L4ec466;}}
}
B4ec15c:L4ec15c:{c.instructions+=5;NFSU2_TR(0x4ec15c);
__builtin_memmove((R+4),gp(0x89cf4c),4);
}
B4ec162:{NFSU2_TR(0x4ec162);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec166:{NFSU2_TR(0x4ec166);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec167:{NFSU2_TR(0x4ec167);
w4(R+4,u32(0x89cf48ull));
}
B4ec16c:{NFSU2_TR(0x4ec16c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec171ull));
TAIL_STATIC(0x5f0220u,5f0);
}
B4ec171:L4ec171:{c.instructions+=2;NFSU2_TR(0x4ec171);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4ec175:{NFSU2_TR(0x4ec175);
if(r1(R+518)){{goto L4ec466;}}
}
B4ec17b:L4ec17b:{c.instructions+=21;NFSU2_TR(0x4ec17b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ec17f:{NFSU2_TR(0x4ec17f);
{u32 ea_=u32(r4(R+28)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ec182:{NFSU2_TR(0x4ec182);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ec185:{NFSU2_TR(0x4ec185);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4ec188:{NFSU2_TR(0x4ec188);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ec18b:{NFSU2_TR(0x4ec18b);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ec18e:{NFSU2_TR(0x4ec18e);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4ec191:{NFSU2_TR(0x4ec191);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ec194:{NFSU2_TR(0x4ec194);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4ec197:{NFSU2_TR(0x4ec197);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4ec199:{NFSU2_TR(0x4ec199);
{u32 ea_=u32(r4(R+0)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ec19c:{NFSU2_TR(0x4ec19c);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B4ec19e:{NFSU2_TR(0x4ec19e);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ec1a1:{NFSU2_TR(0x4ec1a1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4ec1a3:{NFSU2_TR(0x4ec1a3);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B4ec1a5:{NFSU2_TR(0x4ec1a5);
{u32 ea_=u32(r4(R+0)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ec1a8:{NFSU2_TR(0x4ec1a8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4ec1aa:{NFSU2_TR(0x4ec1aa);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4ec1b0:{NFSU2_TR(0x4ec1b0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ec1b2:{NFSU2_TR(0x4ec1b2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4ec1b5:{NFSU2_TR(0x4ec1b5);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4ec45b;}}
}
B4ec1bb:L4ec1bb:{c.instructions+=17;NFSU2_TR(0x4ec1bb);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4ec1bd:{NFSU2_TR(0x4ec1bd);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4ec1bf:{NFSU2_TR(0x4ec1bf);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B4ec1c1:{NFSU2_TR(0x4ec1c1);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B4ec1c3:{NFSU2_TR(0x4ec1c3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4ec1c5:{NFSU2_TR(0x4ec1c5);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B4ec1c7:{NFSU2_TR(0x4ec1c7);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B4ec1c9:{NFSU2_TR(0x4ec1c9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4ec1cb:{NFSU2_TR(0x4ec1cb);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ec1cf:{NFSU2_TR(0x4ec1cf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4ec1d1:{NFSU2_TR(0x4ec1d1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4ec1d3:{NFSU2_TR(0x4ec1d3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4ec1d5:{NFSU2_TR(0x4ec1d5);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ec1d9:{NFSU2_TR(0x4ec1d9);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4ec1df:{NFSU2_TR(0x4ec1df);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ec1e1:{NFSU2_TR(0x4ec1e1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ec1e4:{NFSU2_TR(0x4ec1e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ec461;}}
}
B4ec1ea:L4ec1ea:{c.instructions+=5;NFSU2_TR(0x4ec1ea);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ec1ee:{NFSU2_TR(0x4ec1ee);
{u32 ea_=u32(u32(7881984u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4ec1f4:{NFSU2_TR(0x4ec1f4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ec1f6:{NFSU2_TR(0x4ec1f6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4ec1f9:{NFSU2_TR(0x4ec1f9);
if(r1(R+514)){{goto L4ec461;}}
}
B4ec1ff:L4ec1ff:{c.instructions+=6;NFSU2_TR(0x4ec1ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec200:{NFSU2_TR(0x4ec200);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x90ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x90ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x90ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ec206:{NFSU2_TR(0x4ec206);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4ec20a:{NFSU2_TR(0x4ec20a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec20b:{NFSU2_TR(0x4ec20b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec20c:{NFSU2_TR(0x4ec20c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec211ull));
TAIL_STATIC(0x401340u,401);
}
B4ec211:L4ec211:{c.instructions+=35;NFSU2_TR(0x4ec211);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ec218:{NFSU2_TR(0x4ec218);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4ec21c:{NFSU2_TR(0x4ec21c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ec220:{NFSU2_TR(0x4ec220);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ec223:{NFSU2_TR(0x4ec223);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4ec227:{NFSU2_TR(0x4ec227);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ec22d:{NFSU2_TR(0x4ec22d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec22e:{NFSU2_TR(0x4ec22e);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ec235:{NFSU2_TR(0x4ec235);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4ec239:{NFSU2_TR(0x4ec239);
{u32 ea_=u32(u32(7961948u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ec23f:{NFSU2_TR(0x4ec23f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec240:{NFSU2_TR(0x4ec240);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4ec242:{NFSU2_TR(0x4ec242);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4ec249:{NFSU2_TR(0x4ec249);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ec250:{NFSU2_TR(0x4ec250);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4ec254:{NFSU2_TR(0x4ec254);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ec25a:{NFSU2_TR(0x4ec25a);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ec261:{NFSU2_TR(0x4ec261);
{u32 ea_=u32(u32(7961948u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ec267:{NFSU2_TR(0x4ec267);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4ec269:{NFSU2_TR(0x4ec269);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4ec270:{NFSU2_TR(0x4ec270);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ec277:{NFSU2_TR(0x4ec277);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4ec27e:{NFSU2_TR(0x4ec27e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ec284:{NFSU2_TR(0x4ec284);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ec28b:{NFSU2_TR(0x4ec28b);
{u32 ea_=u32(u32(7961948u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ec291:{NFSU2_TR(0x4ec291);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4ec293:{NFSU2_TR(0x4ec293);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4ec29a:{NFSU2_TR(0x4ec29a);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ec2a1:{NFSU2_TR(0x4ec2a1);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec2a8:{NFSU2_TR(0x4ec2a8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4ec2aa:{NFSU2_TR(0x4ec2aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec2ae:{NFSU2_TR(0x4ec2ae);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ec2b2:{NFSU2_TR(0x4ec2b2);
__builtin_memmove((R+4),(R+28),4);
}
B4ec2b4:{NFSU2_TR(0x4ec2b4);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ec2b8:{NFSU2_TR(0x4ec2b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec2bdull));
TAIL_STATIC(0x5bc4a0u,5bc);
}
B4ec2bd:L4ec2bd:{c.instructions+=2;NFSU2_TR(0x4ec2bd);
__builtin_memmove((R+4),(R+28),4);
}
B4ec2bf:{NFSU2_TR(0x4ec2bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec2c4ull));
TAIL_STATIC(0x5bc1f0u,5bc);
}
B4ec2c4:L4ec2c4:{c.instructions+=5;NFSU2_TR(0x4ec2c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec2c8:{NFSU2_TR(0x4ec2c8);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4ec2cc:{NFSU2_TR(0x4ec2cc);
__builtin_memmove((R+4),(R+28),4);
}
B4ec2ce:{NFSU2_TR(0x4ec2ce);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ec2d2:{NFSU2_TR(0x4ec2d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec2d7ull));
TAIL_STATIC(0x5bc200u,5bc);
}
B4ec2d7:L4ec2d7:{c.instructions+=8;NFSU2_TR(0x4ec2d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec2db:{NFSU2_TR(0x4ec2db);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4ec2df:{NFSU2_TR(0x4ec2df);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ec2e3:{NFSU2_TR(0x4ec2e3);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ec2e7:{NFSU2_TR(0x4ec2e7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4ec2ed:{NFSU2_TR(0x4ec2ed);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ec2ef:{NFSU2_TR(0x4ec2ef);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ec2f2:{NFSU2_TR(0x4ec2f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ec461;}}
}
B4ec2f8:L4ec2f8:{c.instructions+=5;NFSU2_TR(0x4ec2f8);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ec2fc:{NFSU2_TR(0x4ec2fc);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4ec302:{NFSU2_TR(0x4ec302);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ec304:{NFSU2_TR(0x4ec304);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ec307:{NFSU2_TR(0x4ec307);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ec461;}}
}
B4ec30d:L4ec30d:{c.instructions+=5;NFSU2_TR(0x4ec30d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ec311:{NFSU2_TR(0x4ec311);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4ec315:{NFSU2_TR(0x4ec315);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ec317:{NFSU2_TR(0x4ec317);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4ec31a:{NFSU2_TR(0x4ec31a);
if(r1(R+514)){{goto L4ec461;}}
}
B4ec320:L4ec320:{c.instructions+=5;NFSU2_TR(0x4ec320);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ec324:{NFSU2_TR(0x4ec324);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4ec32a:{NFSU2_TR(0x4ec32a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ec32c:{NFSU2_TR(0x4ec32c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ec32f:{NFSU2_TR(0x4ec32f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ec461;}}
}
B4ec335:L4ec335:{c.instructions+=5;NFSU2_TR(0x4ec335);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ec339:{NFSU2_TR(0x4ec339);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4ec33d:{NFSU2_TR(0x4ec33d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ec33f:{NFSU2_TR(0x4ec33f);
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
B4ec342:{NFSU2_TR(0x4ec342);
if(r1(R+514)){{goto L4ec461;}}
}
B4ec348:L4ec348:{c.instructions+=11;NFSU2_TR(0x4ec348);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ec34c:{NFSU2_TR(0x4ec34c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec34d:{NFSU2_TR(0x4ec34d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4ec351:{NFSU2_TR(0x4ec351);
w4(R+4,u32(0x89cf48ull));
}
B4ec356:{NFSU2_TR(0x4ec356);
{u32 ea_=u32(u32(7961944u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ec35c:{NFSU2_TR(0x4ec35c);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ec360:{NFSU2_TR(0x4ec360);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ec364:{NFSU2_TR(0x4ec364);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4ec368:{NFSU2_TR(0x4ec368);
{u32 ea_=u32(u32(7961940u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ec36e:{NFSU2_TR(0x4ec36e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ec372:{NFSU2_TR(0x4ec372);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec377ull));
TAIL_STATIC(0x5f0220u,5f0);
}
B4ec377:L4ec377:{c.instructions+=2;NFSU2_TR(0x4ec377);
__builtin_memmove((R+4),(R+0),4);
}
B4ec379:{NFSU2_TR(0x4ec379);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec37eull));
TAIL_STATIC(0x5fe290u,5fe);
}
B4ec37e:L4ec37e:{c.instructions+=2;NFSU2_TR(0x4ec37e);
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
B4ec380:{NFSU2_TR(0x4ec380);
if(r1(R+518)){{goto L4ec3bc;}}
}
B4ec382:L4ec382:{c.instructions+=3;NFSU2_TR(0x4ec382);
u8 U[4];
w4(U+0,u32(0x7f68e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec387:{NFSU2_TR(0x4ec387);
u8 U[4];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4ec38e:{NFSU2_TR(0x4ec38e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec393ull));
TAIL_STATIC(0x440fd0u,440);
}
B4ec393:L4ec393:{c.instructions+=3;NFSU2_TR(0x4ec393);
u8 U[4];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4ec39a:{NFSU2_TR(0x4ec39a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec39b:{NFSU2_TR(0x4ec39b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec3a0ull));
TAIL_STATIC(0x4a9df0u,4a9);
}
B4ec3a0:L4ec3a0:{c.instructions+=4;NFSU2_TR(0x4ec3a0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ec3a3:{NFSU2_TR(0x4ec3a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec3a4:{NFSU2_TR(0x4ec3a4);
u8 U[4];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4ec3ab:{NFSU2_TR(0x4ec3ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec3b0ull));
TAIL_STATIC(0x5054a0u,505);
}
B4ec3b0:L4ec3b0:{c.instructions+=4;NFSU2_TR(0x4ec3b0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec3b2:{NFSU2_TR(0x4ec3b2);
u8 U[4];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4ec3b9:{NFSU2_TR(0x4ec3b9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec3ba:{NFSU2_TR(0x4ec3ba);
{goto L4ec3d8;}
}
B4ec3bc:L4ec3bc:{c.instructions+=8;NFSU2_TR(0x4ec3bc);
w4(R+0,u32(0xffull));
}
B4ec3c1:{NFSU2_TR(0x4ec3c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec3c5:{NFSU2_TR(0x4ec3c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec3c9:{NFSU2_TR(0x4ec3c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec3cd:{NFSU2_TR(0x4ec3cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec3d1:{NFSU2_TR(0x4ec3d1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec3d3:{NFSU2_TR(0x4ec3d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4ec3d7:{NFSU2_TR(0x4ec3d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec3d8:L4ec3d8:{c.instructions+=2;NFSU2_TR(0x4ec3d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4ec3da:{NFSU2_TR(0x4ec3da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec3dfull));
TAIL_STATIC(0x517e20u,517);
}
B4ec3df:L4ec3df:{c.instructions+=13;NFSU2_TR(0x4ec3df);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ec3e3:{NFSU2_TR(0x4ec3e3);
{u32 ea_=u32(u32(7961936u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4ec3e9:{NFSU2_TR(0x4ec3e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec3ed:{NFSU2_TR(0x4ec3ed);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec3ef:{NFSU2_TR(0x4ec3ef);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4ec3f3:{NFSU2_TR(0x4ec3f3);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ec3f7:{NFSU2_TR(0x4ec3f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec3fb:{NFSU2_TR(0x4ec3fb);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ec3ff:{NFSU2_TR(0x4ec3ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4ec401:{NFSU2_TR(0x4ec401);
{u32 ea_=u32(u32(7920176u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4ec407:{NFSU2_TR(0x4ec407);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec408:{NFSU2_TR(0x4ec408);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ec40c:{NFSU2_TR(0x4ec40c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec411ull));
TAIL_STATIC(0x517c10u,517);
}
B4ec411:L4ec411:{c.instructions+=8;NFSU2_TR(0x4ec411);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ec415:{NFSU2_TR(0x4ec415);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B4ec417:{NFSU2_TR(0x4ec417);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec41c:{NFSU2_TR(0x4ec41c);
u8 U[4];
w4(U+0,u32(0x3f000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec421:{NFSU2_TR(0x4ec421);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec422:{NFSU2_TR(0x4ec422);
{u32 ea_=u32(u32(7909400u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B4ec428:{NFSU2_TR(0x4ec428);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ec42b:{NFSU2_TR(0x4ec42b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec430ull));
TAIL_STATIC(0x401090u,401);
}
B4ec430:L4ec430:{c.instructions+=9;NFSU2_TR(0x4ec430);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4ec434:{NFSU2_TR(0x4ec434);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4ec436:{NFSU2_TR(0x4ec436);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ec43a:{NFSU2_TR(0x4ec43a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ec43d:{NFSU2_TR(0x4ec43d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec43f:{NFSU2_TR(0x4ec43f);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4ec443:{NFSU2_TR(0x4ec443);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec444:{NFSU2_TR(0x4ec444);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ec44c:{NFSU2_TR(0x4ec44c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec451ull));
TAIL_STATIC(0x517db0u,517);
}
B4ec451:L4ec451:{c.instructions+=3;NFSU2_TR(0x4ec451);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4ec453:{NFSU2_TR(0x4ec453);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec454:{NFSU2_TR(0x4ec454);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec459ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4ec459:L4ec459:{c.instructions+=1;NFSU2_TR(0x4ec459);
{goto L4ec46e;}
}
B4ec45b:L4ec45b:{c.instructions+=3;NFSU2_TR(0x4ec45b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4ec45d:{NFSU2_TR(0x4ec45d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4ec45f:{NFSU2_TR(0x4ec45f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4ec461:L4ec461:{c.instructions+=3;NFSU2_TR(0x4ec461);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4ec463:{NFSU2_TR(0x4ec463);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec464:{NFSU2_TR(0x4ec464);
{goto L4ec469;}
}
B4ec466:L4ec466:{c.instructions+=2;NFSU2_TR(0x4ec466);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ec468:{NFSU2_TR(0x4ec468);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec469:L4ec469:{c.instructions+=1;NFSU2_TR(0x4ec469);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec46eull));
TAIL_STATIC(0x50ca00u,50c);
}
B4ec46e:L4ec46e:{c.instructions+=5;NFSU2_TR(0x4ec46e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ec471:{NFSU2_TR(0x4ec471);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4ec472:{NFSU2_TR(0x4ec472);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B4ec475:{NFSU2_TR(0x4ec475);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4ec478:{NFSU2_TR(0x4ec478);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ec0d5u);}goto L4ec0d5;}}
}
B4ec47e:L4ec47e:{c.instructions+=5;NFSU2_TR(0x4ec47e);
__builtin_memmove((R+4),gp(0x865198),4);
}
B4ec484:{NFSU2_TR(0x4ec484);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ec488:{NFSU2_TR(0x4ec488);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec489:{NFSU2_TR(0x4ec489);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec48c:{NFSU2_TR(0x4ec48c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec491ull));
TAIL_STATIC(0x4eb9f0u,4eb);
}
B4ec491:L4ec491:{c.instructions+=6;NFSU2_TR(0x4ec491);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ec492:{NFSU2_TR(0x4ec492);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ec493:{NFSU2_TR(0x4ec493);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ec494:{NFSU2_TR(0x4ec494);
__builtin_memmove((R+16),(R+20),4);
}
B4ec496:{NFSU2_TR(0x4ec496);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ec497:{NFSU2_TR(0x4ec497);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ec4a0:L4ec4a0:{c.instructions+=7;NFSU2_TR(0x4ec4a0);
__builtin_memmove((R+0),gp(0x8900ac),4);
}
B4ec4a5:{NFSU2_TR(0x4ec4a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec4ab:{NFSU2_TR(0x4ec4ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
}
B4ec4b1:{NFSU2_TR(0x4ec4b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec4b2:{NFSU2_TR(0x4ec4b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ec4b5:{NFSU2_TR(0x4ec4b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ec4b7:{NFSU2_TR(0x4ec4b7);
if(r1(R+518)){{goto L4ec55e;}}
}
B4ec4bd:L4ec4bd:{c.instructions+=5;NFSU2_TR(0x4ec4bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ec4c4:{NFSU2_TR(0x4ec4c4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x12ull))));
}
B4ec4c7:{NFSU2_TR(0x4ec4c7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec4c8:{NFSU2_TR(0x4ec4c8);
u8 U[4];
w4(U+0,u32(0x44abac78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec4cd:{NFSU2_TR(0x4ec4cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec4d2ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4ec4d2:L4ec4d2:{c.instructions+=6;NFSU2_TR(0x4ec4d2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ec4d5:{NFSU2_TR(0x4ec4d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec4d6:{NFSU2_TR(0x4ec4d6);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4ec4da:{NFSU2_TR(0x4ec4da);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec4df:{NFSU2_TR(0x4ec4df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec4e0:{NFSU2_TR(0x4ec4e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec4e5ull));
TAIL_STATIC(0x50c960u,50c);
}
B4ec4e5:L4ec4e5:{c.instructions+=4;NFSU2_TR(0x4ec4e5);
__builtin_memmove((R+0),gp(0x89cf48),4);
}
B4ec4ea:{NFSU2_TR(0x4ec4ea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4ec4ed:{NFSU2_TR(0x4ec4ed);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ec4f0:{NFSU2_TR(0x4ec4f0);
if(r1(R+518)){{goto L4ec548;}}
}
B4ec4f2:L4ec4f2:{c.instructions+=4;NFSU2_TR(0x4ec4f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ec4f5:{NFSU2_TR(0x4ec4f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec4f8:{NFSU2_TR(0x4ec4f8);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4ec4fb:{NFSU2_TR(0x4ec4fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ec50d;}}
}
B4ec4fd:L4ec4fd:{c.instructions+=4;NFSU2_TR(0x4ec4fd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec4ff:{NFSU2_TR(0x4ec4ff);
__builtin_memmove((R+4),(R+24),4);
}
B4ec501:{NFSU2_TR(0x4ec501);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ec508:{NFSU2_TR(0x4ec508);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec50dull));
TAIL_STATIC(0x4eb9f0u,4eb);
}
B4ec50d:L4ec50d:{c.instructions+=4;NFSU2_TR(0x4ec50d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4ec511:{NFSU2_TR(0x4ec511);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec512:{NFSU2_TR(0x4ec512);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec513:{NFSU2_TR(0x4ec513);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec518ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B4ec518:L4ec518:{c.instructions+=3;NFSU2_TR(0x4ec518);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4ec519:{NFSU2_TR(0x4ec519);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec51a:{NFSU2_TR(0x4ec51a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec51full));
TAIL_STATIC(0x575620u,575);
}
B4ec51f:L4ec51f:{c.instructions+=5;NFSU2_TR(0x4ec51f);
__builtin_memmove((R+28),(R+0),4);
}
B4ec521:{NFSU2_TR(0x4ec521);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4ec525:{NFSU2_TR(0x4ec525);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec526:{NFSU2_TR(0x4ec526);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec527:{NFSU2_TR(0x4ec527);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec52cull));
TAIL_STATIC(0x43dbd0u,43d);
}
B4ec52c:L4ec52c:{c.instructions+=4;NFSU2_TR(0x4ec52c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4ec52f:{NFSU2_TR(0x4ec52f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec530:{NFSU2_TR(0x4ec530);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ec533:{NFSU2_TR(0x4ec533);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec538ull));
TAIL_STATIC(0x479130u,479);
}
B4ec538:L4ec538:{c.instructions+=7;NFSU2_TR(0x4ec538);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ec53b:{NFSU2_TR(0x4ec53b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4ec53c:{NFSU2_TR(0x4ec53c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ec53d:{NFSU2_TR(0x4ec53d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec540:{NFSU2_TR(0x4ec540);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ec541:{NFSU2_TR(0x4ec541);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x100ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x100ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ec547:{NFSU2_TR(0x4ec547);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ec548:L4ec548:{c.instructions+=3;NFSU2_TR(0x4ec548);
__builtin_memmove((R+0),gp(0x8363dc),4);
}
B4ec54d:{NFSU2_TR(0x4ec54d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ec54f:{NFSU2_TR(0x4ec54f);
if(r1(R+518)){{goto L4ec55e;}}
}
B4ec551:L4ec551:{c.instructions+=4;NFSU2_TR(0x4ec551);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4ec555:{NFSU2_TR(0x4ec555);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec556:{NFSU2_TR(0x4ec556);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ec559:{NFSU2_TR(0x4ec559);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec55eull));
TAIL_STATIC(0x4e9470u,4e9);
}
B4ec55e:L4ec55e:{c.instructions+=3;NFSU2_TR(0x4ec55e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ec55f:{NFSU2_TR(0x4ec55f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x100ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x100ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ec565:{NFSU2_TR(0x4ec565);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ec570:L4ec570:{c.instructions+=6;NFSU2_TR(0x4ec570);
__builtin_memmove((R+0),gp(0x8900ac),4);
}
B4ec575:{NFSU2_TR(0x4ec575);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec57b:{NFSU2_TR(0x4ec57b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec57c:{NFSU2_TR(0x4ec57c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ec57f:{NFSU2_TR(0x4ec57f);
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
B4ec581:{NFSU2_TR(0x4ec581);
if(r1(R+518)){{goto L4ec599;}}
}
B4ec583:L4ec583:{c.instructions+=2;NFSU2_TR(0x4ec583);
u8 U[4];
w4(U+0,u32(0xa2da0ccdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec588:{NFSU2_TR(0x4ec588);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec58dull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4ec58d:L4ec58d:{c.instructions+=4;NFSU2_TR(0x4ec58d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec590:{NFSU2_TR(0x4ec590);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ec593:{NFSU2_TR(0x4ec593);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec594:{NFSU2_TR(0x4ec594);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec599ull));
TAIL_STATIC(0x4ebac0u,4eb);
}
B4ec599:L4ec599:{c.instructions+=2;NFSU2_TR(0x4ec599);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ec59a:{NFSU2_TR(0x4ec59a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ec5a0:L4ec5a0:{c.instructions+=7;NFSU2_TR(0x4ec5a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec5a1:{NFSU2_TR(0x4ec5a1);
__builtin_memmove((R+24),(R+4),4);
}
B4ec5a3:{NFSU2_TR(0x4ec5a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec5a6:{NFSU2_TR(0x4ec5a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ec5a8:{NFSU2_TR(0x4ec5a8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec5a9:{NFSU2_TR(0x4ec5a9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ec5ad:{NFSU2_TR(0x4ec5ad);
if(r1(R+518)){{goto L4ec5b5;}}
}
B4ec5af:L4ec5af:{c.instructions+=2;NFSU2_TR(0x4ec5af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec5b0:{NFSU2_TR(0x4ec5b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec5b5ull));
TAIL_STATIC(0x4c68d0u,4c6);
}
B4ec5b5:L4ec5b5:{c.instructions+=3;NFSU2_TR(0x4ec5b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec5b8:{NFSU2_TR(0x4ec5b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ec5ba:{NFSU2_TR(0x4ec5ba);
if(r1(R+518)){{goto L4ec5c2;}}
}
B4ec5bc:L4ec5bc:{c.instructions+=2;NFSU2_TR(0x4ec5bc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec5bd:{NFSU2_TR(0x4ec5bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec5c2ull));
TAIL_STATIC(0x4c6b80u,4c6);
}
B4ec5c2:L4ec5c2:{c.instructions+=3;NFSU2_TR(0x4ec5c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec5c5:{NFSU2_TR(0x4ec5c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ec5c7:{NFSU2_TR(0x4ec5c7);
if(r1(R+518)){{goto L4ec5cf;}}
}
B4ec5c9:L4ec5c9:{c.instructions+=2;NFSU2_TR(0x4ec5c9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec5ca:{NFSU2_TR(0x4ec5ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec5cfull));
TAIL_STATIC(0x4c7090u,4c7);
}
B4ec5cf:L4ec5cf:{c.instructions+=3;NFSU2_TR(0x4ec5cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec5d2:{NFSU2_TR(0x4ec5d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ec5d4:{NFSU2_TR(0x4ec5d4);
if(r1(R+518)){{goto L4ec5dc;}}
}
B4ec5d6:L4ec5d6:{c.instructions+=2;NFSU2_TR(0x4ec5d6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec5d7:{NFSU2_TR(0x4ec5d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec5dcull));
TAIL_STATIC(0x4ebb10u,4eb);
}
B4ec5dc:L4ec5dc:{c.instructions+=3;NFSU2_TR(0x4ec5dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec5df:{NFSU2_TR(0x4ec5df);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ec5e1:{NFSU2_TR(0x4ec5e1);
if(r1(R+518)){{goto L4ec5e9;}}
}
B4ec5e3:L4ec5e3:{c.instructions+=2;NFSU2_TR(0x4ec5e3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec5e4:{NFSU2_TR(0x4ec5e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec5e9ull));
TAIL_STATIC(0x4c7b20u,4c7);
}
B4ec5e9:L4ec5e9:{c.instructions+=3;NFSU2_TR(0x4ec5e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec5ec:{NFSU2_TR(0x4ec5ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ec5ee:{NFSU2_TR(0x4ec5ee);
if(r1(R+518)){{goto L4ec5f6;}}
}
B4ec5f0:L4ec5f0:{c.instructions+=2;NFSU2_TR(0x4ec5f0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec5f1:{NFSU2_TR(0x4ec5f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec5f6ull));
TAIL_STATIC(0x4c7aa0u,4c7);
}
B4ec5f6:L4ec5f6:{c.instructions+=3;NFSU2_TR(0x4ec5f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec5f9:{NFSU2_TR(0x4ec5f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ec5fb:{NFSU2_TR(0x4ec5fb);
if(r1(R+518)){{goto L4ec603;}}
}
B4ec5fd:L4ec5fd:{c.instructions+=2;NFSU2_TR(0x4ec5fd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec5fe:{NFSU2_TR(0x4ec5fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec603ull));
TAIL_STATIC(0x4da590u,4da);
}
B4ec603:L4ec603:{c.instructions+=3;NFSU2_TR(0x4ec603);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec606:{NFSU2_TR(0x4ec606);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ec608:{NFSU2_TR(0x4ec608);
if(r1(R+518)){{goto L4ec610;}}
}
B4ec60a:L4ec60a:{c.instructions+=2;NFSU2_TR(0x4ec60a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec60b:{NFSU2_TR(0x4ec60b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec610ull));
TAIL_STATIC(0x4c7f00u,4c7);
}
B4ec610:L4ec610:{c.instructions+=3;NFSU2_TR(0x4ec610);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec613:{NFSU2_TR(0x4ec613);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ec615:{NFSU2_TR(0x4ec615);
if(r1(R+518)){{goto L4ec61d;}}
}
B4ec617:L4ec617:{c.instructions+=2;NFSU2_TR(0x4ec617);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec618:{NFSU2_TR(0x4ec618);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec61dull));
TAIL_STATIC(0x4aa1b0u,4aa);
}
B4ec61d:L4ec61d:{c.instructions+=3;NFSU2_TR(0x4ec61d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec620:{NFSU2_TR(0x4ec620);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ec622:{NFSU2_TR(0x4ec622);
if(r1(R+518)){{goto L4ec62a;}}
}
B4ec624:L4ec624:{c.instructions+=2;NFSU2_TR(0x4ec624);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec625:{NFSU2_TR(0x4ec625);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec62aull));
TAIL_STATIC(0x4da190u,4da);
}
B4ec62a:L4ec62a:{c.instructions+=3;NFSU2_TR(0x4ec62a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec62d:{NFSU2_TR(0x4ec62d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ec62f:{NFSU2_TR(0x4ec62f);
if(r1(R+518)){{goto L4ec637;}}
}
B4ec631:L4ec631:{c.instructions+=2;NFSU2_TR(0x4ec631);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec632:{NFSU2_TR(0x4ec632);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec637ull));
TAIL_STATIC(0x4aafc0u,4aa);
}
B4ec637:L4ec637:{c.instructions+=3;NFSU2_TR(0x4ec637);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec63a:{NFSU2_TR(0x4ec63a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ec63c:{NFSU2_TR(0x4ec63c);
if(r1(R+518)){{goto L4ec644;}}
}
B4ec63e:L4ec63e:{c.instructions+=2;NFSU2_TR(0x4ec63e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec63f:{NFSU2_TR(0x4ec63f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec644ull));
TAIL_STATIC(0x4da090u,4da);
}
B4ec644:L4ec644:{c.instructions+=3;NFSU2_TR(0x4ec644);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec647:{NFSU2_TR(0x4ec647);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ec649:{NFSU2_TR(0x4ec649);
if(r1(R+518)){{goto L4ec651;}}
}
B4ec64b:L4ec64b:{c.instructions+=2;NFSU2_TR(0x4ec64b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec64c:{NFSU2_TR(0x4ec64c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec651ull));
TAIL_STATIC(0x4da900u,4da);
}
B4ec651:L4ec651:{c.instructions+=3;NFSU2_TR(0x4ec651);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec654:{NFSU2_TR(0x4ec654);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ec656:{NFSU2_TR(0x4ec656);
if(r1(R+518)){{goto L4ec65e;}}
}
B4ec658:L4ec658:{c.instructions+=2;NFSU2_TR(0x4ec658);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec659:{NFSU2_TR(0x4ec659);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec65eull));
TAIL_STATIC(0x4ebec0u,4eb);
}
B4ec65e:L4ec65e:{c.instructions+=3;NFSU2_TR(0x4ec65e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec661:{NFSU2_TR(0x4ec661);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ec663:{NFSU2_TR(0x4ec663);
if(r1(R+518)){{goto L4ec66b;}}
}
B4ec665:L4ec665:{c.instructions+=2;NFSU2_TR(0x4ec665);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec666:{NFSU2_TR(0x4ec666);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec66bull));
TAIL_STATIC(0x4ab5b0u,4ab);
}
B4ec66b:L4ec66b:{c.instructions+=3;NFSU2_TR(0x4ec66b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec66e:{NFSU2_TR(0x4ec66e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ec670:{NFSU2_TR(0x4ec670);
if(r1(R+518)){{goto L4ec678;}}
}
B4ec672:L4ec672:{c.instructions+=2;NFSU2_TR(0x4ec672);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec673:{NFSU2_TR(0x4ec673);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec678ull));
TAIL_STATIC(0x4da9a0u,4da);
}
B4ec678:L4ec678:{c.instructions+=3;NFSU2_TR(0x4ec678);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec67b:{NFSU2_TR(0x4ec67b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ec67d:{NFSU2_TR(0x4ec67d);
if(r1(R+518)){{goto L4ec685;}}
}
B4ec67f:L4ec67f:{c.instructions+=2;NFSU2_TR(0x4ec67f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec680:{NFSU2_TR(0x4ec680);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec685ull));
TAIL_STATIC(0x4da640u,4da);
}
B4ec685:L4ec685:{c.instructions+=3;NFSU2_TR(0x4ec685);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec688:{NFSU2_TR(0x4ec688);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ec68a:{NFSU2_TR(0x4ec68a);
if(r1(R+518)){{goto L4ec692;}}
}
B4ec68c:L4ec68c:{c.instructions+=2;NFSU2_TR(0x4ec68c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec68d:{NFSU2_TR(0x4ec68d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec692ull));
TAIL_STATIC(0x4c9210u,4c9);
}
B4ec692:L4ec692:{c.instructions+=3;NFSU2_TR(0x4ec692);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec695:{NFSU2_TR(0x4ec695);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ec697:{NFSU2_TR(0x4ec697);
if(r1(R+518)){{goto L4ec69f;}}
}
B4ec699:L4ec699:{c.instructions+=2;NFSU2_TR(0x4ec699);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec69a:{NFSU2_TR(0x4ec69a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec69full));
TAIL_STATIC(0x4dabd0u,4da);
}
B4ec69f:L4ec69f:{c.instructions+=3;NFSU2_TR(0x4ec69f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec6a2:{NFSU2_TR(0x4ec6a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ec6a4:{NFSU2_TR(0x4ec6a4);
if(r1(R+518)){{goto L4ec6ac;}}
}
B4ec6a6:L4ec6a6:{c.instructions+=2;NFSU2_TR(0x4ec6a6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec6a7:{NFSU2_TR(0x4ec6a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec6acull));
TAIL_STATIC(0x4c9ce0u,4c9);
}
B4ec6ac:L4ec6ac:{c.instructions+=3;NFSU2_TR(0x4ec6ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec6af:{NFSU2_TR(0x4ec6af);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ec6b1:{NFSU2_TR(0x4ec6b1);
if(r1(R+518)){{goto L4ec6b9;}}
}
B4ec6b3:L4ec6b3:{c.instructions+=2;NFSU2_TR(0x4ec6b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec6b4:{NFSU2_TR(0x4ec6b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec6b9ull));
TAIL_STATIC(0x4a9e70u,4a9);
}
B4ec6b9:L4ec6b9:{c.instructions+=3;NFSU2_TR(0x4ec6b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec6bc:{NFSU2_TR(0x4ec6bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ec6be:{NFSU2_TR(0x4ec6be);
if(r1(R+518)){{goto L4ec6c6;}}
}
B4ec6c0:L4ec6c0:{c.instructions+=2;NFSU2_TR(0x4ec6c0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec6c1:{NFSU2_TR(0x4ec6c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec6c6ull));
TAIL_STATIC(0x4a9ff0u,4a9);
}
B4ec6c6:L4ec6c6:{c.instructions+=3;NFSU2_TR(0x4ec6c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec6c9:{NFSU2_TR(0x4ec6c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ec6cb:{NFSU2_TR(0x4ec6cb);
if(r1(R+518)){{goto L4ec6d2;}}
}
B4ec6cd:L4ec6cd:{c.instructions+=1;NFSU2_TR(0x4ec6cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec6d2ull));
TAIL_STATIC(0x4db8c0u,4db);
}
B4ec6d2:L4ec6d2:{c.instructions+=3;NFSU2_TR(0x4ec6d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec6d8:{NFSU2_TR(0x4ec6d8);
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
B4ec6da:{NFSU2_TR(0x4ec6da);
if(r1(R+518)){{goto L4ec6e2;}}
}
B4ec6dc:L4ec6dc:{c.instructions+=2;NFSU2_TR(0x4ec6dc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec6dd:{NFSU2_TR(0x4ec6dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec6e2ull));
TAIL_STATIC(0x4a9ef0u,4a9);
}
B4ec6e2:L4ec6e2:{c.instructions+=3;NFSU2_TR(0x4ec6e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ec6e3:{NFSU2_TR(0x4ec6e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ec6e4:{NFSU2_TR(0x4ec6e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ec6f0:L4ec6f0:{c.instructions+=3;NFSU2_TR(0x4ec6f0);
__builtin_memmove((R+0),gp(0x836560),4);
}
B4ec6f5:{NFSU2_TR(0x4ec6f5);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x836560ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x836560ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x836560ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ec6fa:{NFSU2_TR(0x4ec6fa);
if(r1(R+518)){{goto L4ec72f;}}
}
B4ec6fc:L4ec6fc:{c.instructions+=2;NFSU2_TR(0x4ec6fc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec6fd:{NFSU2_TR(0x4ec6fd);
__builtin_memmove((R+4),(R+4),4);
}
B4ec700:L4ec700:{c.instructions+=7;NFSU2_TR(0x4ec700);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4ec702:{NFSU2_TR(0x4ec702);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ec705:{NFSU2_TR(0x4ec705);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ec708:{NFSU2_TR(0x4ec708);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4ec70a:{NFSU2_TR(0x4ec70a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec70b:{NFSU2_TR(0x4ec70b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec70e:{NFSU2_TR(0x4ec70e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec713ull));
TAIL_STATIC(0x440ef0u,440);
}
B4ec713:L4ec713:{c.instructions+=4;NFSU2_TR(0x4ec713);
__builtin_memmove((R+0),gp(0x8364b4),4);
}
B4ec718:{NFSU2_TR(0x4ec718);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec719:{NFSU2_TR(0x4ec719);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec71a:{NFSU2_TR(0x4ec71a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec71full));
TAIL_STATIC(0x43f920u,43f);
}
B4ec71f:L4ec71f:{c.instructions+=4;NFSU2_TR(0x4ec71f);
__builtin_memmove((R+0),gp(0x836560),4);
}
B4ec724:{NFSU2_TR(0x4ec724);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ec727:{NFSU2_TR(0x4ec727);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x836560ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x836560ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x836560ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ec72c:{NFSU2_TR(0x4ec72c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ec700u);}goto L4ec700;}}
}
B4ec72e:L4ec72e:{c.instructions+=1;NFSU2_TR(0x4ec72e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ec72f:L4ec72f:{c.instructions+=1;NFSU2_TR(0x4ec72f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ec730:L4ec730:{c.instructions+=5;NFSU2_TR(0x4ec730);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec731:{NFSU2_TR(0x4ec731);
__builtin_memmove((R+24),gp(0x836560),4);
}
B4ec737:{NFSU2_TR(0x4ec737);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec738:{NFSU2_TR(0x4ec738);
w4(R+4,u32(0x836560ull));
}
B4ec73d:{NFSU2_TR(0x4ec73d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec742ull));
TAIL_STATIC(0x502fd0u,502);
}
B4ec742:L4ec742:{c.instructions+=2;NFSU2_TR(0x4ec742);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ec744:{NFSU2_TR(0x4ec744);
if(r1(R+518)){{goto L4ec75e;}}
}
B4ec746:L4ec746:{c.instructions+=2;NFSU2_TR(0x4ec746);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec74a:{NFSU2_TR(0x4ec74a);
__builtin_memmove((R+12),(R+12),4);
}
B4ec750:L4ec750:{c.instructions+=3;NFSU2_TR(0x4ec750);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ec753:{NFSU2_TR(0x4ec753);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4ec756:{NFSU2_TR(0x4ec756);
if(r1(R+518)){{goto L4ec763;}}
}
B4ec758:L4ec758:{c.instructions+=3;NFSU2_TR(0x4ec758);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4ec75a:{NFSU2_TR(0x4ec75a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ec75c:{NFSU2_TR(0x4ec75c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ec750u);}goto L4ec750;}}
}
B4ec75e:L4ec75e:{c.instructions+=4;NFSU2_TR(0x4ec75e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ec75f:{NFSU2_TR(0x4ec75f);
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
B4ec761:{NFSU2_TR(0x4ec761);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ec762:{NFSU2_TR(0x4ec762);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ec763:L4ec763:{c.instructions+=7;NFSU2_TR(0x4ec763);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ec765:{NFSU2_TR(0x4ec765);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec768:{NFSU2_TR(0x4ec768);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ec76b:{NFSU2_TR(0x4ec76b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4ec76d:{NFSU2_TR(0x4ec76d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec76e:{NFSU2_TR(0x4ec76e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec771:{NFSU2_TR(0x4ec771);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec776ull));
TAIL_STATIC(0x440ef0u,440);
}
B4ec776:L4ec776:{c.instructions+=8;NFSU2_TR(0x4ec776);
__builtin_memmove((R+0),gp(0x8364bc),4);
}
B4ec77b:{NFSU2_TR(0x4ec77b);
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ec77e:{NFSU2_TR(0x4ec77e);
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
B4ec77f:{NFSU2_TR(0x4ec77f);
__builtin_memmove(gp(0x8364bc),(R+0),4);
}
B4ec784:{NFSU2_TR(0x4ec784);
__builtin_memmove((R+0),(R+28),4);
}
B4ec786:{NFSU2_TR(0x4ec786);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ec787:{NFSU2_TR(0x4ec787);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ec788:{NFSU2_TR(0x4ec788);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ec790:L4ec790:{c.instructions+=13;NFSU2_TR(0x4ec790);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec792:{NFSU2_TR(0x4ec792);
u8 U[4];
w4(U+0,u32(0x7761bbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec797:{NFSU2_TR(0x4ec797);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ec79d:{NFSU2_TR(0x4ec79d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec79e:{NFSU2_TR(0x4ec79e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec7a5:{NFSU2_TR(0x4ec7a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec7a6:{NFSU2_TR(0x4ec7a6);
__builtin_memmove((R+0),gp(0x8364b8),4);
}
B4ec7ab:{NFSU2_TR(0x4ec7ab);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec7ac:{NFSU2_TR(0x4ec7ac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec7ad:{NFSU2_TR(0x4ec7ad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec7ae:{NFSU2_TR(0x4ec7ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec7af:{NFSU2_TR(0x4ec7af);
__builtin_memmove((R+28),(R+4),4);
}
B4ec7b1:{NFSU2_TR(0x4ec7b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec7b6ull));
TAIL_STATIC(0x43f8f0u,43f);
}
B4ec7b6:L4ec7b6:{c.instructions+=7;NFSU2_TR(0x4ec7b6);
__builtin_memmove((R+24),(R+0),4);
}
B4ec7b8:{NFSU2_TR(0x4ec7b8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ec7bb:{NFSU2_TR(0x4ec7bb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec7bf:{NFSU2_TR(0x4ec7bf);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4ec7c1:{NFSU2_TR(0x4ec7c1);
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
B4ec7c3:{NFSU2_TR(0x4ec7c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec7c7:{NFSU2_TR(0x4ec7c7);
if(r1(R+518)){{goto L4ec7f0;}}
}
B4ec7c9:L4ec7c9:{c.instructions+=3;NFSU2_TR(0x4ec7c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec7cd:{NFSU2_TR(0x4ec7cd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec7ce:{NFSU2_TR(0x4ec7ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec7d3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ec730u);}goto L4ec730;}
}
B4ec7d3:L4ec7d3:{c.instructions+=10;NFSU2_TR(0x4ec7d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ec7d7:{NFSU2_TR(0x4ec7d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec7da:{NFSU2_TR(0x4ec7da);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ec7dd:{NFSU2_TR(0x4ec7dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec7e0:{NFSU2_TR(0x4ec7e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec7e3:{NFSU2_TR(0x4ec7e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec7e6:{NFSU2_TR(0x4ec7e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec7e9:{NFSU2_TR(0x4ec7e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec7ec:{NFSU2_TR(0x4ec7ec);
__builtin_memmove((R+0),(R+24),4);
}
B4ec7ee:{NFSU2_TR(0x4ec7ee);
{goto L4ec7f2;}
}
B4ec7f0:L4ec7f0:{c.instructions+=1;NFSU2_TR(0x4ec7f0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ec7f2:L4ec7f2:{c.instructions+=12;NFSU2_TR(0x4ec7f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec7f5:{NFSU2_TR(0x4ec7f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4ec7f7:{NFSU2_TR(0x4ec7f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec7fa:{NFSU2_TR(0x4ec7fa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4ec7fc:{NFSU2_TR(0x4ec7fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ec7fd:{NFSU2_TR(0x4ec7fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec800:{NFSU2_TR(0x4ec800);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec804:{NFSU2_TR(0x4ec804);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ec805:{NFSU2_TR(0x4ec805);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ec806:{NFSU2_TR(0x4ec806);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec80d:{NFSU2_TR(0x4ec80d);
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
B4ec810:{NFSU2_TR(0x4ec810);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ec820:L4ec820:{c.instructions+=12;NFSU2_TR(0x4ec820);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec822:{NFSU2_TR(0x4ec822);
u8 U[4];
w4(U+0,u32(0x7761bbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec827:{NFSU2_TR(0x4ec827);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ec82d:{NFSU2_TR(0x4ec82d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec82e:{NFSU2_TR(0x4ec82e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec835:{NFSU2_TR(0x4ec835);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec836:{NFSU2_TR(0x4ec836);
__builtin_memmove((R+0),gp(0x8364b8),4);
}
B4ec83b:{NFSU2_TR(0x4ec83b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec83c:{NFSU2_TR(0x4ec83c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec83d:{NFSU2_TR(0x4ec83d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec83e:{NFSU2_TR(0x4ec83e);
__builtin_memmove((R+28),(R+4),4);
}
B4ec840:{NFSU2_TR(0x4ec840);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec845ull));
TAIL_STATIC(0x43f8f0u,43f);
}
B4ec845:L4ec845:{c.instructions+=6;NFSU2_TR(0x4ec845);
__builtin_memmove((R+24),(R+0),4);
}
B4ec847:{NFSU2_TR(0x4ec847);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ec84a:{NFSU2_TR(0x4ec84a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec84e:{NFSU2_TR(0x4ec84e);
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
B4ec850:{NFSU2_TR(0x4ec850);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ec858:{NFSU2_TR(0x4ec858);
if(r1(R+518)){{goto L4ec891;}}
}
B4ec85a:L4ec85a:{c.instructions+=3;NFSU2_TR(0x4ec85a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec85e:{NFSU2_TR(0x4ec85e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec85f:{NFSU2_TR(0x4ec85f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec864ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ec730u);}goto L4ec730;}
}
B4ec864:L4ec864:{c.instructions+=13;NFSU2_TR(0x4ec864);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ec868:{NFSU2_TR(0x4ec868);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec86c:{NFSU2_TR(0x4ec86c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec86f:{NFSU2_TR(0x4ec86f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ec873:{NFSU2_TR(0x4ec873);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec876:{NFSU2_TR(0x4ec876);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ec87a:{NFSU2_TR(0x4ec87a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec87d:{NFSU2_TR(0x4ec87d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ec880:{NFSU2_TR(0x4ec880);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec883:{NFSU2_TR(0x4ec883);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec886:{NFSU2_TR(0x4ec886);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ec88d:{NFSU2_TR(0x4ec88d);
__builtin_memmove((R+0),(R+24),4);
}
B4ec88f:{NFSU2_TR(0x4ec88f);
{goto L4ec893;}
}
B4ec891:L4ec891:{c.instructions+=1;NFSU2_TR(0x4ec891);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ec893:L4ec893:{c.instructions+=11;NFSU2_TR(0x4ec893);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec896:{NFSU2_TR(0x4ec896);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4ec898:{NFSU2_TR(0x4ec898);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec89b:{NFSU2_TR(0x4ec89b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec89e:{NFSU2_TR(0x4ec89e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec8a2:{NFSU2_TR(0x4ec8a2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4ec8a4:{NFSU2_TR(0x4ec8a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ec8a5:{NFSU2_TR(0x4ec8a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ec8a6:{NFSU2_TR(0x4ec8a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec8ad:{NFSU2_TR(0x4ec8ad);
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
B4ec8b0:{NFSU2_TR(0x4ec8b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ec8c0:L4ec8c0:{c.instructions+=9;NFSU2_TR(0x4ec8c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec8c1:{NFSU2_TR(0x4ec8c1);
__builtin_memmove((R+20),(R+16),4);
}
B4ec8c3:{NFSU2_TR(0x4ec8c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B4ec8c6:{NFSU2_TR(0x4ec8c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec8c7:{NFSU2_TR(0x4ec8c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ec8ca:{NFSU2_TR(0x4ec8ca);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4ec8cd:{NFSU2_TR(0x4ec8cd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec8ce:{NFSU2_TR(0x4ec8ce);
__builtin_memmove((R+28),(R+4),4);
}
B4ec8d0:{NFSU2_TR(0x4ec8d0);
if(r1(R+518)){{goto L4ec8e8;}}
}
B4ec8d2:L4ec8d2:{c.instructions+=3;NFSU2_TR(0x4ec8d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ec8d5:{NFSU2_TR(0x4ec8d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ec8d7:{NFSU2_TR(0x4ec8d7);
if(r1(R+518)){{goto L4ec8e8;}}
}
B4ec8d9:L4ec8d9:{c.instructions+=3;NFSU2_TR(0x4ec8d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec8da:{NFSU2_TR(0x4ec8da);
w4(R+4,u32(0x85ad40ull));
}
B4ec8df:{NFSU2_TR(0x4ec8df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec8e4ull));
TAIL_STATIC(0x532c20u,532);
}
B4ec8e4:L4ec8e4:{c.instructions+=2;NFSU2_TR(0x4ec8e4);
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
B4ec8e6:{NFSU2_TR(0x4ec8e6);
if(r1(R+518)){{goto L4ec947;}}
}
B4ec8e8:L4ec8e8:{c.instructions+=11;NFSU2_TR(0x4ec8e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ec8ea:{NFSU2_TR(0x4ec8ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec8ed:{NFSU2_TR(0x4ec8ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ec8f0:{NFSU2_TR(0x4ec8f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec8f3:{NFSU2_TR(0x4ec8f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ec8f6:{NFSU2_TR(0x4ec8f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec8f9:{NFSU2_TR(0x4ec8f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ec8fc:{NFSU2_TR(0x4ec8fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec8ff:{NFSU2_TR(0x4ec8ff);
__builtin_memmove((R+4),(R+24),4);
}
B4ec901:{NFSU2_TR(0x4ec901);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec904:{NFSU2_TR(0x4ec904);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec909ull));
TAIL_STATIC(0x500de0u,500);
}
B4ec909:L4ec909:{c.instructions+=2;NFSU2_TR(0x4ec909);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec90a:{NFSU2_TR(0x4ec90a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec90full));
TAIL_STATIC(0x4ac1e0u,4ac);
}
B4ec90f:L4ec90f:{c.instructions+=15;NFSU2_TR(0x4ec90f);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ec912:{NFSU2_TR(0x4ec912);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4ec915:{NFSU2_TR(0x4ec915);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ec918:{NFSU2_TR(0x4ec918);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec91a:{NFSU2_TR(0x4ec91a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4ec91d:{NFSU2_TR(0x4ec91d);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ec923:{NFSU2_TR(0x4ec923);
__builtin_memmove((R+4),(R+28),4);
}
B4ec925:{NFSU2_TR(0x4ec925);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ec929:{NFSU2_TR(0x4ec929);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ec92c:{NFSU2_TR(0x4ec92c);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4ec92f:{NFSU2_TR(0x4ec92f);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ec935:{NFSU2_TR(0x4ec935);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ec938:{NFSU2_TR(0x4ec938);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec939:{NFSU2_TR(0x4ec939);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec93a:{NFSU2_TR(0x4ec93a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec93full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ec820u);}goto L4ec820;}
}
B4ec93f:L4ec93f:{c.instructions+=3;NFSU2_TR(0x4ec93f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec940:{NFSU2_TR(0x4ec940);
__builtin_memmove((R+4),(R+0),4);
}
B4ec942:{NFSU2_TR(0x4ec942);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec947ull));
TAIL_STATIC(0x4ac620u,4ac);
}
B4ec947:L4ec947:{c.instructions+=5;NFSU2_TR(0x4ec947);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ec948:{NFSU2_TR(0x4ec948);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ec949:{NFSU2_TR(0x4ec949);
__builtin_memmove((R+16),(R+20),4);
}
B4ec94b:{NFSU2_TR(0x4ec94b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ec94c:{NFSU2_TR(0x4ec94c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ec950:L4ec950:{c.instructions+=21;NFSU2_TR(0x4ec950);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec951:{NFSU2_TR(0x4ec951);
__builtin_memmove((R+20),(R+16),4);
}
B4ec953:{NFSU2_TR(0x4ec953);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec955:{NFSU2_TR(0x4ec955);
u8 U[4];
w4(U+0,u32(0x7761d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec95a:{NFSU2_TR(0x4ec95a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ec960:{NFSU2_TR(0x4ec960);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec961:{NFSU2_TR(0x4ec961);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec968:{NFSU2_TR(0x4ec968);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec969:{NFSU2_TR(0x4ec969);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec96a:{NFSU2_TR(0x4ec96a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec96b:{NFSU2_TR(0x4ec96b);
__builtin_memmove((R+24),(R+4),4);
}
B4ec96d:{NFSU2_TR(0x4ec96d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec96e:{NFSU2_TR(0x4ec96e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec971:{NFSU2_TR(0x4ec971);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4ec973:{NFSU2_TR(0x4ec973);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec976:{NFSU2_TR(0x4ec976);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ec979:{NFSU2_TR(0x4ec979);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec97c:{NFSU2_TR(0x4ec97c);
__builtin_memmove((R+4),gp(0x89e7a0),4);
}
B4ec982:{NFSU2_TR(0x4ec982);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec983:{NFSU2_TR(0x4ec983);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ec98a:{NFSU2_TR(0x4ec98a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec98full));
TAIL_STATIC(0x5d3e40u,5d3);
}
B4ec98f:L4ec98f:{c.instructions+=6;NFSU2_TR(0x4ec98f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ec992:{NFSU2_TR(0x4ec992);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec994:{NFSU2_TR(0x4ec994);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec996:{NFSU2_TR(0x4ec996);
__builtin_memmove((R+4),(R+24),4);
}
B4ec998:{NFSU2_TR(0x4ec998);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec99b:{NFSU2_TR(0x4ec99b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec9a0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ec790u);}goto L4ec790;}
}
B4ec9a0:L4ec9a0:{c.instructions+=5;NFSU2_TR(0x4ec9a0);
w4(R+12,u32(0x1ull));
}
B4ec9a5:{NFSU2_TR(0x4ec9a5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec9a6:{NFSU2_TR(0x4ec9a6);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec9a8:{NFSU2_TR(0x4ec9a8);
__builtin_memmove((R+4),(R+24),4);
}
B4ec9aa:{NFSU2_TR(0x4ec9aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec9afull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ec790u);}goto L4ec790;}
}
B4ec9af:L4ec9af:{c.instructions+=4;NFSU2_TR(0x4ec9af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ec9b2:{NFSU2_TR(0x4ec9b2);
u8 U[4];
w4(U+0,u32(0x90fe80f3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec9b7:{NFSU2_TR(0x4ec9b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec9b8:{NFSU2_TR(0x4ec9b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec9bdull));
TAIL_STATIC(0x537a60u,537);
}
B4ec9bd:L4ec9bd:{c.instructions+=5;NFSU2_TR(0x4ec9bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec9c0:{NFSU2_TR(0x4ec9c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ec9c3:{NFSU2_TR(0x4ec9c3);
u8 U[4];
w4(U+0,u32(0x40cdc515ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec9c8:{NFSU2_TR(0x4ec9c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec9c9:{NFSU2_TR(0x4ec9c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec9ceull));
TAIL_STATIC(0x537a60u,537);
}
B4ec9ce:L4ec9ce:{c.instructions+=5;NFSU2_TR(0x4ec9ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec9d1:{NFSU2_TR(0x4ec9d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ec9d4:{NFSU2_TR(0x4ec9d4);
u8 U[4];
w4(U+0,u32(0xf2a54430ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec9d9:{NFSU2_TR(0x4ec9d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ec9da:{NFSU2_TR(0x4ec9da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ec9dfull));
TAIL_STATIC(0x537a60u,537);
}
B4ec9df:L4ec9df:{c.instructions+=5;NFSU2_TR(0x4ec9df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ec9e2:{NFSU2_TR(0x4ec9e2);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B4ec9e7:{NFSU2_TR(0x4ec9e7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4ec9ea:{NFSU2_TR(0x4ec9ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ec9ec:{NFSU2_TR(0x4ec9ec);
if(r1(R+518)){{goto L4eca9a;}}
}
B4ec9f2:L4ec9f2:{c.instructions+=4;NFSU2_TR(0x4ec9f2);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B4ec9f7:{NFSU2_TR(0x4ec9f7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ec9f9:{NFSU2_TR(0x4ec9f9);
__builtin_memmove((R+28),gp(0x883dac),4);
}
B4ec9ff:{NFSU2_TR(0x4ec9ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eca9a;}}
}
B4eca05:L4eca05:{c.instructions+=3;NFSU2_TR(0x4eca05);
__builtin_memmove((R+0),gp(0x890104),4);
}
B4eca0a:{NFSU2_TR(0x4eca0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4eca0c:{NFSU2_TR(0x4eca0c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eca9a;}}
}
B4eca12:L4eca12:{c.instructions+=2;NFSU2_TR(0x4eca12);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4eca14:{NFSU2_TR(0x4eca14);
if(r1(R+518)){{goto L4eca53;}}
}
B4eca16:L4eca16:{c.instructions+=16;NFSU2_TR(0x4eca16);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xbaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B4eca1d:{NFSU2_TR(0x4eca1d);
__builtin_memmove((R+0),gp(0x890118),4);
}
B4eca22:{NFSU2_TR(0x4eca22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eca25:{NFSU2_TR(0x4eca25);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4eca2b:{NFSU2_TR(0x4eca2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eca31:{NFSU2_TR(0x4eca31);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4eca34:{NFSU2_TR(0x4eca34);
{u32 ea_=u32(u32(7881288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4eca3a:{NFSU2_TR(0x4eca3a);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4eca3d:{NFSU2_TR(0x4eca3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eca40:{NFSU2_TR(0x4eca40);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eca41:{NFSU2_TR(0x4eca41);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eca42:{NFSU2_TR(0x4eca42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eca43:{NFSU2_TR(0x4eca43);
u8 U[4];
w4(U+0,u32(0x12345678ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eca48:{NFSU2_TR(0x4eca48);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eca49:{NFSU2_TR(0x4eca49);
__builtin_memmove((R+4),(R+24),4);
}
B4eca4b:{NFSU2_TR(0x4eca4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eca50ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ec820u);}goto L4ec820;}
}
B4eca50:L4eca50:{c.instructions+=1;NFSU2_TR(0x4eca50);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B4eca53:L4eca53:{c.instructions+=3;NFSU2_TR(0x4eca53);
__builtin_memmove((R+0),gp(0x89e7b4),4);
}
B4eca58:{NFSU2_TR(0x4eca58);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4eca5a:{NFSU2_TR(0x4eca5a);
if(r1(R+518)){{goto L4eca9a;}}
}
B4eca5c:L4eca5c:{c.instructions+=16;NFSU2_TR(0x4eca5c);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B4eca63:{NFSU2_TR(0x4eca63);
__builtin_memmove((R+0),gp(0x890118),4);
}
B4eca68:{NFSU2_TR(0x4eca68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eca6b:{NFSU2_TR(0x4eca6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4eca71:{NFSU2_TR(0x4eca71);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4eca74:{NFSU2_TR(0x4eca74);
{u32 ea_=u32(u32(7881288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4eca7a:{NFSU2_TR(0x4eca7a);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4eca7d:{NFSU2_TR(0x4eca7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4eca80:{NFSU2_TR(0x4eca80);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eca81:{NFSU2_TR(0x4eca81);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4eca87:{NFSU2_TR(0x4eca87);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eca88:{NFSU2_TR(0x4eca88);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eca89:{NFSU2_TR(0x4eca89);
u8 U[4];
w4(U+0,u32(0x12345678ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eca8e:{NFSU2_TR(0x4eca8e);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eca90:{NFSU2_TR(0x4eca90);
__builtin_memmove((R+4),(R+24),4);
}
B4eca92:{NFSU2_TR(0x4eca92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eca97ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ec820u);}goto L4ec820;}
}
B4eca97:L4eca97:{c.instructions+=1;NFSU2_TR(0x4eca97);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B4eca9a:L4eca9a:{c.instructions+=7;NFSU2_TR(0x4eca9a);
__builtin_memmove((R+0),gp(0x890080),4);
}
B4eca9f:{NFSU2_TR(0x4eca9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ecaa2:{NFSU2_TR(0x4ecaa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ecaa5:{NFSU2_TR(0x4ecaa5);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B4ecaa7:{NFSU2_TR(0x4ecaa7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4ecaa9:{NFSU2_TR(0x4ecaa9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ecaab:{NFSU2_TR(0x4ecaab);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4ecad6;}}
}
B4ecaad:L4ecaad:{c.instructions+=1;NFSU2_TR(0x4ecaad);
__builtin_memmove((R+4),(R+4),4);
}
B4ecab0:L4ecab0:{c.instructions+=7;NFSU2_TR(0x4ecab0);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B4ecab2:{NFSU2_TR(0x4ecab2);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4ecab6:{NFSU2_TR(0x4ecab6);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B4ecaba:{NFSU2_TR(0x4ecaba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecabb:{NFSU2_TR(0x4ecabb);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecabd:{NFSU2_TR(0x4ecabd);
__builtin_memmove((R+4),(R+24),4);
}
B4ecabf:{NFSU2_TR(0x4ecabf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ecac4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ec790u);}goto L4ec790;}
}
B4ecac4:L4ecac4:{c.instructions+=7;NFSU2_TR(0x4ecac4);
__builtin_memmove((R+0),gp(0x890080),4);
}
B4ecac9:{NFSU2_TR(0x4ecac9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ecacc:{NFSU2_TR(0x4ecacc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ecacf:{NFSU2_TR(0x4ecacf);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4ecad0:{NFSU2_TR(0x4ecad0);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B4ecad2:{NFSU2_TR(0x4ecad2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4ecad4:{NFSU2_TR(0x4ecad4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ecab0u);}goto L4ecab0;}}
}
B4ecad6:L4ecad6:{c.instructions+=2;NFSU2_TR(0x4ecad6);
w4(R+4,u32(0x89cf48ull));
}
B4ecadb:{NFSU2_TR(0x4ecadb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ecae0ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B4ecae0:L4ecae0:{c.instructions+=2;NFSU2_TR(0x4ecae0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ecae2:{NFSU2_TR(0x4ecae2);
if(r1(R+518)){{goto L4ecb34;}}
}
B4ecae4:L4ecae4:{c.instructions+=5;NFSU2_TR(0x4ecae4);
__builtin_memmove((R+8),gp(0x890080),4);
}
B4ecaea:{NFSU2_TR(0x4ecaea);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ecaed:{NFSU2_TR(0x4ecaed);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4ecaef:{NFSU2_TR(0x4ecaef);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ecaf1:{NFSU2_TR(0x4ecaf1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4ecb34;}}
}
B4ecaf3:L4ecaf3:{c.instructions+=2;NFSU2_TR(0x4ecaf3);
w4(R+28,u32(0x1cull));
}
B4ecaf8:{NFSU2_TR(0x4ecaf8);
{goto L4ecb00;}
}
B4ecb00:L4ecb00:{c.instructions+=4;NFSU2_TR(0x4ecb00);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4ecb03:{NFSU2_TR(0x4ecb03);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ecb06:{NFSU2_TR(0x4ecb06);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4ecb0a:{NFSU2_TR(0x4ecb0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ecb15;}}
}
B4ecb0c:L4ecb0c:{c.instructions+=2;NFSU2_TR(0x4ecb0c);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4ecb13:{NFSU2_TR(0x4ecb13);
if(r1(R+518)){{goto L4ecb29;}}
}
B4ecb15:L4ecb15:{c.instructions+=5;NFSU2_TR(0x4ecb15);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B4ecb19:{NFSU2_TR(0x4ecb19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecb1a:{NFSU2_TR(0x4ecb1a);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecb1c:{NFSU2_TR(0x4ecb1c);
__builtin_memmove((R+4),(R+24),4);
}
B4ecb1e:{NFSU2_TR(0x4ecb1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ecb23ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ec790u);}goto L4ec790;}
}
B4ecb23:L4ecb23:{c.instructions+=1;NFSU2_TR(0x4ecb23);
__builtin_memmove((R+8),gp(0x890080),4);
}
B4ecb29:L4ecb29:{c.instructions+=5;NFSU2_TR(0x4ecb29);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ecb2c:{NFSU2_TR(0x4ecb2c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4ecb2d:{NFSU2_TR(0x4ecb2d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B4ecb30:{NFSU2_TR(0x4ecb30);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4ecb32:{NFSU2_TR(0x4ecb32);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ecb00u);}goto L4ecb00;}}
}
B4ecb34:L4ecb34:{c.instructions+=3;NFSU2_TR(0x4ecb34);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B4ecb39:{NFSU2_TR(0x4ecb39);
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
B4ecb3b:{NFSU2_TR(0x4ecb3b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ecb69;}}
}
B4ecb3d:L4ecb3d:{c.instructions+=3;NFSU2_TR(0x4ecb3d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecb3f:{NFSU2_TR(0x4ecb3f);
w4(R+4,u32(0x85ad40ull));
}
B4ecb44:{NFSU2_TR(0x4ecb44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ecb49ull));
TAIL_STATIC(0x500ee0u,500);
}
B4ecb49:L4ecb49:{c.instructions+=3;NFSU2_TR(0x4ecb49);
__builtin_memmove((R+28),(R+0),4);
}
B4ecb4b:{NFSU2_TR(0x4ecb4b);
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
B4ecb4d:{NFSU2_TR(0x4ecb4d);
if(r1(R+518)){{goto L4ecb69;}}
}
B4ecb4f:L4ecb4f:{c.instructions+=1;NFSU2_TR(0x4ecb4f);
}
B4ecb50:L4ecb50:{c.instructions+=3;NFSU2_TR(0x4ecb50);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecb51:{NFSU2_TR(0x4ecb51);
__builtin_memmove((R+4),(R+24),4);
}
B4ecb53:{NFSU2_TR(0x4ecb53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ecb58ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ec8c0u);}goto L4ec8c0;}
}
B4ecb58:L4ecb58:{c.instructions+=3;NFSU2_TR(0x4ecb58);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecb59:{NFSU2_TR(0x4ecb59);
w4(R+4,u32(0x85ad40ull));
}
B4ecb5e:{NFSU2_TR(0x4ecb5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ecb63ull));
TAIL_STATIC(0x500ee0u,500);
}
B4ecb63:L4ecb63:{c.instructions+=3;NFSU2_TR(0x4ecb63);
__builtin_memmove((R+28),(R+0),4);
}
B4ecb65:{NFSU2_TR(0x4ecb65);
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
B4ecb67:{NFSU2_TR(0x4ecb67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ecb50u);}goto L4ecb50;}}
}
B4ecb69:L4ecb69:{c.instructions+=9;NFSU2_TR(0x4ecb69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ecb6c:{NFSU2_TR(0x4ecb6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ecb6d:{NFSU2_TR(0x4ecb6d);
__builtin_memmove((R+0),(R+24),4);
}
B4ecb6f:{NFSU2_TR(0x4ecb6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ecb70:{NFSU2_TR(0x4ecb70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ecb71:{NFSU2_TR(0x4ecb71);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ecb78:{NFSU2_TR(0x4ecb78);
__builtin_memmove((R+16),(R+20),4);
}
B4ecb7a:{NFSU2_TR(0x4ecb7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ecb7b:{NFSU2_TR(0x4ecb7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ecb80:L4ecb80:{c.instructions+=15;NFSU2_TR(0x4ecb80);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecb82:{NFSU2_TR(0x4ecb82);
u8 U[4];
w4(U+0,u32(0x7761d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecb87:{NFSU2_TR(0x4ecb87);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ecb8d:{NFSU2_TR(0x4ecb8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecb8e:{NFSU2_TR(0x4ecb8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ecb95:{NFSU2_TR(0x4ecb95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecb96:{NFSU2_TR(0x4ecb96);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecb97:{NFSU2_TR(0x4ecb97);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecb98:{NFSU2_TR(0x4ecb98);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecb99:{NFSU2_TR(0x4ecb99);
__builtin_memmove((R+20),(R+4),4);
}
B4ecb9b:{NFSU2_TR(0x4ecb9b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecb9c:{NFSU2_TR(0x4ecb9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ecba0:{NFSU2_TR(0x4ecba0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4ecba3:{NFSU2_TR(0x4ecba3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ecbab:{NFSU2_TR(0x4ecbab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ecbb0ull));
TAIL_STATIC(0x502fd0u,502);
}
B4ecbb0:L4ecbb0:{c.instructions+=3;NFSU2_TR(0x4ecbb0);
__builtin_memmove((R+28),(R+0),4);
}
B4ecbb2:{NFSU2_TR(0x4ecbb2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ecbb4:{NFSU2_TR(0x4ecbb4);
if(r1(R+518)){{goto L4ecbd9;}}
}
B4ecbb6:L4ecbb6:{c.instructions+=3;NFSU2_TR(0x4ecbb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ecbb9:{NFSU2_TR(0x4ecbb9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ecbbb:{NFSU2_TR(0x4ecbbb);
if(r1(R+518)){{goto L4ecbc1;}}
}
B4ecbbd:L4ecbbd:{c.instructions+=2;NFSU2_TR(0x4ecbbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ecbbf:{NFSU2_TR(0x4ecbbf);
{goto L4ecbc3;}
}
B4ecbc1:L4ecbc1:{c.instructions+=1;NFSU2_TR(0x4ecbc1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ecbc3:L4ecbc3:{c.instructions+=4;NFSU2_TR(0x4ecbc3);
u8 U[4];
w4(U+0,u32(0x44000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecbc8:{NFSU2_TR(0x4ecbc8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecbca:{NFSU2_TR(0x4ecbca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecbcb:{NFSU2_TR(0x4ecbcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ecbd0ull));
TAIL_STATIC(0x51d4d0u,51d);
}
B4ecbd0:L4ecbd0:{c.instructions+=4;NFSU2_TR(0x4ecbd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4ecbd2:{NFSU2_TR(0x4ecbd2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ecbd5:{NFSU2_TR(0x4ecbd5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ecbd7:{NFSU2_TR(0x4ecbd7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ecbb6u);}goto L4ecbb6;}}
}
B4ecbd9:L4ecbd9:{c.instructions+=4;NFSU2_TR(0x4ecbd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+12),(U+0),4);
}
B4ecbdc:{NFSU2_TR(0x4ecbdc);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ecbde:{NFSU2_TR(0x4ecbde);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ecbe6:{NFSU2_TR(0x4ecbe6);
if(r1(R+518)){{goto L4ecc5e;}}
}
B4ecbe8:L4ecbe8:{c.instructions+=7;NFSU2_TR(0x4ecbe8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ecbea:{NFSU2_TR(0x4ecbea);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ecbed:{NFSU2_TR(0x4ecbed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4ecbef:{NFSU2_TR(0x4ecbef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ecbf2:{NFSU2_TR(0x4ecbf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ecbf5:{NFSU2_TR(0x4ecbf5);
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
B4ecbf7:{NFSU2_TR(0x4ecbf7);
if(r1(R+518)){{goto L4ecc48;}}
}
B4ecbf9:L4ecbf9:{c.instructions+=3;NFSU2_TR(0x4ecbf9);
__builtin_memmove((R+24),gp(0x836560),4);
}
B4ecbff:{NFSU2_TR(0x4ecbff);
w4(R+4,u32(0x836560ull));
}
B4ecc04:{NFSU2_TR(0x4ecc04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ecc09ull));
TAIL_STATIC(0x502fd0u,502);
}
B4ecc09:L4ecc09:{c.instructions+=2;NFSU2_TR(0x4ecc09);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ecc0b:{NFSU2_TR(0x4ecc0b);
if(r1(R+518)){{goto L4ecc1b;}}
}
B4ecc0d:L4ecc0d:{c.instructions+=1;NFSU2_TR(0x4ecc0d);
__builtin_memmove((R+4),(R+4),4);
}
B4ecc10:L4ecc10:{c.instructions+=2;NFSU2_TR(0x4ecc10);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4ecc13:{NFSU2_TR(0x4ecc13);
if(r1(R+518)){{goto L4ecc48;}}
}
B4ecc15:L4ecc15:{c.instructions+=3;NFSU2_TR(0x4ecc15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4ecc17:{NFSU2_TR(0x4ecc17);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ecc19:{NFSU2_TR(0x4ecc19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ecc10u);}goto L4ecc10;}}
}
B4ecc1b:L4ecc1b:{c.instructions+=2;NFSU2_TR(0x4ecc1b);
s4(0x8364bc,u32(u32(m4(0x8364bc))-u32(u32(0x1ull))));
}
B4ecc21:{NFSU2_TR(0x4ecc21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ecc26ull));
TAIL_STATIC(0x440ec0u,440);
}
B4ecc26:L4ecc26:{c.instructions+=2;NFSU2_TR(0x4ecc26);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ecc28:{NFSU2_TR(0x4ecc28);
if(r1(R+518)){{goto L4ecc2f;}}
}
B4ecc2a:L4ecc2a:{c.instructions+=2;NFSU2_TR(0x4ecc2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ecc2d:{NFSU2_TR(0x4ecc2d);
{goto L4ecc31;}
}
B4ecc2f:L4ecc2f:{c.instructions+=1;NFSU2_TR(0x4ecc2f);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ecc31:L4ecc31:{c.instructions+=5;NFSU2_TR(0x4ecc31);
__builtin_memmove((R+4),gp(0x836560),4);
}
B4ecc37:{NFSU2_TR(0x4ecc37);
__builtin_memmove(gp(0x836560),(R+0),4);
}
B4ecc3c:{NFSU2_TR(0x4ecc3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ecc3f:{NFSU2_TR(0x4ecc3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x836560ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ecc46:{NFSU2_TR(0x4ecc46);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4ecc48:L4ecc48:{c.instructions+=4;NFSU2_TR(0x4ecc48);
__builtin_memmove((R+0),gp(0x8364b8),4);
}
B4ecc4d:{NFSU2_TR(0x4ecc4d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecc4e:{NFSU2_TR(0x4ecc4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecc4f:{NFSU2_TR(0x4ecc4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ecc54ull));
TAIL_STATIC(0x43f920u,43f);
}
B4ecc54:L4ecc54:{c.instructions+=4;NFSU2_TR(0x4ecc54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+12),(U+0),4);
}
B4ecc57:{NFSU2_TR(0x4ecc57);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ecc5a:{NFSU2_TR(0x4ecc5a);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ecc5c:{NFSU2_TR(0x4ecc5c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ecbe8u);}goto L4ecbe8;}}
}
B4ecc5e:L4ecc5e:{c.instructions+=8;NFSU2_TR(0x4ecc5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ecc62:{NFSU2_TR(0x4ecc62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ecc63:{NFSU2_TR(0x4ecc63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ecc64:{NFSU2_TR(0x4ecc64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ecc65:{NFSU2_TR(0x4ecc65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ecc66:{NFSU2_TR(0x4ecc66);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ecc6d:{NFSU2_TR(0x4ecc6d);
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
B4ecc70:{NFSU2_TR(0x4ecc70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ecc80:L4ecc80:{c.instructions+=9;NFSU2_TR(0x4ecc80);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecc82:{NFSU2_TR(0x4ecc82);
u8 U[4];
w4(U+0,u32(0x776204ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecc87:{NFSU2_TR(0x4ecc87);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ecc8d:{NFSU2_TR(0x4ecc8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecc8e:{NFSU2_TR(0x4ecc8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ecc95:{NFSU2_TR(0x4ecc95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecc96:{NFSU2_TR(0x4ecc96);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B4ecc9b:{NFSU2_TR(0x4ecc9b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ecc9d:{NFSU2_TR(0x4ecc9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eccdf;}}
}
B4ecc9f:L4ecc9f:{c.instructions+=3;NFSU2_TR(0x4ecc9f);
__builtin_memmove((R+0),gp(0x890108),4);
}
B4ecca4:{NFSU2_TR(0x4ecca4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ecca6:{NFSU2_TR(0x4ecca6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4eccdf;}}
}
B4ecca8:L4ecca8:{c.instructions+=4;NFSU2_TR(0x4ecca8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecca9:{NFSU2_TR(0x4ecca9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4eccad:{NFSU2_TR(0x4eccad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eccae:{NFSU2_TR(0x4eccae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eccb3ull));
TAIL_STATIC(0x4db900u,4db);
}
B4eccb3:L4eccb3:{c.instructions+=2;NFSU2_TR(0x4eccb3);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eccb5:{NFSU2_TR(0x4eccb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eccbaull));
TAIL_STATIC(0x575620u,575);
}
B4eccba:L4eccba:{c.instructions+=5;NFSU2_TR(0x4eccba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4eccbd:{NFSU2_TR(0x4eccbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eccc1:{NFSU2_TR(0x4eccc1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4eccc3:{NFSU2_TR(0x4eccc3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ecccb:{NFSU2_TR(0x4ecccb);
if(r1(R+518)){{goto L4eccd7;}}
}
B4ecccd:L4ecccd:{c.instructions+=3;NFSU2_TR(0x4ecccd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eccce:{NFSU2_TR(0x4eccce);
__builtin_memmove((R+4),(R+0),4);
}
B4eccd0:{NFSU2_TR(0x4eccd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eccd5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ec950u);}goto L4ec950;}
}
B4eccd5:L4eccd5:{c.instructions+=1;NFSU2_TR(0x4eccd5);
{goto L4eccd9;}
}
B4eccd7:L4eccd7:{c.instructions+=1;NFSU2_TR(0x4eccd7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4eccd9:L4eccd9:{c.instructions+=2;NFSU2_TR(0x4eccd9);
__builtin_memmove(gp(0x8364d4),(R+0),4);
}
B4eccde:{NFSU2_TR(0x4eccde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4eccdf:L4eccdf:{c.instructions+=4;NFSU2_TR(0x4eccdf);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ecce3:{NFSU2_TR(0x4ecce3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eccea:{NFSU2_TR(0x4eccea);
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
B4ecced:{NFSU2_TR(0x4ecced);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4eccf0:L4eccf0:{c.instructions+=3;NFSU2_TR(0x4eccf0);
__builtin_memmove((R+4),gp(0x8364d4),4);
}
B4eccf6:{NFSU2_TR(0x4eccf6);
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
B4eccf8:{NFSU2_TR(0x4eccf8);
if(r1(R+518)){{goto L4ecd04;}}
}
B4eccfa:L4eccfa:{c.instructions+=3;NFSU2_TR(0x4eccfa);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eccfe:{NFSU2_TR(0x4eccfe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eccff:{NFSU2_TR(0x4eccff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ecd04ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ec8c0u);}goto L4ec8c0;}
}
B4ecd04:L4ecd04:{c.instructions+=1;NFSU2_TR(0x4ecd04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ecd10:L4ecd10:{c.instructions+=15;NFSU2_TR(0x4ecd10);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecd12:{NFSU2_TR(0x4ecd12);
u8 U[4];
w4(U+0,u32(0x776239ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecd17:{NFSU2_TR(0x4ecd17);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ecd1d:{NFSU2_TR(0x4ecd1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecd1e:{NFSU2_TR(0x4ecd1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ecd25:{NFSU2_TR(0x4ecd25);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecd26:{NFSU2_TR(0x4ecd26);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ecd2a:{NFSU2_TR(0x4ecd2a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecd2b:{NFSU2_TR(0x4ecd2b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecd2c:{NFSU2_TR(0x4ecd2c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecd2d:{NFSU2_TR(0x4ecd2d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecd2e:{NFSU2_TR(0x4ecd2e);
__builtin_memmove((R+24),(R+4),4);
}
B4ecd30:{NFSU2_TR(0x4ecd30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecd31:{NFSU2_TR(0x4ecd31);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ecd35:{NFSU2_TR(0x4ecd35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ecd3aull));
TAIL_STATIC(0x551de0u,551);
}
B4ecd3a:L4ecd3a:{c.instructions+=29;NFSU2_TR(0x4ecd3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ecd3d:{NFSU2_TR(0x4ecd3d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4ecd3f:{NFSU2_TR(0x4ecd3f);
u8 U[4];
w4(U+0,u32(0x797de4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4ecd45:{NFSU2_TR(0x4ecd45);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ecd49:{NFSU2_TR(0x4ecd49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4ecd4b:{NFSU2_TR(0x4ecd4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ecd4e:{NFSU2_TR(0x4ecd4e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ecd51:{NFSU2_TR(0x4ecd51);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+28)),r4(U+0));
}
B4ecd53:{NFSU2_TR(0x4ecd53);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ecd56:{NFSU2_TR(0x4ecd56);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ecd59:{NFSU2_TR(0x4ecd59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4ecd5b:{NFSU2_TR(0x4ecd5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ecd5e:{NFSU2_TR(0x4ecd5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ecd61:{NFSU2_TR(0x4ecd61);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecd62:{NFSU2_TR(0x4ecd62);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecd63:{NFSU2_TR(0x4ecd63);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecd65:{NFSU2_TR(0x4ecd65);
u8 U[4];
w4(U+0,u32(0x7978e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecd6a:{NFSU2_TR(0x4ecd6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ecd70:{NFSU2_TR(0x4ecd70);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecd71:{NFSU2_TR(0x4ecd71);
__builtin_memmove((R+4),(R+20),4);
}
B4ecd73:{NFSU2_TR(0x4ecd73);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ecd78:{NFSU2_TR(0x4ecd78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ecd7b:{NFSU2_TR(0x4ecd7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ecd7e:{NFSU2_TR(0x4ecd7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ecd81:{NFSU2_TR(0x4ecd81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ecd84:{NFSU2_TR(0x4ecd84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ecd87:{NFSU2_TR(0x4ecd87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ecd8a:{NFSU2_TR(0x4ecd8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ecd8d:{NFSU2_TR(0x4ecd8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ecd92ull));
TAIL_STATIC(0x542ac0u,542);
}
B4ecd92:L4ecd92:{c.instructions+=38;NFSU2_TR(0x4ecd92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ecd98:{NFSU2_TR(0x4ecd98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
w4(U+4,u32(0x797dd4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ecda2:{NFSU2_TR(0x4ecda2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
w4(U+4,u32(0x797dc4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ecdac:{NFSU2_TR(0x4ecdac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
w4(U+4,u32(0x797db4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ecdb6:{NFSU2_TR(0x4ecdb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ecdbc:{NFSU2_TR(0x4ecdbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ecdc2:{NFSU2_TR(0x4ecdc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ecdc8:{NFSU2_TR(0x4ecdc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ecdce:{NFSU2_TR(0x4ecdce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ecdd4:{NFSU2_TR(0x4ecdd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ecdda:{NFSU2_TR(0x4ecdda);
w4(R+4,u32(0x432f0000ull));
}
B4ecddf:{NFSU2_TR(0x4ecddf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ecde5:{NFSU2_TR(0x4ecde5);
w4(R+0,u32(0x41c00000ull));
}
B4ecdea:{NFSU2_TR(0x4ecdea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ecdf0:{NFSU2_TR(0x4ecdf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ecdf6:{NFSU2_TR(0x4ecdf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ecdfc:{NFSU2_TR(0x4ecdfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ece02:{NFSU2_TR(0x4ece02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ece08:{NFSU2_TR(0x4ece08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ece0e:{NFSU2_TR(0x4ece0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ece14:{NFSU2_TR(0x4ece14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
w4(U+4,u32(0x40800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ece1e:{NFSU2_TR(0x4ece1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ece24:{NFSU2_TR(0x4ece24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ece27:{NFSU2_TR(0x4ece27);
w4(R+0,u32(0x1ull));
}
B4ece2c:{NFSU2_TR(0x4ece2c);
u8 U[4];
w4(U+0,u32(0x797da4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ece31:{NFSU2_TR(0x4ece31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ece37:{NFSU2_TR(0x4ece37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ece3d:{NFSU2_TR(0x4ece3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ece47:{NFSU2_TR(0x4ece47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ece4d:{NFSU2_TR(0x4ece4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ece53:{NFSU2_TR(0x4ece53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ece59:{NFSU2_TR(0x4ece59);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ece5f:{NFSU2_TR(0x4ece5f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14dull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ece65:{NFSU2_TR(0x4ece65);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14eull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ece6b:{NFSU2_TR(0x4ece6b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14full))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ece71:{NFSU2_TR(0x4ece71);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ece77:{NFSU2_TR(0x4ece77);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ece7b:{NFSU2_TR(0x4ece7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ece80ull));
TAIL_STATIC(0x505450u,505);
}
B4ece80:L4ece80:{c.instructions+=4;NFSU2_TR(0x4ece80);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ece81:{NFSU2_TR(0x4ece81);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ece85:{NFSU2_TR(0x4ece85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ece86:{NFSU2_TR(0x4ece86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ece8bull));
TAIL_STATIC(0x5379c0u,537);
}
B4ece8b:L4ece8b:{c.instructions+=5;NFSU2_TR(0x4ece8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ece8e:{NFSU2_TR(0x4ece8e);
u8 U[4];
w4(U+0,u32(0x797d98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ece93:{NFSU2_TR(0x4ece93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ece96:{NFSU2_TR(0x4ece96);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ece9a:{NFSU2_TR(0x4ece9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ece9full));
TAIL_STATIC(0x505450u,505);
}
B4ece9f:L4ece9f:{c.instructions+=4;NFSU2_TR(0x4ece9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ecea3:{NFSU2_TR(0x4ecea3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecea4:{NFSU2_TR(0x4ecea4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecea5:{NFSU2_TR(0x4ecea5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eceaaull));
TAIL_STATIC(0x5379c0u,537);
}
B4eceaa:L4eceaa:{c.instructions+=5;NFSU2_TR(0x4eceaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ecead:{NFSU2_TR(0x4ecead);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eceb0:{NFSU2_TR(0x4eceb0);
u8 U[4];
w4(U+0,u32(0x797d88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eceb5:{NFSU2_TR(0x4eceb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eceb9:{NFSU2_TR(0x4eceb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ecebeull));
TAIL_STATIC(0x505450u,505);
}
B4ecebe:L4ecebe:{c.instructions+=4;NFSU2_TR(0x4ecebe);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ecec2:{NFSU2_TR(0x4ecec2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecec3:{NFSU2_TR(0x4ecec3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecec4:{NFSU2_TR(0x4ecec4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ecec9ull));
TAIL_STATIC(0x5379c0u,537);
}
B4ecec9:L4ecec9:{c.instructions+=5;NFSU2_TR(0x4ecec9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ececc:{NFSU2_TR(0x4ececc);
u8 U[4];
w4(U+0,u32(0x797d7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4eced1:{NFSU2_TR(0x4eced1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eced4:{NFSU2_TR(0x4eced4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eced8:{NFSU2_TR(0x4eced8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4eceddull));
TAIL_STATIC(0x505450u,505);
}
B4ecedd:L4ecedd:{c.instructions+=4;NFSU2_TR(0x4ecedd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecede:{NFSU2_TR(0x4ecede);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ecee2:{NFSU2_TR(0x4ecee2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecee3:{NFSU2_TR(0x4ecee3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ecee8ull));
TAIL_STATIC(0x537a10u,537);
}
B4ecee8:L4ecee8:{c.instructions+=5;NFSU2_TR(0x4ecee8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4eceeb:{NFSU2_TR(0x4eceeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4eceee:{NFSU2_TR(0x4eceee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B4ecef1:{NFSU2_TR(0x4ecef1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ecef3:{NFSU2_TR(0x4ecef3);
if(r1(R+518)){TAIL_STATIC(0x4ed094u,4ed);}
}
B4ecef9:L4ecef9:{c.instructions+=2;NFSU2_TR(0x4ecef9);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4ecefc:{NFSU2_TR(0x4ecefc);
if(r1(R+518)){TAIL_STATIC(0x4ed094u,4ed);}
}
B4ecf02:L4ecf02:{c.instructions+=2;NFSU2_TR(0x4ecf02);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4ecf05:{NFSU2_TR(0x4ecf05);
if(r1(R+518)){TAIL_STATIC(0x4ed094u,4ed);}
}
B4ecf0b:L4ecf0b:{c.instructions+=5;NFSU2_TR(0x4ecf0b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecf0c:{NFSU2_TR(0x4ecf0c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecf0d:{NFSU2_TR(0x4ecf0d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecf0e:{NFSU2_TR(0x4ecf0e);
__builtin_memmove((R+4),(R+20),4);
}
B4ecf10:{NFSU2_TR(0x4ecf10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ecf15ull));
TAIL_STATIC(0x538080u,538);
}
B4ecf15:L4ecf15:{c.instructions+=2;NFSU2_TR(0x4ecf15);
__builtin_memmove((R+4),(R+24),4);
}
B4ecf17:{NFSU2_TR(0x4ecf17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ecf1cull));
TAIL_STATIC(0x4accf0u,4ac);
}
B4ecf1c:L4ecf1c:{c.instructions+=6;NFSU2_TR(0x4ecf1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ecf1f:{NFSU2_TR(0x4ecf1f);
u8 U[4];
w4(U+0,u32(0x1b15f53cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecf24:{NFSU2_TR(0x4ecf24);
u8 U[4];
w4(U+0,u32(0x666593c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecf29:{NFSU2_TR(0x4ecf29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecf2a:{NFSU2_TR(0x4ecf2a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ecf2d:{NFSU2_TR(0x4ecf2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ecf32ull));
TAIL_STATIC(0x537a10u,537);
}
B4ecf32:L4ecf32:{c.instructions+=3;NFSU2_TR(0x4ecf32);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ecf35:{NFSU2_TR(0x4ecf35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecf36:{NFSU2_TR(0x4ecf36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ecf3bull));
TAIL_STATIC(0x50c900u,50c);
}
B4ecf3b:L4ecf3b:{c.instructions+=6;NFSU2_TR(0x4ecf3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ecf3e:{NFSU2_TR(0x4ecf3e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ecf41:{NFSU2_TR(0x4ecf41);
u8 U[4];
w4(U+0,u32(0x37e740e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecf46:{NFSU2_TR(0x4ecf46);
u8 U[4];
w4(U+0,u32(0x59aba1e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecf4b:{NFSU2_TR(0x4ecf4b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecf4c:{NFSU2_TR(0x4ecf4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ecf51ull));
TAIL_STATIC(0x537a10u,537);
}
B4ecf51:L4ecf51:{c.instructions+=3;NFSU2_TR(0x4ecf51);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ecf54:{NFSU2_TR(0x4ecf54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecf55:{NFSU2_TR(0x4ecf55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ecf5aull));
TAIL_STATIC(0x50c900u,50c);
}
B4ecf5a:L4ecf5a:{c.instructions+=4;NFSU2_TR(0x4ecf5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ecf5d:{NFSU2_TR(0x4ecf5d);
u8 U[4];
w4(U+0,u32(0x797d68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecf62:{NFSU2_TR(0x4ecf62);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ecf66:{NFSU2_TR(0x4ecf66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ecf6bull));
TAIL_STATIC(0x505450u,505);
}
B4ecf6b:L4ecf6b:{c.instructions+=4;NFSU2_TR(0x4ecf6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ecf6f:{NFSU2_TR(0x4ecf6f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecf70:{NFSU2_TR(0x4ecf70);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecf71:{NFSU2_TR(0x4ecf71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ecf76ull));
TAIL_STATIC(0x537a10u,537);
}
B4ecf76:L4ecf76:{c.instructions+=4;NFSU2_TR(0x4ecf76);
u8 U[4];
w4(U+0,u32(0x8bab66efull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecf7b:{NFSU2_TR(0x4ecf7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecf7c:{NFSU2_TR(0x4ecf7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ecf82:{NFSU2_TR(0x4ecf82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ecf87ull));
TAIL_STATIC(0x50c900u,50c);
}
B4ecf87:L4ecf87:{c.instructions+=4;NFSU2_TR(0x4ecf87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ecf8a:{NFSU2_TR(0x4ecf8a);
u8 U[4];
w4(U+0,u32(0xd1cda594ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecf8f:{NFSU2_TR(0x4ecf8f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecf90:{NFSU2_TR(0x4ecf90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ecf95ull));
TAIL_STATIC(0x537a60u,537);
}
B4ecf95:L4ecf95:{c.instructions+=5;NFSU2_TR(0x4ecf95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ecf9b:{NFSU2_TR(0x4ecf9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ecf9e:{NFSU2_TR(0x4ecf9e);
u8 U[4];
w4(U+0,u32(0x9345e4a7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecfa3:{NFSU2_TR(0x4ecfa3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecfa4:{NFSU2_TR(0x4ecfa4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ecfa9ull));
TAIL_STATIC(0x537a60u,537);
}
B4ecfa9:L4ecfa9:{c.instructions+=5;NFSU2_TR(0x4ecfa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ecfaf:{NFSU2_TR(0x4ecfaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ecfb2:{NFSU2_TR(0x4ecfb2);
u8 U[4];
w4(U+0,u32(0x4e11cf90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecfb7:{NFSU2_TR(0x4ecfb7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecfb8:{NFSU2_TR(0x4ecfb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ecfbdull));
TAIL_STATIC(0x537a10u,537);
}
B4ecfbd:L4ecfbd:{c.instructions+=5;NFSU2_TR(0x4ecfbd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecfbf:{NFSU2_TR(0x4ecfbf);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecfc4:{NFSU2_TR(0x4ecfc4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecfc5:{NFSU2_TR(0x4ecfc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ecfcb:{NFSU2_TR(0x4ecfcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ecfd0ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4ecfd0:L4ecfd0:{c.instructions+=3;NFSU2_TR(0x4ecfd0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B4ecfd3:{NFSU2_TR(0x4ecfd3);
__builtin_memmove((R+4),(R+24),4);
}
B4ecfd5:{NFSU2_TR(0x4ecfd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ecfdaull));
TAIL_STATIC(0x4ace00u,4ac);
}
B4ecfda:L4ecfda:{c.instructions+=5;NFSU2_TR(0x4ecfda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ecfdd:{NFSU2_TR(0x4ecfdd);
u8 U[4];
w4(U+0,u32(0x4dc6db5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecfe2:{NFSU2_TR(0x4ecfe2);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecfe7:{NFSU2_TR(0x4ecfe7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecfe8:{NFSU2_TR(0x4ecfe8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ecfedull));
TAIL_STATIC(0x537a10u,537);
}
B4ecfed:L4ecfed:{c.instructions+=3;NFSU2_TR(0x4ecfed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ecff0:{NFSU2_TR(0x4ecff0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ecff1:{NFSU2_TR(0x4ecff1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ecff6ull));
TAIL_STATIC(0x50c900u,50c);
}
B4ecff6:L4ecff6:{c.instructions+=3;NFSU2_TR(0x4ecff6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ecff9:{NFSU2_TR(0x4ecff9);
__builtin_memmove((R+4),(R+24),4);
}
B4ecffb:{NFSU2_TR(0x4ecffb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ed000ull));
TAIL_STATIC(0x4dba50u,4db);
}
XIT:NFSU2_TR_EXIT(0x4ec,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
