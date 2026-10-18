#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_4ab(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_56e(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5ee(u8* __restrict R,Cpu& c);
u32 body_5ef(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5fe(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4aa,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4aa,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4aa(u8* __restrict R,Cpu& c);
u32 page_4aa(Cpu& c){return body_4aa(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4aa(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4aa001:goto L4aa001;
case 0x4aa003:c.instructions+=2;goto B4aa003;
case 0x4aa005:c.instructions+=1;goto B4aa005;
case 0x4aa00b:goto L4aa00b;
case 0x4aa010:c.instructions+=2;goto B4aa010;
case 0x4aa012:c.instructions+=1;goto B4aa012;
case 0x4aa014:goto L4aa014;
case 0x4aa015:c.instructions+=1;goto B4aa015;
case 0x4aa01a:goto L4aa01a;
case 0x4aa020:c.instructions+=2;goto B4aa020;
case 0x4aa022:c.instructions+=1;goto B4aa022;
case 0x4aa028:goto L4aa028;
case 0x4aa02a:c.instructions+=1;goto B4aa02a;
case 0x4aa030:goto L4aa030;
case 0x4aa035:goto L4aa035;
case 0x4aa038:c.instructions+=2;goto B4aa038;
case 0x4aa03d:c.instructions+=1;goto B4aa03d;
case 0x4aa03f:goto L4aa03f;
case 0x4aa044:goto L4aa044;
case 0x4aa04a:c.instructions+=2;goto B4aa04a;
case 0x4aa04d:c.instructions+=1;goto B4aa04d;
case 0x4aa04f:goto L4aa04f;
case 0x4aa052:c.instructions+=1;goto B4aa052;
case 0x4aa054:goto L4aa054;
case 0x4aa057:c.instructions+=1;goto B4aa057;
case 0x4aa059:goto L4aa059;
case 0x4aa05c:c.instructions+=1;goto B4aa05c;
case 0x4aa05e:goto L4aa05e;
case 0x4aa064:c.instructions+=6;goto B4aa064;
case 0x4aa06a:c.instructions+=5;goto B4aa06a;
case 0x4aa06c:c.instructions+=4;goto B4aa06c;
case 0x4aa06d:c.instructions+=3;goto B4aa06d;
case 0x4aa06e:c.instructions+=2;goto B4aa06e;
case 0x4aa073:c.instructions+=1;goto B4aa073;
case 0x4aa075:goto L4aa075;
case 0x4aa07b:c.instructions+=5;goto B4aa07b;
case 0x4aa081:c.instructions+=4;goto B4aa081;
case 0x4aa083:c.instructions+=3;goto B4aa083;
case 0x4aa084:c.instructions+=2;goto B4aa084;
case 0x4aa085:c.instructions+=1;goto B4aa085;
case 0x4aa08a:goto L4aa08a;
case 0x4aa08f:goto L4aa08f;
case 0x4aa092:c.instructions+=5;goto B4aa092;
case 0x4aa093:c.instructions+=4;goto B4aa093;
case 0x4aa096:c.instructions+=3;goto B4aa096;
case 0x4aa09b:c.instructions+=2;goto B4aa09b;
case 0x4aa09c:c.instructions+=1;goto B4aa09c;
case 0x4aa0a1:goto L4aa0a1;
case 0x4aa0a4:goto L4aa0a4;
case 0x4aa0a7:c.instructions+=2;goto B4aa0a7;
case 0x4aa0a8:c.instructions+=1;goto B4aa0a8;
case 0x4aa0ad:goto L4aa0ad;
case 0x4aa0b0:c.instructions+=4;goto B4aa0b0;
case 0x4aa0b2:c.instructions+=3;goto B4aa0b2;
case 0x4aa0b7:c.instructions+=2;goto B4aa0b7;
case 0x4aa0b8:c.instructions+=1;goto B4aa0b8;
case 0x4aa0bd:goto L4aa0bd;
case 0x4aa0c0:c.instructions+=3;goto B4aa0c0;
case 0x4aa0c7:c.instructions+=2;goto B4aa0c7;
case 0x4aa0c8:c.instructions+=1;goto B4aa0c8;
case 0x4aa0cb:goto L4aa0cb;
case 0x4aa0ce:c.instructions+=2;goto B4aa0ce;
case 0x4aa0cf:c.instructions+=1;goto B4aa0cf;
case 0x4aa0d4:goto L4aa0d4;
case 0x4aa0d7:goto L4aa0d7;
case 0x4aa0d8:c.instructions+=1;goto B4aa0d8;
case 0x4aa0e0:goto L4aa0e0;
case 0x4aa0e4:c.instructions+=6;goto B4aa0e4;
case 0x4aa0e8:c.instructions+=5;goto B4aa0e8;
case 0x4aa0eb:c.instructions+=4;goto B4aa0eb;
case 0x4aa0f1:c.instructions+=3;goto B4aa0f1;
case 0x4aa0f3:c.instructions+=2;goto B4aa0f3;
case 0x4aa0f6:c.instructions+=1;goto B4aa0f6;
case 0x4aa0f8:goto L4aa0f8;
case 0x4aa0fa:c.instructions+=2;goto B4aa0fa;
case 0x4aa100:c.instructions+=1;goto B4aa100;
case 0x4aa102:goto L4aa102;
case 0x4aa108:c.instructions+=3;goto B4aa108;
case 0x4aa10a:c.instructions+=2;goto B4aa10a;
case 0x4aa10d:c.instructions+=1;goto B4aa10d;
case 0x4aa10f:goto L4aa10f;
case 0x4aa111:c.instructions+=1;goto B4aa111;
case 0x4aa117:goto L4aa117;
case 0x4aa11d:c.instructions+=5;goto B4aa11d;
case 0x4aa121:c.instructions+=4;goto B4aa121;
case 0x4aa125:c.instructions+=3;goto B4aa125;
case 0x4aa127:c.instructions+=2;goto B4aa127;
case 0x4aa12a:c.instructions+=1;goto B4aa12a;
case 0x4aa12c:goto L4aa12c;
case 0x4aa132:goto L4aa132;
case 0x4aa134:c.instructions+=4;goto B4aa134;
case 0x4aa13a:c.instructions+=3;goto B4aa13a;
case 0x4aa13c:c.instructions+=2;goto B4aa13c;
case 0x4aa13f:c.instructions+=1;goto B4aa13f;
case 0x4aa141:goto L4aa141;
case 0x4aa147:c.instructions+=1;goto B4aa147;
case 0x4aa148:goto L4aa148;
case 0x4aa14e:c.instructions+=3;goto B4aa14e;
case 0x4aa150:c.instructions+=2;goto B4aa150;
case 0x4aa153:c.instructions+=1;goto B4aa153;
case 0x4aa155:goto L4aa155;
case 0x4aa15b:goto L4aa15b;
case 0x4aa160:goto L4aa160;
case 0x4aa164:c.instructions+=10;goto B4aa164;
case 0x4aa16a:c.instructions+=9;goto B4aa16a;
case 0x4aa170:c.instructions+=8;goto B4aa170;
case 0x4aa174:c.instructions+=7;goto B4aa174;
case 0x4aa178:c.instructions+=6;goto B4aa178;
case 0x4aa17a:c.instructions+=5;goto B4aa17a;
case 0x4aa17e:c.instructions+=4;goto B4aa17e;
case 0x4aa184:c.instructions+=3;goto B4aa184;
case 0x4aa186:c.instructions+=2;goto B4aa186;
case 0x4aa189:c.instructions+=1;goto B4aa189;
case 0x4aa18b:goto L4aa18b;
case 0x4aa191:goto L4aa191;
case 0x4aa197:c.instructions+=3;goto B4aa197;
case 0x4aa199:c.instructions+=2;goto B4aa199;
case 0x4aa19c:c.instructions+=1;goto B4aa19c;
case 0x4aa19e:goto L4aa19e;
case 0x4aa1a4:goto L4aa1a4;
case 0x4aa1b0:goto L4aa1b0;
case 0x4aa1b4:c.instructions+=9;goto B4aa1b4;
case 0x4aa1b7:c.instructions+=8;goto B4aa1b7;
case 0x4aa1b8:c.instructions+=7;goto B4aa1b8;
case 0x4aa1bb:c.instructions+=6;goto B4aa1bb;
case 0x4aa1bc:c.instructions+=5;goto B4aa1bc;
case 0x4aa1bd:c.instructions+=4;goto B4aa1bd;
case 0x4aa1bf:c.instructions+=3;goto B4aa1bf;
case 0x4aa1c5:c.instructions+=2;goto B4aa1c5;
case 0x4aa1c6:c.instructions+=1;goto B4aa1c6;
case 0x4aa1cb:goto L4aa1cb;
case 0x4aa1cd:c.instructions+=2;goto B4aa1cd;
case 0x4aa1cf:c.instructions+=1;goto B4aa1cf;
case 0x4aa1d5:goto L4aa1d5;
case 0x4aa1d8:c.instructions+=7;goto B4aa1d8;
case 0x4aa1db:c.instructions+=6;goto B4aa1db;
case 0x4aa1dd:c.instructions+=5;goto B4aa1dd;
case 0x4aa1e0:c.instructions+=4;goto B4aa1e0;
case 0x4aa1e1:c.instructions+=3;goto B4aa1e1;
case 0x4aa1e4:c.instructions+=2;goto B4aa1e4;
case 0x4aa1e6:c.instructions+=1;goto B4aa1e6;
case 0x4aa1ec:goto L4aa1ec;
case 0x4aa1f0:c.instructions+=2;goto B4aa1f0;
case 0x4aa1f5:c.instructions+=1;goto B4aa1f5;
case 0x4aa1fa:goto L4aa1fa;
case 0x4aa1fc:c.instructions+=1;goto B4aa1fc;
case 0x4aa202:goto L4aa202;
case 0x4aa209:c.instructions+=1;goto B4aa209;
case 0x4aa20f:goto L4aa20f;
case 0x4aa214:c.instructions+=2;goto B4aa214;
case 0x4aa219:c.instructions+=1;goto B4aa219;
case 0x4aa21b:goto L4aa21b;
case 0x4aa220:c.instructions+=1;goto B4aa220;
case 0x4aa222:goto L4aa222;
case 0x4aa225:c.instructions+=5;goto B4aa225;
case 0x4aa228:c.instructions+=4;goto B4aa228;
case 0x4aa229:c.instructions+=3;goto B4aa229;
case 0x4aa22c:c.instructions+=2;goto B4aa22c;
case 0x4aa22e:c.instructions+=1;goto B4aa22e;
case 0x4aa233:goto L4aa233;
case 0x4aa239:c.instructions+=1;goto B4aa239;
case 0x4aa23e:goto L4aa23e;
case 0x4aa241:c.instructions+=4;goto B4aa241;
case 0x4aa242:c.instructions+=3;goto B4aa242;
case 0x4aa247:c.instructions+=2;goto B4aa247;
case 0x4aa248:c.instructions+=1;goto B4aa248;
case 0x4aa24d:goto L4aa24d;
case 0x4aa250:c.instructions+=2;goto B4aa250;
case 0x4aa251:c.instructions+=1;goto B4aa251;
case 0x4aa256:goto L4aa256;
case 0x4aa259:c.instructions+=2;goto B4aa259;
case 0x4aa25a:c.instructions+=1;goto B4aa25a;
case 0x4aa25f:goto L4aa25f;
case 0x4aa262:c.instructions+=2;goto B4aa262;
case 0x4aa263:c.instructions+=1;goto B4aa263;
case 0x4aa268:goto L4aa268;
case 0x4aa26b:c.instructions+=3;goto B4aa26b;
case 0x4aa270:c.instructions+=2;goto B4aa270;
case 0x4aa271:c.instructions+=1;goto B4aa271;
case 0x4aa276:goto L4aa276;
case 0x4aa279:c.instructions+=1;goto B4aa279;
case 0x4aa27e:goto L4aa27e;
case 0x4aa283:c.instructions+=2;goto B4aa283;
case 0x4aa285:c.instructions+=1;goto B4aa285;
case 0x4aa28b:goto L4aa28b;
case 0x4aa28e:c.instructions+=5;goto B4aa28e;
case 0x4aa291:c.instructions+=4;goto B4aa291;
case 0x4aa292:c.instructions+=3;goto B4aa292;
case 0x4aa295:c.instructions+=2;goto B4aa295;
case 0x4aa297:c.instructions+=1;goto B4aa297;
case 0x4aa29c:goto L4aa29c;
case 0x4aa2a2:c.instructions+=1;goto B4aa2a2;
case 0x4aa2a7:goto L4aa2a7;
case 0x4aa2aa:c.instructions+=3;goto B4aa2aa;
case 0x4aa2ab:c.instructions+=2;goto B4aa2ab;
case 0x4aa2ad:c.instructions+=1;goto B4aa2ad;
case 0x4aa2b2:goto L4aa2b2;
case 0x4aa2b5:c.instructions+=3;goto B4aa2b5;
case 0x4aa2ba:c.instructions+=2;goto B4aa2ba;
case 0x4aa2bb:c.instructions+=1;goto B4aa2bb;
case 0x4aa2c0:goto L4aa2c0;
case 0x4aa2c3:c.instructions+=1;goto B4aa2c3;
case 0x4aa2c8:goto L4aa2c8;
case 0x4aa2cb:c.instructions+=3;goto B4aa2cb;
case 0x4aa2cc:c.instructions+=2;goto B4aa2cc;
case 0x4aa2d1:c.instructions+=1;goto B4aa2d1;
case 0x4aa2d3:goto L4aa2d3;
case 0x4aa2d6:c.instructions+=2;goto B4aa2d6;
case 0x4aa2d7:c.instructions+=1;goto B4aa2d7;
case 0x4aa2dc:goto L4aa2dc;
case 0x4aa2df:c.instructions+=2;goto B4aa2df;
case 0x4aa2e0:c.instructions+=1;goto B4aa2e0;
case 0x4aa2e5:goto L4aa2e5;
case 0x4aa2e8:c.instructions+=2;goto B4aa2e8;
case 0x4aa2e9:c.instructions+=1;goto B4aa2e9;
case 0x4aa2ee:goto L4aa2ee;
case 0x4aa2f1:c.instructions+=1;goto B4aa2f1;
case 0x4aa2f6:goto L4aa2f6;
case 0x4aa2f9:c.instructions+=2;goto B4aa2f9;
case 0x4aa2fa:c.instructions+=1;goto B4aa2fa;
case 0x4aa2ff:goto L4aa2ff;
case 0x4aa302:c.instructions+=2;goto B4aa302;
case 0x4aa303:c.instructions+=1;goto B4aa303;
case 0x4aa308:goto L4aa308;
case 0x4aa30b:c.instructions+=2;goto B4aa30b;
case 0x4aa30c:c.instructions+=1;goto B4aa30c;
case 0x4aa311:goto L4aa311;
case 0x4aa314:c.instructions+=1;goto B4aa314;
case 0x4aa319:goto L4aa319;
case 0x4aa31f:c.instructions+=6;goto B4aa31f;
case 0x4aa325:c.instructions+=5;goto B4aa325;
case 0x4aa328:c.instructions+=4;goto B4aa328;
case 0x4aa329:c.instructions+=3;goto B4aa329;
case 0x4aa32e:c.instructions+=2;goto B4aa32e;
case 0x4aa32f:c.instructions+=1;goto B4aa32f;
case 0x4aa334:goto L4aa334;
case 0x4aa337:c.instructions+=2;goto B4aa337;
case 0x4aa338:c.instructions+=1;goto B4aa338;
case 0x4aa33d:goto L4aa33d;
case 0x4aa340:c.instructions+=5;goto B4aa340;
case 0x4aa341:c.instructions+=4;goto B4aa341;
case 0x4aa342:c.instructions+=3;goto B4aa342;
case 0x4aa347:c.instructions+=2;goto B4aa347;
case 0x4aa348:c.instructions+=1;goto B4aa348;
case 0x4aa34d:goto L4aa34d;
case 0x4aa350:c.instructions+=1;goto B4aa350;
case 0x4aa352:goto L4aa352;
case 0x4aa355:c.instructions+=2;goto B4aa355;
case 0x4aa356:c.instructions+=1;goto B4aa356;
case 0x4aa35b:goto L4aa35b;
case 0x4aa35e:c.instructions+=2;goto B4aa35e;
case 0x4aa35f:c.instructions+=1;goto B4aa35f;
case 0x4aa364:goto L4aa364;
case 0x4aa367:c.instructions+=2;goto B4aa367;
case 0x4aa368:c.instructions+=1;goto B4aa368;
case 0x4aa36d:goto L4aa36d;
case 0x4aa370:c.instructions+=2;goto B4aa370;
case 0x4aa371:c.instructions+=1;goto B4aa371;
case 0x4aa376:goto L4aa376;
case 0x4aa379:c.instructions+=2;goto B4aa379;
case 0x4aa37a:c.instructions+=1;goto B4aa37a;
case 0x4aa37f:goto L4aa37f;
case 0x4aa382:c.instructions+=5;goto B4aa382;
case 0x4aa383:c.instructions+=4;goto B4aa383;
case 0x4aa384:c.instructions+=3;goto B4aa384;
case 0x4aa389:c.instructions+=2;goto B4aa389;
case 0x4aa38a:c.instructions+=1;goto B4aa38a;
case 0x4aa38f:goto L4aa38f;
case 0x4aa392:c.instructions+=2;goto B4aa392;
case 0x4aa393:c.instructions+=1;goto B4aa393;
case 0x4aa398:goto L4aa398;
case 0x4aa39b:goto L4aa39b;
case 0x4aa3a2:c.instructions+=4;goto B4aa3a2;
case 0x4aa3aa:c.instructions+=3;goto B4aa3aa;
case 0x4aa3af:c.instructions+=2;goto B4aa3af;
case 0x4aa3b4:c.instructions+=1;goto B4aa3b4;
case 0x4aa3b6:goto L4aa3b6;
case 0x4aa3bb:c.instructions+=2;goto B4aa3bb;
case 0x4aa3bd:c.instructions+=1;goto B4aa3bd;
case 0x4aa3bf:goto L4aa3bf;
case 0x4aa3c4:c.instructions+=1;goto B4aa3c4;
case 0x4aa3c6:goto L4aa3c6;
case 0x4aa3c8:c.instructions+=1;goto B4aa3c8;
case 0x4aa3cd:goto L4aa3cd;
case 0x4aa3cf:c.instructions+=2;goto B4aa3cf;
case 0x4aa3d1:c.instructions+=1;goto B4aa3d1;
case 0x4aa3d7:goto L4aa3d7;
case 0x4aa3dc:c.instructions+=1;goto B4aa3dc;
case 0x4aa3e2:goto L4aa3e2;
case 0x4aa3e4:c.instructions+=1;goto B4aa3e4;
case 0x4aa3e9:goto L4aa3e9;
case 0x4aa3eb:c.instructions+=10;goto B4aa3eb;
case 0x4aa3f0:c.instructions+=9;goto B4aa3f0;
case 0x4aa3f6:c.instructions+=8;goto B4aa3f6;
case 0x4aa3f8:c.instructions+=7;goto B4aa3f8;
case 0x4aa3fa:c.instructions+=6;goto B4aa3fa;
case 0x4aa3fb:c.instructions+=5;goto B4aa3fb;
case 0x4aa3ff:c.instructions+=4;goto B4aa3ff;
case 0x4aa400:c.instructions+=3;goto B4aa400;
case 0x4aa404:c.instructions+=2;goto B4aa404;
case 0x4aa408:c.instructions+=1;goto B4aa408;
case 0x4aa40d:goto L4aa40d;
case 0x4aa410:c.instructions+=5;goto B4aa410;
case 0x4aa414:c.instructions+=4;goto B4aa414;
case 0x4aa415:c.instructions+=3;goto B4aa415;
case 0x4aa41a:c.instructions+=2;goto B4aa41a;
case 0x4aa41b:c.instructions+=1;goto B4aa41b;
case 0x4aa420:goto L4aa420;
case 0x4aa423:c.instructions+=1;goto B4aa423;
case 0x4aa428:goto L4aa428;
case 0x4aa42a:c.instructions+=1;goto B4aa42a;
case 0x4aa42f:goto L4aa42f;
case 0x4aa431:c.instructions+=2;goto B4aa431;
case 0x4aa433:c.instructions+=1;goto B4aa433;
case 0x4aa439:goto L4aa439;
case 0x4aa43e:c.instructions+=1;goto B4aa43e;
case 0x4aa444:goto L4aa444;
case 0x4aa447:c.instructions+=2;goto B4aa447;
case 0x4aa449:c.instructions+=1;goto B4aa449;
case 0x4aa44b:goto L4aa44b;
case 0x4aa451:c.instructions+=3;goto B4aa451;
case 0x4aa454:c.instructions+=2;goto B4aa454;
case 0x4aa456:c.instructions+=1;goto B4aa456;
case 0x4aa45b:goto L4aa45b;
case 0x4aa45d:c.instructions+=5;goto B4aa45d;
case 0x4aa460:c.instructions+=4;goto B4aa460;
case 0x4aa465:c.instructions+=3;goto B4aa465;
case 0x4aa467:c.instructions+=2;goto B4aa467;
case 0x4aa46a:c.instructions+=1;goto B4aa46a;
case 0x4aa46f:goto L4aa46f;
case 0x4aa471:c.instructions+=6;goto B4aa471;
case 0x4aa472:c.instructions+=5;goto B4aa472;
case 0x4aa476:c.instructions+=4;goto B4aa476;
case 0x4aa47a:c.instructions+=3;goto B4aa47a;
case 0x4aa47b:c.instructions+=2;goto B4aa47b;
case 0x4aa47f:c.instructions+=1;goto B4aa47f;
case 0x4aa484:goto L4aa484;
case 0x4aa487:c.instructions+=2;goto B4aa487;
case 0x4aa48b:c.instructions+=1;goto B4aa48b;
case 0x4aa48d:goto L4aa48d;
case 0x4aa490:c.instructions+=2;goto B4aa490;
case 0x4aa492:c.instructions+=1;goto B4aa492;
case 0x4aa494:goto L4aa494;
case 0x4aa497:c.instructions+=3;goto B4aa497;
case 0x4aa49d:c.instructions+=2;goto B4aa49d;
case 0x4aa49f:c.instructions+=1;goto B4aa49f;
case 0x4aa4a1:goto L4aa4a1;
case 0x4aa4a3:c.instructions+=3;goto B4aa4a3;
case 0x4aa4a8:c.instructions+=2;goto B4aa4a8;
case 0x4aa4aa:c.instructions+=1;goto B4aa4aa;
case 0x4aa4af:goto L4aa4af;
case 0x4aa4b1:goto L4aa4b1;
case 0x4aa4b5:goto L4aa4b5;
case 0x4aa4b8:goto L4aa4b8;
case 0x4aa4bb:c.instructions+=9;goto B4aa4bb;
case 0x4aa4c1:c.instructions+=8;goto B4aa4c1;
case 0x4aa4c3:c.instructions+=7;goto B4aa4c3;
case 0x4aa4c7:c.instructions+=6;goto B4aa4c7;
case 0x4aa4cb:c.instructions+=5;goto B4aa4cb;
case 0x4aa4d1:c.instructions+=4;goto B4aa4d1;
case 0x4aa4d7:c.instructions+=3;goto B4aa4d7;
case 0x4aa4d9:c.instructions+=2;goto B4aa4d9;
case 0x4aa4dc:c.instructions+=1;goto B4aa4dc;
case 0x4aa4de:goto L4aa4de;
case 0x4aa4e0:c.instructions+=1;goto B4aa4e0;
case 0x4aa4e5:goto L4aa4e5;
case 0x4aa4eb:c.instructions+=2;goto B4aa4eb;
case 0x4aa4ed:c.instructions+=1;goto B4aa4ed;
case 0x4aa4f0:goto L4aa4f0;
case 0x4aa4f1:c.instructions+=4;goto B4aa4f1;
case 0x4aa4f5:c.instructions+=3;goto B4aa4f5;
case 0x4aa4f6:c.instructions+=2;goto B4aa4f6;
case 0x4aa4f9:c.instructions+=1;goto B4aa4f9;
case 0x4aa4fe:goto L4aa4fe;
case 0x4aa501:c.instructions+=5;goto B4aa501;
case 0x4aa505:c.instructions+=4;goto B4aa505;
case 0x4aa506:c.instructions+=3;goto B4aa506;
case 0x4aa50b:c.instructions+=2;goto B4aa50b;
case 0x4aa50c:c.instructions+=1;goto B4aa50c;
case 0x4aa511:goto L4aa511;
case 0x4aa516:c.instructions+=9;goto B4aa516;
case 0x4aa519:c.instructions+=8;goto B4aa519;
case 0x4aa51d:c.instructions+=7;goto B4aa51d;
case 0x4aa521:c.instructions+=6;goto B4aa521;
case 0x4aa524:c.instructions+=5;goto B4aa524;
case 0x4aa52a:c.instructions+=4;goto B4aa52a;
case 0x4aa530:c.instructions+=3;goto B4aa530;
case 0x4aa532:c.instructions+=2;goto B4aa532;
case 0x4aa535:c.instructions+=1;goto B4aa535;
case 0x4aa537:goto L4aa537;
case 0x4aa53a:c.instructions+=5;goto B4aa53a;
case 0x4aa53e:c.instructions+=4;goto B4aa53e;
case 0x4aa53f:c.instructions+=3;goto B4aa53f;
case 0x4aa544:c.instructions+=2;goto B4aa544;
case 0x4aa545:c.instructions+=1;goto B4aa545;
case 0x4aa54a:goto L4aa54a;
case 0x4aa54d:c.instructions+=3;goto B4aa54d;
case 0x4aa550:c.instructions+=2;goto B4aa550;
case 0x4aa552:c.instructions+=1;goto B4aa552;
case 0x4aa554:goto L4aa554;
case 0x4aa559:c.instructions+=4;goto B4aa559;
case 0x4aa55b:c.instructions+=3;goto B4aa55b;
case 0x4aa55f:c.instructions+=2;goto B4aa55f;
case 0x4aa560:c.instructions+=1;goto B4aa560;
case 0x4aa562:goto L4aa562;
case 0x4aa567:c.instructions+=3;goto B4aa567;
case 0x4aa569:c.instructions+=2;goto B4aa569;
case 0x4aa56d:c.instructions+=1;goto B4aa56d;
case 0x4aa56e:goto L4aa56e;
case 0x4aa573:goto L4aa573;
case 0x4aa576:c.instructions+=6;goto B4aa576;
case 0x4aa579:c.instructions+=5;goto B4aa579;
case 0x4aa57d:c.instructions+=4;goto B4aa57d;
case 0x4aa57e:c.instructions+=3;goto B4aa57e;
case 0x4aa583:c.instructions+=2;goto B4aa583;
case 0x4aa584:c.instructions+=1;goto B4aa584;
case 0x4aa589:goto L4aa589;
case 0x4aa58c:c.instructions+=2;goto B4aa58c;
case 0x4aa58d:c.instructions+=1;goto B4aa58d;
case 0x4aa592:goto L4aa592;
case 0x4aa595:c.instructions+=2;goto B4aa595;
case 0x4aa596:c.instructions+=1;goto B4aa596;
case 0x4aa59b:goto L4aa59b;
case 0x4aa59e:c.instructions+=1;goto B4aa59e;
case 0x4aa5a0:goto L4aa5a0;
case 0x4aa5a3:c.instructions+=2;goto B4aa5a3;
case 0x4aa5a4:c.instructions+=1;goto B4aa5a4;
case 0x4aa5a9:goto L4aa5a9;
case 0x4aa5ac:c.instructions+=2;goto B4aa5ac;
case 0x4aa5ad:c.instructions+=1;goto B4aa5ad;
case 0x4aa5b2:goto L4aa5b2;
case 0x4aa5b4:goto L4aa5b4;
case 0x4aa5ba:c.instructions+=1;goto B4aa5ba;
case 0x4aa5bc:goto L4aa5bc;
case 0x4aa5c3:c.instructions+=1;goto B4aa5c3;
case 0x4aa5c5:goto L4aa5c5;
case 0x4aa5c8:c.instructions+=3;goto B4aa5c8;
case 0x4aa5cd:c.instructions+=2;goto B4aa5cd;
case 0x4aa5ce:c.instructions+=1;goto B4aa5ce;
case 0x4aa5d0:goto L4aa5d0;
case 0x4aa5d3:c.instructions+=2;goto B4aa5d3;
case 0x4aa5d8:c.instructions+=1;goto B4aa5d8;
case 0x4aa5d9:goto L4aa5d9;
case 0x4aa5de:goto L4aa5de;
case 0x4aa5e1:goto L4aa5e1;
case 0x4aa5e3:c.instructions+=1;goto B4aa5e3;
case 0x4aa5e8:goto L4aa5e8;
case 0x4aa5ea:c.instructions+=7;goto B4aa5ea;
case 0x4aa5ee:c.instructions+=6;goto B4aa5ee;
case 0x4aa5f2:c.instructions+=5;goto B4aa5f2;
case 0x4aa5f8:c.instructions+=4;goto B4aa5f8;
case 0x4aa5fe:c.instructions+=3;goto B4aa5fe;
case 0x4aa600:c.instructions+=2;goto B4aa600;
case 0x4aa603:c.instructions+=1;goto B4aa603;
case 0x4aa605:goto L4aa605;
case 0x4aa60a:c.instructions+=4;goto B4aa60a;
case 0x4aa60e:c.instructions+=3;goto B4aa60e;
case 0x4aa610:c.instructions+=2;goto B4aa610;
case 0x4aa611:c.instructions+=1;goto B4aa611;
case 0x4aa616:goto L4aa616;
case 0x4aa619:c.instructions+=1;goto B4aa619;
case 0x4aa61b:goto L4aa61b;
case 0x4aa61c:c.instructions+=4;goto B4aa61c;
case 0x4aa620:c.instructions+=3;goto B4aa620;
case 0x4aa621:c.instructions+=2;goto B4aa621;
case 0x4aa625:c.instructions+=1;goto B4aa625;
case 0x4aa62a:goto L4aa62a;
case 0x4aa62d:c.instructions+=5;goto B4aa62d;
case 0x4aa631:c.instructions+=4;goto B4aa631;
case 0x4aa632:c.instructions+=3;goto B4aa632;
case 0x4aa637:c.instructions+=2;goto B4aa637;
case 0x4aa638:c.instructions+=1;goto B4aa638;
case 0x4aa63d:goto L4aa63d;
case 0x4aa642:c.instructions+=3;goto B4aa642;
case 0x4aa645:c.instructions+=2;goto B4aa645;
case 0x4aa647:c.instructions+=1;goto B4aa647;
case 0x4aa649:goto L4aa649;
case 0x4aa64e:c.instructions+=2;goto B4aa64e;
case 0x4aa650:c.instructions+=1;goto B4aa650;
case 0x4aa652:goto L4aa652;
case 0x4aa659:c.instructions+=1;goto B4aa659;
case 0x4aa65b:goto L4aa65b;
case 0x4aa65e:c.instructions+=2;goto B4aa65e;
case 0x4aa663:c.instructions+=1;goto B4aa663;
case 0x4aa668:goto L4aa668;
case 0x4aa669:c.instructions+=2;goto B4aa669;
case 0x4aa66a:c.instructions+=1;goto B4aa66a;
case 0x4aa66f:goto L4aa66f;
case 0x4aa670:c.instructions+=1;goto B4aa670;
case 0x4aa675:goto L4aa675;
case 0x4aa678:c.instructions+=2;goto B4aa678;
case 0x4aa67d:c.instructions+=1;goto B4aa67d;
case 0x4aa682:goto L4aa682;
case 0x4aa683:c.instructions+=2;goto B4aa683;
case 0x4aa684:c.instructions+=1;goto B4aa684;
case 0x4aa689:goto L4aa689;
case 0x4aa68a:c.instructions+=1;goto B4aa68a;
case 0x4aa68f:goto L4aa68f;
case 0x4aa692:c.instructions+=2;goto B4aa692;
case 0x4aa697:c.instructions+=1;goto B4aa697;
case 0x4aa69c:goto L4aa69c;
case 0x4aa69d:c.instructions+=2;goto B4aa69d;
case 0x4aa69e:c.instructions+=1;goto B4aa69e;
case 0x4aa6a3:goto L4aa6a3;
case 0x4aa6a4:c.instructions+=1;goto B4aa6a4;
case 0x4aa6a9:goto L4aa6a9;
case 0x4aa6ac:goto L4aa6ac;
case 0x4aa6b2:c.instructions+=1;goto B4aa6b2;
case 0x4aa6b4:goto L4aa6b4;
case 0x4aa6bb:c.instructions+=1;goto B4aa6bb;
case 0x4aa6bd:goto L4aa6bd;
case 0x4aa6c2:c.instructions+=1;goto B4aa6c2;
case 0x4aa6c7:goto L4aa6c7;
case 0x4aa6c9:c.instructions+=1;goto B4aa6c9;
case 0x4aa6cb:goto L4aa6cb;
case 0x4aa6cf:c.instructions+=4;goto B4aa6cf;
case 0x4aa6d0:c.instructions+=3;goto B4aa6d0;
case 0x4aa6d4:c.instructions+=2;goto B4aa6d4;
case 0x4aa6d5:c.instructions+=1;goto B4aa6d5;
case 0x4aa6da:goto L4aa6da;
case 0x4aa6dd:c.instructions+=5;goto B4aa6dd;
case 0x4aa6e1:c.instructions+=4;goto B4aa6e1;
case 0x4aa6e2:c.instructions+=3;goto B4aa6e2;
case 0x4aa6e7:c.instructions+=2;goto B4aa6e7;
case 0x4aa6e8:c.instructions+=1;goto B4aa6e8;
case 0x4aa6ed:goto L4aa6ed;
case 0x4aa6f0:c.instructions+=6;goto B4aa6f0;
case 0x4aa6f1:c.instructions+=5;goto B4aa6f1;
case 0x4aa6f2:c.instructions+=4;goto B4aa6f2;
case 0x4aa6f3:c.instructions+=3;goto B4aa6f3;
case 0x4aa6f4:c.instructions+=2;goto B4aa6f4;
case 0x4aa6f7:c.instructions+=1;goto B4aa6f7;
case 0x4aa6fa:goto L4aa6fa;
case 0x4aa6fe:c.instructions+=2;goto B4aa6fe;
case 0x4aa701:c.instructions+=1;goto B4aa701;
case 0x4aa703:goto L4aa703;
case 0x4aa706:c.instructions+=8;goto B4aa706;
case 0x4aa70a:c.instructions+=7;goto B4aa70a;
case 0x4aa70b:c.instructions+=6;goto B4aa70b;
case 0x4aa710:c.instructions+=5;goto B4aa710;
case 0x4aa711:c.instructions+=4;goto B4aa711;
case 0x4aa719:c.instructions+=3;goto B4aa719;
case 0x4aa721:c.instructions+=2;goto B4aa721;
case 0x4aa729:c.instructions+=1;goto B4aa729;
case 0x4aa72e:goto L4aa72e;
case 0x4aa731:goto L4aa731;
case 0x4aa732:goto L4aa732;
case 0x4aa733:c.instructions+=4;goto B4aa733;
case 0x4aa734:c.instructions+=3;goto B4aa734;
case 0x4aa735:c.instructions+=2;goto B4aa735;
case 0x4aa738:c.instructions+=1;goto B4aa738;
case 0x4aa740:goto L4aa740;
case 0x4aa741:c.instructions+=4;goto B4aa741;
case 0x4aa743:c.instructions+=3;goto B4aa743;
case 0x4aa746:c.instructions+=2;goto B4aa746;
case 0x4aa748:c.instructions+=1;goto B4aa748;
case 0x4aa74a:goto L4aa74a;
case 0x4aa74f:c.instructions+=8;goto B4aa74f;
case 0x4aa752:c.instructions+=7;goto B4aa752;
case 0x4aa755:c.instructions+=6;goto B4aa755;
case 0x4aa757:c.instructions+=5;goto B4aa757;
case 0x4aa75d:c.instructions+=4;goto B4aa75d;
case 0x4aa763:c.instructions+=3;goto B4aa763;
case 0x4aa765:c.instructions+=2;goto B4aa765;
case 0x4aa768:c.instructions+=1;goto B4aa768;
case 0x4aa76a:goto L4aa76a;
case 0x4aa76d:c.instructions+=3;goto B4aa76d;
case 0x4aa772:c.instructions+=2;goto B4aa772;
case 0x4aa773:c.instructions+=1;goto B4aa773;
case 0x4aa775:goto L4aa775;
case 0x4aa778:c.instructions+=2;goto B4aa778;
case 0x4aa77d:c.instructions+=1;goto B4aa77d;
case 0x4aa77e:goto L4aa77e;
case 0x4aa783:goto L4aa783;
case 0x4aa786:c.instructions+=3;goto B4aa786;
case 0x4aa789:c.instructions+=2;goto B4aa789;
case 0x4aa78a:c.instructions+=1;goto B4aa78a;
case 0x4aa78f:goto L4aa78f;
case 0x4aa792:c.instructions+=1;goto B4aa792;
case 0x4aa796:goto L4aa796;
case 0x4aa797:c.instructions+=1;goto B4aa797;
case 0x4aa7a0:goto L4aa7a0;
case 0x4aa7a1:c.instructions+=6;goto B4aa7a1;
case 0x4aa7a3:c.instructions+=5;goto B4aa7a3;
case 0x4aa7a6:c.instructions+=4;goto B4aa7a6;
case 0x4aa7a9:c.instructions+=3;goto B4aa7a9;
case 0x4aa7aa:c.instructions+=2;goto B4aa7aa;
case 0x4aa7af:c.instructions+=1;goto B4aa7af;
case 0x4aa7b4:goto L4aa7b4;
case 0x4aa7b6:c.instructions+=1;goto B4aa7b6;
case 0x4aa7bc:goto L4aa7bc;
case 0x4aa7bf:c.instructions+=3;goto B4aa7bf;
case 0x4aa7c6:c.instructions+=2;goto B4aa7c6;
case 0x4aa7c8:c.instructions+=1;goto B4aa7c8;
case 0x4aa7ce:goto L4aa7ce;
case 0x4aa7cf:c.instructions+=2;goto B4aa7cf;
case 0x4aa7d4:c.instructions+=1;goto B4aa7d4;
case 0x4aa7d9:goto L4aa7d9;
case 0x4aa7df:c.instructions+=9;goto B4aa7df;
case 0x4aa7e5:c.instructions+=8;goto B4aa7e5;
case 0x4aa7e9:c.instructions+=7;goto B4aa7e9;
case 0x4aa7ef:c.instructions+=6;goto B4aa7ef;
case 0x4aa7f3:c.instructions+=5;goto B4aa7f3;
case 0x4aa7f9:c.instructions+=4;goto B4aa7f9;
case 0x4aa7fd:c.instructions+=3;goto B4aa7fd;
case 0x4aa803:c.instructions+=2;goto B4aa803;
case 0x4aa807:c.instructions+=1;goto B4aa807;
case 0x4aa809:goto L4aa809;
case 0x4aa80b:c.instructions+=1;goto B4aa80b;
case 0x4aa810:goto L4aa810;
case 0x4aa812:c.instructions+=1;goto B4aa812;
case 0x4aa814:goto L4aa814;
case 0x4aa819:c.instructions+=7;goto B4aa819;
case 0x4aa81f:c.instructions+=6;goto B4aa81f;
case 0x4aa825:c.instructions+=5;goto B4aa825;
case 0x4aa829:c.instructions+=4;goto B4aa829;
case 0x4aa82e:c.instructions+=3;goto B4aa82e;
case 0x4aa832:c.instructions+=2;goto B4aa832;
case 0x4aa836:c.instructions+=1;goto B4aa836;
case 0x4aa83a:goto L4aa83a;
case 0x4aa83e:c.instructions+=1;goto B4aa83e;
case 0x4aa843:goto L4aa843;
case 0x4aa847:c.instructions+=3;goto B4aa847;
case 0x4aa849:c.instructions+=2;goto B4aa849;
case 0x4aa84c:c.instructions+=1;goto B4aa84c;
case 0x4aa851:goto L4aa851;
case 0x4aa855:c.instructions+=3;goto B4aa855;
case 0x4aa857:c.instructions+=2;goto B4aa857;
case 0x4aa85a:c.instructions+=1;goto B4aa85a;
case 0x4aa85f:goto L4aa85f;
case 0x4aa863:c.instructions+=3;goto B4aa863;
case 0x4aa865:c.instructions+=2;goto B4aa865;
case 0x4aa868:c.instructions+=1;goto B4aa868;
case 0x4aa86d:goto L4aa86d;
case 0x4aa870:c.instructions+=4;goto B4aa870;
case 0x4aa872:c.instructions+=3;goto B4aa872;
case 0x4aa873:c.instructions+=2;goto B4aa873;
case 0x4aa874:c.instructions+=1;goto B4aa874;
case 0x4aa879:goto L4aa879;
case 0x4aa87c:goto L4aa87c;
case 0x4aa87d:c.instructions+=3;goto B4aa87d;
case 0x4aa87f:c.instructions+=2;goto B4aa87f;
case 0x4aa880:c.instructions+=1;goto B4aa880;
case 0x4aa890:goto L4aa890;
case 0x4aa894:c.instructions+=6;goto B4aa894;
case 0x4aa895:c.instructions+=5;goto B4aa895;
case 0x4aa897:c.instructions+=4;goto B4aa897;
case 0x4aa89a:c.instructions+=3;goto B4aa89a;
case 0x4aa89d:c.instructions+=2;goto B4aa89d;
case 0x4aa89f:c.instructions+=1;goto B4aa89f;
case 0x4aa8a5:goto L4aa8a5;
case 0x4aa8a6:c.instructions+=7;goto B4aa8a6;
case 0x4aa8a7:c.instructions+=6;goto B4aa8a7;
case 0x4aa8ab:c.instructions+=5;goto B4aa8ab;
case 0x4aa8b1:c.instructions+=4;goto B4aa8b1;
case 0x4aa8b3:c.instructions+=3;goto B4aa8b3;
case 0x4aa8b5:c.instructions+=2;goto B4aa8b5;
case 0x4aa8b6:c.instructions+=1;goto B4aa8b6;
case 0x4aa8bc:goto L4aa8bc;
case 0x4aa8c2:c.instructions+=1;goto B4aa8c2;
case 0x4aa8d0:goto L4aa8d0;
case 0x4aa8d6:c.instructions+=2;goto B4aa8d6;
case 0x4aa8d9:c.instructions+=1;goto B4aa8d9;
case 0x4aa8df:goto L4aa8df;
case 0x4aa8e2:c.instructions+=4;goto B4aa8e2;
case 0x4aa8e5:c.instructions+=3;goto B4aa8e5;
case 0x4aa8e9:c.instructions+=2;goto B4aa8e9;
case 0x4aa8eb:c.instructions+=1;goto B4aa8eb;
case 0x4aa8ed:goto L4aa8ed;
case 0x4aa8f0:c.instructions+=3;goto B4aa8f0;
case 0x4aa8f5:c.instructions+=2;goto B4aa8f5;
case 0x4aa8f6:c.instructions+=1;goto B4aa8f6;
case 0x4aa8fb:goto L4aa8fb;
case 0x4aa8fd:c.instructions+=4;goto B4aa8fd;
case 0x4aa8ff:c.instructions+=3;goto B4aa8ff;
case 0x4aa904:c.instructions+=2;goto B4aa904;
case 0x4aa905:c.instructions+=1;goto B4aa905;
case 0x4aa90a:goto L4aa90a;
case 0x4aa90d:c.instructions+=2;goto B4aa90d;
case 0x4aa912:c.instructions+=1;goto B4aa912;
case 0x4aa917:goto L4aa917;
case 0x4aa919:c.instructions+=3;goto B4aa919;
case 0x4aa91b:c.instructions+=2;goto B4aa91b;
case 0x4aa91e:c.instructions+=1;goto B4aa91e;
case 0x4aa920:goto L4aa920;
case 0x4aa923:c.instructions+=4;goto B4aa923;
case 0x4aa927:c.instructions+=3;goto B4aa927;
case 0x4aa928:c.instructions+=2;goto B4aa928;
case 0x4aa929:c.instructions+=1;goto B4aa929;
case 0x4aa92e:goto L4aa92e;
case 0x4aa931:c.instructions+=1;goto B4aa931;
case 0x4aa933:goto L4aa933;
case 0x4aa936:c.instructions+=5;goto B4aa936;
case 0x4aa93a:c.instructions+=4;goto B4aa93a;
case 0x4aa93b:c.instructions+=3;goto B4aa93b;
case 0x4aa940:c.instructions+=2;goto B4aa940;
case 0x4aa941:c.instructions+=1;goto B4aa941;
case 0x4aa943:goto L4aa943;
case 0x4aa946:c.instructions+=3;goto B4aa946;
case 0x4aa94b:c.instructions+=2;goto B4aa94b;
case 0x4aa94c:c.instructions+=1;goto B4aa94c;
case 0x4aa951:goto L4aa951;
case 0x4aa953:c.instructions+=4;goto B4aa953;
case 0x4aa955:c.instructions+=3;goto B4aa955;
case 0x4aa95a:c.instructions+=2;goto B4aa95a;
case 0x4aa95b:c.instructions+=1;goto B4aa95b;
case 0x4aa960:goto L4aa960;
case 0x4aa963:c.instructions+=2;goto B4aa963;
case 0x4aa968:c.instructions+=1;goto B4aa968;
case 0x4aa96d:goto L4aa96d;
case 0x4aa970:c.instructions+=4;goto B4aa970;
case 0x4aa972:c.instructions+=3;goto B4aa972;
case 0x4aa975:c.instructions+=2;goto B4aa975;
case 0x4aa977:c.instructions+=1;goto B4aa977;
case 0x4aa979:goto L4aa979;
case 0x4aa97d:c.instructions+=3;goto B4aa97d;
case 0x4aa97e:c.instructions+=2;goto B4aa97e;
case 0x4aa97f:c.instructions+=1;goto B4aa97f;
case 0x4aa984:goto L4aa984;
case 0x4aa987:c.instructions+=1;goto B4aa987;
case 0x4aa989:goto L4aa989;
case 0x4aa98d:c.instructions+=3;goto B4aa98d;
case 0x4aa98e:c.instructions+=2;goto B4aa98e;
case 0x4aa993:c.instructions+=1;goto B4aa993;
case 0x4aa994:goto L4aa994;
case 0x4aa999:goto L4aa999;
case 0x4aa99c:goto L4aa99c;
case 0x4aa99f:c.instructions+=7;goto B4aa99f;
case 0x4aa9a1:c.instructions+=6;goto B4aa9a1;
case 0x4aa9a4:c.instructions+=5;goto B4aa9a4;
case 0x4aa9a8:c.instructions+=4;goto B4aa9a8;
case 0x4aa9a9:c.instructions+=3;goto B4aa9a9;
case 0x4aa9aa:c.instructions+=2;goto B4aa9aa;
case 0x4aa9ac:c.instructions+=1;goto B4aa9ac;
case 0x4aa9b1:goto L4aa9b1;
case 0x4aa9b4:c.instructions+=7;goto B4aa9b4;
case 0x4aa9b7:c.instructions+=6;goto B4aa9b7;
case 0x4aa9ba:c.instructions+=5;goto B4aa9ba;
case 0x4aa9be:c.instructions+=4;goto B4aa9be;
case 0x4aa9bf:c.instructions+=3;goto B4aa9bf;
case 0x4aa9c4:c.instructions+=2;goto B4aa9c4;
case 0x4aa9c5:c.instructions+=1;goto B4aa9c5;
case 0x4aa9ca:goto L4aa9ca;
case 0x4aa9d0:c.instructions+=5;goto B4aa9d0;
case 0x4aa9d3:c.instructions+=4;goto B4aa9d3;
case 0x4aa9d4:c.instructions+=3;goto B4aa9d4;
case 0x4aa9d7:c.instructions+=2;goto B4aa9d7;
case 0x4aa9d9:c.instructions+=1;goto B4aa9d9;
case 0x4aa9df:goto L4aa9df;
case 0x4aa9e0:c.instructions+=2;goto B4aa9e0;
case 0x4aa9e1:c.instructions+=1;goto B4aa9e1;
case 0x4aa9e2:goto L4aa9e2;
case 0x4aa9e3:c.instructions+=1;goto B4aa9e3;
case 0x4aa9f0:goto L4aa9f0;
case 0x4aa9f4:c.instructions+=7;goto B4aa9f4;
case 0x4aa9f7:c.instructions+=6;goto B4aa9f7;
case 0x4aa9f8:c.instructions+=5;goto B4aa9f8;
case 0x4aa9fa:c.instructions+=4;goto B4aa9fa;
case 0x4aa9fd:c.instructions+=3;goto B4aa9fd;
case 0x4aaa00:c.instructions+=2;goto B4aaa00;
case 0x4aaa02:c.instructions+=1;goto B4aaa02;
case 0x4aaa08:goto L4aaa08;
case 0x4aaa0c:c.instructions+=8;goto B4aaa0c;
case 0x4aaa12:c.instructions+=7;goto B4aaa12;
case 0x4aaa13:c.instructions+=6;goto B4aaa13;
case 0x4aaa14:c.instructions+=5;goto B4aaa14;
case 0x4aaa16:c.instructions+=4;goto B4aaa16;
case 0x4aaa18:c.instructions+=3;goto B4aaa18;
case 0x4aaa19:c.instructions+=2;goto B4aaa19;
case 0x4aaa1d:c.instructions+=1;goto B4aaa1d;
case 0x4aaa23:goto L4aaa23;
case 0x4aaa29:c.instructions+=1;goto B4aaa29;
case 0x4aaa30:goto L4aaa30;
case 0x4aaa35:c.instructions+=2;goto B4aaa35;
case 0x4aaa38:c.instructions+=1;goto B4aaa38;
case 0x4aaa3e:goto L4aaa3e;
case 0x4aaa41:c.instructions+=5;goto B4aaa41;
case 0x4aaa45:c.instructions+=4;goto B4aaa45;
case 0x4aaa48:c.instructions+=3;goto B4aaa48;
case 0x4aaa4c:c.instructions+=2;goto B4aaa4c;
case 0x4aaa4e:c.instructions+=1;goto B4aaa4e;
case 0x4aaa50:goto L4aaa50;
case 0x4aaa53:c.instructions+=3;goto B4aaa53;
case 0x4aaa58:c.instructions+=2;goto B4aaa58;
case 0x4aaa59:c.instructions+=1;goto B4aaa59;
case 0x4aaa5e:goto L4aaa5e;
case 0x4aaa60:c.instructions+=4;goto B4aaa60;
case 0x4aaa62:c.instructions+=3;goto B4aaa62;
case 0x4aaa67:c.instructions+=2;goto B4aaa67;
case 0x4aaa68:c.instructions+=1;goto B4aaa68;
case 0x4aaa6d:goto L4aaa6d;
case 0x4aaa70:c.instructions+=2;goto B4aaa70;
case 0x4aaa75:c.instructions+=1;goto B4aaa75;
case 0x4aaa7a:goto L4aaa7a;
case 0x4aaa7d:c.instructions+=4;goto B4aaa7d;
case 0x4aaa7f:c.instructions+=3;goto B4aaa7f;
case 0x4aaa82:c.instructions+=2;goto B4aaa82;
case 0x4aaa84:c.instructions+=1;goto B4aaa84;
case 0x4aaa86:goto L4aaa86;
case 0x4aaa8a:c.instructions+=3;goto B4aaa8a;
case 0x4aaa8b:c.instructions+=2;goto B4aaa8b;
case 0x4aaa8c:c.instructions+=1;goto B4aaa8c;
case 0x4aaa91:goto L4aaa91;
case 0x4aaa94:c.instructions+=1;goto B4aaa94;
case 0x4aaa99:goto L4aaa99;
case 0x4aaa9d:c.instructions+=4;goto B4aaa9d;
case 0x4aaa9e:c.instructions+=3;goto B4aaa9e;
case 0x4aaaa3:c.instructions+=2;goto B4aaaa3;
case 0x4aaaa4:c.instructions+=1;goto B4aaaa4;
case 0x4aaaa9:goto L4aaaa9;
case 0x4aaaac:c.instructions+=3;goto B4aaaac;
case 0x4aaab1:c.instructions+=2;goto B4aaab1;
case 0x4aaab2:c.instructions+=1;goto B4aaab2;
case 0x4aaab7:goto L4aaab7;
case 0x4aaab9:c.instructions+=4;goto B4aaab9;
case 0x4aaabb:c.instructions+=3;goto B4aaabb;
case 0x4aaac0:c.instructions+=2;goto B4aaac0;
case 0x4aaac1:c.instructions+=1;goto B4aaac1;
case 0x4aaac6:goto L4aaac6;
case 0x4aaac9:c.instructions+=7;goto B4aaac9;
case 0x4aaacc:c.instructions+=6;goto B4aaacc;
case 0x4aaad0:c.instructions+=5;goto B4aaad0;
case 0x4aaad6:c.instructions+=4;goto B4aaad6;
case 0x4aaad9:c.instructions+=3;goto B4aaad9;
case 0x4aaadc:c.instructions+=2;goto B4aaadc;
case 0x4aaade:c.instructions+=1;goto B4aaade;
case 0x4aaae0:goto L4aaae0;
case 0x4aaae7:c.instructions+=1;goto B4aaae7;
case 0x4aaae9:goto L4aaae9;
case 0x4aaaeb:goto L4aaaeb;
case 0x4aaaed:c.instructions+=1;goto B4aaaed;
case 0x4aaaf2:goto L4aaaf2;
case 0x4aaaf4:c.instructions+=1;goto B4aaaf4;
case 0x4aaafa:goto L4aaafa;
case 0x4aaafe:c.instructions+=3;goto B4aaafe;
case 0x4aab01:c.instructions+=2;goto B4aab01;
case 0x4aab04:c.instructions+=1;goto B4aab04;
case 0x4aab06:goto L4aab06;
case 0x4aab0d:goto L4aab0d;
case 0x4aab0f:c.instructions+=4;goto B4aab0f;
case 0x4aab14:c.instructions+=3;goto B4aab14;
case 0x4aab15:c.instructions+=2;goto B4aab15;
case 0x4aab16:c.instructions+=1;goto B4aab16;
case 0x4aab1b:goto L4aab1b;
case 0x4aab1e:c.instructions+=1;goto B4aab1e;
case 0x4aab23:goto L4aab23;
case 0x4aab25:c.instructions+=4;goto B4aab25;
case 0x4aab2a:c.instructions+=3;goto B4aab2a;
case 0x4aab2b:c.instructions+=2;goto B4aab2b;
case 0x4aab2c:c.instructions+=1;goto B4aab2c;
case 0x4aab31:goto L4aab31;
case 0x4aab34:c.instructions+=1;goto B4aab34;
case 0x4aab39:goto L4aab39;
case 0x4aab3b:c.instructions+=4;goto B4aab3b;
case 0x4aab40:c.instructions+=3;goto B4aab40;
case 0x4aab41:c.instructions+=2;goto B4aab41;
case 0x4aab42:c.instructions+=1;goto B4aab42;
case 0x4aab47:goto L4aab47;
case 0x4aab4a:c.instructions+=1;goto B4aab4a;
case 0x4aab4f:goto L4aab4f;
case 0x4aab51:c.instructions+=4;goto B4aab51;
case 0x4aab56:c.instructions+=3;goto B4aab56;
case 0x4aab57:c.instructions+=2;goto B4aab57;
case 0x4aab58:c.instructions+=1;goto B4aab58;
case 0x4aab5d:goto L4aab5d;
case 0x4aab60:c.instructions+=1;goto B4aab60;
case 0x4aab62:goto L4aab62;
case 0x4aab64:c.instructions+=4;goto B4aab64;
case 0x4aab69:c.instructions+=3;goto B4aab69;
case 0x4aab6a:c.instructions+=2;goto B4aab6a;
case 0x4aab6b:c.instructions+=1;goto B4aab6b;
case 0x4aab70:goto L4aab70;
case 0x4aab73:c.instructions+=1;goto B4aab73;
case 0x4aab75:goto L4aab75;
case 0x4aab77:c.instructions+=4;goto B4aab77;
case 0x4aab7c:c.instructions+=3;goto B4aab7c;
case 0x4aab7d:c.instructions+=2;goto B4aab7d;
case 0x4aab7e:c.instructions+=1;goto B4aab7e;
case 0x4aab83:goto L4aab83;
case 0x4aab86:c.instructions+=1;goto B4aab86;
case 0x4aab88:goto L4aab88;
case 0x4aab8f:c.instructions+=2;goto B4aab8f;
case 0x4aab92:c.instructions+=1;goto B4aab92;
case 0x4aab94:goto L4aab94;
case 0x4aab97:c.instructions+=3;goto B4aab97;
case 0x4aab9b:c.instructions+=2;goto B4aab9b;
case 0x4aaba1:c.instructions+=1;goto B4aaba1;
case 0x4aaba6:goto L4aaba6;
case 0x4aaba8:c.instructions+=4;goto B4aaba8;
case 0x4aaba9:c.instructions+=3;goto B4aaba9;
case 0x4aabae:c.instructions+=2;goto B4aabae;
case 0x4aabaf:c.instructions+=1;goto B4aabaf;
case 0x4aabb1:goto L4aabb1;
case 0x4aabb4:c.instructions+=5;goto B4aabb4;
case 0x4aabb6:c.instructions+=4;goto B4aabb6;
case 0x4aabba:c.instructions+=3;goto B4aabba;
case 0x4aabbb:c.instructions+=2;goto B4aabbb;
case 0x4aabbf:c.instructions+=1;goto B4aabbf;
case 0x4aabc4:goto L4aabc4;
case 0x4aabc6:c.instructions+=4;goto B4aabc6;
case 0x4aabca:c.instructions+=3;goto B4aabca;
case 0x4aabcb:c.instructions+=2;goto B4aabcb;
case 0x4aabd0:c.instructions+=1;goto B4aabd0;
case 0x4aabd1:goto L4aabd1;
case 0x4aabd6:goto L4aabd6;
case 0x4aabd9:goto L4aabd9;
case 0x4aabdc:c.instructions+=7;goto B4aabdc;
case 0x4aabde:c.instructions+=6;goto B4aabde;
case 0x4aabe1:c.instructions+=5;goto B4aabe1;
case 0x4aabe5:c.instructions+=4;goto B4aabe5;
case 0x4aabe6:c.instructions+=3;goto B4aabe6;
case 0x4aabe7:c.instructions+=2;goto B4aabe7;
case 0x4aabe9:c.instructions+=1;goto B4aabe9;
case 0x4aabee:goto L4aabee;
case 0x4aabf1:c.instructions+=7;goto B4aabf1;
case 0x4aabf4:c.instructions+=6;goto B4aabf4;
case 0x4aabf7:c.instructions+=5;goto B4aabf7;
case 0x4aabfb:c.instructions+=4;goto B4aabfb;
case 0x4aabfc:c.instructions+=3;goto B4aabfc;
case 0x4aac01:c.instructions+=2;goto B4aac01;
case 0x4aac02:c.instructions+=1;goto B4aac02;
case 0x4aac07:goto L4aac07;
case 0x4aac0d:c.instructions+=5;goto B4aac0d;
case 0x4aac10:c.instructions+=4;goto B4aac10;
case 0x4aac11:c.instructions+=3;goto B4aac11;
case 0x4aac14:c.instructions+=2;goto B4aac14;
case 0x4aac16:c.instructions+=1;goto B4aac16;
case 0x4aac1c:goto L4aac1c;
case 0x4aac1d:c.instructions+=2;goto B4aac1d;
case 0x4aac1e:c.instructions+=1;goto B4aac1e;
case 0x4aac1f:goto L4aac1f;
case 0x4aac20:c.instructions+=2;goto B4aac20;
case 0x4aac23:c.instructions+=1;goto B4aac23;
case 0x4aac50:goto L4aac50;
case 0x4aac53:c.instructions+=8;goto B4aac53;
case 0x4aac54:c.instructions+=7;goto B4aac54;
case 0x4aac55:c.instructions+=6;goto B4aac55;
case 0x4aac56:c.instructions+=5;goto B4aac56;
case 0x4aac58:c.instructions+=4;goto B4aac58;
case 0x4aac5a:c.instructions+=3;goto B4aac5a;
case 0x4aac5f:c.instructions+=2;goto B4aac5f;
case 0x4aac63:c.instructions+=1;goto B4aac63;
case 0x4aac68:goto L4aac68;
case 0x4aac6e:c.instructions+=2;goto B4aac6e;
case 0x4aac70:c.instructions+=1;goto B4aac70;
case 0x4aac72:goto L4aac72;
case 0x4aac74:c.instructions+=2;goto B4aac74;
case 0x4aac78:c.instructions+=1;goto B4aac78;
case 0x4aac7a:goto L4aac7a;
case 0x4aac7e:c.instructions+=1;goto B4aac7e;
case 0x4aac80:goto L4aac80;
case 0x4aac82:c.instructions+=2;goto B4aac82;
case 0x4aac8a:c.instructions+=1;goto B4aac8a;
case 0x4aac90:goto L4aac90;
case 0x4aac91:c.instructions+=3;goto B4aac91;
case 0x4aac97:c.instructions+=2;goto B4aac97;
case 0x4aac9d:c.instructions+=1;goto B4aac9d;
case 0x4aaca0:goto L4aaca0;
case 0x4aaca3:c.instructions+=3;goto B4aaca3;
case 0x4aaca5:c.instructions+=2;goto B4aaca5;
case 0x4aaca7:c.instructions+=1;goto B4aaca7;
case 0x4aaca9:goto L4aaca9;
case 0x4aacac:c.instructions+=3;goto B4aacac;
case 0x4aacb1:c.instructions+=2;goto B4aacb1;
case 0x4aacb2:c.instructions+=1;goto B4aacb2;
case 0x4aacb4:goto L4aacb4;
case 0x4aacb7:c.instructions+=2;goto B4aacb7;
case 0x4aacbc:c.instructions+=1;goto B4aacbc;
case 0x4aacbd:goto L4aacbd;
case 0x4aacc2:goto L4aacc2;
case 0x4aacc5:c.instructions+=6;goto B4aacc5;
case 0x4aacc7:c.instructions+=5;goto B4aacc7;
case 0x4aacca:c.instructions+=4;goto B4aacca;
case 0x4aaccb:c.instructions+=3;goto B4aaccb;
case 0x4aaccc:c.instructions+=2;goto B4aaccc;
case 0x4aacce:c.instructions+=1;goto B4aacce;
case 0x4aacd3:goto L4aacd3;
case 0x4aacd8:c.instructions+=2;goto B4aacd8;
case 0x4aacda:c.instructions+=1;goto B4aacda;
case 0x4aacdf:goto L4aacdf;
case 0x4aace1:c.instructions+=1;goto B4aace1;
case 0x4aace3:goto L4aace3;
case 0x4aace6:c.instructions+=3;goto B4aace6;
case 0x4aace7:c.instructions+=2;goto B4aace7;
case 0x4aacec:c.instructions+=1;goto B4aacec;
case 0x4aacf1:goto L4aacf1;
case 0x4aacf3:c.instructions+=2;goto B4aacf3;
case 0x4aacf5:c.instructions+=1;goto B4aacf5;
case 0x4aacf7:goto L4aacf7;
case 0x4aacf9:c.instructions+=1;goto B4aacf9;
case 0x4aacfe:goto L4aacfe;
case 0x4aad00:c.instructions+=1;goto B4aad00;
case 0x4aad02:goto L4aad02;
case 0x4aad05:c.instructions+=2;goto B4aad05;
case 0x4aad08:c.instructions+=1;goto B4aad08;
case 0x4aad0a:goto L4aad0a;
case 0x4aad0b:c.instructions+=1;goto B4aad0b;
case 0x4aad0d:goto L4aad0d;
case 0x4aad12:c.instructions+=1;goto B4aad12;
case 0x4aad14:goto L4aad14;
case 0x4aad19:c.instructions+=1;goto B4aad19;
case 0x4aad1b:goto L4aad1b;
case 0x4aad20:goto L4aad20;
case 0x4aad24:c.instructions+=6;goto B4aad24;
case 0x4aad27:c.instructions+=5;goto B4aad27;
case 0x4aad28:c.instructions+=4;goto B4aad28;
case 0x4aad29:c.instructions+=3;goto B4aad29;
case 0x4aad2e:c.instructions+=2;goto B4aad2e;
case 0x4aad2f:c.instructions+=1;goto B4aad2f;
case 0x4aad34:goto L4aad34;
case 0x4aad37:c.instructions+=2;goto B4aad37;
case 0x4aad39:c.instructions+=1;goto B4aad39;
case 0x4aad3b:goto L4aad3b;
case 0x4aad3d:c.instructions+=3;goto B4aad3d;
case 0x4aad3e:c.instructions+=2;goto B4aad3e;
case 0x4aad3f:c.instructions+=1;goto B4aad3f;
case 0x4aad44:goto L4aad44;
case 0x4aad47:c.instructions+=1;goto B4aad47;
case 0x4aad49:goto L4aad49;
case 0x4aad4c:c.instructions+=1;goto B4aad4c;
case 0x4aad51:goto L4aad51;
case 0x4aad53:c.instructions+=4;goto B4aad53;
case 0x4aad54:c.instructions+=3;goto B4aad54;
case 0x4aad59:c.instructions+=2;goto B4aad59;
case 0x4aad5a:c.instructions+=1;goto B4aad5a;
case 0x4aad5f:goto L4aad5f;
case 0x4aad62:goto L4aad62;
case 0x4aad66:c.instructions+=6;goto B4aad66;
case 0x4aad69:c.instructions+=5;goto B4aad69;
case 0x4aad6c:c.instructions+=4;goto B4aad6c;
case 0x4aad70:c.instructions+=3;goto B4aad70;
case 0x4aad72:c.instructions+=2;goto B4aad72;
case 0x4aad76:c.instructions+=1;goto B4aad76;
case 0x4aad7c:goto L4aad7c;
case 0x4aad7e:c.instructions+=1;goto B4aad7e;
case 0x4aad7f:goto L4aad7f;
case 0x4aad85:c.instructions+=1;goto B4aad85;
case 0x4aad87:goto L4aad87;
case 0x4aad8e:c.instructions+=1;goto B4aad8e;
case 0x4aad90:goto L4aad90;
case 0x4aad93:c.instructions+=2;goto B4aad93;
case 0x4aad94:c.instructions+=1;goto B4aad94;
case 0x4aad99:goto L4aad99;
case 0x4aad9b:c.instructions+=2;goto B4aad9b;
case 0x4aad9c:c.instructions+=1;goto B4aad9c;
case 0x4aada1:goto L4aada1;
case 0x4aada7:c.instructions+=5;goto B4aada7;
case 0x4aadaa:c.instructions+=4;goto B4aadaa;
case 0x4aadab:c.instructions+=3;goto B4aadab;
case 0x4aadae:c.instructions+=2;goto B4aadae;
case 0x4aadb0:c.instructions+=1;goto B4aadb0;
case 0x4aadb2:goto L4aadb2;
case 0x4aadb3:c.instructions+=4;goto B4aadb3;
case 0x4aadb4:c.instructions+=3;goto B4aadb4;
case 0x4aadb5:c.instructions+=2;goto B4aadb5;
case 0x4aadb8:c.instructions+=1;goto B4aadb8;
case 0x4aadc0:goto L4aadc0;
case 0x4aadc1:c.instructions+=9;goto B4aadc1;
case 0x4aadc2:c.instructions+=8;goto B4aadc2;
case 0x4aadc3:c.instructions+=7;goto B4aadc3;
case 0x4aadc4:c.instructions+=6;goto B4aadc4;
case 0x4aadc5:c.instructions+=5;goto B4aadc5;
case 0x4aadc7:c.instructions+=4;goto B4aadc7;
case 0x4aadc9:c.instructions+=3;goto B4aadc9;
case 0x4aadce:c.instructions+=2;goto B4aadce;
case 0x4aadd2:c.instructions+=1;goto B4aadd2;
case 0x4aadd7:goto L4aadd7;
case 0x4aaddd:c.instructions+=2;goto B4aaddd;
case 0x4aaddf:c.instructions+=1;goto B4aaddf;
case 0x4aade1:goto L4aade1;
case 0x4aade3:goto L4aade3;
case 0x4aade5:c.instructions+=2;goto B4aade5;
case 0x4aade7:c.instructions+=1;goto B4aade7;
case 0x4aaded:goto L4aaded;
case 0x4aadf3:c.instructions+=2;goto B4aadf3;
case 0x4aadf9:c.instructions+=1;goto B4aadf9;
case 0x4aae00:goto L4aae00;
case 0x4aae03:c.instructions+=3;goto B4aae03;
case 0x4aae05:c.instructions+=2;goto B4aae05;
case 0x4aae07:c.instructions+=1;goto B4aae07;
case 0x4aae09:goto L4aae09;
case 0x4aae0c:c.instructions+=3;goto B4aae0c;
case 0x4aae11:c.instructions+=2;goto B4aae11;
case 0x4aae12:c.instructions+=1;goto B4aae12;
case 0x4aae14:goto L4aae14;
case 0x4aae17:c.instructions+=2;goto B4aae17;
case 0x4aae1c:c.instructions+=1;goto B4aae1c;
case 0x4aae1d:goto L4aae1d;
case 0x4aae22:goto L4aae22;
case 0x4aae24:c.instructions+=6;goto B4aae24;
case 0x4aae26:c.instructions+=5;goto B4aae26;
case 0x4aae2a:c.instructions+=4;goto B4aae2a;
case 0x4aae2d:c.instructions+=3;goto B4aae2d;
case 0x4aae2e:c.instructions+=2;goto B4aae2e;
case 0x4aae2f:c.instructions+=1;goto B4aae2f;
case 0x4aae34:goto L4aae34;
case 0x4aae39:c.instructions+=1;goto B4aae39;
case 0x4aae3e:goto L4aae3e;
case 0x4aae40:c.instructions+=1;goto B4aae40;
case 0x4aae42:goto L4aae42;
case 0x4aae45:c.instructions+=4;goto B4aae45;
case 0x4aae47:c.instructions+=3;goto B4aae47;
case 0x4aae48:c.instructions+=2;goto B4aae48;
case 0x4aae49:c.instructions+=1;goto B4aae49;
case 0x4aae4e:goto L4aae4e;
case 0x4aae51:c.instructions+=1;goto B4aae51;
case 0x4aae53:goto L4aae53;
case 0x4aae55:c.instructions+=5;goto B4aae55;
case 0x4aae58:c.instructions+=4;goto B4aae58;
case 0x4aae59:c.instructions+=3;goto B4aae59;
case 0x4aae5e:c.instructions+=2;goto B4aae5e;
case 0x4aae5f:c.instructions+=1;goto B4aae5f;
case 0x4aae64:goto L4aae64;
case 0x4aae67:goto L4aae67;
case 0x4aae6a:c.instructions+=5;goto B4aae6a;
case 0x4aae6b:c.instructions+=4;goto B4aae6b;
case 0x4aae6c:c.instructions+=3;goto B4aae6c;
case 0x4aae71:c.instructions+=2;goto B4aae71;
case 0x4aae72:c.instructions+=1;goto B4aae72;
case 0x4aae77:goto L4aae77;
case 0x4aae7a:c.instructions+=4;goto B4aae7a;
case 0x4aae7d:c.instructions+=3;goto B4aae7d;
case 0x4aae80:c.instructions+=2;goto B4aae80;
case 0x4aae82:c.instructions+=1;goto B4aae82;
case 0x4aae88:goto L4aae88;
case 0x4aae8c:goto L4aae8c;
case 0x4aae92:c.instructions+=2;goto B4aae92;
case 0x4aae94:c.instructions+=1;goto B4aae94;
case 0x4aae96:goto L4aae96;
case 0x4aae9d:c.instructions+=1;goto B4aae9d;
case 0x4aaea0:goto L4aaea0;
case 0x4aaea3:c.instructions+=2;goto B4aaea3;
case 0x4aaea4:c.instructions+=1;goto B4aaea4;
case 0x4aaea9:goto L4aaea9;
case 0x4aaeab:c.instructions+=2;goto B4aaeab;
case 0x4aaeac:c.instructions+=1;goto B4aaeac;
case 0x4aaeb1:goto L4aaeb1;
case 0x4aaeb7:c.instructions+=5;goto B4aaeb7;
case 0x4aaeba:c.instructions+=4;goto B4aaeba;
case 0x4aaebb:c.instructions+=3;goto B4aaebb;
case 0x4aaebe:c.instructions+=2;goto B4aaebe;
case 0x4aaec0:c.instructions+=1;goto B4aaec0;
case 0x4aaec2:goto L4aaec2;
case 0x4aaec3:c.instructions+=5;goto B4aaec3;
case 0x4aaec4:c.instructions+=4;goto B4aaec4;
case 0x4aaec5:c.instructions+=3;goto B4aaec5;
case 0x4aaec6:c.instructions+=2;goto B4aaec6;
case 0x4aaec7:c.instructions+=1;goto B4aaec7;
case 0x4aaed0:goto L4aaed0;
case 0x4aaed3:c.instructions+=8;goto B4aaed3;
case 0x4aaed7:c.instructions+=7;goto B4aaed7;
case 0x4aaeda:c.instructions+=6;goto B4aaeda;
case 0x4aaedb:c.instructions+=5;goto B4aaedb;
case 0x4aaedd:c.instructions+=4;goto B4aaedd;
case 0x4aaee3:c.instructions+=3;goto B4aaee3;
case 0x4aaee4:c.instructions+=2;goto B4aaee4;
case 0x4aaee8:c.instructions+=1;goto B4aaee8;
case 0x4aaeed:goto L4aaeed;
case 0x4aaeef:c.instructions+=2;goto B4aaeef;
case 0x4aaef1:c.instructions+=1;goto B4aaef1;
case 0x4aaef7:goto L4aaef7;
case 0x4aaef8:c.instructions+=10;goto B4aaef8;
case 0x4aaefc:c.instructions+=9;goto B4aaefc;
case 0x4aaf02:c.instructions+=8;goto B4aaf02;
case 0x4aaf03:c.instructions+=7;goto B4aaf03;
case 0x4aaf04:c.instructions+=6;goto B4aaf04;
case 0x4aaf06:c.instructions+=5;goto B4aaf06;
case 0x4aaf07:c.instructions+=4;goto B4aaf07;
case 0x4aaf08:c.instructions+=3;goto B4aaf08;
case 0x4aaf0c:c.instructions+=2;goto B4aaf0c;
case 0x4aaf12:c.instructions+=1;goto B4aaf12;
case 0x4aaf14:goto L4aaf14;
case 0x4aaf1a:c.instructions+=6;goto B4aaf1a;
case 0x4aaf1d:c.instructions+=5;goto B4aaf1d;
case 0x4aaf1f:c.instructions+=4;goto B4aaf1f;
case 0x4aaf22:c.instructions+=3;goto B4aaf22;
case 0x4aaf25:c.instructions+=2;goto B4aaf25;
case 0x4aaf29:c.instructions+=1;goto B4aaf29;
case 0x4aaf2b:goto L4aaf2b;
case 0x4aaf30:goto L4aaf30;
case 0x4aaf32:c.instructions+=1;goto B4aaf32;
case 0x4aaf34:goto L4aaf34;
case 0x4aaf36:c.instructions+=1;goto B4aaf36;
case 0x4aaf38:goto L4aaf38;
case 0x4aaf3b:c.instructions+=1;goto B4aaf3b;
case 0x4aaf3d:goto L4aaf3d;
case 0x4aaf41:c.instructions+=3;goto B4aaf41;
case 0x4aaf42:c.instructions+=2;goto B4aaf42;
case 0x4aaf43:c.instructions+=1;goto B4aaf43;
case 0x4aaf44:goto L4aaf44;
case 0x4aaf46:c.instructions+=1;goto B4aaf46;
case 0x4aaf48:goto L4aaf48;
case 0x4aaf4a:c.instructions+=1;goto B4aaf4a;
case 0x4aaf4c:goto L4aaf4c;
case 0x4aaf50:c.instructions+=5;goto B4aaf50;
case 0x4aaf54:c.instructions+=4;goto B4aaf54;
case 0x4aaf55:c.instructions+=3;goto B4aaf55;
case 0x4aaf56:c.instructions+=2;goto B4aaf56;
case 0x4aaf5a:c.instructions+=1;goto B4aaf5a;
case 0x4aaf5b:goto L4aaf5b;
case 0x4aaf5f:c.instructions+=5;goto B4aaf5f;
case 0x4aaf60:c.instructions+=4;goto B4aaf60;
case 0x4aaf64:c.instructions+=3;goto B4aaf64;
case 0x4aaf66:c.instructions+=2;goto B4aaf66;
case 0x4aaf6a:c.instructions+=1;goto B4aaf6a;
case 0x4aaf6c:goto L4aaf6c;
case 0x4aaf6e:c.instructions+=2;goto B4aaf6e;
case 0x4aaf73:c.instructions+=1;goto B4aaf73;
case 0x4aaf75:goto L4aaf75;
case 0x4aaf7b:c.instructions+=2;goto B4aaf7b;
case 0x4aaf7f:c.instructions+=1;goto B4aaf7f;
case 0x4aaf82:goto L4aaf82;
case 0x4aaf84:c.instructions+=5;goto B4aaf84;
case 0x4aaf86:c.instructions+=4;goto B4aaf86;
case 0x4aaf89:c.instructions+=3;goto B4aaf89;
case 0x4aaf8c:c.instructions+=2;goto B4aaf8c;
case 0x4aaf8d:c.instructions+=1;goto B4aaf8d;
case 0x4aaf8f:goto L4aaf8f;
case 0x4aaf91:c.instructions+=1;goto B4aaf91;
case 0x4aaf93:goto L4aaf93;
case 0x4aaf9a:c.instructions+=1;goto B4aaf9a;
case 0x4aaf9b:goto L4aaf9b;
case 0x4aaf9f:c.instructions+=2;goto B4aaf9f;
case 0x4aafa1:c.instructions+=1;goto B4aafa1;
case 0x4aafa3:goto L4aafa3;
case 0x4aafaa:c.instructions+=1;goto B4aafaa;
case 0x4aafae:goto L4aafae;
case 0x4aafb0:goto L4aafb0;
case 0x4aafb1:c.instructions+=2;goto B4aafb1;
case 0x4aafb2:c.instructions+=1;goto B4aafb2;
case 0x4aafb3:goto L4aafb3;
case 0x4aafb4:c.instructions+=2;goto B4aafb4;
case 0x4aafb7:c.instructions+=1;goto B4aafb7;
case 0x4aafc0:goto L4aafc0;
case 0x4aafc1:c.instructions+=10;goto B4aafc1;
case 0x4aafc2:c.instructions+=9;goto B4aafc2;
case 0x4aafc4:c.instructions+=8;goto B4aafc4;
case 0x4aafc7:c.instructions+=7;goto B4aafc7;
case 0x4aafca:c.instructions+=6;goto B4aafca;
case 0x4aafcd:c.instructions+=5;goto B4aafcd;
case 0x4aafcf:c.instructions+=4;goto B4aafcf;
case 0x4aafd2:c.instructions+=3;goto B4aafd2;
case 0x4aafd4:c.instructions+=2;goto B4aafd4;
case 0x4aafd6:c.instructions+=1;goto B4aafd6;
case 0x4aafdc:goto L4aafdc;
case 0x4aafe0:c.instructions+=3;goto B4aafe0;
case 0x4aafe6:c.instructions+=2;goto B4aafe6;
case 0x4aafeb:c.instructions+=1;goto B4aafeb;
case 0x4aaff0:goto L4aaff0;
case 0x4aaff2:c.instructions+=1;goto B4aaff2;
case 0x4aaff4:goto L4aaff4;
case 0x4aaffa:c.instructions+=3;goto B4aaffa;
case 0x4aaffe:c.instructions+=2;goto B4aaffe;
case 0x4aafff:c.instructions+=1;goto B4aafff;
default:missing_instruction(c.pc);}
B4aa001:L4aa001:{c.instructions+=3;NFSU2_TR(0x4aa001);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B4aa003:{NFSU2_TR(0x4aa003);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4aa005:{NFSU2_TR(0x4aa005);
if(r1(R+518)){{goto L4aa0cb;}}
}
B4aa00b:L4aa00b:{c.instructions+=3;NFSU2_TR(0x4aa00b);
__builtin_memmove((R+0),gp(0x8364ac),4);
}
B4aa010:{NFSU2_TR(0x4aa010);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4aa012:{NFSU2_TR(0x4aa012);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4aa01a;}}
}
B4aa014:L4aa014:{c.instructions+=2;NFSU2_TR(0x4aa014);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4aa015:{NFSU2_TR(0x4aa015);
__builtin_memmove(gp(0x8364ac),(R+0),4);
}
B4aa01a:L4aa01a:{c.instructions+=3;NFSU2_TR(0x4aa01a);
__builtin_memmove((R+4),gp(0x83649c),1);
}
B4aa020:{NFSU2_TR(0x4aa020);
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
B4aa022:{NFSU2_TR(0x4aa022);
if(r1(R+518)){{goto L4aa0d7;}}
}
B4aa028:L4aa028:{c.instructions+=2;NFSU2_TR(0x4aa028);
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
B4aa02a:{NFSU2_TR(0x4aa02a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4aa0d7;}}
}
B4aa030:L4aa030:{c.instructions+=1;NFSU2_TR(0x4aa030);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa035ull));
TAIL_STATIC(0x4ff970u,4ff);
}
B4aa035:L4aa035:{c.instructions+=3;NFSU2_TR(0x4aa035);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4aa038:{NFSU2_TR(0x4aa038);
w4(R+0,u32(0x7909a0ull));
}
B4aa03d:{NFSU2_TR(0x4aa03d);
if(r1(R+518)){{goto L4aa044;}}
}
B4aa03f:L4aa03f:{c.instructions+=1;NFSU2_TR(0x4aa03f);
w4(R+0,u32(0x783fe5ull));
}
B4aa044:L4aa044:{c.instructions+=3;NFSU2_TR(0x4aa044);
__builtin_memmove((R+4),gp(0x8364a8),4);
}
B4aa04a:{NFSU2_TR(0x4aa04a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4aa04d:{NFSU2_TR(0x4aa04d);
if(r1(R+518)){{goto L4aa075;}}
}
B4aa04f:L4aa04f:{c.instructions+=2;NFSU2_TR(0x4aa04f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4aa052:{NFSU2_TR(0x4aa052);
if(r1(R+518)){{goto L4aa075;}}
}
B4aa054:L4aa054:{c.instructions+=2;NFSU2_TR(0x4aa054);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4aa057:{NFSU2_TR(0x4aa057);
if(r1(R+518)){{goto L4aa05e;}}
}
B4aa059:L4aa059:{c.instructions+=2;NFSU2_TR(0x4aa059);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4aa05c:{NFSU2_TR(0x4aa05c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4aa0a4;}}
}
B4aa05e:L4aa05e:{c.instructions+=7;NFSU2_TR(0x4aa05e);
__builtin_memmove((R+4),gp(0x8364a0),4);
}
B4aa064:{NFSU2_TR(0x4aa064);
__builtin_memmove((R+8),gp(0x8364a4),4);
}
B4aa06a:{NFSU2_TR(0x4aa06a);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B4aa06c:{NFSU2_TR(0x4aa06c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa06d:{NFSU2_TR(0x4aa06d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa06e:{NFSU2_TR(0x4aa06e);
u8 U[4];
w4(U+0,u32(0x2ab10d61ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa073:{NFSU2_TR(0x4aa073);
{goto L4aa08a;}
}
B4aa075:L4aa075:{c.instructions+=6;NFSU2_TR(0x4aa075);
__builtin_memmove((R+4),gp(0x8364a0),4);
}
B4aa07b:{NFSU2_TR(0x4aa07b);
__builtin_memmove((R+8),gp(0x8364a4),4);
}
B4aa081:{NFSU2_TR(0x4aa081);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B4aa083:{NFSU2_TR(0x4aa083);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa084:{NFSU2_TR(0x4aa084);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa085:{NFSU2_TR(0x4aa085);
u8 U[4];
w4(U+0,u32(0xaba1e56full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa08a:L4aa08a:{c.instructions+=1;NFSU2_TR(0x4aa08a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa08full));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4aa08f:L4aa08f:{c.instructions+=6;NFSU2_TR(0x4aa08f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4aa092:{NFSU2_TR(0x4aa092);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa093:{NFSU2_TR(0x4aa093);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aa096:{NFSU2_TR(0x4aa096);
u8 U[4];
w4(U+0,u32(0x790994ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa09b:{NFSU2_TR(0x4aa09b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa09c:{NFSU2_TR(0x4aa09c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa0a1ull));
TAIL_STATIC(0x537be0u,537);
}
B4aa0a1:L4aa0a1:{c.instructions+=1;NFSU2_TR(0x4aa0a1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4aa0a4:L4aa0a4:{c.instructions+=3;NFSU2_TR(0x4aa0a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4aa0a7:{NFSU2_TR(0x4aa0a7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa0a8:{NFSU2_TR(0x4aa0a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa0adull));
TAIL_STATIC(0x50ca50u,50c);
}
B4aa0ad:L4aa0ad:{c.instructions+=5;NFSU2_TR(0x4aa0ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4aa0b0:{NFSU2_TR(0x4aa0b0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa0b2:{NFSU2_TR(0x4aa0b2);
u8 U[4];
w4(U+0,u32(0x790968ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa0b7:{NFSU2_TR(0x4aa0b7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa0b8:{NFSU2_TR(0x4aa0b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa0bdull));
TAIL_STATIC(0x51cf70u,51c);
}
B4aa0bd:L4aa0bd:{c.instructions+=4;NFSU2_TR(0x4aa0bd);
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
B4aa0c0:{NFSU2_TR(0x4aa0c0);
s1(0x83649c,u8(0x0ull));
}
B4aa0c7:{NFSU2_TR(0x4aa0c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4aa0c8:{NFSU2_TR(0x4aa0c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aa0cb:L4aa0cb:{c.instructions+=3;NFSU2_TR(0x4aa0cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aa0ce:{NFSU2_TR(0x4aa0ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa0cf:{NFSU2_TR(0x4aa0cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa0d4ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4aa0d4:L4aa0d4:{c.instructions+=1;NFSU2_TR(0x4aa0d4);
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
B4aa0d7:L4aa0d7:{c.instructions+=2;NFSU2_TR(0x4aa0d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4aa0d8:{NFSU2_TR(0x4aa0d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aa0e0:L4aa0e0:{c.instructions+=7;NFSU2_TR(0x4aa0e0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aa0e4:{NFSU2_TR(0x4aa0e4);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4aa0e8:{NFSU2_TR(0x4aa0e8);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4aa0eb:{NFSU2_TR(0x4aa0eb);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4aa0f1:{NFSU2_TR(0x4aa0f1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4aa0f3:{NFSU2_TR(0x4aa0f3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4aa0f6:{NFSU2_TR(0x4aa0f6);
if(r1(R+514)){{goto L4aa102;}}
}
B4aa0f8:L4aa0f8:{c.instructions+=3;NFSU2_TR(0x4aa0f8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4aa0fa:{NFSU2_TR(0x4aa0fa);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4aa100:{NFSU2_TR(0x4aa100);
{goto L4aa117;}
}
B4aa102:L4aa102:{c.instructions+=4;NFSU2_TR(0x4aa102);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4aa108:{NFSU2_TR(0x4aa108);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4aa10a:{NFSU2_TR(0x4aa10a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4aa10d:{NFSU2_TR(0x4aa10d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4aa117;}}
}
B4aa10f:L4aa10f:{c.instructions+=2;NFSU2_TR(0x4aa10f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4aa111:{NFSU2_TR(0x4aa111);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4aa117:L4aa117:{c.instructions+=6;NFSU2_TR(0x4aa117);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4aa11d:{NFSU2_TR(0x4aa11d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4aa121:{NFSU2_TR(0x4aa121);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4aa125:{NFSU2_TR(0x4aa125);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4aa127:{NFSU2_TR(0x4aa127);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4aa12a:{NFSU2_TR(0x4aa12a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4aa132;}}
}
B4aa12c:L4aa12c:{c.instructions+=1;NFSU2_TR(0x4aa12c);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4aa132:L4aa132:{c.instructions+=5;NFSU2_TR(0x4aa132);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B4aa134:{NFSU2_TR(0x4aa134);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4aa13a:{NFSU2_TR(0x4aa13a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4aa13c:{NFSU2_TR(0x4aa13c);
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
B4aa13f:{NFSU2_TR(0x4aa13f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4aa148;}}
}
B4aa141:L4aa141:{c.instructions+=2;NFSU2_TR(0x4aa141);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4aa147:{NFSU2_TR(0x4aa147);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aa148:L4aa148:{c.instructions+=4;NFSU2_TR(0x4aa148);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4aa14e:{NFSU2_TR(0x4aa14e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4aa150:{NFSU2_TR(0x4aa150);
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
B4aa153:{NFSU2_TR(0x4aa153);
if(r1(R+514)){{goto L4aa15b;}}
}
B4aa155:L4aa155:{c.instructions+=1;NFSU2_TR(0x4aa155);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4aa15b:L4aa15b:{c.instructions+=1;NFSU2_TR(0x4aa15b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aa160:L4aa160:{c.instructions+=11;NFSU2_TR(0x4aa160);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4aa164:{NFSU2_TR(0x4aa164);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4aa16a:{NFSU2_TR(0x4aa16a);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4aa170:{NFSU2_TR(0x4aa170);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4aa174:{NFSU2_TR(0x4aa174);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4aa178:{NFSU2_TR(0x4aa178);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B4aa17a:{NFSU2_TR(0x4aa17a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4aa17e:{NFSU2_TR(0x4aa17e);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4aa184:{NFSU2_TR(0x4aa184);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4aa186:{NFSU2_TR(0x4aa186);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4aa189:{NFSU2_TR(0x4aa189);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4aa191;}}
}
B4aa18b:L4aa18b:{c.instructions+=1;NFSU2_TR(0x4aa18b);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4aa191:L4aa191:{c.instructions+=4;NFSU2_TR(0x4aa191);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4aa197:{NFSU2_TR(0x4aa197);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4aa199:{NFSU2_TR(0x4aa199);
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
B4aa19c:{NFSU2_TR(0x4aa19c);
if(r1(R+514)){{goto L4aa1a4;}}
}
B4aa19e:L4aa19e:{c.instructions+=1;NFSU2_TR(0x4aa19e);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4aa1a4:L4aa1a4:{c.instructions+=1;NFSU2_TR(0x4aa1a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aa1b0:L4aa1b0:{c.instructions+=10;NFSU2_TR(0x4aa1b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aa1b4:{NFSU2_TR(0x4aa1b4);
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
B4aa1b7:{NFSU2_TR(0x4aa1b7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa1b8:{NFSU2_TR(0x4aa1b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4aa1bb:{NFSU2_TR(0x4aa1bb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa1bc:{NFSU2_TR(0x4aa1bc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa1bd:{NFSU2_TR(0x4aa1bd);
__builtin_memmove((R+24),(R+4),4);
}
B4aa1bf:{NFSU2_TR(0x4aa1bf);
__builtin_memmove((R+4),gp(0x890118),4);
}
B4aa1c5:{NFSU2_TR(0x4aa1c5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa1c6:{NFSU2_TR(0x4aa1c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa1cbull));
TAIL_STATIC(0x5eef60u,5ee);
}
B4aa1cb:L4aa1cb:{c.instructions+=3;NFSU2_TR(0x4aa1cb);
__builtin_memmove((R+28),(R+0),4);
}
B4aa1cd:{NFSU2_TR(0x4aa1cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4aa1cf:{NFSU2_TR(0x4aa1cf);
if(r1(R+518)){{goto L4aa732;}}
}
B4aa1d5:L4aa1d5:{c.instructions+=8;NFSU2_TR(0x4aa1d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4aa1d8:{NFSU2_TR(0x4aa1d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aa1db:{NFSU2_TR(0x4aa1db);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B4aa1dd:{NFSU2_TR(0x4aa1dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4aa1e0:{NFSU2_TR(0x4aa1e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa1e1:{NFSU2_TR(0x4aa1e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))&u32(r4(U+4))));
}
B4aa1e4:{NFSU2_TR(0x4aa1e4);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4aa1e6:{NFSU2_TR(0x4aa1e6);
if(r1(R+518)){{goto L4aa731;}}
}
B4aa1ec:L4aa1ec:{c.instructions+=3;NFSU2_TR(0x4aa1ec);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(s32(s8(r1(U+4)))));
}
B4aa1f0:{NFSU2_TR(0x4aa1f0);
w4(R+4,u32(0x89e7a0ull));
}
B4aa1f5:{NFSU2_TR(0x4aa1f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa1faull));
TAIL_STATIC(0x5ed990u,5ed);
}
B4aa1fa:L4aa1fa:{c.instructions+=2;NFSU2_TR(0x4aa1fa);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4aa1fc:{NFSU2_TR(0x4aa1fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4aa352;}}
}
B4aa202:L4aa202:{c.instructions+=2;NFSU2_TR(0x4aa202);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4aa209:{NFSU2_TR(0x4aa209);
if(r1(R+518)){{goto L4aa352;}}
}
B4aa20f:L4aa20f:{c.instructions+=3;NFSU2_TR(0x4aa20f);
__builtin_memmove((R+0),gp(0x89e7a0),4);
}
B4aa214:{NFSU2_TR(0x4aa214);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x104eull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x104eull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4aa219:{NFSU2_TR(0x4aa219);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4aa27e;}}
}
B4aa21b:L4aa21b:{c.instructions+=2;NFSU2_TR(0x4aa21b);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1053ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1053ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4aa220:{NFSU2_TR(0x4aa220);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4aa27e;}}
}
B4aa222:L4aa222:{c.instructions+=6;NFSU2_TR(0x4aa222);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4aa225:{NFSU2_TR(0x4aa225);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4aa228:{NFSU2_TR(0x4aa228);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa229:{NFSU2_TR(0x4aa229);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4aa22c:{NFSU2_TR(0x4aa22c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa22e:{NFSU2_TR(0x4aa22e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa233ull));
TAIL_STATIC(0x401050u,401);
}
B4aa233:L4aa233:{c.instructions+=2;NFSU2_TR(0x4aa233);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4aa239:{NFSU2_TR(0x4aa239);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa23eull));
TAIL_STATIC(0x75bed4u,75b);
}
B4aa23e:L4aa23e:{c.instructions+=5;NFSU2_TR(0x4aa23e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4aa241:{NFSU2_TR(0x4aa241);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa242:{NFSU2_TR(0x4aa242);
u8 U[4];
w4(U+0,u32(0x790a04ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa247:{NFSU2_TR(0x4aa247);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa248:{NFSU2_TR(0x4aa248);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa24dull));
TAIL_STATIC(0x537be0u,537);
}
B4aa24d:L4aa24d:{c.instructions+=3;NFSU2_TR(0x4aa24d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aa250:{NFSU2_TR(0x4aa250);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa251:{NFSU2_TR(0x4aa251);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa256ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4aa256:L4aa256:{c.instructions+=3;NFSU2_TR(0x4aa256);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4aa259:{NFSU2_TR(0x4aa259);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa25a:{NFSU2_TR(0x4aa25a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa25full));
TAIL_STATIC(0x50ca00u,50c);
}
B4aa25f:L4aa25f:{c.instructions+=3;NFSU2_TR(0x4aa25f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4aa262:{NFSU2_TR(0x4aa262);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa263:{NFSU2_TR(0x4aa263);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa268ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4aa268:L4aa268:{c.instructions+=4;NFSU2_TR(0x4aa268);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aa26b:{NFSU2_TR(0x4aa26b);
u8 U[4];
w4(U+0,u32(0xb1ee4ca9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa270:{NFSU2_TR(0x4aa270);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa271:{NFSU2_TR(0x4aa271);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa276ull));
TAIL_STATIC(0x50c900u,50c);
}
B4aa276:L4aa276:{c.instructions+=2;NFSU2_TR(0x4aa276);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B4aa279:{NFSU2_TR(0x4aa279);
{goto L4aa39b;}
}
B4aa27e:L4aa27e:{c.instructions+=3;NFSU2_TR(0x4aa27e);
__builtin_memmove((R+0),gp(0x89e7b4),4);
}
B4aa283:{NFSU2_TR(0x4aa283);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4aa285:{NFSU2_TR(0x4aa285);
if(r1(R+518)){{goto L4aa319;}}
}
B4aa28b:L4aa28b:{c.instructions+=6;NFSU2_TR(0x4aa28b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4aa28e:{NFSU2_TR(0x4aa28e);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4aa291:{NFSU2_TR(0x4aa291);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa292:{NFSU2_TR(0x4aa292);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4aa295:{NFSU2_TR(0x4aa295);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa297:{NFSU2_TR(0x4aa297);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa29cull));
TAIL_STATIC(0x401050u,401);
}
B4aa29c:L4aa29c:{c.instructions+=2;NFSU2_TR(0x4aa29c);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4aa2a2:{NFSU2_TR(0x4aa2a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa2a7ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4aa2a7:L4aa2a7:{c.instructions+=4;NFSU2_TR(0x4aa2a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4aa2aa:{NFSU2_TR(0x4aa2aa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa2ab:{NFSU2_TR(0x4aa2ab);
__builtin_memmove((R+20),(R+0),4);
}
B4aa2ad:{NFSU2_TR(0x4aa2ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa2b2ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4aa2b2:L4aa2b2:{c.instructions+=4;NFSU2_TR(0x4aa2b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aa2b5:{NFSU2_TR(0x4aa2b5);
u8 U[4];
w4(U+0,u32(0xb1ee4ca9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa2ba:{NFSU2_TR(0x4aa2ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa2bb:{NFSU2_TR(0x4aa2bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa2c0ull));
TAIL_STATIC(0x50c900u,50c);
}
B4aa2c0:L4aa2c0:{c.instructions+=2;NFSU2_TR(0x4aa2c0);
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
B4aa2c3:{NFSU2_TR(0x4aa2c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa2c8ull));
TAIL_STATIC(0x570a30u,570);
}
B4aa2c8:L4aa2c8:{c.instructions+=4;NFSU2_TR(0x4aa2c8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4aa2cb:{NFSU2_TR(0x4aa2cb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa2cc:{NFSU2_TR(0x4aa2cc);
u8 U[4];
w4(U+0,u32(0x790a04ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa2d1:{NFSU2_TR(0x4aa2d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4aa2f6;}}
}
B4aa2d3:L4aa2d3:{c.instructions+=3;NFSU2_TR(0x4aa2d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4aa2d6:{NFSU2_TR(0x4aa2d6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa2d7:{NFSU2_TR(0x4aa2d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa2dcull));
TAIL_STATIC(0x537be0u,537);
}
B4aa2dc:L4aa2dc:{c.instructions+=3;NFSU2_TR(0x4aa2dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4aa2df:{NFSU2_TR(0x4aa2df);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa2e0:{NFSU2_TR(0x4aa2e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa2e5ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4aa2e5:L4aa2e5:{c.instructions+=3;NFSU2_TR(0x4aa2e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aa2e8:{NFSU2_TR(0x4aa2e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa2e9:{NFSU2_TR(0x4aa2e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa2eeull));
TAIL_STATIC(0x50ca00u,50c);
}
B4aa2ee:L4aa2ee:{c.instructions+=2;NFSU2_TR(0x4aa2ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4aa2f1:{NFSU2_TR(0x4aa2f1);
{goto L4aa39b;}
}
B4aa2f6:L4aa2f6:{c.instructions+=3;NFSU2_TR(0x4aa2f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4aa2f9:{NFSU2_TR(0x4aa2f9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa2fa:{NFSU2_TR(0x4aa2fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa2ffull));
TAIL_STATIC(0x537be0u,537);
}
B4aa2ff:L4aa2ff:{c.instructions+=3;NFSU2_TR(0x4aa2ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4aa302:{NFSU2_TR(0x4aa302);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa303:{NFSU2_TR(0x4aa303);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa308ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4aa308:L4aa308:{c.instructions+=3;NFSU2_TR(0x4aa308);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aa30b:{NFSU2_TR(0x4aa30b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa30c:{NFSU2_TR(0x4aa30c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa311ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4aa311:L4aa311:{c.instructions+=2;NFSU2_TR(0x4aa311);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4aa314:{NFSU2_TR(0x4aa314);
{goto L4aa39b;}
}
B4aa319:L4aa319:{c.instructions+=7;NFSU2_TR(0x4aa319);
__builtin_memmove((R+4),gp(0x890118),4);
}
B4aa31f:{NFSU2_TR(0x4aa31f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4aa325:{NFSU2_TR(0x4aa325);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aa328:{NFSU2_TR(0x4aa328);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa329:{NFSU2_TR(0x4aa329);
u8 U[4];
w4(U+0,u32(0x7909fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa32e:{NFSU2_TR(0x4aa32e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa32f:{NFSU2_TR(0x4aa32f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa334ull));
TAIL_STATIC(0x537be0u,537);
}
B4aa334:L4aa334:{c.instructions+=3;NFSU2_TR(0x4aa334);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4aa337:{NFSU2_TR(0x4aa337);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa338:{NFSU2_TR(0x4aa338);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa33dull));
TAIL_STATIC(0x50ca50u,50c);
}
B4aa33d:L4aa33d:{c.instructions+=6;NFSU2_TR(0x4aa33d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4aa340:{NFSU2_TR(0x4aa340);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4aa341:{NFSU2_TR(0x4aa341);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa342:{NFSU2_TR(0x4aa342);
u8 U[4];
w4(U+0,u32(0x7909f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa347:{NFSU2_TR(0x4aa347);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa348:{NFSU2_TR(0x4aa348);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa34dull));
TAIL_STATIC(0x537be0u,537);
}
B4aa34d:L4aa34d:{c.instructions+=2;NFSU2_TR(0x4aa34d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4aa350:{NFSU2_TR(0x4aa350);
{goto L4aa39b;}
}
B4aa352:L4aa352:{c.instructions+=3;NFSU2_TR(0x4aa352);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aa355:{NFSU2_TR(0x4aa355);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa356:{NFSU2_TR(0x4aa356);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa35bull));
TAIL_STATIC(0x50ca00u,50c);
}
B4aa35b:L4aa35b:{c.instructions+=3;NFSU2_TR(0x4aa35b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4aa35e:{NFSU2_TR(0x4aa35e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa35f:{NFSU2_TR(0x4aa35f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa364ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4aa364:L4aa364:{c.instructions+=3;NFSU2_TR(0x4aa364);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4aa367:{NFSU2_TR(0x4aa367);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa368:{NFSU2_TR(0x4aa368);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa36dull));
TAIL_STATIC(0x50ca00u,50c);
}
B4aa36d:L4aa36d:{c.instructions+=3;NFSU2_TR(0x4aa36d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aa370:{NFSU2_TR(0x4aa370);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa371:{NFSU2_TR(0x4aa371);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa376ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4aa376:L4aa376:{c.instructions+=3;NFSU2_TR(0x4aa376);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4aa379:{NFSU2_TR(0x4aa379);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa37a:{NFSU2_TR(0x4aa37a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa37full));
TAIL_STATIC(0x50ca00u,50c);
}
B4aa37f:L4aa37f:{c.instructions+=6;NFSU2_TR(0x4aa37f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4aa382:{NFSU2_TR(0x4aa382);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4aa383:{NFSU2_TR(0x4aa383);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa384:{NFSU2_TR(0x4aa384);
u8 U[4];
w4(U+0,u32(0x7909f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa389:{NFSU2_TR(0x4aa389);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa38a:{NFSU2_TR(0x4aa38a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa38full));
TAIL_STATIC(0x537be0u,537);
}
B4aa38f:L4aa38f:{c.instructions+=3;NFSU2_TR(0x4aa38f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aa392:{NFSU2_TR(0x4aa392);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa393:{NFSU2_TR(0x4aa393);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa398ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4aa398:L4aa398:{c.instructions+=1;NFSU2_TR(0x4aa398);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4aa39b:L4aa39b:{c.instructions+=5;NFSU2_TR(0x4aa39b);
u8 U[14];
__builtin_memmove((U+6),gp(0x89e7b0),4);
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
B4aa3a2:{NFSU2_TR(0x4aa3a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4aa3aa:{NFSU2_TR(0x4aa3aa);
w4(R+12,u32(0x1ull));
}
B4aa3af:{NFSU2_TR(0x4aa3af);
w4(R+20,u32(0x4ull));
}
B4aa3b4:{NFSU2_TR(0x4aa3b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4aa428;}}
}
B4aa3b6:L4aa3b6:{c.instructions+=3;NFSU2_TR(0x4aa3b6);
__builtin_memmove((R+0),gp(0x89e818),4);
}
B4aa3bb:{NFSU2_TR(0x4aa3bb);
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
B4aa3bd:{NFSU2_TR(0x4aa3bd);
if(r1(R+518)){{goto L4aa428;}}
}
B4aa3bf:L4aa3bf:{c.instructions+=2;NFSU2_TR(0x4aa3bf);
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
B4aa3c4:{NFSU2_TR(0x4aa3c4);
if(r1(R+518)){{goto L4aa428;}}
}
B4aa3c6:L4aa3c6:{c.instructions+=2;NFSU2_TR(0x4aa3c6);
__builtin_memmove((R+4),(R+28),4);
}
B4aa3c8:{NFSU2_TR(0x4aa3c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa3cdull));
TAIL_STATIC(0x5ee270u,5ee);
}
B4aa3cd:L4aa3cd:{c.instructions+=3;NFSU2_TR(0x4aa3cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4aa3cf:{NFSU2_TR(0x4aa3cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4aa3d1:{NFSU2_TR(0x4aa3d1);
if(r1(R+518)){{goto L4aa5d0;}}
}
B4aa3d7:L4aa3d7:{c.instructions+=2;NFSU2_TR(0x4aa3d7);
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
B4aa3dc:{NFSU2_TR(0x4aa3dc);
if(r1(R+518)){{goto L4aa5d0;}}
}
B4aa3e2:L4aa3e2:{c.instructions+=2;NFSU2_TR(0x4aa3e2);
__builtin_memmove((R+4),(R+28),4);
}
B4aa3e4:{NFSU2_TR(0x4aa3e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa3e9ull));
TAIL_STATIC(0x5ee270u,5ee);
}
B4aa3e9:L4aa3e9:{c.instructions+=11;NFSU2_TR(0x4aa3e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4aa3eb:{NFSU2_TR(0x4aa3eb);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B4aa3f0:{NFSU2_TR(0x4aa3f0);
__builtin_memmove((R+4),gp(0x89e818),4);
}
B4aa3f6:{NFSU2_TR(0x4aa3f6);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B4aa3f8:{NFSU2_TR(0x4aa3f8);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B4aa3fa:{NFSU2_TR(0x4aa3fa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa3fb:{NFSU2_TR(0x4aa3fb);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4aa3ff:{NFSU2_TR(0x4aa3ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa400:{NFSU2_TR(0x4aa400);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4aa404:{NFSU2_TR(0x4aa404);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aa408:{NFSU2_TR(0x4aa408);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa40dull));
TAIL_STATIC(0x577240u,577);
}
B4aa40d:L4aa40d:{c.instructions+=6;NFSU2_TR(0x4aa40d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4aa410:{NFSU2_TR(0x4aa410);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4aa414:{NFSU2_TR(0x4aa414);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa415:{NFSU2_TR(0x4aa415);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa41a:{NFSU2_TR(0x4aa41a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa41b:{NFSU2_TR(0x4aa41b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa420ull));
TAIL_STATIC(0x537be0u,537);
}
B4aa420:L4aa420:{c.instructions+=2;NFSU2_TR(0x4aa420);
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
B4aa423:{NFSU2_TR(0x4aa423);
{goto L4aa5e1;}
}
B4aa428:L4aa428:{c.instructions+=2;NFSU2_TR(0x4aa428);
__builtin_memmove((R+4),(R+28),4);
}
B4aa42a:{NFSU2_TR(0x4aa42a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa42full));
TAIL_STATIC(0x5ee270u,5ee);
}
B4aa42f:L4aa42f:{c.instructions+=3;NFSU2_TR(0x4aa42f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4aa431:{NFSU2_TR(0x4aa431);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4aa433:{NFSU2_TR(0x4aa433);
if(r1(R+518)){{goto L4aa5b4;}}
}
B4aa439:L4aa439:{c.instructions+=2;NFSU2_TR(0x4aa439);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4aa43e:{NFSU2_TR(0x4aa43e);
if(r1(R+518)){{goto L4aa5b4;}}
}
B4aa444:L4aa444:{c.instructions+=3;NFSU2_TR(0x4aa444);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4aa447:{NFSU2_TR(0x4aa447);
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
B4aa449:{NFSU2_TR(0x4aa449);
if(r1(R+518)){{goto L4aa4b8;}}
}
B4aa44b:L4aa44b:{c.instructions+=4;NFSU2_TR(0x4aa44b);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B4aa451:{NFSU2_TR(0x4aa451);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aa454:{NFSU2_TR(0x4aa454);
__builtin_memmove((R+4),(R+28),4);
}
B4aa456:{NFSU2_TR(0x4aa456);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa45bull));
TAIL_STATIC(0x5ee290u,5ee);
}
B4aa45b:L4aa45b:{c.instructions+=6;NFSU2_TR(0x4aa45b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4aa45d:{NFSU2_TR(0x4aa45d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aa460:{NFSU2_TR(0x4aa460);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B4aa465:{NFSU2_TR(0x4aa465);
__builtin_memmove((R+4),(R+28),4);
}
B4aa467:{NFSU2_TR(0x4aa467);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aa46a:{NFSU2_TR(0x4aa46a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa46full));
TAIL_STATIC(0x5ee2b0u,5ee);
}
B4aa46f:L4aa46f:{c.instructions+=7;NFSU2_TR(0x4aa46f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4aa471:{NFSU2_TR(0x4aa471);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa472:{NFSU2_TR(0x4aa472);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4aa476:{NFSU2_TR(0x4aa476);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aa47a:{NFSU2_TR(0x4aa47a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa47b:{NFSU2_TR(0x4aa47b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4aa47f:{NFSU2_TR(0x4aa47f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa484ull));
TAIL_STATIC(0x577240u,577);
}
B4aa484:L4aa484:{c.instructions+=3;NFSU2_TR(0x4aa484);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aa487:{NFSU2_TR(0x4aa487);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4aa48b:{NFSU2_TR(0x4aa48b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4aa4b1;}}
}
B4aa48d:L4aa48d:{c.instructions+=3;NFSU2_TR(0x4aa48d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x65ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4aa490:{NFSU2_TR(0x4aa490);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4aa492:{NFSU2_TR(0x4aa492);
if(r1(R+518)){{goto L4aa4b1;}}
}
B4aa494:L4aa494:{c.instructions+=4;NFSU2_TR(0x4aa494);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4aa497:{NFSU2_TR(0x4aa497);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4aa49d:{NFSU2_TR(0x4aa49d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4aa49f:{NFSU2_TR(0x4aa49f);
if(r1(R+518)){{goto L4aa4b5;}}
}
B4aa4a1:L4aa4a1:{c.instructions+=4;NFSU2_TR(0x4aa4a1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa4a3:{NFSU2_TR(0x4aa4a3);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa4a8:{NFSU2_TR(0x4aa4a8);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa4aa:{NFSU2_TR(0x4aa4aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa4afull));
TAIL_STATIC(0x56ed10u,56e);
}
B4aa4af:L4aa4af:{c.instructions+=1;NFSU2_TR(0x4aa4af);
{goto L4aa4b5;}
}
B4aa4b1:L4aa4b1:{c.instructions+=1;NFSU2_TR(0x4aa4b1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4aa4b5:L4aa4b5:{c.instructions+=1;NFSU2_TR(0x4aa4b5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x65ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4aa4b8:L4aa4b8:{c.instructions+=10;NFSU2_TR(0x4aa4b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aa4bb:{NFSU2_TR(0x4aa4bb);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B4aa4c1:{NFSU2_TR(0x4aa4c1);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B4aa4c3:{NFSU2_TR(0x4aa4c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aa4c7:{NFSU2_TR(0x4aa4c7);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4aa4cb:{NFSU2_TR(0x4aa4cb);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4aa4d1:{NFSU2_TR(0x4aa4d1);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4aa4d7:{NFSU2_TR(0x4aa4d7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4aa4d9:{NFSU2_TR(0x4aa4d9);
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
B4aa4dc:{NFSU2_TR(0x4aa4dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4aa4f0;}}
}
B4aa4de:L4aa4de:{c.instructions+=2;NFSU2_TR(0x4aa4de);
__builtin_memmove((R+4),(R+28),4);
}
B4aa4e0:{NFSU2_TR(0x4aa4e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa4e5ull));
TAIL_STATIC(0x5ee270u,5ee);
}
B4aa4e5:L4aa4e5:{c.instructions+=3;NFSU2_TR(0x4aa4e5);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B4aa4eb:{NFSU2_TR(0x4aa4eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+0))));
}
B4aa4ed:{NFSU2_TR(0x4aa4ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aa4f0:L4aa4f0:{c.instructions+=5;NFSU2_TR(0x4aa4f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa4f1:{NFSU2_TR(0x4aa4f1);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4aa4f5:{NFSU2_TR(0x4aa4f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa4f6:{NFSU2_TR(0x4aa4f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4aa4f9:{NFSU2_TR(0x4aa4f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa4feull));
TAIL_STATIC(0x577240u,577);
}
B4aa4fe:L4aa4fe:{c.instructions+=6;NFSU2_TR(0x4aa4fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4aa501:{NFSU2_TR(0x4aa501);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4aa505:{NFSU2_TR(0x4aa505);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa506:{NFSU2_TR(0x4aa506);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa50b:{NFSU2_TR(0x4aa50b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa50c:{NFSU2_TR(0x4aa50c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa511ull));
TAIL_STATIC(0x537be0u,537);
}
B4aa511:L4aa511:{c.instructions+=10;NFSU2_TR(0x4aa511);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B4aa516:{NFSU2_TR(0x4aa516);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B4aa519:{NFSU2_TR(0x4aa519);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aa51d:{NFSU2_TR(0x4aa51d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4aa521:{NFSU2_TR(0x4aa521);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4aa524:{NFSU2_TR(0x4aa524);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4aa52a:{NFSU2_TR(0x4aa52a);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4aa530:{NFSU2_TR(0x4aa530);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4aa532:{NFSU2_TR(0x4aa532);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4aa535:{NFSU2_TR(0x4aa535);
if(r1(R+514)){{goto L4aa5a0;}}
}
B4aa537:L4aa537:{c.instructions+=6;NFSU2_TR(0x4aa537);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4aa53a:{NFSU2_TR(0x4aa53a);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4aa53e:{NFSU2_TR(0x4aa53e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa53f:{NFSU2_TR(0x4aa53f);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa544:{NFSU2_TR(0x4aa544);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa545:{NFSU2_TR(0x4aa545);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa54aull));
TAIL_STATIC(0x537be0u,537);
}
B4aa54a:L4aa54a:{c.instructions+=4;NFSU2_TR(0x4aa54a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4aa54d:{NFSU2_TR(0x4aa54d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4aa550:{NFSU2_TR(0x4aa550);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4aa552:{NFSU2_TR(0x4aa552);
if(r1(R+518)){{goto L4aa562;}}
}
B4aa554:L4aa554:{c.instructions+=5;NFSU2_TR(0x4aa554);
u8 U[4];
w4(U+0,u32(0xa8247197ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa559:{NFSU2_TR(0x4aa559);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa55b:{NFSU2_TR(0x4aa55b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4aa55f:{NFSU2_TR(0x4aa55f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa560:{NFSU2_TR(0x4aa560);
{goto L4aa56e;}
}
B4aa562:L4aa562:{c.instructions+=4;NFSU2_TR(0x4aa562);
u8 U[4];
w4(U+0,u32(0xfc1b498aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa567:{NFSU2_TR(0x4aa567);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa569:{NFSU2_TR(0x4aa569);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4aa56d:{NFSU2_TR(0x4aa56d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa56e:L4aa56e:{c.instructions+=1;NFSU2_TR(0x4aa56e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa573ull));
TAIL_STATIC(0x4ffa50u,4ff);
}
B4aa573:L4aa573:{c.instructions+=7;NFSU2_TR(0x4aa573);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aa576:{NFSU2_TR(0x4aa576);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4aa579:{NFSU2_TR(0x4aa579);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4aa57d:{NFSU2_TR(0x4aa57d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa57e:{NFSU2_TR(0x4aa57e);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa583:{NFSU2_TR(0x4aa583);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa584:{NFSU2_TR(0x4aa584);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa589ull));
TAIL_STATIC(0x537be0u,537);
}
B4aa589:L4aa589:{c.instructions+=3;NFSU2_TR(0x4aa589);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4aa58c:{NFSU2_TR(0x4aa58c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa58d:{NFSU2_TR(0x4aa58d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa592ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4aa592:L4aa592:{c.instructions+=3;NFSU2_TR(0x4aa592);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4aa595:{NFSU2_TR(0x4aa595);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa596:{NFSU2_TR(0x4aa596);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa59bull));
TAIL_STATIC(0x50ca50u,50c);
}
B4aa59b:L4aa59b:{c.instructions+=2;NFSU2_TR(0x4aa59b);
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
B4aa59e:{NFSU2_TR(0x4aa59e);
{goto L4aa5e1;}
}
B4aa5a0:L4aa5a0:{c.instructions+=3;NFSU2_TR(0x4aa5a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aa5a3:{NFSU2_TR(0x4aa5a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa5a4:{NFSU2_TR(0x4aa5a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa5a9ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4aa5a9:L4aa5a9:{c.instructions+=3;NFSU2_TR(0x4aa5a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4aa5ac:{NFSU2_TR(0x4aa5ac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa5ad:{NFSU2_TR(0x4aa5ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa5b2ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4aa5b2:L4aa5b2:{c.instructions+=1;NFSU2_TR(0x4aa5b2);
{goto L4aa5de;}
}
B4aa5b4:L4aa5b4:{c.instructions+=2;NFSU2_TR(0x4aa5b4);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+20))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4aa5ba:{NFSU2_TR(0x4aa5ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4aa5d0;}}
}
B4aa5bc:L4aa5bc:{c.instructions+=2;NFSU2_TR(0x4aa5bc);
u8 U[8];
__builtin_memmove((U+0),gp(0x83aab4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4aa5c3:{NFSU2_TR(0x4aa5c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4aa5d0;}}
}
B4aa5c5:L4aa5c5:{c.instructions+=4;NFSU2_TR(0x4aa5c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4aa5c8:{NFSU2_TR(0x4aa5c8);
u8 U[4];
w4(U+0,u32(0x9b07307full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa5cd:{NFSU2_TR(0x4aa5cd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa5ce:{NFSU2_TR(0x4aa5ce);
{goto L4aa5d9;}
}
B4aa5d0:L4aa5d0:{c.instructions+=3;NFSU2_TR(0x4aa5d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aa5d3:{NFSU2_TR(0x4aa5d3);
u8 U[4];
w4(U+0,u32(0x61c9b7a2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa5d8:{NFSU2_TR(0x4aa5d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa5d9:L4aa5d9:{c.instructions+=1;NFSU2_TR(0x4aa5d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa5deull));
TAIL_STATIC(0x50c900u,50c);
}
B4aa5de:L4aa5de:{c.instructions+=1;NFSU2_TR(0x4aa5de);
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
B4aa5e1:L4aa5e1:{c.instructions+=2;NFSU2_TR(0x4aa5e1);
__builtin_memmove((R+4),(R+28),4);
}
B4aa5e3:{NFSU2_TR(0x4aa5e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa5e8ull));
TAIL_STATIC(0x5ee2b0u,5ee);
}
B4aa5e8:L4aa5e8:{c.instructions+=8;NFSU2_TR(0x4aa5e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4aa5ea:{NFSU2_TR(0x4aa5ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aa5ee:{NFSU2_TR(0x4aa5ee);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4aa5f2:{NFSU2_TR(0x4aa5f2);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4aa5f8:{NFSU2_TR(0x4aa5f8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4aa5fe:{NFSU2_TR(0x4aa5fe);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4aa600:{NFSU2_TR(0x4aa600);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4aa603:{NFSU2_TR(0x4aa603);
if(r1(R+514)){{goto L4aa61b;}}
}
B4aa605:L4aa605:{c.instructions+=5;NFSU2_TR(0x4aa605);
u8 U[4];
w4(U+0,u32(0x7909ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa60a:{NFSU2_TR(0x4aa60a);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4aa60e:{NFSU2_TR(0x4aa60e);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa610:{NFSU2_TR(0x4aa610);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa611:{NFSU2_TR(0x4aa611);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa616ull));
TAIL_STATIC(0x50c960u,50c);
}
B4aa616:L4aa616:{c.instructions+=2;NFSU2_TR(0x4aa616);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4aa619:{NFSU2_TR(0x4aa619);
{goto L4aa62a;}
}
B4aa61b:L4aa61b:{c.instructions+=5;NFSU2_TR(0x4aa61b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa61c:{NFSU2_TR(0x4aa61c);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4aa620:{NFSU2_TR(0x4aa620);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa621:{NFSU2_TR(0x4aa621);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4aa625:{NFSU2_TR(0x4aa625);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa62aull));
TAIL_STATIC(0x577240u,577);
}
B4aa62a:L4aa62a:{c.instructions+=6;NFSU2_TR(0x4aa62a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4aa62d:{NFSU2_TR(0x4aa62d);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4aa631:{NFSU2_TR(0x4aa631);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa632:{NFSU2_TR(0x4aa632);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa637:{NFSU2_TR(0x4aa637);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa638:{NFSU2_TR(0x4aa638);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa63dull));
TAIL_STATIC(0x537be0u,537);
}
B4aa63d:L4aa63d:{c.instructions+=4;NFSU2_TR(0x4aa63d);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B4aa642:{NFSU2_TR(0x4aa642);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4aa645:{NFSU2_TR(0x4aa645);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4aa647:{NFSU2_TR(0x4aa647);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4aa652;}}
}
B4aa649:L4aa649:{c.instructions+=3;NFSU2_TR(0x4aa649);
__builtin_memmove((R+0),gp(0x890104),4);
}
B4aa64e:{NFSU2_TR(0x4aa64e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4aa650:{NFSU2_TR(0x4aa650);
if(r1(R+518)){{goto L4aa6ac;}}
}
B4aa652:L4aa652:{c.instructions+=2;NFSU2_TR(0x4aa652);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7c0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4aa659:{NFSU2_TR(0x4aa659);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4aa6ac;}}
}
B4aa65b:L4aa65b:{c.instructions+=3;NFSU2_TR(0x4aa65b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4aa65e:{NFSU2_TR(0x4aa65e);
u8 U[4];
w4(U+0,u32(0x7909d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa663:{NFSU2_TR(0x4aa663);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa668ull));
TAIL_STATIC(0x505450u,505);
}
B4aa668:L4aa668:{c.instructions+=3;NFSU2_TR(0x4aa668);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa669:{NFSU2_TR(0x4aa669);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa66a:{NFSU2_TR(0x4aa66a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa66full));
TAIL_STATIC(0x5379c0u,537);
}
B4aa66f:L4aa66f:{c.instructions+=2;NFSU2_TR(0x4aa66f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa670:{NFSU2_TR(0x4aa670);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa675ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4aa675:L4aa675:{c.instructions+=3;NFSU2_TR(0x4aa675);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4aa678:{NFSU2_TR(0x4aa678);
u8 U[4];
w4(U+0,u32(0x7909c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa67d:{NFSU2_TR(0x4aa67d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa682ull));
TAIL_STATIC(0x505450u,505);
}
B4aa682:L4aa682:{c.instructions+=3;NFSU2_TR(0x4aa682);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa683:{NFSU2_TR(0x4aa683);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa684:{NFSU2_TR(0x4aa684);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa689ull));
TAIL_STATIC(0x5379c0u,537);
}
B4aa689:L4aa689:{c.instructions+=2;NFSU2_TR(0x4aa689);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa68a:{NFSU2_TR(0x4aa68a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa68full));
TAIL_STATIC(0x50ca00u,50c);
}
B4aa68f:L4aa68f:{c.instructions+=3;NFSU2_TR(0x4aa68f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4aa692:{NFSU2_TR(0x4aa692);
u8 U[4];
w4(U+0,u32(0x7909b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa697:{NFSU2_TR(0x4aa697);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa69cull));
TAIL_STATIC(0x505450u,505);
}
B4aa69c:L4aa69c:{c.instructions+=3;NFSU2_TR(0x4aa69c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa69d:{NFSU2_TR(0x4aa69d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa69e:{NFSU2_TR(0x4aa69e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa6a3ull));
TAIL_STATIC(0x5379c0u,537);
}
B4aa6a3:L4aa6a3:{c.instructions+=2;NFSU2_TR(0x4aa6a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa6a4:{NFSU2_TR(0x4aa6a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa6a9ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4aa6a9:L4aa6a9:{c.instructions+=1;NFSU2_TR(0x4aa6a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B4aa6ac:L4aa6ac:{c.instructions+=2;NFSU2_TR(0x4aa6ac);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+20))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4aa6b2:{NFSU2_TR(0x4aa6b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4aa6fa;}}
}
B4aa6b4:L4aa6b4:{c.instructions+=2;NFSU2_TR(0x4aa6b4);
u8 U[14];
__builtin_memmove((U+6),gp(0x83aab4),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4aa6bb:{NFSU2_TR(0x4aa6bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4aa6fa;}}
}
B4aa6bd:L4aa6bd:{c.instructions+=2;NFSU2_TR(0x4aa6bd);
w4(R+4,u32(0x83aab4ull));
}
B4aa6c2:{NFSU2_TR(0x4aa6c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa6c7ull));
TAIL_STATIC(0x502780u,502);
}
B4aa6c7:L4aa6c7:{c.instructions+=2;NFSU2_TR(0x4aa6c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4aa6c9:{NFSU2_TR(0x4aa6c9);
if(r1(R+518)){{goto L4aa6fa;}}
}
B4aa6cb:L4aa6cb:{c.instructions+=5;NFSU2_TR(0x4aa6cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4aa6cf:{NFSU2_TR(0x4aa6cf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa6d0:{NFSU2_TR(0x4aa6d0);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4aa6d4:{NFSU2_TR(0x4aa6d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa6d5:{NFSU2_TR(0x4aa6d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa6daull));
TAIL_STATIC(0x577240u,577);
}
B4aa6da:L4aa6da:{c.instructions+=6;NFSU2_TR(0x4aa6da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4aa6dd:{NFSU2_TR(0x4aa6dd);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4aa6e1:{NFSU2_TR(0x4aa6e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa6e2:{NFSU2_TR(0x4aa6e2);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa6e7:{NFSU2_TR(0x4aa6e7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa6e8:{NFSU2_TR(0x4aa6e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa6edull));
TAIL_STATIC(0x537be0u,537);
}
B4aa6ed:L4aa6ed:{c.instructions+=7;NFSU2_TR(0x4aa6ed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4aa6f0:{NFSU2_TR(0x4aa6f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4aa6f1:{NFSU2_TR(0x4aa6f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4aa6f2:{NFSU2_TR(0x4aa6f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4aa6f3:{NFSU2_TR(0x4aa6f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4aa6f4:{NFSU2_TR(0x4aa6f4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x54ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x54ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x54ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4aa6f7:{NFSU2_TR(0x4aa6f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aa6fa:L4aa6fa:{c.instructions+=3;NFSU2_TR(0x4aa6fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aa6fe:{NFSU2_TR(0x4aa6fe);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4aa701:{NFSU2_TR(0x4aa701);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4aa731;}}
}
B4aa703:L4aa703:{c.instructions+=9;NFSU2_TR(0x4aa703);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4aa706:{NFSU2_TR(0x4aa706);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4aa70a:{NFSU2_TR(0x4aa70a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa70b:{NFSU2_TR(0x4aa70b);
u8 U[4];
w4(U+0,u32(0x7909a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa710:{NFSU2_TR(0x4aa710);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa711:{NFSU2_TR(0x4aa711);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0xc3230000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4aa719:{NFSU2_TR(0x4aa719);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x436b0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4aa721:{NFSU2_TR(0x4aa721);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x42840000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4aa729:{NFSU2_TR(0x4aa729);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa72eull));
TAIL_STATIC(0x542630u,542);
}
B4aa72e:L4aa72e:{c.instructions+=1;NFSU2_TR(0x4aa72e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4aa731:L4aa731:{c.instructions+=1;NFSU2_TR(0x4aa731);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4aa732:L4aa732:{c.instructions+=5;NFSU2_TR(0x4aa732);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4aa733:{NFSU2_TR(0x4aa733);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4aa734:{NFSU2_TR(0x4aa734);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4aa735:{NFSU2_TR(0x4aa735);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x54ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x54ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x54ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4aa738:{NFSU2_TR(0x4aa738);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aa740:L4aa740:{c.instructions+=5;NFSU2_TR(0x4aa740);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa741:{NFSU2_TR(0x4aa741);
__builtin_memmove((R+24),(R+4),4);
}
B4aa743:{NFSU2_TR(0x4aa743);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4aa746:{NFSU2_TR(0x4aa746);
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
B4aa748:{NFSU2_TR(0x4aa748);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4aa796;}}
}
B4aa74a:L4aa74a:{c.instructions+=9;NFSU2_TR(0x4aa74a);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B4aa74f:{NFSU2_TR(0x4aa74f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aa752:{NFSU2_TR(0x4aa752);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4aa755:{NFSU2_TR(0x4aa755);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa757:{NFSU2_TR(0x4aa757);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4aa75d:{NFSU2_TR(0x4aa75d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4aa763:{NFSU2_TR(0x4aa763);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4aa765:{NFSU2_TR(0x4aa765);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4aa768:{NFSU2_TR(0x4aa768);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4aa775;}}
}
B4aa76a:L4aa76a:{c.instructions+=4;NFSU2_TR(0x4aa76a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4aa76d:{NFSU2_TR(0x4aa76d);
u8 U[4];
w4(U+0,u32(0x790a18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa772:{NFSU2_TR(0x4aa772);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa773:{NFSU2_TR(0x4aa773);
{goto L4aa77e;}
}
B4aa775:L4aa775:{c.instructions+=3;NFSU2_TR(0x4aa775);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4aa778:{NFSU2_TR(0x4aa778);
u8 U[4];
w4(U+0,u32(0x790a0cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa77d:{NFSU2_TR(0x4aa77d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa77e:L4aa77e:{c.instructions+=1;NFSU2_TR(0x4aa77e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa783ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4aa783:L4aa783:{c.instructions+=4;NFSU2_TR(0x4aa783);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aa786:{NFSU2_TR(0x4aa786);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4aa789:{NFSU2_TR(0x4aa789);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa78a:{NFSU2_TR(0x4aa78a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa78full));
TAIL_STATIC(0x50ca50u,50c);
}
B4aa78f:L4aa78f:{c.instructions+=2;NFSU2_TR(0x4aa78f);
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
B4aa792:{NFSU2_TR(0x4aa792);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4aa796:L4aa796:{c.instructions+=2;NFSU2_TR(0x4aa796);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4aa797:{NFSU2_TR(0x4aa797);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aa7a0:L4aa7a0:{c.instructions+=7;NFSU2_TR(0x4aa7a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa7a1:{NFSU2_TR(0x4aa7a1);
__builtin_memmove((R+20),(R+16),4);
}
B4aa7a3:{NFSU2_TR(0x4aa7a3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4aa7a6:{NFSU2_TR(0x4aa7a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B4aa7a9:{NFSU2_TR(0x4aa7a9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa7aa:{NFSU2_TR(0x4aa7aa);
w4(R+4,u32(0x89cf48ull));
}
B4aa7af:{NFSU2_TR(0x4aa7af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa7b4ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B4aa7b4:L4aa7b4:{c.instructions+=2;NFSU2_TR(0x4aa7b4);
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
B4aa7b6:{NFSU2_TR(0x4aa7b6);
if(r1(R+518)){{goto L4aa87c;}}
}
B4aa7bc:L4aa7bc:{c.instructions+=4;NFSU2_TR(0x4aa7bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aa7bf:{NFSU2_TR(0x4aa7bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89cf50ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4aa7c6:{NFSU2_TR(0x4aa7c6);
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
B4aa7c8:{NFSU2_TR(0x4aa7c8);
if(r1(R+518)){{goto L4aa87c;}}
}
B4aa7ce:L4aa7ce:{c.instructions+=3;NFSU2_TR(0x4aa7ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa7cf:{NFSU2_TR(0x4aa7cf);
w4(R+4,u32(0x89cf48ull));
}
B4aa7d4:{NFSU2_TR(0x4aa7d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa7d9ull));
TAIL_STATIC(0x5f0220u,5f0);
}
B4aa7d9:L4aa7d9:{c.instructions+=10;NFSU2_TR(0x4aa7d9);
__builtin_memmove((R+4),gp(0x7f68d0),4);
}
B4aa7df:{NFSU2_TR(0x4aa7df);
__builtin_memmove((R+8),gp(0x7f68d4),4);
}
B4aa7e5:{NFSU2_TR(0x4aa7e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aa7e9:{NFSU2_TR(0x4aa7e9);
__builtin_memmove((R+4),gp(0x7f68d8),4);
}
B4aa7ef:{NFSU2_TR(0x4aa7ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aa7f3:{NFSU2_TR(0x4aa7f3);
u8 U[8];
__builtin_memmove((U+0),gp(0x89cf4c),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4aa7f9:{NFSU2_TR(0x4aa7f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aa7fd:{NFSU2_TR(0x4aa7fd);
__builtin_memmove((R+8),gp(0x7f68dc),4);
}
B4aa803:{NFSU2_TR(0x4aa803);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aa807:{NFSU2_TR(0x4aa807);
if(r1(R+518)){{goto L4aa83a;}}
}
B4aa809:L4aa809:{c.instructions+=2;NFSU2_TR(0x4aa809);
__builtin_memmove((R+4),(R+0),4);
}
B4aa80b:{NFSU2_TR(0x4aa80b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa810ull));
TAIL_STATIC(0x5fe290u,5fe);
}
B4aa810:L4aa810:{c.instructions+=2;NFSU2_TR(0x4aa810);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4aa812:{NFSU2_TR(0x4aa812);
if(r1(R+518)){{goto L4aa83a;}}
}
B4aa814:L4aa814:{c.instructions+=8;NFSU2_TR(0x4aa814);
__builtin_memmove((R+0),gp(0x7f68e0),4);
}
B4aa819:{NFSU2_TR(0x4aa819);
__builtin_memmove((R+4),gp(0x7f68e4),4);
}
B4aa81f:{NFSU2_TR(0x4aa81f);
__builtin_memmove((R+8),gp(0x7f68e8),4);
}
B4aa825:{NFSU2_TR(0x4aa825);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aa829:{NFSU2_TR(0x4aa829);
__builtin_memmove((R+0),gp(0x7f68ec),4);
}
B4aa82e:{NFSU2_TR(0x4aa82e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aa832:{NFSU2_TR(0x4aa832);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aa836:{NFSU2_TR(0x4aa836);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aa83a:L4aa83a:{c.instructions+=2;NFSU2_TR(0x4aa83a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4aa83e:{NFSU2_TR(0x4aa83e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa843ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4aa843:L4aa843:{c.instructions+=4;NFSU2_TR(0x4aa843);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4aa847:{NFSU2_TR(0x4aa847);
__builtin_memmove((R+24),(R+0),4);
}
B4aa849:{NFSU2_TR(0x4aa849);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B4aa84c:{NFSU2_TR(0x4aa84c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa851ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4aa851:L4aa851:{c.instructions+=4;NFSU2_TR(0x4aa851);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4aa855:{NFSU2_TR(0x4aa855);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
}
B4aa857:{NFSU2_TR(0x4aa857);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B4aa85a:{NFSU2_TR(0x4aa85a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa85full));
TAIL_STATIC(0x75bed4u,75b);
}
B4aa85f:L4aa85f:{c.instructions+=4;NFSU2_TR(0x4aa85f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4aa863:{NFSU2_TR(0x4aa863);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
}
B4aa865:{NFSU2_TR(0x4aa865);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B4aa868:{NFSU2_TR(0x4aa868);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa86dull));
TAIL_STATIC(0x75bed4u,75b);
}
B4aa86d:L4aa86d:{c.instructions+=5;NFSU2_TR(0x4aa86d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4aa870:{NFSU2_TR(0x4aa870);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
}
B4aa872:{NFSU2_TR(0x4aa872);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa873:{NFSU2_TR(0x4aa873);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa874:{NFSU2_TR(0x4aa874);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa879ull));
TAIL_STATIC(0x51d7f0u,51d);
}
B4aa879:L4aa879:{c.instructions+=1;NFSU2_TR(0x4aa879);
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
B4aa87c:L4aa87c:{c.instructions+=4;NFSU2_TR(0x4aa87c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4aa87d:{NFSU2_TR(0x4aa87d);
__builtin_memmove((R+16),(R+20),4);
}
B4aa87f:{NFSU2_TR(0x4aa87f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4aa880:{NFSU2_TR(0x4aa880);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aa890:L4aa890:{c.instructions+=7;NFSU2_TR(0x4aa890);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aa894:{NFSU2_TR(0x4aa894);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa895:{NFSU2_TR(0x4aa895);
__builtin_memmove((R+28),(R+4),4);
}
B4aa897:{NFSU2_TR(0x4aa897);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4aa89a:{NFSU2_TR(0x4aa89a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aa89d:{NFSU2_TR(0x4aa89d);
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
B4aa89f:{NFSU2_TR(0x4aa89f);
if(r1(R+518)){{goto L4aa9e2;}}
}
B4aa8a5:L4aa8a5:{c.instructions+=8;NFSU2_TR(0x4aa8a5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa8a6:{NFSU2_TR(0x4aa8a6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa8a7:{NFSU2_TR(0x4aa8a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+20,u32(s32(s8(r1(U+4)))));
}
B4aa8ab:{NFSU2_TR(0x4aa8ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aa8b1:{NFSU2_TR(0x4aa8b1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4aa8b3:{NFSU2_TR(0x4aa8b3);
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
B4aa8b5:{NFSU2_TR(0x4aa8b5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa8b6:{NFSU2_TR(0x4aa8b6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4aa9df;}}
}
B4aa8bc:L4aa8bc:{c.instructions+=2;NFSU2_TR(0x4aa8bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x174ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4aa8c2:{NFSU2_TR(0x4aa8c2);
{goto L4aa8d0;}
}
B4aa8d0:L4aa8d0:{c.instructions+=3;NFSU2_TR(0x4aa8d0);
__builtin_memmove((R+8),gp(0x890118),4);
}
B4aa8d6:{NFSU2_TR(0x4aa8d6);
u8 U[22];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+14)));
w4(U+18,u32(u32(r4(R+12))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4aa8d9:{NFSU2_TR(0x4aa8d9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4aa9df;}}
}
B4aa8df:L4aa8df:{c.instructions+=5;NFSU2_TR(0x4aa8df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aa8e2:{NFSU2_TR(0x4aa8e2);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4aa8e5:{NFSU2_TR(0x4aa8e5);
u8 U[24];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+20))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B4aa8e9:{NFSU2_TR(0x4aa8e9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa8eb:{NFSU2_TR(0x4aa8eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4aa943;}}
}
B4aa8ed:L4aa8ed:{c.instructions+=4;NFSU2_TR(0x4aa8ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4aa8f0:{NFSU2_TR(0x4aa8f0);
u8 U[4];
w4(U+0,u32(0x790a2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa8f5:{NFSU2_TR(0x4aa8f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa8f6:{NFSU2_TR(0x4aa8f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa8fbull));
TAIL_STATIC(0x51cf70u,51c);
}
B4aa8fb:L4aa8fb:{c.instructions+=5;NFSU2_TR(0x4aa8fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4aa8fd:{NFSU2_TR(0x4aa8fd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa8ff:{NFSU2_TR(0x4aa8ff);
u8 U[4];
w4(U+0,u32(0x790a2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa904:{NFSU2_TR(0x4aa904);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa905:{NFSU2_TR(0x4aa905);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa90aull));
TAIL_STATIC(0x51cf70u,51c);
}
B4aa90a:L4aa90a:{c.instructions+=3;NFSU2_TR(0x4aa90a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4aa90d:{NFSU2_TR(0x4aa90d);
w4(R+4,u32(0x89cf48ull));
}
B4aa912:{NFSU2_TR(0x4aa912);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa917ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B4aa917:L4aa917:{c.instructions+=4;NFSU2_TR(0x4aa917);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4aa919:{NFSU2_TR(0x4aa919);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4aa91b:{NFSU2_TR(0x4aa91b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aa91e:{NFSU2_TR(0x4aa91e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4aa933;}}
}
B4aa920:L4aa920:{c.instructions+=5;NFSU2_TR(0x4aa920);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4aa923:{NFSU2_TR(0x4aa923);
u8 U[16];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B4aa927:{NFSU2_TR(0x4aa927);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa928:{NFSU2_TR(0x4aa928);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa929:{NFSU2_TR(0x4aa929);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa92eull));
TAIL_STATIC(0x50c900u,50c);
}
B4aa92e:L4aa92e:{c.instructions+=2;NFSU2_TR(0x4aa92e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4aa931:{NFSU2_TR(0x4aa931);
{goto L4aa99c;}
}
B4aa933:L4aa933:{c.instructions+=6;NFSU2_TR(0x4aa933);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4aa936:{NFSU2_TR(0x4aa936);
u8 U[12];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B4aa93a:{NFSU2_TR(0x4aa93a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa93b:{NFSU2_TR(0x4aa93b);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa940:{NFSU2_TR(0x4aa940);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa941:{NFSU2_TR(0x4aa941);
{goto L4aa994;}
}
B4aa943:L4aa943:{c.instructions+=4;NFSU2_TR(0x4aa943);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aa946:{NFSU2_TR(0x4aa946);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa94b:{NFSU2_TR(0x4aa94b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa94c:{NFSU2_TR(0x4aa94c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa951ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4aa951:L4aa951:{c.instructions+=5;NFSU2_TR(0x4aa951);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4aa953:{NFSU2_TR(0x4aa953);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa955:{NFSU2_TR(0x4aa955);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa95a:{NFSU2_TR(0x4aa95a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa95b:{NFSU2_TR(0x4aa95b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa960ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4aa960:L4aa960:{c.instructions+=3;NFSU2_TR(0x4aa960);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4aa963:{NFSU2_TR(0x4aa963);
w4(R+4,u32(0x89cf48ull));
}
B4aa968:{NFSU2_TR(0x4aa968);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa96dull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B4aa96d:L4aa96d:{c.instructions+=5;NFSU2_TR(0x4aa96d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4aa970:{NFSU2_TR(0x4aa970);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4aa972:{NFSU2_TR(0x4aa972);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4aa975:{NFSU2_TR(0x4aa975);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4aa977:{NFSU2_TR(0x4aa977);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4aa989;}}
}
B4aa979:L4aa979:{c.instructions+=4;NFSU2_TR(0x4aa979);
u8 U[16];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4aa97d:{NFSU2_TR(0x4aa97d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa97e:{NFSU2_TR(0x4aa97e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa97f:{NFSU2_TR(0x4aa97f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa984ull));
TAIL_STATIC(0x50c900u,50c);
}
B4aa984:L4aa984:{c.instructions+=2;NFSU2_TR(0x4aa984);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4aa987:{NFSU2_TR(0x4aa987);
{goto L4aa99c;}
}
B4aa989:L4aa989:{c.instructions+=4;NFSU2_TR(0x4aa989);
u8 U[12];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B4aa98d:{NFSU2_TR(0x4aa98d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa98e:{NFSU2_TR(0x4aa98e);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa993:{NFSU2_TR(0x4aa993);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa994:L4aa994:{c.instructions+=1;NFSU2_TR(0x4aa994);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa999ull));
TAIL_STATIC(0x537be0u,537);
}
B4aa999:L4aa999:{c.instructions+=1;NFSU2_TR(0x4aa999);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4aa99c:L4aa99c:{c.instructions+=8;NFSU2_TR(0x4aa99c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4aa99f:{NFSU2_TR(0x4aa99f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4aa9a1:{NFSU2_TR(0x4aa9a1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4aa9a4:{NFSU2_TR(0x4aa9a4);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4aa9a8:{NFSU2_TR(0x4aa9a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa9a9:{NFSU2_TR(0x4aa9a9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa9aa:{NFSU2_TR(0x4aa9aa);
__builtin_memmove((R+4),(R+28),4);
}
B4aa9ac:{NFSU2_TR(0x4aa9ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa9b1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4aa7a0u);}goto L4aa7a0;}
}
B4aa9b1:L4aa9b1:{c.instructions+=8;NFSU2_TR(0x4aa9b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4aa9b4:{NFSU2_TR(0x4aa9b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4aa9b7:{NFSU2_TR(0x4aa9b7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4aa9ba:{NFSU2_TR(0x4aa9ba);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4aa9be:{NFSU2_TR(0x4aa9be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa9bf:{NFSU2_TR(0x4aa9bf);
u8 U[4];
w4(U+0,u32(0x790a24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa9c4:{NFSU2_TR(0x4aa9c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa9c5:{NFSU2_TR(0x4aa9c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aa9caull));
TAIL_STATIC(0x537be0u,537);
}
B4aa9ca:L4aa9ca:{c.instructions+=6;NFSU2_TR(0x4aa9ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aa9d0:{NFSU2_TR(0x4aa9d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4aa9d3:{NFSU2_TR(0x4aa9d3);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4aa9d4:{NFSU2_TR(0x4aa9d4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B4aa9d7:{NFSU2_TR(0x4aa9d7);
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
B4aa9d9:{NFSU2_TR(0x4aa9d9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4aa8d0u);}goto L4aa8d0;}}
}
B4aa9df:L4aa9df:{c.instructions+=3;NFSU2_TR(0x4aa9df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4aa9e0:{NFSU2_TR(0x4aa9e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4aa9e1:{NFSU2_TR(0x4aa9e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4aa9e2:L4aa9e2:{c.instructions+=2;NFSU2_TR(0x4aa9e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4aa9e3:{NFSU2_TR(0x4aa9e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aa9f0:L4aa9f0:{c.instructions+=8;NFSU2_TR(0x4aa9f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aa9f4:{NFSU2_TR(0x4aa9f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B4aa9f7:{NFSU2_TR(0x4aa9f7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aa9f8:{NFSU2_TR(0x4aa9f8);
__builtin_memmove((R+28),(R+4),4);
}
B4aa9fa:{NFSU2_TR(0x4aa9fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4aa9fd:{NFSU2_TR(0x4aa9fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aaa00:{NFSU2_TR(0x4aaa00);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4aaa02:{NFSU2_TR(0x4aaa02);
if(r1(R+518)){{goto L4aac1f;}}
}
B4aaa08:L4aaa08:{c.instructions+=9;NFSU2_TR(0x4aaa08);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B4aaa0c:{NFSU2_TR(0x4aaa0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aaa12:{NFSU2_TR(0x4aaa12);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aaa13:{NFSU2_TR(0x4aaa13);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aaa14:{NFSU2_TR(0x4aaa14);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4aaa16:{NFSU2_TR(0x4aaa16);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4aaa18:{NFSU2_TR(0x4aaa18);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aaa19:{NFSU2_TR(0x4aaa19);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aaa1d:{NFSU2_TR(0x4aaa1d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4aac1c;}}
}
B4aaa23:L4aaa23:{c.instructions+=2;NFSU2_TR(0x4aaa23);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x174ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4aaa29:{NFSU2_TR(0x4aaa29);
__builtin_memmove((R+16),(R+16),4);
}
B4aaa30:L4aaa30:{c.instructions+=3;NFSU2_TR(0x4aaa30);
__builtin_memmove((R+0),gp(0x890118),4);
}
B4aaa35:{NFSU2_TR(0x4aaa35);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+8)));
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B4aaa38:{NFSU2_TR(0x4aaa38);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4aac1c;}}
}
B4aaa3e:L4aaa3e:{c.instructions+=6;NFSU2_TR(0x4aaa3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4aaa41:{NFSU2_TR(0x4aaa41);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4aaa45:{NFSU2_TR(0x4aaa45);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4aaa48:{NFSU2_TR(0x4aaa48);
u8 U[24];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+8))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B4aaa4c:{NFSU2_TR(0x4aaa4c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aaa4e:{NFSU2_TR(0x4aaa4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4aaaa9;}}
}
B4aaa50:L4aaa50:{c.instructions+=4;NFSU2_TR(0x4aaa50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aaa53:{NFSU2_TR(0x4aaa53);
u8 U[4];
w4(U+0,u32(0x790a2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aaa58:{NFSU2_TR(0x4aaa58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aaa59:{NFSU2_TR(0x4aaa59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aaa5eull));
TAIL_STATIC(0x51cf70u,51c);
}
B4aaa5e:L4aaa5e:{c.instructions+=5;NFSU2_TR(0x4aaa5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4aaa60:{NFSU2_TR(0x4aaa60);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aaa62:{NFSU2_TR(0x4aaa62);
u8 U[4];
w4(U+0,u32(0x790a2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aaa67:{NFSU2_TR(0x4aaa67);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aaa68:{NFSU2_TR(0x4aaa68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aaa6dull));
TAIL_STATIC(0x51cf70u,51c);
}
B4aaa6d:L4aaa6d:{c.instructions+=3;NFSU2_TR(0x4aaa6d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4aaa70:{NFSU2_TR(0x4aaa70);
w4(R+4,u32(0x89cf48ull));
}
B4aaa75:{NFSU2_TR(0x4aaa75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aaa7aull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B4aaa7a:L4aaa7a:{c.instructions+=5;NFSU2_TR(0x4aaa7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4aaa7d:{NFSU2_TR(0x4aaa7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4aaa7f:{NFSU2_TR(0x4aaa7f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4aaa82:{NFSU2_TR(0x4aaa82);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4aaa84:{NFSU2_TR(0x4aaa84);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4aaa99;}}
}
B4aaa86:L4aaa86:{c.instructions+=4;NFSU2_TR(0x4aaa86);
u8 U[16];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4aaa8a:{NFSU2_TR(0x4aaa8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aaa8b:{NFSU2_TR(0x4aaa8b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aaa8c:{NFSU2_TR(0x4aaa8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aaa91ull));
TAIL_STATIC(0x50c900u,50c);
}
B4aaa91:L4aaa91:{c.instructions+=2;NFSU2_TR(0x4aaa91);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4aaa94:{NFSU2_TR(0x4aaa94);
{goto L4aabd9;}
}
B4aaa99:L4aaa99:{c.instructions+=5;NFSU2_TR(0x4aaa99);
u8 U[12];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B4aaa9d:{NFSU2_TR(0x4aaa9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aaa9e:{NFSU2_TR(0x4aaa9e);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aaaa3:{NFSU2_TR(0x4aaaa3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aaaa4:{NFSU2_TR(0x4aaaa4);
{goto L4aabd1;}
}
B4aaaa9:L4aaaa9:{c.instructions+=4;NFSU2_TR(0x4aaaa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4aaaac:{NFSU2_TR(0x4aaaac);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aaab1:{NFSU2_TR(0x4aaab1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aaab2:{NFSU2_TR(0x4aaab2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aaab7ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4aaab7:L4aaab7:{c.instructions+=5;NFSU2_TR(0x4aaab7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4aaab9:{NFSU2_TR(0x4aaab9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aaabb:{NFSU2_TR(0x4aaabb);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aaac0:{NFSU2_TR(0x4aaac0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aaac1:{NFSU2_TR(0x4aaac1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aaac6ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4aaac6:L4aaac6:{c.instructions+=8;NFSU2_TR(0x4aaac6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4aaac9:{NFSU2_TR(0x4aaac9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4aaacc:{NFSU2_TR(0x4aaacc);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4aaad0:{NFSU2_TR(0x4aaad0);
__builtin_memmove((R+4),gp(0x890118),4);
}
B4aaad6:{NFSU2_TR(0x4aaad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4aaad9:{NFSU2_TR(0x4aaad9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4aaadc:{NFSU2_TR(0x4aaadc);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4aaade:{NFSU2_TR(0x4aaade);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4aaae9;}}
}
B4aaae0:L4aaae0:{c.instructions+=2;NFSU2_TR(0x4aaae0);
u8 U[16];
w4(U+0,u32(u32(u32(0xbccull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B4aaae7:{NFSU2_TR(0x4aaae7);
{goto L4aaaeb;}
}
B4aaae9:L4aaae9:{c.instructions+=1;NFSU2_TR(0x4aaae9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4aaaeb:L4aaaeb:{c.instructions+=2;NFSU2_TR(0x4aaaeb);
__builtin_memmove((R+4),(R+12),4);
}
B4aaaed:{NFSU2_TR(0x4aaaed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aaaf2ull));
TAIL_STATIC(0x5ee250u,5ee);
}
B4aaaf2:L4aaaf2:{c.instructions+=2;NFSU2_TR(0x4aaaf2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4aaaf4:{NFSU2_TR(0x4aaaf4);
if(r1(R+518)){{goto L4aab88;}}
}
B4aaafa:L4aaafa:{c.instructions+=4;NFSU2_TR(0x4aaafa);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B4aaafe:{NFSU2_TR(0x4aaafe);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffdull))));
}
B4aab01:{NFSU2_TR(0x4aab01);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x9ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4aab04:{NFSU2_TR(0x4aab04);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4aab75;}}
}
B4aab06:L4aab06:{c.instructions+=1;NFSU2_TR(0x4aab06);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4aac28ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4aab0d:L4aab0d:{c.instructions+=5;NFSU2_TR(0x4aab0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4aab0f:{NFSU2_TR(0x4aab0f);
w4(R+0,u32(0x1e66364ull));
}
B4aab14:{NFSU2_TR(0x4aab14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aab15:{NFSU2_TR(0x4aab15);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aab16:{NFSU2_TR(0x4aab16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aab1bull));
TAIL_STATIC(0x50c900u,50c);
}
B4aab1b:L4aab1b:{c.instructions+=2;NFSU2_TR(0x4aab1b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4aab1e:{NFSU2_TR(0x4aab1e);
{goto L4aabd9;}
}
B4aab23:L4aab23:{c.instructions+=5;NFSU2_TR(0x4aab23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4aab25:{NFSU2_TR(0x4aab25);
w4(R+0,u32(0xb7b75185ull));
}
B4aab2a:{NFSU2_TR(0x4aab2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aab2b:{NFSU2_TR(0x4aab2b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aab2c:{NFSU2_TR(0x4aab2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aab31ull));
TAIL_STATIC(0x50c900u,50c);
}
B4aab31:L4aab31:{c.instructions+=2;NFSU2_TR(0x4aab31);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4aab34:{NFSU2_TR(0x4aab34);
{goto L4aabd9;}
}
B4aab39:L4aab39:{c.instructions+=5;NFSU2_TR(0x4aab39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4aab3b:{NFSU2_TR(0x4aab3b);
w4(R+0,u32(0x1ce129e0ull));
}
B4aab40:{NFSU2_TR(0x4aab40);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aab41:{NFSU2_TR(0x4aab41);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aab42:{NFSU2_TR(0x4aab42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aab47ull));
TAIL_STATIC(0x50c900u,50c);
}
B4aab47:L4aab47:{c.instructions+=2;NFSU2_TR(0x4aab47);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4aab4a:{NFSU2_TR(0x4aab4a);
{goto L4aabd9;}
}
B4aab4f:L4aab4f:{c.instructions+=5;NFSU2_TR(0x4aab4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4aab51:{NFSU2_TR(0x4aab51);
w4(R+0,u32(0xa7db717full));
}
B4aab56:{NFSU2_TR(0x4aab56);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aab57:{NFSU2_TR(0x4aab57);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aab58:{NFSU2_TR(0x4aab58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aab5dull));
TAIL_STATIC(0x50c900u,50c);
}
B4aab5d:L4aab5d:{c.instructions+=2;NFSU2_TR(0x4aab5d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4aab60:{NFSU2_TR(0x4aab60);
{goto L4aabd9;}
}
B4aab62:L4aab62:{c.instructions+=5;NFSU2_TR(0x4aab62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4aab64:{NFSU2_TR(0x4aab64);
w4(R+0,u32(0x5d82dba2ull));
}
B4aab69:{NFSU2_TR(0x4aab69);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aab6a:{NFSU2_TR(0x4aab6a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aab6b:{NFSU2_TR(0x4aab6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aab70ull));
TAIL_STATIC(0x50c900u,50c);
}
B4aab70:L4aab70:{c.instructions+=2;NFSU2_TR(0x4aab70);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4aab73:{NFSU2_TR(0x4aab73);
{goto L4aabd9;}
}
B4aab75:L4aab75:{c.instructions+=5;NFSU2_TR(0x4aab75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4aab77:{NFSU2_TR(0x4aab77);
w4(R+0,u32(0xd4293449ull));
}
B4aab7c:{NFSU2_TR(0x4aab7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aab7d:{NFSU2_TR(0x4aab7d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aab7e:{NFSU2_TR(0x4aab7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aab83ull));
TAIL_STATIC(0x50c900u,50c);
}
B4aab83:L4aab83:{c.instructions+=2;NFSU2_TR(0x4aab83);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4aab86:{NFSU2_TR(0x4aab86);
{goto L4aabd9;}
}
B4aab88:L4aab88:{c.instructions+=3;NFSU2_TR(0x4aab88);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4aab8f:{NFSU2_TR(0x4aab8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aab92:{NFSU2_TR(0x4aab92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4aabb1;}}
}
B4aab94:L4aab94:{c.instructions+=4;NFSU2_TR(0x4aab94);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4aab97:{NFSU2_TR(0x4aab97);
{u32 ea_=u32(r4(R+28)+r4(R+0)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4aab9b:{NFSU2_TR(0x4aab9b);
{u32 ea_=u32(u32(7932476u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4aaba1:{NFSU2_TR(0x4aaba1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aaba6ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4aaba6:L4aaba6:{c.instructions+=5;NFSU2_TR(0x4aaba6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4aaba8:{NFSU2_TR(0x4aaba8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aaba9:{NFSU2_TR(0x4aaba9);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aabae:{NFSU2_TR(0x4aabae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aabaf:{NFSU2_TR(0x4aabaf);
{goto L4aabd1;}
}
B4aabb1:L4aabb1:{c.instructions+=6;NFSU2_TR(0x4aabb1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4aabb4:{NFSU2_TR(0x4aabb4);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aabb6:{NFSU2_TR(0x4aabb6);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4aabba:{NFSU2_TR(0x4aabba);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aabbb:{NFSU2_TR(0x4aabbb);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B4aabbf:{NFSU2_TR(0x4aabbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aabc4ull));
TAIL_STATIC(0x577240u,577);
}
B4aabc4:L4aabc4:{c.instructions+=5;NFSU2_TR(0x4aabc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4aabc6:{NFSU2_TR(0x4aabc6);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4aabca:{NFSU2_TR(0x4aabca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aabcb:{NFSU2_TR(0x4aabcb);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aabd0:{NFSU2_TR(0x4aabd0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aabd1:L4aabd1:{c.instructions+=1;NFSU2_TR(0x4aabd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aabd6ull));
TAIL_STATIC(0x537be0u,537);
}
B4aabd6:L4aabd6:{c.instructions+=1;NFSU2_TR(0x4aabd6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4aabd9:L4aabd9:{c.instructions+=8;NFSU2_TR(0x4aabd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aabdc:{NFSU2_TR(0x4aabdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4aabde:{NFSU2_TR(0x4aabde);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4aabe1:{NFSU2_TR(0x4aabe1);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B4aabe5:{NFSU2_TR(0x4aabe5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aabe6:{NFSU2_TR(0x4aabe6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aabe7:{NFSU2_TR(0x4aabe7);
__builtin_memmove((R+4),(R+28),4);
}
B4aabe9:{NFSU2_TR(0x4aabe9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aabeeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4aa7a0u);}goto L4aa7a0;}
}
B4aabee:L4aabee:{c.instructions+=8;NFSU2_TR(0x4aabee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aabf1:{NFSU2_TR(0x4aabf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4aabf4:{NFSU2_TR(0x4aabf4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x34ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4aabf7:{NFSU2_TR(0x4aabf7);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B4aabfb:{NFSU2_TR(0x4aabfb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aabfc:{NFSU2_TR(0x4aabfc);
u8 U[4];
w4(U+0,u32(0x790a24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aac01:{NFSU2_TR(0x4aac01);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aac02:{NFSU2_TR(0x4aac02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aac07ull));
TAIL_STATIC(0x537be0u,537);
}
B4aac07:L4aac07:{c.instructions+=6;NFSU2_TR(0x4aac07);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aac0d:{NFSU2_TR(0x4aac0d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4aac10:{NFSU2_TR(0x4aac10);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B4aac11:{NFSU2_TR(0x4aac11);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B4aac14:{NFSU2_TR(0x4aac14);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4aac16:{NFSU2_TR(0x4aac16);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4aaa30u);}goto L4aaa30;}}
}
B4aac1c:L4aac1c:{c.instructions+=3;NFSU2_TR(0x4aac1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4aac1d:{NFSU2_TR(0x4aac1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4aac1e:{NFSU2_TR(0x4aac1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4aac1f:L4aac1f:{c.instructions+=3;NFSU2_TR(0x4aac1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4aac20:{NFSU2_TR(0x4aac20);
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
B4aac23:{NFSU2_TR(0x4aac23);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aac50:L4aac50:{c.instructions+=9;NFSU2_TR(0x4aac50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B4aac53:{NFSU2_TR(0x4aac53);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aac54:{NFSU2_TR(0x4aac54);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aac55:{NFSU2_TR(0x4aac55);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aac56:{NFSU2_TR(0x4aac56);
__builtin_memmove((R+12),(R+4),4);
}
B4aac58:{NFSU2_TR(0x4aac58);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aac5a:{NFSU2_TR(0x4aac5a);
w4(R+4,u32(0x864630ull));
}
B4aac5f:{NFSU2_TR(0x4aac5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aac63:{NFSU2_TR(0x4aac63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aac68ull));
TAIL_STATIC(0x43be80u,43b);
}
B4aac68:L4aac68:{c.instructions+=3;NFSU2_TR(0x4aac68);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4aac6e:{NFSU2_TR(0x4aac6e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4aac70:{NFSU2_TR(0x4aac70);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4aac7a;}}
}
B4aac72:L4aac72:{c.instructions+=3;NFSU2_TR(0x4aac72);
__builtin_memmove((R+28),(R+0),4);
}
B4aac74:{NFSU2_TR(0x4aac74);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aac78:{NFSU2_TR(0x4aac78);
{goto L4aac80;}
}
B4aac7a:L4aac7a:{c.instructions+=2;NFSU2_TR(0x4aac7a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aac7e:{NFSU2_TR(0x4aac7e);
__builtin_memmove((R+28),(R+4),4);
}
B4aac80:L4aac80:{c.instructions+=3;NFSU2_TR(0x4aac80);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4aac82:{NFSU2_TR(0x4aac82);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4aac8a:{NFSU2_TR(0x4aac8a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4aad7f;}}
}
B4aac90:L4aac90:{c.instructions+=4;NFSU2_TR(0x4aac90);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aac91:{NFSU2_TR(0x4aac91);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x174ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4aac97:{NFSU2_TR(0x4aac97);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1c4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4aac9d:{NFSU2_TR(0x4aac9d);
__builtin_memmove((R+4),(R+4),4);
}
B4aaca0:L4aaca0:{c.instructions+=4;NFSU2_TR(0x4aaca0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4aaca3:{NFSU2_TR(0x4aaca3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4aaca5:{NFSU2_TR(0x4aaca5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aaca7:{NFSU2_TR(0x4aaca7);
if(r1(R+518)){{goto L4aacb4;}}
}
B4aaca9:L4aaca9:{c.instructions+=4;NFSU2_TR(0x4aaca9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aacac:{NFSU2_TR(0x4aacac);
u8 U[4];
w4(U+0,u32(0x790a2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aacb1:{NFSU2_TR(0x4aacb1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aacb2:{NFSU2_TR(0x4aacb2);
{goto L4aacbd;}
}
B4aacb4:L4aacb4:{c.instructions+=3;NFSU2_TR(0x4aacb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4aacb7:{NFSU2_TR(0x4aacb7);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aacbc:{NFSU2_TR(0x4aacbc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aacbd:L4aacbd:{c.instructions+=1;NFSU2_TR(0x4aacbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aacc2ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4aacc2:L4aacc2:{c.instructions+=7;NFSU2_TR(0x4aacc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4aacc5:{NFSU2_TR(0x4aacc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4aacc7:{NFSU2_TR(0x4aacc7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4aacca:{NFSU2_TR(0x4aacca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aaccb:{NFSU2_TR(0x4aaccb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aaccc:{NFSU2_TR(0x4aaccc);
__builtin_memmove((R+4),(R+12),4);
}
B4aacce:{NFSU2_TR(0x4aacce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aacd3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4aa7a0u);}goto L4aa7a0;}
}
B4aacd3:L4aacd3:{c.instructions+=3;NFSU2_TR(0x4aacd3);
w4(R+4,u32(0x89cf48ull));
}
B4aacd8:{NFSU2_TR(0x4aacd8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4aacda:{NFSU2_TR(0x4aacda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aacdfull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B4aacdf:L4aacdf:{c.instructions+=2;NFSU2_TR(0x4aacdf);
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
B4aace1:{NFSU2_TR(0x4aace1);
if(r1(R+518)){{goto L4aad20;}}
}
B4aace3:L4aace3:{c.instructions+=4;NFSU2_TR(0x4aace3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4aace6:{NFSU2_TR(0x4aace6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aace7:{NFSU2_TR(0x4aace7);
w4(R+4,u32(0x89cf48ull));
}
B4aacec:{NFSU2_TR(0x4aacec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aacf1ull));
TAIL_STATIC(0x5f0220u,5f0);
}
B4aacf1:L4aacf1:{c.instructions+=3;NFSU2_TR(0x4aacf1);
__builtin_memmove((R+12),(R+0),4);
}
B4aacf3:{NFSU2_TR(0x4aacf3);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4aacf5:{NFSU2_TR(0x4aacf5);
if(r1(R+518)){{goto L4aad20;}}
}
B4aacf7:L4aacf7:{c.instructions+=2;NFSU2_TR(0x4aacf7);
__builtin_memmove((R+4),(R+12),4);
}
B4aacf9:{NFSU2_TR(0x4aacf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aacfeull));
TAIL_STATIC(0x5efa00u,5ef);
}
B4aacfe:L4aacfe:{c.instructions+=2;NFSU2_TR(0x4aacfe);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4aad00:{NFSU2_TR(0x4aad00);
if(r1(R+518)){{goto L4aad20;}}
}
B4aad02:L4aad02:{c.instructions+=3;NFSU2_TR(0x4aad02);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4aad05:{NFSU2_TR(0x4aad05);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0xbull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B4aad08:{NFSU2_TR(0x4aad08);
if(r1(R+518)){{goto L4aad1b;}}
}
B4aad0a:L4aad0a:{c.instructions+=2;NFSU2_TR(0x4aad0a);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B4aad0b:{NFSU2_TR(0x4aad0b);
if(r1(R+518)){{goto L4aad14;}}
}
B4aad0d:L4aad0d:{c.instructions+=2;NFSU2_TR(0x4aad0d);
w4(R+28,u32(0xd4293449ull));
}
B4aad12:{NFSU2_TR(0x4aad12);
{goto L4aad20;}
}
B4aad14:L4aad14:{c.instructions+=2;NFSU2_TR(0x4aad14);
w4(R+28,u32(0xa7db717full));
}
B4aad19:{NFSU2_TR(0x4aad19);
{goto L4aad20;}
}
B4aad1b:L4aad1b:{c.instructions+=1;NFSU2_TR(0x4aad1b);
w4(R+28,u32(0x1ce129e0ull));
}
B4aad20:L4aad20:{c.instructions+=7;NFSU2_TR(0x4aad20);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4aad24:{NFSU2_TR(0x4aad24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4aad27:{NFSU2_TR(0x4aad27);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4aad28:{NFSU2_TR(0x4aad28);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aad29:{NFSU2_TR(0x4aad29);
u8 U[4];
w4(U+0,u32(0x790a24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aad2e:{NFSU2_TR(0x4aad2e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aad2f:{NFSU2_TR(0x4aad2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aad34ull));
TAIL_STATIC(0x537be0u,537);
}
B4aad34:L4aad34:{c.instructions+=3;NFSU2_TR(0x4aad34);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4aad37:{NFSU2_TR(0x4aad37);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4aad39:{NFSU2_TR(0x4aad39);
if(r1(R+518)){{goto L4aad49;}}
}
B4aad3b:L4aad3b:{c.instructions+=4;NFSU2_TR(0x4aad3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4aad3d:{NFSU2_TR(0x4aad3d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aad3e:{NFSU2_TR(0x4aad3e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aad3f:{NFSU2_TR(0x4aad3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aad44ull));
TAIL_STATIC(0x50c900u,50c);
}
B4aad44:L4aad44:{c.instructions+=2;NFSU2_TR(0x4aad44);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4aad47:{NFSU2_TR(0x4aad47);
{goto L4aad62;}
}
B4aad49:L4aad49:{c.instructions+=2;NFSU2_TR(0x4aad49);
{u32 ea_=u32(r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4aad4c:{NFSU2_TR(0x4aad4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aad51ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4aad51:L4aad51:{c.instructions+=5;NFSU2_TR(0x4aad51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4aad53:{NFSU2_TR(0x4aad53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aad54:{NFSU2_TR(0x4aad54);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aad59:{NFSU2_TR(0x4aad59);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aad5a:{NFSU2_TR(0x4aad5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aad5full));
TAIL_STATIC(0x537be0u,537);
}
B4aad5f:L4aad5f:{c.instructions+=1;NFSU2_TR(0x4aad5f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4aad62:L4aad62:{c.instructions+=7;NFSU2_TR(0x4aad62);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aad66:{NFSU2_TR(0x4aad66);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B4aad69:{NFSU2_TR(0x4aad69);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x30ull))));
}
B4aad6c:{NFSU2_TR(0x4aad6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aad70:{NFSU2_TR(0x4aad70);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4aad72:{NFSU2_TR(0x4aad72);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4aad76:{NFSU2_TR(0x4aad76);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4aaca0u);}goto L4aaca0;}}
}
B4aad7c:L4aad7c:{c.instructions+=2;NFSU2_TR(0x4aad7c);
__builtin_memmove((R+28),(R+0),4);
}
B4aad7e:{NFSU2_TR(0x4aad7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4aad7f:L4aad7f:{c.instructions+=2;NFSU2_TR(0x4aad7f);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+8)));
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B4aad85:{NFSU2_TR(0x4aad85);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4aadb2;}}
}
B4aad87:L4aad87:{c.instructions+=2;NFSU2_TR(0x4aad87);
u8 U[12];
w4(U+0,u32(u32(u32(0x184ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B4aad8e:{NFSU2_TR(0x4aad8e);
__builtin_memmove((R+28),(R+28),4);
}
B4aad90:L4aad90:{c.instructions+=3;NFSU2_TR(0x4aad90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4aad93:{NFSU2_TR(0x4aad93);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aad94:{NFSU2_TR(0x4aad94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aad99ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4aad99:L4aad99:{c.instructions+=3;NFSU2_TR(0x4aad99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4aad9b:{NFSU2_TR(0x4aad9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aad9c:{NFSU2_TR(0x4aad9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aada1ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4aada1:L4aada1:{c.instructions+=6;NFSU2_TR(0x4aada1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aada7:{NFSU2_TR(0x4aada7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4aadaa:{NFSU2_TR(0x4aadaa);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4aadab:{NFSU2_TR(0x4aadab);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B4aadae:{NFSU2_TR(0x4aadae);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4aadb0:{NFSU2_TR(0x4aadb0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4aad90u);}goto L4aad90;}}
}
B4aadb2:L4aadb2:{c.instructions+=5;NFSU2_TR(0x4aadb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4aadb3:{NFSU2_TR(0x4aadb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4aadb4:{NFSU2_TR(0x4aadb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4aadb5:{NFSU2_TR(0x4aadb5);
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
B4aadb8:{NFSU2_TR(0x4aadb8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aadc0:L4aadc0:{c.instructions+=10;NFSU2_TR(0x4aadc0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aadc1:{NFSU2_TR(0x4aadc1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aadc2:{NFSU2_TR(0x4aadc2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aadc3:{NFSU2_TR(0x4aadc3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aadc4:{NFSU2_TR(0x4aadc4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aadc5:{NFSU2_TR(0x4aadc5);
__builtin_memmove((R+12),(R+4),4);
}
B4aadc7:{NFSU2_TR(0x4aadc7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aadc9:{NFSU2_TR(0x4aadc9);
w4(R+4,u32(0x864630ull));
}
B4aadce:{NFSU2_TR(0x4aadce);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aadd2:{NFSU2_TR(0x4aadd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aadd7ull));
TAIL_STATIC(0x43be80u,43b);
}
B4aadd7:L4aadd7:{c.instructions+=3;NFSU2_TR(0x4aadd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4aaddd:{NFSU2_TR(0x4aaddd);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4aaddf:{NFSU2_TR(0x4aaddf);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4aade3;}}
}
B4aade1:L4aade1:{c.instructions+=1;NFSU2_TR(0x4aade1);
__builtin_memmove((R+20),(R+0),4);
}
B4aade3:L4aade3:{c.instructions+=3;NFSU2_TR(0x4aade3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4aade5:{NFSU2_TR(0x4aade5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4aade7:{NFSU2_TR(0x4aade7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4aae8c;}}
}
B4aaded:L4aaded:{c.instructions+=3;NFSU2_TR(0x4aaded);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x174ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4aadf3:{NFSU2_TR(0x4aadf3);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1c4ull))));
}
B4aadf9:{NFSU2_TR(0x4aadf9);
__builtin_memmove((R+16),(R+16),4);
}
B4aae00:L4aae00:{c.instructions+=4;NFSU2_TR(0x4aae00);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4aae03:{NFSU2_TR(0x4aae03);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4aae05:{NFSU2_TR(0x4aae05);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aae07:{NFSU2_TR(0x4aae07);
if(r1(R+518)){{goto L4aae14;}}
}
B4aae09:L4aae09:{c.instructions+=4;NFSU2_TR(0x4aae09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aae0c:{NFSU2_TR(0x4aae0c);
u8 U[4];
w4(U+0,u32(0x790a2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aae11:{NFSU2_TR(0x4aae11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aae12:{NFSU2_TR(0x4aae12);
{goto L4aae1d;}
}
B4aae14:L4aae14:{c.instructions+=3;NFSU2_TR(0x4aae14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4aae17:{NFSU2_TR(0x4aae17);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aae1c:{NFSU2_TR(0x4aae1c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aae1d:L4aae1d:{c.instructions+=1;NFSU2_TR(0x4aae1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aae22ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4aae22:L4aae22:{c.instructions+=7;NFSU2_TR(0x4aae22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4aae24:{NFSU2_TR(0x4aae24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4aae26:{NFSU2_TR(0x4aae26);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4aae2a:{NFSU2_TR(0x4aae2a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4aae2d:{NFSU2_TR(0x4aae2d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aae2e:{NFSU2_TR(0x4aae2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aae2f:{NFSU2_TR(0x4aae2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aae34ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4aa7a0u);}goto L4aa7a0;}
}
B4aae34:L4aae34:{c.instructions+=2;NFSU2_TR(0x4aae34);
w4(R+4,u32(0x89cf48ull));
}
B4aae39:{NFSU2_TR(0x4aae39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aae3eull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B4aae3e:L4aae3e:{c.instructions+=2;NFSU2_TR(0x4aae3e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4aae40:{NFSU2_TR(0x4aae40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4aae53;}}
}
B4aae42:L4aae42:{c.instructions+=5;NFSU2_TR(0x4aae42);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4aae45:{NFSU2_TR(0x4aae45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4aae47:{NFSU2_TR(0x4aae47);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aae48:{NFSU2_TR(0x4aae48);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aae49:{NFSU2_TR(0x4aae49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aae4eull));
TAIL_STATIC(0x50c900u,50c);
}
B4aae4e:L4aae4e:{c.instructions+=2;NFSU2_TR(0x4aae4e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4aae51:{NFSU2_TR(0x4aae51);
{goto L4aae67;}
}
B4aae53:L4aae53:{c.instructions+=6;NFSU2_TR(0x4aae53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4aae55:{NFSU2_TR(0x4aae55);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4aae58:{NFSU2_TR(0x4aae58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aae59:{NFSU2_TR(0x4aae59);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aae5e:{NFSU2_TR(0x4aae5e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aae5f:{NFSU2_TR(0x4aae5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aae64ull));
TAIL_STATIC(0x537be0u,537);
}
B4aae64:L4aae64:{c.instructions+=1;NFSU2_TR(0x4aae64);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4aae67:L4aae67:{c.instructions+=6;NFSU2_TR(0x4aae67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4aae6a:{NFSU2_TR(0x4aae6a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4aae6b:{NFSU2_TR(0x4aae6b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aae6c:{NFSU2_TR(0x4aae6c);
u8 U[4];
w4(U+0,u32(0x790a24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aae71:{NFSU2_TR(0x4aae71);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aae72:{NFSU2_TR(0x4aae72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aae77ull));
TAIL_STATIC(0x537be0u,537);
}
B4aae77:L4aae77:{c.instructions+=5;NFSU2_TR(0x4aae77);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4aae7a:{NFSU2_TR(0x4aae7a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B4aae7d:{NFSU2_TR(0x4aae7d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x30ull))));
}
B4aae80:{NFSU2_TR(0x4aae80);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4aae82:{NFSU2_TR(0x4aae82);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4aae00u);}goto L4aae00;}}
}
B4aae88:L4aae88:{c.instructions+=1;NFSU2_TR(0x4aae88);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4aae8c:L4aae8c:{c.instructions+=3;NFSU2_TR(0x4aae8c);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+20))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+14)));
w4(U+18,u32(u32(r4(R+20))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4aae92:{NFSU2_TR(0x4aae92);
__builtin_memmove((R+28),(R+20),4);
}
B4aae94:{NFSU2_TR(0x4aae94);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4aaec2;}}
}
B4aae96:L4aae96:{c.instructions+=2;NFSU2_TR(0x4aae96);
u8 U[12];
w4(U+0,u32(u32(u32(0x184ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B4aae9d:{NFSU2_TR(0x4aae9d);
__builtin_memmove((R+4),(R+4),4);
}
B4aaea0:L4aaea0:{c.instructions+=3;NFSU2_TR(0x4aaea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aaea3:{NFSU2_TR(0x4aaea3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aaea4:{NFSU2_TR(0x4aaea4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aaea9ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4aaea9:L4aaea9:{c.instructions+=3;NFSU2_TR(0x4aaea9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4aaeab:{NFSU2_TR(0x4aaeab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aaeac:{NFSU2_TR(0x4aaeac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aaeb1ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4aaeb1:L4aaeb1:{c.instructions+=6;NFSU2_TR(0x4aaeb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aaeb7:{NFSU2_TR(0x4aaeb7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4aaeba:{NFSU2_TR(0x4aaeba);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4aaebb:{NFSU2_TR(0x4aaebb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B4aaebe:{NFSU2_TR(0x4aaebe);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4aaec0:{NFSU2_TR(0x4aaec0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4aaea0u);}goto L4aaea0;}}
}
B4aaec2:L4aaec2:{c.instructions+=6;NFSU2_TR(0x4aaec2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4aaec3:{NFSU2_TR(0x4aaec3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4aaec4:{NFSU2_TR(0x4aaec4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4aaec5:{NFSU2_TR(0x4aaec5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4aaec6:{NFSU2_TR(0x4aaec6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4aaec7:{NFSU2_TR(0x4aaec7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aaed0:L4aaed0:{c.instructions+=9;NFSU2_TR(0x4aaed0);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x40ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4aaed3:{NFSU2_TR(0x4aaed3);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aaed7:{NFSU2_TR(0x4aaed7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aaeda:{NFSU2_TR(0x4aaeda);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aaedb:{NFSU2_TR(0x4aaedb);
__builtin_memmove((R+20),(R+4),4);
}
B4aaedd:{NFSU2_TR(0x4aaedd);
__builtin_memmove((R+4),gp(0x890118),4);
}
B4aaee3:{NFSU2_TR(0x4aaee3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aaee4:{NFSU2_TR(0x4aaee4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aaee8:{NFSU2_TR(0x4aaee8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aaeedull));
TAIL_STATIC(0x5eef60u,5ee);
}
B4aaeed:L4aaeed:{c.instructions+=3;NFSU2_TR(0x4aaeed);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4aaeef:{NFSU2_TR(0x4aaeef);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4aaef1:{NFSU2_TR(0x4aaef1);
if(r1(R+518)){{goto L4aafb3;}}
}
B4aaef7:L4aaef7:{c.instructions+=11;NFSU2_TR(0x4aaef7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aaef8:{NFSU2_TR(0x4aaef8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(s32(s8(r1(U+4)))));
}
B4aaefc:{NFSU2_TR(0x4aaefc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aaf02:{NFSU2_TR(0x4aaf02);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B4aaf03:{NFSU2_TR(0x4aaf03);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4aaf04:{NFSU2_TR(0x4aaf04);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4aaf06:{NFSU2_TR(0x4aaf06);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aaf07:{NFSU2_TR(0x4aaf07);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aaf08:{NFSU2_TR(0x4aaf08);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aaf0c:{NFSU2_TR(0x4aaf0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aaf12:{NFSU2_TR(0x4aaf12);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4aaf6c;}}
}
B4aaf14:L4aaf14:{c.instructions+=7;NFSU2_TR(0x4aaf14);
__builtin_memmove((R+4),gp(0x890118),4);
}
B4aaf1a:{NFSU2_TR(0x4aaf1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4aaf1d:{NFSU2_TR(0x4aaf1d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4aaf1f:{NFSU2_TR(0x4aaf1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffffull))));
__builtin_memmove((R+28),(U+0),4);
}
B4aaf22:{NFSU2_TR(0x4aaf22);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4aaf25:{NFSU2_TR(0x4aaf25);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aaf29:{NFSU2_TR(0x4aaf29);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4aaf6c;}}
}
B4aaf2b:L4aaf2b:{c.instructions+=1;NFSU2_TR(0x4aaf2b);
{goto L4aaf30;}
}
B4aaf30:L4aaf30:{c.instructions+=2;NFSU2_TR(0x4aaf30);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4aaf32:{NFSU2_TR(0x4aaf32);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4aaf6c;}}
}
B4aaf34:L4aaf34:{c.instructions+=2;NFSU2_TR(0x4aaf34);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4aaf36:{NFSU2_TR(0x4aaf36);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4aaf44;}}
}
B4aaf38:L4aaf38:{c.instructions+=2;NFSU2_TR(0x4aaf38);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4aaf3b:{NFSU2_TR(0x4aaf3b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4aaf44;}}
}
B4aaf3d:L4aaf3d:{c.instructions+=4;NFSU2_TR(0x4aaf3d);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4aaf41:{NFSU2_TR(0x4aaf41);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B4aaf42:{NFSU2_TR(0x4aaf42);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4aaf43:{NFSU2_TR(0x4aaf43);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B4aaf44:L4aaf44:{c.instructions+=2;NFSU2_TR(0x4aaf44);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4aaf46:{NFSU2_TR(0x4aaf46);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4aaf5b;}}
}
B4aaf48:L4aaf48:{c.instructions+=2;NFSU2_TR(0x4aaf48);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4aaf4a:{NFSU2_TR(0x4aaf4a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4aaf5b;}}
}
B4aaf4c:L4aaf4c:{c.instructions+=6;NFSU2_TR(0x4aaf4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4aaf50:{NFSU2_TR(0x4aaf50);
u8 U[16];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4aaf54:{NFSU2_TR(0x4aaf54);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B4aaf55:{NFSU2_TR(0x4aaf55);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4aaf56:{NFSU2_TR(0x4aaf56);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aaf5a:{NFSU2_TR(0x4aaf5a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4aaf5b:L4aaf5b:{c.instructions+=6;NFSU2_TR(0x4aaf5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4aaf5f:{NFSU2_TR(0x4aaf5f);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B4aaf60:{NFSU2_TR(0x4aaf60);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4aaf64:{NFSU2_TR(0x4aaf64);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4aaf66:{NFSU2_TR(0x4aaf66);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4aaf6a:{NFSU2_TR(0x4aaf6a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4aaf30u);}goto L4aaf30;}}
}
B4aaf6c:L4aaf6c:{c.instructions+=3;NFSU2_TR(0x4aaf6c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4aaf6e:{NFSU2_TR(0x4aaf6e);
w4(R+28,u32(0x1ull));
}
B4aaf73:{NFSU2_TR(0x4aaf73);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4aaf8f;}}
}
B4aaf75:L4aaf75:{c.instructions+=3;NFSU2_TR(0x4aaf75);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x15cull))));
__builtin_memmove((R+24),(U+0),4);
}
B4aaf7b:{NFSU2_TR(0x4aaf7b);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B4aaf7f:{NFSU2_TR(0x4aaf7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4aaf82:L4aaf82:{c.instructions+=6;NFSU2_TR(0x4aaf82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4aaf84:{NFSU2_TR(0x4aaf84);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4aaf86:{NFSU2_TR(0x4aaf86);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
}
B4aaf89:{NFSU2_TR(0x4aaf89);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B4aaf8c:{NFSU2_TR(0x4aaf8c);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B4aaf8d:{NFSU2_TR(0x4aaf8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4aaf82u);}goto L4aaf82;}}
}
B4aaf8f:L4aaf8f:{c.instructions+=2;NFSU2_TR(0x4aaf8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4aaf91:{NFSU2_TR(0x4aaf91);
if(r1(R+518)){{goto L4aaf9b;}}
}
B4aaf93:L4aaf93:{c.instructions+=2;NFSU2_TR(0x4aaf93);
u8 U[16];
w4(U+0,u32(u32(u32(0x158ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4aaf9a:{NFSU2_TR(0x4aaf9a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4aaf9b:L4aaf9b:{c.instructions+=3;NFSU2_TR(0x4aaf9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4aaf9f:{NFSU2_TR(0x4aaf9f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4aafa1:{NFSU2_TR(0x4aafa1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4aafb0;}}
}
B4aafa3:L4aafa3:{c.instructions+=2;NFSU2_TR(0x4aafa3);
u8 U[12];
w4(U+0,u32(u32(u32(0x158ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B4aafaa:{NFSU2_TR(0x4aafaa);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B4aafae:L4aafae:{c.instructions+=1;NFSU2_TR(0x4aafae);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4aafb0;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4aafaeu);}goto L4aafae;}
}
B4aafb0:L4aafb0:{c.instructions+=3;NFSU2_TR(0x4aafb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4aafb1:{NFSU2_TR(0x4aafb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4aafb2:{NFSU2_TR(0x4aafb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4aafb3:L4aafb3:{c.instructions+=3;NFSU2_TR(0x4aafb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4aafb4:{NFSU2_TR(0x4aafb4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4aafb7:{NFSU2_TR(0x4aafb7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aafc0:L4aafc0:{c.instructions+=11;NFSU2_TR(0x4aafc0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aafc1:{NFSU2_TR(0x4aafc1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aafc2:{NFSU2_TR(0x4aafc2);
__builtin_memmove((R+24),(R+4),4);
}
B4aafc4:{NFSU2_TR(0x4aafc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4aafc7:{NFSU2_TR(0x4aafc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aafca:{NFSU2_TR(0x4aafca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4aafcd:{NFSU2_TR(0x4aafcd);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B4aafcf:{NFSU2_TR(0x4aafcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4aafd2:{NFSU2_TR(0x4aafd2);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+12))));
}
B4aafd4:{NFSU2_TR(0x4aafd4);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4aafd6:{NFSU2_TR(0x4aafd6);
if(r1(R+518)){TAIL_STATIC(0x4ab0a8u,4ab);}
}
B4aafdc:L4aafdc:{c.instructions+=4;NFSU2_TR(0x4aafdc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aafe0:{NFSU2_TR(0x4aafe0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x248ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B4aafe6:{NFSU2_TR(0x4aafe6);
w4(R+4,u32(0x89cf48ull));
}
B4aafeb:{NFSU2_TR(0x4aafeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aaff0ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B4aaff0:L4aaff0:{c.instructions+=2;NFSU2_TR(0x4aaff0);
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
B4aaff2:{NFSU2_TR(0x4aaff2);
if(r1(R+518)){TAIL_STATIC(0x4ab036u,4ab);}
}
B4aaff4:L4aaff4:{c.instructions+=4;NFSU2_TR(0x4aaff4);
__builtin_memmove((R+4),gp(0x89cf4c),4);
}
B4aaffa:{NFSU2_TR(0x4aaffa);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4aaffe:{NFSU2_TR(0x4aaffe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aafff:{NFSU2_TR(0x4aafff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab004ull));
TAIL_STATIC(0x5efa90u,5ef);
}
XIT:NFSU2_TR_EXIT(0x4aa,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
