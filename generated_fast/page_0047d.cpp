#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_457(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_45e(u8* __restrict R,Cpu& c);
u32 body_466(u8* __restrict R,Cpu& c);
u32 body_467(u8* __restrict R,Cpu& c);
u32 body_473(u8* __restrict R,Cpu& c);
u32 body_474(u8* __restrict R,Cpu& c);
u32 body_477(u8* __restrict R,Cpu& c);
u32 body_47b(u8* __restrict R,Cpu& c);
u32 body_47e(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_723(u8* __restrict R,Cpu& c);
u32 body_734(u8* __restrict R,Cpu& c);
u32 body_735(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x47d,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x47d,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_47d(u8* __restrict R,Cpu& c);
u32 page_47d(Cpu& c){return body_47d(c.regs.data(),c);}
__attribute__((noinline)) u32 body_47d(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x47d001:goto L47d001;
case 0x47d007:c.instructions+=1;goto B47d007;
case 0x47d009:goto L47d009;
case 0x47d00e:goto L47d00e;
case 0x47d011:c.instructions+=4;goto B47d011;
case 0x47d013:c.instructions+=3;goto B47d013;
case 0x47d015:c.instructions+=2;goto B47d015;
case 0x47d017:c.instructions+=1;goto B47d017;
case 0x47d01a:goto L47d01a;
case 0x47d01c:c.instructions+=2;goto B47d01c;
case 0x47d022:c.instructions+=1;goto B47d022;
case 0x47d024:goto L47d024;
case 0x47d026:c.instructions+=1;goto B47d026;
case 0x47d028:goto L47d028;
case 0x47d02d:c.instructions+=1;goto B47d02d;
case 0x47d02f:goto L47d02f;
case 0x47d034:goto L47d034;
case 0x47d037:c.instructions+=4;goto B47d037;
case 0x47d03d:c.instructions+=3;goto B47d03d;
case 0x47d03f:c.instructions+=2;goto B47d03f;
case 0x47d041:c.instructions+=1;goto B47d041;
case 0x47d043:goto L47d043;
case 0x47d046:c.instructions+=2;goto B47d046;
case 0x47d047:c.instructions+=1;goto B47d047;
case 0x47d04c:goto L47d04c;
case 0x47d052:c.instructions+=1;goto B47d052;
case 0x47d058:goto L47d058;
case 0x47d05e:c.instructions+=6;goto B47d05e;
case 0x47d065:c.instructions+=5;goto B47d065;
case 0x47d067:c.instructions+=4;goto B47d067;
case 0x47d069:c.instructions+=3;goto B47d069;
case 0x47d06b:c.instructions+=2;goto B47d06b;
case 0x47d06e:c.instructions+=1;goto B47d06e;
case 0x47d071:goto L47d071;
case 0x47d074:c.instructions+=4;goto B47d074;
case 0x47d07a:c.instructions+=3;goto B47d07a;
case 0x47d07d:c.instructions+=2;goto B47d07d;
case 0x47d07f:c.instructions+=1;goto B47d07f;
case 0x47d081:goto L47d081;
case 0x47d083:c.instructions+=1;goto B47d083;
case 0x47d085:goto L47d085;
case 0x47d08a:c.instructions+=1;goto B47d08a;
case 0x47d08c:goto L47d08c;
case 0x47d091:goto L47d091;
case 0x47d093:c.instructions+=4;goto B47d093;
case 0x47d096:c.instructions+=3;goto B47d096;
case 0x47d09c:c.instructions+=2;goto B47d09c;
case 0x47d09e:c.instructions+=1;goto B47d09e;
case 0x47d0a0:goto L47d0a0;
case 0x47d0a2:c.instructions+=1;goto B47d0a2;
case 0x47d0a4:goto L47d0a4;
case 0x47d0aa:c.instructions+=1;goto B47d0aa;
case 0x47d0ac:goto L47d0ac;
case 0x47d0b1:goto L47d0b1;
case 0x47d0b4:c.instructions+=4;goto B47d0b4;
case 0x47d0b6:c.instructions+=3;goto B47d0b6;
case 0x47d0b8:c.instructions+=2;goto B47d0b8;
case 0x47d0ba:c.instructions+=1;goto B47d0ba;
case 0x47d0bd:goto L47d0bd;
case 0x47d0bf:c.instructions+=2;goto B47d0bf;
case 0x47d0c5:c.instructions+=1;goto B47d0c5;
case 0x47d0c7:goto L47d0c7;
case 0x47d0c9:c.instructions+=1;goto B47d0c9;
case 0x47d0cb:goto L47d0cb;
case 0x47d0d0:c.instructions+=1;goto B47d0d0;
case 0x47d0d2:goto L47d0d2;
case 0x47d0d7:goto L47d0d7;
case 0x47d0da:c.instructions+=4;goto B47d0da;
case 0x47d0e0:c.instructions+=3;goto B47d0e0;
case 0x47d0e2:c.instructions+=2;goto B47d0e2;
case 0x47d0e4:c.instructions+=1;goto B47d0e4;
case 0x47d0e6:goto L47d0e6;
case 0x47d0e9:c.instructions+=2;goto B47d0e9;
case 0x47d0ea:c.instructions+=1;goto B47d0ea;
case 0x47d0ef:goto L47d0ef;
case 0x47d0f5:c.instructions+=2;goto B47d0f5;
case 0x47d0f7:c.instructions+=1;goto B47d0f7;
case 0x47d0f9:goto L47d0f9;
case 0x47d0fb:c.instructions+=3;goto B47d0fb;
case 0x47d0fd:c.instructions+=2;goto B47d0fd;
case 0x47d101:c.instructions+=1;goto B47d101;
case 0x47d103:goto L47d103;
case 0x47d107:c.instructions+=3;goto B47d107;
case 0x47d108:c.instructions+=2;goto B47d108;
case 0x47d10a:c.instructions+=1;goto B47d10a;
case 0x47d10f:goto L47d10f;
case 0x47d114:c.instructions+=1;goto B47d114;
case 0x47d116:goto L47d116;
case 0x47d11c:c.instructions+=3;goto B47d11c;
case 0x47d11f:c.instructions+=2;goto B47d11f;
case 0x47d121:c.instructions+=1;goto B47d121;
case 0x47d123:goto L47d123;
case 0x47d127:c.instructions+=4;goto B47d127;
case 0x47d128:c.instructions+=3;goto B47d128;
case 0x47d12a:c.instructions+=2;goto B47d12a;
case 0x47d132:c.instructions+=1;goto B47d132;
case 0x47d137:goto L47d137;
case 0x47d13d:c.instructions+=5;goto B47d13d;
case 0x47d141:c.instructions+=4;goto B47d141;
case 0x47d144:c.instructions+=3;goto B47d144;
case 0x47d145:c.instructions+=2;goto B47d145;
case 0x47d14b:c.instructions+=1;goto B47d14b;
case 0x47d150:goto L47d150;
case 0x47d156:c.instructions+=3;goto B47d156;
case 0x47d158:c.instructions+=2;goto B47d158;
case 0x47d15a:c.instructions+=1;goto B47d15a;
case 0x47d15c:goto L47d15c;
case 0x47d15f:c.instructions+=2;goto B47d15f;
case 0x47d160:c.instructions+=1;goto B47d160;
case 0x47d165:goto L47d165;
case 0x47d16b:c.instructions+=2;goto B47d16b;
case 0x47d16d:c.instructions+=1;goto B47d16d;
case 0x47d16f:goto L47d16f;
case 0x47d172:c.instructions+=2;goto B47d172;
case 0x47d174:c.instructions+=1;goto B47d174;
case 0x47d176:goto L47d176;
case 0x47d178:c.instructions+=2;goto B47d178;
case 0x47d17a:c.instructions+=1;goto B47d17a;
case 0x47d17c:goto L47d17c;
case 0x47d182:c.instructions+=1;goto B47d182;
case 0x47d184:goto L47d184;
case 0x47d186:c.instructions+=3;goto B47d186;
case 0x47d188:c.instructions+=2;goto B47d188;
case 0x47d18a:c.instructions+=1;goto B47d18a;
case 0x47d18d:goto L47d18d;
case 0x47d18f:c.instructions+=5;goto B47d18f;
case 0x47d191:c.instructions+=4;goto B47d191;
case 0x47d193:c.instructions+=3;goto B47d193;
case 0x47d195:c.instructions+=2;goto B47d195;
case 0x47d199:c.instructions+=1;goto B47d199;
case 0x47d19c:goto L47d19c;
case 0x47d1a2:c.instructions+=7;goto B47d1a2;
case 0x47d1a6:c.instructions+=6;goto B47d1a6;
case 0x47d1aa:c.instructions+=5;goto B47d1aa;
case 0x47d1ab:c.instructions+=4;goto B47d1ab;
case 0x47d1af:c.instructions+=3;goto B47d1af;
case 0x47d1b3:c.instructions+=2;goto B47d1b3;
case 0x47d1b7:c.instructions+=1;goto B47d1b7;
case 0x47d1bc:goto L47d1bc;
case 0x47d1c2:c.instructions+=7;goto B47d1c2;
case 0x47d1c9:c.instructions+=6;goto B47d1c9;
case 0x47d1d0:c.instructions+=5;goto B47d1d0;
case 0x47d1d2:c.instructions+=4;goto B47d1d2;
case 0x47d1d3:c.instructions+=3;goto B47d1d3;
case 0x47d1d5:c.instructions+=2;goto B47d1d5;
case 0x47d1d8:c.instructions+=1;goto B47d1d8;
case 0x47d1db:goto L47d1db;
case 0x47d1de:c.instructions+=6;goto B47d1de;
case 0x47d1e4:c.instructions+=5;goto B47d1e4;
case 0x47d1ea:c.instructions+=4;goto B47d1ea;
case 0x47d1f0:c.instructions+=3;goto B47d1f0;
case 0x47d1f3:c.instructions+=2;goto B47d1f3;
case 0x47d1f5:c.instructions+=1;goto B47d1f5;
case 0x47d1f7:goto L47d1f7;
case 0x47d1f9:goto L47d1f9;
case 0x47d1ff:c.instructions+=2;goto B47d1ff;
case 0x47d201:c.instructions+=1;goto B47d201;
case 0x47d203:goto L47d203;
case 0x47d205:c.instructions+=1;goto B47d205;
case 0x47d207:goto L47d207;
case 0x47d209:c.instructions+=1;goto B47d209;
case 0x47d20b:goto L47d20b;
case 0x47d210:c.instructions+=1;goto B47d210;
case 0x47d212:goto L47d212;
case 0x47d217:goto L47d217;
case 0x47d219:c.instructions+=4;goto B47d219;
case 0x47d21c:c.instructions+=3;goto B47d21c;
case 0x47d222:c.instructions+=2;goto B47d222;
case 0x47d224:c.instructions+=1;goto B47d224;
case 0x47d226:goto L47d226;
case 0x47d228:c.instructions+=1;goto B47d228;
case 0x47d22a:goto L47d22a;
case 0x47d230:c.instructions+=1;goto B47d230;
case 0x47d232:goto L47d232;
case 0x47d237:goto L47d237;
case 0x47d23a:c.instructions+=4;goto B47d23a;
case 0x47d23c:c.instructions+=3;goto B47d23c;
case 0x47d23d:c.instructions+=2;goto B47d23d;
case 0x47d23f:c.instructions+=1;goto B47d23f;
case 0x47d242:goto L47d242;
case 0x47d244:c.instructions+=2;goto B47d244;
case 0x47d24a:c.instructions+=1;goto B47d24a;
case 0x47d24c:goto L47d24c;
case 0x47d24e:c.instructions+=1;goto B47d24e;
case 0x47d250:goto L47d250;
case 0x47d255:c.instructions+=1;goto B47d255;
case 0x47d257:goto L47d257;
case 0x47d25c:goto L47d25c;
case 0x47d25f:c.instructions+=4;goto B47d25f;
case 0x47d265:c.instructions+=3;goto B47d265;
case 0x47d267:c.instructions+=2;goto B47d267;
case 0x47d269:c.instructions+=1;goto B47d269;
case 0x47d26b:goto L47d26b;
case 0x47d26e:c.instructions+=2;goto B47d26e;
case 0x47d26f:c.instructions+=1;goto B47d26f;
case 0x47d274:goto L47d274;
case 0x47d27a:c.instructions+=1;goto B47d27a;
case 0x47d280:goto L47d280;
case 0x47d286:c.instructions+=6;goto B47d286;
case 0x47d28d:c.instructions+=5;goto B47d28d;
case 0x47d28f:c.instructions+=4;goto B47d28f;
case 0x47d291:c.instructions+=3;goto B47d291;
case 0x47d293:c.instructions+=2;goto B47d293;
case 0x47d296:c.instructions+=1;goto B47d296;
case 0x47d299:goto L47d299;
case 0x47d29c:c.instructions+=4;goto B47d29c;
case 0x47d2a2:c.instructions+=3;goto B47d2a2;
case 0x47d2a5:c.instructions+=2;goto B47d2a5;
case 0x47d2a7:c.instructions+=1;goto B47d2a7;
case 0x47d2a9:goto L47d2a9;
case 0x47d2ab:c.instructions+=1;goto B47d2ab;
case 0x47d2ad:goto L47d2ad;
case 0x47d2b2:c.instructions+=1;goto B47d2b2;
case 0x47d2b4:goto L47d2b4;
case 0x47d2b9:goto L47d2b9;
case 0x47d2bb:c.instructions+=4;goto B47d2bb;
case 0x47d2be:c.instructions+=3;goto B47d2be;
case 0x47d2c4:c.instructions+=2;goto B47d2c4;
case 0x47d2c6:c.instructions+=1;goto B47d2c6;
case 0x47d2c8:goto L47d2c8;
case 0x47d2ca:c.instructions+=1;goto B47d2ca;
case 0x47d2cc:goto L47d2cc;
case 0x47d2d2:c.instructions+=1;goto B47d2d2;
case 0x47d2d4:goto L47d2d4;
case 0x47d2d9:goto L47d2d9;
case 0x47d2dc:c.instructions+=4;goto B47d2dc;
case 0x47d2de:c.instructions+=3;goto B47d2de;
case 0x47d2e0:c.instructions+=2;goto B47d2e0;
case 0x47d2e2:c.instructions+=1;goto B47d2e2;
case 0x47d2e5:goto L47d2e5;
case 0x47d2e7:c.instructions+=2;goto B47d2e7;
case 0x47d2ed:c.instructions+=1;goto B47d2ed;
case 0x47d2ef:goto L47d2ef;
case 0x47d2f1:c.instructions+=1;goto B47d2f1;
case 0x47d2f3:goto L47d2f3;
case 0x47d2f8:c.instructions+=1;goto B47d2f8;
case 0x47d2fa:goto L47d2fa;
case 0x47d2ff:goto L47d2ff;
case 0x47d302:c.instructions+=4;goto B47d302;
case 0x47d308:c.instructions+=3;goto B47d308;
case 0x47d30a:c.instructions+=2;goto B47d30a;
case 0x47d30c:c.instructions+=1;goto B47d30c;
case 0x47d30e:goto L47d30e;
case 0x47d311:c.instructions+=2;goto B47d311;
case 0x47d312:c.instructions+=1;goto B47d312;
case 0x47d317:goto L47d317;
case 0x47d31d:c.instructions+=2;goto B47d31d;
case 0x47d31f:c.instructions+=1;goto B47d31f;
case 0x47d321:goto L47d321;
case 0x47d323:c.instructions+=3;goto B47d323;
case 0x47d325:c.instructions+=2;goto B47d325;
case 0x47d329:c.instructions+=1;goto B47d329;
case 0x47d32b:goto L47d32b;
case 0x47d32f:c.instructions+=3;goto B47d32f;
case 0x47d330:c.instructions+=2;goto B47d330;
case 0x47d332:c.instructions+=1;goto B47d332;
case 0x47d337:goto L47d337;
case 0x47d33c:c.instructions+=1;goto B47d33c;
case 0x47d33e:goto L47d33e;
case 0x47d344:c.instructions+=3;goto B47d344;
case 0x47d347:c.instructions+=2;goto B47d347;
case 0x47d349:c.instructions+=1;goto B47d349;
case 0x47d34b:goto L47d34b;
case 0x47d34f:c.instructions+=4;goto B47d34f;
case 0x47d350:c.instructions+=3;goto B47d350;
case 0x47d352:c.instructions+=2;goto B47d352;
case 0x47d35a:c.instructions+=1;goto B47d35a;
case 0x47d35f:goto L47d35f;
case 0x47d365:c.instructions+=5;goto B47d365;
case 0x47d369:c.instructions+=4;goto B47d369;
case 0x47d36c:c.instructions+=3;goto B47d36c;
case 0x47d36d:c.instructions+=2;goto B47d36d;
case 0x47d373:c.instructions+=1;goto B47d373;
case 0x47d378:goto L47d378;
case 0x47d37e:c.instructions+=3;goto B47d37e;
case 0x47d380:c.instructions+=2;goto B47d380;
case 0x47d382:c.instructions+=1;goto B47d382;
case 0x47d384:goto L47d384;
case 0x47d387:c.instructions+=2;goto B47d387;
case 0x47d388:c.instructions+=1;goto B47d388;
case 0x47d38d:goto L47d38d;
case 0x47d393:c.instructions+=2;goto B47d393;
case 0x47d395:c.instructions+=1;goto B47d395;
case 0x47d397:goto L47d397;
case 0x47d39a:c.instructions+=2;goto B47d39a;
case 0x47d39c:c.instructions+=1;goto B47d39c;
case 0x47d39e:goto L47d39e;
case 0x47d3a0:c.instructions+=2;goto B47d3a0;
case 0x47d3a2:c.instructions+=1;goto B47d3a2;
case 0x47d3a4:goto L47d3a4;
case 0x47d3aa:c.instructions+=1;goto B47d3aa;
case 0x47d3ac:goto L47d3ac;
case 0x47d3ae:c.instructions+=3;goto B47d3ae;
case 0x47d3b0:c.instructions+=2;goto B47d3b0;
case 0x47d3b2:c.instructions+=1;goto B47d3b2;
case 0x47d3b5:goto L47d3b5;
case 0x47d3b7:c.instructions+=5;goto B47d3b7;
case 0x47d3b9:c.instructions+=4;goto B47d3b9;
case 0x47d3bb:c.instructions+=3;goto B47d3bb;
case 0x47d3bd:c.instructions+=2;goto B47d3bd;
case 0x47d3c1:c.instructions+=1;goto B47d3c1;
case 0x47d3c4:goto L47d3c4;
case 0x47d3ca:c.instructions+=7;goto B47d3ca;
case 0x47d3ce:c.instructions+=6;goto B47d3ce;
case 0x47d3d2:c.instructions+=5;goto B47d3d2;
case 0x47d3d3:c.instructions+=4;goto B47d3d3;
case 0x47d3d7:c.instructions+=3;goto B47d3d7;
case 0x47d3db:c.instructions+=2;goto B47d3db;
case 0x47d3df:c.instructions+=1;goto B47d3df;
case 0x47d3e4:goto L47d3e4;
case 0x47d3ea:c.instructions+=4;goto B47d3ea;
case 0x47d3ed:c.instructions+=3;goto B47d3ed;
case 0x47d3ee:c.instructions+=2;goto B47d3ee;
case 0x47d3ef:c.instructions+=1;goto B47d3ef;
case 0x47d3f1:goto L47d3f1;
case 0x47d3f4:c.instructions+=1;goto B47d3f4;
case 0x47d3f6:goto L47d3f6;
case 0x47d3fc:c.instructions+=2;goto B47d3fc;
case 0x47d3fe:c.instructions+=1;goto B47d3fe;
case 0x47d400:goto L47d400;
case 0x47d407:goto L47d407;
case 0x47d40d:c.instructions+=2;goto B47d40d;
case 0x47d410:c.instructions+=1;goto B47d410;
case 0x47d412:goto L47d412;
case 0x47d415:c.instructions+=1;goto B47d415;
case 0x47d417:goto L47d417;
case 0x47d41d:c.instructions+=2;goto B47d41d;
case 0x47d41f:c.instructions+=1;goto B47d41f;
case 0x47d421:goto L47d421;
case 0x47d428:goto L47d428;
case 0x47d429:c.instructions+=3;goto B47d429;
case 0x47d42a:c.instructions+=2;goto B47d42a;
case 0x47d42d:c.instructions+=1;goto B47d42d;
case 0x47d430:goto L47d430;
case 0x47d435:c.instructions+=2;goto B47d435;
case 0x47d436:c.instructions+=1;goto B47d436;
case 0x47d43b:goto L47d43b;
case 0x47d43e:c.instructions+=2;goto B47d43e;
case 0x47d443:c.instructions+=1;goto B47d443;
case 0x47d445:goto L47d445;
case 0x47d44b:c.instructions+=5;goto B47d44b;
case 0x47d44e:c.instructions+=4;goto B47d44e;
case 0x47d454:c.instructions+=3;goto B47d454;
case 0x47d455:c.instructions+=2;goto B47d455;
case 0x47d45a:c.instructions+=1;goto B47d45a;
case 0x47d45f:goto L47d45f;
case 0x47d462:c.instructions+=2;goto B47d462;
case 0x47d464:c.instructions+=1;goto B47d464;
case 0x47d466:goto L47d466;
case 0x47d468:c.instructions+=1;goto B47d468;
case 0x47d46d:goto L47d46d;
case 0x47d46f:c.instructions+=1;goto B47d46f;
case 0x47d470:goto L47d470;
case 0x47d472:c.instructions+=14;goto B47d472;
case 0x47d477:c.instructions+=13;goto B47d477;
case 0x47d47d:c.instructions+=12;goto B47d47d;
case 0x47d47e:c.instructions+=11;goto B47d47e;
case 0x47d485:c.instructions+=10;goto B47d485;
case 0x47d488:c.instructions+=9;goto B47d488;
case 0x47d489:c.instructions+=8;goto B47d489;
case 0x47d48b:c.instructions+=7;goto B47d48b;
case 0x47d48c:c.instructions+=6;goto B47d48c;
case 0x47d490:c.instructions+=5;goto B47d490;
case 0x47d496:c.instructions+=4;goto B47d496;
case 0x47d49c:c.instructions+=3;goto B47d49c;
case 0x47d49e:c.instructions+=2;goto B47d49e;
case 0x47d4a6:c.instructions+=1;goto B47d4a6;
case 0x47d4a8:goto L47d4a8;
case 0x47d4aa:c.instructions+=2;goto B47d4aa;
case 0x47d4ac:c.instructions+=1;goto B47d4ac;
case 0x47d4ae:goto L47d4ae;
case 0x47d4b3:goto L47d4b3;
case 0x47d4b7:c.instructions+=2;goto B47d4b7;
case 0x47d4b8:c.instructions+=1;goto B47d4b8;
case 0x47d4bd:goto L47d4bd;
case 0x47d4c0:c.instructions+=1;goto B47d4c0;
case 0x47d4c5:goto L47d4c5;
case 0x47d4c9:c.instructions+=4;goto B47d4c9;
case 0x47d4cb:c.instructions+=3;goto B47d4cb;
case 0x47d4cd:c.instructions+=2;goto B47d4cd;
case 0x47d4ce:c.instructions+=1;goto B47d4ce;
case 0x47d4d1:goto L47d4d1;
case 0x47d4d6:goto L47d4d6;
case 0x47d4e0:goto L47d4e0;
case 0x47d4e4:c.instructions+=6;goto B47d4e4;
case 0x47d4ea:c.instructions+=5;goto B47d4ea;
case 0x47d4eb:c.instructions+=4;goto B47d4eb;
case 0x47d4ec:c.instructions+=3;goto B47d4ec;
case 0x47d4f3:c.instructions+=2;goto B47d4f3;
case 0x47d4f6:c.instructions+=1;goto B47d4f6;
case 0x47d500:goto L47d500;
case 0x47d505:c.instructions+=2;goto B47d505;
case 0x47d506:c.instructions+=1;goto B47d506;
case 0x47d50b:goto L47d50b;
case 0x47d50e:c.instructions+=2;goto B47d50e;
case 0x47d513:c.instructions+=1;goto B47d513;
case 0x47d515:goto L47d515;
case 0x47d51b:c.instructions+=5;goto B47d51b;
case 0x47d51e:c.instructions+=4;goto B47d51e;
case 0x47d524:c.instructions+=3;goto B47d524;
case 0x47d525:c.instructions+=2;goto B47d525;
case 0x47d52a:c.instructions+=1;goto B47d52a;
case 0x47d52f:goto L47d52f;
case 0x47d532:c.instructions+=2;goto B47d532;
case 0x47d534:c.instructions+=1;goto B47d534;
case 0x47d536:goto L47d536;
case 0x47d538:c.instructions+=1;goto B47d538;
case 0x47d53d:goto L47d53d;
case 0x47d53f:c.instructions+=1;goto B47d53f;
case 0x47d540:goto L47d540;
case 0x47d542:c.instructions+=14;goto B47d542;
case 0x47d547:c.instructions+=13;goto B47d547;
case 0x47d54d:c.instructions+=12;goto B47d54d;
case 0x47d54e:c.instructions+=11;goto B47d54e;
case 0x47d555:c.instructions+=10;goto B47d555;
case 0x47d558:c.instructions+=9;goto B47d558;
case 0x47d559:c.instructions+=8;goto B47d559;
case 0x47d55b:c.instructions+=7;goto B47d55b;
case 0x47d55c:c.instructions+=6;goto B47d55c;
case 0x47d560:c.instructions+=5;goto B47d560;
case 0x47d566:c.instructions+=4;goto B47d566;
case 0x47d56c:c.instructions+=3;goto B47d56c;
case 0x47d56e:c.instructions+=2;goto B47d56e;
case 0x47d576:c.instructions+=1;goto B47d576;
case 0x47d578:goto L47d578;
case 0x47d57a:c.instructions+=2;goto B47d57a;
case 0x47d57c:c.instructions+=1;goto B47d57c;
case 0x47d57e:goto L47d57e;
case 0x47d583:goto L47d583;
case 0x47d587:c.instructions+=2;goto B47d587;
case 0x47d588:c.instructions+=1;goto B47d588;
case 0x47d58d:goto L47d58d;
case 0x47d590:c.instructions+=1;goto B47d590;
case 0x47d595:goto L47d595;
case 0x47d599:c.instructions+=4;goto B47d599;
case 0x47d59b:c.instructions+=3;goto B47d59b;
case 0x47d59d:c.instructions+=2;goto B47d59d;
case 0x47d59e:c.instructions+=1;goto B47d59e;
case 0x47d5a1:goto L47d5a1;
case 0x47d5a6:goto L47d5a6;
case 0x47d5aa:c.instructions+=7;goto B47d5aa;
case 0x47d5b4:c.instructions+=6;goto B47d5b4;
case 0x47d5ba:c.instructions+=5;goto B47d5ba;
case 0x47d5bb:c.instructions+=4;goto B47d5bb;
case 0x47d5bc:c.instructions+=3;goto B47d5bc;
case 0x47d5c3:c.instructions+=2;goto B47d5c3;
case 0x47d5c6:c.instructions+=1;goto B47d5c6;
case 0x47d5d0:goto L47d5d0;
case 0x47d5d5:c.instructions+=2;goto B47d5d5;
case 0x47d5d6:c.instructions+=1;goto B47d5d6;
case 0x47d5db:goto L47d5db;
case 0x47d5de:c.instructions+=2;goto B47d5de;
case 0x47d5e3:c.instructions+=1;goto B47d5e3;
case 0x47d5e5:goto L47d5e5;
case 0x47d5eb:c.instructions+=5;goto B47d5eb;
case 0x47d5ee:c.instructions+=4;goto B47d5ee;
case 0x47d5f4:c.instructions+=3;goto B47d5f4;
case 0x47d5f5:c.instructions+=2;goto B47d5f5;
case 0x47d5fa:c.instructions+=1;goto B47d5fa;
case 0x47d5ff:goto L47d5ff;
case 0x47d602:c.instructions+=2;goto B47d602;
case 0x47d604:c.instructions+=1;goto B47d604;
case 0x47d606:goto L47d606;
case 0x47d608:c.instructions+=1;goto B47d608;
case 0x47d60d:goto L47d60d;
case 0x47d60f:c.instructions+=1;goto B47d60f;
case 0x47d610:goto L47d610;
case 0x47d612:c.instructions+=11;goto B47d612;
case 0x47d617:c.instructions+=10;goto B47d617;
case 0x47d61d:c.instructions+=9;goto B47d61d;
case 0x47d61e:c.instructions+=8;goto B47d61e;
case 0x47d625:c.instructions+=7;goto B47d625;
case 0x47d626:c.instructions+=6;goto B47d626;
case 0x47d627:c.instructions+=5;goto B47d627;
case 0x47d629:c.instructions+=4;goto B47d629;
case 0x47d62d:c.instructions+=3;goto B47d62d;
case 0x47d633:c.instructions+=2;goto B47d633;
case 0x47d63b:c.instructions+=1;goto B47d63b;
case 0x47d640:goto L47d640;
case 0x47d644:c.instructions+=5;goto B47d644;
case 0x47d64a:c.instructions+=4;goto B47d64a;
case 0x47d64b:c.instructions+=3;goto B47d64b;
case 0x47d652:c.instructions+=2;goto B47d652;
case 0x47d655:c.instructions+=1;goto B47d655;
case 0x47d660:goto L47d660;
case 0x47d661:c.instructions+=2;goto B47d661;
case 0x47d663:c.instructions+=1;goto B47d663;
case 0x47d668:goto L47d668;
case 0x47d66d:c.instructions+=1;goto B47d66d;
case 0x47d66f:goto L47d66f;
case 0x47d670:c.instructions+=1;goto B47d670;
case 0x47d675:goto L47d675;
case 0x47d678:goto L47d678;
case 0x47d67a:c.instructions+=2;goto B47d67a;
case 0x47d67b:c.instructions+=1;goto B47d67b;
case 0x47d680:goto L47d680;
case 0x47d685:c.instructions+=2;goto B47d685;
case 0x47d686:c.instructions+=1;goto B47d686;
case 0x47d68b:goto L47d68b;
case 0x47d68e:c.instructions+=2;goto B47d68e;
case 0x47d693:c.instructions+=1;goto B47d693;
case 0x47d695:goto L47d695;
case 0x47d69b:c.instructions+=5;goto B47d69b;
case 0x47d69e:c.instructions+=4;goto B47d69e;
case 0x47d6a4:c.instructions+=3;goto B47d6a4;
case 0x47d6a5:c.instructions+=2;goto B47d6a5;
case 0x47d6aa:c.instructions+=1;goto B47d6aa;
case 0x47d6af:goto L47d6af;
case 0x47d6b2:c.instructions+=2;goto B47d6b2;
case 0x47d6b4:c.instructions+=1;goto B47d6b4;
case 0x47d6b6:goto L47d6b6;
case 0x47d6b8:c.instructions+=1;goto B47d6b8;
case 0x47d6bd:goto L47d6bd;
case 0x47d6bf:c.instructions+=1;goto B47d6bf;
case 0x47d6c0:goto L47d6c0;
case 0x47d6c1:c.instructions+=2;goto B47d6c1;
case 0x47d6c3:c.instructions+=1;goto B47d6c3;
case 0x47d6c8:goto L47d6c8;
case 0x47d6cd:c.instructions+=1;goto B47d6cd;
case 0x47d6cf:goto L47d6cf;
case 0x47d6d0:c.instructions+=1;goto B47d6d0;
case 0x47d6d5:goto L47d6d5;
case 0x47d6d8:goto L47d6d8;
case 0x47d6da:c.instructions+=2;goto B47d6da;
case 0x47d6db:c.instructions+=1;goto B47d6db;
case 0x47d6e0:goto L47d6e0;
case 0x47d6e5:c.instructions+=2;goto B47d6e5;
case 0x47d6e6:c.instructions+=1;goto B47d6e6;
case 0x47d6eb:goto L47d6eb;
case 0x47d6ee:c.instructions+=2;goto B47d6ee;
case 0x47d6f3:c.instructions+=1;goto B47d6f3;
case 0x47d6f5:goto L47d6f5;
case 0x47d6fb:c.instructions+=5;goto B47d6fb;
case 0x47d6fe:c.instructions+=4;goto B47d6fe;
case 0x47d704:c.instructions+=3;goto B47d704;
case 0x47d705:c.instructions+=2;goto B47d705;
case 0x47d70a:c.instructions+=1;goto B47d70a;
case 0x47d70f:goto L47d70f;
case 0x47d712:c.instructions+=2;goto B47d712;
case 0x47d714:c.instructions+=1;goto B47d714;
case 0x47d716:goto L47d716;
case 0x47d718:c.instructions+=1;goto B47d718;
case 0x47d71d:goto L47d71d;
case 0x47d71f:c.instructions+=1;goto B47d71f;
case 0x47d720:goto L47d720;
case 0x47d721:c.instructions+=2;goto B47d721;
case 0x47d723:c.instructions+=1;goto B47d723;
case 0x47d728:goto L47d728;
case 0x47d72d:c.instructions+=1;goto B47d72d;
case 0x47d72f:goto L47d72f;
case 0x47d730:c.instructions+=1;goto B47d730;
case 0x47d735:goto L47d735;
case 0x47d738:goto L47d738;
case 0x47d73a:c.instructions+=2;goto B47d73a;
case 0x47d73b:c.instructions+=1;goto B47d73b;
case 0x47d740:goto L47d740;
case 0x47d743:c.instructions+=7;goto B47d743;
case 0x47d744:c.instructions+=6;goto B47d744;
case 0x47d745:c.instructions+=5;goto B47d745;
case 0x47d746:c.instructions+=4;goto B47d746;
case 0x47d747:c.instructions+=3;goto B47d747;
case 0x47d74b:c.instructions+=2;goto B47d74b;
case 0x47d74d:c.instructions+=1;goto B47d74d;
case 0x47d750:goto L47d750;
case 0x47d756:c.instructions+=3;goto B47d756;
case 0x47d759:c.instructions+=2;goto B47d759;
case 0x47d75b:c.instructions+=1;goto B47d75b;
case 0x47d75d:goto L47d75d;
case 0x47d760:c.instructions+=1;goto B47d760;
case 0x47d762:goto L47d762;
case 0x47d765:c.instructions+=1;goto B47d765;
case 0x47d76b:goto L47d76b;
case 0x47d76e:c.instructions+=1;goto B47d76e;
case 0x47d774:goto L47d774;
case 0x47d776:c.instructions+=5;goto B47d776;
case 0x47d779:c.instructions+=4;goto B47d779;
case 0x47d780:c.instructions+=3;goto B47d780;
case 0x47d782:c.instructions+=2;goto B47d782;
case 0x47d789:c.instructions+=1;goto B47d789;
case 0x47d78b:goto L47d78b;
case 0x47d790:c.instructions+=2;goto B47d790;
case 0x47d791:c.instructions+=1;goto B47d791;
case 0x47d796:goto L47d796;
case 0x47d799:c.instructions+=2;goto B47d799;
case 0x47d79e:c.instructions+=1;goto B47d79e;
case 0x47d7a0:goto L47d7a0;
case 0x47d7a6:c.instructions+=5;goto B47d7a6;
case 0x47d7a9:c.instructions+=4;goto B47d7a9;
case 0x47d7af:c.instructions+=3;goto B47d7af;
case 0x47d7b0:c.instructions+=2;goto B47d7b0;
case 0x47d7b5:c.instructions+=1;goto B47d7b5;
case 0x47d7ba:goto L47d7ba;
case 0x47d7bd:c.instructions+=2;goto B47d7bd;
case 0x47d7bf:c.instructions+=1;goto B47d7bf;
case 0x47d7c1:goto L47d7c1;
case 0x47d7c3:c.instructions+=1;goto B47d7c3;
case 0x47d7c8:goto L47d7c8;
case 0x47d7ca:goto L47d7ca;
case 0x47d7cc:goto L47d7cc;
case 0x47d7ce:goto L47d7ce;
case 0x47d7d0:c.instructions+=1;goto B47d7d0;
case 0x47d7d5:goto L47d7d5;
case 0x47d7db:c.instructions+=16;goto B47d7db;
case 0x47d7e1:c.instructions+=15;goto B47d7e1;
case 0x47d7e4:c.instructions+=14;goto B47d7e4;
case 0x47d7ea:c.instructions+=13;goto B47d7ea;
case 0x47d7ee:c.instructions+=12;goto B47d7ee;
case 0x47d7f2:c.instructions+=11;goto B47d7f2;
case 0x47d7f6:c.instructions+=10;goto B47d7f6;
case 0x47d7fa:c.instructions+=9;goto B47d7fa;
case 0x47d7fe:c.instructions+=8;goto B47d7fe;
case 0x47d802:c.instructions+=7;goto B47d802;
case 0x47d806:c.instructions+=6;goto B47d806;
case 0x47d809:c.instructions+=5;goto B47d809;
case 0x47d80b:c.instructions+=4;goto B47d80b;
case 0x47d80f:c.instructions+=3;goto B47d80f;
case 0x47d812:c.instructions+=2;goto B47d812;
case 0x47d814:c.instructions+=1;goto B47d814;
case 0x47d816:goto L47d816;
case 0x47d81c:c.instructions+=3;goto B47d81c;
case 0x47d81d:c.instructions+=2;goto B47d81d;
case 0x47d81f:c.instructions+=1;goto B47d81f;
case 0x47d824:goto L47d824;
case 0x47d82a:c.instructions+=3;goto B47d82a;
case 0x47d82d:c.instructions+=2;goto B47d82d;
case 0x47d82f:c.instructions+=1;goto B47d82f;
case 0x47d831:goto L47d831;
case 0x47d837:c.instructions+=5;goto B47d837;
case 0x47d83a:c.instructions+=4;goto B47d83a;
case 0x47d840:c.instructions+=3;goto B47d840;
case 0x47d841:c.instructions+=2;goto B47d841;
case 0x47d842:c.instructions+=1;goto B47d842;
case 0x47d847:goto L47d847;
case 0x47d84a:c.instructions+=1;goto B47d84a;
case 0x47d84c:goto L47d84c;
case 0x47d84f:goto L47d84f;
case 0x47d852:c.instructions+=2;goto B47d852;
case 0x47d854:c.instructions+=1;goto B47d854;
case 0x47d856:goto L47d856;
case 0x47d85b:c.instructions+=2;goto B47d85b;
case 0x47d85c:c.instructions+=1;goto B47d85c;
case 0x47d861:goto L47d861;
case 0x47d864:c.instructions+=2;goto B47d864;
case 0x47d869:c.instructions+=1;goto B47d869;
case 0x47d86b:goto L47d86b;
case 0x47d871:c.instructions+=5;goto B47d871;
case 0x47d874:c.instructions+=4;goto B47d874;
case 0x47d87a:c.instructions+=3;goto B47d87a;
case 0x47d87b:c.instructions+=2;goto B47d87b;
case 0x47d87d:c.instructions+=1;goto B47d87d;
case 0x47d882:goto L47d882;
case 0x47d885:c.instructions+=2;goto B47d885;
case 0x47d887:c.instructions+=1;goto B47d887;
case 0x47d889:goto L47d889;
case 0x47d88c:c.instructions+=4;goto B47d88c;
case 0x47d88d:c.instructions+=3;goto B47d88d;
case 0x47d88e:c.instructions+=2;goto B47d88e;
case 0x47d890:c.instructions+=1;goto B47d890;
case 0x47d895:goto L47d895;
case 0x47d897:goto L47d897;
case 0x47d899:goto L47d899;
case 0x47d89c:goto L47d89c;
case 0x47d89e:c.instructions+=4;goto B47d89e;
case 0x47d8a2:c.instructions+=3;goto B47d8a2;
case 0x47d8a8:c.instructions+=2;goto B47d8a8;
case 0x47d8ab:c.instructions+=1;goto B47d8ab;
case 0x47d8ad:goto L47d8ad;
case 0x47d8b3:c.instructions+=2;goto B47d8b3;
case 0x47d8ba:c.instructions+=1;goto B47d8ba;
case 0x47d8bc:goto L47d8bc;
case 0x47d8c2:c.instructions+=1;goto B47d8c2;
case 0x47d8c9:goto L47d8c9;
case 0x47d8cb:c.instructions+=2;goto B47d8cb;
case 0x47d8cc:c.instructions+=1;goto B47d8cc;
case 0x47d8d1:goto L47d8d1;
case 0x47d8d3:c.instructions+=1;goto B47d8d3;
case 0x47d8d5:goto L47d8d5;
case 0x47d8d7:c.instructions+=3;goto B47d8d7;
case 0x47d8da:c.instructions+=2;goto B47d8da;
case 0x47d8db:c.instructions+=1;goto B47d8db;
case 0x47d8e0:goto L47d8e0;
case 0x47d8e2:c.instructions+=8;goto B47d8e2;
case 0x47d8e5:c.instructions+=7;goto B47d8e5;
case 0x47d8e8:c.instructions+=6;goto B47d8e8;
case 0x47d8eb:c.instructions+=5;goto B47d8eb;
case 0x47d8ee:c.instructions+=4;goto B47d8ee;
case 0x47d8f0:c.instructions+=3;goto B47d8f0;
case 0x47d8f4:c.instructions+=2;goto B47d8f4;
case 0x47d8f7:c.instructions+=1;goto B47d8f7;
case 0x47d8f9:goto L47d8f9;
case 0x47d8fd:c.instructions+=3;goto B47d8fd;
case 0x47d900:c.instructions+=2;goto B47d900;
case 0x47d901:c.instructions+=1;goto B47d901;
case 0x47d906:goto L47d906;
case 0x47d909:goto L47d909;
case 0x47d90d:c.instructions+=2;goto B47d90d;
case 0x47d90e:c.instructions+=1;goto B47d90e;
case 0x47d913:goto L47d913;
case 0x47d914:c.instructions+=5;goto B47d914;
case 0x47d915:c.instructions+=4;goto B47d915;
case 0x47d916:c.instructions+=3;goto B47d916;
case 0x47d917:c.instructions+=2;goto B47d917;
case 0x47d91a:c.instructions+=1;goto B47d91a;
case 0x47d920:goto L47d920;
case 0x47d926:c.instructions+=9;goto B47d926;
case 0x47d928:c.instructions+=8;goto B47d928;
case 0x47d92d:c.instructions+=7;goto B47d92d;
case 0x47d92e:c.instructions+=6;goto B47d92e;
case 0x47d935:c.instructions+=5;goto B47d935;
case 0x47d938:c.instructions+=4;goto B47d938;
case 0x47d939:c.instructions+=3;goto B47d939;
case 0x47d93a:c.instructions+=2;goto B47d93a;
case 0x47d93c:c.instructions+=1;goto B47d93c;
case 0x47d941:goto L47d941;
case 0x47d947:c.instructions+=4;goto B47d947;
case 0x47d94a:c.instructions+=3;goto B47d94a;
case 0x47d94c:c.instructions+=2;goto B47d94c;
case 0x47d94e:c.instructions+=1;goto B47d94e;
case 0x47d950:goto L47d950;
case 0x47d956:c.instructions+=1;goto B47d956;
case 0x47d958:goto L47d958;
case 0x47d95b:c.instructions+=1;goto B47d95b;
case 0x47d95d:goto L47d95d;
case 0x47d964:c.instructions+=1;goto B47d964;
case 0x47d966:goto L47d966;
case 0x47d96c:goto L47d96c;
case 0x47d96f:c.instructions+=1;goto B47d96f;
case 0x47d971:goto L47d971;
case 0x47d978:goto L47d978;
case 0x47d97e:c.instructions+=8;goto B47d97e;
case 0x47d980:c.instructions+=7;goto B47d980;
case 0x47d983:c.instructions+=6;goto B47d983;
case 0x47d986:c.instructions+=5;goto B47d986;
case 0x47d98a:c.instructions+=4;goto B47d98a;
case 0x47d98b:c.instructions+=3;goto B47d98b;
case 0x47d98c:c.instructions+=2;goto B47d98c;
case 0x47d990:c.instructions+=1;goto B47d990;
case 0x47d995:goto L47d995;
case 0x47d998:c.instructions+=1;goto B47d998;
case 0x47d99d:goto L47d99d;
case 0x47d9a1:c.instructions+=8;goto B47d9a1;
case 0x47d9a5:c.instructions+=7;goto B47d9a5;
case 0x47d9a6:c.instructions+=6;goto B47d9a6;
case 0x47d9aa:c.instructions+=5;goto B47d9aa;
case 0x47d9ae:c.instructions+=4;goto B47d9ae;
case 0x47d9b2:c.instructions+=3;goto B47d9b2;
case 0x47d9b4:c.instructions+=2;goto B47d9b4;
case 0x47d9b6:c.instructions+=1;goto B47d9b6;
case 0x47d9b8:goto L47d9b8;
case 0x47d9ba:c.instructions+=1;goto B47d9ba;
case 0x47d9bf:goto L47d9bf;
case 0x47d9c3:c.instructions+=3;goto B47d9c3;
case 0x47d9c5:c.instructions+=2;goto B47d9c5;
case 0x47d9c9:c.instructions+=1;goto B47d9c9;
case 0x47d9cf:goto L47d9cf;
case 0x47d9d5:c.instructions+=4;goto B47d9d5;
case 0x47d9db:c.instructions+=3;goto B47d9db;
case 0x47d9de:c.instructions+=2;goto B47d9de;
case 0x47d9e0:c.instructions+=1;goto B47d9e0;
case 0x47d9e2:goto L47d9e2;
case 0x47d9e4:c.instructions+=1;goto B47d9e4;
case 0x47d9e6:goto L47d9e6;
case 0x47d9e9:c.instructions+=1;goto B47d9e9;
case 0x47d9eb:goto L47d9eb;
case 0x47d9f0:goto L47d9f0;
case 0x47d9f1:c.instructions+=16;goto B47d9f1;
case 0x47d9f4:c.instructions+=15;goto B47d9f4;
case 0x47d9f6:c.instructions+=14;goto B47d9f6;
case 0x47d9fa:c.instructions+=13;goto B47d9fa;
case 0x47d9fc:c.instructions+=12;goto B47d9fc;
case 0x47d9ff:c.instructions+=11;goto B47d9ff;
case 0x47da02:c.instructions+=10;goto B47da02;
case 0x47da05:c.instructions+=9;goto B47da05;
case 0x47da08:c.instructions+=8;goto B47da08;
case 0x47da0b:c.instructions+=7;goto B47da0b;
case 0x47da0e:c.instructions+=6;goto B47da0e;
case 0x47da11:c.instructions+=5;goto B47da11;
case 0x47da14:c.instructions+=4;goto B47da14;
case 0x47da17:c.instructions+=3;goto B47da17;
case 0x47da1a:c.instructions+=2;goto B47da1a;
case 0x47da1d:c.instructions+=1;goto B47da1d;
case 0x47da1f:goto L47da1f;
case 0x47da21:c.instructions+=1;goto B47da21;
case 0x47da23:goto L47da23;
case 0x47da26:c.instructions+=1;goto B47da26;
case 0x47da28:goto L47da28;
case 0x47da2d:goto L47da2d;
case 0x47da2e:c.instructions+=17;goto B47da2e;
case 0x47da2f:c.instructions+=16;goto B47da2f;
case 0x47da34:c.instructions+=15;goto B47da34;
case 0x47da37:c.instructions+=14;goto B47da37;
case 0x47da3a:c.instructions+=13;goto B47da3a;
case 0x47da3d:c.instructions+=12;goto B47da3d;
case 0x47da40:c.instructions+=11;goto B47da40;
case 0x47da43:c.instructions+=10;goto B47da43;
case 0x47da46:c.instructions+=9;goto B47da46;
case 0x47da49:c.instructions+=8;goto B47da49;
case 0x47da4c:c.instructions+=7;goto B47da4c;
case 0x47da4f:c.instructions+=6;goto B47da4f;
case 0x47da52:c.instructions+=5;goto B47da52;
case 0x47da55:c.instructions+=4;goto B47da55;
case 0x47da58:c.instructions+=3;goto B47da58;
case 0x47da5b:c.instructions+=2;goto B47da5b;
case 0x47da5e:c.instructions+=1;goto B47da5e;
case 0x47da63:goto L47da63;
case 0x47da66:c.instructions+=2;goto B47da66;
case 0x47da68:c.instructions+=1;goto B47da68;
case 0x47da6a:goto L47da6a;
case 0x47da6f:c.instructions+=2;goto B47da6f;
case 0x47da74:c.instructions+=1;goto B47da74;
case 0x47da79:goto L47da79;
case 0x47da7a:c.instructions+=3;goto B47da7a;
case 0x47da7b:c.instructions+=2;goto B47da7b;
case 0x47da80:c.instructions+=1;goto B47da80;
case 0x47da85:goto L47da85;
case 0x47da88:goto L47da88;
case 0x47da89:c.instructions+=1;goto B47da89;
case 0x47da8b:goto L47da8b;
case 0x47da8d:goto L47da8d;
case 0x47da93:c.instructions+=6;goto B47da93;
case 0x47da95:c.instructions+=5;goto B47da95;
case 0x47da97:c.instructions+=4;goto B47da97;
case 0x47da9f:c.instructions+=3;goto B47da9f;
case 0x47daa3:c.instructions+=2;goto B47daa3;
case 0x47daa4:c.instructions+=1;goto B47daa4;
case 0x47daa6:goto L47daa6;
case 0x47daaa:c.instructions+=2;goto B47daaa;
case 0x47daab:c.instructions+=1;goto B47daab;
case 0x47dab0:goto L47dab0;
case 0x47dab5:c.instructions+=7;goto B47dab5;
case 0x47dab6:c.instructions+=6;goto B47dab6;
case 0x47daba:c.instructions+=5;goto B47daba;
case 0x47dabb:c.instructions+=4;goto B47dabb;
case 0x47dabf:c.instructions+=3;goto B47dabf;
case 0x47dac6:c.instructions+=2;goto B47dac6;
case 0x47dac9:c.instructions+=1;goto B47dac9;
case 0x47daca:goto L47daca;
case 0x47dace:c.instructions+=6;goto B47dace;
case 0x47dad2:c.instructions+=5;goto B47dad2;
case 0x47dad3:c.instructions+=4;goto B47dad3;
case 0x47dad4:c.instructions+=3;goto B47dad4;
case 0x47dadb:c.instructions+=2;goto B47dadb;
case 0x47dade:c.instructions+=1;goto B47dade;
case 0x47dae0:goto L47dae0;
case 0x47dae5:c.instructions+=2;goto B47dae5;
case 0x47dae6:c.instructions+=1;goto B47dae6;
case 0x47daeb:goto L47daeb;
case 0x47daee:c.instructions+=2;goto B47daee;
case 0x47daf3:c.instructions+=1;goto B47daf3;
case 0x47daf5:goto L47daf5;
case 0x47dafb:c.instructions+=5;goto B47dafb;
case 0x47dafe:c.instructions+=4;goto B47dafe;
case 0x47db04:c.instructions+=3;goto B47db04;
case 0x47db05:c.instructions+=2;goto B47db05;
case 0x47db0a:c.instructions+=1;goto B47db0a;
case 0x47db0f:goto L47db0f;
case 0x47db12:c.instructions+=2;goto B47db12;
case 0x47db14:c.instructions+=1;goto B47db14;
case 0x47db16:goto L47db16;
case 0x47db18:c.instructions+=1;goto B47db18;
case 0x47db1d:goto L47db1d;
case 0x47db1f:c.instructions+=1;goto B47db1f;
case 0x47db20:goto L47db20;
case 0x47db22:c.instructions+=15;goto B47db22;
case 0x47db27:c.instructions+=14;goto B47db27;
case 0x47db2d:c.instructions+=13;goto B47db2d;
case 0x47db2e:c.instructions+=12;goto B47db2e;
case 0x47db35:c.instructions+=11;goto B47db35;
case 0x47db38:c.instructions+=10;goto B47db38;
case 0x47db39:c.instructions+=9;goto B47db39;
case 0x47db3b:c.instructions+=8;goto B47db3b;
case 0x47db3c:c.instructions+=7;goto B47db3c;
case 0x47db40:c.instructions+=6;goto B47db40;
case 0x47db46:c.instructions+=5;goto B47db46;
case 0x47db4e:c.instructions+=4;goto B47db4e;
case 0x47db54:c.instructions+=3;goto B47db54;
case 0x47db5c:c.instructions+=2;goto B47db5c;
case 0x47db5d:c.instructions+=1;goto B47db5d;
case 0x47db60:goto L47db60;
case 0x47db62:c.instructions+=4;goto B47db62;
case 0x47db64:c.instructions+=3;goto B47db64;
case 0x47db67:c.instructions+=2;goto B47db67;
case 0x47db6a:c.instructions+=1;goto B47db6a;
case 0x47db6c:goto L47db6c;
case 0x47db6e:c.instructions+=2;goto B47db6e;
case 0x47db70:c.instructions+=1;goto B47db70;
case 0x47db72:goto L47db72;
case 0x47db77:goto L47db77;
case 0x47db7b:c.instructions+=2;goto B47db7b;
case 0x47db7c:c.instructions+=1;goto B47db7c;
case 0x47db81:goto L47db81;
case 0x47db84:c.instructions+=1;goto B47db84;
case 0x47db89:goto L47db89;
case 0x47db8d:c.instructions+=4;goto B47db8d;
case 0x47db8f:c.instructions+=3;goto B47db8f;
case 0x47db91:c.instructions+=2;goto B47db91;
case 0x47db92:c.instructions+=1;goto B47db92;
case 0x47db95:goto L47db95;
case 0x47db9a:goto L47db9a;
case 0x47dba0:goto L47dba0;
case 0x47dba4:c.instructions+=4;goto B47dba4;
case 0x47dba7:c.instructions+=3;goto B47dba7;
case 0x47dba8:c.instructions+=2;goto B47dba8;
case 0x47dbac:c.instructions+=1;goto B47dbac;
case 0x47dbae:goto L47dbae;
case 0x47dbb4:c.instructions+=3;goto B47dbb4;
case 0x47dbb6:c.instructions+=2;goto B47dbb6;
case 0x47dbb7:c.instructions+=1;goto B47dbb7;
case 0x47dbb9:goto L47dbb9;
case 0x47dbbb:c.instructions+=2;goto B47dbbb;
case 0x47dbbd:c.instructions+=1;goto B47dbbd;
case 0x47dbbf:goto L47dbbf;
case 0x47dbc4:goto L47dbc4;
case 0x47dbc8:c.instructions+=2;goto B47dbc8;
case 0x47dbc9:c.instructions+=1;goto B47dbc9;
case 0x47dbce:goto L47dbce;
case 0x47dbd1:c.instructions+=1;goto B47dbd1;
case 0x47dbd6:goto L47dbd6;
case 0x47dbda:c.instructions+=4;goto B47dbda;
case 0x47dbdc:c.instructions+=3;goto B47dbdc;
case 0x47dbde:c.instructions+=2;goto B47dbde;
case 0x47dbdf:c.instructions+=1;goto B47dbdf;
case 0x47dbe2:goto L47dbe2;
case 0x47dbe7:goto L47dbe7;
case 0x47dbeb:c.instructions+=7;goto B47dbeb;
case 0x47dbf5:c.instructions+=6;goto B47dbf5;
case 0x47dbfb:c.instructions+=5;goto B47dbfb;
case 0x47dbfc:c.instructions+=4;goto B47dbfc;
case 0x47dbfd:c.instructions+=3;goto B47dbfd;
case 0x47dc04:c.instructions+=2;goto B47dc04;
case 0x47dc07:c.instructions+=1;goto B47dc07;
case 0x47dc10:goto L47dc10;
case 0x47dc16:c.instructions+=10;goto B47dc16;
case 0x47dc18:c.instructions+=9;goto B47dc18;
case 0x47dc1d:c.instructions+=8;goto B47dc1d;
case 0x47dc1e:c.instructions+=7;goto B47dc1e;
case 0x47dc25:c.instructions+=6;goto B47dc25;
case 0x47dc26:c.instructions+=5;goto B47dc26;
case 0x47dc28:c.instructions+=4;goto B47dc28;
case 0x47dc2e:c.instructions+=3;goto B47dc2e;
case 0x47dc30:c.instructions+=2;goto B47dc30;
case 0x47dc31:c.instructions+=1;goto B47dc31;
case 0x47dc37:goto L47dc37;
case 0x47dc3e:c.instructions+=1;goto B47dc3e;
case 0x47dc40:goto L47dc40;
case 0x47dc44:c.instructions+=2;goto B47dc44;
case 0x47dc45:c.instructions+=1;goto B47dc45;
case 0x47dc4a:goto L47dc4a;
case 0x47dc4c:c.instructions+=2;goto B47dc4c;
case 0x47dc56:c.instructions+=1;goto B47dc56;
case 0x47dc5b:goto L47dc5b;
case 0x47dc5e:c.instructions+=4;goto B47dc5e;
case 0x47dc62:c.instructions+=3;goto B47dc62;
case 0x47dc64:c.instructions+=2;goto B47dc64;
case 0x47dc6c:c.instructions+=1;goto B47dc6c;
case 0x47dc6e:goto L47dc6e;
case 0x47dc72:c.instructions+=11;goto B47dc72;
case 0x47dc76:c.instructions+=10;goto B47dc76;
case 0x47dc77:c.instructions+=9;goto B47dc77;
case 0x47dc7b:c.instructions+=8;goto B47dc7b;
case 0x47dc7d:c.instructions+=7;goto B47dc7d;
case 0x47dc7e:c.instructions+=6;goto B47dc7e;
case 0x47dc82:c.instructions+=5;goto B47dc82;
case 0x47dc84:c.instructions+=4;goto B47dc84;
case 0x47dc85:c.instructions+=3;goto B47dc85;
case 0x47dc86:c.instructions+=2;goto B47dc86;
case 0x47dc88:c.instructions+=1;goto B47dc88;
case 0x47dc8d:goto L47dc8d;
case 0x47dc8f:goto L47dc8f;
case 0x47dc91:goto L47dc91;
case 0x47dc98:c.instructions+=2;goto B47dc98;
case 0x47dc9f:c.instructions+=1;goto B47dc9f;
case 0x47dca6:goto L47dca6;
case 0x47dcac:c.instructions+=2;goto B47dcac;
case 0x47dcaf:c.instructions+=1;goto B47dcaf;
case 0x47dcb1:goto L47dcb1;
case 0x47dcb4:c.instructions+=1;goto B47dcb4;
case 0x47dcb6:goto L47dcb6;
case 0x47dcbc:c.instructions+=2;goto B47dcbc;
case 0x47dcbe:c.instructions+=1;goto B47dcbe;
case 0x47dcc0:goto L47dcc0;
case 0x47dcc6:goto L47dcc6;
case 0x47dccc:c.instructions+=2;goto B47dccc;
case 0x47dccf:c.instructions+=1;goto B47dccf;
case 0x47dcd1:goto L47dcd1;
case 0x47dcd4:c.instructions+=1;goto B47dcd4;
case 0x47dcd6:goto L47dcd6;
case 0x47dcdc:c.instructions+=2;goto B47dcdc;
case 0x47dcde:c.instructions+=1;goto B47dcde;
case 0x47dce0:goto L47dce0;
case 0x47dce6:goto L47dce6;
case 0x47dcec:c.instructions+=2;goto B47dcec;
case 0x47dcef:c.instructions+=1;goto B47dcef;
case 0x47dcf1:goto L47dcf1;
case 0x47dcf4:c.instructions+=1;goto B47dcf4;
case 0x47dcf6:goto L47dcf6;
case 0x47dcfc:c.instructions+=2;goto B47dcfc;
case 0x47dcfe:c.instructions+=1;goto B47dcfe;
case 0x47dd00:goto L47dd00;
case 0x47dd06:goto L47dd06;
case 0x47dd0c:c.instructions+=2;goto B47dd0c;
case 0x47dd0f:c.instructions+=1;goto B47dd0f;
case 0x47dd11:goto L47dd11;
case 0x47dd14:c.instructions+=1;goto B47dd14;
case 0x47dd16:goto L47dd16;
case 0x47dd1c:c.instructions+=2;goto B47dd1c;
case 0x47dd1e:c.instructions+=1;goto B47dd1e;
case 0x47dd20:goto L47dd20;
case 0x47dd26:goto L47dd26;
case 0x47dd2a:c.instructions+=5;goto B47dd2a;
case 0x47dd2b:c.instructions+=4;goto B47dd2b;
case 0x47dd32:c.instructions+=3;goto B47dd32;
case 0x47dd33:c.instructions+=2;goto B47dd33;
case 0x47dd36:c.instructions+=1;goto B47dd36;
case 0x47dd40:goto L47dd40;
case 0x47dd46:c.instructions+=12;goto B47dd46;
case 0x47dd48:c.instructions+=11;goto B47dd48;
case 0x47dd4d:c.instructions+=10;goto B47dd4d;
case 0x47dd4e:c.instructions+=9;goto B47dd4e;
case 0x47dd55:c.instructions+=8;goto B47dd55;
case 0x47dd58:c.instructions+=7;goto B47dd58;
case 0x47dd59:c.instructions+=6;goto B47dd59;
case 0x47dd5a:c.instructions+=5;goto B47dd5a;
case 0x47dd5c:c.instructions+=4;goto B47dd5c;
case 0x47dd62:c.instructions+=3;goto B47dd62;
case 0x47dd64:c.instructions+=2;goto B47dd64;
case 0x47dd66:c.instructions+=1;goto B47dd66;
case 0x47dd6c:goto L47dd6c;
case 0x47dd6d:c.instructions+=3;goto B47dd6d;
case 0x47dd6e:c.instructions+=2;goto B47dd6e;
case 0x47dd70:c.instructions+=1;goto B47dd70;
case 0x47dd76:goto L47dd76;
case 0x47dd79:c.instructions+=2;goto B47dd79;
case 0x47dd7b:c.instructions+=1;goto B47dd7b;
case 0x47dd7d:goto L47dd7d;
case 0x47dd7f:c.instructions+=3;goto B47dd7f;
case 0x47dd81:c.instructions+=2;goto B47dd81;
case 0x47dd85:c.instructions+=1;goto B47dd85;
case 0x47dd87:goto L47dd87;
case 0x47dd8b:c.instructions+=3;goto B47dd8b;
case 0x47dd8c:c.instructions+=2;goto B47dd8c;
case 0x47dd8e:c.instructions+=1;goto B47dd8e;
case 0x47dd93:goto L47dd93;
case 0x47dd98:c.instructions+=1;goto B47dd98;
case 0x47dd9a:goto L47dd9a;
case 0x47dd9d:c.instructions+=1;goto B47dd9d;
case 0x47dd9f:goto L47dd9f;
case 0x47dda0:c.instructions+=2;goto B47dda0;
case 0x47dda2:c.instructions+=1;goto B47dda2;
case 0x47dda7:goto L47dda7;
case 0x47ddaa:c.instructions+=3;goto B47ddaa;
case 0x47ddad:c.instructions+=2;goto B47ddad;
case 0x47ddae:c.instructions+=1;goto B47ddae;
case 0x47ddb3:goto L47ddb3;
case 0x47ddb5:c.instructions+=8;goto B47ddb5;
case 0x47ddb8:c.instructions+=7;goto B47ddb8;
case 0x47ddbb:c.instructions+=6;goto B47ddbb;
case 0x47ddc3:c.instructions+=5;goto B47ddc3;
case 0x47ddc6:c.instructions+=4;goto B47ddc6;
case 0x47ddc7:c.instructions+=3;goto B47ddc7;
case 0x47ddca:c.instructions+=2;goto B47ddca;
case 0x47ddcd:c.instructions+=1;goto B47ddcd;
case 0x47ddcf:goto L47ddcf;
case 0x47ddd5:c.instructions+=2;goto B47ddd5;
case 0x47ddd7:c.instructions+=1;goto B47ddd7;
case 0x47ddd9:goto L47ddd9;
case 0x47dddb:c.instructions+=3;goto B47dddb;
case 0x47dddd:c.instructions+=2;goto B47dddd;
case 0x47dde1:c.instructions+=1;goto B47dde1;
case 0x47dde3:goto L47dde3;
case 0x47dde7:c.instructions+=3;goto B47dde7;
case 0x47dde8:c.instructions+=2;goto B47dde8;
case 0x47ddea:c.instructions+=1;goto B47ddea;
case 0x47ddef:goto L47ddef;
case 0x47ddf4:c.instructions+=1;goto B47ddf4;
case 0x47ddf6:goto L47ddf6;
case 0x47ddfc:c.instructions+=2;goto B47ddfc;
case 0x47ddfe:c.instructions+=1;goto B47ddfe;
case 0x47de00:goto L47de00;
case 0x47de02:c.instructions+=2;goto B47de02;
case 0x47de04:c.instructions+=1;goto B47de04;
case 0x47de06:goto L47de06;
case 0x47de0b:goto L47de0b;
case 0x47de0f:c.instructions+=2;goto B47de0f;
case 0x47de10:c.instructions+=1;goto B47de10;
case 0x47de15:goto L47de15;
case 0x47de18:c.instructions+=1;goto B47de18;
case 0x47de1d:goto L47de1d;
case 0x47de21:c.instructions+=4;goto B47de21;
case 0x47de23:c.instructions+=3;goto B47de23;
case 0x47de24:c.instructions+=2;goto B47de24;
case 0x47de25:c.instructions+=1;goto B47de25;
case 0x47de28:goto L47de28;
case 0x47de2d:goto L47de2d;
case 0x47de33:goto L47de33;
case 0x47de39:c.instructions+=3;goto B47de39;
case 0x47de3d:c.instructions+=2;goto B47de3d;
case 0x47de45:c.instructions+=1;goto B47de45;
case 0x47de50:goto L47de50;
case 0x47de54:c.instructions+=2;goto B47de54;
case 0x47de56:c.instructions+=1;goto B47de56;
case 0x47de5c:goto L47de5c;
case 0x47de62:c.instructions+=1;goto B47de62;
case 0x47de68:goto L47de68;
case 0x47de6c:c.instructions+=3;goto B47de6c;
case 0x47de6d:c.instructions+=2;goto B47de6d;
case 0x47de77:c.instructions+=1;goto B47de77;
case 0x47de7c:goto L47de7c;
case 0x47de7f:c.instructions+=1;goto B47de7f;
case 0x47de84:goto L47de84;
case 0x47de88:c.instructions+=8;goto B47de88;
case 0x47de8c:c.instructions+=7;goto B47de8c;
case 0x47de8d:c.instructions+=6;goto B47de8d;
case 0x47de91:c.instructions+=5;goto B47de91;
case 0x47de95:c.instructions+=4;goto B47de95;
case 0x47de99:c.instructions+=3;goto B47de99;
case 0x47de9b:c.instructions+=2;goto B47de9b;
case 0x47de9d:c.instructions+=1;goto B47de9d;
case 0x47de9f:goto L47de9f;
case 0x47dea1:c.instructions+=1;goto B47dea1;
case 0x47dea6:goto L47dea6;
case 0x47deaa:c.instructions+=3;goto B47deaa;
case 0x47deac:c.instructions+=2;goto B47deac;
case 0x47deb0:c.instructions+=1;goto B47deb0;
case 0x47deb2:goto L47deb2;
case 0x47deb5:c.instructions+=8;goto B47deb5;
case 0x47deb6:c.instructions+=7;goto B47deb6;
case 0x47deb7:c.instructions+=6;goto B47deb7;
case 0x47debc:c.instructions+=5;goto B47debc;
case 0x47debe:c.instructions+=4;goto B47debe;
case 0x47dec1:c.instructions+=3;goto B47dec1;
case 0x47dec8:c.instructions+=2;goto B47dec8;
case 0x47decb:c.instructions+=1;goto B47decb;
case 0x47ded0:goto L47ded0;
case 0x47ded3:c.instructions+=2;goto B47ded3;
case 0x47ded5:c.instructions+=1;goto B47ded5;
case 0x47ded7:goto L47ded7;
case 0x47dedc:c.instructions+=2;goto B47dedc;
case 0x47dee1:c.instructions+=1;goto B47dee1;
case 0x47dee6:goto L47dee6;
case 0x47dee7:c.instructions+=3;goto B47dee7;
case 0x47dee8:c.instructions+=2;goto B47dee8;
case 0x47deed:c.instructions+=1;goto B47deed;
case 0x47def2:goto L47def2;
case 0x47def5:c.instructions+=1;goto B47def5;
case 0x47def7:goto L47def7;
case 0x47def9:goto L47def9;
case 0x47df01:c.instructions+=1;goto B47df01;
case 0x47df07:goto L47df07;
case 0x47df0b:c.instructions+=6;goto B47df0b;
case 0x47df0f:c.instructions+=5;goto B47df0f;
case 0x47df12:c.instructions+=4;goto B47df12;
case 0x47df13:c.instructions+=3;goto B47df13;
case 0x47df17:c.instructions+=2;goto B47df17;
case 0x47df1b:c.instructions+=1;goto B47df1b;
case 0x47df21:goto L47df21;
case 0x47df23:c.instructions+=2;goto B47df23;
case 0x47df29:c.instructions+=1;goto B47df29;
case 0x47df30:goto L47df30;
case 0x47df32:c.instructions+=2;goto B47df32;
case 0x47df35:c.instructions+=1;goto B47df35;
case 0x47df37:goto L47df37;
case 0x47df3a:c.instructions+=1;goto B47df3a;
case 0x47df3c:goto L47df3c;
case 0x47df43:goto L47df43;
case 0x47df44:c.instructions+=3;goto B47df44;
case 0x47df47:c.instructions+=2;goto B47df47;
case 0x47df4a:c.instructions+=1;goto B47df4a;
case 0x47df4c:goto L47df4c;
case 0x47df4e:goto L47df4e;
case 0x47df55:c.instructions+=4;goto B47df55;
case 0x47df57:c.instructions+=3;goto B47df57;
case 0x47df5e:c.instructions+=2;goto B47df5e;
case 0x47df65:c.instructions+=1;goto B47df65;
case 0x47df67:goto L47df67;
case 0x47df69:c.instructions+=2;goto B47df69;
case 0x47df6b:c.instructions+=1;goto B47df6b;
case 0x47df6d:goto L47df6d;
case 0x47df72:goto L47df72;
case 0x47df76:c.instructions+=2;goto B47df76;
case 0x47df77:c.instructions+=1;goto B47df77;
case 0x47df7c:goto L47df7c;
case 0x47df7f:c.instructions+=1;goto B47df7f;
case 0x47df84:goto L47df84;
case 0x47df88:c.instructions+=4;goto B47df88;
case 0x47df8a:c.instructions+=3;goto B47df8a;
case 0x47df8b:c.instructions+=2;goto B47df8b;
case 0x47df8c:c.instructions+=1;goto B47df8c;
case 0x47df8f:goto L47df8f;
case 0x47df94:goto L47df94;
case 0x47df9b:c.instructions+=1;goto B47df9b;
case 0x47df9d:goto L47df9d;
case 0x47df9e:c.instructions+=2;goto B47df9e;
case 0x47dfa0:c.instructions+=1;goto B47dfa0;
case 0x47dfa2:goto L47dfa2;
case 0x47dfa3:c.instructions+=1;goto B47dfa3;
case 0x47dfa5:goto L47dfa5;
case 0x47dfa6:c.instructions+=5;goto B47dfa6;
case 0x47dfa7:c.instructions+=4;goto B47dfa7;
case 0x47dfa8:c.instructions+=3;goto B47dfa8;
case 0x47dfaa:c.instructions+=2;goto B47dfaa;
case 0x47dfab:c.instructions+=1;goto B47dfab;
case 0x47dfb0:goto L47dfb0;
case 0x47dfb1:c.instructions+=1;goto B47dfb1;
case 0x47dfb2:goto L47dfb2;
case 0x47dfb6:c.instructions+=5;goto B47dfb6;
case 0x47dfb7:c.instructions+=4;goto B47dfb7;
case 0x47dfb8:c.instructions+=3;goto B47dfb8;
case 0x47dfbf:c.instructions+=2;goto B47dfbf;
case 0x47dfc2:c.instructions+=1;goto B47dfc2;
case 0x47dfe0:goto L47dfe0;
case 0x47dfe5:c.instructions+=2;goto B47dfe5;
case 0x47dfe6:c.instructions+=1;goto B47dfe6;
case 0x47dfeb:goto L47dfeb;
case 0x47dfee:c.instructions+=2;goto B47dfee;
case 0x47dff3:c.instructions+=1;goto B47dff3;
case 0x47dff5:goto L47dff5;
case 0x47dffb:c.instructions+=2;goto B47dffb;
case 0x47dffe:c.instructions+=1;goto B47dffe;
default:missing_instruction(c.pc);}
B47d001:L47d001:{c.instructions+=2;NFSU2_TR(0x47d001);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(U+6))<(u32(0x1fffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1fffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1fffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47d007:{NFSU2_TR(0x47d007);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47d00e;}}
}
B47d009:L47d009:{c.instructions+=1;NFSU2_TR(0x47d009);
w4(R+0,u32(0x1fffull));
}
B47d00e:L47d00e:{c.instructions+=5;NFSU2_TR(0x47d00e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d011:{NFSU2_TR(0x47d011);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47d013:{NFSU2_TR(0x47d013);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d015:{NFSU2_TR(0x47d015);
__builtin_memmove((R+4),(R+24),4);
}
B47d017:{NFSU2_TR(0x47d017);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d01aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47d01a:L47d01a:{c.instructions+=3;NFSU2_TR(0x47d01a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B47d01c:{NFSU2_TR(0x47d01c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47d022:{NFSU2_TR(0x47d022);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L47d028;}}
}
B47d024:L47d024:{c.instructions+=2;NFSU2_TR(0x47d024);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47d026:{NFSU2_TR(0x47d026);
{goto L47d034;}
}
B47d028:L47d028:{c.instructions+=2;NFSU2_TR(0x47d028);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47d02d:{NFSU2_TR(0x47d02d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47d034;}}
}
B47d02f:L47d02f:{c.instructions+=1;NFSU2_TR(0x47d02f);
w4(R+0,u32(0xffffull));
}
B47d034:L47d034:{c.instructions+=5;NFSU2_TR(0x47d034);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d037:{NFSU2_TR(0x47d037);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47d03d:{NFSU2_TR(0x47d03d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B47d03f:{NFSU2_TR(0x47d03f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47d041:{NFSU2_TR(0x47d041);
if(r1(R+518)){{goto L47d04c;}}
}
B47d043:L47d043:{c.instructions+=3;NFSU2_TR(0x47d043);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47d046:{NFSU2_TR(0x47d046);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d047:{NFSU2_TR(0x47d047);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d04cull));
TAIL_STATIC(0x735580u,735);
}
B47d04c:L47d04c:{c.instructions+=2;NFSU2_TR(0x47d04c);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B47d052:{NFSU2_TR(0x47d052);
if(r1(R+518)){{goto L47d0ef;}}
}
B47d058:L47d058:{c.instructions+=7;NFSU2_TR(0x47d058);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47d05e:{NFSU2_TR(0x47d05e);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(s64(s32(m4(0x7ecf5c)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+28)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B47d065:{NFSU2_TR(0x47d065);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47d067:{NFSU2_TR(0x47d067);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d069:{NFSU2_TR(0x47d069);
__builtin_memmove((R+4),(R+24),4);
}
B47d06b:{NFSU2_TR(0x47d06b);
u8 U[47];
w4(U+39,u32(u32(u32(0xfull))&u32(u32(0x1full))));
__builtin_memmove((U+43),(R+28),4);
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+39))));
w1(U+24,u8((r4(U+39))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+39))-u32(u32(0x1ull))));
w4(U+29,sar<u32>(r4(U+43),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+39))==(u32(0x1ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+39))!=(u32(0x0ull))));
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
B47d06e:{NFSU2_TR(0x47d06e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d071ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47d071:L47d071:{c.instructions+=5;NFSU2_TR(0x47d071);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B47d074:{NFSU2_TR(0x47d074);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47d07a:{NFSU2_TR(0x47d07a);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B47d07d:{NFSU2_TR(0x47d07d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B47d07f:{NFSU2_TR(0x47d07f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L47d085;}}
}
B47d081:L47d081:{c.instructions+=2;NFSU2_TR(0x47d081);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47d083:{NFSU2_TR(0x47d083);
{goto L47d091;}
}
B47d085:L47d085:{c.instructions+=2;NFSU2_TR(0x47d085);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47d08a:{NFSU2_TR(0x47d08a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47d091;}}
}
B47d08c:L47d08c:{c.instructions+=1;NFSU2_TR(0x47d08c);
w4(R+0,u32(0x7fffull));
}
B47d091:L47d091:{c.instructions+=5;NFSU2_TR(0x47d091);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B47d093:{NFSU2_TR(0x47d093);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d096:{NFSU2_TR(0x47d096);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47d09c:{NFSU2_TR(0x47d09c);
__builtin_memmove((R+0),(R+20),4);
}
B47d09e:{NFSU2_TR(0x47d09e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L47d0a4;}}
}
B47d0a0:L47d0a0:{c.instructions+=2;NFSU2_TR(0x47d0a0);
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
B47d0a2:{NFSU2_TR(0x47d0a2);
{goto L47d0b1;}
}
B47d0a4:L47d0a4:{c.instructions+=2;NFSU2_TR(0x47d0a4);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(U+6))<(u32(0x1fffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1fffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1fffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47d0aa:{NFSU2_TR(0x47d0aa);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47d0b1;}}
}
B47d0ac:L47d0ac:{c.instructions+=1;NFSU2_TR(0x47d0ac);
w4(R+0,u32(0x1fffull));
}
B47d0b1:L47d0b1:{c.instructions+=5;NFSU2_TR(0x47d0b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d0b4:{NFSU2_TR(0x47d0b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47d0b6:{NFSU2_TR(0x47d0b6);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d0b8:{NFSU2_TR(0x47d0b8);
__builtin_memmove((R+4),(R+24),4);
}
B47d0ba:{NFSU2_TR(0x47d0ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d0bdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47d0bd:L47d0bd:{c.instructions+=3;NFSU2_TR(0x47d0bd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B47d0bf:{NFSU2_TR(0x47d0bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47d0c5:{NFSU2_TR(0x47d0c5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L47d0cb;}}
}
B47d0c7:L47d0c7:{c.instructions+=2;NFSU2_TR(0x47d0c7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47d0c9:{NFSU2_TR(0x47d0c9);
{goto L47d0d7;}
}
B47d0cb:L47d0cb:{c.instructions+=2;NFSU2_TR(0x47d0cb);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47d0d0:{NFSU2_TR(0x47d0d0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47d0d7;}}
}
B47d0d2:L47d0d2:{c.instructions+=1;NFSU2_TR(0x47d0d2);
w4(R+0,u32(0xffffull));
}
B47d0d7:L47d0d7:{c.instructions+=5;NFSU2_TR(0x47d0d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d0da:{NFSU2_TR(0x47d0da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47d0e0:{NFSU2_TR(0x47d0e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B47d0e2:{NFSU2_TR(0x47d0e2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47d0e4:{NFSU2_TR(0x47d0e4);
if(r1(R+518)){{goto L47d0ef;}}
}
B47d0e6:L47d0e6:{c.instructions+=3;NFSU2_TR(0x47d0e6);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47d0e9:{NFSU2_TR(0x47d0e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d0ea:{NFSU2_TR(0x47d0ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d0efull));
TAIL_STATIC(0x735580u,735);
}
B47d0ef:L47d0ef:{c.instructions+=3;NFSU2_TR(0x47d0ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47d0f5:{NFSU2_TR(0x47d0f5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47d0f7:{NFSU2_TR(0x47d0f7);
if(r1(R+518)){{goto L47d165;}}
}
B47d0f9:L47d0f9:{c.instructions+=4;NFSU2_TR(0x47d0f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47d0fb:{NFSU2_TR(0x47d0fb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47d0fd:{NFSU2_TR(0x47d0fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d101:{NFSU2_TR(0x47d101);
if(r1(R+518)){{goto L47d165;}}
}
B47d103:L47d103:{c.instructions+=4;NFSU2_TR(0x47d103);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B47d107:{NFSU2_TR(0x47d107);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d108:{NFSU2_TR(0x47d108);
__builtin_memmove((R+4),(R+0),4);
}
B47d10a:{NFSU2_TR(0x47d10a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d10full));
TAIL_STATIC(0x735070u,735);
}
B47d10f:L47d10f:{c.instructions+=2;NFSU2_TR(0x47d10f);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B47d114:{NFSU2_TR(0x47d114);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47d165;}}
}
B47d116:L47d116:{c.instructions+=4;NFSU2_TR(0x47d116);
__builtin_memmove((R+8),gp(0x82b884),4);
}
B47d11c:{NFSU2_TR(0x47d11c);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47d11f:{NFSU2_TR(0x47d11f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47d121:{NFSU2_TR(0x47d121);
if(r1(R+518)){{goto L47d165;}}
}
B47d123:L47d123:{c.instructions+=5;NFSU2_TR(0x47d123);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B47d127:{NFSU2_TR(0x47d127);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d128:{NFSU2_TR(0x47d128);
__builtin_memmove((R+4),(R+24),4);
}
B47d12a:{NFSU2_TR(0x47d12a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47d132:{NFSU2_TR(0x47d132);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d137ull));
TAIL_STATIC(0x45e3d0u,45e);
}
B47d137:L47d137:{c.instructions+=6;NFSU2_TR(0x47d137);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47d13d:{NFSU2_TR(0x47d13d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47d141:{NFSU2_TR(0x47d141);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d144:{NFSU2_TR(0x47d144);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d145:{NFSU2_TR(0x47d145);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47d14b:{NFSU2_TR(0x47d14b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d150ull));
TAIL_STATIC(0x458230u,458);
}
B47d150:L47d150:{c.instructions+=4;NFSU2_TR(0x47d150);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47d156:{NFSU2_TR(0x47d156);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B47d158:{NFSU2_TR(0x47d158);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47d15a:{NFSU2_TR(0x47d15a);
if(r1(R+518)){{goto L47d165;}}
}
B47d15c:L47d15c:{c.instructions+=3;NFSU2_TR(0x47d15c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47d15f:{NFSU2_TR(0x47d15f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d160:{NFSU2_TR(0x47d160);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d165ull));
TAIL_STATIC(0x735580u,735);
}
B47d165:L47d165:{c.instructions+=3;NFSU2_TR(0x47d165);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47d16b:{NFSU2_TR(0x47d16b);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w4(U+10,u32(u32(r4(R+4))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47d16d:{NFSU2_TR(0x47d16d);
if(r1(R+518)){{goto L47d1bc;}}
}
B47d16f:L47d16f:{c.instructions+=3;NFSU2_TR(0x47d16f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47d172:{NFSU2_TR(0x47d172);
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
B47d174:{NFSU2_TR(0x47d174);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47d184;}}
}
B47d176:L47d176:{c.instructions+=3;NFSU2_TR(0x47d176);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47d178:{NFSU2_TR(0x47d178);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d17a:{NFSU2_TR(0x47d17a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d17cull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B47d17c:L47d17c:{c.instructions+=2;NFSU2_TR(0x47d17c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d182:{NFSU2_TR(0x47d182);
{goto L47d1bc;}
}
B47d184:L47d184:{c.instructions+=4;NFSU2_TR(0x47d184);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47d186:{NFSU2_TR(0x47d186);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d188:{NFSU2_TR(0x47d188);
__builtin_memmove((R+4),(R+24),4);
}
B47d18a:{NFSU2_TR(0x47d18a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d18dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47d18d:L47d18d:{c.instructions+=6;NFSU2_TR(0x47d18d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47d18f:{NFSU2_TR(0x47d18f);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d191:{NFSU2_TR(0x47d191);
__builtin_memmove((R+4),(R+24),4);
}
B47d193:{NFSU2_TR(0x47d193);
__builtin_memmove((R+28),(R+0),4);
}
B47d195:{NFSU2_TR(0x47d195);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d199:{NFSU2_TR(0x47d199);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d19cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47d19c:L47d19c:{c.instructions+=8;NFSU2_TR(0x47d19c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47d1a2:{NFSU2_TR(0x47d1a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d1a6:{NFSU2_TR(0x47d1a6);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B47d1aa:{NFSU2_TR(0x47d1aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d1ab:{NFSU2_TR(0x47d1ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d1af:{NFSU2_TR(0x47d1af);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d1b3:{NFSU2_TR(0x47d1b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d1b7:{NFSU2_TR(0x47d1b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d1bcull));
TAIL_STATIC(0x47bb30u,47b);
}
B47d1bc:L47d1bc:{c.instructions+=8;NFSU2_TR(0x47d1bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47d1c2:{NFSU2_TR(0x47d1c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ecf4cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B47d1c9:{NFSU2_TR(0x47d1c9);
u8 U[40];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
w8(U+16,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+28,u32(r8(U+32)));
w8(U+8,u64(s64(s32(r4(R+28)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B47d1d0:{NFSU2_TR(0x47d1d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47d1d2:{NFSU2_TR(0x47d1d2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d1d3:{NFSU2_TR(0x47d1d3);
__builtin_memmove((R+4),(R+24),4);
}
B47d1d5:{NFSU2_TR(0x47d1d5);
u8 U[47];
w4(U+39,u32(u32(u32(0xfull))&u32(u32(0x1full))));
__builtin_memmove((U+43),(R+28),4);
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+39))));
w1(U+24,u8((r4(U+39))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+39))-u32(u32(0x1ull))));
w4(U+29,sar<u32>(r4(U+43),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+39))==(u32(0x1ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+39))!=(u32(0x0ull))));
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
B47d1d8:{NFSU2_TR(0x47d1d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d1dbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47d1db:L47d1db:{c.instructions+=7;NFSU2_TR(0x47d1db);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B47d1de:{NFSU2_TR(0x47d1de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47d1e4:{NFSU2_TR(0x47d1e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B47d1ea:{NFSU2_TR(0x47d1ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B47d1f0:{NFSU2_TR(0x47d1f0);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B47d1f3:{NFSU2_TR(0x47d1f3);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47d1f5:{NFSU2_TR(0x47d1f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47d1f9;}}
}
B47d1f7:L47d1f7:{c.instructions+=1;NFSU2_TR(0x47d1f7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47d1f9:L47d1f9:{c.instructions+=3;NFSU2_TR(0x47d1f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47d1ff:{NFSU2_TR(0x47d1ff);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47d201:{NFSU2_TR(0x47d201);
if(r1(R+518)){{goto L47d274;}}
}
B47d203:L47d203:{c.instructions+=2;NFSU2_TR(0x47d203);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B47d205:{NFSU2_TR(0x47d205);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L47d20b;}}
}
B47d207:L47d207:{c.instructions+=2;NFSU2_TR(0x47d207);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47d209:{NFSU2_TR(0x47d209);
{goto L47d217;}
}
B47d20b:L47d20b:{c.instructions+=2;NFSU2_TR(0x47d20b);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47d210:{NFSU2_TR(0x47d210);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47d217;}}
}
B47d212:L47d212:{c.instructions+=1;NFSU2_TR(0x47d212);
w4(R+0,u32(0x7fffull));
}
B47d217:L47d217:{c.instructions+=5;NFSU2_TR(0x47d217);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B47d219:{NFSU2_TR(0x47d219);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d21c:{NFSU2_TR(0x47d21c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47d222:{NFSU2_TR(0x47d222);
__builtin_memmove((R+0),(R+20),4);
}
B47d224:{NFSU2_TR(0x47d224);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L47d22a;}}
}
B47d226:L47d226:{c.instructions+=2;NFSU2_TR(0x47d226);
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
B47d228:{NFSU2_TR(0x47d228);
{goto L47d237;}
}
B47d22a:L47d22a:{c.instructions+=2;NFSU2_TR(0x47d22a);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(U+6))<(u32(0x1fffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1fffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1fffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47d230:{NFSU2_TR(0x47d230);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47d237;}}
}
B47d232:L47d232:{c.instructions+=1;NFSU2_TR(0x47d232);
w4(R+0,u32(0x1fffull));
}
B47d237:L47d237:{c.instructions+=5;NFSU2_TR(0x47d237);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d23a:{NFSU2_TR(0x47d23a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47d23c:{NFSU2_TR(0x47d23c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d23d:{NFSU2_TR(0x47d23d);
__builtin_memmove((R+4),(R+24),4);
}
B47d23f:{NFSU2_TR(0x47d23f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d242ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47d242:L47d242:{c.instructions+=3;NFSU2_TR(0x47d242);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B47d244:{NFSU2_TR(0x47d244);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47d24a:{NFSU2_TR(0x47d24a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L47d250;}}
}
B47d24c:L47d24c:{c.instructions+=2;NFSU2_TR(0x47d24c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47d24e:{NFSU2_TR(0x47d24e);
{goto L47d25c;}
}
B47d250:L47d250:{c.instructions+=2;NFSU2_TR(0x47d250);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47d255:{NFSU2_TR(0x47d255);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47d25c;}}
}
B47d257:L47d257:{c.instructions+=1;NFSU2_TR(0x47d257);
w4(R+0,u32(0xffffull));
}
B47d25c:L47d25c:{c.instructions+=5;NFSU2_TR(0x47d25c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d25f:{NFSU2_TR(0x47d25f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47d265:{NFSU2_TR(0x47d265);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B47d267:{NFSU2_TR(0x47d267);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47d269:{NFSU2_TR(0x47d269);
if(r1(R+518)){{goto L47d274;}}
}
B47d26b:L47d26b:{c.instructions+=3;NFSU2_TR(0x47d26b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47d26e:{NFSU2_TR(0x47d26e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d26f:{NFSU2_TR(0x47d26f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d274ull));
TAIL_STATIC(0x735580u,735);
}
B47d274:L47d274:{c.instructions+=2;NFSU2_TR(0x47d274);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B47d27a:{NFSU2_TR(0x47d27a);
if(r1(R+518)){{goto L47d317;}}
}
B47d280:L47d280:{c.instructions+=7;NFSU2_TR(0x47d280);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47d286:{NFSU2_TR(0x47d286);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(s64(s32(m4(0x7ecf5c)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+28)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B47d28d:{NFSU2_TR(0x47d28d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47d28f:{NFSU2_TR(0x47d28f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d291:{NFSU2_TR(0x47d291);
__builtin_memmove((R+4),(R+24),4);
}
B47d293:{NFSU2_TR(0x47d293);
u8 U[47];
w4(U+39,u32(u32(u32(0xfull))&u32(u32(0x1full))));
__builtin_memmove((U+43),(R+28),4);
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+39))));
w1(U+24,u8((r4(U+39))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+39))-u32(u32(0x1ull))));
w4(U+29,sar<u32>(r4(U+43),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+39))==(u32(0x1ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+39))!=(u32(0x0ull))));
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
B47d296:{NFSU2_TR(0x47d296);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d299ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47d299:L47d299:{c.instructions+=5;NFSU2_TR(0x47d299);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B47d29c:{NFSU2_TR(0x47d29c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47d2a2:{NFSU2_TR(0x47d2a2);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B47d2a5:{NFSU2_TR(0x47d2a5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B47d2a7:{NFSU2_TR(0x47d2a7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L47d2ad;}}
}
B47d2a9:L47d2a9:{c.instructions+=2;NFSU2_TR(0x47d2a9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47d2ab:{NFSU2_TR(0x47d2ab);
{goto L47d2b9;}
}
B47d2ad:L47d2ad:{c.instructions+=2;NFSU2_TR(0x47d2ad);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47d2b2:{NFSU2_TR(0x47d2b2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47d2b9;}}
}
B47d2b4:L47d2b4:{c.instructions+=1;NFSU2_TR(0x47d2b4);
w4(R+0,u32(0x7fffull));
}
B47d2b9:L47d2b9:{c.instructions+=5;NFSU2_TR(0x47d2b9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B47d2bb:{NFSU2_TR(0x47d2bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d2be:{NFSU2_TR(0x47d2be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47d2c4:{NFSU2_TR(0x47d2c4);
__builtin_memmove((R+0),(R+20),4);
}
B47d2c6:{NFSU2_TR(0x47d2c6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L47d2cc;}}
}
B47d2c8:L47d2c8:{c.instructions+=2;NFSU2_TR(0x47d2c8);
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
B47d2ca:{NFSU2_TR(0x47d2ca);
{goto L47d2d9;}
}
B47d2cc:L47d2cc:{c.instructions+=2;NFSU2_TR(0x47d2cc);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(U+6))<(u32(0x1fffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1fffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1fffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47d2d2:{NFSU2_TR(0x47d2d2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47d2d9;}}
}
B47d2d4:L47d2d4:{c.instructions+=1;NFSU2_TR(0x47d2d4);
w4(R+0,u32(0x1fffull));
}
B47d2d9:L47d2d9:{c.instructions+=5;NFSU2_TR(0x47d2d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d2dc:{NFSU2_TR(0x47d2dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47d2de:{NFSU2_TR(0x47d2de);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d2e0:{NFSU2_TR(0x47d2e0);
__builtin_memmove((R+4),(R+24),4);
}
B47d2e2:{NFSU2_TR(0x47d2e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d2e5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47d2e5:L47d2e5:{c.instructions+=3;NFSU2_TR(0x47d2e5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B47d2e7:{NFSU2_TR(0x47d2e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47d2ed:{NFSU2_TR(0x47d2ed);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L47d2f3;}}
}
B47d2ef:L47d2ef:{c.instructions+=2;NFSU2_TR(0x47d2ef);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47d2f1:{NFSU2_TR(0x47d2f1);
{goto L47d2ff;}
}
B47d2f3:L47d2f3:{c.instructions+=2;NFSU2_TR(0x47d2f3);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffffull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47d2f8:{NFSU2_TR(0x47d2f8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47d2ff;}}
}
B47d2fa:L47d2fa:{c.instructions+=1;NFSU2_TR(0x47d2fa);
w4(R+0,u32(0xffffull));
}
B47d2ff:L47d2ff:{c.instructions+=5;NFSU2_TR(0x47d2ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d302:{NFSU2_TR(0x47d302);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47d308:{NFSU2_TR(0x47d308);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B47d30a:{NFSU2_TR(0x47d30a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47d30c:{NFSU2_TR(0x47d30c);
if(r1(R+518)){{goto L47d317;}}
}
B47d30e:L47d30e:{c.instructions+=3;NFSU2_TR(0x47d30e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47d311:{NFSU2_TR(0x47d311);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d312:{NFSU2_TR(0x47d312);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d317ull));
TAIL_STATIC(0x735580u,735);
}
B47d317:L47d317:{c.instructions+=3;NFSU2_TR(0x47d317);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47d31d:{NFSU2_TR(0x47d31d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47d31f:{NFSU2_TR(0x47d31f);
if(r1(R+518)){{goto L47d38d;}}
}
B47d321:L47d321:{c.instructions+=4;NFSU2_TR(0x47d321);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47d323:{NFSU2_TR(0x47d323);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47d325:{NFSU2_TR(0x47d325);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d329:{NFSU2_TR(0x47d329);
if(r1(R+518)){{goto L47d38d;}}
}
B47d32b:L47d32b:{c.instructions+=4;NFSU2_TR(0x47d32b);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B47d32f:{NFSU2_TR(0x47d32f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d330:{NFSU2_TR(0x47d330);
__builtin_memmove((R+4),(R+0),4);
}
B47d332:{NFSU2_TR(0x47d332);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d337ull));
TAIL_STATIC(0x735070u,735);
}
B47d337:L47d337:{c.instructions+=2;NFSU2_TR(0x47d337);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B47d33c:{NFSU2_TR(0x47d33c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47d38d;}}
}
B47d33e:L47d33e:{c.instructions+=4;NFSU2_TR(0x47d33e);
__builtin_memmove((R+8),gp(0x82b884),4);
}
B47d344:{NFSU2_TR(0x47d344);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47d347:{NFSU2_TR(0x47d347);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47d349:{NFSU2_TR(0x47d349);
if(r1(R+518)){{goto L47d38d;}}
}
B47d34b:L47d34b:{c.instructions+=5;NFSU2_TR(0x47d34b);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B47d34f:{NFSU2_TR(0x47d34f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d350:{NFSU2_TR(0x47d350);
__builtin_memmove((R+4),(R+24),4);
}
B47d352:{NFSU2_TR(0x47d352);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47d35a:{NFSU2_TR(0x47d35a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d35full));
TAIL_STATIC(0x45e3d0u,45e);
}
B47d35f:L47d35f:{c.instructions+=6;NFSU2_TR(0x47d35f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47d365:{NFSU2_TR(0x47d365);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47d369:{NFSU2_TR(0x47d369);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d36c:{NFSU2_TR(0x47d36c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d36d:{NFSU2_TR(0x47d36d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47d373:{NFSU2_TR(0x47d373);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d378ull));
TAIL_STATIC(0x458230u,458);
}
B47d378:L47d378:{c.instructions+=4;NFSU2_TR(0x47d378);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47d37e:{NFSU2_TR(0x47d37e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B47d380:{NFSU2_TR(0x47d380);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47d382:{NFSU2_TR(0x47d382);
if(r1(R+518)){{goto L47d38d;}}
}
B47d384:L47d384:{c.instructions+=3;NFSU2_TR(0x47d384);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47d387:{NFSU2_TR(0x47d387);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d388:{NFSU2_TR(0x47d388);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d38dull));
TAIL_STATIC(0x735580u,735);
}
B47d38d:L47d38d:{c.instructions+=3;NFSU2_TR(0x47d38d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47d393:{NFSU2_TR(0x47d393);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47d395:{NFSU2_TR(0x47d395);
if(r1(R+518)){{goto L47d3e4;}}
}
B47d397:L47d397:{c.instructions+=3;NFSU2_TR(0x47d397);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47d39a:{NFSU2_TR(0x47d39a);
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
B47d39c:{NFSU2_TR(0x47d39c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47d3ac;}}
}
B47d39e:L47d39e:{c.instructions+=3;NFSU2_TR(0x47d39e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47d3a0:{NFSU2_TR(0x47d3a0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d3a2:{NFSU2_TR(0x47d3a2);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d3a4ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B47d3a4:L47d3a4:{c.instructions+=2;NFSU2_TR(0x47d3a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d3aa:{NFSU2_TR(0x47d3aa);
{goto L47d3e4;}
}
B47d3ac:L47d3ac:{c.instructions+=4;NFSU2_TR(0x47d3ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47d3ae:{NFSU2_TR(0x47d3ae);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d3b0:{NFSU2_TR(0x47d3b0);
__builtin_memmove((R+4),(R+24),4);
}
B47d3b2:{NFSU2_TR(0x47d3b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d3b5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47d3b5:L47d3b5:{c.instructions+=6;NFSU2_TR(0x47d3b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47d3b7:{NFSU2_TR(0x47d3b7);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d3b9:{NFSU2_TR(0x47d3b9);
__builtin_memmove((R+4),(R+24),4);
}
B47d3bb:{NFSU2_TR(0x47d3bb);
__builtin_memmove((R+28),(R+0),4);
}
B47d3bd:{NFSU2_TR(0x47d3bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d3c1:{NFSU2_TR(0x47d3c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d3c4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47d3c4:L47d3c4:{c.instructions+=8;NFSU2_TR(0x47d3c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47d3ca:{NFSU2_TR(0x47d3ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d3ce:{NFSU2_TR(0x47d3ce);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B47d3d2:{NFSU2_TR(0x47d3d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d3d3:{NFSU2_TR(0x47d3d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d3d7:{NFSU2_TR(0x47d3d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d3db:{NFSU2_TR(0x47d3db);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d3df:{NFSU2_TR(0x47d3df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d3e4ull));
TAIL_STATIC(0x47bb30u,47b);
}
B47d3e4:L47d3e4:{c.instructions+=5;NFSU2_TR(0x47d3e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47d3ea:{NFSU2_TR(0x47d3ea);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47d3ed:{NFSU2_TR(0x47d3ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47d3ee:{NFSU2_TR(0x47d3ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B47d3ef:{NFSU2_TR(0x47d3ef);
if(r1(R+518)){{goto L47d3f6;}}
}
B47d3f1:L47d3f1:{c.instructions+=2;NFSU2_TR(0x47d3f1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47d3f4:{NFSU2_TR(0x47d3f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47d407;}}
}
B47d3f6:L47d3f6:{c.instructions+=3;NFSU2_TR(0x47d3f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47d3fc:{NFSU2_TR(0x47d3fc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47d3fe:{NFSU2_TR(0x47d3fe);
if(r1(R+518)){{goto L47d407;}}
}
B47d400:L47d400:{c.instructions+=1;NFSU2_TR(0x47d400);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47d407:L47d407:{c.instructions+=3;NFSU2_TR(0x47d407);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47d40d:{NFSU2_TR(0x47d40d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47d410:{NFSU2_TR(0x47d410);
if(r1(R+518)){{goto L47d417;}}
}
B47d412:L47d412:{c.instructions+=2;NFSU2_TR(0x47d412);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47d415:{NFSU2_TR(0x47d415);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47d428;}}
}
B47d417:L47d417:{c.instructions+=3;NFSU2_TR(0x47d417);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B47d41d:{NFSU2_TR(0x47d41d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47d41f:{NFSU2_TR(0x47d41f);
if(r1(R+518)){{goto L47d428;}}
}
B47d421:L47d421:{c.instructions+=1;NFSU2_TR(0x47d421);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47d428:L47d428:{c.instructions+=4;NFSU2_TR(0x47d428);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47d429:{NFSU2_TR(0x47d429);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47d42a:{NFSU2_TR(0x47d42a);
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
B47d42d:{NFSU2_TR(0x47d42d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47d430:L47d430:{c.instructions+=3;NFSU2_TR(0x47d430);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47d435:{NFSU2_TR(0x47d435);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d436:{NFSU2_TR(0x47d436);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d43bull));
TAIL_STATIC(0x43e910u,43e);
}
B47d43b:L47d43b:{c.instructions+=3;NFSU2_TR(0x47d43b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47d43e:{NFSU2_TR(0x47d43e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x5b0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x5b0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47d443:{NFSU2_TR(0x47d443);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47d46d;}}
}
B47d445:L47d445:{c.instructions+=6;NFSU2_TR(0x47d445);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47d44b:{NFSU2_TR(0x47d44b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47d44e:{NFSU2_TR(0x47d44e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47d454:{NFSU2_TR(0x47d454);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d455:{NFSU2_TR(0x47d455);
u8 U[4];
w4(U+0,u32(0x1b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d45a:{NFSU2_TR(0x47d45a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d45full));
TAIL_STATIC(0x440820u,440);
}
B47d45f:L47d45f:{c.instructions+=3;NFSU2_TR(0x47d45f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47d462:{NFSU2_TR(0x47d462);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47d464:{NFSU2_TR(0x47d464);
if(r1(R+518)){{goto L47d46d;}}
}
B47d466:L47d466:{c.instructions+=2;NFSU2_TR(0x47d466);
__builtin_memmove((R+4),(R+0),4);
}
B47d468:{NFSU2_TR(0x47d468);
TAIL_STATIC(0x4738e0u,473);
}
B47d46d:L47d46d:{c.instructions+=2;NFSU2_TR(0x47d46d);
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
B47d46f:{NFSU2_TR(0x47d46f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47d470:L47d470:{c.instructions+=15;NFSU2_TR(0x47d470);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d472:{NFSU2_TR(0x47d472);
u8 U[4];
w4(U+0,u32(0x772268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d477:{NFSU2_TR(0x47d477);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47d47d:{NFSU2_TR(0x47d47d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d47e:{NFSU2_TR(0x47d47e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d485:{NFSU2_TR(0x47d485);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B47d488:{NFSU2_TR(0x47d488);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d489:{NFSU2_TR(0x47d489);
__builtin_memmove((R+24),(R+4),4);
}
B47d48b:{NFSU2_TR(0x47d48b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d48c:{NFSU2_TR(0x47d48c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d490:{NFSU2_TR(0x47d490);
u8 U[4];
w4(U+0,u32(0x78adb8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47d496:{NFSU2_TR(0x47d496);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x194ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47d49c:{NFSU2_TR(0x47d49c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47d49e:{NFSU2_TR(0x47d49e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47d4a6:{NFSU2_TR(0x47d4a6);
if(r1(R+518)){{goto L47d4e0;}}
}
B47d4a8:L47d4a8:{c.instructions+=3;NFSU2_TR(0x47d4a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B47d4aa:{NFSU2_TR(0x47d4aa);
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
B47d4ac:{NFSU2_TR(0x47d4ac);
if(r1(R+518)){{goto L47d4b3;}}
}
B47d4ae:L47d4ae:{c.instructions+=1;NFSU2_TR(0x47d4ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d4b3ull));
TAIL_STATIC(0x735550u,735);
}
B47d4b3:L47d4b3:{c.instructions+=3;NFSU2_TR(0x47d4b3);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B47d4b7:{NFSU2_TR(0x47d4b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d4b8:{NFSU2_TR(0x47d4b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d4bdull));
TAIL_STATIC(0x734df0u,734);
}
B47d4bd:L47d4bd:{c.instructions+=2;NFSU2_TR(0x47d4bd);
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
B47d4c0:{NFSU2_TR(0x47d4c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d4c5ull));
TAIL_STATIC(0x734e40u,734);
}
B47d4c5:L47d4c5:{c.instructions+=5;NFSU2_TR(0x47d4c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47d4c9:{NFSU2_TR(0x47d4c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47d4cb:{NFSU2_TR(0x47d4cb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d4cd:{NFSU2_TR(0x47d4cd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d4ce:{NFSU2_TR(0x47d4ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d4d1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47d4d1:L47d4d1:{c.instructions+=1;NFSU2_TR(0x47d4d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d4d6ull));
TAIL_STATIC(0x734e60u,734);
}
B47d4d6:L47d4d6:{c.instructions+=1;NFSU2_TR(0x47d4d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x194ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47d4e0:L47d4e0:{c.instructions+=7;NFSU2_TR(0x47d4e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47d4e4:{NFSU2_TR(0x47d4e4);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47d4ea:{NFSU2_TR(0x47d4ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47d4eb:{NFSU2_TR(0x47d4eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47d4ec:{NFSU2_TR(0x47d4ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d4f3:{NFSU2_TR(0x47d4f3);
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
B47d4f6:{NFSU2_TR(0x47d4f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47d500:L47d500:{c.instructions+=3;NFSU2_TR(0x47d500);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47d505:{NFSU2_TR(0x47d505);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d506:{NFSU2_TR(0x47d506);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d50bull));
TAIL_STATIC(0x43e910u,43e);
}
B47d50b:L47d50b:{c.instructions+=3;NFSU2_TR(0x47d50b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47d50e:{NFSU2_TR(0x47d50e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4c0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4c0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47d513:{NFSU2_TR(0x47d513);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47d53d;}}
}
B47d515:L47d515:{c.instructions+=6;NFSU2_TR(0x47d515);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47d51b:{NFSU2_TR(0x47d51b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47d51e:{NFSU2_TR(0x47d51e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47d524:{NFSU2_TR(0x47d524);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d525:{NFSU2_TR(0x47d525);
u8 U[4];
w4(U+0,u32(0xc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d52a:{NFSU2_TR(0x47d52a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d52full));
TAIL_STATIC(0x440820u,440);
}
B47d52f:L47d52f:{c.instructions+=3;NFSU2_TR(0x47d52f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47d532:{NFSU2_TR(0x47d532);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47d534:{NFSU2_TR(0x47d534);
if(r1(R+518)){{goto L47d53d;}}
}
B47d536:L47d536:{c.instructions+=2;NFSU2_TR(0x47d536);
__builtin_memmove((R+4),(R+0),4);
}
B47d538:{NFSU2_TR(0x47d538);
TAIL_STATIC(0x473980u,473);
}
B47d53d:L47d53d:{c.instructions+=2;NFSU2_TR(0x47d53d);
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
B47d53f:{NFSU2_TR(0x47d53f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47d540:L47d540:{c.instructions+=15;NFSU2_TR(0x47d540);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d542:{NFSU2_TR(0x47d542);
u8 U[4];
w4(U+0,u32(0x772268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d547:{NFSU2_TR(0x47d547);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47d54d:{NFSU2_TR(0x47d54d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d54e:{NFSU2_TR(0x47d54e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d555:{NFSU2_TR(0x47d555);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B47d558:{NFSU2_TR(0x47d558);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d559:{NFSU2_TR(0x47d559);
__builtin_memmove((R+24),(R+4),4);
}
B47d55b:{NFSU2_TR(0x47d55b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d55c:{NFSU2_TR(0x47d55c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d560:{NFSU2_TR(0x47d560);
u8 U[4];
w4(U+0,u32(0x78ae00ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47d566:{NFSU2_TR(0x47d566);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47d56c:{NFSU2_TR(0x47d56c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47d56e:{NFSU2_TR(0x47d56e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47d576:{NFSU2_TR(0x47d576);
if(r1(R+518)){{goto L47d5a6;}}
}
B47d578:L47d578:{c.instructions+=3;NFSU2_TR(0x47d578);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B47d57a:{NFSU2_TR(0x47d57a);
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
B47d57c:{NFSU2_TR(0x47d57c);
if(r1(R+518)){{goto L47d583;}}
}
B47d57e:L47d57e:{c.instructions+=1;NFSU2_TR(0x47d57e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d583ull));
TAIL_STATIC(0x735550u,735);
}
B47d583:L47d583:{c.instructions+=3;NFSU2_TR(0x47d583);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B47d587:{NFSU2_TR(0x47d587);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d588:{NFSU2_TR(0x47d588);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d58dull));
TAIL_STATIC(0x734df0u,734);
}
B47d58d:L47d58d:{c.instructions+=2;NFSU2_TR(0x47d58d);
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
B47d590:{NFSU2_TR(0x47d590);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d595ull));
TAIL_STATIC(0x734e40u,734);
}
B47d595:L47d595:{c.instructions+=5;NFSU2_TR(0x47d595);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47d599:{NFSU2_TR(0x47d599);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47d59b:{NFSU2_TR(0x47d59b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d59d:{NFSU2_TR(0x47d59d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d59e:{NFSU2_TR(0x47d59e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d5a1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47d5a1:L47d5a1:{c.instructions+=1;NFSU2_TR(0x47d5a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d5a6ull));
TAIL_STATIC(0x734e60u,734);
}
B47d5a6:L47d5a6:{c.instructions+=8;NFSU2_TR(0x47d5a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47d5aa:{NFSU2_TR(0x47d5aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47d5b4:{NFSU2_TR(0x47d5b4);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47d5ba:{NFSU2_TR(0x47d5ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47d5bb:{NFSU2_TR(0x47d5bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47d5bc:{NFSU2_TR(0x47d5bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d5c3:{NFSU2_TR(0x47d5c3);
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
B47d5c6:{NFSU2_TR(0x47d5c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47d5d0:L47d5d0:{c.instructions+=3;NFSU2_TR(0x47d5d0);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47d5d5:{NFSU2_TR(0x47d5d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d5d6:{NFSU2_TR(0x47d5d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d5dbull));
TAIL_STATIC(0x43e910u,43e);
}
B47d5db:L47d5db:{c.instructions+=3;NFSU2_TR(0x47d5db);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47d5de:{NFSU2_TR(0x47d5de);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x544ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x544ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47d5e3:{NFSU2_TR(0x47d5e3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47d60d;}}
}
B47d5e5:L47d5e5:{c.instructions+=6;NFSU2_TR(0x47d5e5);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47d5eb:{NFSU2_TR(0x47d5eb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47d5ee:{NFSU2_TR(0x47d5ee);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47d5f4:{NFSU2_TR(0x47d5f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d5f5:{NFSU2_TR(0x47d5f5);
u8 U[4];
w4(U+0,u32(0x144ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d5fa:{NFSU2_TR(0x47d5fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d5ffull));
TAIL_STATIC(0x440820u,440);
}
B47d5ff:L47d5ff:{c.instructions+=3;NFSU2_TR(0x47d5ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47d602:{NFSU2_TR(0x47d602);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47d604:{NFSU2_TR(0x47d604);
if(r1(R+518)){{goto L47d60d;}}
}
B47d606:L47d606:{c.instructions+=2;NFSU2_TR(0x47d606);
__builtin_memmove((R+4),(R+0),4);
}
B47d608:{NFSU2_TR(0x47d608);
TAIL_STATIC(0x473a70u,473);
}
B47d60d:L47d60d:{c.instructions+=2;NFSU2_TR(0x47d60d);
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
B47d60f:{NFSU2_TR(0x47d60f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47d610:L47d610:{c.instructions+=12;NFSU2_TR(0x47d610);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d612:{NFSU2_TR(0x47d612);
u8 U[4];
w4(U+0,u32(0x772268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d617:{NFSU2_TR(0x47d617);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47d61d:{NFSU2_TR(0x47d61d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d61e:{NFSU2_TR(0x47d61e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d625:{NFSU2_TR(0x47d625);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d626:{NFSU2_TR(0x47d626);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d627:{NFSU2_TR(0x47d627);
__builtin_memmove((R+24),(R+4),4);
}
B47d629:{NFSU2_TR(0x47d629);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d62d:{NFSU2_TR(0x47d62d);
u8 U[4];
w4(U+0,u32(0x78ae48ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47d633:{NFSU2_TR(0x47d633);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47d63b:{NFSU2_TR(0x47d63b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d640ull));
TAIL_STATIC(0x473ae0u,473);
}
B47d640:L47d640:{c.instructions+=6;NFSU2_TR(0x47d640);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47d644:{NFSU2_TR(0x47d644);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47d64a:{NFSU2_TR(0x47d64a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47d64b:{NFSU2_TR(0x47d64b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d652:{NFSU2_TR(0x47d652);
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
B47d655:{NFSU2_TR(0x47d655);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47d660:L47d660:{c.instructions+=3;NFSU2_TR(0x47d660);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d661:{NFSU2_TR(0x47d661);
__builtin_memmove((R+24),(R+4),4);
}
B47d663:{NFSU2_TR(0x47d663);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d668ull));
TAIL_STATIC(0x473c60u,473);
}
B47d668:L47d668:{c.instructions+=2;NFSU2_TR(0x47d668);
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
B47d66d:{NFSU2_TR(0x47d66d);
if(r1(R+518)){{goto L47d678;}}
}
B47d66f:L47d66f:{c.instructions+=2;NFSU2_TR(0x47d66f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d670:{NFSU2_TR(0x47d670);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d675ull));
TAIL_STATIC(0x440540u,440);
}
B47d675:L47d675:{c.instructions+=1;NFSU2_TR(0x47d675);
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
B47d678:L47d678:{c.instructions+=3;NFSU2_TR(0x47d678);
__builtin_memmove((R+0),(R+24),4);
}
B47d67a:{NFSU2_TR(0x47d67a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47d67b:{NFSU2_TR(0x47d67b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47d680:L47d680:{c.instructions+=3;NFSU2_TR(0x47d680);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47d685:{NFSU2_TR(0x47d685);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d686:{NFSU2_TR(0x47d686);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d68bull));
TAIL_STATIC(0x43e910u,43e);
}
B47d68b:L47d68b:{c.instructions+=3;NFSU2_TR(0x47d68b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47d68e:{NFSU2_TR(0x47d68e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4c4ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4c4ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47d693:{NFSU2_TR(0x47d693);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47d6bd;}}
}
B47d695:L47d695:{c.instructions+=6;NFSU2_TR(0x47d695);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47d69b:{NFSU2_TR(0x47d69b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47d69e:{NFSU2_TR(0x47d69e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47d6a4:{NFSU2_TR(0x47d6a4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d6a5:{NFSU2_TR(0x47d6a5);
u8 U[4];
w4(U+0,u32(0xc4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d6aa:{NFSU2_TR(0x47d6aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d6afull));
TAIL_STATIC(0x440820u,440);
}
B47d6af:L47d6af:{c.instructions+=3;NFSU2_TR(0x47d6af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47d6b2:{NFSU2_TR(0x47d6b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47d6b4:{NFSU2_TR(0x47d6b4);
if(r1(R+518)){{goto L47d6bd;}}
}
B47d6b6:L47d6b6:{c.instructions+=2;NFSU2_TR(0x47d6b6);
__builtin_memmove((R+4),(R+0),4);
}
B47d6b8:{NFSU2_TR(0x47d6b8);
TAIL_STATIC(0x473ce0u,473);
}
B47d6bd:L47d6bd:{c.instructions+=2;NFSU2_TR(0x47d6bd);
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
B47d6bf:{NFSU2_TR(0x47d6bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47d6c0:L47d6c0:{c.instructions+=3;NFSU2_TR(0x47d6c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d6c1:{NFSU2_TR(0x47d6c1);
__builtin_memmove((R+24),(R+4),4);
}
B47d6c3:{NFSU2_TR(0x47d6c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d6c8ull));
TAIL_STATIC(0x473d20u,473);
}
B47d6c8:L47d6c8:{c.instructions+=2;NFSU2_TR(0x47d6c8);
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
B47d6cd:{NFSU2_TR(0x47d6cd);
if(r1(R+518)){{goto L47d6d8;}}
}
B47d6cf:L47d6cf:{c.instructions+=2;NFSU2_TR(0x47d6cf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d6d0:{NFSU2_TR(0x47d6d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d6d5ull));
TAIL_STATIC(0x440540u,440);
}
B47d6d5:L47d6d5:{c.instructions+=1;NFSU2_TR(0x47d6d5);
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
B47d6d8:L47d6d8:{c.instructions+=3;NFSU2_TR(0x47d6d8);
__builtin_memmove((R+0),(R+24),4);
}
B47d6da:{NFSU2_TR(0x47d6da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47d6db:{NFSU2_TR(0x47d6db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47d6e0:L47d6e0:{c.instructions+=3;NFSU2_TR(0x47d6e0);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47d6e5:{NFSU2_TR(0x47d6e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d6e6:{NFSU2_TR(0x47d6e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d6ebull));
TAIL_STATIC(0x43e910u,43e);
}
B47d6eb:L47d6eb:{c.instructions+=3;NFSU2_TR(0x47d6eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47d6ee:{NFSU2_TR(0x47d6ee);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x510ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x510ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47d6f3:{NFSU2_TR(0x47d6f3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47d71d;}}
}
B47d6f5:L47d6f5:{c.instructions+=6;NFSU2_TR(0x47d6f5);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47d6fb:{NFSU2_TR(0x47d6fb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47d6fe:{NFSU2_TR(0x47d6fe);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47d704:{NFSU2_TR(0x47d704);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d705:{NFSU2_TR(0x47d705);
u8 U[4];
w4(U+0,u32(0x110ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d70a:{NFSU2_TR(0x47d70a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d70full));
TAIL_STATIC(0x440820u,440);
}
B47d70f:L47d70f:{c.instructions+=3;NFSU2_TR(0x47d70f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47d712:{NFSU2_TR(0x47d712);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47d714:{NFSU2_TR(0x47d714);
if(r1(R+518)){{goto L47d71d;}}
}
B47d716:L47d716:{c.instructions+=2;NFSU2_TR(0x47d716);
__builtin_memmove((R+4),(R+0),4);
}
B47d718:{NFSU2_TR(0x47d718);
TAIL_STATIC(0x473d30u,473);
}
B47d71d:L47d71d:{c.instructions+=2;NFSU2_TR(0x47d71d);
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
B47d71f:{NFSU2_TR(0x47d71f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47d720:L47d720:{c.instructions+=3;NFSU2_TR(0x47d720);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d721:{NFSU2_TR(0x47d721);
__builtin_memmove((R+24),(R+4),4);
}
B47d723:{NFSU2_TR(0x47d723);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d728ull));
TAIL_STATIC(0x473d90u,473);
}
B47d728:L47d728:{c.instructions+=2;NFSU2_TR(0x47d728);
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
B47d72d:{NFSU2_TR(0x47d72d);
if(r1(R+518)){{goto L47d738;}}
}
B47d72f:L47d72f:{c.instructions+=2;NFSU2_TR(0x47d72f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d730:{NFSU2_TR(0x47d730);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d735ull));
TAIL_STATIC(0x440540u,440);
}
B47d735:L47d735:{c.instructions+=1;NFSU2_TR(0x47d735);
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
B47d738:L47d738:{c.instructions+=3;NFSU2_TR(0x47d738);
__builtin_memmove((R+0),(R+24),4);
}
B47d73a:{NFSU2_TR(0x47d73a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47d73b:{NFSU2_TR(0x47d73b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47d740:L47d740:{c.instructions+=8;NFSU2_TR(0x47d740);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B47d743:{NFSU2_TR(0x47d743);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d744:{NFSU2_TR(0x47d744);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d745:{NFSU2_TR(0x47d745);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d746:{NFSU2_TR(0x47d746);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d747:{NFSU2_TR(0x47d747);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d74b:{NFSU2_TR(0x47d74b);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B47d74d:{NFSU2_TR(0x47d74d);
__builtin_memmove((R+4),(R+4),4);
}
B47d750:L47d750:{c.instructions+=4;NFSU2_TR(0x47d750);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47d756:{NFSU2_TR(0x47d756);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47d759:{NFSU2_TR(0x47d759);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47d75b:{NFSU2_TR(0x47d75b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47d762;}}
}
B47d75d:L47d75d:{c.instructions+=2;NFSU2_TR(0x47d75d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B47d760:{NFSU2_TR(0x47d760);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47d774;}}
}
B47d762:L47d762:{c.instructions+=2;NFSU2_TR(0x47d762);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47d765:{NFSU2_TR(0x47d765);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47d913;}}
}
B47d76b:L47d76b:{c.instructions+=2;NFSU2_TR(0x47d76b);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B47d76e:{NFSU2_TR(0x47d76e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L47d913;}}
}
B47d774:L47d774:{c.instructions+=6;NFSU2_TR(0x47d774);
__builtin_memmove((R+8),(R+20),4);
}
B47d776:{NFSU2_TR(0x47d776);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B47d779:{NFSU2_TR(0x47d779);
u8 U[16];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B47d780:{NFSU2_TR(0x47d780);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47d782:{NFSU2_TR(0x47d782);
u8 U[12];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B47d789:{NFSU2_TR(0x47d789);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47d7ce;}}
}
B47d78b:L47d78b:{c.instructions+=3;NFSU2_TR(0x47d78b);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47d790:{NFSU2_TR(0x47d790);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d791:{NFSU2_TR(0x47d791);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d796ull));
TAIL_STATIC(0x43e910u,43e);
}
B47d796:L47d796:{c.instructions+=3;NFSU2_TR(0x47d796);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47d799:{NFSU2_TR(0x47d799);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4b0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4b0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47d79e:{NFSU2_TR(0x47d79e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47d7ca;}}
}
B47d7a0:L47d7a0:{c.instructions+=6;NFSU2_TR(0x47d7a0);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47d7a6:{NFSU2_TR(0x47d7a6);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47d7a9:{NFSU2_TR(0x47d7a9);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47d7af:{NFSU2_TR(0x47d7af);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d7b0:{NFSU2_TR(0x47d7b0);
u8 U[4];
w4(U+0,u32(0xb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d7b5:{NFSU2_TR(0x47d7b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d7baull));
TAIL_STATIC(0x440820u,440);
}
B47d7ba:L47d7ba:{c.instructions+=3;NFSU2_TR(0x47d7ba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47d7bd:{NFSU2_TR(0x47d7bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47d7bf:{NFSU2_TR(0x47d7bf);
if(r1(R+518)){{goto L47d7ca;}}
}
B47d7c1:L47d7c1:{c.instructions+=2;NFSU2_TR(0x47d7c1);
__builtin_memmove((R+4),(R+0),4);
}
B47d7c3:{NFSU2_TR(0x47d7c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d7c8ull));
TAIL_STATIC(0x466750u,466);
}
B47d7c8:L47d7c8:{c.instructions+=1;NFSU2_TR(0x47d7c8);
{goto L47d7cc;}
}
B47d7ca:L47d7ca:{c.instructions+=1;NFSU2_TR(0x47d7ca);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47d7cc:L47d7cc:{c.instructions+=1;NFSU2_TR(0x47d7cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B47d7ce:L47d7ce:{c.instructions+=2;NFSU2_TR(0x47d7ce);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d7d0:{NFSU2_TR(0x47d7d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d7d5ull));
TAIL_STATIC(0x723124u,723);
}
B47d7d5:L47d7d5:{c.instructions+=17;NFSU2_TR(0x47d7d5);
{u32 ea_=u32(u32(7899288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47d7db:{NFSU2_TR(0x47d7db);
{u32 ea_=u32(u32(7899284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47d7e1:{NFSU2_TR(0x47d7e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47d7e4:{NFSU2_TR(0x47d7e4);
{u32 ea_=u32(u32(7906736u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47d7ea:{NFSU2_TR(0x47d7ea);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47d7ee:{NFSU2_TR(0x47d7ee);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47d7f2:{NFSU2_TR(0x47d7f2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x10"::"a"(ea_):"memory");}
}
B47d7f6:{NFSU2_TR(0x47d7f6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xda,0x28"::"a"(ea_):"memory");}
}
B47d7fa:{NFSU2_TR(0x47d7fa);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47d7fe:{NFSU2_TR(0x47d7fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47d802:{NFSU2_TR(0x47d802);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47d806:{NFSU2_TR(0x47d806);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B47d809:{NFSU2_TR(0x47d809);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B47d80b:{NFSU2_TR(0x47d80b);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B47d80f:{NFSU2_TR(0x47d80f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47d812:{NFSU2_TR(0x47d812);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47d814:{NFSU2_TR(0x47d814);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47d84f;}}
}
B47d816:L47d816:{c.instructions+=4;NFSU2_TR(0x47d816);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B47d81c:{NFSU2_TR(0x47d81c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d81d:{NFSU2_TR(0x47d81d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B47d81f:{NFSU2_TR(0x47d81f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d824ull));
TAIL_STATIC(0x43e910u,43e);
}
B47d824:L47d824:{c.instructions+=4;NFSU2_TR(0x47d824);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x400ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47d82a:{NFSU2_TR(0x47d82a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47d82d:{NFSU2_TR(0x47d82d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47d82f:{NFSU2_TR(0x47d82f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L47d84c;}}
}
B47d831:L47d831:{c.instructions+=6;NFSU2_TR(0x47d831);
__builtin_memmove((R+8),gp(0x7ec840),4);
}
B47d837:{NFSU2_TR(0x47d837);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x7ull))));
}
B47d83a:{NFSU2_TR(0x47d83a);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x1000ull))));
}
B47d840:{NFSU2_TR(0x47d840);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d841:{NFSU2_TR(0x47d841);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d842:{NFSU2_TR(0x47d842);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d847ull));
TAIL_STATIC(0x440820u,440);
}
B47d847:L47d847:{c.instructions+=2;NFSU2_TR(0x47d847);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47d84a:{NFSU2_TR(0x47d84a);
__builtin_memmove((R+12),(R+0),4);
}
B47d84c:L47d84c:{c.instructions+=1;NFSU2_TR(0x47d84c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d84f:L47d84f:{c.instructions+=3;NFSU2_TR(0x47d84f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47d852:{NFSU2_TR(0x47d852);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47d854:{NFSU2_TR(0x47d854);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47d89c;}}
}
B47d856:L47d856:{c.instructions+=3;NFSU2_TR(0x47d856);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47d85b:{NFSU2_TR(0x47d85b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d85c:{NFSU2_TR(0x47d85c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d861ull));
TAIL_STATIC(0x43e910u,43e);
}
B47d861:L47d861:{c.instructions+=3;NFSU2_TR(0x47d861);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47d864:{NFSU2_TR(0x47d864);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x444ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x444ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47d869:{NFSU2_TR(0x47d869);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47d897;}}
}
B47d86b:L47d86b:{c.instructions+=6;NFSU2_TR(0x47d86b);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47d871:{NFSU2_TR(0x47d871);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47d874:{NFSU2_TR(0x47d874);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47d87a:{NFSU2_TR(0x47d87a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d87b:{NFSU2_TR(0x47d87b);
u8 U[4];
w4(U+0,u32(0x44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d87d:{NFSU2_TR(0x47d87d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d882ull));
TAIL_STATIC(0x440820u,440);
}
B47d882:L47d882:{c.instructions+=3;NFSU2_TR(0x47d882);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47d885:{NFSU2_TR(0x47d885);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47d887:{NFSU2_TR(0x47d887);
if(r1(R+518)){{goto L47d897;}}
}
B47d889:L47d889:{c.instructions+=5;NFSU2_TR(0x47d889);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47d88c:{NFSU2_TR(0x47d88c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d88d:{NFSU2_TR(0x47d88d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d88e:{NFSU2_TR(0x47d88e);
__builtin_memmove((R+4),(R+0),4);
}
B47d890:{NFSU2_TR(0x47d890);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d895ull));
TAIL_STATIC(0x477800u,477);
}
B47d895:L47d895:{c.instructions+=1;NFSU2_TR(0x47d895);
{goto L47d899;}
}
B47d897:L47d897:{c.instructions+=1;NFSU2_TR(0x47d897);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47d899:L47d899:{c.instructions+=1;NFSU2_TR(0x47d899);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d89c:L47d89c:{c.instructions+=5;NFSU2_TR(0x47d89c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47d89e:{NFSU2_TR(0x47d89e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47d8a2:{NFSU2_TR(0x47d8a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47d8a8:{NFSU2_TR(0x47d8a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47d8ab:{NFSU2_TR(0x47d8ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47d8bc;}}
}
B47d8ad:L47d8ad:{c.instructions+=3;NFSU2_TR(0x47d8ad);
__builtin_memmove((R+8),gp(0x82b884),4);
}
B47d8b3:{NFSU2_TR(0x47d8b3);
u8 U[16];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B47d8ba:{NFSU2_TR(0x47d8ba);
{goto L47d8c9;}
}
B47d8bc:L47d8bc:{c.instructions+=2;NFSU2_TR(0x47d8bc);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B47d8c2:{NFSU2_TR(0x47d8c2);
u8 U[16];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B47d8c9:L47d8c9:{c.instructions+=3;NFSU2_TR(0x47d8c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B47d8cb:{NFSU2_TR(0x47d8cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d8cc:{NFSU2_TR(0x47d8cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d8d1ull));
TAIL_STATIC(0x466770u,466);
}
B47d8d1:L47d8d1:{c.instructions+=2;NFSU2_TR(0x47d8d1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47d8d3:{NFSU2_TR(0x47d8d3);
if(r1(R+518)){{goto L47d909;}}
}
B47d8d5:L47d8d5:{c.instructions+=4;NFSU2_TR(0x47d8d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47d8d7:{NFSU2_TR(0x47d8d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47d8da:{NFSU2_TR(0x47d8da);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d8db:{NFSU2_TR(0x47d8db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d8e0ull));
TAIL_STATIC(0x467160u,467);
}
B47d8e0:L47d8e0:{c.instructions+=9;NFSU2_TR(0x47d8e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47d8e2:{NFSU2_TR(0x47d8e2);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47d8e5:{NFSU2_TR(0x47d8e5);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47d8e8:{NFSU2_TR(0x47d8e8);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47d8eb:{NFSU2_TR(0x47d8eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47d8ee:{NFSU2_TR(0x47d8ee);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47d8f0:{NFSU2_TR(0x47d8f0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B47d8f4:{NFSU2_TR(0x47d8f4);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47d8f7:{NFSU2_TR(0x47d8f7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L47d909;}}
}
B47d8f9:L47d8f9:{c.instructions+=4;NFSU2_TR(0x47d8f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47d8fd:{NFSU2_TR(0x47d8fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47d900:{NFSU2_TR(0x47d900);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d901:{NFSU2_TR(0x47d901);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d906ull));
TAIL_STATIC(0x4778c0u,477);
}
B47d906:L47d906:{c.instructions+=1;NFSU2_TR(0x47d906);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d909:L47d909:{c.instructions+=3;NFSU2_TR(0x47d909);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47d90d:{NFSU2_TR(0x47d90d);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B47d90e:{NFSU2_TR(0x47d90e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47d750u);}goto L47d750;}
}
B47d913:L47d913:{c.instructions+=6;NFSU2_TR(0x47d913);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47d914:{NFSU2_TR(0x47d914);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47d915:{NFSU2_TR(0x47d915);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B47d916:{NFSU2_TR(0x47d916);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47d917:{NFSU2_TR(0x47d917);
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
B47d91a:{NFSU2_TR(0x47d91a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47d920:L47d920:{c.instructions+=10;NFSU2_TR(0x47d920);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47d926:{NFSU2_TR(0x47d926);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d928:{NFSU2_TR(0x47d928);
u8 U[4];
w4(U+0,u32(0x77261bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d92d:{NFSU2_TR(0x47d92d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d92e:{NFSU2_TR(0x47d92e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d935:{NFSU2_TR(0x47d935);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B47d938:{NFSU2_TR(0x47d938);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d939:{NFSU2_TR(0x47d939);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d93a:{NFSU2_TR(0x47d93a);
__builtin_memmove((R+20),(R+4),4);
}
B47d93c:{NFSU2_TR(0x47d93c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d941ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47d740u);}goto L47d740;}
}
B47d941:L47d941:{c.instructions+=5;NFSU2_TR(0x47d941);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47d947:{NFSU2_TR(0x47d947);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47d94a:{NFSU2_TR(0x47d94a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B47d94c:{NFSU2_TR(0x47d94c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47d94e:{NFSU2_TR(0x47d94e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47d958;}}
}
B47d950:L47d950:{c.instructions+=2;NFSU2_TR(0x47d950);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47d956:{NFSU2_TR(0x47d956);
{goto L47d96c;}
}
B47d958:L47d958:{c.instructions+=2;NFSU2_TR(0x47d958);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47d95b:{NFSU2_TR(0x47d95b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47d978;}}
}
B47d95d:L47d95d:{c.instructions+=2;NFSU2_TR(0x47d95d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0xffffffffull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B47d964:{NFSU2_TR(0x47d964);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47d978;}}
}
B47d966:L47d966:{c.instructions+=1;NFSU2_TR(0x47d966);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47d96c:L47d96c:{c.instructions+=2;NFSU2_TR(0x47d96c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffffffffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47d96f:{NFSU2_TR(0x47d96f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47d978;}}
}
B47d971:L47d971:{c.instructions+=1;NFSU2_TR(0x47d971);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47d978:L47d978:{c.instructions+=9;NFSU2_TR(0x47d978);
__builtin_memmove((R+8),gp(0x850078),4);
}
B47d97e:{NFSU2_TR(0x47d97e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B47d980:{NFSU2_TR(0x47d980);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47d983:{NFSU2_TR(0x47d983);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B47d986:{NFSU2_TR(0x47d986);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B47d98a:{NFSU2_TR(0x47d98a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d98b:{NFSU2_TR(0x47d98b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d98c:{NFSU2_TR(0x47d98c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d990:{NFSU2_TR(0x47d990);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d995ull));
TAIL_STATIC(0x734df0u,734);
}
B47d995:L47d995:{c.instructions+=2;NFSU2_TR(0x47d995);
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
B47d998:{NFSU2_TR(0x47d998);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d99dull));
TAIL_STATIC(0x734e40u,734);
}
B47d99d:L47d99d:{c.instructions+=9;NFSU2_TR(0x47d99d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47d9a1:{NFSU2_TR(0x47d9a1);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B47d9a5:{NFSU2_TR(0x47d9a5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d9a6:{NFSU2_TR(0x47d9a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d9aa:{NFSU2_TR(0x47d9aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d9ae:{NFSU2_TR(0x47d9ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d9b2:{NFSU2_TR(0x47d9b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47d9b4:{NFSU2_TR(0x47d9b4);
u8 U[4];
w4(U+0,u32(0x6cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d9b6:{NFSU2_TR(0x47d9b6);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d9b8ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B47d9b8:L47d9b8:{c.instructions+=2;NFSU2_TR(0x47d9b8);
__builtin_memmove((R+24),(R+0),4);
}
B47d9ba:{NFSU2_TR(0x47d9ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47d9bfull));
TAIL_STATIC(0x734e60u,734);
}
B47d9bf:L47d9bf:{c.instructions+=4;NFSU2_TR(0x47d9bf);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d9c3:{NFSU2_TR(0x47d9c3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47d9c5:{NFSU2_TR(0x47d9c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d9c9:{NFSU2_TR(0x47d9c9);
if(r1(R+518)){{goto L47da8b;}}
}
B47d9cf:L47d9cf:{c.instructions+=5;NFSU2_TR(0x47d9cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47d9d5:{NFSU2_TR(0x47d9d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47d9db:{NFSU2_TR(0x47d9db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47d9de:{NFSU2_TR(0x47d9de);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B47d9e0:{NFSU2_TR(0x47d9e0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L47d9e6;}}
}
B47d9e2:L47d9e2:{c.instructions+=2;NFSU2_TR(0x47d9e2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47d9e4:{NFSU2_TR(0x47d9e4);
{goto L47d9f0;}
}
B47d9e6:L47d9e6:{c.instructions+=2;NFSU2_TR(0x47d9e6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3cull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3cull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47d9e9:{NFSU2_TR(0x47d9e9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47d9f0;}}
}
B47d9eb:L47d9eb:{c.instructions+=1;NFSU2_TR(0x47d9eb);
w4(R+0,u32(0x3cull));
}
B47d9f0:L47d9f0:{c.instructions+=17;NFSU2_TR(0x47d9f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47d9f1:{NFSU2_TR(0x47d9f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47d9f4:{NFSU2_TR(0x47d9f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B47d9f6:{NFSU2_TR(0x47d9f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47d9fa:{NFSU2_TR(0x47d9fa);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B47d9fc:{NFSU2_TR(0x47d9fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47d9ff:{NFSU2_TR(0x47d9ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47da02:{NFSU2_TR(0x47da02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47da05:{NFSU2_TR(0x47da05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47da08:{NFSU2_TR(0x47da08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47da0b:{NFSU2_TR(0x47da0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47da0e:{NFSU2_TR(0x47da0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47da11:{NFSU2_TR(0x47da11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47da14:{NFSU2_TR(0x47da14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47da17:{NFSU2_TR(0x47da17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47da1a:{NFSU2_TR(0x47da1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47da1d:{NFSU2_TR(0x47da1d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L47da23;}}
}
B47da1f:L47da1f:{c.instructions+=2;NFSU2_TR(0x47da1f);
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
B47da21:{NFSU2_TR(0x47da21);
{goto L47da2d;}
}
B47da23:L47da23:{c.instructions+=2;NFSU2_TR(0x47da23);
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
B47da26:{NFSU2_TR(0x47da26);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47da2d;}}
}
B47da28:L47da28:{c.instructions+=1;NFSU2_TR(0x47da28);
w4(R+0,u32(0x2ull));
}
B47da2d:L47da2d:{c.instructions+=18;NFSU2_TR(0x47da2d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47da2e:{NFSU2_TR(0x47da2e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47da2f:{NFSU2_TR(0x47da2f);
u8 U[4];
w4(U+0,u32(0x82c538ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47da34:{NFSU2_TR(0x47da34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47da37:{NFSU2_TR(0x47da37);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47da3a:{NFSU2_TR(0x47da3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47da3d:{NFSU2_TR(0x47da3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47da40:{NFSU2_TR(0x47da40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47da43:{NFSU2_TR(0x47da43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47da46:{NFSU2_TR(0x47da46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47da49:{NFSU2_TR(0x47da49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47da4c:{NFSU2_TR(0x47da4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47da4f:{NFSU2_TR(0x47da4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47da52:{NFSU2_TR(0x47da52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47da55:{NFSU2_TR(0x47da55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47da58:{NFSU2_TR(0x47da58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47da5b:{NFSU2_TR(0x47da5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47da5e:{NFSU2_TR(0x47da5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47da63ull));
TAIL_STATIC(0x7358c0u,735);
}
B47da63:L47da63:{c.instructions+=3;NFSU2_TR(0x47da63);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B47da66:{NFSU2_TR(0x47da66);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B47da68:{NFSU2_TR(0x47da68);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L47da88;}}
}
B47da6a:L47da6a:{c.instructions+=3;NFSU2_TR(0x47da6a);
u8 U[4];
w4(U+0,u32(0x7ede18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47da6f:{NFSU2_TR(0x47da6f);
w4(R+4,u32(0x82c538ull));
}
B47da74:{NFSU2_TR(0x47da74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47da79ull));
TAIL_STATIC(0x735840u,735);
}
B47da79:L47da79:{c.instructions+=4;NFSU2_TR(0x47da79);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47da7a:{NFSU2_TR(0x47da7a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47da7b:{NFSU2_TR(0x47da7b);
u8 U[4];
w4(U+0,u32(0x82c538ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47da80:{NFSU2_TR(0x47da80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47da85ull));
TAIL_STATIC(0x7358c0u,735);
}
B47da85:L47da85:{c.instructions+=1;NFSU2_TR(0x47da85);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B47da88:L47da88:{c.instructions+=2;NFSU2_TR(0x47da88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47da89:{NFSU2_TR(0x47da89);
{goto L47da8d;}
}
B47da8b:L47da8b:{c.instructions+=1;NFSU2_TR(0x47da8b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B47da8d:L47da8d:{c.instructions+=7;NFSU2_TR(0x47da8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47da93:{NFSU2_TR(0x47da93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B47da95:{NFSU2_TR(0x47da95);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47da97:{NFSU2_TR(0x47da97);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B47da9f:{NFSU2_TR(0x47da9f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47daa3:{NFSU2_TR(0x47daa3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47daa4:{NFSU2_TR(0x47daa4);
if(r1(R+518)){{goto L47daca;}}
}
B47daa6:L47daa6:{c.instructions+=3;NFSU2_TR(0x47daa6);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B47daaa:{NFSU2_TR(0x47daaa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47daab:{NFSU2_TR(0x47daab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47dab0ull));
TAIL_STATIC(0x735070u,735);
}
B47dab0:L47dab0:{c.instructions+=8;NFSU2_TR(0x47dab0);
u8 U[6];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B47dab5:{NFSU2_TR(0x47dab5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47dab6:{NFSU2_TR(0x47dab6);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B47daba:{NFSU2_TR(0x47daba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B47dabb:{NFSU2_TR(0x47dabb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47dabf:{NFSU2_TR(0x47dabf);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47dac6:{NFSU2_TR(0x47dac6);
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
B47dac9:{NFSU2_TR(0x47dac9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47daca:L47daca:{c.instructions+=7;NFSU2_TR(0x47daca);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47dace:{NFSU2_TR(0x47dace);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B47dad2:{NFSU2_TR(0x47dad2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47dad3:{NFSU2_TR(0x47dad3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B47dad4:{NFSU2_TR(0x47dad4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47dadb:{NFSU2_TR(0x47dadb);
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
B47dade:{NFSU2_TR(0x47dade);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47dae0:L47dae0:{c.instructions+=3;NFSU2_TR(0x47dae0);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47dae5:{NFSU2_TR(0x47dae5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47dae6:{NFSU2_TR(0x47dae6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47daebull));
TAIL_STATIC(0x43e910u,43e);
}
B47daeb:L47daeb:{c.instructions+=3;NFSU2_TR(0x47daeb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47daee:{NFSU2_TR(0x47daee);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x508ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x508ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47daf3:{NFSU2_TR(0x47daf3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47db1d;}}
}
B47daf5:L47daf5:{c.instructions+=6;NFSU2_TR(0x47daf5);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47dafb:{NFSU2_TR(0x47dafb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47dafe:{NFSU2_TR(0x47dafe);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47db04:{NFSU2_TR(0x47db04);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47db05:{NFSU2_TR(0x47db05);
u8 U[4];
w4(U+0,u32(0x108ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47db0a:{NFSU2_TR(0x47db0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47db0full));
TAIL_STATIC(0x440820u,440);
}
B47db0f:L47db0f:{c.instructions+=3;NFSU2_TR(0x47db0f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47db12:{NFSU2_TR(0x47db12);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47db14:{NFSU2_TR(0x47db14);
if(r1(R+518)){{goto L47db1d;}}
}
B47db16:L47db16:{c.instructions+=2;NFSU2_TR(0x47db16);
__builtin_memmove((R+4),(R+0),4);
}
B47db18:{NFSU2_TR(0x47db18);
TAIL_STATIC(0x4745b0u,474);
}
B47db1d:L47db1d:{c.instructions+=2;NFSU2_TR(0x47db1d);
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
B47db1f:{NFSU2_TR(0x47db1f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47db20:L47db20:{c.instructions+=16;NFSU2_TR(0x47db20);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47db22:{NFSU2_TR(0x47db22);
u8 U[4];
w4(U+0,u32(0x772268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47db27:{NFSU2_TR(0x47db27);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47db2d:{NFSU2_TR(0x47db2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47db2e:{NFSU2_TR(0x47db2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47db35:{NFSU2_TR(0x47db35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B47db38:{NFSU2_TR(0x47db38);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47db39:{NFSU2_TR(0x47db39);
__builtin_memmove((R+12),(R+4),4);
}
B47db3b:{NFSU2_TR(0x47db3b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47db3c:{NFSU2_TR(0x47db3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47db40:{NFSU2_TR(0x47db40);
u8 U[4];
w4(U+0,u32(0x78af88ull));
s4(u32(r4(R+12)),r4(U+0));
}
B47db46:{NFSU2_TR(0x47db46);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47db4e:{NFSU2_TR(0x47db4e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47db54:{NFSU2_TR(0x47db54);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47db5c:{NFSU2_TR(0x47db5c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47db5d:{NFSU2_TR(0x47db5d);
__builtin_memmove((R+4),(R+4),4);
}
B47db60:L47db60:{c.instructions+=5;NFSU2_TR(0x47db60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B47db62:{NFSU2_TR(0x47db62);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47db64:{NFSU2_TR(0x47db64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47db67:{NFSU2_TR(0x47db67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47db6a:{NFSU2_TR(0x47db6a);
if(r1(R+518)){{goto L47dba0;}}
}
B47db6c:L47db6c:{c.instructions+=3;NFSU2_TR(0x47db6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B47db6e:{NFSU2_TR(0x47db6e);
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
B47db70:{NFSU2_TR(0x47db70);
if(r1(R+518)){{goto L47db77;}}
}
B47db72:L47db72:{c.instructions+=1;NFSU2_TR(0x47db72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47db77ull));
TAIL_STATIC(0x735550u,735);
}
B47db77:L47db77:{c.instructions+=3;NFSU2_TR(0x47db77);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B47db7b:{NFSU2_TR(0x47db7b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47db7c:{NFSU2_TR(0x47db7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47db81ull));
TAIL_STATIC(0x734df0u,734);
}
B47db81:L47db81:{c.instructions+=2;NFSU2_TR(0x47db81);
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
B47db84:{NFSU2_TR(0x47db84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47db89ull));
TAIL_STATIC(0x734e40u,734);
}
B47db89:L47db89:{c.instructions+=5;NFSU2_TR(0x47db89);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47db8d:{NFSU2_TR(0x47db8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47db8f:{NFSU2_TR(0x47db8f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47db91:{NFSU2_TR(0x47db91);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47db92:{NFSU2_TR(0x47db92);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47db95ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47db95:L47db95:{c.instructions+=1;NFSU2_TR(0x47db95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47db9aull));
TAIL_STATIC(0x734e60u,734);
}
B47db9a:L47db9a:{c.instructions+=1;NFSU2_TR(0x47db9a);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47dba0:L47dba0:{c.instructions+=5;NFSU2_TR(0x47dba0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47dba4:{NFSU2_TR(0x47dba4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B47dba7:{NFSU2_TR(0x47dba7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B47dba8:{NFSU2_TR(0x47dba8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47dbac:{NFSU2_TR(0x47dbac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47db60u);}goto L47db60;}}
}
B47dbae:L47dbae:{c.instructions+=4;NFSU2_TR(0x47dbae);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B47dbb4:{NFSU2_TR(0x47dbb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47dbb6:{NFSU2_TR(0x47dbb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47dbb7:{NFSU2_TR(0x47dbb7);
if(r1(R+518)){{goto L47dbe7;}}
}
B47dbb9:L47dbb9:{c.instructions+=3;NFSU2_TR(0x47dbb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B47dbbb:{NFSU2_TR(0x47dbbb);
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
B47dbbd:{NFSU2_TR(0x47dbbd);
if(r1(R+518)){{goto L47dbc4;}}
}
B47dbbf:L47dbbf:{c.instructions+=1;NFSU2_TR(0x47dbbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47dbc4ull));
TAIL_STATIC(0x735550u,735);
}
B47dbc4:L47dbc4:{c.instructions+=3;NFSU2_TR(0x47dbc4);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B47dbc8:{NFSU2_TR(0x47dbc8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47dbc9:{NFSU2_TR(0x47dbc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47dbceull));
TAIL_STATIC(0x734df0u,734);
}
B47dbce:L47dbce:{c.instructions+=2;NFSU2_TR(0x47dbce);
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
B47dbd1:{NFSU2_TR(0x47dbd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47dbd6ull));
TAIL_STATIC(0x734e40u,734);
}
B47dbd6:L47dbd6:{c.instructions+=5;NFSU2_TR(0x47dbd6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47dbda:{NFSU2_TR(0x47dbda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47dbdc:{NFSU2_TR(0x47dbdc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47dbde:{NFSU2_TR(0x47dbde);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47dbdf:{NFSU2_TR(0x47dbdf);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47dbe2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47dbe2:L47dbe2:{c.instructions+=1;NFSU2_TR(0x47dbe2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47dbe7ull));
TAIL_STATIC(0x734e60u,734);
}
B47dbe7:L47dbe7:{c.instructions+=8;NFSU2_TR(0x47dbe7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47dbeb:{NFSU2_TR(0x47dbeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47dbf5:{NFSU2_TR(0x47dbf5);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+12)),r4(U+0));
}
B47dbfb:{NFSU2_TR(0x47dbfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47dbfc:{NFSU2_TR(0x47dbfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47dbfd:{NFSU2_TR(0x47dbfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47dc04:{NFSU2_TR(0x47dc04);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47dc07:{NFSU2_TR(0x47dc07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47dc10:L47dc10:{c.instructions+=11;NFSU2_TR(0x47dc10);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47dc16:{NFSU2_TR(0x47dc16);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47dc18:{NFSU2_TR(0x47dc18);
u8 U[4];
w4(U+0,u32(0x77263bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47dc1d:{NFSU2_TR(0x47dc1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47dc1e:{NFSU2_TR(0x47dc1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47dc25:{NFSU2_TR(0x47dc25);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47dc26:{NFSU2_TR(0x47dc26);
__builtin_memmove((R+24),(R+4),4);
}
B47dc28:{NFSU2_TR(0x47dc28);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47dc2e:{NFSU2_TR(0x47dc2e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47dc30:{NFSU2_TR(0x47dc30);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47dc31:{NFSU2_TR(0x47dc31);
if(r1(R+518)){{goto L47dd26;}}
}
B47dc37:L47dc37:{c.instructions+=2;NFSU2_TR(0x47dc37);
u8 U[8];
__builtin_memmove((U+0),gp(0x7faaa8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47dc3e:{NFSU2_TR(0x47dc3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47dca6;}}
}
B47dc40:L47dc40:{c.instructions+=3;NFSU2_TR(0x47dc40);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47dc44:{NFSU2_TR(0x47dc44);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47dc45:{NFSU2_TR(0x47dc45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47dc4aull));
TAIL_STATIC(0x474660u,474);
}
B47dc4a:L47dc4a:{c.instructions+=3;NFSU2_TR(0x47dc4a);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47dc4c:{NFSU2_TR(0x47dc4c);
s4(0x7ec844,u32(0x78bc04ull));
}
B47dc56:{NFSU2_TR(0x47dc56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47dc5bull));
TAIL_STATIC(0x457e20u,457);
}
B47dc5b:L47dc5b:{c.instructions+=5;NFSU2_TR(0x47dc5b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47dc5e:{NFSU2_TR(0x47dc5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47dc62:{NFSU2_TR(0x47dc62);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47dc64:{NFSU2_TR(0x47dc64);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47dc6c:{NFSU2_TR(0x47dc6c);
if(r1(R+518)){{goto L47dc8f;}}
}
B47dc6e:L47dc6e:{c.instructions+=12;NFSU2_TR(0x47dc6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47dc72:{NFSU2_TR(0x47dc72);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47dc76:{NFSU2_TR(0x47dc76);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47dc77:{NFSU2_TR(0x47dc77);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47dc7b:{NFSU2_TR(0x47dc7b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47dc7d:{NFSU2_TR(0x47dc7d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47dc7e:{NFSU2_TR(0x47dc7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47dc82:{NFSU2_TR(0x47dc82);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47dc84:{NFSU2_TR(0x47dc84);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47dc85:{NFSU2_TR(0x47dc85);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47dc86:{NFSU2_TR(0x47dc86);
__builtin_memmove((R+4),(R+0),4);
}
B47dc88:{NFSU2_TR(0x47dc88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47dc8dull));
TAIL_STATIC(0x457f20u,457);
}
B47dc8d:L47dc8d:{c.instructions+=1;NFSU2_TR(0x47dc8d);
{goto L47dc91;}
}
B47dc8f:L47dc8f:{c.instructions+=1;NFSU2_TR(0x47dc8f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47dc91:L47dc91:{c.instructions+=3;NFSU2_TR(0x47dc91);
u8 U[16];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B47dc98:{NFSU2_TR(0x47dc98);
u8 U[16];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B47dc9f:{NFSU2_TR(0x47dc9f);
u8 U[16];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B47dca6:L47dca6:{c.instructions+=3;NFSU2_TR(0x47dca6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47dcac:{NFSU2_TR(0x47dcac);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47dcaf:{NFSU2_TR(0x47dcaf);
if(r1(R+518)){{goto L47dcc0;}}
}
B47dcb1:L47dcb1:{c.instructions+=2;NFSU2_TR(0x47dcb1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47dcb4:{NFSU2_TR(0x47dcb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47dcc6;}}
}
B47dcb6:L47dcb6:{c.instructions+=3;NFSU2_TR(0x47dcb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47dcbc:{NFSU2_TR(0x47dcbc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47dcbe:{NFSU2_TR(0x47dcbe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47dcc6;}}
}
B47dcc0:L47dcc0:{c.instructions+=1;NFSU2_TR(0x47dcc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47dcc6:L47dcc6:{c.instructions+=3;NFSU2_TR(0x47dcc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47dccc:{NFSU2_TR(0x47dccc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47dccf:{NFSU2_TR(0x47dccf);
if(r1(R+518)){{goto L47dce0;}}
}
B47dcd1:L47dcd1:{c.instructions+=2;NFSU2_TR(0x47dcd1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47dcd4:{NFSU2_TR(0x47dcd4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47dce6;}}
}
B47dcd6:L47dcd6:{c.instructions+=3;NFSU2_TR(0x47dcd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47dcdc:{NFSU2_TR(0x47dcdc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47dcde:{NFSU2_TR(0x47dcde);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47dce6;}}
}
B47dce0:L47dce0:{c.instructions+=1;NFSU2_TR(0x47dce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47dce6:L47dce6:{c.instructions+=3;NFSU2_TR(0x47dce6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47dcec:{NFSU2_TR(0x47dcec);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47dcef:{NFSU2_TR(0x47dcef);
if(r1(R+518)){{goto L47dd00;}}
}
B47dcf1:L47dcf1:{c.instructions+=2;NFSU2_TR(0x47dcf1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47dcf4:{NFSU2_TR(0x47dcf4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47dd06;}}
}
B47dcf6:L47dcf6:{c.instructions+=3;NFSU2_TR(0x47dcf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47dcfc:{NFSU2_TR(0x47dcfc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47dcfe:{NFSU2_TR(0x47dcfe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47dd06;}}
}
B47dd00:L47dd00:{c.instructions+=1;NFSU2_TR(0x47dd00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47dd06:L47dd06:{c.instructions+=3;NFSU2_TR(0x47dd06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47dd0c:{NFSU2_TR(0x47dd0c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47dd0f:{NFSU2_TR(0x47dd0f);
if(r1(R+518)){{goto L47dd20;}}
}
B47dd11:L47dd11:{c.instructions+=2;NFSU2_TR(0x47dd11);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47dd14:{NFSU2_TR(0x47dd14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47dd26;}}
}
B47dd16:L47dd16:{c.instructions+=3;NFSU2_TR(0x47dd16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47dd1c:{NFSU2_TR(0x47dd1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47dd1e:{NFSU2_TR(0x47dd1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47dd26;}}
}
B47dd20:L47dd20:{c.instructions+=1;NFSU2_TR(0x47dd20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47dd26:L47dd26:{c.instructions+=6;NFSU2_TR(0x47dd26);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47dd2a:{NFSU2_TR(0x47dd2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47dd2b:{NFSU2_TR(0x47dd2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47dd32:{NFSU2_TR(0x47dd32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47dd33:{NFSU2_TR(0x47dd33);
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
B47dd36:{NFSU2_TR(0x47dd36);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47dd40:L47dd40:{c.instructions+=13;NFSU2_TR(0x47dd40);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47dd46:{NFSU2_TR(0x47dd46);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47dd48:{NFSU2_TR(0x47dd48);
u8 U[4];
w4(U+0,u32(0x77265bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47dd4d:{NFSU2_TR(0x47dd4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47dd4e:{NFSU2_TR(0x47dd4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47dd55:{NFSU2_TR(0x47dd55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B47dd58:{NFSU2_TR(0x47dd58);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47dd59:{NFSU2_TR(0x47dd59);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47dd5a:{NFSU2_TR(0x47dd5a);
__builtin_memmove((R+20),(R+4),4);
}
B47dd5c:{NFSU2_TR(0x47dd5c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47dd62:{NFSU2_TR(0x47dd62);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B47dd64:{NFSU2_TR(0x47dd64);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B47dd66:{NFSU2_TR(0x47dd66);
if(r1(R+518)){{goto L47dfb2;}}
}
B47dd6c:L47dd6c:{c.instructions+=4;NFSU2_TR(0x47dd6c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47dd6d:{NFSU2_TR(0x47dd6d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47dd6e:{NFSU2_TR(0x47dd6e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B47dd70:{NFSU2_TR(0x47dd70);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xccull))));
__builtin_memmove((R+28),(U+0),4);
}
B47dd76:L47dd76:{c.instructions+=3;NFSU2_TR(0x47dd76);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47dd79:{NFSU2_TR(0x47dd79);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47dd7b:{NFSU2_TR(0x47dd7b);
if(r1(R+518)){{goto L47dda7;}}
}
B47dd7d:L47dd7d:{c.instructions+=4;NFSU2_TR(0x47dd7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47dd7f:{NFSU2_TR(0x47dd7f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47dd81:{NFSU2_TR(0x47dd81);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47dd85:{NFSU2_TR(0x47dd85);
if(r1(R+518)){{goto L47dda7;}}
}
B47dd87:L47dd87:{c.instructions+=4;NFSU2_TR(0x47dd87);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B47dd8b:{NFSU2_TR(0x47dd8b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47dd8c:{NFSU2_TR(0x47dd8c);
__builtin_memmove((R+4),(R+0),4);
}
B47dd8e:{NFSU2_TR(0x47dd8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47dd93ull));
TAIL_STATIC(0x735070u,735);
}
B47dd93:L47dd93:{c.instructions+=2;NFSU2_TR(0x47dd93);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B47dd98:{NFSU2_TR(0x47dd98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47dda7;}}
}
B47dd9a:L47dd9a:{c.instructions+=2;NFSU2_TR(0x47dd9a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x2ull)));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B47dd9d:{NFSU2_TR(0x47dd9d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L47dda7;}}
}
B47dd9f:L47dd9f:{c.instructions+=3;NFSU2_TR(0x47dd9f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47dda0:{NFSU2_TR(0x47dda0);
__builtin_memmove((R+4),(R+20),4);
}
B47dda2:{NFSU2_TR(0x47dda2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47dda7ull));
TAIL_STATIC(0x474660u,474);
}
B47dda7:L47dda7:{c.instructions+=4;NFSU2_TR(0x47dda7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47ddaa:{NFSU2_TR(0x47ddaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47ddad:{NFSU2_TR(0x47ddad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ddae:{NFSU2_TR(0x47ddae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ddb3ull));
TAIL_STATIC(0x5ed470u,5ed);
}
B47ddb3:L47ddb3:{c.instructions+=9;NFSU2_TR(0x47ddb3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B47ddb5:{NFSU2_TR(0x47ddb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47ddb8:{NFSU2_TR(0x47ddb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47ddbb:{NFSU2_TR(0x47ddbb);
u8 U[13];
w4(U+0,u32(u32(u32(0x408ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(r1(U+12)));
}
B47ddc3:{NFSU2_TR(0x47ddc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47ddc6:{NFSU2_TR(0x47ddc6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B47ddc7:{NFSU2_TR(0x47ddc7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B47ddca:{NFSU2_TR(0x47ddca);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B47ddcd:{NFSU2_TR(0x47ddcd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47dd76u);}goto L47dd76;}}
}
B47ddcf:L47ddcf:{c.instructions+=3;NFSU2_TR(0x47ddcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47ddd5:{NFSU2_TR(0x47ddd5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47ddd7:{NFSU2_TR(0x47ddd7);
if(r1(R+518)){{goto L47de33;}}
}
B47ddd9:L47ddd9:{c.instructions+=4;NFSU2_TR(0x47ddd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47dddb:{NFSU2_TR(0x47dddb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47dddd:{NFSU2_TR(0x47dddd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47dde1:{NFSU2_TR(0x47dde1);
if(r1(R+518)){{goto L47ddf6;}}
}
B47dde3:L47dde3:{c.instructions+=4;NFSU2_TR(0x47dde3);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B47dde7:{NFSU2_TR(0x47dde7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47dde8:{NFSU2_TR(0x47dde8);
__builtin_memmove((R+4),(R+0),4);
}
B47ddea:{NFSU2_TR(0x47ddea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ddefull));
TAIL_STATIC(0x735070u,735);
}
B47ddef:L47ddef:{c.instructions+=2;NFSU2_TR(0x47ddef);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B47ddf4:{NFSU2_TR(0x47ddf4);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L47de33;}}
}
B47ddf6:L47ddf6:{c.instructions+=3;NFSU2_TR(0x47ddf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B47ddfc:{NFSU2_TR(0x47ddfc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47ddfe:{NFSU2_TR(0x47ddfe);
if(r1(R+518)){{goto L47de2d;}}
}
B47de00:L47de00:{c.instructions+=3;NFSU2_TR(0x47de00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B47de02:{NFSU2_TR(0x47de02);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B47de04:{NFSU2_TR(0x47de04);
if(r1(R+518)){{goto L47de0b;}}
}
B47de06:L47de06:{c.instructions+=1;NFSU2_TR(0x47de06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47de0bull));
TAIL_STATIC(0x735550u,735);
}
B47de0b:L47de0b:{c.instructions+=3;NFSU2_TR(0x47de0b);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B47de0f:{NFSU2_TR(0x47de0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47de10:{NFSU2_TR(0x47de10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47de15ull));
TAIL_STATIC(0x734df0u,734);
}
B47de15:L47de15:{c.instructions+=2;NFSU2_TR(0x47de15);
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
B47de18:{NFSU2_TR(0x47de18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47de1dull));
TAIL_STATIC(0x734e40u,734);
}
B47de1d:L47de1d:{c.instructions+=5;NFSU2_TR(0x47de1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47de21:{NFSU2_TR(0x47de21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47de23:{NFSU2_TR(0x47de23);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47de24:{NFSU2_TR(0x47de24);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47de25:{NFSU2_TR(0x47de25);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47de28ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47de28:L47de28:{c.instructions+=1;NFSU2_TR(0x47de28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47de2dull));
TAIL_STATIC(0x734e60u,734);
}
B47de2d:L47de2d:{c.instructions+=1;NFSU2_TR(0x47de2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47de33:L47de33:{c.instructions+=4;NFSU2_TR(0x47de33);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xf8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B47de39:{NFSU2_TR(0x47de39);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47de3d:{NFSU2_TR(0x47de3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47de45:{NFSU2_TR(0x47de45);
{goto L47de50;}
}
B47de50:L47de50:{c.instructions+=3;NFSU2_TR(0x47de50);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47de54:{NFSU2_TR(0x47de54);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B47de56:{NFSU2_TR(0x47de56);
if(r1(R+518)){{goto L47df07;}}
}
B47de5c:L47de5c:{c.instructions+=2;NFSU2_TR(0x47de5c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B47de62:{NFSU2_TR(0x47de62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47df07;}}
}
B47de68:L47de68:{c.instructions+=4;NFSU2_TR(0x47de68);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B47de6c:{NFSU2_TR(0x47de6c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47de6d:{NFSU2_TR(0x47de6d);
s4(0x7ec844,u32(0x78bc14ull));
}
B47de77:{NFSU2_TR(0x47de77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47de7cull));
TAIL_STATIC(0x734df0u,734);
}
B47de7c:L47de7c:{c.instructions+=2;NFSU2_TR(0x47de7c);
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
B47de7f:{NFSU2_TR(0x47de7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47de84ull));
TAIL_STATIC(0x734e40u,734);
}
B47de84:L47de84:{c.instructions+=9;NFSU2_TR(0x47de84);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47de88:{NFSU2_TR(0x47de88);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B47de8c:{NFSU2_TR(0x47de8c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47de8d:{NFSU2_TR(0x47de8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47de91:{NFSU2_TR(0x47de91);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47de95:{NFSU2_TR(0x47de95);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47de99:{NFSU2_TR(0x47de99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47de9b:{NFSU2_TR(0x47de9b);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47de9d:{NFSU2_TR(0x47de9d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47de9full));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B47de9f:L47de9f:{c.instructions+=2;NFSU2_TR(0x47de9f);
__builtin_memmove((R+24),(R+0),4);
}
B47dea1:{NFSU2_TR(0x47dea1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47dea6ull));
TAIL_STATIC(0x734e60u,734);
}
B47dea6:L47dea6:{c.instructions+=4;NFSU2_TR(0x47dea6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47deaa:{NFSU2_TR(0x47deaa);
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
B47deac:{NFSU2_TR(0x47deac);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47deb0:{NFSU2_TR(0x47deb0);
if(r1(R+518)){{goto L47def7;}}
}
B47deb2:L47deb2:{c.instructions+=9;NFSU2_TR(0x47deb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47deb5:{NFSU2_TR(0x47deb5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47deb6:{NFSU2_TR(0x47deb6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47deb7:{NFSU2_TR(0x47deb7);
u8 U[4];
w4(U+0,u32(0x82c550ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47debc:{NFSU2_TR(0x47debc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B47debe:{NFSU2_TR(0x47debe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47dec1:{NFSU2_TR(0x47dec1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x6f54ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47dec8:{NFSU2_TR(0x47dec8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47decb:{NFSU2_TR(0x47decb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ded0ull));
TAIL_STATIC(0x7358c0u,735);
}
B47ded0:L47ded0:{c.instructions+=3;NFSU2_TR(0x47ded0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B47ded3:{NFSU2_TR(0x47ded3);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B47ded5:{NFSU2_TR(0x47ded5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L47def9;}}
}
B47ded7:L47ded7:{c.instructions+=3;NFSU2_TR(0x47ded7);
u8 U[4];
w4(U+0,u32(0x7eddd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47dedc:{NFSU2_TR(0x47dedc);
w4(R+4,u32(0x82c550ull));
}
B47dee1:{NFSU2_TR(0x47dee1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47dee6ull));
TAIL_STATIC(0x735840u,735);
}
B47dee6:L47dee6:{c.instructions+=4;NFSU2_TR(0x47dee6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47dee7:{NFSU2_TR(0x47dee7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47dee8:{NFSU2_TR(0x47dee8);
u8 U[4];
w4(U+0,u32(0x82c550ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47deed:{NFSU2_TR(0x47deed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47def2ull));
TAIL_STATIC(0x7358c0u,735);
}
B47def2:L47def2:{c.instructions+=2;NFSU2_TR(0x47def2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B47def5:{NFSU2_TR(0x47def5);
{goto L47def9;}
}
B47def7:L47def7:{c.instructions+=1;NFSU2_TR(0x47def7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B47def9:L47def9:{c.instructions+=2;NFSU2_TR(0x47def9);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B47df01:{NFSU2_TR(0x47df01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47df07:L47df07:{c.instructions+=7;NFSU2_TR(0x47df07);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47df0b:{NFSU2_TR(0x47df0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47df0f:{NFSU2_TR(0x47df0f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B47df12:{NFSU2_TR(0x47df12);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B47df13:{NFSU2_TR(0x47df13);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47df17:{NFSU2_TR(0x47df17);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47df1b:{NFSU2_TR(0x47df1b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47de50u);}goto L47de50;}}
}
B47df21:L47df21:{c.instructions+=3;NFSU2_TR(0x47df21);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B47df23:{NFSU2_TR(0x47df23);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xccull))));
__builtin_memmove((R+0),(U+0),4);
}
B47df29:{NFSU2_TR(0x47df29);
__builtin_memmove((R+16),(R+16),4);
}
B47df30:L47df30:{c.instructions+=3;NFSU2_TR(0x47df30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B47df32:{NFSU2_TR(0x47df32);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B47df35:{NFSU2_TR(0x47df35);
if(r1(R+518)){{goto L47df43;}}
}
B47df37:L47df37:{c.instructions+=2;NFSU2_TR(0x47df37);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B47df3a:{NFSU2_TR(0x47df3a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L47df43;}}
}
B47df3c:L47df3c:{c.instructions+=1;NFSU2_TR(0x47df3c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x47dfc8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47df43:L47df43:{c.instructions+=4;NFSU2_TR(0x47df43);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B47df44:{NFSU2_TR(0x47df44);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B47df47:{NFSU2_TR(0x47df47);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B47df4a:{NFSU2_TR(0x47df4a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47df30u);}goto L47df30;}}
}
B47df4c:L47df4c:{c.instructions+=1;NFSU2_TR(0x47df4c);
{goto L47dfb0;}
}
B47df4e:L47df4e:{c.instructions+=5;NFSU2_TR(0x47df4e);
u8 U[16];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B47df55:{NFSU2_TR(0x47df55);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47df57:{NFSU2_TR(0x47df57);
u8 U[16];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B47df5e:{NFSU2_TR(0x47df5e);
u8 U[16];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B47df65:{NFSU2_TR(0x47df65);
if(r1(R+518)){{goto L47dfb0;}}
}
B47df67:L47df67:{c.instructions+=3;NFSU2_TR(0x47df67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B47df69:{NFSU2_TR(0x47df69);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B47df6b:{NFSU2_TR(0x47df6b);
if(r1(R+518)){{goto L47df72;}}
}
B47df6d:L47df6d:{c.instructions+=1;NFSU2_TR(0x47df6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47df72ull));
TAIL_STATIC(0x735550u,735);
}
B47df72:L47df72:{c.instructions+=3;NFSU2_TR(0x47df72);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B47df76:{NFSU2_TR(0x47df76);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47df77:{NFSU2_TR(0x47df77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47df7cull));
TAIL_STATIC(0x734df0u,734);
}
B47df7c:L47df7c:{c.instructions+=2;NFSU2_TR(0x47df7c);
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
B47df7f:{NFSU2_TR(0x47df7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47df84ull));
TAIL_STATIC(0x734e40u,734);
}
B47df84:L47df84:{c.instructions+=5;NFSU2_TR(0x47df84);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47df88:{NFSU2_TR(0x47df88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47df8a:{NFSU2_TR(0x47df8a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47df8b:{NFSU2_TR(0x47df8b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47df8c:{NFSU2_TR(0x47df8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47df8full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47df8f:L47df8f:{c.instructions+=1;NFSU2_TR(0x47df8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47df94ull));
TAIL_STATIC(0x734e60u,734);
}
B47df94:L47df94:{c.instructions+=2;NFSU2_TR(0x47df94);
u8 U[16];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B47df9b:{NFSU2_TR(0x47df9b);
{goto L47dfb0;}
}
B47df9d:L47df9d:{c.instructions+=3;NFSU2_TR(0x47df9d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47df9e:{NFSU2_TR(0x47df9e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47dfa0:{NFSU2_TR(0x47dfa0);
{goto L47dfa5;}
}
B47dfa2:L47dfa2:{c.instructions+=2;NFSU2_TR(0x47dfa2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47dfa3:{NFSU2_TR(0x47dfa3);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47dfa5:L47dfa5:{c.instructions+=6;NFSU2_TR(0x47dfa5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47dfa6:{NFSU2_TR(0x47dfa6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47dfa7:{NFSU2_TR(0x47dfa7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47dfa8:{NFSU2_TR(0x47dfa8);
__builtin_memmove((R+4),(R+20),4);
}
B47dfaa:{NFSU2_TR(0x47dfaa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47dfab:{NFSU2_TR(0x47dfab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47dfb0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47dc10u);}goto L47dc10;}
}
B47dfb0:L47dfb0:{c.instructions+=2;NFSU2_TR(0x47dfb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47dfb1:{NFSU2_TR(0x47dfb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47dfb2:L47dfb2:{c.instructions+=6;NFSU2_TR(0x47dfb2);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47dfb6:{NFSU2_TR(0x47dfb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B47dfb7:{NFSU2_TR(0x47dfb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47dfb8:{NFSU2_TR(0x47dfb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47dfbf:{NFSU2_TR(0x47dfbf);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47dfc2:{NFSU2_TR(0x47dfc2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47dfe0:L47dfe0:{c.instructions+=3;NFSU2_TR(0x47dfe0);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47dfe5:{NFSU2_TR(0x47dfe5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47dfe6:{NFSU2_TR(0x47dfe6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47dfebull));
TAIL_STATIC(0x43e910u,43e);
}
B47dfeb:L47dfeb:{c.instructions+=3;NFSU2_TR(0x47dfeb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47dfee:{NFSU2_TR(0x47dfee);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4d4ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4d4ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47dff3:{NFSU2_TR(0x47dff3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x47e01du,47e);}
}
B47dff5:L47dff5:{c.instructions+=3;NFSU2_TR(0x47dff5);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47dffb:{NFSU2_TR(0x47dffb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47dffe:{NFSU2_TR(0x47dffe);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
TAIL_STATIC(0x47e004u,47e);
}
XIT:NFSU2_TR_EXIT(0x47d,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
