#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_431(u8* __restrict R,Cpu& c);
u32 body_435(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_457(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_594(u8* __restrict R,Cpu& c);
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_5a0(u8* __restrict R,Cpu& c);
u32 body_5a1(u8* __restrict R,Cpu& c);
u32 body_5a2(u8* __restrict R,Cpu& c);
u32 body_5a9(u8* __restrict R,Cpu& c);
u32 body_5ab(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_5d6(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5aa,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5aa,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5aa(u8* __restrict R,Cpu& c);
u32 page_5aa(Cpu& c){return body_5aa(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5aa(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5aa002:goto L5aa002;
case 0x5aa008:c.instructions+=14;goto B5aa008;
case 0x5aa00a:c.instructions+=13;goto B5aa00a;
case 0x5aa00c:c.instructions+=12;goto B5aa00c;
case 0x5aa00f:c.instructions+=11;goto B5aa00f;
case 0x5aa012:c.instructions+=10;goto B5aa012;
case 0x5aa015:c.instructions+=9;goto B5aa015;
case 0x5aa01b:c.instructions+=8;goto B5aa01b;
case 0x5aa021:c.instructions+=7;goto B5aa021;
case 0x5aa027:c.instructions+=6;goto B5aa027;
case 0x5aa029:c.instructions+=5;goto B5aa029;
case 0x5aa02b:c.instructions+=4;goto B5aa02b;
case 0x5aa02e:c.instructions+=3;goto B5aa02e;
case 0x5aa031:c.instructions+=2;goto B5aa031;
case 0x5aa032:c.instructions+=1;goto B5aa032;
case 0x5aa040:goto L5aa040;
case 0x5aa045:c.instructions+=1;goto B5aa045;
case 0x5aa050:goto L5aa050;
case 0x5aa056:c.instructions+=1;goto B5aa056;
case 0x5aa060:goto L5aa060;
case 0x5aa066:c.instructions+=1;goto B5aa066;
case 0x5aa070:goto L5aa070;
case 0x5aa073:c.instructions+=4;goto B5aa073;
case 0x5aa075:c.instructions+=3;goto B5aa075;
case 0x5aa077:c.instructions+=2;goto B5aa077;
case 0x5aa07a:c.instructions+=1;goto B5aa07a;
case 0x5aa080:goto L5aa080;
case 0x5aa086:c.instructions+=1;goto B5aa086;
case 0x5aa090:goto L5aa090;
case 0x5aa096:c.instructions+=2;goto B5aa096;
case 0x5aa09c:c.instructions+=1;goto B5aa09c;
case 0x5aa0b0:goto L5aa0b0;
case 0x5aa0b1:c.instructions+=17;goto B5aa0b1;
case 0x5aa0b3:c.instructions+=16;goto B5aa0b3;
case 0x5aa0b6:c.instructions+=15;goto B5aa0b6;
case 0x5aa0b8:c.instructions+=14;goto B5aa0b8;
case 0x5aa0bd:c.instructions+=13;goto B5aa0bd;
case 0x5aa0c3:c.instructions+=12;goto B5aa0c3;
case 0x5aa0c4:c.instructions+=11;goto B5aa0c4;
case 0x5aa0cb:c.instructions+=10;goto B5aa0cb;
case 0x5aa0ce:c.instructions+=9;goto B5aa0ce;
case 0x5aa0d1:c.instructions+=8;goto B5aa0d1;
case 0x5aa0d2:c.instructions+=7;goto B5aa0d2;
case 0x5aa0d3:c.instructions+=6;goto B5aa0d3;
case 0x5aa0d4:c.instructions+=5;goto B5aa0d4;
case 0x5aa0d6:c.instructions+=4;goto B5aa0d6;
case 0x5aa0d8:c.instructions+=3;goto B5aa0d8;
case 0x5aa0d9:c.instructions+=2;goto B5aa0d9;
case 0x5aa0dd:c.instructions+=1;goto B5aa0dd;
case 0x5aa0e2:goto L5aa0e2;
case 0x5aa0e8:c.instructions+=6;goto B5aa0e8;
case 0x5aa0ed:c.instructions+=5;goto B5aa0ed;
case 0x5aa0f3:c.instructions+=4;goto B5aa0f3;
case 0x5aa0f4:c.instructions+=3;goto B5aa0f4;
case 0x5aa0f6:c.instructions+=2;goto B5aa0f6;
case 0x5aa0fb:c.instructions+=1;goto B5aa0fb;
case 0x5aa0fd:goto L5aa0fd;
case 0x5aa102:goto L5aa102;
case 0x5aa106:c.instructions+=13;goto B5aa106;
case 0x5aa10b:c.instructions+=12;goto B5aa10b;
case 0x5aa110:c.instructions+=11;goto B5aa110;
case 0x5aa113:c.instructions+=10;goto B5aa113;
case 0x5aa115:c.instructions+=9;goto B5aa115;
case 0x5aa117:c.instructions+=8;goto B5aa117;
case 0x5aa119:c.instructions+=7;goto B5aa119;
case 0x5aa11c:c.instructions+=6;goto B5aa11c;
case 0x5aa122:c.instructions+=5;goto B5aa122;
case 0x5aa123:c.instructions+=4;goto B5aa123;
case 0x5aa12a:c.instructions+=3;goto B5aa12a;
case 0x5aa12d:c.instructions+=2;goto B5aa12d;
case 0x5aa130:c.instructions+=1;goto B5aa130;
case 0x5aa135:goto L5aa135;
case 0x5aa13c:c.instructions+=10;goto B5aa13c;
case 0x5aa13f:c.instructions+=9;goto B5aa13f;
case 0x5aa145:c.instructions+=8;goto B5aa145;
case 0x5aa14c:c.instructions+=7;goto B5aa14c;
case 0x5aa151:c.instructions+=6;goto B5aa151;
case 0x5aa157:c.instructions+=5;goto B5aa157;
case 0x5aa158:c.instructions+=4;goto B5aa158;
case 0x5aa15a:c.instructions+=3;goto B5aa15a;
case 0x5aa162:c.instructions+=2;goto B5aa162;
case 0x5aa167:c.instructions+=1;goto B5aa167;
case 0x5aa169:goto L5aa169;
case 0x5aa16e:goto L5aa16e;
case 0x5aa173:goto L5aa173;
case 0x5aa175:c.instructions+=1;goto B5aa175;
case 0x5aa177:goto L5aa177;
case 0x5aa17a:c.instructions+=1;goto B5aa17a;
case 0x5aa17c:goto L5aa17c;
case 0x5aa17e:goto L5aa17e;
case 0x5aa184:c.instructions+=14;goto B5aa184;
case 0x5aa187:c.instructions+=13;goto B5aa187;
case 0x5aa189:c.instructions+=12;goto B5aa189;
case 0x5aa18e:c.instructions+=11;goto B5aa18e;
case 0x5aa191:c.instructions+=10;goto B5aa191;
case 0x5aa197:c.instructions+=9;goto B5aa197;
case 0x5aa19a:c.instructions+=8;goto B5aa19a;
case 0x5aa19d:c.instructions+=7;goto B5aa19d;
case 0x5aa1a0:c.instructions+=6;goto B5aa1a0;
case 0x5aa1a3:c.instructions+=5;goto B5aa1a3;
case 0x5aa1a6:c.instructions+=4;goto B5aa1a6;
case 0x5aa1aa:c.instructions+=3;goto B5aa1aa;
case 0x5aa1ab:c.instructions+=2;goto B5aa1ab;
case 0x5aa1ae:c.instructions+=1;goto B5aa1ae;
case 0x5aa1b3:goto L5aa1b3;
case 0x5aa1b4:c.instructions+=5;goto B5aa1b4;
case 0x5aa1b5:c.instructions+=4;goto B5aa1b5;
case 0x5aa1b9:c.instructions+=3;goto B5aa1b9;
case 0x5aa1be:c.instructions+=2;goto B5aa1be;
case 0x5aa1bf:c.instructions+=1;goto B5aa1bf;
case 0x5aa1c4:goto L5aa1c4;
case 0x5aa1c6:c.instructions+=5;goto B5aa1c6;
case 0x5aa1ca:c.instructions+=4;goto B5aa1ca;
case 0x5aa1cb:c.instructions+=3;goto B5aa1cb;
case 0x5aa1ce:c.instructions+=2;goto B5aa1ce;
case 0x5aa1cf:c.instructions+=1;goto B5aa1cf;
case 0x5aa1d4:goto L5aa1d4;
case 0x5aa1d7:c.instructions+=5;goto B5aa1d7;
case 0x5aa1da:c.instructions+=4;goto B5aa1da;
case 0x5aa1dd:c.instructions+=3;goto B5aa1dd;
case 0x5aa1de:c.instructions+=2;goto B5aa1de;
case 0x5aa1e2:c.instructions+=1;goto B5aa1e2;
case 0x5aa1e7:goto L5aa1e7;
case 0x5aa1ea:c.instructions+=9;goto B5aa1ea;
case 0x5aa1ed:c.instructions+=8;goto B5aa1ed;
case 0x5aa1f0:c.instructions+=7;goto B5aa1f0;
case 0x5aa1f3:c.instructions+=6;goto B5aa1f3;
case 0x5aa1f6:c.instructions+=5;goto B5aa1f6;
case 0x5aa1f9:c.instructions+=4;goto B5aa1f9;
case 0x5aa1fc:c.instructions+=3;goto B5aa1fc;
case 0x5aa1ff:c.instructions+=2;goto B5aa1ff;
case 0x5aa205:c.instructions+=1;goto B5aa205;
case 0x5aa20a:goto L5aa20a;
case 0x5aa20f:c.instructions+=12;goto B5aa20f;
case 0x5aa215:c.instructions+=11;goto B5aa215;
case 0x5aa21b:c.instructions+=10;goto B5aa21b;
case 0x5aa21e:c.instructions+=9;goto B5aa21e;
case 0x5aa21f:c.instructions+=8;goto B5aa21f;
case 0x5aa223:c.instructions+=7;goto B5aa223;
case 0x5aa224:c.instructions+=6;goto B5aa224;
case 0x5aa225:c.instructions+=5;goto B5aa225;
case 0x5aa227:c.instructions+=4;goto B5aa227;
case 0x5aa22f:c.instructions+=3;goto B5aa22f;
case 0x5aa237:c.instructions+=2;goto B5aa237;
case 0x5aa23f:c.instructions+=1;goto B5aa23f;
case 0x5aa244:goto L5aa244;
case 0x5aa247:c.instructions+=6;goto B5aa247;
case 0x5aa24a:c.instructions+=5;goto B5aa24a;
case 0x5aa24b:c.instructions+=4;goto B5aa24b;
case 0x5aa24e:c.instructions+=3;goto B5aa24e;
case 0x5aa24f:c.instructions+=2;goto B5aa24f;
case 0x5aa251:c.instructions+=1;goto B5aa251;
case 0x5aa256:goto L5aa256;
case 0x5aa25a:c.instructions+=2;goto B5aa25a;
case 0x5aa25b:c.instructions+=1;goto B5aa25b;
case 0x5aa260:goto L5aa260;
case 0x5aa267:c.instructions+=9;goto B5aa267;
case 0x5aa26a:c.instructions+=8;goto B5aa26a;
case 0x5aa26b:c.instructions+=7;goto B5aa26b;
case 0x5aa26d:c.instructions+=6;goto B5aa26d;
case 0x5aa26e:c.instructions+=5;goto B5aa26e;
case 0x5aa275:c.instructions+=4;goto B5aa275;
case 0x5aa276:c.instructions+=3;goto B5aa276;
case 0x5aa278:c.instructions+=2;goto B5aa278;
case 0x5aa279:c.instructions+=1;goto B5aa279;
case 0x5aa280:goto L5aa280;
case 0x5aa286:c.instructions+=13;goto B5aa286;
case 0x5aa288:c.instructions+=12;goto B5aa288;
case 0x5aa28d:c.instructions+=11;goto B5aa28d;
case 0x5aa28e:c.instructions+=10;goto B5aa28e;
case 0x5aa295:c.instructions+=9;goto B5aa295;
case 0x5aa298:c.instructions+=8;goto B5aa298;
case 0x5aa299:c.instructions+=7;goto B5aa299;
case 0x5aa29a:c.instructions+=6;goto B5aa29a;
case 0x5aa29b:c.instructions+=5;goto B5aa29b;
case 0x5aa29f:c.instructions+=4;goto B5aa29f;
case 0x5aa2a4:c.instructions+=3;goto B5aa2a4;
case 0x5aa2a6:c.instructions+=2;goto B5aa2a6;
case 0x5aa2a8:c.instructions+=1;goto B5aa2a8;
case 0x5aa2ad:goto L5aa2ad;
case 0x5aa2b0:c.instructions+=2;goto B5aa2b0;
case 0x5aa2b2:c.instructions+=1;goto B5aa2b2;
case 0x5aa2b8:goto L5aa2b8;
case 0x5aa2bc:c.instructions+=3;goto B5aa2bc;
case 0x5aa2bd:c.instructions+=2;goto B5aa2bd;
case 0x5aa2bf:c.instructions+=1;goto B5aa2bf;
case 0x5aa2c4:goto L5aa2c4;
case 0x5aa2cb:c.instructions+=1;goto B5aa2cb;
case 0x5aa2d1:goto L5aa2d1;
case 0x5aa2d5:c.instructions+=3;goto B5aa2d5;
case 0x5aa2d6:c.instructions+=2;goto B5aa2d6;
case 0x5aa2d8:c.instructions+=1;goto B5aa2d8;
case 0x5aa2dd:goto L5aa2dd;
case 0x5aa2e1:c.instructions+=3;goto B5aa2e1;
case 0x5aa2e2:c.instructions+=2;goto B5aa2e2;
case 0x5aa2e7:c.instructions+=1;goto B5aa2e7;
case 0x5aa2ec:goto L5aa2ec;
case 0x5aa2f1:c.instructions+=8;goto B5aa2f1;
case 0x5aa2f8:c.instructions+=7;goto B5aa2f8;
case 0x5aa2fb:c.instructions+=6;goto B5aa2fb;
case 0x5aa2ff:c.instructions+=5;goto B5aa2ff;
case 0x5aa302:c.instructions+=4;goto B5aa302;
case 0x5aa303:c.instructions+=3;goto B5aa303;
case 0x5aa305:c.instructions+=2;goto B5aa305;
case 0x5aa307:c.instructions+=1;goto B5aa307;
case 0x5aa30c:goto L5aa30c;
case 0x5aa312:c.instructions+=2;goto B5aa312;
case 0x5aa313:c.instructions+=1;goto B5aa313;
case 0x5aa318:goto L5aa318;
case 0x5aa31b:c.instructions+=4;goto B5aa31b;
case 0x5aa31f:c.instructions+=3;goto B5aa31f;
case 0x5aa321:c.instructions+=2;goto B5aa321;
case 0x5aa329:c.instructions+=1;goto B5aa329;
case 0x5aa32b:goto L5aa32b;
case 0x5aa330:c.instructions+=5;goto B5aa330;
case 0x5aa331:c.instructions+=4;goto B5aa331;
case 0x5aa332:c.instructions+=3;goto B5aa332;
case 0x5aa333:c.instructions+=2;goto B5aa333;
case 0x5aa335:c.instructions+=1;goto B5aa335;
case 0x5aa33a:goto L5aa33a;
case 0x5aa33c:goto L5aa33c;
case 0x5aa33e:goto L5aa33e;
case 0x5aa340:c.instructions+=4;goto B5aa340;
case 0x5aa341:c.instructions+=3;goto B5aa341;
case 0x5aa343:c.instructions+=2;goto B5aa343;
case 0x5aa34b:c.instructions+=1;goto B5aa34b;
case 0x5aa34e:goto L5aa34e;
case 0x5aa353:goto L5aa353;
case 0x5aa358:c.instructions+=2;goto B5aa358;
case 0x5aa35a:c.instructions+=1;goto B5aa35a;
case 0x5aa35c:goto L5aa35c;
case 0x5aa35f:c.instructions+=1;goto B5aa35f;
case 0x5aa361:goto L5aa361;
case 0x5aa363:goto L5aa363;
case 0x5aa368:c.instructions+=1;goto B5aa368;
case 0x5aa36d:goto L5aa36d;
case 0x5aa36f:c.instructions+=2;goto B5aa36f;
case 0x5aa371:c.instructions+=1;goto B5aa371;
case 0x5aa373:goto L5aa373;
case 0x5aa377:c.instructions+=1;goto B5aa377;
case 0x5aa379:goto L5aa379;
case 0x5aa37c:c.instructions+=9;goto B5aa37c;
case 0x5aa37f:c.instructions+=8;goto B5aa37f;
case 0x5aa382:c.instructions+=7;goto B5aa382;
case 0x5aa385:c.instructions+=6;goto B5aa385;
case 0x5aa389:c.instructions+=5;goto B5aa389;
case 0x5aa38c:c.instructions+=4;goto B5aa38c;
case 0x5aa38d:c.instructions+=3;goto B5aa38d;
case 0x5aa38f:c.instructions+=2;goto B5aa38f;
case 0x5aa393:c.instructions+=1;goto B5aa393;
case 0x5aa398:goto L5aa398;
case 0x5aa39b:c.instructions+=7;goto B5aa39b;
case 0x5aa39d:c.instructions+=6;goto B5aa39d;
case 0x5aa3a1:c.instructions+=5;goto B5aa3a1;
case 0x5aa3a5:c.instructions+=4;goto B5aa3a5;
case 0x5aa3a6:c.instructions+=3;goto B5aa3a6;
case 0x5aa3a8:c.instructions+=2;goto B5aa3a8;
case 0x5aa3ac:c.instructions+=1;goto B5aa3ac;
case 0x5aa3b1:goto L5aa3b1;
case 0x5aa3b3:c.instructions+=6;goto B5aa3b3;
case 0x5aa3b7:c.instructions+=5;goto B5aa3b7;
case 0x5aa3bb:c.instructions+=4;goto B5aa3bb;
case 0x5aa3bc:c.instructions+=3;goto B5aa3bc;
case 0x5aa3c0:c.instructions+=2;goto B5aa3c0;
case 0x5aa3c2:c.instructions+=1;goto B5aa3c2;
case 0x5aa3c7:goto L5aa3c7;
case 0x5aa3c9:c.instructions+=3;goto B5aa3c9;
case 0x5aa3ca:c.instructions+=2;goto B5aa3ca;
case 0x5aa3cc:c.instructions+=1;goto B5aa3cc;
case 0x5aa3cf:goto L5aa3cf;
case 0x5aa3d2:c.instructions+=2;goto B5aa3d2;
case 0x5aa3d4:c.instructions+=1;goto B5aa3d4;
case 0x5aa3d6:goto L5aa3d6;
case 0x5aa3d9:c.instructions+=1;goto B5aa3d9;
case 0x5aa3db:goto L5aa3db;
case 0x5aa3dd:goto L5aa3dd;
case 0x5aa3df:c.instructions+=1;goto B5aa3df;
case 0x5aa3e1:goto L5aa3e1;
case 0x5aa3e5:c.instructions+=4;goto B5aa3e5;
case 0x5aa3e6:c.instructions+=3;goto B5aa3e6;
case 0x5aa3e8:c.instructions+=2;goto B5aa3e8;
case 0x5aa3f0:c.instructions+=1;goto B5aa3f0;
case 0x5aa3f5:goto L5aa3f5;
case 0x5aa3f7:c.instructions+=1;goto B5aa3f7;
case 0x5aa3fc:goto L5aa3fc;
case 0x5aa400:c.instructions+=6;goto B5aa400;
case 0x5aa401:c.instructions+=5;goto B5aa401;
case 0x5aa402:c.instructions+=4;goto B5aa402;
case 0x5aa403:c.instructions+=3;goto B5aa403;
case 0x5aa40a:c.instructions+=2;goto B5aa40a;
case 0x5aa40d:c.instructions+=1;goto B5aa40d;
case 0x5aa410:goto L5aa410;
case 0x5aa412:c.instructions+=13;goto B5aa412;
case 0x5aa417:c.instructions+=12;goto B5aa417;
case 0x5aa41d:c.instructions+=11;goto B5aa41d;
case 0x5aa41e:c.instructions+=10;goto B5aa41e;
case 0x5aa425:c.instructions+=9;goto B5aa425;
case 0x5aa426:c.instructions+=8;goto B5aa426;
case 0x5aa427:c.instructions+=7;goto B5aa427;
case 0x5aa42b:c.instructions+=6;goto B5aa42b;
case 0x5aa431:c.instructions+=5;goto B5aa431;
case 0x5aa434:c.instructions+=4;goto B5aa434;
case 0x5aa437:c.instructions+=3;goto B5aa437;
case 0x5aa439:c.instructions+=2;goto B5aa439;
case 0x5aa441:c.instructions+=1;goto B5aa441;
case 0x5aa443:goto L5aa443;
case 0x5aa445:c.instructions+=7;goto B5aa445;
case 0x5aa447:c.instructions+=6;goto B5aa447;
case 0x5aa44a:c.instructions+=5;goto B5aa44a;
case 0x5aa44c:c.instructions+=4;goto B5aa44c;
case 0x5aa44f:c.instructions+=3;goto B5aa44f;
case 0x5aa452:c.instructions+=2;goto B5aa452;
case 0x5aa454:c.instructions+=1;goto B5aa454;
case 0x5aa456:goto L5aa456;
case 0x5aa458:c.instructions+=2;goto B5aa458;
case 0x5aa45a:c.instructions+=1;goto B5aa45a;
case 0x5aa45c:goto L5aa45c;
case 0x5aa45e:c.instructions+=1;goto B5aa45e;
case 0x5aa460:goto L5aa460;
case 0x5aa462:c.instructions+=2;goto B5aa462;
case 0x5aa46a:c.instructions+=1;goto B5aa46a;
case 0x5aa46f:goto L5aa46f;
case 0x5aa473:c.instructions+=4;goto B5aa473;
case 0x5aa474:c.instructions+=3;goto B5aa474;
case 0x5aa47b:c.instructions+=2;goto B5aa47b;
case 0x5aa47e:c.instructions+=1;goto B5aa47e;
case 0x5aa480:goto L5aa480;
case 0x5aa486:c.instructions+=9;goto B5aa486;
case 0x5aa487:c.instructions+=8;goto B5aa487;
case 0x5aa488:c.instructions+=7;goto B5aa488;
case 0x5aa489:c.instructions+=6;goto B5aa489;
case 0x5aa48a:c.instructions+=5;goto B5aa48a;
case 0x5aa48e:c.instructions+=4;goto B5aa48e;
case 0x5aa490:c.instructions+=3;goto B5aa490;
case 0x5aa491:c.instructions+=2;goto B5aa491;
case 0x5aa495:c.instructions+=1;goto B5aa495;
case 0x5aa49a:goto L5aa49a;
case 0x5aa49d:c.instructions+=1;goto B5aa49d;
case 0x5aa4a5:goto L5aa4a5;
case 0x5aa4a7:c.instructions+=1;goto B5aa4a7;
case 0x5aa4a9:goto L5aa4a9;
case 0x5aa4ac:c.instructions+=1;goto B5aa4ac;
case 0x5aa4ae:goto L5aa4ae;
case 0x5aa4b0:goto L5aa4b0;
case 0x5aa4b3:c.instructions+=2;goto B5aa4b3;
case 0x5aa4b5:c.instructions+=1;goto B5aa4b5;
case 0x5aa4b7:goto L5aa4b7;
case 0x5aa4ba:c.instructions+=1;goto B5aa4ba;
case 0x5aa4bc:goto L5aa4bc;
case 0x5aa4be:goto L5aa4be;
case 0x5aa4c0:c.instructions+=1;goto B5aa4c0;
case 0x5aa4c6:goto L5aa4c6;
case 0x5aa4c8:c.instructions+=2;goto B5aa4c8;
case 0x5aa4ca:c.instructions+=1;goto B5aa4ca;
case 0x5aa4cd:goto L5aa4cd;
case 0x5aa4cf:c.instructions+=3;goto B5aa4cf;
case 0x5aa4d1:c.instructions+=2;goto B5aa4d1;
case 0x5aa4d3:c.instructions+=1;goto B5aa4d3;
case 0x5aa4d6:goto L5aa4d6;
case 0x5aa4da:c.instructions+=5;goto B5aa4da;
case 0x5aa4dc:c.instructions+=4;goto B5aa4dc;
case 0x5aa4de:c.instructions+=3;goto B5aa4de;
case 0x5aa4e0:c.instructions+=2;goto B5aa4e0;
case 0x5aa4e4:c.instructions+=1;goto B5aa4e4;
case 0x5aa4e7:goto L5aa4e7;
case 0x5aa4e9:c.instructions+=2;goto B5aa4e9;
case 0x5aa4ec:c.instructions+=1;goto B5aa4ec;
case 0x5aa4ee:goto L5aa4ee;
case 0x5aa4f3:goto L5aa4f3;
case 0x5aa4fa:c.instructions+=21;goto B5aa4fa;
case 0x5aa4fd:c.instructions+=20;goto B5aa4fd;
case 0x5aa4ff:c.instructions+=19;goto B5aa4ff;
case 0x5aa502:c.instructions+=18;goto B5aa502;
case 0x5aa505:c.instructions+=17;goto B5aa505;
case 0x5aa508:c.instructions+=16;goto B5aa508;
case 0x5aa50a:c.instructions+=15;goto B5aa50a;
case 0x5aa50d:c.instructions+=14;goto B5aa50d;
case 0x5aa510:c.instructions+=13;goto B5aa510;
case 0x5aa517:c.instructions+=12;goto B5aa517;
case 0x5aa51a:c.instructions+=11;goto B5aa51a;
case 0x5aa51d:c.instructions+=10;goto B5aa51d;
case 0x5aa520:c.instructions+=9;goto B5aa520;
case 0x5aa527:c.instructions+=8;goto B5aa527;
case 0x5aa52a:c.instructions+=7;goto B5aa52a;
case 0x5aa52d:c.instructions+=6;goto B5aa52d;
case 0x5aa530:c.instructions+=5;goto B5aa530;
case 0x5aa537:c.instructions+=4;goto B5aa537;
case 0x5aa53a:c.instructions+=3;goto B5aa53a;
case 0x5aa53d:c.instructions+=2;goto B5aa53d;
case 0x5aa540:c.instructions+=1;goto B5aa540;
case 0x5aa542:goto L5aa542;
case 0x5aa544:c.instructions+=1;goto B5aa544;
case 0x5aa546:goto L5aa546;
case 0x5aa548:c.instructions+=2;goto B5aa548;
case 0x5aa54a:c.instructions+=1;goto B5aa54a;
case 0x5aa550:goto L5aa550;
case 0x5aa557:c.instructions+=7;goto B5aa557;
case 0x5aa55a:c.instructions+=6;goto B5aa55a;
case 0x5aa55d:c.instructions+=5;goto B5aa55d;
case 0x5aa560:c.instructions+=4;goto B5aa560;
case 0x5aa561:c.instructions+=3;goto B5aa561;
case 0x5aa564:c.instructions+=2;goto B5aa564;
case 0x5aa567:c.instructions+=1;goto B5aa567;
case 0x5aa569:goto L5aa569;
case 0x5aa56d:c.instructions+=5;goto B5aa56d;
case 0x5aa570:c.instructions+=4;goto B5aa570;
case 0x5aa574:c.instructions+=3;goto B5aa574;
case 0x5aa576:c.instructions+=2;goto B5aa576;
case 0x5aa57a:c.instructions+=1;goto B5aa57a;
case 0x5aa57f:goto L5aa57f;
case 0x5aa581:c.instructions+=2;goto B5aa581;
case 0x5aa583:c.instructions+=1;goto B5aa583;
case 0x5aa586:goto L5aa586;
case 0x5aa587:c.instructions+=5;goto B5aa587;
case 0x5aa588:c.instructions+=4;goto B5aa588;
case 0x5aa589:c.instructions+=3;goto B5aa589;
case 0x5aa58a:c.instructions+=2;goto B5aa58a;
case 0x5aa590:c.instructions+=1;goto B5aa590;
case 0x5aa5a0:goto L5aa5a0;
case 0x5aa5a2:c.instructions+=82;goto B5aa5a2;
case 0x5aa5a7:c.instructions+=81;goto B5aa5a7;
case 0x5aa5ad:c.instructions+=80;goto B5aa5ad;
case 0x5aa5ae:c.instructions+=79;goto B5aa5ae;
case 0x5aa5b5:c.instructions+=78;goto B5aa5b5;
case 0x5aa5b6:c.instructions+=77;goto B5aa5b6;
case 0x5aa5b7:c.instructions+=76;goto B5aa5b7;
case 0x5aa5b8:c.instructions+=75;goto B5aa5b8;
case 0x5aa5ba:c.instructions+=74;goto B5aa5ba;
case 0x5aa5be:c.instructions+=73;goto B5aa5be;
case 0x5aa5c2:c.instructions+=72;goto B5aa5c2;
case 0x5aa5c8:c.instructions+=71;goto B5aa5c8;
case 0x5aa5cb:c.instructions+=70;goto B5aa5cb;
case 0x5aa5cd:c.instructions+=69;goto B5aa5cd;
case 0x5aa5d2:c.instructions+=68;goto B5aa5d2;
case 0x5aa5d5:c.instructions+=67;goto B5aa5d5;
case 0x5aa5d8:c.instructions+=66;goto B5aa5d8;
case 0x5aa5da:c.instructions+=65;goto B5aa5da;
case 0x5aa5dd:c.instructions+=64;goto B5aa5dd;
case 0x5aa5e0:c.instructions+=63;goto B5aa5e0;
case 0x5aa5e3:c.instructions+=62;goto B5aa5e3;
case 0x5aa5e5:c.instructions+=61;goto B5aa5e5;
case 0x5aa5e8:c.instructions+=60;goto B5aa5e8;
case 0x5aa5ea:c.instructions+=59;goto B5aa5ea;
case 0x5aa5ec:c.instructions+=58;goto B5aa5ec;
case 0x5aa5f0:c.instructions+=57;goto B5aa5f0;
case 0x5aa5f6:c.instructions+=56;goto B5aa5f6;
case 0x5aa5f9:c.instructions+=55;goto B5aa5f9;
case 0x5aa5fb:c.instructions+=54;goto B5aa5fb;
case 0x5aa5fe:c.instructions+=53;goto B5aa5fe;
case 0x5aa600:c.instructions+=52;goto B5aa600;
case 0x5aa603:c.instructions+=51;goto B5aa603;
case 0x5aa606:c.instructions+=50;goto B5aa606;
case 0x5aa60d:c.instructions+=49;goto B5aa60d;
case 0x5aa60f:c.instructions+=48;goto B5aa60f;
case 0x5aa612:c.instructions+=47;goto B5aa612;
case 0x5aa615:c.instructions+=46;goto B5aa615;
case 0x5aa617:c.instructions+=45;goto B5aa617;
case 0x5aa619:c.instructions+=44;goto B5aa619;
case 0x5aa61f:c.instructions+=43;goto B5aa61f;
case 0x5aa622:c.instructions+=42;goto B5aa622;
case 0x5aa624:c.instructions+=41;goto B5aa624;
case 0x5aa627:c.instructions+=40;goto B5aa627;
case 0x5aa629:c.instructions+=39;goto B5aa629;
case 0x5aa62c:c.instructions+=38;goto B5aa62c;
case 0x5aa62f:c.instructions+=37;goto B5aa62f;
case 0x5aa632:c.instructions+=36;goto B5aa632;
case 0x5aa634:c.instructions+=35;goto B5aa634;
case 0x5aa637:c.instructions+=34;goto B5aa637;
case 0x5aa639:c.instructions+=33;goto B5aa639;
case 0x5aa63b:c.instructions+=32;goto B5aa63b;
case 0x5aa641:c.instructions+=31;goto B5aa641;
case 0x5aa644:c.instructions+=30;goto B5aa644;
case 0x5aa646:c.instructions+=29;goto B5aa646;
case 0x5aa649:c.instructions+=28;goto B5aa649;
case 0x5aa64b:c.instructions+=27;goto B5aa64b;
case 0x5aa64e:c.instructions+=26;goto B5aa64e;
case 0x5aa651:c.instructions+=25;goto B5aa651;
case 0x5aa655:c.instructions+=24;goto B5aa655;
case 0x5aa657:c.instructions+=23;goto B5aa657;
case 0x5aa65e:c.instructions+=22;goto B5aa65e;
case 0x5aa661:c.instructions+=21;goto B5aa661;
case 0x5aa663:c.instructions+=20;goto B5aa663;
case 0x5aa665:c.instructions+=19;goto B5aa665;
case 0x5aa66b:c.instructions+=18;goto B5aa66b;
case 0x5aa66e:c.instructions+=17;goto B5aa66e;
case 0x5aa671:c.instructions+=16;goto B5aa671;
case 0x5aa676:c.instructions+=15;goto B5aa676;
case 0x5aa678:c.instructions+=14;goto B5aa678;
case 0x5aa67b:c.instructions+=13;goto B5aa67b;
case 0x5aa67e:c.instructions+=12;goto B5aa67e;
case 0x5aa684:c.instructions+=11;goto B5aa684;
case 0x5aa68e:c.instructions+=10;goto B5aa68e;
case 0x5aa694:c.instructions+=9;goto B5aa694;
case 0x5aa69a:c.instructions+=8;goto B5aa69a;
case 0x5aa6a0:c.instructions+=7;goto B5aa6a0;
case 0x5aa6a6:c.instructions+=6;goto B5aa6a6;
case 0x5aa6ac:c.instructions+=5;goto B5aa6ac;
case 0x5aa6b2:c.instructions+=4;goto B5aa6b2;
case 0x5aa6b8:c.instructions+=3;goto B5aa6b8;
case 0x5aa6be:c.instructions+=2;goto B5aa6be;
case 0x5aa6c4:c.instructions+=1;goto B5aa6c4;
case 0x5aa6c9:goto L5aa6c9;
case 0x5aa6cf:c.instructions+=5;goto B5aa6cf;
case 0x5aa6d2:c.instructions+=4;goto B5aa6d2;
case 0x5aa6d7:c.instructions+=3;goto B5aa6d7;
case 0x5aa6d8:c.instructions+=2;goto B5aa6d8;
case 0x5aa6db:c.instructions+=1;goto B5aa6db;
case 0x5aa6e0:goto L5aa6e0;
case 0x5aa6e4:c.instructions+=7;goto B5aa6e4;
case 0x5aa6e7:c.instructions+=6;goto B5aa6e7;
case 0x5aa6e9:c.instructions+=5;goto B5aa6e9;
case 0x5aa6ea:c.instructions+=4;goto B5aa6ea;
case 0x5aa6eb:c.instructions+=3;goto B5aa6eb;
case 0x5aa6f2:c.instructions+=2;goto B5aa6f2;
case 0x5aa6f5:c.instructions+=1;goto B5aa6f5;
case 0x5aa700:goto L5aa700;
case 0x5aa703:c.instructions+=1;goto B5aa703;
case 0x5aa710:goto L5aa710;
case 0x5aa713:c.instructions+=3;goto B5aa713;
case 0x5aa717:c.instructions+=2;goto B5aa717;
case 0x5aa719:c.instructions+=1;goto B5aa719;
case 0x5aa720:goto L5aa720;
case 0x5aa724:c.instructions+=3;goto B5aa724;
case 0x5aa726:c.instructions+=2;goto B5aa726;
case 0x5aa729:c.instructions+=1;goto B5aa729;
case 0x5aa730:goto L5aa730;
case 0x5aa731:c.instructions+=2;goto B5aa731;
case 0x5aa733:c.instructions+=1;goto B5aa733;
case 0x5aa738:goto L5aa738;
case 0x5aa73d:c.instructions+=1;goto B5aa73d;
case 0x5aa73f:goto L5aa73f;
case 0x5aa744:c.instructions+=3;goto B5aa744;
case 0x5aa745:c.instructions+=2;goto B5aa745;
case 0x5aa746:c.instructions+=1;goto B5aa746;
case 0x5aa74b:goto L5aa74b;
case 0x5aa74e:goto L5aa74e;
case 0x5aa750:c.instructions+=2;goto B5aa750;
case 0x5aa751:c.instructions+=1;goto B5aa751;
case 0x5aa760:goto L5aa760;
case 0x5aa763:c.instructions+=15;goto B5aa763;
case 0x5aa764:c.instructions+=14;goto B5aa764;
case 0x5aa766:c.instructions+=13;goto B5aa766;
case 0x5aa769:c.instructions+=12;goto B5aa769;
case 0x5aa76c:c.instructions+=11;goto B5aa76c;
case 0x5aa76d:c.instructions+=10;goto B5aa76d;
case 0x5aa773:c.instructions+=9;goto B5aa773;
case 0x5aa777:c.instructions+=8;goto B5aa777;
case 0x5aa779:c.instructions+=7;goto B5aa779;
case 0x5aa77f:c.instructions+=6;goto B5aa77f;
case 0x5aa782:c.instructions+=5;goto B5aa782;
case 0x5aa786:c.instructions+=4;goto B5aa786;
case 0x5aa788:c.instructions+=3;goto B5aa788;
case 0x5aa78a:c.instructions+=2;goto B5aa78a;
case 0x5aa78d:c.instructions+=1;goto B5aa78d;
case 0x5aa78f:goto L5aa78f;
case 0x5aa791:c.instructions+=1;goto B5aa791;
case 0x5aa795:goto L5aa795;
case 0x5aa799:c.instructions+=4;goto B5aa799;
case 0x5aa79b:c.instructions+=3;goto B5aa79b;
case 0x5aa79d:c.instructions+=2;goto B5aa79d;
case 0x5aa7a0:c.instructions+=1;goto B5aa7a0;
case 0x5aa7a2:goto L5aa7a2;
case 0x5aa7a4:c.instructions+=1;goto B5aa7a4;
case 0x5aa7a8:goto L5aa7a8;
case 0x5aa7ae:c.instructions+=5;goto B5aa7ae;
case 0x5aa7b1:c.instructions+=4;goto B5aa7b1;
case 0x5aa7b3:c.instructions+=3;goto B5aa7b3;
case 0x5aa7b9:c.instructions+=2;goto B5aa7b9;
case 0x5aa7c0:c.instructions+=1;goto B5aa7c0;
case 0x5aa7c2:goto L5aa7c2;
case 0x5aa7c8:c.instructions+=7;goto B5aa7c8;
case 0x5aa7cb:c.instructions+=6;goto B5aa7cb;
case 0x5aa7ce:c.instructions+=5;goto B5aa7ce;
case 0x5aa7d0:c.instructions+=4;goto B5aa7d0;
case 0x5aa7d2:c.instructions+=3;goto B5aa7d2;
case 0x5aa7d4:c.instructions+=2;goto B5aa7d4;
case 0x5aa7d7:c.instructions+=1;goto B5aa7d7;
case 0x5aa7d9:goto L5aa7d9;
case 0x5aa7e0:goto L5aa7e0;
case 0x5aa7e2:goto L5aa7e2;
case 0x5aa7e7:c.instructions+=5;goto B5aa7e7;
case 0x5aa7e9:c.instructions+=4;goto B5aa7e9;
case 0x5aa7ea:c.instructions+=3;goto B5aa7ea;
case 0x5aa7ec:c.instructions+=2;goto B5aa7ec;
case 0x5aa7f0:c.instructions+=1;goto B5aa7f0;
case 0x5aa7f5:goto L5aa7f5;
case 0x5aa7f6:c.instructions+=2;goto B5aa7f6;
case 0x5aa7f8:c.instructions+=1;goto B5aa7f8;
case 0x5aa7fd:goto L5aa7fd;
case 0x5aa7fe:c.instructions+=3;goto B5aa7fe;
case 0x5aa7ff:c.instructions+=2;goto B5aa7ff;
case 0x5aa802:c.instructions+=1;goto B5aa802;
case 0x5aa803:goto L5aa803;
case 0x5aa805:c.instructions+=1;goto B5aa805;
case 0x5aa807:goto L5aa807;
case 0x5aa80d:c.instructions+=6;goto B5aa80d;
case 0x5aa810:c.instructions+=5;goto B5aa810;
case 0x5aa812:c.instructions+=4;goto B5aa812;
case 0x5aa814:c.instructions+=3;goto B5aa814;
case 0x5aa816:c.instructions+=2;goto B5aa816;
case 0x5aa819:c.instructions+=1;goto B5aa819;
case 0x5aa81b:goto L5aa81b;
case 0x5aa822:c.instructions+=1;goto B5aa822;
case 0x5aa830:goto L5aa830;
case 0x5aa833:c.instructions+=4;goto B5aa833;
case 0x5aa834:c.instructions+=3;goto B5aa834;
case 0x5aa836:c.instructions+=2;goto B5aa836;
case 0x5aa83a:c.instructions+=1;goto B5aa83a;
case 0x5aa840:goto L5aa840;
case 0x5aa844:c.instructions+=1;goto B5aa844;
case 0x5aa84a:goto L5aa84a;
case 0x5aa84d:c.instructions+=3;goto B5aa84d;
case 0x5aa853:c.instructions+=2;goto B5aa853;
case 0x5aa855:c.instructions+=1;goto B5aa855;
case 0x5aa85b:goto L5aa85b;
case 0x5aa85c:c.instructions+=3;goto B5aa85c;
case 0x5aa85f:c.instructions+=2;goto B5aa85f;
case 0x5aa861:c.instructions+=1;goto B5aa861;
case 0x5aa866:goto L5aa866;
case 0x5aa869:c.instructions+=6;goto B5aa869;
case 0x5aa86d:c.instructions+=5;goto B5aa86d;
case 0x5aa870:c.instructions+=4;goto B5aa870;
case 0x5aa876:c.instructions+=3;goto B5aa876;
case 0x5aa878:c.instructions+=2;goto B5aa878;
case 0x5aa87b:c.instructions+=1;goto B5aa87b;
case 0x5aa87d:goto L5aa87d;
case 0x5aa87f:c.instructions+=1;goto B5aa87f;
case 0x5aa884:goto L5aa884;
case 0x5aa88a:c.instructions+=3;goto B5aa88a;
case 0x5aa88c:c.instructions+=2;goto B5aa88c;
case 0x5aa88f:c.instructions+=1;goto B5aa88f;
case 0x5aa891:goto L5aa891;
case 0x5aa894:c.instructions+=6;goto B5aa894;
case 0x5aa898:c.instructions+=5;goto B5aa898;
case 0x5aa89c:c.instructions+=4;goto B5aa89c;
case 0x5aa89f:c.instructions+=3;goto B5aa89f;
case 0x5aa8a0:c.instructions+=2;goto B5aa8a0;
case 0x5aa8a2:c.instructions+=1;goto B5aa8a2;
case 0x5aa8a7:goto L5aa8a7;
case 0x5aa8a9:goto L5aa8a9;
case 0x5aa8ab:c.instructions+=1;goto B5aa8ab;
case 0x5aa8b0:goto L5aa8b0;
case 0x5aa8b3:c.instructions+=13;goto B5aa8b3;
case 0x5aa8b6:c.instructions+=12;goto B5aa8b6;
case 0x5aa8b8:c.instructions+=11;goto B5aa8b8;
case 0x5aa8bc:c.instructions+=10;goto B5aa8bc;
case 0x5aa8c0:c.instructions+=9;goto B5aa8c0;
case 0x5aa8c4:c.instructions+=8;goto B5aa8c4;
case 0x5aa8c6:c.instructions+=7;goto B5aa8c6;
case 0x5aa8c7:c.instructions+=6;goto B5aa8c7;
case 0x5aa8ca:c.instructions+=5;goto B5aa8ca;
case 0x5aa8ce:c.instructions+=4;goto B5aa8ce;
case 0x5aa8d2:c.instructions+=3;goto B5aa8d2;
case 0x5aa8d5:c.instructions+=2;goto B5aa8d5;
case 0x5aa8d8:c.instructions+=1;goto B5aa8d8;
case 0x5aa8dd:goto L5aa8dd;
case 0x5aa8e0:c.instructions+=2;goto B5aa8e0;
case 0x5aa8e3:c.instructions+=1;goto B5aa8e3;
case 0x5aa8e6:goto L5aa8e6;
case 0x5aa8e7:goto L5aa8e7;
case 0x5aa8eb:c.instructions+=1;goto B5aa8eb;
case 0x5aa8ed:goto L5aa8ed;
case 0x5aa8f0:c.instructions+=1;goto B5aa8f0;
case 0x5aa8f5:goto L5aa8f5;
case 0x5aa8f8:c.instructions+=9;goto B5aa8f8;
case 0x5aa8fb:c.instructions+=8;goto B5aa8fb;
case 0x5aa8fd:c.instructions+=7;goto B5aa8fd;
case 0x5aa8ff:c.instructions+=6;goto B5aa8ff;
case 0x5aa903:c.instructions+=5;goto B5aa903;
case 0x5aa905:c.instructions+=4;goto B5aa905;
case 0x5aa907:c.instructions+=3;goto B5aa907;
case 0x5aa909:c.instructions+=2;goto B5aa909;
case 0x5aa90c:c.instructions+=1;goto B5aa90c;
case 0x5aa90e:goto L5aa90e;
case 0x5aa912:c.instructions+=4;goto B5aa912;
case 0x5aa918:c.instructions+=3;goto B5aa918;
case 0x5aa91a:c.instructions+=2;goto B5aa91a;
case 0x5aa91d:c.instructions+=1;goto B5aa91d;
case 0x5aa91f:goto L5aa91f;
case 0x5aa923:c.instructions+=5;goto B5aa923;
case 0x5aa924:c.instructions+=4;goto B5aa924;
case 0x5aa928:c.instructions+=3;goto B5aa928;
case 0x5aa929:c.instructions+=2;goto B5aa929;
case 0x5aa92e:c.instructions+=1;goto B5aa92e;
case 0x5aa933:goto L5aa933;
case 0x5aa937:c.instructions+=6;goto B5aa937;
case 0x5aa93d:c.instructions+=5;goto B5aa93d;
case 0x5aa944:c.instructions+=4;goto B5aa944;
case 0x5aa947:c.instructions+=3;goto B5aa947;
case 0x5aa94b:c.instructions+=2;goto B5aa94b;
case 0x5aa94e:c.instructions+=1;goto B5aa94e;
case 0x5aa951:goto L5aa951;
case 0x5aa952:c.instructions+=2;goto B5aa952;
case 0x5aa955:c.instructions+=1;goto B5aa955;
case 0x5aa960:goto L5aa960;
case 0x5aa964:c.instructions+=9;goto B5aa964;
case 0x5aa967:c.instructions+=8;goto B5aa967;
case 0x5aa96d:c.instructions+=7;goto B5aa96d;
case 0x5aa96e:c.instructions+=6;goto B5aa96e;
case 0x5aa96f:c.instructions+=5;goto B5aa96f;
case 0x5aa970:c.instructions+=4;goto B5aa970;
case 0x5aa972:c.instructions+=3;goto B5aa972;
case 0x5aa974:c.instructions+=2;goto B5aa974;
case 0x5aa977:c.instructions+=1;goto B5aa977;
case 0x5aa979:goto L5aa979;
case 0x5aa97d:c.instructions+=2;goto B5aa97d;
case 0x5aa981:c.instructions+=1;goto B5aa981;
case 0x5aa983:goto L5aa983;
case 0x5aa986:c.instructions+=3;goto B5aa986;
case 0x5aa989:c.instructions+=2;goto B5aa989;
case 0x5aa98f:c.instructions+=1;goto B5aa98f;
case 0x5aa993:goto L5aa993;
case 0x5aa997:c.instructions+=2;goto B5aa997;
case 0x5aa99a:c.instructions+=1;goto B5aa99a;
case 0x5aa9a0:goto L5aa9a0;
case 0x5aa9a3:c.instructions+=3;goto B5aa9a3;
case 0x5aa9a6:c.instructions+=2;goto B5aa9a6;
case 0x5aa9ad:c.instructions+=1;goto B5aa9ad;
case 0x5aa9af:goto L5aa9af;
case 0x5aa9b6:c.instructions+=1;goto B5aa9b6;
case 0x5aa9bb:goto L5aa9bb;
case 0x5aa9bf:c.instructions+=1;goto B5aa9bf;
case 0x5aa9c5:goto L5aa9c5;
case 0x5aa9c6:c.instructions+=4;goto B5aa9c6;
case 0x5aa9c8:c.instructions+=3;goto B5aa9c8;
case 0x5aa9c9:c.instructions+=2;goto B5aa9c9;
case 0x5aa9cb:c.instructions+=1;goto B5aa9cb;
case 0x5aa9d0:goto L5aa9d0;
case 0x5aa9d4:c.instructions+=6;goto B5aa9d4;
case 0x5aa9d7:c.instructions+=5;goto B5aa9d7;
case 0x5aa9da:c.instructions+=4;goto B5aa9da;
case 0x5aa9e1:c.instructions+=3;goto B5aa9e1;
case 0x5aa9e5:c.instructions+=2;goto B5aa9e5;
case 0x5aa9eb:c.instructions+=1;goto B5aa9eb;
case 0x5aa9ed:goto L5aa9ed;
case 0x5aa9f0:c.instructions+=6;goto B5aa9f0;
case 0x5aa9f2:c.instructions+=5;goto B5aa9f2;
case 0x5aa9f4:c.instructions+=4;goto B5aa9f4;
case 0x5aa9f7:c.instructions+=3;goto B5aa9f7;
case 0x5aa9f8:c.instructions+=2;goto B5aa9f8;
case 0x5aa9fa:c.instructions+=1;goto B5aa9fa;
case 0x5aa9ff:goto L5aa9ff;
case 0x5aaa03:c.instructions+=5;goto B5aaa03;
case 0x5aaa06:c.instructions+=4;goto B5aaa06;
case 0x5aaa0a:c.instructions+=3;goto B5aaa0a;
case 0x5aaa0c:c.instructions+=2;goto B5aaa0c;
case 0x5aaa12:c.instructions+=1;goto B5aaa12;
case 0x5aaa14:goto L5aaa14;
case 0x5aaa17:c.instructions+=5;goto B5aaa17;
case 0x5aaa1a:c.instructions+=4;goto B5aaa1a;
case 0x5aaa20:c.instructions+=3;goto B5aaa20;
case 0x5aaa22:c.instructions+=2;goto B5aaa22;
case 0x5aaa25:c.instructions+=1;goto B5aaa25;
case 0x5aaa27:goto L5aaa27;
case 0x5aaa2a:c.instructions+=4;goto B5aaa2a;
case 0x5aaa2c:c.instructions+=3;goto B5aaa2c;
case 0x5aaa32:c.instructions+=2;goto B5aaa32;
case 0x5aaa36:c.instructions+=1;goto B5aaa36;
case 0x5aaa38:goto L5aaa38;
case 0x5aaa40:goto L5aaa40;
case 0x5aaa44:c.instructions+=4;goto B5aaa44;
case 0x5aaa48:c.instructions+=3;goto B5aaa48;
case 0x5aaa4a:c.instructions+=2;goto B5aaa4a;
case 0x5aaa4d:c.instructions+=1;goto B5aaa4d;
case 0x5aaa4f:goto L5aaa4f;
case 0x5aaa52:c.instructions+=4;goto B5aaa52;
case 0x5aaa55:c.instructions+=3;goto B5aaa55;
case 0x5aaa56:c.instructions+=2;goto B5aaa56;
case 0x5aaa58:c.instructions+=1;goto B5aaa58;
case 0x5aaa5a:goto L5aaa5a;
case 0x5aaa5c:c.instructions+=4;goto B5aaa5c;
case 0x5aaa61:c.instructions+=3;goto B5aaa61;
case 0x5aaa64:c.instructions+=2;goto B5aaa64;
case 0x5aaa69:c.instructions+=1;goto B5aaa69;
case 0x5aaa70:goto L5aaa70;
case 0x5aaa72:c.instructions+=2;goto B5aaa72;
case 0x5aaa79:c.instructions+=1;goto B5aaa79;
case 0x5aaa7b:goto L5aaa7b;
case 0x5aaa81:c.instructions+=4;goto B5aaa81;
case 0x5aaa87:c.instructions+=3;goto B5aaa87;
case 0x5aaa89:c.instructions+=2;goto B5aaa89;
case 0x5aaa8c:c.instructions+=1;goto B5aaa8c;
case 0x5aaa8e:goto L5aaa8e;
case 0x5aaa93:c.instructions+=1;goto B5aaa93;
case 0x5aaa95:goto L5aaa95;
case 0x5aaa97:goto L5aaa97;
case 0x5aaa99:c.instructions+=3;goto B5aaa99;
case 0x5aaa9c:c.instructions+=2;goto B5aaa9c;
case 0x5aaa9d:c.instructions+=1;goto B5aaa9d;
case 0x5aaa9f:goto L5aaa9f;
case 0x5aaaa1:c.instructions+=1;goto B5aaaa1;
case 0x5aaaa3:goto L5aaaa3;
case 0x5aaaa6:c.instructions+=2;goto B5aaaa6;
case 0x5aaaa9:c.instructions+=1;goto B5aaaa9;
case 0x5aaaab:goto L5aaaab;
case 0x5aaaaf:c.instructions+=4;goto B5aaaaf;
case 0x5aaab3:c.instructions+=3;goto B5aaab3;
case 0x5aaab5:c.instructions+=2;goto B5aaab5;
case 0x5aaab8:c.instructions+=1;goto B5aaab8;
case 0x5aaaba:goto L5aaaba;
case 0x5aaabe:c.instructions+=5;goto B5aaabe;
case 0x5aaac0:c.instructions+=4;goto B5aaac0;
case 0x5aaac2:c.instructions+=3;goto B5aaac2;
case 0x5aaac4:c.instructions+=2;goto B5aaac4;
case 0x5aaac7:c.instructions+=1;goto B5aaac7;
case 0x5aaac9:goto L5aaac9;
case 0x5aaacc:c.instructions+=2;goto B5aaacc;
case 0x5aaacf:c.instructions+=1;goto B5aaacf;
case 0x5aaad1:goto L5aaad1;
case 0x5aaad3:goto L5aaad3;
case 0x5aaad4:goto L5aaad4;
case 0x5aaad8:c.instructions+=1;goto B5aaad8;
case 0x5aaade:goto L5aaade;
case 0x5aaae1:c.instructions+=1;goto B5aaae1;
case 0x5aaae7:goto L5aaae7;
case 0x5aaaea:c.instructions+=1;goto B5aaaea;
case 0x5aaaef:goto L5aaaef;
case 0x5aaaf2:c.instructions+=1;goto B5aaaf2;
case 0x5aaaf8:goto L5aaaf8;
case 0x5aaafe:c.instructions+=6;goto B5aaafe;
case 0x5aab01:c.instructions+=5;goto B5aab01;
case 0x5aab04:c.instructions+=4;goto B5aab04;
case 0x5aab07:c.instructions+=3;goto B5aab07;
case 0x5aab0b:c.instructions+=2;goto B5aab0b;
case 0x5aab0e:c.instructions+=1;goto B5aab0e;
case 0x5aab14:goto L5aab14;
case 0x5aab17:c.instructions+=8;goto B5aab17;
case 0x5aab1a:c.instructions+=7;goto B5aab1a;
case 0x5aab1c:c.instructions+=6;goto B5aab1c;
case 0x5aab1f:c.instructions+=5;goto B5aab1f;
case 0x5aab23:c.instructions+=4;goto B5aab23;
case 0x5aab26:c.instructions+=3;goto B5aab26;
case 0x5aab29:c.instructions+=2;goto B5aab29;
case 0x5aab2d:c.instructions+=1;goto B5aab2d;
case 0x5aab2f:goto L5aab2f;
case 0x5aab32:c.instructions+=5;goto B5aab32;
case 0x5aab36:c.instructions+=4;goto B5aab36;
case 0x5aab3a:c.instructions+=3;goto B5aab3a;
case 0x5aab40:c.instructions+=2;goto B5aab40;
case 0x5aab44:c.instructions+=1;goto B5aab44;
case 0x5aab46:goto L5aab46;
case 0x5aab49:c.instructions+=4;goto B5aab49;
case 0x5aab4f:c.instructions+=3;goto B5aab4f;
case 0x5aab51:c.instructions+=2;goto B5aab51;
case 0x5aab54:c.instructions+=1;goto B5aab54;
case 0x5aab56:goto L5aab56;
case 0x5aab5a:c.instructions+=2;goto B5aab5a;
case 0x5aab60:c.instructions+=1;goto B5aab60;
case 0x5aab62:goto L5aab62;
case 0x5aab68:goto L5aab68;
case 0x5aab6b:c.instructions+=3;goto B5aab6b;
case 0x5aab6e:c.instructions+=2;goto B5aab6e;
case 0x5aab70:c.instructions+=1;goto B5aab70;
case 0x5aab76:goto L5aab76;
case 0x5aab79:c.instructions+=1;goto B5aab79;
case 0x5aab7b:goto L5aab7b;
case 0x5aab7f:c.instructions+=6;goto B5aab7f;
case 0x5aab86:c.instructions+=5;goto B5aab86;
case 0x5aab88:c.instructions+=4;goto B5aab88;
case 0x5aab8a:c.instructions+=3;goto B5aab8a;
case 0x5aab8c:c.instructions+=2;goto B5aab8c;
case 0x5aab8f:c.instructions+=1;goto B5aab8f;
case 0x5aab91:goto L5aab91;
case 0x5aab92:c.instructions+=7;goto B5aab92;
case 0x5aab95:c.instructions+=6;goto B5aab95;
case 0x5aab98:c.instructions+=5;goto B5aab98;
case 0x5aab99:c.instructions+=4;goto B5aab99;
case 0x5aab9b:c.instructions+=3;goto B5aab9b;
case 0x5aab9c:c.instructions+=2;goto B5aab9c;
case 0x5aab9f:c.instructions+=1;goto B5aab9f;
case 0x5aaba2:goto L5aaba2;
case 0x5aaba3:c.instructions+=7;goto B5aaba3;
case 0x5aaba4:c.instructions+=6;goto B5aaba4;
case 0x5aaba7:c.instructions+=5;goto B5aaba7;
case 0x5aaba8:c.instructions+=4;goto B5aaba8;
case 0x5aabaa:c.instructions+=3;goto B5aabaa;
case 0x5aabab:c.instructions+=2;goto B5aabab;
case 0x5aabae:c.instructions+=1;goto B5aabae;
case 0x5aabb1:goto L5aabb1;
case 0x5aabb3:c.instructions+=2;goto B5aabb3;
case 0x5aabb5:c.instructions+=1;goto B5aabb5;
case 0x5aabb7:goto L5aabb7;
case 0x5aabb8:c.instructions+=8;goto B5aabb8;
case 0x5aabb9:c.instructions+=7;goto B5aabb9;
case 0x5aabbc:c.instructions+=6;goto B5aabbc;
case 0x5aabc3:c.instructions+=5;goto B5aabc3;
case 0x5aabc4:c.instructions+=4;goto B5aabc4;
case 0x5aabc6:c.instructions+=3;goto B5aabc6;
case 0x5aabc7:c.instructions+=2;goto B5aabc7;
case 0x5aabca:c.instructions+=1;goto B5aabca;
case 0x5aabcd:goto L5aabcd;
case 0x5aabd1:c.instructions+=5;goto B5aabd1;
case 0x5aabd7:c.instructions+=4;goto B5aabd7;
case 0x5aabdb:c.instructions+=3;goto B5aabdb;
case 0x5aabdd:c.instructions+=2;goto B5aabdd;
case 0x5aabe0:c.instructions+=1;goto B5aabe0;
case 0x5aabe6:goto L5aabe6;
case 0x5aabe9:c.instructions+=1;goto B5aabe9;
case 0x5aabef:goto L5aabef;
case 0x5aabf0:c.instructions+=1;goto B5aabf0;
case 0x5aabf3:goto L5aabf3;
case 0x5aabf4:c.instructions+=6;goto B5aabf4;
case 0x5aabf7:c.instructions+=5;goto B5aabf7;
case 0x5aabf8:c.instructions+=4;goto B5aabf8;
case 0x5aabfa:c.instructions+=3;goto B5aabfa;
case 0x5aabfb:c.instructions+=2;goto B5aabfb;
case 0x5aabfe:c.instructions+=1;goto B5aabfe;
case 0x5aac01:goto L5aac01;
case 0x5aac03:c.instructions+=5;goto B5aac03;
case 0x5aac07:c.instructions+=4;goto B5aac07;
case 0x5aac0d:c.instructions+=3;goto B5aac0d;
case 0x5aac0f:c.instructions+=2;goto B5aac0f;
case 0x5aac12:c.instructions+=1;goto B5aac12;
case 0x5aac14:goto L5aac14;
case 0x5aac17:c.instructions+=1;goto B5aac17;
case 0x5aac19:goto L5aac19;
case 0x5aac1d:c.instructions+=5;goto B5aac1d;
case 0x5aac23:c.instructions+=4;goto B5aac23;
case 0x5aac27:c.instructions+=3;goto B5aac27;
case 0x5aac29:c.instructions+=2;goto B5aac29;
case 0x5aac2c:c.instructions+=1;goto B5aac2c;
case 0x5aac2e:goto L5aac2e;
case 0x5aac2f:c.instructions+=6;goto B5aac2f;
case 0x5aac32:c.instructions+=5;goto B5aac32;
case 0x5aac33:c.instructions+=4;goto B5aac33;
case 0x5aac35:c.instructions+=3;goto B5aac35;
case 0x5aac36:c.instructions+=2;goto B5aac36;
case 0x5aac39:c.instructions+=1;goto B5aac39;
case 0x5aac3c:goto L5aac3c;
case 0x5aac40:c.instructions+=1;goto B5aac40;
case 0x5aac42:goto L5aac42;
case 0x5aac45:c.instructions+=2;goto B5aac45;
case 0x5aac47:c.instructions+=1;goto B5aac47;
case 0x5aac49:goto L5aac49;
case 0x5aac4c:c.instructions+=3;goto B5aac4c;
case 0x5aac51:c.instructions+=2;goto B5aac51;
case 0x5aac53:c.instructions+=1;goto B5aac53;
case 0x5aac55:goto L5aac55;
case 0x5aac5c:c.instructions+=9;goto B5aac5c;
case 0x5aac62:c.instructions+=8;goto B5aac62;
case 0x5aac63:c.instructions+=7;goto B5aac63;
case 0x5aac65:c.instructions+=6;goto B5aac65;
case 0x5aac6b:c.instructions+=5;goto B5aac6b;
case 0x5aac6e:c.instructions+=4;goto B5aac6e;
case 0x5aac6f:c.instructions+=3;goto B5aac6f;
case 0x5aac70:c.instructions+=2;goto B5aac70;
case 0x5aac73:c.instructions+=1;goto B5aac73;
case 0x5aac76:goto L5aac76;
case 0x5aac79:c.instructions+=2;goto B5aac79;
case 0x5aac7b:c.instructions+=1;goto B5aac7b;
case 0x5aac7d:goto L5aac7d;
case 0x5aac7f:c.instructions+=3;goto B5aac7f;
case 0x5aac82:c.instructions+=2;goto B5aac82;
case 0x5aac85:c.instructions+=1;goto B5aac85;
case 0x5aac87:goto L5aac87;
case 0x5aac89:c.instructions+=1;goto B5aac89;
case 0x5aac8b:goto L5aac8b;
case 0x5aac8e:c.instructions+=3;goto B5aac8e;
case 0x5aac8f:c.instructions+=2;goto B5aac8f;
case 0x5aac91:c.instructions+=1;goto B5aac91;
case 0x5aac96:goto L5aac96;
case 0x5aac97:c.instructions+=5;goto B5aac97;
case 0x5aac98:c.instructions+=4;goto B5aac98;
case 0x5aac9a:c.instructions+=3;goto B5aac9a;
case 0x5aac9b:c.instructions+=2;goto B5aac9b;
case 0x5aac9e:c.instructions+=1;goto B5aac9e;
case 0x5aaca1:goto L5aaca1;
case 0x5aaca4:c.instructions+=2;goto B5aaca4;
case 0x5aaca6:c.instructions+=1;goto B5aaca6;
case 0x5aaca8:goto L5aaca8;
case 0x5aacab:c.instructions+=1;goto B5aacab;
case 0x5aacad:goto L5aacad;
case 0x5aacaf:c.instructions+=2;goto B5aacaf;
case 0x5aacb2:c.instructions+=1;goto B5aacb2;
case 0x5aacb4:goto L5aacb4;
case 0x5aacb7:goto L5aacb7;
case 0x5aacb9:goto L5aacb9;
case 0x5aacbd:c.instructions+=3;goto B5aacbd;
case 0x5aacbe:c.instructions+=2;goto B5aacbe;
case 0x5aacc0:c.instructions+=1;goto B5aacc0;
case 0x5aacc5:goto L5aacc5;
case 0x5aacc6:c.instructions+=5;goto B5aacc6;
case 0x5aacc7:c.instructions+=4;goto B5aacc7;
case 0x5aacc9:c.instructions+=3;goto B5aacc9;
case 0x5aacca:c.instructions+=2;goto B5aacca;
case 0x5aaccd:c.instructions+=1;goto B5aaccd;
case 0x5aacd0:goto L5aacd0;
case 0x5aacd3:c.instructions+=2;goto B5aacd3;
case 0x5aacd4:c.instructions+=1;goto B5aacd4;
case 0x5aacd6:goto L5aacd6;
case 0x5aacd9:c.instructions+=1;goto B5aacd9;
case 0x5aacdb:goto L5aacdb;
case 0x5aacdc:c.instructions+=1;goto B5aacdc;
case 0x5aacde:goto L5aacde;
case 0x5aace1:c.instructions+=15;goto B5aace1;
case 0x5aace4:c.instructions+=14;goto B5aace4;
case 0x5aace7:c.instructions+=13;goto B5aace7;
case 0x5aaceb:c.instructions+=12;goto B5aaceb;
case 0x5aaced:c.instructions+=11;goto B5aaced;
case 0x5aacef:c.instructions+=10;goto B5aacef;
case 0x5aacf2:c.instructions+=9;goto B5aacf2;
case 0x5aacf5:c.instructions+=8;goto B5aacf5;
case 0x5aacf9:c.instructions+=7;goto B5aacf9;
case 0x5aacfc:c.instructions+=6;goto B5aacfc;
case 0x5aacff:c.instructions+=5;goto B5aacff;
case 0x5aad02:c.instructions+=4;goto B5aad02;
case 0x5aad04:c.instructions+=3;goto B5aad04;
case 0x5aad06:c.instructions+=2;goto B5aad06;
case 0x5aad09:c.instructions+=1;goto B5aad09;
case 0x5aad0c:goto L5aad0c;
case 0x5aad0f:goto L5aad0f;
case 0x5aad14:goto L5aad14;
case 0x5aad20:goto L5aad20;
case 0x5aad23:c.instructions+=3;goto B5aad23;
case 0x5aad24:c.instructions+=2;goto B5aad24;
case 0x5aad27:c.instructions+=1;goto B5aad27;
case 0x5aad29:goto L5aad29;
case 0x5aad30:goto L5aad30;
case 0x5aad35:goto L5aad35;
case 0x5aad38:c.instructions+=11;goto B5aad38;
case 0x5aad3c:c.instructions+=10;goto B5aad3c;
case 0x5aad3f:c.instructions+=9;goto B5aad3f;
case 0x5aad42:c.instructions+=8;goto B5aad42;
case 0x5aad44:c.instructions+=7;goto B5aad44;
case 0x5aad47:c.instructions+=6;goto B5aad47;
case 0x5aad4a:c.instructions+=5;goto B5aad4a;
case 0x5aad51:c.instructions+=4;goto B5aad51;
case 0x5aad54:c.instructions+=3;goto B5aad54;
case 0x5aad58:c.instructions+=2;goto B5aad58;
case 0x5aad5c:c.instructions+=1;goto B5aad5c;
case 0x5aad5f:goto L5aad5f;
case 0x5aad64:goto L5aad64;
case 0x5aad69:goto L5aad69;
case 0x5aad6e:goto L5aad6e;
case 0x5aad72:c.instructions+=1;goto B5aad72;
case 0x5aad90:goto L5aad90;
case 0x5aad91:c.instructions+=4;goto B5aad91;
case 0x5aad92:c.instructions+=3;goto B5aad92;
case 0x5aad93:c.instructions+=2;goto B5aad93;
case 0x5aad95:c.instructions+=1;goto B5aad95;
case 0x5aad9a:goto L5aad9a;
case 0x5aada0:c.instructions+=6;goto B5aada0;
case 0x5aada3:c.instructions+=5;goto B5aada3;
case 0x5aada9:c.instructions+=4;goto B5aada9;
case 0x5aadab:c.instructions+=3;goto B5aadab;
case 0x5aadad:c.instructions+=2;goto B5aadad;
case 0x5aadb1:c.instructions+=1;goto B5aadb1;
case 0x5aadb7:goto L5aadb7;
case 0x5aadbd:c.instructions+=3;goto B5aadbd;
case 0x5aadbf:c.instructions+=2;goto B5aadbf;
case 0x5aadc1:c.instructions+=1;goto B5aadc1;
case 0x5aadc3:goto L5aadc3;
case 0x5aadc9:c.instructions+=3;goto B5aadc9;
case 0x5aadcf:c.instructions+=2;goto B5aadcf;
case 0x5aadd5:c.instructions+=1;goto B5aadd5;
case 0x5aadd7:goto L5aadd7;
case 0x5aaddd:goto L5aaddd;
case 0x5aade3:c.instructions+=1;goto B5aade3;
case 0x5aade5:goto L5aade5;
case 0x5aadeb:c.instructions+=3;goto B5aadeb;
case 0x5aadf1:c.instructions+=2;goto B5aadf1;
case 0x5aadf7:c.instructions+=1;goto B5aadf7;
case 0x5aadf9:goto L5aadf9;
case 0x5aadff:goto L5aadff;
case 0x5aae05:c.instructions+=3;goto B5aae05;
case 0x5aae07:c.instructions+=2;goto B5aae07;
case 0x5aae09:c.instructions+=1;goto B5aae09;
case 0x5aae0b:goto L5aae0b;
case 0x5aae11:c.instructions+=3;goto B5aae11;
case 0x5aae17:c.instructions+=2;goto B5aae17;
case 0x5aae1d:c.instructions+=1;goto B5aae1d;
case 0x5aae1f:goto L5aae1f;
case 0x5aae25:goto L5aae25;
case 0x5aae2b:c.instructions+=3;goto B5aae2b;
case 0x5aae2d:c.instructions+=2;goto B5aae2d;
case 0x5aae2f:c.instructions+=1;goto B5aae2f;
case 0x5aae31:goto L5aae31;
case 0x5aae37:c.instructions+=3;goto B5aae37;
case 0x5aae3d:c.instructions+=2;goto B5aae3d;
case 0x5aae43:c.instructions+=1;goto B5aae43;
case 0x5aae45:goto L5aae45;
case 0x5aae4b:goto L5aae4b;
case 0x5aae4d:c.instructions+=1;goto B5aae4d;
case 0x5aae51:goto L5aae51;
case 0x5aae54:c.instructions+=4;goto B5aae54;
case 0x5aae5a:c.instructions+=3;goto B5aae5a;
case 0x5aae5c:c.instructions+=2;goto B5aae5c;
case 0x5aae5e:c.instructions+=1;goto B5aae5e;
case 0x5aae60:goto L5aae60;
case 0x5aae63:c.instructions+=9;goto B5aae63;
case 0x5aae65:c.instructions+=8;goto B5aae65;
case 0x5aae6b:c.instructions+=7;goto B5aae6b;
case 0x5aae6e:c.instructions+=6;goto B5aae6e;
case 0x5aae74:c.instructions+=5;goto B5aae74;
case 0x5aae77:c.instructions+=4;goto B5aae77;
case 0x5aae81:c.instructions+=3;goto B5aae81;
case 0x5aae84:c.instructions+=2;goto B5aae84;
case 0x5aae87:c.instructions+=1;goto B5aae87;
case 0x5aae8c:goto L5aae8c;
case 0x5aae8f:c.instructions+=3;goto B5aae8f;
case 0x5aae92:c.instructions+=2;goto B5aae92;
case 0x5aae94:c.instructions+=1;goto B5aae94;
case 0x5aae96:goto L5aae96;
case 0x5aae97:c.instructions+=1;goto B5aae97;
case 0x5aae99:goto L5aae99;
case 0x5aae9a:c.instructions+=1;goto B5aae9a;
case 0x5aae9c:goto L5aae9c;
case 0x5aae9e:c.instructions+=1;goto B5aae9e;
case 0x5aaea0:goto L5aaea0;
case 0x5aaea3:c.instructions+=16;goto B5aaea3;
case 0x5aaea5:c.instructions+=15;goto B5aaea5;
case 0x5aaeab:c.instructions+=14;goto B5aaeab;
case 0x5aaeae:c.instructions+=13;goto B5aaeae;
case 0x5aaeb4:c.instructions+=12;goto B5aaeb4;
case 0x5aaeb7:c.instructions+=11;goto B5aaeb7;
case 0x5aaebd:c.instructions+=10;goto B5aaebd;
case 0x5aaec3:c.instructions+=9;goto B5aaec3;
case 0x5aaec6:c.instructions+=8;goto B5aaec6;
case 0x5aaecc:c.instructions+=7;goto B5aaecc;
case 0x5aaecf:c.instructions+=6;goto B5aaecf;
case 0x5aaed1:c.instructions+=5;goto B5aaed1;
case 0x5aaed7:c.instructions+=4;goto B5aaed7;
case 0x5aaeda:c.instructions+=3;goto B5aaeda;
case 0x5aaedd:c.instructions+=2;goto B5aaedd;
case 0x5aaee4:c.instructions+=1;goto B5aaee4;
case 0x5aaee6:goto L5aaee6;
case 0x5aaee9:c.instructions+=10;goto B5aaee9;
case 0x5aaeee:c.instructions+=9;goto B5aaeee;
case 0x5aaef4:c.instructions+=8;goto B5aaef4;
case 0x5aaef7:c.instructions+=7;goto B5aaef7;
case 0x5aaefd:c.instructions+=6;goto B5aaefd;
case 0x5aaf00:c.instructions+=5;goto B5aaf00;
case 0x5aaf0a:c.instructions+=4;goto B5aaf0a;
case 0x5aaf0d:c.instructions+=3;goto B5aaf0d;
case 0x5aaf14:c.instructions+=2;goto B5aaf14;
case 0x5aaf17:c.instructions+=1;goto B5aaf17;
case 0x5aaf1a:goto L5aaf1a;
case 0x5aaf1d:c.instructions+=2;goto B5aaf1d;
case 0x5aaf23:c.instructions+=1;goto B5aaf23;
case 0x5aaf25:goto L5aaf25;
case 0x5aaf27:goto L5aaf27;
case 0x5aaf2a:c.instructions+=2;goto B5aaf2a;
case 0x5aaf30:c.instructions+=1;goto B5aaf30;
case 0x5aaf32:goto L5aaf32;
case 0x5aaf34:c.instructions+=1;goto B5aaf34;
case 0x5aaf36:goto L5aaf36;
case 0x5aaf3c:c.instructions+=3;goto B5aaf3c;
case 0x5aaf3f:c.instructions+=2;goto B5aaf3f;
case 0x5aaf42:c.instructions+=1;goto B5aaf42;
case 0x5aaf48:goto L5aaf48;
case 0x5aaf4e:goto L5aaf4e;
case 0x5aaf50:c.instructions+=1;goto B5aaf50;
case 0x5aaf55:goto L5aaf55;
case 0x5aaf58:c.instructions+=10;goto B5aaf58;
case 0x5aaf5f:c.instructions+=9;goto B5aaf5f;
case 0x5aaf62:c.instructions+=8;goto B5aaf62;
case 0x5aaf69:c.instructions+=7;goto B5aaf69;
case 0x5aaf6c:c.instructions+=6;goto B5aaf6c;
case 0x5aaf72:c.instructions+=5;goto B5aaf72;
case 0x5aaf75:c.instructions+=4;goto B5aaf75;
case 0x5aaf7b:c.instructions+=3;goto B5aaf7b;
case 0x5aaf7e:c.instructions+=2;goto B5aaf7e;
case 0x5aaf80:c.instructions+=1;goto B5aaf80;
case 0x5aaf83:goto L5aaf83;
case 0x5aaf86:c.instructions+=10;goto B5aaf86;
case 0x5aaf8c:c.instructions+=9;goto B5aaf8c;
case 0x5aaf8f:c.instructions+=8;goto B5aaf8f;
case 0x5aaf95:c.instructions+=7;goto B5aaf95;
case 0x5aaf9b:c.instructions+=6;goto B5aaf9b;
case 0x5aafa1:c.instructions+=5;goto B5aafa1;
case 0x5aafa5:c.instructions+=4;goto B5aafa5;
case 0x5aafa9:c.instructions+=3;goto B5aafa9;
case 0x5aafab:c.instructions+=2;goto B5aafab;
case 0x5aafae:c.instructions+=1;goto B5aafae;
case 0x5aafb0:goto L5aafb0;
case 0x5aafb2:c.instructions+=1;goto B5aafb2;
case 0x5aafb6:goto L5aafb6;
case 0x5aafb9:c.instructions+=19;goto B5aafb9;
case 0x5aafbf:c.instructions+=18;goto B5aafbf;
case 0x5aafc2:c.instructions+=17;goto B5aafc2;
case 0x5aafc8:c.instructions+=16;goto B5aafc8;
case 0x5aafcb:c.instructions+=15;goto B5aafcb;
case 0x5aafce:c.instructions+=14;goto B5aafce;
case 0x5aafd1:c.instructions+=13;goto B5aafd1;
case 0x5aafd7:c.instructions+=12;goto B5aafd7;
case 0x5aafda:c.instructions+=11;goto B5aafda;
case 0x5aafdc:c.instructions+=10;goto B5aafdc;
case 0x5aafe2:c.instructions+=9;goto B5aafe2;
case 0x5aafe5:c.instructions+=8;goto B5aafe5;
case 0x5aafe8:c.instructions+=7;goto B5aafe8;
case 0x5aafed:c.instructions+=6;goto B5aafed;
case 0x5aafef:c.instructions+=5;goto B5aafef;
case 0x5aaff2:c.instructions+=4;goto B5aaff2;
case 0x5aaff5:c.instructions+=3;goto B5aaff5;
case 0x5aaff8:c.instructions+=2;goto B5aaff8;
case 0x5aaffb:c.instructions+=1;goto B5aaffb;
default:missing_instruction(c.pc);}
B5aa002:L5aa002:{c.instructions+=15;NFSU2_TR(0x5aa002);
{u32 ea_=u32(u32(8827792u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa008:{NFSU2_TR(0x5aa008);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aa00a:{NFSU2_TR(0x5aa00a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5aa00c:{NFSU2_TR(0x5aa00c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aa00f:{NFSU2_TR(0x5aa00f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aa012:{NFSU2_TR(0x5aa012);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aa015:{NFSU2_TR(0x5aa015);
{u32 ea_=u32(u32(8827796u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa01b:{NFSU2_TR(0x5aa01b);
{u32 ea_=u32(u32(8827800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa021:{NFSU2_TR(0x5aa021);
{u32 ea_=u32(u32(8827792u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa027:{NFSU2_TR(0x5aa027);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aa029:{NFSU2_TR(0x5aa029);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5aa02b:{NFSU2_TR(0x5aa02b);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aa02e:{NFSU2_TR(0x5aa02e);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aa031:{NFSU2_TR(0x5aa031);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5aa032:{NFSU2_TR(0x5aa032);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5aa040:L5aa040:{c.instructions+=2;NFSU2_TR(0x5aa040);
w4(R+0,u32(0x86b450ull));
}
B5aa045:{NFSU2_TR(0x5aa045);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5aa050:L5aa050:{c.instructions+=2;NFSU2_TR(0x5aa050);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa056:{NFSU2_TR(0x5aa056);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5aa060:L5aa060:{c.instructions+=2;NFSU2_TR(0x5aa060);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa066:{NFSU2_TR(0x5aa066);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5aa070:L5aa070:{c.instructions+=5;NFSU2_TR(0x5aa070);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5aa073:{NFSU2_TR(0x5aa073);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5aa075:{NFSU2_TR(0x5aa075);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5aa077:{NFSU2_TR(0x5aa077);
__builtin_memmove((R+0),(R+518),1);
}
B5aa07a:{NFSU2_TR(0x5aa07a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5aa080:L5aa080:{c.instructions+=2;NFSU2_TR(0x5aa080);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa086:{NFSU2_TR(0x5aa086);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5aa090:L5aa090:{c.instructions+=3;NFSU2_TR(0x5aa090);
u8 U[4];
w4(U+0,u32(0x7a2208ull));
s4(u32(r4(R+4)),r4(U+0));
}
B5aa096:{NFSU2_TR(0x5aa096);
s4(0x86b254,u32(u32(m4(0x86b254))-u32(u32(0x1ull))));
}
B5aa09c:{NFSU2_TR(0x5aa09c);
TAIL_STATIC(0x5a9c00u,5a9);
}
B5aa0b0:L5aa0b0:{c.instructions+=18;NFSU2_TR(0x5aa0b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa0b1:{NFSU2_TR(0x5aa0b1);
__builtin_memmove((R+20),(R+16),4);
}
B5aa0b3:{NFSU2_TR(0x5aa0b3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5aa0b6:{NFSU2_TR(0x5aa0b6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa0b8:{NFSU2_TR(0x5aa0b8);
u8 U[4];
w4(U+0,u32(0x778c49ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa0bd:{NFSU2_TR(0x5aa0bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aa0c3:{NFSU2_TR(0x5aa0c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa0c4:{NFSU2_TR(0x5aa0c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa0cb:{NFSU2_TR(0x5aa0cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x78ull))));
}
B5aa0ce:{NFSU2_TR(0x5aa0ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aa0d1:{NFSU2_TR(0x5aa0d1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa0d2:{NFSU2_TR(0x5aa0d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa0d3:{NFSU2_TR(0x5aa0d3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa0d4:{NFSU2_TR(0x5aa0d4);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa0d6:{NFSU2_TR(0x5aa0d6);
__builtin_memmove((R+24),(R+4),4);
}
B5aa0d8:{NFSU2_TR(0x5aa0d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa0d9:{NFSU2_TR(0x5aa0d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa0dd:{NFSU2_TR(0x5aa0dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa0e2ull));
TAIL_STATIC(0x5a04f0u,5a0);
}
B5aa0e2:L5aa0e2:{c.instructions+=7;NFSU2_TR(0x5aa0e2);
u8 U[4];
w4(U+0,u32(0x7a2208ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5aa0e8:{NFSU2_TR(0x5aa0e8);
__builtin_memmove((R+0),gp(0x86b254),4);
}
B5aa0ed:{NFSU2_TR(0x5aa0ed);
__builtin_memmove((R+4),gp(0x86b27c),4);
}
B5aa0f3:{NFSU2_TR(0x5aa0f3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5aa0f4:{NFSU2_TR(0x5aa0f4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5aa0f6:{NFSU2_TR(0x5aa0f6);
__builtin_memmove(gp(0x86b254),(R+0),4);
}
B5aa0fb:{NFSU2_TR(0x5aa0fb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5aa102;}}
}
B5aa0fd:L5aa0fd:{c.instructions+=1;NFSU2_TR(0x5aa0fd);
__builtin_memmove(gp(0x86b27c),(R+0),4);
}
B5aa102:L5aa102:{c.instructions+=14;NFSU2_TR(0x5aa102);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5aa106:{NFSU2_TR(0x5aa106);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa10b:{NFSU2_TR(0x5aa10b);
u8 U[4];
w4(U+0,u32(0x59fb50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa110:{NFSU2_TR(0x5aa110);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5aa113:{NFSU2_TR(0x5aa113);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa115:{NFSU2_TR(0x5aa115);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5aa117:{NFSU2_TR(0x5aa117);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa119:{NFSU2_TR(0x5aa119);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5aa11c:{NFSU2_TR(0x5aa11c);
u8 U[4];
w4(U+0,u32(0x7a22a8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5aa122:{NFSU2_TR(0x5aa122);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa123:{NFSU2_TR(0x5aa123);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa12a:{NFSU2_TR(0x5aa12a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa12d:{NFSU2_TR(0x5aa12d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa130:{NFSU2_TR(0x5aa130);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa135ull));
TAIL_STATIC(0x75c461u,75c);
}
B5aa135:L5aa135:{c.instructions+=11;NFSU2_TR(0x5aa135);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5aa13c:{NFSU2_TR(0x5aa13c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa13f:{NFSU2_TR(0x5aa13f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa145:{NFSU2_TR(0x5aa145);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1d0ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5aa14c:{NFSU2_TR(0x5aa14c);
__builtin_memmove((R+0),gp(0x86b25c),4);
}
B5aa151:{NFSU2_TR(0x5aa151);
__builtin_memmove((R+4),gp(0x86b284),4);
}
B5aa157:{NFSU2_TR(0x5aa157);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5aa158:{NFSU2_TR(0x5aa158);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5aa15a:{NFSU2_TR(0x5aa15a);
u8 U[5];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5aa162:{NFSU2_TR(0x5aa162);
__builtin_memmove(gp(0x86b25c),(R+0),4);
}
B5aa167:{NFSU2_TR(0x5aa167);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5aa16e;}}
}
B5aa169:L5aa169:{c.instructions+=1;NFSU2_TR(0x5aa169);
__builtin_memmove(gp(0x86b284),(R+0),4);
}
B5aa16e:L5aa16e:{c.instructions+=1;NFSU2_TR(0x5aa16e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa173ull));
TAIL_STATIC(0x440ec0u,440);
}
B5aa173:L5aa173:{c.instructions+=2;NFSU2_TR(0x5aa173);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5aa175:{NFSU2_TR(0x5aa175);
if(r1(R+518)){{goto L5aa17c;}}
}
B5aa177:L5aa177:{c.instructions+=2;NFSU2_TR(0x5aa177);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa17a:{NFSU2_TR(0x5aa17a);
{goto L5aa17e;}
}
B5aa17c:L5aa17c:{c.instructions+=1;NFSU2_TR(0x5aa17c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5aa17e:L5aa17e:{c.instructions+=15;NFSU2_TR(0x5aa17e);
__builtin_memmove((R+4),gp(0x86b5a4),4);
}
B5aa184:{NFSU2_TR(0x5aa184);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5aa187:{NFSU2_TR(0x5aa187);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5aa189:{NFSU2_TR(0x5aa189);
__builtin_memmove(gp(0x86b5a4),(R+0),4);
}
B5aa18e:{NFSU2_TR(0x5aa18e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa191:{NFSU2_TR(0x5aa191);
u8 U[4];
w4(U+0,u32(0x86b5a0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5aa197:{NFSU2_TR(0x5aa197);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa19a:{NFSU2_TR(0x5aa19a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aa19d:{NFSU2_TR(0x5aa19d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa1a0:{NFSU2_TR(0x5aa1a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa1a3:{NFSU2_TR(0x5aa1a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B5aa1a6:{NFSU2_TR(0x5aa1a6);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5aa1aa:{NFSU2_TR(0x5aa1aa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa1ab:{NFSU2_TR(0x5aa1ab);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B5aa1ae:{NFSU2_TR(0x5aa1ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa1b3ull));
TAIL_STATIC(0x5d6d70u,5d6);
}
B5aa1b3:L5aa1b3:{c.instructions+=6;NFSU2_TR(0x5aa1b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa1b4:{NFSU2_TR(0x5aa1b4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa1b5:{NFSU2_TR(0x5aa1b5);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5aa1b9:{NFSU2_TR(0x5aa1b9);
u8 U[4];
w4(U+0,u32(0x7a2290ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa1be:{NFSU2_TR(0x5aa1be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa1bf:{NFSU2_TR(0x5aa1bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa1c4ull));
TAIL_STATIC(0x4400d0u,440);
}
B5aa1c4:L5aa1c4:{c.instructions+=6;NFSU2_TR(0x5aa1c4);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa1c6:{NFSU2_TR(0x5aa1c6);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5aa1ca:{NFSU2_TR(0x5aa1ca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa1cb:{NFSU2_TR(0x5aa1cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5aa1ce:{NFSU2_TR(0x5aa1ce);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa1cf:{NFSU2_TR(0x5aa1cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa1d4ull));
TAIL_STATIC(0x43dc00u,43d);
}
B5aa1d4:L5aa1d4:{c.instructions+=6;NFSU2_TR(0x5aa1d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5aa1d7:{NFSU2_TR(0x5aa1d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aa1da:{NFSU2_TR(0x5aa1da);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B5aa1dd:{NFSU2_TR(0x5aa1dd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa1de:{NFSU2_TR(0x5aa1de);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x57ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5aa1e2:{NFSU2_TR(0x5aa1e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa1e7ull));
TAIL_STATIC(0x5e0c90u,5e0);
}
B5aa1e7:L5aa1e7:{c.instructions+=10;NFSU2_TR(0x5aa1e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa1ea:{NFSU2_TR(0x5aa1ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa1ed:{NFSU2_TR(0x5aa1ed);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B5aa1f0:{NFSU2_TR(0x5aa1f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B5aa1f3:{NFSU2_TR(0x5aa1f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5aa1f6:{NFSU2_TR(0x5aa1f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aa1f9:{NFSU2_TR(0x5aa1f9);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa1fc:{NFSU2_TR(0x5aa1fc);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5aa1ff:{NFSU2_TR(0x5aa1ff);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5aa205:{NFSU2_TR(0x5aa205);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa20aull));
TAIL_STATIC(0x75bed4u,75b);
}
B5aa20a:L5aa20a:{c.instructions+=13;NFSU2_TR(0x5aa20a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B5aa20f:{NFSU2_TR(0x5aa20f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x86afa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))+u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B5aa215:{NFSU2_TR(0x5aa215);
__builtin_memmove((R+4),gp(0x7a1878),4);
}
B5aa21b:{NFSU2_TR(0x5aa21b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aa21e:{NFSU2_TR(0x5aa21e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa21f:{NFSU2_TR(0x5aa21f);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5aa223:{NFSU2_TR(0x5aa223);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa224:{NFSU2_TR(0x5aa224);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa225:{NFSU2_TR(0x5aa225);
__builtin_memmove((R+4),(R+12),4);
}
B5aa227:{NFSU2_TR(0x5aa227);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5aa22f:{NFSU2_TR(0x5aa22f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5aa237:{NFSU2_TR(0x5aa237);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5aa23f:{NFSU2_TR(0x5aa23f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa244ull));
TAIL_STATIC(0x5a1a90u,5a1);
}
B5aa244:L5aa244:{c.instructions+=7;NFSU2_TR(0x5aa244);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aa247:{NFSU2_TR(0x5aa247);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5aa24a:{NFSU2_TR(0x5aa24a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa24b:{NFSU2_TR(0x5aa24b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B5aa24e:{NFSU2_TR(0x5aa24e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa24f:{NFSU2_TR(0x5aa24f);
__builtin_memmove((R+4),(R+24),4);
}
B5aa251:{NFSU2_TR(0x5aa251);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa256ull));
TAIL_STATIC(0x5a0680u,5a0);
}
B5aa256:L5aa256:{c.instructions+=3;NFSU2_TR(0x5aa256);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5aa25a:{NFSU2_TR(0x5aa25a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa25b:{NFSU2_TR(0x5aa25b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa260ull));
TAIL_STATIC(0x43c780u,43c);
}
B5aa260:L5aa260:{c.instructions+=10;NFSU2_TR(0x5aa260);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aa267:{NFSU2_TR(0x5aa267);
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
B5aa26a:{NFSU2_TR(0x5aa26a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5aa26b:{NFSU2_TR(0x5aa26b);
__builtin_memmove((R+0),(R+24),4);
}
B5aa26d:{NFSU2_TR(0x5aa26d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5aa26e:{NFSU2_TR(0x5aa26e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa275:{NFSU2_TR(0x5aa275);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5aa276:{NFSU2_TR(0x5aa276);
__builtin_memmove((R+16),(R+20),4);
}
B5aa278:{NFSU2_TR(0x5aa278);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5aa279:{NFSU2_TR(0x5aa279);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5aa280:L5aa280:{c.instructions+=14;NFSU2_TR(0x5aa280);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aa286:{NFSU2_TR(0x5aa286);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa288:{NFSU2_TR(0x5aa288);
u8 U[4];
w4(U+0,u32(0x778c6bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa28d:{NFSU2_TR(0x5aa28d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa28e:{NFSU2_TR(0x5aa28e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa295:{NFSU2_TR(0x5aa295);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B5aa298:{NFSU2_TR(0x5aa298);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa299:{NFSU2_TR(0x5aa299);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa29a:{NFSU2_TR(0x5aa29a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa29b:{NFSU2_TR(0x5aa29b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5aa29f:{NFSU2_TR(0x5aa29f);
u8 U[4];
w4(U+0,u32(0x7a2330ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa2a4:{NFSU2_TR(0x5aa2a4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa2a6:{NFSU2_TR(0x5aa2a6);
__builtin_memmove((R+4),(R+28),4);
}
B5aa2a8:{NFSU2_TR(0x5aa2a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa2adull));
TAIL_STATIC(0x578ce0u,578);
}
B5aa2ad:L5aa2ad:{c.instructions+=3;NFSU2_TR(0x5aa2ad);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5aa2b0:{NFSU2_TR(0x5aa2b0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5aa2b2:{NFSU2_TR(0x5aa2b2);
if(r1(R+518)){{goto L5aa353;}}
}
B5aa2b8:L5aa2b8:{c.instructions+=4;NFSU2_TR(0x5aa2b8);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5aa2bc:{NFSU2_TR(0x5aa2bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa2bd:{NFSU2_TR(0x5aa2bd);
__builtin_memmove((R+4),(R+28),4);
}
B5aa2bf:{NFSU2_TR(0x5aa2bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa2c4ull));
TAIL_STATIC(0x571710u,571);
}
B5aa2c4:L5aa2c4:{c.instructions+=2;NFSU2_TR(0x5aa2c4);
u8 U[10];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5aa2cb:{NFSU2_TR(0x5aa2cb);
if(r1(R+518)){{goto L5aa3f5;}}
}
B5aa2d1:L5aa2d1:{c.instructions+=4;NFSU2_TR(0x5aa2d1);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5aa2d5:{NFSU2_TR(0x5aa2d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa2d6:{NFSU2_TR(0x5aa2d6);
__builtin_memmove((R+4),(R+28),4);
}
B5aa2d8:{NFSU2_TR(0x5aa2d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa2ddull));
TAIL_STATIC(0x571710u,571);
}
B5aa2dd:L5aa2dd:{c.instructions+=4;NFSU2_TR(0x5aa2dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5aa2e1:{NFSU2_TR(0x5aa2e1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa2e2:{NFSU2_TR(0x5aa2e2);
w4(R+4,u32(0x88f768ull));
}
B5aa2e7:{NFSU2_TR(0x5aa2e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa2ecull));
TAIL_STATIC(0x5d3c10u,5d3);
}
B5aa2ec:L5aa2ec:{c.instructions+=9;NFSU2_TR(0x5aa2ec);
u8 U[6];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B5aa2f1:{NFSU2_TR(0x5aa2f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88f770ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+20),(U+8),4);
}
B5aa2f8:{NFSU2_TR(0x5aa2f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5aa2fb:{NFSU2_TR(0x5aa2fb);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5aa2ff:{NFSU2_TR(0x5aa2ff);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B5aa302:{NFSU2_TR(0x5aa302);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa303:{NFSU2_TR(0x5aa303);
__builtin_memmove((R+4),(R+28),4);
}
B5aa305:{NFSU2_TR(0x5aa305);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B5aa307:{NFSU2_TR(0x5aa307);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa30cull));
TAIL_STATIC(0x571710u,571);
}
B5aa30c:L5aa30c:{c.instructions+=3;NFSU2_TR(0x5aa30c);
__builtin_memmove((R+4),gp(0x86ad68),4);
}
B5aa312:{NFSU2_TR(0x5aa312);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa313:{NFSU2_TR(0x5aa313);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa318ull));
TAIL_STATIC(0x440e50u,440);
}
B5aa318:L5aa318:{c.instructions+=5;NFSU2_TR(0x5aa318);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5aa31b:{NFSU2_TR(0x5aa31b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa31f:{NFSU2_TR(0x5aa31f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5aa321:{NFSU2_TR(0x5aa321);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5aa329:{NFSU2_TR(0x5aa329);
if(r1(R+518)){{goto L5aa33c;}}
}
B5aa32b:L5aa32b:{c.instructions+=6;NFSU2_TR(0x5aa32b);
u8 U[6];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B5aa330:{NFSU2_TR(0x5aa330);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa331:{NFSU2_TR(0x5aa331);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa332:{NFSU2_TR(0x5aa332);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa333:{NFSU2_TR(0x5aa333);
__builtin_memmove((R+4),(R+0),4);
}
B5aa335:{NFSU2_TR(0x5aa335);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa33aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5aa0b0u);}goto L5aa0b0;}
}
B5aa33a:L5aa33a:{c.instructions+=1;NFSU2_TR(0x5aa33a);
{goto L5aa33e;}
}
B5aa33c:L5aa33c:{c.instructions+=1;NFSU2_TR(0x5aa33c);
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
B5aa33e:L5aa33e:{c.instructions+=5;NFSU2_TR(0x5aa33e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5aa340:{NFSU2_TR(0x5aa340);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa341:{NFSU2_TR(0x5aa341);
__builtin_memmove((R+4),(R+0),4);
}
B5aa343:{NFSU2_TR(0x5aa343);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5aa34b:{NFSU2_TR(0x5aa34b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa34eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5aa34e:L5aa34e:{c.instructions+=1;NFSU2_TR(0x5aa34e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5aa2b8u);}goto L5aa2b8;}
}
B5aa353:L5aa353:{c.instructions+=3;NFSU2_TR(0x5aa353);
__builtin_memmove((R+0),gp(0x86b4c8),4);
}
B5aa358:{NFSU2_TR(0x5aa358);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5aa35a:{NFSU2_TR(0x5aa35a);
if(r1(R+518)){{goto L5aa361;}}
}
B5aa35c:L5aa35c:{c.instructions+=2;NFSU2_TR(0x5aa35c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B5aa35f:{NFSU2_TR(0x5aa35f);
{goto L5aa363;}
}
B5aa361:L5aa361:{c.instructions+=1;NFSU2_TR(0x5aa361);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5aa363:L5aa363:{c.instructions+=2;NFSU2_TR(0x5aa363);
w4(R+4,u32(0x86b4c8ull));
}
B5aa368:{NFSU2_TR(0x5aa368);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa36dull));
TAIL_STATIC(0x431780u,431);
}
B5aa36d:L5aa36d:{c.instructions+=3;NFSU2_TR(0x5aa36d);
__builtin_memmove((R+20),(R+0),4);
}
B5aa36f:{NFSU2_TR(0x5aa36f);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5aa371:{NFSU2_TR(0x5aa371);
if(r1(R+518)){{goto L5aa3e1;}}
}
B5aa373:L5aa373:{c.instructions+=2;NFSU2_TR(0x5aa373);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5aa377:{NFSU2_TR(0x5aa377);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5aa3cf;}}
}
B5aa379:L5aa379:{c.instructions+=10;NFSU2_TR(0x5aa379);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aa37c:{NFSU2_TR(0x5aa37c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5aa37f:{NFSU2_TR(0x5aa37f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aa382:{NFSU2_TR(0x5aa382);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B5aa385:{NFSU2_TR(0x5aa385);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5aa389:{NFSU2_TR(0x5aa389);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5aa38c:{NFSU2_TR(0x5aa38c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa38d:{NFSU2_TR(0x5aa38d);
__builtin_memmove((R+4),(R+28),4);
}
B5aa38f:{NFSU2_TR(0x5aa38f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa393:{NFSU2_TR(0x5aa393);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa398ull));
TAIL_STATIC(0x571710u,571);
}
B5aa398:L5aa398:{c.instructions+=8;NFSU2_TR(0x5aa398);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aa39b:{NFSU2_TR(0x5aa39b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5aa39d:{NFSU2_TR(0x5aa39d);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B5aa3a1:{NFSU2_TR(0x5aa3a1);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5aa3a5:{NFSU2_TR(0x5aa3a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa3a6:{NFSU2_TR(0x5aa3a6);
__builtin_memmove((R+4),(R+28),4);
}
B5aa3a8:{NFSU2_TR(0x5aa3a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa3ac:{NFSU2_TR(0x5aa3ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa3b1ull));
TAIL_STATIC(0x571710u,571);
}
B5aa3b1:L5aa3b1:{c.instructions+=7;NFSU2_TR(0x5aa3b1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5aa3b3:{NFSU2_TR(0x5aa3b3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5aa3b7:{NFSU2_TR(0x5aa3b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5aa3bb:{NFSU2_TR(0x5aa3bb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa3bc:{NFSU2_TR(0x5aa3bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa3c0:{NFSU2_TR(0x5aa3c0);
__builtin_memmove((R+4),(R+28),4);
}
B5aa3c2:{NFSU2_TR(0x5aa3c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa3c7ull));
TAIL_STATIC(0x571710u,571);
}
B5aa3c7:L5aa3c7:{c.instructions+=4;NFSU2_TR(0x5aa3c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5aa3c9:{NFSU2_TR(0x5aa3c9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa3ca:{NFSU2_TR(0x5aa3ca);
__builtin_memmove((R+4),(R+24),4);
}
B5aa3cc:{NFSU2_TR(0x5aa3cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa3cfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5aa3cf:L5aa3cf:{c.instructions+=3;NFSU2_TR(0x5aa3cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5aa3d2:{NFSU2_TR(0x5aa3d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5aa3d4:{NFSU2_TR(0x5aa3d4);
if(r1(R+518)){{goto L5aa3db;}}
}
B5aa3d6:L5aa3d6:{c.instructions+=2;NFSU2_TR(0x5aa3d6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B5aa3d9:{NFSU2_TR(0x5aa3d9);
{goto L5aa3dd;}
}
B5aa3db:L5aa3db:{c.instructions+=1;NFSU2_TR(0x5aa3db);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5aa3dd:L5aa3dd:{c.instructions+=2;NFSU2_TR(0x5aa3dd);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5aa3df:{NFSU2_TR(0x5aa3df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5aa373u);}goto L5aa373;}}
}
B5aa3e1:L5aa3e1:{c.instructions+=5;NFSU2_TR(0x5aa3e1);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5aa3e5:{NFSU2_TR(0x5aa3e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa3e6:{NFSU2_TR(0x5aa3e6);
__builtin_memmove((R+4),(R+28),4);
}
B5aa3e8:{NFSU2_TR(0x5aa3e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5aa3f0:{NFSU2_TR(0x5aa3f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa3f5ull));
TAIL_STATIC(0x571710u,571);
}
B5aa3f5:L5aa3f5:{c.instructions+=2;NFSU2_TR(0x5aa3f5);
__builtin_memmove((R+4),(R+28),4);
}
B5aa3f7:{NFSU2_TR(0x5aa3f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa3fcull));
TAIL_STATIC(0x578d90u,578);
}
B5aa3fc:L5aa3fc:{c.instructions+=7;NFSU2_TR(0x5aa3fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aa400:{NFSU2_TR(0x5aa400);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5aa401:{NFSU2_TR(0x5aa401);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5aa402:{NFSU2_TR(0x5aa402);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5aa403:{NFSU2_TR(0x5aa403);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa40a:{NFSU2_TR(0x5aa40a);
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
B5aa40d:{NFSU2_TR(0x5aa40d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5aa410:L5aa410:{c.instructions+=14;NFSU2_TR(0x5aa410);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa412:{NFSU2_TR(0x5aa412);
u8 U[4];
w4(U+0,u32(0x778c8bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa417:{NFSU2_TR(0x5aa417);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aa41d:{NFSU2_TR(0x5aa41d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa41e:{NFSU2_TR(0x5aa41e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa425:{NFSU2_TR(0x5aa425);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa426:{NFSU2_TR(0x5aa426);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa427:{NFSU2_TR(0x5aa427);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa42b:{NFSU2_TR(0x5aa42b);
u8 U[4];
w4(U+0,u32(0x7a2350ull));
s4(u32(r4(R+4)),r4(U+0));
}
B5aa431:{NFSU2_TR(0x5aa431);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aa434:{NFSU2_TR(0x5aa434);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B5aa437:{NFSU2_TR(0x5aa437);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5aa439:{NFSU2_TR(0x5aa439);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5aa441:{NFSU2_TR(0x5aa441);
if(r1(R+518)){{goto L5aa460;}}
}
B5aa443:L5aa443:{c.instructions+=8;NFSU2_TR(0x5aa443);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5aa445:{NFSU2_TR(0x5aa445);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5aa447:{NFSU2_TR(0x5aa447);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5aa44a:{NFSU2_TR(0x5aa44a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5aa44c:{NFSU2_TR(0x5aa44c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa44f:{NFSU2_TR(0x5aa44f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5aa452:{NFSU2_TR(0x5aa452);
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
B5aa454:{NFSU2_TR(0x5aa454);
if(r1(R+518)){{goto L5aa45c;}}
}
B5aa456:L5aa456:{c.instructions+=3;NFSU2_TR(0x5aa456);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5aa458:{NFSU2_TR(0x5aa458);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa45a:{NFSU2_TR(0x5aa45a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa45cull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5aa45c:L5aa45c:{c.instructions+=2;NFSU2_TR(0x5aa45c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5aa45e:{NFSU2_TR(0x5aa45e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5aa443u);}goto L5aa443;}}
}
B5aa460:L5aa460:{c.instructions+=3;NFSU2_TR(0x5aa460);
__builtin_memmove((R+4),(R+24),4);
}
B5aa462:{NFSU2_TR(0x5aa462);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5aa46a:{NFSU2_TR(0x5aa46a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa46full));
TAIL_STATIC(0x4358e0u,435);
}
B5aa46f:L5aa46f:{c.instructions+=5;NFSU2_TR(0x5aa46f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aa473:{NFSU2_TR(0x5aa473);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5aa474:{NFSU2_TR(0x5aa474);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa47b:{NFSU2_TR(0x5aa47b);
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
B5aa47e:{NFSU2_TR(0x5aa47e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5aa480:L5aa480:{c.instructions+=10;NFSU2_TR(0x5aa480);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x238ull))));
}
B5aa486:{NFSU2_TR(0x5aa486);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa487:{NFSU2_TR(0x5aa487);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa488:{NFSU2_TR(0x5aa488);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa489:{NFSU2_TR(0x5aa489);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa48a:{NFSU2_TR(0x5aa48a);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5aa48e:{NFSU2_TR(0x5aa48e);
__builtin_memmove((R+24),(R+4),4);
}
B5aa490:{NFSU2_TR(0x5aa490);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa491:{NFSU2_TR(0x5aa491);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa495:{NFSU2_TR(0x5aa495);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa49aull));
TAIL_STATIC(0x5a0d20u,5a0);
}
B5aa49a:L5aa49a:{c.instructions+=2;NFSU2_TR(0x5aa49a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5aa49d:{NFSU2_TR(0x5aa49d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5aa4a5:L5aa4a5:{c.instructions+=2;NFSU2_TR(0x5aa4a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5aa4a7:{NFSU2_TR(0x5aa4a7);
if(r1(R+518)){{goto L5aa4ae;}}
}
B5aa4a9:L5aa4a9:{c.instructions+=2;NFSU2_TR(0x5aa4a9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
}
B5aa4ac:{NFSU2_TR(0x5aa4ac);
{goto L5aa4b0;}
}
B5aa4ae:L5aa4ae:{c.instructions+=1;NFSU2_TR(0x5aa4ae);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5aa4b0:L5aa4b0:{c.instructions+=3;NFSU2_TR(0x5aa4b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B5aa4b3:{NFSU2_TR(0x5aa4b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5aa4b5:{NFSU2_TR(0x5aa4b5);
if(r1(R+518)){{goto L5aa4bc;}}
}
B5aa4b7:L5aa4b7:{c.instructions+=2;NFSU2_TR(0x5aa4b7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B5aa4ba:{NFSU2_TR(0x5aa4ba);
{goto L5aa4be;}
}
B5aa4bc:L5aa4bc:{c.instructions+=1;NFSU2_TR(0x5aa4bc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5aa4be:L5aa4be:{c.instructions+=2;NFSU2_TR(0x5aa4be);
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
B5aa4c0:{NFSU2_TR(0x5aa4c0);
if(r1(R+518)){{goto L5aa57f;}}
}
B5aa4c6:L5aa4c6:{c.instructions+=3;NFSU2_TR(0x5aa4c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5aa4c8:{NFSU2_TR(0x5aa4c8);
__builtin_memmove((R+4),(R+12),4);
}
B5aa4ca:{NFSU2_TR(0x5aa4ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa4cdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5aa4cd:L5aa4cd:{c.instructions+=4;NFSU2_TR(0x5aa4cd);
__builtin_memmove((R+20),(R+0),4);
}
B5aa4cf:{NFSU2_TR(0x5aa4cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5aa4d1:{NFSU2_TR(0x5aa4d1);
__builtin_memmove((R+4),(R+12),4);
}
B5aa4d3:{NFSU2_TR(0x5aa4d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa4d6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5aa4d6:L5aa4d6:{c.instructions+=6;NFSU2_TR(0x5aa4d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5aa4da:{NFSU2_TR(0x5aa4da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5aa4dc:{NFSU2_TR(0x5aa4dc);
__builtin_memmove((R+4),(R+12),4);
}
B5aa4de:{NFSU2_TR(0x5aa4de);
__builtin_memmove((R+24),(R+0),4);
}
B5aa4e0:{NFSU2_TR(0x5aa4e0);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B5aa4e4:{NFSU2_TR(0x5aa4e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa4e7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5aa4e7:L5aa4e7:{c.instructions+=3;NFSU2_TR(0x5aa4e7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5aa4e9:{NFSU2_TR(0x5aa4e9);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5aa4ec:{NFSU2_TR(0x5aa4ec);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5aa542;}}
}
B5aa4ee:L5aa4ee:{c.instructions+=1;NFSU2_TR(0x5aa4ee);
w4(R+0,u32(0x3ull));
}
B5aa4f3:L5aa4f3:{c.instructions+=22;NFSU2_TR(0x5aa4f3);
{u32 ea_=u32(r4(R+16)+u32(588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa4fa:{NFSU2_TR(0x5aa4fa);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5aa4fd:{NFSU2_TR(0x5aa4fd);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5aa4ff:{NFSU2_TR(0x5aa4ff);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5aa502:{NFSU2_TR(0x5aa502);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B5aa505:{NFSU2_TR(0x5aa505);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B5aa508:{NFSU2_TR(0x5aa508);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5aa50a:{NFSU2_TR(0x5aa50a);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5aa50d:{NFSU2_TR(0x5aa50d);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aa510:{NFSU2_TR(0x5aa510);
{u32 ea_=u32(r4(R+16)+u32(588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa517:{NFSU2_TR(0x5aa517);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5aa51a:{NFSU2_TR(0x5aa51a);
{u32 ea_=u32(r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5aa51d:{NFSU2_TR(0x5aa51d);
{u32 ea_=u32(r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aa520:{NFSU2_TR(0x5aa520);
{u32 ea_=u32(r4(R+16)+u32(588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa527:{NFSU2_TR(0x5aa527);
{u32 ea_=u32(r4(R+28)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5aa52a:{NFSU2_TR(0x5aa52a);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5aa52d:{NFSU2_TR(0x5aa52d);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aa530:{NFSU2_TR(0x5aa530);
{u32 ea_=u32(r4(R+16)+u32(588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa537:{NFSU2_TR(0x5aa537);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5aa53a:{NFSU2_TR(0x5aa53a);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5aa53d:{NFSU2_TR(0x5aa53d);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aa540:{NFSU2_TR(0x5aa540);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5aa4f3u);}goto L5aa4f3;}}
}
B5aa542:L5aa542:{c.instructions+=2;NFSU2_TR(0x5aa542);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5aa544:{NFSU2_TR(0x5aa544);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5aa569;}}
}
B5aa546:L5aa546:{c.instructions+=3;NFSU2_TR(0x5aa546);
__builtin_memmove((R+0),(R+20),4);
}
B5aa548:{NFSU2_TR(0x5aa548);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B5aa54a:{NFSU2_TR(0x5aa54a);
__builtin_memmove((R+12),(R+12),4);
}
B5aa550:L5aa550:{c.instructions+=8;NFSU2_TR(0x5aa550);
{u32 ea_=u32(r4(R+16)+u32(588u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa557:{NFSU2_TR(0x5aa557);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5aa55a:{NFSU2_TR(0x5aa55a);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5aa55d:{NFSU2_TR(0x5aa55d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5aa560:{NFSU2_TR(0x5aa560);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5aa561:{NFSU2_TR(0x5aa561);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5aa564:{NFSU2_TR(0x5aa564);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aa567:{NFSU2_TR(0x5aa567);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5aa550u);}goto L5aa550;}}
}
B5aa569:L5aa569:{c.instructions+=6;NFSU2_TR(0x5aa569);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aa56d:{NFSU2_TR(0x5aa56d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5aa570:{NFSU2_TR(0x5aa570);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5aa574:{NFSU2_TR(0x5aa574);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+20))));
}
B5aa576:{NFSU2_TR(0x5aa576);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa57a:{NFSU2_TR(0x5aa57a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5aa4a5u);}goto L5aa4a5;}
}
B5aa57f:L5aa57f:{c.instructions+=3;NFSU2_TR(0x5aa57f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5aa581:{NFSU2_TR(0x5aa581);
__builtin_memmove((R+4),(R+24),4);
}
B5aa583:{NFSU2_TR(0x5aa583);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa586ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5aa586:L5aa586:{c.instructions+=6;NFSU2_TR(0x5aa586);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5aa587:{NFSU2_TR(0x5aa587);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5aa588:{NFSU2_TR(0x5aa588);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5aa589:{NFSU2_TR(0x5aa589);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5aa58a:{NFSU2_TR(0x5aa58a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x238ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x238ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x238ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5aa590:{NFSU2_TR(0x5aa590);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5aa5a0:L5aa5a0:{c.instructions+=83;NFSU2_TR(0x5aa5a0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa5a2:{NFSU2_TR(0x5aa5a2);
u8 U[4];
w4(U+0,u32(0x778e68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa5a7:{NFSU2_TR(0x5aa5a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aa5ad:{NFSU2_TR(0x5aa5ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa5ae:{NFSU2_TR(0x5aa5ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa5b5:{NFSU2_TR(0x5aa5b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa5b6:{NFSU2_TR(0x5aa5b6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa5b7:{NFSU2_TR(0x5aa5b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa5b8:{NFSU2_TR(0x5aa5b8);
__builtin_memmove((R+24),(R+4),4);
}
B5aa5ba:{NFSU2_TR(0x5aa5ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa5be:{NFSU2_TR(0x5aa5be);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aa5c2:{NFSU2_TR(0x5aa5c2);
u8 U[4];
w4(U+0,u32(0x7a235cull));
s4(u32(r4(R+24)),r4(U+0));
}
B5aa5c8:{NFSU2_TR(0x5aa5c8);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa5cb:{NFSU2_TR(0x5aa5cb);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa5cd:{NFSU2_TR(0x5aa5cd);
w4(R+0,u32(0x9ull));
}
B5aa5d2:{NFSU2_TR(0x5aa5d2);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5aa5d5:{NFSU2_TR(0x5aa5d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa5d8:{NFSU2_TR(0x5aa5d8);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5aa5da:{NFSU2_TR(0x5aa5da);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5aa5dd:{NFSU2_TR(0x5aa5dd);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aa5e0:{NFSU2_TR(0x5aa5e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa5e3:{NFSU2_TR(0x5aa5e3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5aa5e5:{NFSU2_TR(0x5aa5e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5aa5e8:{NFSU2_TR(0x5aa5e8);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5aa5ea:{NFSU2_TR(0x5aa5ea);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5aa5ec:{NFSU2_TR(0x5aa5ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa5f0:{NFSU2_TR(0x5aa5f0);
{u32 ea_=u32(u32(7897588u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5aa5f6:{NFSU2_TR(0x5aa5f6);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aa5f9:{NFSU2_TR(0x5aa5f9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5aa5fb:{NFSU2_TR(0x5aa5fb);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa5fe:{NFSU2_TR(0x5aa5fe);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa600:{NFSU2_TR(0x5aa600);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa603:{NFSU2_TR(0x5aa603);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5aa606:{NFSU2_TR(0x5aa606);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5aa60d:{NFSU2_TR(0x5aa60d);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5aa60f:{NFSU2_TR(0x5aa60f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5aa612:{NFSU2_TR(0x5aa612);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aa615:{NFSU2_TR(0x5aa615);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5aa617:{NFSU2_TR(0x5aa617);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5aa619:{NFSU2_TR(0x5aa619);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5aa61f:{NFSU2_TR(0x5aa61f);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aa622:{NFSU2_TR(0x5aa622);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5aa624:{NFSU2_TR(0x5aa624);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa627:{NFSU2_TR(0x5aa627);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa629:{NFSU2_TR(0x5aa629);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa62c:{NFSU2_TR(0x5aa62c);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5aa62f:{NFSU2_TR(0x5aa62f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa632:{NFSU2_TR(0x5aa632);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5aa634:{NFSU2_TR(0x5aa634);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aa637:{NFSU2_TR(0x5aa637);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5aa639:{NFSU2_TR(0x5aa639);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5aa63b:{NFSU2_TR(0x5aa63b);
{u32 ea_=u32(u32(7897588u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5aa641:{NFSU2_TR(0x5aa641);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aa644:{NFSU2_TR(0x5aa644);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5aa646:{NFSU2_TR(0x5aa646);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa649:{NFSU2_TR(0x5aa649);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa64b:{NFSU2_TR(0x5aa64b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa64e:{NFSU2_TR(0x5aa64e);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5aa651:{NFSU2_TR(0x5aa651);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aa655:{NFSU2_TR(0x5aa655);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5aa657:{NFSU2_TR(0x5aa657);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
w4(U+4,u32(0x7fbf38ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5aa65e:{NFSU2_TR(0x5aa65e);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aa661:{NFSU2_TR(0x5aa661);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5aa663:{NFSU2_TR(0x5aa663);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5aa665:{NFSU2_TR(0x5aa665);
{u32 ea_=u32(u32(7897588u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5aa66b:{NFSU2_TR(0x5aa66b);
{u32 ea_=u32(r4(R+24)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aa66e:{NFSU2_TR(0x5aa66e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa671:{NFSU2_TR(0x5aa671);
w4(R+0,u32(0x3f800000ull));
}
B5aa676:{NFSU2_TR(0x5aa676);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5aa678:{NFSU2_TR(0x5aa678);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa67b:{NFSU2_TR(0x5aa67b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa67e:{NFSU2_TR(0x5aa67e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa684:{NFSU2_TR(0x5aa684);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5aa68e:{NFSU2_TR(0x5aa68e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa694:{NFSU2_TR(0x5aa694);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa69a:{NFSU2_TR(0x5aa69a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa6a0:{NFSU2_TR(0x5aa6a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5aa6a6:{NFSU2_TR(0x5aa6a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa6ac:{NFSU2_TR(0x5aa6ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa6b2:{NFSU2_TR(0x5aa6b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa6b8:{NFSU2_TR(0x5aa6b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa6be:{NFSU2_TR(0x5aa6be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa6c4:{NFSU2_TR(0x5aa6c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa6c9ull));
TAIL_STATIC(0x457b00u,457);
}
B5aa6c9:L5aa6c9:{c.instructions+=6;NFSU2_TR(0x5aa6c9);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aa6cf:{NFSU2_TR(0x5aa6cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5aa6d2:{NFSU2_TR(0x5aa6d2);
u8 U[4];
w4(U+0,u32(0x7a1d20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa6d7:{NFSU2_TR(0x5aa6d7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa6d8:{NFSU2_TR(0x5aa6d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa6db:{NFSU2_TR(0x5aa6db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa6e0ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5aa6e0:L5aa6e0:{c.instructions+=8;NFSU2_TR(0x5aa6e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aa6e4:{NFSU2_TR(0x5aa6e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5aa6e7:{NFSU2_TR(0x5aa6e7);
__builtin_memmove((R+0),(R+24),4);
}
B5aa6e9:{NFSU2_TR(0x5aa6e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5aa6ea:{NFSU2_TR(0x5aa6ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5aa6eb:{NFSU2_TR(0x5aa6eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa6f2:{NFSU2_TR(0x5aa6f2);
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
B5aa6f5:{NFSU2_TR(0x5aa6f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5aa700:L5aa700:{c.instructions+=2;NFSU2_TR(0x5aa700);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5aa703:{NFSU2_TR(0x5aa703);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5aa710:L5aa710:{c.instructions+=4;NFSU2_TR(0x5aa710);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aa713:{NFSU2_TR(0x5aa713);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aa717:{NFSU2_TR(0x5aa717);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5aa719:{NFSU2_TR(0x5aa719);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5aa720:L5aa720:{c.instructions+=4;NFSU2_TR(0x5aa720);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aa724:{NFSU2_TR(0x5aa724);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5aa726:{NFSU2_TR(0x5aa726);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa729:{NFSU2_TR(0x5aa729);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5aa730:L5aa730:{c.instructions+=3;NFSU2_TR(0x5aa730);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa731:{NFSU2_TR(0x5aa731);
__builtin_memmove((R+24),(R+4),4);
}
B5aa733:{NFSU2_TR(0x5aa733);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa738ull));
TAIL_STATIC(0x5a0d10u,5a0);
}
B5aa738:L5aa738:{c.instructions+=2;NFSU2_TR(0x5aa738);
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
B5aa73d:{NFSU2_TR(0x5aa73d);
if(r1(R+518)){{goto L5aa74e;}}
}
B5aa73f:L5aa73f:{c.instructions+=4;NFSU2_TR(0x5aa73f);
__builtin_memmove((R+0),gp(0x86b2ec),4);
}
B5aa744:{NFSU2_TR(0x5aa744);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa745:{NFSU2_TR(0x5aa745);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa746:{NFSU2_TR(0x5aa746);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa74bull));
TAIL_STATIC(0x43f920u,43f);
}
B5aa74b:L5aa74b:{c.instructions+=1;NFSU2_TR(0x5aa74b);
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
B5aa74e:L5aa74e:{c.instructions+=3;NFSU2_TR(0x5aa74e);
__builtin_memmove((R+0),(R+24),4);
}
B5aa750:{NFSU2_TR(0x5aa750);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5aa751:{NFSU2_TR(0x5aa751);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5aa760:L5aa760:{c.instructions+=16;NFSU2_TR(0x5aa760);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5aa763:{NFSU2_TR(0x5aa763);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa764:{NFSU2_TR(0x5aa764);
__builtin_memmove((R+24),(R+4),4);
}
B5aa766:{NFSU2_TR(0x5aa766);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5aa769:{NFSU2_TR(0x5aa769);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa76c:{NFSU2_TR(0x5aa76c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa76d:{NFSU2_TR(0x5aa76d);
{u32 ea_=u32(u32(8002872u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5aa773:{NFSU2_TR(0x5aa773);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aa777:{NFSU2_TR(0x5aa777);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa779:{NFSU2_TR(0x5aa779);
{u32 ea_=u32(u32(8002872u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5aa77f:{NFSU2_TR(0x5aa77f);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa782:{NFSU2_TR(0x5aa782);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5aa786:{NFSU2_TR(0x5aa786);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5aa788:{NFSU2_TR(0x5aa788);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5aa78a:{NFSU2_TR(0x5aa78a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5aa78d:{NFSU2_TR(0x5aa78d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5aa795;}}
}
B5aa78f:L5aa78f:{c.instructions+=2;NFSU2_TR(0x5aa78f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5aa791:{NFSU2_TR(0x5aa791);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa795:L5aa795:{c.instructions+=5;NFSU2_TR(0x5aa795);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa799:{NFSU2_TR(0x5aa799);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5aa79b:{NFSU2_TR(0x5aa79b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5aa79d:{NFSU2_TR(0x5aa79d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5aa7a0:{NFSU2_TR(0x5aa7a0);
if(r1(R+514)){{goto L5aa7a8;}}
}
B5aa7a2:L5aa7a2:{c.instructions+=2;NFSU2_TR(0x5aa7a2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5aa7a4:{NFSU2_TR(0x5aa7a4);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa7a8:L5aa7a8:{c.instructions+=6;NFSU2_TR(0x5aa7a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5aa7ae:{NFSU2_TR(0x5aa7ae);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5aa7b1:{NFSU2_TR(0x5aa7b1);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5aa7b3:{NFSU2_TR(0x5aa7b3);
{u32 ea_=u32(u32(8002856u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5aa7b9:{NFSU2_TR(0x5aa7b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5aa7c0:{NFSU2_TR(0x5aa7c0);
if(r1(R+518)){{goto L5aa807;}}
}
B5aa7c2:L5aa7c2:{c.instructions+=8;NFSU2_TR(0x5aa7c2);
{u32 ea_=u32(u32(8001760u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa7c8:{NFSU2_TR(0x5aa7c8);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5aa7cb:{NFSU2_TR(0x5aa7cb);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5aa7ce:{NFSU2_TR(0x5aa7ce);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5aa7d0:{NFSU2_TR(0x5aa7d0);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5aa7d2:{NFSU2_TR(0x5aa7d2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5aa7d4:{NFSU2_TR(0x5aa7d4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5aa7d7:{NFSU2_TR(0x5aa7d7);
if(r1(R+514)){{goto L5aa803;}}
}
B5aa7d9:L5aa7d9:{c.instructions+=1;NFSU2_TR(0x5aa7d9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5aa7e0:L5aa7e0:{c.instructions+=1;NFSU2_TR(0x5aa7e0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5aa7e2:L5aa7e2:{c.instructions+=6;NFSU2_TR(0x5aa7e2);
__builtin_memmove((R+0),gp(0x7fc800),4);
}
B5aa7e7:{NFSU2_TR(0x5aa7e7);
__builtin_memmove((R+28),(R+0),4);
}
B5aa7e9:{NFSU2_TR(0x5aa7e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa7ea:{NFSU2_TR(0x5aa7ea);
__builtin_memmove((R+4),(R+24),4);
}
B5aa7ec:{NFSU2_TR(0x5aa7ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa7f0:{NFSU2_TR(0x5aa7f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa7f5ull));
TAIL_STATIC(0x5a0f30u,5a0);
}
B5aa7f5:L5aa7f5:{c.instructions+=3;NFSU2_TR(0x5aa7f5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa7f6:{NFSU2_TR(0x5aa7f6);
__builtin_memmove((R+4),(R+24),4);
}
B5aa7f8:{NFSU2_TR(0x5aa7f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa7fdull));
TAIL_STATIC(0x5a11e0u,5a1);
}
B5aa7fd:L5aa7fd:{c.instructions+=4;NFSU2_TR(0x5aa7fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5aa7fe:{NFSU2_TR(0x5aa7fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5aa7ff:{NFSU2_TR(0x5aa7ff);
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
B5aa802:{NFSU2_TR(0x5aa802);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5aa803:L5aa803:{c.instructions+=2;NFSU2_TR(0x5aa803);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5aa805:{NFSU2_TR(0x5aa805);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5aa7e0u);}goto L5aa7e0;}}
}
B5aa807:L5aa807:{c.instructions+=7;NFSU2_TR(0x5aa807);
{u32 ea_=u32(u32(8001756u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa80d:{NFSU2_TR(0x5aa80d);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5aa810:{NFSU2_TR(0x5aa810);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5aa812:{NFSU2_TR(0x5aa812);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5aa814:{NFSU2_TR(0x5aa814);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5aa816:{NFSU2_TR(0x5aa816);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5aa819:{NFSU2_TR(0x5aa819);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5aa7e2u);}goto L5aa7e2;}}
}
B5aa81b:L5aa81b:{c.instructions+=2;NFSU2_TR(0x5aa81b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5aa822:{NFSU2_TR(0x5aa822);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5aa7e2u);}goto L5aa7e2;}
}
B5aa830:L5aa830:{c.instructions+=5;NFSU2_TR(0x5aa830);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5aa833:{NFSU2_TR(0x5aa833);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa834:{NFSU2_TR(0x5aa834);
__builtin_memmove((R+24),(R+4),4);
}
B5aa836:{NFSU2_TR(0x5aa836);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5aa83a:{NFSU2_TR(0x5aa83a);
if(r1(R+518)){{goto L5aa8e7;}}
}
B5aa840:L5aa840:{c.instructions+=2;NFSU2_TR(0x5aa840);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5aa844:{NFSU2_TR(0x5aa844);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5aa8e7;}}
}
B5aa84a:L5aa84a:{c.instructions+=4;NFSU2_TR(0x5aa84a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aa84d:{NFSU2_TR(0x5aa84d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aa853:{NFSU2_TR(0x5aa853);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5aa855:{NFSU2_TR(0x5aa855);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5aa8e7;}}
}
B5aa85b:L5aa85b:{c.instructions+=4;NFSU2_TR(0x5aa85b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa85c:{NFSU2_TR(0x5aa85c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5aa85f:{NFSU2_TR(0x5aa85f);
__builtin_memmove((R+4),(R+24),4);
}
B5aa861:{NFSU2_TR(0x5aa861);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa866ull));
TAIL_STATIC(0x5945f0u,594);
}
B5aa866:L5aa866:{c.instructions+=7;NFSU2_TR(0x5aa866);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5aa869:{NFSU2_TR(0x5aa869);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aa86d:{NFSU2_TR(0x5aa86d);
{u32 ea_=u32(r4(R+28)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa870:{NFSU2_TR(0x5aa870);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5aa876:{NFSU2_TR(0x5aa876);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5aa878:{NFSU2_TR(0x5aa878);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5aa87b:{NFSU2_TR(0x5aa87b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5aa8a9;}}
}
B5aa87d:L5aa87d:{c.instructions+=2;NFSU2_TR(0x5aa87d);
__builtin_memmove((R+4),(R+24),4);
}
B5aa87f:{NFSU2_TR(0x5aa87f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa884ull));
TAIL_STATIC(0x5947c0u,594);
}
B5aa884:L5aa884:{c.instructions+=4;NFSU2_TR(0x5aa884);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5aa88a:{NFSU2_TR(0x5aa88a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5aa88c:{NFSU2_TR(0x5aa88c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5aa88f:{NFSU2_TR(0x5aa88f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5aa8a9;}}
}
B5aa891:L5aa891:{c.instructions+=7;NFSU2_TR(0x5aa891);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa894:{NFSU2_TR(0x5aa894);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5aa898:{NFSU2_TR(0x5aa898);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aa89c:{NFSU2_TR(0x5aa89c);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aa89f:{NFSU2_TR(0x5aa89f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa8a0:{NFSU2_TR(0x5aa8a0);
__builtin_memmove((R+4),(R+24),4);
}
B5aa8a2:{NFSU2_TR(0x5aa8a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa8a7ull));
TAIL_STATIC(0x5a12d0u,5a1);
}
B5aa8a7:L5aa8a7:{c.instructions+=1;NFSU2_TR(0x5aa8a7);
{goto L5aa8e6;}
}
B5aa8a9:L5aa8a9:{c.instructions+=2;NFSU2_TR(0x5aa8a9);
__builtin_memmove((R+4),(R+28),4);
}
B5aa8ab:{NFSU2_TR(0x5aa8ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa8b0ull));
TAIL_STATIC(0x594300u,594);
}
B5aa8b0:L5aa8b0:{c.instructions+=14;NFSU2_TR(0x5aa8b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aa8b3:{NFSU2_TR(0x5aa8b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5aa8b6:{NFSU2_TR(0x5aa8b6);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5aa8b8:{NFSU2_TR(0x5aa8b8);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aa8bc:{NFSU2_TR(0x5aa8bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5aa8c0:{NFSU2_TR(0x5aa8c0);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa8c4:{NFSU2_TR(0x5aa8c4);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5aa8c6:{NFSU2_TR(0x5aa8c6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa8c7:{NFSU2_TR(0x5aa8c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5aa8ca:{NFSU2_TR(0x5aa8ca);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aa8ce:{NFSU2_TR(0x5aa8ce);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa8d2:{NFSU2_TR(0x5aa8d2);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5aa8d5:{NFSU2_TR(0x5aa8d5);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aa8d8:{NFSU2_TR(0x5aa8d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa8ddull));
TAIL_STATIC(0x401090u,401);
}
B5aa8dd:L5aa8dd:{c.instructions+=3;NFSU2_TR(0x5aa8dd);
{u32 ea_=u32(r4(R+28)+u32(124u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5aa8e0:{NFSU2_TR(0x5aa8e0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5aa8e3:{NFSU2_TR(0x5aa8e3);
{u32 ea_=u32(r4(R+28)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aa8e6:L5aa8e6:{c.instructions+=1;NFSU2_TR(0x5aa8e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5aa8e7:L5aa8e7:{c.instructions+=2;NFSU2_TR(0x5aa8e7);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5aa8eb:{NFSU2_TR(0x5aa8eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5aa951;}}
}
B5aa8ed:L5aa8ed:{c.instructions+=2;NFSU2_TR(0x5aa8ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aa8f0:{NFSU2_TR(0x5aa8f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa8f5ull));
TAIL_STATIC(0x594300u,594);
}
B5aa8f5:L5aa8f5:{c.instructions+=10;NFSU2_TR(0x5aa8f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aa8f8:{NFSU2_TR(0x5aa8f8);
{u32 ea_=u32(r4(R+4)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa8fb:{NFSU2_TR(0x5aa8fb);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5aa8fd:{NFSU2_TR(0x5aa8fd);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B5aa8ff:{NFSU2_TR(0x5aa8ff);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aa903:{NFSU2_TR(0x5aa903);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5aa905:{NFSU2_TR(0x5aa905);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5aa907:{NFSU2_TR(0x5aa907);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5aa909:{NFSU2_TR(0x5aa909);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5aa90c:{NFSU2_TR(0x5aa90c);
if(r1(R+514)){{goto L5aa951;}}
}
B5aa90e:L5aa90e:{c.instructions+=5;NFSU2_TR(0x5aa90e);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa912:{NFSU2_TR(0x5aa912);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5aa918:{NFSU2_TR(0x5aa918);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5aa91a:{NFSU2_TR(0x5aa91a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5aa91d:{NFSU2_TR(0x5aa91d);
if(r1(R+514)){{goto L5aa951;}}
}
B5aa91f:L5aa91f:{c.instructions+=6;NFSU2_TR(0x5aa91f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5aa923:{NFSU2_TR(0x5aa923);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa924:{NFSU2_TR(0x5aa924);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5aa928:{NFSU2_TR(0x5aa928);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa929:{NFSU2_TR(0x5aa929);
w4(R+4,u32(0x7fc8c0ull));
}
B5aa92e:{NFSU2_TR(0x5aa92e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa933ull));
TAIL_STATIC(0x40c840u,40c);
}
B5aa933:L5aa933:{c.instructions+=7;NFSU2_TR(0x5aa933);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa937:{NFSU2_TR(0x5aa937);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aa93d:{NFSU2_TR(0x5aa93d);
{u32 ea_=u32((r4(R+4)*4u)+u32(8001708u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5aa944:{NFSU2_TR(0x5aa944);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aa947:{NFSU2_TR(0x5aa947);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5aa94b:{NFSU2_TR(0x5aa94b);
{u32 ea_=u32(r4(R+0)+u32(124u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5aa94e:{NFSU2_TR(0x5aa94e);
{u32 ea_=u32(r4(R+0)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aa951:L5aa951:{c.instructions+=3;NFSU2_TR(0x5aa951);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5aa952:{NFSU2_TR(0x5aa952);
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
B5aa955:{NFSU2_TR(0x5aa955);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5aa960:L5aa960:{c.instructions+=10;NFSU2_TR(0x5aa960);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa964:{NFSU2_TR(0x5aa964);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5aa967:{NFSU2_TR(0x5aa967);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5aa96d:{NFSU2_TR(0x5aa96d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa96e:{NFSU2_TR(0x5aa96e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa96f:{NFSU2_TR(0x5aa96f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa970:{NFSU2_TR(0x5aa970);
__builtin_memmove((R+24),(R+4),4);
}
B5aa972:{NFSU2_TR(0x5aa972);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5aa974:{NFSU2_TR(0x5aa974);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5aa977:{NFSU2_TR(0x5aa977);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5aa983;}}
}
B5aa979:L5aa979:{c.instructions+=3;NFSU2_TR(0x5aa979);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aa97d:{NFSU2_TR(0x5aa97d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aa981:{NFSU2_TR(0x5aa981);
{goto L5aa993;}
}
B5aa983:L5aa983:{c.instructions+=4;NFSU2_TR(0x5aa983);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aa986:{NFSU2_TR(0x5aa986);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa989:{NFSU2_TR(0x5aa989);
{u32 ea_=u32(u32(8002856u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5aa98f:{NFSU2_TR(0x5aa98f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aa993:L5aa993:{c.instructions+=3;NFSU2_TR(0x5aa993);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5aa997:{NFSU2_TR(0x5aa997);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5aa99a:{NFSU2_TR(0x5aa99a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5aaaef;}}
}
B5aa9a0:L5aa9a0:{c.instructions+=4;NFSU2_TR(0x5aa9a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5aa9a3:{NFSU2_TR(0x5aa9a3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5aa9a6:{NFSU2_TR(0x5aa9a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5aa9ad:{NFSU2_TR(0x5aa9ad);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5aa9bb;}}
}
B5aa9af:L5aa9af:{c.instructions+=2;NFSU2_TR(0x5aa9af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5aa9b6:{NFSU2_TR(0x5aa9b6);
{goto L5aaad4;}
}
B5aa9bb:L5aa9bb:{c.instructions+=2;NFSU2_TR(0x5aa9bb);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5aa9bf:{NFSU2_TR(0x5aa9bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5aacc5;}}
}
B5aa9c5:L5aa9c5:{c.instructions+=5;NFSU2_TR(0x5aa9c5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa9c6:{NFSU2_TR(0x5aa9c6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa9c8:{NFSU2_TR(0x5aa9c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa9c9:{NFSU2_TR(0x5aa9c9);
__builtin_memmove((R+4),(R+24),4);
}
B5aa9cb:{NFSU2_TR(0x5aa9cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa9d0ull));
TAIL_STATIC(0x594670u,594);
}
B5aa9d0:L5aa9d0:{c.instructions+=7;NFSU2_TR(0x5aa9d0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aa9d4:{NFSU2_TR(0x5aa9d4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5aa9d7:{NFSU2_TR(0x5aa9d7);
{u32 ea_=u32(r4(R+24)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa9da:{NFSU2_TR(0x5aa9da);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5aa9e1:{NFSU2_TR(0x5aa9e1);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aa9e5:{NFSU2_TR(0x5aa9e5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aa9eb:{NFSU2_TR(0x5aa9eb);
if(r1(R+518)){{goto L5aaa14;}}
}
B5aa9ed:L5aa9ed:{c.instructions+=7;NFSU2_TR(0x5aa9ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5aa9f0:{NFSU2_TR(0x5aa9f0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5aa9f2:{NFSU2_TR(0x5aa9f2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa9f4:{NFSU2_TR(0x5aa9f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B5aa9f7:{NFSU2_TR(0x5aa9f7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aa9f8:{NFSU2_TR(0x5aa9f8);
__builtin_memmove((R+4),(R+24),4);
}
B5aa9fa:{NFSU2_TR(0x5aa9fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aa9ffull));
TAIL_STATIC(0x594670u,594);
}
B5aa9ff:L5aa9ff:{c.instructions+=6;NFSU2_TR(0x5aa9ff);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aaa03:{NFSU2_TR(0x5aaa03);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5aaa06:{NFSU2_TR(0x5aaa06);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5aaa0a:{NFSU2_TR(0x5aaa0a);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5aaa0c:{NFSU2_TR(0x5aaa0c);
{u32 ea_=u32(u32(7908012u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5aaa12:{NFSU2_TR(0x5aaa12);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5aaa40;}}
}
B5aaa14:L5aaa14:{c.instructions+=6;NFSU2_TR(0x5aaa14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aaa17:{NFSU2_TR(0x5aaa17);
{u32 ea_=u32(r4(R+4)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aaa1a:{NFSU2_TR(0x5aaa1a);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5aaa20:{NFSU2_TR(0x5aaa20);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5aaa22:{NFSU2_TR(0x5aaa22);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5aaa25:{NFSU2_TR(0x5aaa25);
if(r1(R+514)){{goto L5aaa38;}}
}
B5aaa27:L5aaa27:{c.instructions+=5;NFSU2_TR(0x5aaa27);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aaa2a:{NFSU2_TR(0x5aaa2a);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aaa2c:{NFSU2_TR(0x5aaa2c);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5aaa32:{NFSU2_TR(0x5aaa32);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aaa36:{NFSU2_TR(0x5aaa36);
{goto L5aaa40;}
}
B5aaa38:L5aaa38:{c.instructions+=1;NFSU2_TR(0x5aaa38);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5aaa40:L5aaa40:{c.instructions+=5;NFSU2_TR(0x5aaa40);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aaa44:{NFSU2_TR(0x5aaa44);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5aaa48:{NFSU2_TR(0x5aaa48);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5aaa4a:{NFSU2_TR(0x5aaa4a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5aaa4d:{NFSU2_TR(0x5aaa4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5aaaab;}}
}
B5aaa4f:L5aaa4f:{c.instructions+=5;NFSU2_TR(0x5aaa4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aaa52:{NFSU2_TR(0x5aaa52);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5aaa55:{NFSU2_TR(0x5aaa55);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5aaa56:{NFSU2_TR(0x5aaa56);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5aaa58:{NFSU2_TR(0x5aaa58);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5aaaab;}}
}
B5aaa5a:L5aaa5a:{c.instructions+=5;NFSU2_TR(0x5aaa5a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5aaa5c:{NFSU2_TR(0x5aaa5c);
w4(R+8,u32(0x1ull));
}
B5aaa61:{NFSU2_TR(0x5aaa61);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5aaa64:{NFSU2_TR(0x5aaa64);
w4(R+12,u32(0x4ull));
}
B5aaa69:{NFSU2_TR(0x5aaa69);
__builtin_memmove((R+16),(R+16),4);
}
B5aaa70:L5aaa70:{c.instructions+=3;NFSU2_TR(0x5aaa70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5aaa72:{NFSU2_TR(0x5aaa72);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5aaa79:{NFSU2_TR(0x5aaa79);
if(r1(R+518)){{goto L5aaa95;}}
}
B5aaa7b:L5aaa7b:{c.instructions+=5;NFSU2_TR(0x5aaa7b);
{u32 ea_=u32(r4(R+0)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aaa81:{NFSU2_TR(0x5aaa81);
{u32 ea_=u32(u32(7881976u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5aaa87:{NFSU2_TR(0x5aaa87);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5aaa89:{NFSU2_TR(0x5aaa89);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5aaa8c:{NFSU2_TR(0x5aaa8c);
if(r1(R+514)){{goto L5aaa95;}}
}
B5aaa8e:L5aaa8e:{c.instructions+=2;NFSU2_TR(0x5aaa8e);
w4(R+0,u32(0x1ull));
}
B5aaa93:{NFSU2_TR(0x5aaa93);
{goto L5aaa97;}
}
B5aaa95:L5aaa95:{c.instructions+=1;NFSU2_TR(0x5aaa95);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5aaa97:L5aaa97:{c.instructions+=4;NFSU2_TR(0x5aaa97);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
}
B5aaa99:{NFSU2_TR(0x5aaa99);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5aaa9c:{NFSU2_TR(0x5aaa9c);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B5aaa9d:{NFSU2_TR(0x5aaa9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5aaa70u);}goto L5aaa70;}}
}
B5aaa9f:L5aaa9f:{c.instructions+=2;NFSU2_TR(0x5aaa9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5aaaa1:{NFSU2_TR(0x5aaaa1);
if(r1(R+518)){{goto L5aaad3;}}
}
B5aaaa3:L5aaaa3:{c.instructions+=3;NFSU2_TR(0x5aaaa3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5aaaa6:{NFSU2_TR(0x5aaaa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aaaa9:{NFSU2_TR(0x5aaaa9);
{goto L5aaad3;}
}
B5aaaab:L5aaaab:{c.instructions+=5;NFSU2_TR(0x5aaaab);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aaaaf:{NFSU2_TR(0x5aaaaf);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5aaab3:{NFSU2_TR(0x5aaab3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5aaab5:{NFSU2_TR(0x5aaab5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5aaab8:{NFSU2_TR(0x5aaab8);
if(r1(R+514)){{goto L5aaad1;}}
}
B5aaaba:L5aaaba:{c.instructions+=6;NFSU2_TR(0x5aaaba);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aaabe:{NFSU2_TR(0x5aaabe);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5aaac0:{NFSU2_TR(0x5aaac0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5aaac2:{NFSU2_TR(0x5aaac2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5aaac4:{NFSU2_TR(0x5aaac4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5aaac7:{NFSU2_TR(0x5aaac7);
if(r1(R+514)){{goto L5aaad3;}}
}
B5aaac9:L5aaac9:{c.instructions+=3;NFSU2_TR(0x5aaac9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B5aaacc:{NFSU2_TR(0x5aaacc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aaacf:{NFSU2_TR(0x5aaacf);
{goto L5aaad3;}
}
B5aaad1:L5aaad1:{c.instructions+=1;NFSU2_TR(0x5aaad1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5aaad3:L5aaad3:{c.instructions+=1;NFSU2_TR(0x5aaad3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5aaad4:L5aaad4:{c.instructions+=2;NFSU2_TR(0x5aaad4);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5aaad8:{NFSU2_TR(0x5aaad8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5aacc5;}}
}
B5aaade:L5aaade:{c.instructions+=2;NFSU2_TR(0x5aaade);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+28)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5aaae1:{NFSU2_TR(0x5aaae1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5aacc5;}}
}
B5aaae7:L5aaae7:{c.instructions+=2;NFSU2_TR(0x5aaae7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5aaaea:{NFSU2_TR(0x5aaaea);
{goto L5aacb7;}
}
B5aaaef:L5aaaef:{c.instructions+=2;NFSU2_TR(0x5aaaef);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffeull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5aaaf2:{NFSU2_TR(0x5aaaf2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5aac3c;}}
}
B5aaaf8:L5aaaf8:{c.instructions+=7;NFSU2_TR(0x5aaaf8);
{u32 ea_=u32(u32(8802644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aaafe:{NFSU2_TR(0x5aaafe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aab01:{NFSU2_TR(0x5aab01);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5aab04:{NFSU2_TR(0x5aab04);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5aab07:{NFSU2_TR(0x5aab07);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5aab0b:{NFSU2_TR(0x5aab0b);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aab0e:{NFSU2_TR(0x5aab0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5aacc5;}}
}
B5aab14:L5aab14:{c.instructions+=9;NFSU2_TR(0x5aab14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5aab17:{NFSU2_TR(0x5aab17);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aab1a:{NFSU2_TR(0x5aab1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5aab1c:{NFSU2_TR(0x5aab1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aab1f:{NFSU2_TR(0x5aab1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aab23:{NFSU2_TR(0x5aab23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aab26:{NFSU2_TR(0x5aab26);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5aab29:{NFSU2_TR(0x5aab29);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aab2d:{NFSU2_TR(0x5aab2d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5aab46;}}
}
B5aab2f:L5aab2f:{c.instructions+=6;NFSU2_TR(0x5aab2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aab32:{NFSU2_TR(0x5aab32);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aab36:{NFSU2_TR(0x5aab36);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5aab3a:{NFSU2_TR(0x5aab3a);
{u32 ea_=u32(u32(8372268u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5aab40:{NFSU2_TR(0x5aab40);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5aab44:{NFSU2_TR(0x5aab44);
{goto L5aab68;}
}
B5aab46:L5aab46:{c.instructions+=5;NFSU2_TR(0x5aab46);
{u32 ea_=u32(r4(R+8)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aab49:{NFSU2_TR(0x5aab49);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5aab4f:{NFSU2_TR(0x5aab4f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5aab51:{NFSU2_TR(0x5aab51);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5aab54:{NFSU2_TR(0x5aab54);
if(r1(R+514)){{goto L5aab62;}}
}
B5aab56:L5aab56:{c.instructions+=3;NFSU2_TR(0x5aab56);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aab5a:{NFSU2_TR(0x5aab5a);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5aab60:{NFSU2_TR(0x5aab60);
{goto L5aab68;}
}
B5aab62:L5aab62:{c.instructions+=1;NFSU2_TR(0x5aab62);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aab68:L5aab68:{c.instructions+=4;NFSU2_TR(0x5aab68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aab6b:{NFSU2_TR(0x5aab6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5aab6e:{NFSU2_TR(0x5aab6e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5aab70:{NFSU2_TR(0x5aab70);
if(r1(R+518)){{goto L5aac01;}}
}
B5aab76:L5aab76:{c.instructions+=2;NFSU2_TR(0x5aab76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aab79:{NFSU2_TR(0x5aab79);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5aabb1;}}
}
B5aab7b:L5aab7b:{c.instructions+=7;NFSU2_TR(0x5aab7b);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aab7f:{NFSU2_TR(0x5aab7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5aab86:{NFSU2_TR(0x5aab86);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5aab88:{NFSU2_TR(0x5aab88);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5aab8a:{NFSU2_TR(0x5aab8a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5aab8c:{NFSU2_TR(0x5aab8c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5aab8f:{NFSU2_TR(0x5aab8f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5aaba2;}}
}
B5aab91:L5aab91:{c.instructions+=8;NFSU2_TR(0x5aab91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5aab92:{NFSU2_TR(0x5aab92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aab95:{NFSU2_TR(0x5aab95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aab98:{NFSU2_TR(0x5aab98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5aab99:{NFSU2_TR(0x5aab99);
__builtin_memmove((R+0),(R+20),4);
}
B5aab9b:{NFSU2_TR(0x5aab9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5aab9c:{NFSU2_TR(0x5aab9c);
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
B5aab9f:{NFSU2_TR(0x5aab9f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5aaba2:L5aaba2:{c.instructions+=8;NFSU2_TR(0x5aaba2);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B5aaba3:{NFSU2_TR(0x5aaba3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5aaba4:{NFSU2_TR(0x5aaba4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aaba7:{NFSU2_TR(0x5aaba7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5aaba8:{NFSU2_TR(0x5aaba8);
__builtin_memmove((R+0),(R+20),4);
}
B5aabaa:{NFSU2_TR(0x5aabaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5aabab:{NFSU2_TR(0x5aabab);
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
B5aabae:{NFSU2_TR(0x5aabae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5aabb1:L5aabb1:{c.instructions+=3;NFSU2_TR(0x5aabb1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5aabb3:{NFSU2_TR(0x5aabb3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5aabb5:{NFSU2_TR(0x5aabb5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5aabcd;}}
}
B5aabb7:L5aabb7:{c.instructions+=9;NFSU2_TR(0x5aabb7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5aabb8:{NFSU2_TR(0x5aabb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5aabb9:{NFSU2_TR(0x5aabb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aabbc:{NFSU2_TR(0x5aabbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5aabc3:{NFSU2_TR(0x5aabc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5aabc4:{NFSU2_TR(0x5aabc4);
__builtin_memmove((R+0),(R+20),4);
}
B5aabc6:{NFSU2_TR(0x5aabc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5aabc7:{NFSU2_TR(0x5aabc7);
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
B5aabca:{NFSU2_TR(0x5aabca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5aabcd:L5aabcd:{c.instructions+=6;NFSU2_TR(0x5aabcd);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aabd1:{NFSU2_TR(0x5aabd1);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5aabd7:{NFSU2_TR(0x5aabd7);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5aabdb:{NFSU2_TR(0x5aabdb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5aabdd:{NFSU2_TR(0x5aabdd);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5aabe0:{NFSU2_TR(0x5aabe0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5aacc5;}}
}
B5aabe6:L5aabe6:{c.instructions+=2;NFSU2_TR(0x5aabe6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5aabe9:{NFSU2_TR(0x5aabe9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5aacc5;}}
}
B5aabef:L5aabef:{c.instructions+=2;NFSU2_TR(0x5aabef);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B5aabf0:{NFSU2_TR(0x5aabf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aabf3:L5aabf3:{c.instructions+=7;NFSU2_TR(0x5aabf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5aabf4:{NFSU2_TR(0x5aabf4);
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
}
B5aabf7:{NFSU2_TR(0x5aabf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5aabf8:{NFSU2_TR(0x5aabf8);
__builtin_memmove((R+0),(R+20),4);
}
B5aabfa:{NFSU2_TR(0x5aabfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5aabfb:{NFSU2_TR(0x5aabfb);
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
B5aabfe:{NFSU2_TR(0x5aabfe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5aac01:L5aac01:{c.instructions+=6;NFSU2_TR(0x5aac01);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5aac03:{NFSU2_TR(0x5aac03);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aac07:{NFSU2_TR(0x5aac07);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5aac0d:{NFSU2_TR(0x5aac0d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5aac0f:{NFSU2_TR(0x5aac0f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5aac12:{NFSU2_TR(0x5aac12);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5aabf3u);}goto L5aabf3;}}
}
B5aac14:L5aac14:{c.instructions+=2;NFSU2_TR(0x5aac14);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5aac17:{NFSU2_TR(0x5aac17);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5aabcdu);}goto L5aabcd;}}
}
B5aac19:L5aac19:{c.instructions+=6;NFSU2_TR(0x5aac19);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aac1d:{NFSU2_TR(0x5aac1d);
{u32 ea_=u32(u32(7885480u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5aac23:{NFSU2_TR(0x5aac23);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5aac27:{NFSU2_TR(0x5aac27);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5aac29:{NFSU2_TR(0x5aac29);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5aac2c:{NFSU2_TR(0x5aac2c);
if(r1(R+514)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5aabcdu);}goto L5aabcd;}}
}
B5aac2e:L5aac2e:{c.instructions+=7;NFSU2_TR(0x5aac2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5aac2f:{NFSU2_TR(0x5aac2f);
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
}
B5aac32:{NFSU2_TR(0x5aac32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5aac33:{NFSU2_TR(0x5aac33);
__builtin_memmove((R+0),(R+20),4);
}
B5aac35:{NFSU2_TR(0x5aac35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5aac36:{NFSU2_TR(0x5aac36);
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
B5aac39:{NFSU2_TR(0x5aac39);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5aac3c:L5aac3c:{c.instructions+=2;NFSU2_TR(0x5aac3c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5aac40:{NFSU2_TR(0x5aac40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5aaca1;}}
}
B5aac42:L5aac42:{c.instructions+=3;NFSU2_TR(0x5aac42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aac45:{NFSU2_TR(0x5aac45);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5aac47:{NFSU2_TR(0x5aac47);
if(r1(R+518)){{goto L5aaca1;}}
}
B5aac49:L5aac49:{c.instructions+=4;NFSU2_TR(0x5aac49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5aac4c:{NFSU2_TR(0x5aac4c);
w4(R+4,u32(0x1ull));
}
B5aac51:{NFSU2_TR(0x5aac51);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5aac53:{NFSU2_TR(0x5aac53);
if(r1(R+518)){{goto L5aac76;}}
}
B5aac55:L5aac55:{c.instructions+=10;NFSU2_TR(0x5aac55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5aac5c:{NFSU2_TR(0x5aac5c);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5aac62:{NFSU2_TR(0x5aac62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5aac63:{NFSU2_TR(0x5aac63);
__builtin_memmove((R+20),(R+0),4);
}
B5aac65:{NFSU2_TR(0x5aac65);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5aac6b:{NFSU2_TR(0x5aac6b);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aac6e:{NFSU2_TR(0x5aac6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5aac6f:{NFSU2_TR(0x5aac6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5aac70:{NFSU2_TR(0x5aac70);
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
B5aac73:{NFSU2_TR(0x5aac73);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5aac76:L5aac76:{c.instructions+=3;NFSU2_TR(0x5aac76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5aac79:{NFSU2_TR(0x5aac79);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5aac7b:{NFSU2_TR(0x5aac7b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5aacc5;}}
}
B5aac7d:L5aac7d:{c.instructions+=4;NFSU2_TR(0x5aac7d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5aac7f:{NFSU2_TR(0x5aac7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aac82:{NFSU2_TR(0x5aac82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aac85:{NFSU2_TR(0x5aac85);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5aacc5;}}
}
B5aac87:L5aac87:{c.instructions+=2;NFSU2_TR(0x5aac87);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5aac89:{NFSU2_TR(0x5aac89);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5aacc5;}}
}
B5aac8b:L5aac8b:{c.instructions+=4;NFSU2_TR(0x5aac8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aac8e:{NFSU2_TR(0x5aac8e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aac8f:{NFSU2_TR(0x5aac8f);
__builtin_memmove((R+4),(R+24),4);
}
B5aac91:{NFSU2_TR(0x5aac91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aac96ull));
TAIL_STATIC(0x5a1700u,5a1);
}
B5aac96:L5aac96:{c.instructions+=6;NFSU2_TR(0x5aac96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5aac97:{NFSU2_TR(0x5aac97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5aac98:{NFSU2_TR(0x5aac98);
__builtin_memmove((R+0),(R+20),4);
}
B5aac9a:{NFSU2_TR(0x5aac9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5aac9b:{NFSU2_TR(0x5aac9b);
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
B5aac9e:{NFSU2_TR(0x5aac9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5aaca1:L5aaca1:{c.instructions+=3;NFSU2_TR(0x5aaca1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aaca4:{NFSU2_TR(0x5aaca4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5aaca6:{NFSU2_TR(0x5aaca6);
if(r1(R+518)){{goto L5aacc5;}}
}
B5aaca8:L5aaca8:{c.instructions+=2;NFSU2_TR(0x5aaca8);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5aacab:{NFSU2_TR(0x5aacab);
if(r1(R+518)){{goto L5aacc5;}}
}
B5aacad:L5aacad:{c.instructions+=3;NFSU2_TR(0x5aacad);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5aacaf:{NFSU2_TR(0x5aacaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aacb2:{NFSU2_TR(0x5aacb2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5aacc5;}}
}
B5aacb4:L5aacb4:{c.instructions+=1;NFSU2_TR(0x5aacb4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5aacb7:L5aacb7:{c.instructions+=1;NFSU2_TR(0x5aacb7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5aacc5;}}
}
B5aacb9:L5aacb9:{c.instructions+=4;NFSU2_TR(0x5aacb9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5aacbd:{NFSU2_TR(0x5aacbd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aacbe:{NFSU2_TR(0x5aacbe);
__builtin_memmove((R+4),(R+24),4);
}
B5aacc0:{NFSU2_TR(0x5aacc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aacc5ull));
TAIL_STATIC(0x5a1700u,5a1);
}
B5aacc5:L5aacc5:{c.instructions+=6;NFSU2_TR(0x5aacc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5aacc6:{NFSU2_TR(0x5aacc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5aacc7:{NFSU2_TR(0x5aacc7);
__builtin_memmove((R+0),(R+20),4);
}
B5aacc9:{NFSU2_TR(0x5aacc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5aacca:{NFSU2_TR(0x5aacca);
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
B5aaccd:{NFSU2_TR(0x5aaccd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5aacd0:L5aacd0:{c.instructions+=3;NFSU2_TR(0x5aacd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aacd3:{NFSU2_TR(0x5aacd3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5aacd4:{NFSU2_TR(0x5aacd4);
if(r1(R+518)){{goto L5aad14;}}
}
B5aacd6:L5aacd6:{c.instructions+=2;NFSU2_TR(0x5aacd6);
w1(R+512,u8((r4(R+0))<(u32(0x2ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5aacd9:{NFSU2_TR(0x5aacd9);
if(r1(R+518)){{goto L5aad0f;}}
}
B5aacdb:L5aacdb:{c.instructions+=2;NFSU2_TR(0x5aacdb);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5aacdc:{NFSU2_TR(0x5aacdc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5aad0c;}}
}
B5aacde:L5aacde:{c.instructions+=16;NFSU2_TR(0x5aacde);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aace1:{NFSU2_TR(0x5aace1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5aace4:{NFSU2_TR(0x5aace4);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aace7:{NFSU2_TR(0x5aace7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aaceb:{NFSU2_TR(0x5aaceb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5aaced:{NFSU2_TR(0x5aaced);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5aacef:{NFSU2_TR(0x5aacef);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aacf2:{NFSU2_TR(0x5aacf2);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aacf5:{NFSU2_TR(0x5aacf5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aacf9:{NFSU2_TR(0x5aacf9);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aacfc:{NFSU2_TR(0x5aacfc);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aacff:{NFSU2_TR(0x5aacff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aad02:{NFSU2_TR(0x5aad02);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5aad04:{NFSU2_TR(0x5aad04);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5aad06:{NFSU2_TR(0x5aad06);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aad09:{NFSU2_TR(0x5aad09);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aad0c:L5aad0c:{c.instructions+=1;NFSU2_TR(0x5aad0c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5aad0f:L5aad0f:{c.instructions+=1;NFSU2_TR(0x5aad0f);
TAIL_STATIC(0x592910u,592);
}
B5aad14:L5aad14:{c.instructions+=1;NFSU2_TR(0x5aad14);
TAIL_STATIC(0x5a19f0u,5a1);
}
B5aad20:L5aad20:{c.instructions+=4;NFSU2_TR(0x5aad20);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aad23:{NFSU2_TR(0x5aad23);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5aad24:{NFSU2_TR(0x5aad24);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5aad27:{NFSU2_TR(0x5aad27);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5aad6e;}}
}
B5aad29:L5aad29:{c.instructions+=1;NFSU2_TR(0x5aad29);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5aad78ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5aad30:L5aad30:{c.instructions+=1;NFSU2_TR(0x5aad30);
TAIL_STATIC(0x5a1970u,5a1);
}
B5aad35:L5aad35:{c.instructions+=12;NFSU2_TR(0x5aad35);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aad38:{NFSU2_TR(0x5aad38);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aad3c:{NFSU2_TR(0x5aad3c);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aad3f:{NFSU2_TR(0x5aad3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5aad42:{NFSU2_TR(0x5aad42);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5aad44:{NFSU2_TR(0x5aad44);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aad47:{NFSU2_TR(0x5aad47);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aad4a:{NFSU2_TR(0x5aad4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5aad51:{NFSU2_TR(0x5aad51);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aad54:{NFSU2_TR(0x5aad54);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5aad58:{NFSU2_TR(0x5aad58);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5aad5c:{NFSU2_TR(0x5aad5c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5aad5f:L5aad5f:{c.instructions+=1;NFSU2_TR(0x5aad5f);
TAIL_STATIC(0x5987d0u,598);
}
B5aad64:L5aad64:{c.instructions+=1;NFSU2_TR(0x5aad64);
TAIL_STATIC(0x5a2010u,5a2);
}
B5aad69:L5aad69:{c.instructions+=1;NFSU2_TR(0x5aad69);
TAIL_STATIC(0x5a2780u,5a2);
}
B5aad6e:L5aad6e:{c.instructions+=2;NFSU2_TR(0x5aad6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aad72:{NFSU2_TR(0x5aad72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5aad90:L5aad90:{c.instructions+=5;NFSU2_TR(0x5aad90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aad91:{NFSU2_TR(0x5aad91);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aad92:{NFSU2_TR(0x5aad92);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aad93:{NFSU2_TR(0x5aad93);
__builtin_memmove((R+24),(R+4),4);
}
B5aad95:{NFSU2_TR(0x5aad95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aad9aull));
TAIL_STATIC(0x43bdf0u,43b);
}
B5aad9a:L5aad9a:{c.instructions+=7;NFSU2_TR(0x5aad9a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aada0:{NFSU2_TR(0x5aada0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aada3:{NFSU2_TR(0x5aada3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aada9:{NFSU2_TR(0x5aada9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5aadab:{NFSU2_TR(0x5aadab);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5aadad:{NFSU2_TR(0x5aadad);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aadb1:{NFSU2_TR(0x5aadb1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5aae51;}}
}
B5aadb7:L5aadb7:{c.instructions+=4;NFSU2_TR(0x5aadb7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x350ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5aadbd:{NFSU2_TR(0x5aadbd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5aadbf:{NFSU2_TR(0x5aadbf);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5aadc1:{NFSU2_TR(0x5aadc1);
if(r1(R+518)){{goto L5aadd7;}}
}
B5aadc3:L5aadc3:{c.instructions+=4;NFSU2_TR(0x5aadc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x354ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aadc9:{NFSU2_TR(0x5aadc9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x98ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5aadcf:{NFSU2_TR(0x5aadcf);
{u32 ea_=u32(r4(R+4)+u32(8392464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aadd5:{NFSU2_TR(0x5aadd5);
{goto L5aaddd;}
}
B5aadd7:L5aadd7:{c.instructions+=1;NFSU2_TR(0x5aadd7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aaddd:L5aaddd:{c.instructions+=2;NFSU2_TR(0x5aaddd);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x351ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5aade3:{NFSU2_TR(0x5aade3);
if(r1(R+518)){{goto L5aadf9;}}
}
B5aade5:L5aade5:{c.instructions+=4;NFSU2_TR(0x5aade5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x358ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5aadeb:{NFSU2_TR(0x5aadeb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x98ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5aadf1:{NFSU2_TR(0x5aadf1);
{u32 ea_=u32(r4(R+8)+u32(8392464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aadf7:{NFSU2_TR(0x5aadf7);
{goto L5aadff;}
}
B5aadf9:L5aadf9:{c.instructions+=1;NFSU2_TR(0x5aadf9);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aadff:L5aadff:{c.instructions+=4;NFSU2_TR(0x5aadff);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x352ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5aae05:{NFSU2_TR(0x5aae05);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5aae07:{NFSU2_TR(0x5aae07);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5aae09:{NFSU2_TR(0x5aae09);
if(r1(R+518)){{goto L5aae1f;}}
}
B5aae0b:L5aae0b:{c.instructions+=4;NFSU2_TR(0x5aae0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x35cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aae11:{NFSU2_TR(0x5aae11);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x98ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5aae17:{NFSU2_TR(0x5aae17);
{u32 ea_=u32(r4(R+4)+u32(8392464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aae1d:{NFSU2_TR(0x5aae1d);
{goto L5aae25;}
}
B5aae1f:L5aae1f:{c.instructions+=1;NFSU2_TR(0x5aae1f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aae25:L5aae25:{c.instructions+=4;NFSU2_TR(0x5aae25);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x353ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5aae2b:{NFSU2_TR(0x5aae2b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5aae2d:{NFSU2_TR(0x5aae2d);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5aae2f:{NFSU2_TR(0x5aae2f);
if(r1(R+518)){{goto L5aae45;}}
}
B5aae31:L5aae31:{c.instructions+=4;NFSU2_TR(0x5aae31);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x360ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5aae37:{NFSU2_TR(0x5aae37);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x98ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5aae3d:{NFSU2_TR(0x5aae3d);
{u32 ea_=u32(r4(R+8)+u32(8392464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aae43:{NFSU2_TR(0x5aae43);
{goto L5aae4b;}
}
B5aae45:L5aae45:{c.instructions+=1;NFSU2_TR(0x5aae45);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aae4b:L5aae4b:{c.instructions+=2;NFSU2_TR(0x5aae4b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5aae4d:{NFSU2_TR(0x5aae4d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xda,0x30"::"a"(ea_):"memory");}
}
B5aae51:L5aae51:{c.instructions+=5;NFSU2_TR(0x5aae51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aae54:{NFSU2_TR(0x5aae54);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5aae5a:{NFSU2_TR(0x5aae5a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5aae5c:{NFSU2_TR(0x5aae5c);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5aae5e:{NFSU2_TR(0x5aae5e);
if(r1(R+518)){{goto L5aae8c;}}
}
B5aae60:L5aae60:{c.instructions+=10;NFSU2_TR(0x5aae60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5aae63:{NFSU2_TR(0x5aae63);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5aae65:{NFSU2_TR(0x5aae65);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aae6b:{NFSU2_TR(0x5aae6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aae6e:{NFSU2_TR(0x5aae6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aae74:{NFSU2_TR(0x5aae74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aae77:{NFSU2_TR(0x5aae77);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x160ull))));
w4(U+4,u32(0x411ccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B5aae81:{NFSU2_TR(0x5aae81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5aae84:{NFSU2_TR(0x5aae84);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aae87:{NFSU2_TR(0x5aae87);
{goto L5aaf25;}
}
B5aae8c:L5aae8c:{c.instructions+=4;NFSU2_TR(0x5aae8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aae8f:{NFSU2_TR(0x5aae8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aae92:{NFSU2_TR(0x5aae92);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5aae94:{NFSU2_TR(0x5aae94);
if(r1(R+518)){{goto L5aaee6;}}
}
B5aae96:L5aae96:{c.instructions+=2;NFSU2_TR(0x5aae96);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5aae97:{NFSU2_TR(0x5aae97);
if(r1(R+518)){{goto L5aaea0;}}
}
B5aae99:L5aae99:{c.instructions+=2;NFSU2_TR(0x5aae99);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5aae9a:{NFSU2_TR(0x5aae9a);
if(r1(R+518)){{goto L5aaee6;}}
}
B5aae9c:L5aae9c:{c.instructions+=2;NFSU2_TR(0x5aae9c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5aae9e:{NFSU2_TR(0x5aae9e);
{goto L5aaf1a;}
}
B5aaea0:L5aaea0:{c.instructions+=17;NFSU2_TR(0x5aaea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5aaea3:{NFSU2_TR(0x5aaea3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5aaea5:{NFSU2_TR(0x5aaea5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aaeab:{NFSU2_TR(0x5aaeab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aaeae:{NFSU2_TR(0x5aaeae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aaeb4:{NFSU2_TR(0x5aaeb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aaeb7:{NFSU2_TR(0x5aaeb7);
__builtin_memmove((R+8),gp(0x7fc084),4);
}
B5aaebd:{NFSU2_TR(0x5aaebd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aaec3:{NFSU2_TR(0x5aaec3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aaec6:{NFSU2_TR(0x5aaec6);
{u32 ea_=u32(r4(R+0)+u32(996u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5aaecc:{NFSU2_TR(0x5aaecc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aaecf:{NFSU2_TR(0x5aaecf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5aaed1:{NFSU2_TR(0x5aaed1);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5aaed7:{NFSU2_TR(0x5aaed7);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aaeda:{NFSU2_TR(0x5aaeda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5aaedd:{NFSU2_TR(0x5aaedd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5aaee4:{NFSU2_TR(0x5aaee4);
{goto L5aaf1a;}
}
B5aaee6:L5aaee6:{c.instructions+=11;NFSU2_TR(0x5aaee6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aaee9:{NFSU2_TR(0x5aaee9);
w4(R+0,u32(0x1ull));
}
B5aaeee:{NFSU2_TR(0x5aaeee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aaef4:{NFSU2_TR(0x5aaef4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5aaef7:{NFSU2_TR(0x5aaef7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aaefd:{NFSU2_TR(0x5aaefd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aaf00:{NFSU2_TR(0x5aaf00);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x160ull))));
w4(U+4,u32(0x411ccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B5aaf0a:{NFSU2_TR(0x5aaf0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5aaf0d:{NFSU2_TR(0x5aaf0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5aaf14:{NFSU2_TR(0x5aaf14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aaf17:{NFSU2_TR(0x5aaf17);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aaf1a:L5aaf1a:{c.instructions+=3;NFSU2_TR(0x5aaf1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5aaf1d:{NFSU2_TR(0x5aaf1d);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5aaf23:{NFSU2_TR(0x5aaf23);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5aaf27;}}
}
B5aaf25:L5aaf25:{c.instructions+=1;NFSU2_TR(0x5aaf25);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5aaf27:L5aaf27:{c.instructions+=3;NFSU2_TR(0x5aaf27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aaf2a:{NFSU2_TR(0x5aaf2a);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5aaf30:{NFSU2_TR(0x5aaf30);
if(r1(R+518)){{goto L5aaf4e;}}
}
B5aaf32:L5aaf32:{c.instructions+=2;NFSU2_TR(0x5aaf32);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5aaf34:{NFSU2_TR(0x5aaf34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5aaf48;}}
}
B5aaf36:L5aaf36:{c.instructions+=4;NFSU2_TR(0x5aaf36);
{u32 ea_=u32(r4(R+4)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aaf3c:{NFSU2_TR(0x5aaf3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5aaf3f:{NFSU2_TR(0x5aaf3f);
{u32 ea_=u32(r4(R+8)+u32(80u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5aaf42:{NFSU2_TR(0x5aaf42);
{u32 ea_=u32(r4(R+4)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aaf48:L5aaf48:{c.instructions+=1;NFSU2_TR(0x5aaf48);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aaf4e:L5aaf4e:{c.instructions+=2;NFSU2_TR(0x5aaf4e);
__builtin_memmove((R+4),(R+24),4);
}
B5aaf50:{NFSU2_TR(0x5aaf50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aaf55ull));
TAIL_STATIC(0x5a29a0u,5a2);
}
B5aaf55:L5aaf55:{c.instructions+=11;NFSU2_TR(0x5aaf55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aaf58:{NFSU2_TR(0x5aaf58);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B5aaf5f:{NFSU2_TR(0x5aaf5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aaf62:{NFSU2_TR(0x5aaf62);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5aaf69:{NFSU2_TR(0x5aaf69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aaf6c:{NFSU2_TR(0x5aaf6c);
{u32 ea_=u32(r4(R+0)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aaf72:{NFSU2_TR(0x5aaf72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aaf75:{NFSU2_TR(0x5aaf75);
{u32 ea_=u32(r4(R+4)+u32(296u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aaf7b:{NFSU2_TR(0x5aaf7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aaf7e:{NFSU2_TR(0x5aaf7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5aaf80:{NFSU2_TR(0x5aaf80);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aaf83ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5aaf83:L5aaf83:{c.instructions+=11;NFSU2_TR(0x5aaf83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aaf86:{NFSU2_TR(0x5aaf86);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aaf8c:{NFSU2_TR(0x5aaf8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aaf8f:{NFSU2_TR(0x5aaf8f);
{u32 ea_=u32(r4(R+0)+u32(532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aaf95:{NFSU2_TR(0x5aaf95);
{u32 ea_=u32(r4(R+0)+u32(528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aaf9b:{NFSU2_TR(0x5aaf9b);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5aafa1:{NFSU2_TR(0x5aafa1);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aafa5:{NFSU2_TR(0x5aafa5);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5aafa9:{NFSU2_TR(0x5aafa9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5aafab:{NFSU2_TR(0x5aafab);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5aafae:{NFSU2_TR(0x5aafae);
if(r1(R+518)){{goto L5aafb6;}}
}
B5aafb0:L5aafb0:{c.instructions+=2;NFSU2_TR(0x5aafb0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5aafb2:{NFSU2_TR(0x5aafb2);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aafb6:L5aafb6:{c.instructions+=20;NFSU2_TR(0x5aafb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5aafb9:{NFSU2_TR(0x5aafb9);
{u32 ea_=u32(r4(R+8)+u32(300u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aafbf:{NFSU2_TR(0x5aafbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aafc2:{NFSU2_TR(0x5aafc2);
{u32 ea_=u32(r4(R+0)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aafc8:{NFSU2_TR(0x5aafc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aafcb:{NFSU2_TR(0x5aafcb);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aafce:{NFSU2_TR(0x5aafce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5aafd1:{NFSU2_TR(0x5aafd1);
{u32 ea_=u32(r4(R+8)+u32(996u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5aafd7:{NFSU2_TR(0x5aafd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aafda:{NFSU2_TR(0x5aafda);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5aafdc:{NFSU2_TR(0x5aafdc);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5aafe2:{NFSU2_TR(0x5aafe2);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aafe5:{NFSU2_TR(0x5aafe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aafe8:{NFSU2_TR(0x5aafe8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x330ull))));
}
B5aafed:{NFSU2_TR(0x5aafed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5aafef:{NFSU2_TR(0x5aafef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aaff2:{NFSU2_TR(0x5aaff2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aaff5:{NFSU2_TR(0x5aaff5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aaff8:{NFSU2_TR(0x5aaff8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5aaffb:{NFSU2_TR(0x5aaffb);
{u32 ea_=u32(r4(R+8)+u32(1128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
TAIL_STATIC(0x5ab001u,5ab);
}
XIT:NFSU2_TR_EXIT(0x5aa,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
