#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50e(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5c5(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x50d,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x50d,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_50d(u8* __restrict R,Cpu& c);
u32 page_50d(Cpu& c){return body_50d(c.regs.data(),c);}
__attribute__((noinline)) u32 body_50d(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x50d003:goto L50d003;
case 0x50d008:goto L50d008;
case 0x50d00a:goto L50d00a;
case 0x50d00c:c.instructions+=3;goto B50d00c;
case 0x50d011:c.instructions+=2;goto B50d011;
case 0x50d016:c.instructions+=1;goto B50d016;
case 0x50d01b:goto L50d01b;
case 0x50d01d:goto L50d01d;
case 0x50d01f:c.instructions+=3;goto B50d01f;
case 0x50d024:c.instructions+=2;goto B50d024;
case 0x50d029:c.instructions+=1;goto B50d029;
case 0x50d02e:goto L50d02e;
case 0x50d030:goto L50d030;
case 0x50d032:c.instructions+=3;goto B50d032;
case 0x50d035:c.instructions+=2;goto B50d035;
case 0x50d03a:c.instructions+=1;goto B50d03a;
case 0x50d03f:goto L50d03f;
case 0x50d041:goto L50d041;
case 0x50d043:c.instructions+=7;goto B50d043;
case 0x50d04a:c.instructions+=6;goto B50d04a;
case 0x50d051:c.instructions+=5;goto B50d051;
case 0x50d058:c.instructions+=4;goto B50d058;
case 0x50d05f:c.instructions+=3;goto B50d05f;
case 0x50d064:c.instructions+=2;goto B50d064;
case 0x50d069:c.instructions+=1;goto B50d069;
case 0x50d06e:goto L50d06e;
case 0x50d070:goto L50d070;
case 0x50d072:c.instructions+=9;goto B50d072;
case 0x50d079:c.instructions+=8;goto B50d079;
case 0x50d080:c.instructions+=7;goto B50d080;
case 0x50d087:c.instructions+=6;goto B50d087;
case 0x50d08e:c.instructions+=5;goto B50d08e;
case 0x50d095:c.instructions+=4;goto B50d095;
case 0x50d09c:c.instructions+=3;goto B50d09c;
case 0x50d0a1:c.instructions+=2;goto B50d0a1;
case 0x50d0a4:c.instructions+=1;goto B50d0a4;
case 0x50d0a9:goto L50d0a9;
case 0x50d0ab:goto L50d0ab;
case 0x50d0ad:c.instructions+=7;goto B50d0ad;
case 0x50d0b4:c.instructions+=6;goto B50d0b4;
case 0x50d0bb:c.instructions+=5;goto B50d0bb;
case 0x50d0be:c.instructions+=4;goto B50d0be;
case 0x50d0c0:c.instructions+=3;goto B50d0c0;
case 0x50d0c6:c.instructions+=2;goto B50d0c6;
case 0x50d0cb:c.instructions+=1;goto B50d0cb;
case 0x50d0d0:goto L50d0d0;
case 0x50d0d2:goto L50d0d2;
case 0x50d0d4:c.instructions+=6;goto B50d0d4;
case 0x50d0db:c.instructions+=5;goto B50d0db;
case 0x50d0e2:c.instructions+=4;goto B50d0e2;
case 0x50d0e8:c.instructions+=3;goto B50d0e8;
case 0x50d0eb:c.instructions+=2;goto B50d0eb;
case 0x50d0f0:c.instructions+=1;goto B50d0f0;
case 0x50d0f5:goto L50d0f5;
case 0x50d0f7:goto L50d0f7;
case 0x50d0f9:c.instructions+=6;goto B50d0f9;
case 0x50d100:c.instructions+=5;goto B50d100;
case 0x50d107:c.instructions+=4;goto B50d107;
case 0x50d10d:c.instructions+=3;goto B50d10d;
case 0x50d112:c.instructions+=2;goto B50d112;
case 0x50d117:c.instructions+=1;goto B50d117;
case 0x50d11c:goto L50d11c;
case 0x50d11e:goto L50d11e;
case 0x50d120:c.instructions+=3;goto B50d120;
case 0x50d125:c.instructions+=2;goto B50d125;
case 0x50d12a:c.instructions+=1;goto B50d12a;
case 0x50d12f:goto L50d12f;
case 0x50d131:goto L50d131;
case 0x50d133:c.instructions+=3;goto B50d133;
case 0x50d138:c.instructions+=2;goto B50d138;
case 0x50d13d:c.instructions+=1;goto B50d13d;
case 0x50d142:goto L50d142;
case 0x50d144:goto L50d144;
case 0x50d146:c.instructions+=2;goto B50d146;
case 0x50d147:c.instructions+=1;goto B50d147;
case 0x50d150:goto L50d150;
case 0x50d154:c.instructions+=5;goto B50d154;
case 0x50d158:c.instructions+=4;goto B50d158;
case 0x50d15b:c.instructions+=3;goto B50d15b;
case 0x50d163:c.instructions+=2;goto B50d163;
case 0x50d166:c.instructions+=1;goto B50d166;
case 0x50d168:goto L50d168;
case 0x50d16e:c.instructions+=2;goto B50d16e;
case 0x50d16f:c.instructions+=1;goto B50d16f;
case 0x50d174:goto L50d174;
case 0x50d180:goto L50d180;
case 0x50d184:c.instructions+=2;goto B50d184;
case 0x50d187:c.instructions+=1;goto B50d187;
case 0x50d189:goto L50d189;
case 0x50d18f:c.instructions+=2;goto B50d18f;
case 0x50d190:c.instructions+=1;goto B50d190;
case 0x50d195:goto L50d195;
case 0x50d1a0:goto L50d1a0;
case 0x50d1a4:c.instructions+=2;goto B50d1a4;
case 0x50d1a7:c.instructions+=1;goto B50d1a7;
case 0x50d1a9:goto L50d1a9;
case 0x50d1ac:c.instructions+=1;goto B50d1ac;
case 0x50d1ae:goto L50d1ae;
case 0x50d1b1:c.instructions+=1;goto B50d1b1;
case 0x50d1b3:goto L50d1b3;
case 0x50d1b7:c.instructions+=4;goto B50d1b7;
case 0x50d1b9:c.instructions+=3;goto B50d1b9;
case 0x50d1bb:c.instructions+=2;goto B50d1bb;
case 0x50d1be:c.instructions+=1;goto B50d1be;
case 0x50d1bf:goto L50d1bf;
case 0x50d1c1:goto L50d1c1;
case 0x50d1d0:goto L50d1d0;
case 0x50d1d4:c.instructions+=3;goto B50d1d4;
case 0x50d1d6:c.instructions+=2;goto B50d1d6;
case 0x50d1d9:c.instructions+=1;goto B50d1d9;
case 0x50d1db:goto L50d1db;
case 0x50d1dc:c.instructions+=1;goto B50d1dc;
case 0x50d1de:goto L50d1de;
case 0x50d1e0:goto L50d1e0;
case 0x50d1f0:goto L50d1f0;
case 0x50d1f4:c.instructions+=7;goto B50d1f4;
case 0x50d1f6:c.instructions+=6;goto B50d1f6;
case 0x50d1fc:c.instructions+=5;goto B50d1fc;
case 0x50d200:c.instructions+=4;goto B50d200;
case 0x50d203:c.instructions+=3;goto B50d203;
case 0x50d204:c.instructions+=2;goto B50d204;
case 0x50d206:c.instructions+=1;goto B50d206;
case 0x50d210:goto L50d210;
case 0x50d214:c.instructions+=7;goto B50d214;
case 0x50d216:c.instructions+=6;goto B50d216;
case 0x50d21c:c.instructions+=5;goto B50d21c;
case 0x50d220:c.instructions+=4;goto B50d220;
case 0x50d223:c.instructions+=3;goto B50d223;
case 0x50d224:c.instructions+=2;goto B50d224;
case 0x50d226:c.instructions+=1;goto B50d226;
case 0x50d230:goto L50d230;
case 0x50d234:c.instructions+=3;goto B50d234;
case 0x50d237:c.instructions+=2;goto B50d237;
case 0x50d23a:c.instructions+=1;goto B50d23a;
case 0x50d23c:goto L50d23c;
case 0x50d243:goto L50d243;
case 0x50d245:goto L50d245;
case 0x50d260:goto L50d260;
case 0x50d264:c.instructions+=2;goto B50d264;
case 0x50d269:c.instructions+=1;goto B50d269;
case 0x50d26b:goto L50d26b;
case 0x50d26f:c.instructions+=1;goto B50d26f;
case 0x50d270:goto L50d270;
case 0x50d272:c.instructions+=6;goto B50d272;
case 0x50d277:c.instructions+=5;goto B50d277;
case 0x50d27b:c.instructions+=4;goto B50d27b;
case 0x50d27e:c.instructions+=3;goto B50d27e;
case 0x50d27f:c.instructions+=2;goto B50d27f;
case 0x50d281:c.instructions+=1;goto B50d281;
case 0x50d290:goto L50d290;
case 0x50d2a0:goto L50d2a0;
case 0x50d2a4:c.instructions+=2;goto B50d2a4;
case 0x50d2a6:c.instructions+=1;goto B50d2a6;
case 0x50d2a8:goto L50d2a8;
case 0x50d2aa:c.instructions+=1;goto B50d2aa;
case 0x50d2ab:goto L50d2ab;
case 0x50d2ad:c.instructions+=1;goto B50d2ad;
case 0x50d2af:goto L50d2af;
case 0x50d2b4:c.instructions+=1;goto B50d2b4;
case 0x50d2b5:goto L50d2b5;
case 0x50d2b7:c.instructions+=1;goto B50d2b7;
case 0x50d2b9:goto L50d2b9;
case 0x50d2be:c.instructions+=1;goto B50d2be;
case 0x50d2bf:goto L50d2bf;
case 0x50d2c1:c.instructions+=5;goto B50d2c1;
case 0x50d2c3:c.instructions+=4;goto B50d2c3;
case 0x50d2c5:c.instructions+=3;goto B50d2c5;
case 0x50d2c8:c.instructions+=2;goto B50d2c8;
case 0x50d2c9:c.instructions+=1;goto B50d2c9;
case 0x50d2d0:goto L50d2d0;
case 0x50d2d4:c.instructions+=2;goto B50d2d4;
case 0x50d2d6:c.instructions+=1;goto B50d2d6;
case 0x50d2d8:goto L50d2d8;
case 0x50d2dd:c.instructions+=1;goto B50d2dd;
case 0x50d2de:goto L50d2de;
case 0x50d2e1:c.instructions+=1;goto B50d2e1;
case 0x50d2e3:goto L50d2e3;
case 0x50d2e8:c.instructions+=1;goto B50d2e8;
case 0x50d2e9:goto L50d2e9;
case 0x50d2ec:c.instructions+=1;goto B50d2ec;
case 0x50d2ee:goto L50d2ee;
case 0x50d2f3:c.instructions+=1;goto B50d2f3;
case 0x50d2f4:goto L50d2f4;
case 0x50d2f6:c.instructions+=6;goto B50d2f6;
case 0x50d2f9:c.instructions+=5;goto B50d2f9;
case 0x50d2fc:c.instructions+=4;goto B50d2fc;
case 0x50d2fd:c.instructions+=3;goto B50d2fd;
case 0x50d300:c.instructions+=2;goto B50d300;
case 0x50d302:c.instructions+=1;goto B50d302;
case 0x50d310:goto L50d310;
case 0x50d314:c.instructions+=3;goto B50d314;
case 0x50d315:c.instructions+=2;goto B50d315;
case 0x50d316:c.instructions+=1;goto B50d316;
case 0x50d31b:goto L50d31b;
case 0x50d31f:c.instructions+=4;goto B50d31f;
case 0x50d322:c.instructions+=3;goto B50d322;
case 0x50d324:c.instructions+=2;goto B50d324;
case 0x50d326:c.instructions+=1;goto B50d326;
case 0x50d328:goto L50d328;
case 0x50d32c:c.instructions+=2;goto B50d32c;
case 0x50d32d:c.instructions+=1;goto B50d32d;
case 0x50d330:goto L50d330;
case 0x50d332:c.instructions+=1;goto B50d332;
case 0x50d334:goto L50d334;
case 0x50d338:c.instructions+=3;goto B50d338;
case 0x50d339:c.instructions+=2;goto B50d339;
case 0x50d33b:c.instructions+=1;goto B50d33b;
case 0x50d33d:goto L50d33d;
case 0x50d341:c.instructions+=2;goto B50d341;
case 0x50d342:c.instructions+=1;goto B50d342;
case 0x50d350:goto L50d350;
case 0x50d355:goto L50d355;
case 0x50d358:c.instructions+=1;goto B50d358;
case 0x50d35a:goto L50d35a;
case 0x50d35f:c.instructions+=2;goto B50d35f;
case 0x50d361:c.instructions+=1;goto B50d361;
case 0x50d363:goto L50d363;
case 0x50d365:c.instructions+=1;goto B50d365;
case 0x50d366:goto L50d366;
case 0x50d36b:goto L50d36b;
case 0x50d36e:c.instructions+=1;goto B50d36e;
case 0x50d370:goto L50d370;
case 0x50d375:c.instructions+=2;goto B50d375;
case 0x50d377:c.instructions+=1;goto B50d377;
case 0x50d379:goto L50d379;
case 0x50d37e:goto L50d37e;
case 0x50d381:c.instructions+=1;goto B50d381;
case 0x50d383:goto L50d383;
case 0x50d388:goto L50d388;
case 0x50d38b:c.instructions+=2;goto B50d38b;
case 0x50d38e:c.instructions+=1;goto B50d38e;
case 0x50d390:goto L50d390;
case 0x50d392:c.instructions+=2;goto B50d392;
case 0x50d394:c.instructions+=1;goto B50d394;
case 0x50d396:goto L50d396;
case 0x50d397:c.instructions+=1;goto B50d397;
case 0x50d39c:goto L50d39c;
case 0x50d39d:goto L50d39d;
case 0x50d3a0:goto L50d3a0;
case 0x50d3a4:c.instructions+=2;goto B50d3a4;
case 0x50d3a6:c.instructions+=1;goto B50d3a6;
case 0x50d3a8:goto L50d3a8;
case 0x50d3aa:c.instructions+=1;goto B50d3aa;
case 0x50d3ac:goto L50d3ac;
case 0x50d3b1:c.instructions+=1;goto B50d3b1;
case 0x50d3b2:goto L50d3b2;
case 0x50d3b4:c.instructions+=1;goto B50d3b4;
case 0x50d3c0:goto L50d3c0;
case 0x50d3c4:c.instructions+=6;goto B50d3c4;
case 0x50d3c5:c.instructions+=5;goto B50d3c5;
case 0x50d3c6:c.instructions+=4;goto B50d3c6;
case 0x50d3c8:c.instructions+=3;goto B50d3c8;
case 0x50d3ca:c.instructions+=2;goto B50d3ca;
case 0x50d3cc:c.instructions+=1;goto B50d3cc;
case 0x50d3ce:goto L50d3ce;
case 0x50d3cf:c.instructions+=3;goto B50d3cf;
case 0x50d3d3:c.instructions+=2;goto B50d3d3;
case 0x50d3d4:c.instructions+=1;goto B50d3d4;
case 0x50d3d8:goto L50d3d8;
case 0x50d3da:c.instructions+=3;goto B50d3da;
case 0x50d3db:c.instructions+=2;goto B50d3db;
case 0x50d3de:c.instructions+=1;goto B50d3de;
case 0x50d3e0:goto L50d3e0;
case 0x50d3e4:c.instructions+=1;goto B50d3e4;
case 0x50d3e6:goto L50d3e6;
case 0x50d3eb:c.instructions+=2;goto B50d3eb;
case 0x50d3ed:c.instructions+=1;goto B50d3ed;
case 0x50d3ef:goto L50d3ef;
case 0x50d3f3:c.instructions+=1;goto B50d3f3;
case 0x50d3f5:goto L50d3f5;
case 0x50d3f8:c.instructions+=3;goto B50d3f8;
case 0x50d3fd:c.instructions+=2;goto B50d3fd;
case 0x50d401:c.instructions+=1;goto B50d401;
case 0x50d403:goto L50d403;
case 0x50d406:c.instructions+=1;goto B50d406;
case 0x50d408:goto L50d408;
case 0x50d40c:c.instructions+=1;goto B50d40c;
case 0x50d40e:goto L50d40e;
case 0x50d410:c.instructions+=3;goto B50d410;
case 0x50d411:c.instructions+=2;goto B50d411;
case 0x50d414:c.instructions+=1;goto B50d414;
case 0x50d416:goto L50d416;
case 0x50d419:c.instructions+=4;goto B50d419;
case 0x50d41c:c.instructions+=3;goto B50d41c;
case 0x50d41f:c.instructions+=2;goto B50d41f;
case 0x50d421:c.instructions+=1;goto B50d421;
case 0x50d429:goto L50d429;
case 0x50d42c:c.instructions+=1;goto B50d42c;
case 0x50d42e:goto L50d42e;
case 0x50d430:c.instructions+=1;goto B50d430;
case 0x50d435:goto L50d435;
case 0x50d43a:c.instructions+=3;goto B50d43a;
case 0x50d43b:c.instructions+=2;goto B50d43b;
case 0x50d43e:c.instructions+=1;goto B50d43e;
case 0x50d440:goto L50d440;
case 0x50d444:c.instructions+=1;goto B50d444;
case 0x50d446:goto L50d446;
case 0x50d447:c.instructions+=1;goto B50d447;
case 0x50d448:goto L50d448;
case 0x50d44a:c.instructions+=5;goto B50d44a;
case 0x50d44c:c.instructions+=4;goto B50d44c;
case 0x50d44d:c.instructions+=3;goto B50d44d;
case 0x50d450:c.instructions+=2;goto B50d450;
case 0x50d451:c.instructions+=1;goto B50d451;
case 0x50d460:goto L50d460;
case 0x50d464:c.instructions+=2;goto B50d464;
case 0x50d469:c.instructions+=1;goto B50d469;
case 0x50d46b:goto L50d46b;
case 0x50d46d:goto L50d46d;
case 0x50d472:c.instructions+=1;goto B50d472;
case 0x50d474:goto L50d474;
case 0x50d479:c.instructions+=1;goto B50d479;
case 0x50d47b:goto L50d47b;
case 0x50d480:c.instructions+=1;goto B50d480;
case 0x50d482:goto L50d482;
case 0x50d483:c.instructions+=5;goto B50d483;
case 0x50d485:c.instructions+=4;goto B50d485;
case 0x50d48a:c.instructions+=3;goto B50d48a;
case 0x50d48b:c.instructions+=2;goto B50d48b;
case 0x50d48c:c.instructions+=1;goto B50d48c;
case 0x50d48f:goto L50d48f;
case 0x50d490:c.instructions+=1;goto B50d490;
case 0x50d493:goto L50d493;
case 0x50d494:c.instructions+=5;goto B50d494;
case 0x50d496:c.instructions+=4;goto B50d496;
case 0x50d49b:c.instructions+=3;goto B50d49b;
case 0x50d49c:c.instructions+=2;goto B50d49c;
case 0x50d49d:c.instructions+=1;goto B50d49d;
case 0x50d4a0:goto L50d4a0;
case 0x50d4a1:c.instructions+=1;goto B50d4a1;
case 0x50d4a4:goto L50d4a4;
case 0x50d4a5:c.instructions+=5;goto B50d4a5;
case 0x50d4a7:c.instructions+=4;goto B50d4a7;
case 0x50d4ac:c.instructions+=3;goto B50d4ac;
case 0x50d4ad:c.instructions+=2;goto B50d4ad;
case 0x50d4ae:c.instructions+=1;goto B50d4ae;
case 0x50d4b1:goto L50d4b1;
case 0x50d4b2:c.instructions+=1;goto B50d4b2;
case 0x50d4b5:goto L50d4b5;
case 0x50d4b6:c.instructions+=5;goto B50d4b6;
case 0x50d4b8:c.instructions+=4;goto B50d4b8;
case 0x50d4bd:c.instructions+=3;goto B50d4bd;
case 0x50d4be:c.instructions+=2;goto B50d4be;
case 0x50d4bf:c.instructions+=1;goto B50d4bf;
case 0x50d4c2:goto L50d4c2;
case 0x50d4c3:c.instructions+=1;goto B50d4c3;
case 0x50d4c6:goto L50d4c6;
case 0x50d4cb:c.instructions+=1;goto B50d4cb;
case 0x50d4cd:goto L50d4cd;
case 0x50d4d2:c.instructions+=1;goto B50d4d2;
case 0x50d4d4:goto L50d4d4;
case 0x50d4d6:c.instructions+=1;goto B50d4d6;
case 0x50d4d9:goto L50d4d9;
case 0x50d4da:c.instructions+=5;goto B50d4da;
case 0x50d4dc:c.instructions+=4;goto B50d4dc;
case 0x50d4e1:c.instructions+=3;goto B50d4e1;
case 0x50d4e2:c.instructions+=2;goto B50d4e2;
case 0x50d4e3:c.instructions+=1;goto B50d4e3;
case 0x50d4e6:goto L50d4e6;
case 0x50d4e7:c.instructions+=1;goto B50d4e7;
case 0x50d4ea:goto L50d4ea;
case 0x50d4eb:c.instructions+=5;goto B50d4eb;
case 0x50d4ed:c.instructions+=4;goto B50d4ed;
case 0x50d4f2:c.instructions+=3;goto B50d4f2;
case 0x50d4f3:c.instructions+=2;goto B50d4f3;
case 0x50d4f4:c.instructions+=1;goto B50d4f4;
case 0x50d4f7:goto L50d4f7;
case 0x50d4f8:c.instructions+=1;goto B50d4f8;
case 0x50d500:goto L50d500;
case 0x50d504:c.instructions+=1;goto B50d504;
case 0x50d510:goto L50d510;
case 0x50d512:c.instructions+=1;goto B50d512;
case 0x50d520:goto L50d520;
case 0x50d530:goto L50d530;
case 0x50d532:c.instructions+=3;goto B50d532;
case 0x50d535:c.instructions+=2;goto B50d535;
case 0x50d536:c.instructions+=1;goto B50d536;
case 0x50d53b:goto L50d53b;
case 0x50d53e:c.instructions+=3;goto B50d53e;
case 0x50d541:c.instructions+=2;goto B50d541;
case 0x50d543:c.instructions+=1;goto B50d543;
case 0x50d545:goto L50d545;
case 0x50d546:c.instructions+=1;goto B50d546;
case 0x50d54b:goto L50d54b;
case 0x50d54c:goto L50d54c;
case 0x50d550:goto L50d550;
case 0x50d552:c.instructions+=3;goto B50d552;
case 0x50d555:c.instructions+=2;goto B50d555;
case 0x50d556:c.instructions+=1;goto B50d556;
case 0x50d55b:goto L50d55b;
case 0x50d55e:c.instructions+=3;goto B50d55e;
case 0x50d561:c.instructions+=2;goto B50d561;
case 0x50d563:c.instructions+=1;goto B50d563;
case 0x50d565:goto L50d565;
case 0x50d566:c.instructions+=1;goto B50d566;
case 0x50d56b:goto L50d56b;
case 0x50d56c:goto L50d56c;
case 0x50d570:goto L50d570;
case 0x50d572:c.instructions+=3;goto B50d572;
case 0x50d575:c.instructions+=2;goto B50d575;
case 0x50d576:c.instructions+=1;goto B50d576;
case 0x50d57b:goto L50d57b;
case 0x50d57e:c.instructions+=2;goto B50d57e;
case 0x50d57f:c.instructions+=1;goto B50d57f;
case 0x50d584:goto L50d584;
case 0x50d587:c.instructions+=3;goto B50d587;
case 0x50d58a:c.instructions+=2;goto B50d58a;
case 0x50d58c:c.instructions+=1;goto B50d58c;
case 0x50d58e:goto L50d58e;
case 0x50d58f:c.instructions+=1;goto B50d58f;
case 0x50d594:goto L50d594;
case 0x50d595:goto L50d595;
case 0x50d5a0:goto L50d5a0;
case 0x50d5a2:c.instructions+=3;goto B50d5a2;
case 0x50d5a5:c.instructions+=2;goto B50d5a5;
case 0x50d5a6:c.instructions+=1;goto B50d5a6;
case 0x50d5ab:goto L50d5ab;
case 0x50d5ae:c.instructions+=2;goto B50d5ae;
case 0x50d5af:c.instructions+=1;goto B50d5af;
case 0x50d5b4:goto L50d5b4;
case 0x50d5b7:c.instructions+=3;goto B50d5b7;
case 0x50d5ba:c.instructions+=2;goto B50d5ba;
case 0x50d5bc:c.instructions+=1;goto B50d5bc;
case 0x50d5be:goto L50d5be;
case 0x50d5bf:c.instructions+=1;goto B50d5bf;
case 0x50d5c4:goto L50d5c4;
case 0x50d5c5:goto L50d5c5;
case 0x50d5d0:goto L50d5d0;
case 0x50d5d2:c.instructions+=3;goto B50d5d2;
case 0x50d5d5:c.instructions+=2;goto B50d5d5;
case 0x50d5d6:c.instructions+=1;goto B50d5d6;
case 0x50d5db:goto L50d5db;
case 0x50d5de:c.instructions+=2;goto B50d5de;
case 0x50d5df:c.instructions+=1;goto B50d5df;
case 0x50d5e4:goto L50d5e4;
case 0x50d5e7:c.instructions+=2;goto B50d5e7;
case 0x50d5e8:c.instructions+=1;goto B50d5e8;
case 0x50d5ed:goto L50d5ed;
case 0x50d5f0:c.instructions+=2;goto B50d5f0;
case 0x50d5f1:c.instructions+=1;goto B50d5f1;
case 0x50d5f6:goto L50d5f6;
case 0x50d5f9:c.instructions+=3;goto B50d5f9;
case 0x50d5fc:c.instructions+=2;goto B50d5fc;
case 0x50d5fe:c.instructions+=1;goto B50d5fe;
case 0x50d600:goto L50d600;
case 0x50d601:c.instructions+=1;goto B50d601;
case 0x50d606:goto L50d606;
case 0x50d607:goto L50d607;
case 0x50d610:goto L50d610;
case 0x50d612:c.instructions+=3;goto B50d612;
case 0x50d615:c.instructions+=2;goto B50d615;
case 0x50d616:c.instructions+=1;goto B50d616;
case 0x50d61b:goto L50d61b;
case 0x50d61e:c.instructions+=2;goto B50d61e;
case 0x50d61f:c.instructions+=1;goto B50d61f;
case 0x50d624:goto L50d624;
case 0x50d627:c.instructions+=2;goto B50d627;
case 0x50d628:c.instructions+=1;goto B50d628;
case 0x50d62d:goto L50d62d;
case 0x50d630:c.instructions+=2;goto B50d630;
case 0x50d631:c.instructions+=1;goto B50d631;
case 0x50d636:goto L50d636;
case 0x50d639:c.instructions+=3;goto B50d639;
case 0x50d63c:c.instructions+=2;goto B50d63c;
case 0x50d63e:c.instructions+=1;goto B50d63e;
case 0x50d640:goto L50d640;
case 0x50d641:c.instructions+=1;goto B50d641;
case 0x50d646:goto L50d646;
case 0x50d647:goto L50d647;
case 0x50d650:goto L50d650;
case 0x50d652:c.instructions+=3;goto B50d652;
case 0x50d655:c.instructions+=2;goto B50d655;
case 0x50d656:c.instructions+=1;goto B50d656;
case 0x50d65b:goto L50d65b;
case 0x50d65e:c.instructions+=2;goto B50d65e;
case 0x50d65f:c.instructions+=1;goto B50d65f;
case 0x50d664:goto L50d664;
case 0x50d667:c.instructions+=2;goto B50d667;
case 0x50d668:c.instructions+=1;goto B50d668;
case 0x50d66d:goto L50d66d;
case 0x50d670:c.instructions+=2;goto B50d670;
case 0x50d671:c.instructions+=1;goto B50d671;
case 0x50d676:goto L50d676;
case 0x50d679:c.instructions+=3;goto B50d679;
case 0x50d67c:c.instructions+=2;goto B50d67c;
case 0x50d67e:c.instructions+=1;goto B50d67e;
case 0x50d680:goto L50d680;
case 0x50d681:c.instructions+=1;goto B50d681;
case 0x50d686:goto L50d686;
case 0x50d689:goto L50d689;
case 0x50d68c:c.instructions+=2;goto B50d68c;
case 0x50d68d:c.instructions+=1;goto B50d68d;
case 0x50d692:goto L50d692;
case 0x50d693:c.instructions+=1;goto B50d693;
case 0x50d6a0:goto L50d6a0;
case 0x50d6a2:c.instructions+=3;goto B50d6a2;
case 0x50d6a5:c.instructions+=2;goto B50d6a5;
case 0x50d6a6:c.instructions+=1;goto B50d6a6;
case 0x50d6ab:goto L50d6ab;
case 0x50d6ae:c.instructions+=2;goto B50d6ae;
case 0x50d6af:c.instructions+=1;goto B50d6af;
case 0x50d6b4:goto L50d6b4;
case 0x50d6b7:c.instructions+=2;goto B50d6b7;
case 0x50d6b8:c.instructions+=1;goto B50d6b8;
case 0x50d6bd:goto L50d6bd;
case 0x50d6c0:c.instructions+=2;goto B50d6c0;
case 0x50d6c1:c.instructions+=1;goto B50d6c1;
case 0x50d6c6:goto L50d6c6;
case 0x50d6c9:c.instructions+=3;goto B50d6c9;
case 0x50d6cc:c.instructions+=2;goto B50d6cc;
case 0x50d6ce:c.instructions+=1;goto B50d6ce;
case 0x50d6d0:goto L50d6d0;
case 0x50d6d1:c.instructions+=1;goto B50d6d1;
case 0x50d6d6:goto L50d6d6;
case 0x50d6d9:goto L50d6d9;
case 0x50d6dc:c.instructions+=2;goto B50d6dc;
case 0x50d6dd:c.instructions+=1;goto B50d6dd;
case 0x50d6e2:goto L50d6e2;
case 0x50d6e3:c.instructions+=1;goto B50d6e3;
case 0x50d6f0:goto L50d6f0;
case 0x50d6f4:c.instructions+=3;goto B50d6f4;
case 0x50d6f6:c.instructions+=2;goto B50d6f6;
case 0x50d6f9:c.instructions+=1;goto B50d6f9;
case 0x50d6fb:goto L50d6fb;
case 0x50d6fc:c.instructions+=1;goto B50d6fc;
case 0x50d6fe:goto L50d6fe;
case 0x50d704:c.instructions+=5;goto B50d704;
case 0x50d707:c.instructions+=4;goto B50d707;
case 0x50d709:c.instructions+=3;goto B50d709;
case 0x50d70b:c.instructions+=2;goto B50d70b;
case 0x50d70e:c.instructions+=1;goto B50d70e;
case 0x50d710:goto L50d710;
case 0x50d715:c.instructions+=1;goto B50d715;
case 0x50d718:goto L50d718;
case 0x50d71e:c.instructions+=5;goto B50d71e;
case 0x50d721:c.instructions+=4;goto B50d721;
case 0x50d723:c.instructions+=3;goto B50d723;
case 0x50d725:c.instructions+=2;goto B50d725;
case 0x50d728:c.instructions+=1;goto B50d728;
case 0x50d72a:goto L50d72a;
case 0x50d72f:c.instructions+=1;goto B50d72f;
case 0x50d732:goto L50d732;
case 0x50d734:goto L50d734;
case 0x50d740:goto L50d740;
case 0x50d741:c.instructions+=4;goto B50d741;
case 0x50d743:c.instructions+=3;goto B50d743;
case 0x50d746:c.instructions+=2;goto B50d746;
case 0x50d747:c.instructions+=1;goto B50d747;
case 0x50d74c:goto L50d74c;
case 0x50d74f:c.instructions+=2;goto B50d74f;
case 0x50d750:c.instructions+=1;goto B50d750;
case 0x50d755:goto L50d755;
case 0x50d758:c.instructions+=2;goto B50d758;
case 0x50d759:c.instructions+=1;goto B50d759;
case 0x50d75e:goto L50d75e;
case 0x50d761:c.instructions+=4;goto B50d761;
case 0x50d764:c.instructions+=3;goto B50d764;
case 0x50d767:c.instructions+=2;goto B50d767;
case 0x50d769:c.instructions+=1;goto B50d769;
case 0x50d76c:goto L50d76c;
case 0x50d76f:c.instructions+=2;goto B50d76f;
case 0x50d771:c.instructions+=1;goto B50d771;
case 0x50d773:goto L50d773;
case 0x50d774:c.instructions+=1;goto B50d774;
case 0x50d779:goto L50d779;
case 0x50d77c:goto L50d77c;
case 0x50d77d:c.instructions+=1;goto B50d77d;
case 0x50d780:goto L50d780;
case 0x50d781:c.instructions+=4;goto B50d781;
case 0x50d783:c.instructions+=3;goto B50d783;
case 0x50d786:c.instructions+=2;goto B50d786;
case 0x50d787:c.instructions+=1;goto B50d787;
case 0x50d78c:goto L50d78c;
case 0x50d78f:c.instructions+=2;goto B50d78f;
case 0x50d790:c.instructions+=1;goto B50d790;
case 0x50d795:goto L50d795;
case 0x50d798:c.instructions+=2;goto B50d798;
case 0x50d799:c.instructions+=1;goto B50d799;
case 0x50d79e:goto L50d79e;
case 0x50d7a1:c.instructions+=4;goto B50d7a1;
case 0x50d7a4:c.instructions+=3;goto B50d7a4;
case 0x50d7a7:c.instructions+=2;goto B50d7a7;
case 0x50d7a9:c.instructions+=1;goto B50d7a9;
case 0x50d7ac:goto L50d7ac;
case 0x50d7af:c.instructions+=2;goto B50d7af;
case 0x50d7b1:c.instructions+=1;goto B50d7b1;
case 0x50d7b3:goto L50d7b3;
case 0x50d7b4:c.instructions+=1;goto B50d7b4;
case 0x50d7b9:goto L50d7b9;
case 0x50d7bc:goto L50d7bc;
case 0x50d7bd:c.instructions+=1;goto B50d7bd;
case 0x50d7c0:goto L50d7c0;
case 0x50d7c4:c.instructions+=1;goto B50d7c4;
case 0x50d7d0:goto L50d7d0;
case 0x50d7d4:c.instructions+=1;goto B50d7d4;
case 0x50d7e0:goto L50d7e0;
case 0x50d7e4:c.instructions+=5;goto B50d7e4;
case 0x50d7e9:c.instructions+=4;goto B50d7e9;
case 0x50d7ea:c.instructions+=3;goto B50d7ea;
case 0x50d7f0:c.instructions+=2;goto B50d7f0;
case 0x50d7f1:c.instructions+=1;goto B50d7f1;
case 0x50d7f6:goto L50d7f6;
case 0x50d7f9:c.instructions+=1;goto B50d7f9;
case 0x50d800:goto L50d800;
case 0x50d804:c.instructions+=6;goto B50d804;
case 0x50d806:c.instructions+=5;goto B50d806;
case 0x50d80c:c.instructions+=4;goto B50d80c;
case 0x50d80f:c.instructions+=3;goto B50d80f;
case 0x50d810:c.instructions+=2;goto B50d810;
case 0x50d813:c.instructions+=1;goto B50d813;
case 0x50d820:goto L50d820;
case 0x50d824:c.instructions+=3;goto B50d824;
case 0x50d826:c.instructions+=2;goto B50d826;
case 0x50d82a:c.instructions+=1;goto B50d82a;
case 0x50d82c:goto L50d82c;
case 0x50d82f:c.instructions+=1;goto B50d82f;
case 0x50d831:goto L50d831;
case 0x50d834:c.instructions+=2;goto B50d834;
case 0x50d835:c.instructions+=1;goto B50d835;
case 0x50d83a:goto L50d83a;
case 0x50d83d:c.instructions+=1;goto B50d83d;
case 0x50d840:goto L50d840;
case 0x50d843:c.instructions+=1;goto B50d843;
case 0x50d845:goto L50d845;
case 0x50d848:c.instructions+=2;goto B50d848;
case 0x50d849:c.instructions+=1;goto B50d849;
case 0x50d84e:goto L50d84e;
case 0x50d851:c.instructions+=1;goto B50d851;
case 0x50d854:goto L50d854;
case 0x50d857:c.instructions+=1;goto B50d857;
case 0x50d859:goto L50d859;
case 0x50d85c:c.instructions+=2;goto B50d85c;
case 0x50d85d:c.instructions+=1;goto B50d85d;
case 0x50d862:goto L50d862;
case 0x50d865:c.instructions+=1;goto B50d865;
case 0x50d868:goto L50d868;
case 0x50d86b:c.instructions+=1;goto B50d86b;
case 0x50d86d:goto L50d86d;
case 0x50d870:c.instructions+=2;goto B50d870;
case 0x50d871:c.instructions+=1;goto B50d871;
case 0x50d876:goto L50d876;
case 0x50d877:goto L50d877;
case 0x50d880:goto L50d880;
case 0x50d884:c.instructions+=5;goto B50d884;
case 0x50d886:c.instructions+=4;goto B50d886;
case 0x50d888:c.instructions+=3;goto B50d888;
case 0x50d88b:c.instructions+=2;goto B50d88b;
case 0x50d88c:c.instructions+=1;goto B50d88c;
case 0x50d88e:goto L50d88e;
case 0x50d893:goto L50d893;
case 0x50d896:c.instructions+=2;goto B50d896;
case 0x50d897:c.instructions+=1;goto B50d897;
case 0x50d89c:goto L50d89c;
case 0x50d89f:c.instructions+=2;goto B50d89f;
case 0x50d8a0:c.instructions+=1;goto B50d8a0;
case 0x50d8a5:goto L50d8a5;
case 0x50d8a8:c.instructions+=1;goto B50d8a8;
case 0x50d8ab:goto L50d8ab;
case 0x50d8b0:goto L50d8b0;
case 0x50d8b3:c.instructions+=2;goto B50d8b3;
case 0x50d8b4:c.instructions+=1;goto B50d8b4;
case 0x50d8b9:goto L50d8b9;
case 0x50d8bc:c.instructions+=2;goto B50d8bc;
case 0x50d8bd:c.instructions+=1;goto B50d8bd;
case 0x50d8c2:goto L50d8c2;
case 0x50d8c5:c.instructions+=1;goto B50d8c5;
case 0x50d8d0:goto L50d8d0;
case 0x50d8d4:c.instructions+=13;goto B50d8d4;
case 0x50d8da:c.instructions+=12;goto B50d8da;
case 0x50d8de:c.instructions+=11;goto B50d8de;
case 0x50d8e0:c.instructions+=10;goto B50d8e0;
case 0x50d8e4:c.instructions+=9;goto B50d8e4;
case 0x50d8e8:c.instructions+=8;goto B50d8e8;
case 0x50d8ea:c.instructions+=7;goto B50d8ea;
case 0x50d8ee:c.instructions+=6;goto B50d8ee;
case 0x50d8f0:c.instructions+=5;goto B50d8f0;
case 0x50d8f4:c.instructions+=4;goto B50d8f4;
case 0x50d8f8:c.instructions+=3;goto B50d8f8;
case 0x50d8fa:c.instructions+=2;goto B50d8fa;
case 0x50d8fd:c.instructions+=1;goto B50d8fd;
case 0x50d8ff:goto L50d8ff;
case 0x50d903:c.instructions+=4;goto B50d903;
case 0x50d907:c.instructions+=3;goto B50d907;
case 0x50d909:c.instructions+=2;goto B50d909;
case 0x50d90c:c.instructions+=1;goto B50d90c;
case 0x50d90e:goto L50d90e;
case 0x50d912:c.instructions+=4;goto B50d912;
case 0x50d916:c.instructions+=3;goto B50d916;
case 0x50d918:c.instructions+=2;goto B50d918;
case 0x50d91b:c.instructions+=1;goto B50d91b;
case 0x50d91d:goto L50d91d;
case 0x50d921:c.instructions+=5;goto B50d921;
case 0x50d925:c.instructions+=4;goto B50d925;
case 0x50d929:c.instructions+=3;goto B50d929;
case 0x50d92b:c.instructions+=2;goto B50d92b;
case 0x50d92e:c.instructions+=1;goto B50d92e;
case 0x50d930:goto L50d930;
case 0x50d934:c.instructions+=3;goto B50d934;
case 0x50d938:c.instructions+=2;goto B50d938;
case 0x50d93c:c.instructions+=1;goto B50d93c;
case 0x50d93d:goto L50d93d;
case 0x50d941:c.instructions+=4;goto B50d941;
case 0x50d945:c.instructions+=3;goto B50d945;
case 0x50d947:c.instructions+=2;goto B50d947;
case 0x50d94a:c.instructions+=1;goto B50d94a;
case 0x50d94c:goto L50d94c;
case 0x50d950:c.instructions+=5;goto B50d950;
case 0x50d954:c.instructions+=4;goto B50d954;
case 0x50d958:c.instructions+=3;goto B50d958;
case 0x50d95a:c.instructions+=2;goto B50d95a;
case 0x50d95d:c.instructions+=1;goto B50d95d;
case 0x50d95f:goto L50d95f;
case 0x50d963:c.instructions+=3;goto B50d963;
case 0x50d967:c.instructions+=2;goto B50d967;
case 0x50d96b:c.instructions+=1;goto B50d96b;
case 0x50d96c:goto L50d96c;
case 0x50d972:c.instructions+=1;goto B50d972;
case 0x50d973:goto L50d973;
case 0x50d979:c.instructions+=1;goto B50d979;
case 0x50d980:goto L50d980;
case 0x50d983:c.instructions+=2;goto B50d983;
case 0x50d985:c.instructions+=1;goto B50d985;
case 0x50d987:goto L50d987;
case 0x50d98b:c.instructions+=3;goto B50d98b;
case 0x50d98c:c.instructions+=2;goto B50d98c;
case 0x50d98f:c.instructions+=1;goto B50d98f;
case 0x50d991:goto L50d991;
case 0x50d994:c.instructions+=12;goto B50d994;
case 0x50d996:c.instructions+=11;goto B50d996;
case 0x50d997:c.instructions+=10;goto B50d997;
case 0x50d99b:c.instructions+=9;goto B50d99b;
case 0x50d99c:c.instructions+=8;goto B50d99c;
case 0x50d9a0:c.instructions+=7;goto B50d9a0;
case 0x50d9a1:c.instructions+=6;goto B50d9a1;
case 0x50d9a2:c.instructions+=5;goto B50d9a2;
case 0x50d9a6:c.instructions+=4;goto B50d9a6;
case 0x50d9a7:c.instructions+=3;goto B50d9a7;
case 0x50d9a8:c.instructions+=2;goto B50d9a8;
case 0x50d9aa:c.instructions+=1;goto B50d9aa;
case 0x50d9ad:goto L50d9ad;
case 0x50d9ae:goto L50d9ae;
case 0x50d9af:goto L50d9af;
case 0x50d9c0:goto L50d9c0;
case 0x50d9c6:c.instructions+=7;goto B50d9c6;
case 0x50d9cc:c.instructions+=6;goto B50d9cc;
case 0x50d9d2:c.instructions+=5;goto B50d9d2;
case 0x50d9d4:c.instructions+=4;goto B50d9d4;
case 0x50d9d8:c.instructions+=3;goto B50d9d8;
case 0x50d9da:c.instructions+=2;goto B50d9da;
case 0x50d9dd:c.instructions+=1;goto B50d9dd;
case 0x50d9df:goto L50d9df;
case 0x50d9e5:c.instructions+=4;goto B50d9e5;
case 0x50d9e9:c.instructions+=3;goto B50d9e9;
case 0x50d9eb:c.instructions+=2;goto B50d9eb;
case 0x50d9ee:c.instructions+=1;goto B50d9ee;
case 0x50d9f0:goto L50d9f0;
case 0x50d9f4:c.instructions+=3;goto B50d9f4;
case 0x50d9f7:c.instructions+=2;goto B50d9f7;
case 0x50d9f8:c.instructions+=1;goto B50d9f8;
case 0x50d9fd:goto L50d9fd;
case 0x50da00:c.instructions+=1;goto B50da00;
case 0x50da03:goto L50da03;
case 0x50da05:goto L50da05;
case 0x50da09:c.instructions+=3;goto B50da09;
case 0x50da0c:c.instructions+=2;goto B50da0c;
case 0x50da0d:c.instructions+=1;goto B50da0d;
case 0x50da12:goto L50da12;
case 0x50da13:c.instructions+=1;goto B50da13;
case 0x50da20:goto L50da20;
case 0x50da24:c.instructions+=8;goto B50da24;
case 0x50da28:c.instructions+=7;goto B50da28;
case 0x50da2e:c.instructions+=6;goto B50da2e;
case 0x50da32:c.instructions+=5;goto B50da32;
case 0x50da38:c.instructions+=4;goto B50da38;
case 0x50da3c:c.instructions+=3;goto B50da3c;
case 0x50da42:c.instructions+=2;goto B50da42;
case 0x50da48:c.instructions+=1;goto B50da48;
case 0x50da50:goto L50da50;
case 0x50da51:c.instructions+=4;goto B50da51;
case 0x50da53:c.instructions+=3;goto B50da53;
case 0x50da56:c.instructions+=2;goto B50da56;
case 0x50da58:c.instructions+=1;goto B50da58;
case 0x50da5a:goto L50da5a;
case 0x50da5d:c.instructions+=1;goto B50da5d;
case 0x50da5f:goto L50da5f;
case 0x50da61:goto L50da61;
case 0x50da62:c.instructions+=3;goto B50da62;
case 0x50da68:c.instructions+=2;goto B50da68;
case 0x50da69:c.instructions+=1;goto B50da69;
case 0x50da6e:goto L50da6e;
case 0x50da71:c.instructions+=3;goto B50da71;
case 0x50da74:c.instructions+=2;goto B50da74;
case 0x50da76:c.instructions+=1;goto B50da76;
case 0x50da78:goto L50da78;
case 0x50da7b:c.instructions+=4;goto B50da7b;
case 0x50da81:c.instructions+=3;goto B50da81;
case 0x50da82:c.instructions+=2;goto B50da82;
case 0x50da83:c.instructions+=1;goto B50da83;
case 0x50da88:goto L50da88;
case 0x50da8b:c.instructions+=2;goto B50da8b;
case 0x50da8c:c.instructions+=1;goto B50da8c;
case 0x50da8d:goto L50da8d;
case 0x50da93:c.instructions+=4;goto B50da93;
case 0x50da95:c.instructions+=3;goto B50da95;
case 0x50da96:c.instructions+=2;goto B50da96;
case 0x50da97:c.instructions+=1;goto B50da97;
case 0x50da9c:goto L50da9c;
case 0x50da9f:c.instructions+=2;goto B50da9f;
case 0x50daa0:c.instructions+=1;goto B50daa0;
case 0x50dab0:goto L50dab0;
case 0x50dab3:c.instructions+=5;goto B50dab3;
case 0x50dab4:c.instructions+=4;goto B50dab4;
case 0x50dab8:c.instructions+=3;goto B50dab8;
case 0x50dabb:c.instructions+=2;goto B50dabb;
case 0x50dabc:c.instructions+=1;goto B50dabc;
case 0x50dabf:goto L50dabf;
case 0x50dac1:c.instructions+=2;goto B50dac1;
case 0x50dac4:c.instructions+=1;goto B50dac4;
case 0x50dac6:goto L50dac6;
case 0x50dac9:c.instructions+=1;goto B50dac9;
case 0x50dacb:goto L50dacb;
case 0x50dace:c.instructions+=3;goto B50dace;
case 0x50dad4:c.instructions+=2;goto B50dad4;
case 0x50dad7:c.instructions+=1;goto B50dad7;
case 0x50dada:goto L50dada;
case 0x50dadb:c.instructions+=1;goto B50dadb;
case 0x50dae0:goto L50dae0;
case 0x50dae4:c.instructions+=8;goto B50dae4;
case 0x50dae8:c.instructions+=7;goto B50dae8;
case 0x50daee:c.instructions+=6;goto B50daee;
case 0x50daf2:c.instructions+=5;goto B50daf2;
case 0x50daf5:c.instructions+=4;goto B50daf5;
case 0x50daf9:c.instructions+=3;goto B50daf9;
case 0x50daff:c.instructions+=2;goto B50daff;
case 0x50db05:c.instructions+=1;goto B50db05;
case 0x50db10:goto L50db10;
case 0x50db11:c.instructions+=6;goto B50db11;
case 0x50db13:c.instructions+=5;goto B50db13;
case 0x50db16:c.instructions+=4;goto B50db16;
case 0x50db17:c.instructions+=3;goto B50db17;
case 0x50db1b:c.instructions+=2;goto B50db1b;
case 0x50db1d:c.instructions+=1;goto B50db1d;
case 0x50db1f:goto L50db1f;
case 0x50db21:c.instructions+=1;goto B50db21;
case 0x50db23:goto L50db23;
case 0x50db25:c.instructions+=1;goto B50db25;
case 0x50db28:goto L50db28;
case 0x50db2b:c.instructions+=5;goto B50db2b;
case 0x50db2e:c.instructions+=4;goto B50db2e;
case 0x50db30:c.instructions+=3;goto B50db30;
case 0x50db31:c.instructions+=2;goto B50db31;
case 0x50db33:c.instructions+=1;goto B50db33;
case 0x50db36:goto L50db36;
case 0x50db37:c.instructions+=2;goto B50db37;
case 0x50db38:c.instructions+=1;goto B50db38;
case 0x50db40:goto L50db40;
case 0x50db42:c.instructions+=11;goto B50db42;
case 0x50db44:c.instructions+=10;goto B50db44;
case 0x50db46:c.instructions+=9;goto B50db46;
case 0x50db49:c.instructions+=8;goto B50db49;
case 0x50db4c:c.instructions+=7;goto B50db4c;
case 0x50db4f:c.instructions+=6;goto B50db4f;
case 0x50db52:c.instructions+=5;goto B50db52;
case 0x50db55:c.instructions+=4;goto B50db55;
case 0x50db58:c.instructions+=3;goto B50db58;
case 0x50db5f:c.instructions+=2;goto B50db5f;
case 0x50db66:c.instructions+=1;goto B50db66;
case 0x50db70:goto L50db70;
case 0x50db73:c.instructions+=2;goto B50db73;
case 0x50db75:c.instructions+=1;goto B50db75;
case 0x50db77:goto L50db77;
case 0x50db78:c.instructions+=1;goto B50db78;
case 0x50db7d:goto L50db7d;
case 0x50db7e:goto L50db7e;
case 0x50db80:goto L50db80;
case 0x50db81:c.instructions+=4;goto B50db81;
case 0x50db83:c.instructions+=3;goto B50db83;
case 0x50db86:c.instructions+=2;goto B50db86;
case 0x50db88:c.instructions+=1;goto B50db88;
case 0x50db8a:goto L50db8a;
case 0x50db8e:c.instructions+=3;goto B50db8e;
case 0x50db8f:c.instructions+=2;goto B50db8f;
case 0x50db92:c.instructions+=1;goto B50db92;
case 0x50db97:goto L50db97;
case 0x50db9a:c.instructions+=7;goto B50db9a;
case 0x50db9c:c.instructions+=6;goto B50db9c;
case 0x50db9e:c.instructions+=5;goto B50db9e;
case 0x50dba1:c.instructions+=4;goto B50dba1;
case 0x50dba4:c.instructions+=3;goto B50dba4;
case 0x50dba6:c.instructions+=2;goto B50dba6;
case 0x50dba7:c.instructions+=1;goto B50dba7;
case 0x50dbaa:goto L50dbaa;
case 0x50dbac:c.instructions+=2;goto B50dbac;
case 0x50dbad:c.instructions+=1;goto B50dbad;
case 0x50dbb0:goto L50dbb0;
case 0x50dbb4:c.instructions+=13;goto B50dbb4;
case 0x50dbb8:c.instructions+=12;goto B50dbb8;
case 0x50dbb9:c.instructions+=11;goto B50dbb9;
case 0x50dbbb:c.instructions+=10;goto B50dbbb;
case 0x50dbbf:c.instructions+=9;goto B50dbbf;
case 0x50dbc1:c.instructions+=8;goto B50dbc1;
case 0x50dbc5:c.instructions+=7;goto B50dbc5;
case 0x50dbc7:c.instructions+=6;goto B50dbc7;
case 0x50dbca:c.instructions+=5;goto B50dbca;
case 0x50dbcb:c.instructions+=4;goto B50dbcb;
case 0x50dbce:c.instructions+=3;goto B50dbce;
case 0x50dbcf:c.instructions+=2;goto B50dbcf;
case 0x50dbd2:c.instructions+=1;goto B50dbd2;
case 0x50dbd7:goto L50dbd7;
case 0x50dbdb:c.instructions+=4;goto B50dbdb;
case 0x50dbde:c.instructions+=3;goto B50dbde;
case 0x50dbe1:c.instructions+=2;goto B50dbe1;
case 0x50dbe2:c.instructions+=1;goto B50dbe2;
case 0x50dbf0:goto L50dbf0;
case 0x50dbf4:c.instructions+=10;goto B50dbf4;
case 0x50dbf5:c.instructions+=9;goto B50dbf5;
case 0x50dbf7:c.instructions+=8;goto B50dbf7;
case 0x50dbfa:c.instructions+=7;goto B50dbfa;
case 0x50dbff:c.instructions+=6;goto B50dbff;
case 0x50dc00:c.instructions+=5;goto B50dc00;
case 0x50dc03:c.instructions+=4;goto B50dc03;
case 0x50dc05:c.instructions+=3;goto B50dc05;
case 0x50dc08:c.instructions+=2;goto B50dc08;
case 0x50dc0a:c.instructions+=1;goto B50dc0a;
case 0x50dc0c:goto L50dc0c;
case 0x50dc0f:c.instructions+=13;goto B50dc0f;
case 0x50dc12:c.instructions+=12;goto B50dc12;
case 0x50dc14:c.instructions+=11;goto B50dc14;
case 0x50dc17:c.instructions+=10;goto B50dc17;
case 0x50dc1a:c.instructions+=9;goto B50dc1a;
case 0x50dc1d:c.instructions+=8;goto B50dc1d;
case 0x50dc21:c.instructions+=7;goto B50dc21;
case 0x50dc23:c.instructions+=6;goto B50dc23;
case 0x50dc24:c.instructions+=5;goto B50dc24;
case 0x50dc27:c.instructions+=4;goto B50dc27;
case 0x50dc2a:c.instructions+=3;goto B50dc2a;
case 0x50dc2c:c.instructions+=2;goto B50dc2c;
case 0x50dc2e:c.instructions+=1;goto B50dc2e;
case 0x50dc31:goto L50dc31;
case 0x50dc33:goto L50dc33;
case 0x50dc35:c.instructions+=1;goto B50dc35;
case 0x50dc38:goto L50dc38;
case 0x50dc3a:goto L50dc3a;
case 0x50dc3d:c.instructions+=11;goto B50dc3d;
case 0x50dc40:c.instructions+=10;goto B50dc40;
case 0x50dc43:c.instructions+=9;goto B50dc43;
case 0x50dc49:c.instructions+=8;goto B50dc49;
case 0x50dc4c:c.instructions+=7;goto B50dc4c;
case 0x50dc4f:c.instructions+=6;goto B50dc4f;
case 0x50dc50:c.instructions+=5;goto B50dc50;
case 0x50dc53:c.instructions+=4;goto B50dc53;
case 0x50dc55:c.instructions+=3;goto B50dc55;
case 0x50dc58:c.instructions+=2;goto B50dc58;
case 0x50dc5b:c.instructions+=1;goto B50dc5b;
case 0x50dc5c:goto L50dc5c;
case 0x50dc5d:c.instructions+=2;goto B50dc5d;
case 0x50dc5e:c.instructions+=1;goto B50dc5e;
case 0x50dc70:goto L50dc70;
case 0x50dc74:c.instructions+=4;goto B50dc74;
case 0x50dc77:c.instructions+=3;goto B50dc77;
case 0x50dc79:c.instructions+=2;goto B50dc79;
case 0x50dc7c:c.instructions+=1;goto B50dc7c;
case 0x50dc7e:goto L50dc7e;
case 0x50dc80:goto L50dc80;
case 0x50dc82:c.instructions+=1;goto B50dc82;
case 0x50dc84:goto L50dc84;
case 0x50dc88:c.instructions+=1;goto B50dc88;
case 0x50dc8a:goto L50dc8a;
case 0x50dc8e:c.instructions+=1;goto B50dc8e;
case 0x50dc90:goto L50dc90;
case 0x50dc92:goto L50dc92;
case 0x50dc96:c.instructions+=3;goto B50dc96;
case 0x50dc99:c.instructions+=2;goto B50dc99;
case 0x50dc9c:c.instructions+=1;goto B50dc9c;
case 0x50dc9e:goto L50dc9e;
case 0x50dcb0:goto L50dcb0;
case 0x50dcb4:c.instructions+=2;goto B50dcb4;
case 0x50dcb8:c.instructions+=1;goto B50dcb8;
case 0x50dcba:goto L50dcba;
case 0x50dcc0:goto L50dcc0;
case 0x50dcc3:c.instructions+=2;goto B50dcc3;
case 0x50dcc7:c.instructions+=1;goto B50dcc7;
case 0x50dcc9:goto L50dcc9;
case 0x50dcd0:goto L50dcd0;
case 0x50dcd3:c.instructions+=6;goto B50dcd3;
case 0x50dcd7:c.instructions+=5;goto B50dcd7;
case 0x50dcd8:c.instructions+=4;goto B50dcd8;
case 0x50dcda:c.instructions+=3;goto B50dcda;
case 0x50dcdc:c.instructions+=2;goto B50dcdc;
case 0x50dce0:c.instructions+=1;goto B50dce0;
case 0x50dce6:goto L50dce6;
case 0x50dce7:c.instructions+=5;goto B50dce7;
case 0x50dceb:c.instructions+=4;goto B50dceb;
case 0x50dcec:c.instructions+=3;goto B50dcec;
case 0x50dcf0:c.instructions+=2;goto B50dcf0;
case 0x50dcf1:c.instructions+=1;goto B50dcf1;
case 0x50dcf5:goto L50dcf5;
case 0x50dcf9:c.instructions+=41;goto B50dcf9;
case 0x50dcfd:c.instructions+=40;goto B50dcfd;
case 0x50dcff:c.instructions+=39;goto B50dcff;
case 0x50dd00:c.instructions+=38;goto B50dd00;
case 0x50dd06:c.instructions+=37;goto B50dd06;
case 0x50dd0e:c.instructions+=36;goto B50dd0e;
case 0x50dd14:c.instructions+=35;goto B50dd14;
case 0x50dd18:c.instructions+=34;goto B50dd18;
case 0x50dd20:c.instructions+=33;goto B50dd20;
case 0x50dd22:c.instructions+=32;goto B50dd22;
case 0x50dd2a:c.instructions+=31;goto B50dd2a;
case 0x50dd2c:c.instructions+=30;goto B50dd2c;
case 0x50dd34:c.instructions+=29;goto B50dd34;
case 0x50dd3a:c.instructions+=28;goto B50dd3a;
case 0x50dd3e:c.instructions+=27;goto B50dd3e;
case 0x50dd46:c.instructions+=26;goto B50dd46;
case 0x50dd4e:c.instructions+=25;goto B50dd4e;
case 0x50dd50:c.instructions+=24;goto B50dd50;
case 0x50dd56:c.instructions+=23;goto B50dd56;
case 0x50dd5a:c.instructions+=22;goto B50dd5a;
case 0x50dd5c:c.instructions+=21;goto B50dd5c;
case 0x50dd62:c.instructions+=20;goto B50dd62;
case 0x50dd66:c.instructions+=19;goto B50dd66;
case 0x50dd69:c.instructions+=18;goto B50dd69;
case 0x50dd6f:c.instructions+=17;goto B50dd6f;
case 0x50dd73:c.instructions+=16;goto B50dd73;
case 0x50dd79:c.instructions+=15;goto B50dd79;
case 0x50dd7b:c.instructions+=14;goto B50dd7b;
case 0x50dd7f:c.instructions+=13;goto B50dd7f;
case 0x50dd82:c.instructions+=12;goto B50dd82;
case 0x50dd88:c.instructions+=11;goto B50dd88;
case 0x50dd8a:c.instructions+=10;goto B50dd8a;
case 0x50dd90:c.instructions+=9;goto B50dd90;
case 0x50dd94:c.instructions+=8;goto B50dd94;
case 0x50dd96:c.instructions+=7;goto B50dd96;
case 0x50dd99:c.instructions+=6;goto B50dd99;
case 0x50dd9f:c.instructions+=5;goto B50dd9f;
case 0x50dda3:c.instructions+=4;goto B50dda3;
case 0x50dda9:c.instructions+=3;goto B50dda9;
case 0x50ddab:c.instructions+=2;goto B50ddab;
case 0x50ddaf:c.instructions+=1;goto B50ddaf;
case 0x50ddb4:goto L50ddb4;
case 0x50ddb8:c.instructions+=5;goto B50ddb8;
case 0x50ddbb:c.instructions+=4;goto B50ddbb;
case 0x50ddbc:c.instructions+=3;goto B50ddbc;
case 0x50ddbe:c.instructions+=2;goto B50ddbe;
case 0x50ddc2:c.instructions+=1;goto B50ddc2;
case 0x50ddc8:goto L50ddc8;
case 0x50ddc9:c.instructions+=2;goto B50ddc9;
case 0x50ddca:c.instructions+=1;goto B50ddca;
case 0x50ddcb:goto L50ddcb;
case 0x50ddcc:c.instructions+=2;goto B50ddcc;
case 0x50ddcf:c.instructions+=1;goto B50ddcf;
case 0x50ddd0:goto L50ddd0;
case 0x50ddd2:c.instructions+=9;goto B50ddd2;
case 0x50ddd4:c.instructions+=8;goto B50ddd4;
case 0x50ddd7:c.instructions+=7;goto B50ddd7;
case 0x50ddda:c.instructions+=6;goto B50ddda;
case 0x50dddd:c.instructions+=5;goto B50dddd;
case 0x50dde0:c.instructions+=4;goto B50dde0;
case 0x50dde3:c.instructions+=3;goto B50dde3;
case 0x50dde6:c.instructions+=2;goto B50dde6;
case 0x50dde9:c.instructions+=1;goto B50dde9;
case 0x50ddf0:goto L50ddf0;
case 0x50ddf1:c.instructions+=4;goto B50ddf1;
case 0x50ddf3:c.instructions+=3;goto B50ddf3;
case 0x50ddf6:c.instructions+=2;goto B50ddf6;
case 0x50ddf7:c.instructions+=1;goto B50ddf7;
case 0x50ddfc:goto L50ddfc;
case 0x50ddff:c.instructions+=3;goto B50ddff;
case 0x50de06:c.instructions+=2;goto B50de06;
case 0x50de07:c.instructions+=1;goto B50de07;
case 0x50de10:goto L50de10;
case 0x50de16:c.instructions+=11;goto B50de16;
case 0x50de18:c.instructions+=10;goto B50de18;
case 0x50de1d:c.instructions+=9;goto B50de1d;
case 0x50de1e:c.instructions+=8;goto B50de1e;
case 0x50de22:c.instructions+=7;goto B50de22;
case 0x50de29:c.instructions+=6;goto B50de29;
case 0x50de2a:c.instructions+=5;goto B50de2a;
case 0x50de2b:c.instructions+=4;goto B50de2b;
case 0x50de2d:c.instructions+=3;goto B50de2d;
case 0x50de30:c.instructions+=2;goto B50de30;
case 0x50de31:c.instructions+=1;goto B50de31;
case 0x50de33:goto L50de33;
case 0x50de36:c.instructions+=3;goto B50de36;
case 0x50de39:c.instructions+=2;goto B50de39;
case 0x50de3a:c.instructions+=1;goto B50de3a;
case 0x50de3f:goto L50de3f;
case 0x50de42:c.instructions+=3;goto B50de42;
case 0x50de49:c.instructions+=2;goto B50de49;
case 0x50de4a:c.instructions+=1;goto B50de4a;
case 0x50de4f:goto L50de4f;
case 0x50de51:c.instructions+=5;goto B50de51;
case 0x50de54:c.instructions+=4;goto B50de54;
case 0x50de58:c.instructions+=3;goto B50de58;
case 0x50de5a:c.instructions+=2;goto B50de5a;
case 0x50de62:c.instructions+=1;goto B50de62;
case 0x50de64:goto L50de64;
case 0x50de69:c.instructions+=4;goto B50de69;
case 0x50de6a:c.instructions+=3;goto B50de6a;
case 0x50de6c:c.instructions+=2;goto B50de6c;
case 0x50de6d:c.instructions+=1;goto B50de6d;
case 0x50de72:goto L50de72;
case 0x50de74:goto L50de74;
case 0x50de76:goto L50de76;
case 0x50de79:goto L50de79;
case 0x50de7d:c.instructions+=6;goto B50de7d;
case 0x50de7e:c.instructions+=5;goto B50de7e;
case 0x50de7f:c.instructions+=4;goto B50de7f;
case 0x50de86:c.instructions+=3;goto B50de86;
case 0x50de87:c.instructions+=2;goto B50de87;
case 0x50de8a:c.instructions+=1;goto B50de8a;
case 0x50de90:goto L50de90;
case 0x50de91:c.instructions+=28;goto B50de91;
case 0x50de93:c.instructions+=27;goto B50de93;
case 0x50de96:c.instructions+=26;goto B50de96;
case 0x50de99:c.instructions+=25;goto B50de99;
case 0x50de9c:c.instructions+=24;goto B50de9c;
case 0x50de9f:c.instructions+=23;goto B50de9f;
case 0x50dea2:c.instructions+=22;goto B50dea2;
case 0x50dea5:c.instructions+=21;goto B50dea5;
case 0x50dea6:c.instructions+=20;goto B50dea6;
case 0x50dea7:c.instructions+=19;goto B50dea7;
case 0x50deab:c.instructions+=18;goto B50deab;
case 0x50deae:c.instructions+=17;goto B50deae;
case 0x50deaf:c.instructions+=16;goto B50deaf;
case 0x50deb2:c.instructions+=15;goto B50deb2;
case 0x50deb3:c.instructions+=14;goto B50deb3;
case 0x50deb6:c.instructions+=13;goto B50deb6;
case 0x50deb8:c.instructions+=12;goto B50deb8;
case 0x50debc:c.instructions+=11;goto B50debc;
case 0x50dec0:c.instructions+=10;goto B50dec0;
case 0x50dec2:c.instructions+=9;goto B50dec2;
case 0x50dec6:c.instructions+=8;goto B50dec6;
case 0x50decc:c.instructions+=7;goto B50decc;
case 0x50ded0:c.instructions+=6;goto B50ded0;
case 0x50ded4:c.instructions+=5;goto B50ded4;
case 0x50ded8:c.instructions+=4;goto B50ded8;
case 0x50dee0:c.instructions+=3;goto B50dee0;
case 0x50dee8:c.instructions+=2;goto B50dee8;
case 0x50def0:c.instructions+=1;goto B50def0;
case 0x50def2:goto L50def2;
case 0x50def5:c.instructions+=3;goto B50def5;
case 0x50def8:c.instructions+=2;goto B50def8;
case 0x50defa:c.instructions+=1;goto B50defa;
case 0x50df00:goto L50df00;
case 0x50df02:c.instructions+=10;goto B50df02;
case 0x50df05:c.instructions+=9;goto B50df05;
case 0x50df09:c.instructions+=8;goto B50df09;
case 0x50df0d:c.instructions+=7;goto B50df0d;
case 0x50df11:c.instructions+=6;goto B50df11;
case 0x50df15:c.instructions+=5;goto B50df15;
case 0x50df19:c.instructions+=4;goto B50df19;
case 0x50df1d:c.instructions+=3;goto B50df1d;
case 0x50df1f:c.instructions+=2;goto B50df1f;
case 0x50df22:c.instructions+=1;goto B50df22;
case 0x50df24:goto L50df24;
case 0x50df26:c.instructions+=7;goto B50df26;
case 0x50df28:c.instructions+=6;goto B50df28;
case 0x50df2a:c.instructions+=5;goto B50df2a;
case 0x50df2e:c.instructions+=4;goto B50df2e;
case 0x50df31:c.instructions+=3;goto B50df31;
case 0x50df35:c.instructions+=2;goto B50df35;
case 0x50df38:c.instructions+=1;goto B50df38;
case 0x50df3c:goto L50df3c;
case 0x50df3f:c.instructions+=2;goto B50df3f;
case 0x50df40:c.instructions+=1;goto B50df40;
case 0x50df42:goto L50df42;
case 0x50df46:c.instructions+=7;goto B50df46;
case 0x50df48:c.instructions+=6;goto B50df48;
case 0x50df4b:c.instructions+=5;goto B50df4b;
case 0x50df4d:c.instructions+=4;goto B50df4d;
case 0x50df51:c.instructions+=3;goto B50df51;
case 0x50df53:c.instructions+=2;goto B50df53;
case 0x50df56:c.instructions+=1;goto B50df56;
case 0x50df58:goto L50df58;
case 0x50df5a:c.instructions+=1;goto B50df5a;
case 0x50df5e:goto L50df5e;
case 0x50df62:c.instructions+=4;goto B50df62;
case 0x50df64:c.instructions+=3;goto B50df64;
case 0x50df66:c.instructions+=2;goto B50df66;
case 0x50df69:c.instructions+=1;goto B50df69;
case 0x50df6b:goto L50df6b;
case 0x50df6d:c.instructions+=1;goto B50df6d;
case 0x50df71:goto L50df71;
case 0x50df75:c.instructions+=12;goto B50df75;
case 0x50df77:c.instructions+=11;goto B50df77;
case 0x50df79:c.instructions+=10;goto B50df79;
case 0x50df7d:c.instructions+=9;goto B50df7d;
case 0x50df81:c.instructions+=8;goto B50df81;
case 0x50df85:c.instructions+=7;goto B50df85;
case 0x50df87:c.instructions+=6;goto B50df87;
case 0x50df8b:c.instructions+=5;goto B50df8b;
case 0x50df8f:c.instructions+=4;goto B50df8f;
case 0x50df91:c.instructions+=3;goto B50df91;
case 0x50df95:c.instructions+=2;goto B50df95;
case 0x50df99:c.instructions+=1;goto B50df99;
case 0x50df9f:goto L50df9f;
case 0x50dfa3:c.instructions+=8;goto B50dfa3;
case 0x50dfa7:c.instructions+=7;goto B50dfa7;
case 0x50dfaa:c.instructions+=6;goto B50dfaa;
case 0x50dfae:c.instructions+=5;goto B50dfae;
case 0x50dfb0:c.instructions+=4;goto B50dfb0;
case 0x50dfb2:c.instructions+=3;goto B50dfb2;
case 0x50dfb3:c.instructions+=2;goto B50dfb3;
case 0x50dfb5:c.instructions+=1;goto B50dfb5;
case 0x50dfbb:goto L50dfbb;
case 0x50dfbe:c.instructions+=14;goto B50dfbe;
case 0x50dfc0:c.instructions+=13;goto B50dfc0;
case 0x50dfc3:c.instructions+=12;goto B50dfc3;
case 0x50dfc7:c.instructions+=11;goto B50dfc7;
case 0x50dfc8:c.instructions+=10;goto B50dfc8;
case 0x50dfcc:c.instructions+=9;goto B50dfcc;
case 0x50dfcd:c.instructions+=8;goto B50dfcd;
case 0x50dfd0:c.instructions+=7;goto B50dfd0;
case 0x50dfd1:c.instructions+=6;goto B50dfd1;
case 0x50dfd4:c.instructions+=5;goto B50dfd4;
case 0x50dfd5:c.instructions+=4;goto B50dfd5;
case 0x50dfd9:c.instructions+=3;goto B50dfd9;
case 0x50dfda:c.instructions+=2;goto B50dfda;
case 0x50dfdb:c.instructions+=1;goto B50dfdb;
case 0x50dfe0:goto L50dfe0;
case 0x50dfe4:c.instructions+=11;goto B50dfe4;
case 0x50dfe5:c.instructions+=10;goto B50dfe5;
case 0x50dfe9:c.instructions+=9;goto B50dfe9;
case 0x50dfea:c.instructions+=8;goto B50dfea;
case 0x50dfeb:c.instructions+=7;goto B50dfeb;
case 0x50dfee:c.instructions+=6;goto B50dfee;
case 0x50dfef:c.instructions+=5;goto B50dfef;
case 0x50dff2:c.instructions+=4;goto B50dff2;
case 0x50dff6:c.instructions+=3;goto B50dff6;
case 0x50dff7:c.instructions+=2;goto B50dff7;
case 0x50dff8:c.instructions+=1;goto B50dff8;
case 0x50dffd:goto L50dffd;
default:missing_instruction(c.pc);}
B50d003:L50d003:{c.instructions+=1;NFSU2_TR(0x50d003);
w4(R+28,u32(0x8380d3ull));
}
B50d008:L50d008:{c.instructions+=1;NFSU2_TR(0x50d008);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L50d00a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50d008u);}goto L50d008;}
}
B50d00a:L50d00a:{c.instructions+=4;NFSU2_TR(0x50d00a);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B50d00c:{NFSU2_TR(0x50d00c);
w4(R+4,u32(0x6ull));
}
B50d011:{NFSU2_TR(0x50d011);
w4(R+0,u32(0xa0a0a0aull));
}
B50d016:{NFSU2_TR(0x50d016);
w4(R+28,u32(0x837ffbull));
}
B50d01b:L50d01b:{c.instructions+=1;NFSU2_TR(0x50d01b);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L50d01d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50d01bu);}goto L50d01b;}
}
B50d01d:L50d01d:{c.instructions+=4;NFSU2_TR(0x50d01d);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B50d01f:{NFSU2_TR(0x50d01f);
w4(R+4,u32(0x6ull));
}
B50d024:{NFSU2_TR(0x50d024);
w4(R+0,u32(0xa0a0a0aull));
}
B50d029:{NFSU2_TR(0x50d029);
w4(R+28,u32(0x838016ull));
}
B50d02e:L50d02e:{c.instructions+=1;NFSU2_TR(0x50d02e);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L50d030;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50d02eu);}goto L50d02e;}
}
B50d030:L50d030:{c.instructions+=4;NFSU2_TR(0x50d030);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B50d032:{NFSU2_TR(0x50d032);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B50d035:{NFSU2_TR(0x50d035);
w4(R+4,u32(0x6ull));
}
B50d03a:{NFSU2_TR(0x50d03a);
w4(R+28,u32(0x838109ull));
}
B50d03f:L50d03f:{c.instructions+=1;NFSU2_TR(0x50d03f);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L50d041;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50d03fu);}goto L50d03f;}
}
B50d041:L50d041:{c.instructions+=8;NFSU2_TR(0x50d041);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B50d043:{NFSU2_TR(0x50d043);
s1(0x838116,u8(0xeull));
}
B50d04a:{NFSU2_TR(0x50d04a);
s1(0x838117,u8(0xfull));
}
B50d051:{NFSU2_TR(0x50d051);
s1(0x838118,u8(0x10ull));
}
B50d058:{NFSU2_TR(0x50d058);
s1(0x838119,u8(0xdull));
}
B50d05f:{NFSU2_TR(0x50d05f);
w4(R+4,u32(0x6ull));
}
B50d064:{NFSU2_TR(0x50d064);
w4(R+0,u32(0x32323232ull));
}
B50d069:{NFSU2_TR(0x50d069);
w4(R+28,u32(0x83813full));
}
B50d06e:L50d06e:{c.instructions+=1;NFSU2_TR(0x50d06e);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L50d070;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50d06eu);}goto L50d06e;}
}
B50d070:L50d070:{c.instructions+=10;NFSU2_TR(0x50d070);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B50d072:{NFSU2_TR(0x50d072);
s1(0x838150,u8(0x31ull));
}
B50d079:{NFSU2_TR(0x50d079);
s1(0x838151,u8(0x33ull));
}
B50d080:{NFSU2_TR(0x50d080);
s1(0x838152,u8(0x34ull));
}
B50d087:{NFSU2_TR(0x50d087);
s1(0x838154,u8(0x35ull));
}
B50d08e:{NFSU2_TR(0x50d08e);
s1(0x838153,u8(0x36ull));
}
B50d095:{NFSU2_TR(0x50d095);
s1(0x838149,u8(0x26ull));
}
B50d09c:{NFSU2_TR(0x50d09c);
w4(R+4,u32(0x6ull));
}
B50d0a1:{NFSU2_TR(0x50d0a1);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B50d0a4:{NFSU2_TR(0x50d0a4);
w4(R+28,u32(0x83815aull));
}
B50d0a9:L50d0a9:{c.instructions+=1;NFSU2_TR(0x50d0a9);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L50d0ab;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50d0a9u);}goto L50d0a9;}
}
B50d0ab:L50d0ab:{c.instructions+=8;NFSU2_TR(0x50d0ab);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B50d0ad:{NFSU2_TR(0x50d0ad);
s1(0x838172,u8(0x3full));
}
B50d0b4:{NFSU2_TR(0x50d0b4);
s1(0x838173,u8(0x40ull));
}
B50d0bb:{NFSU2_TR(0x50d0bb);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B50d0be:{NFSU2_TR(0x50d0be);
w1(R+8,u8(0x41ull));
}
B50d0c0:{NFSU2_TR(0x50d0c0);
__builtin_memmove(gp(0x838174),(R+8),1);
}
B50d0c6:{NFSU2_TR(0x50d0c6);
w4(R+4,u32(0x6ull));
}
B50d0cb:{NFSU2_TR(0x50d0cb);
w4(R+28,u32(0x838175ull));
}
B50d0d0:L50d0d0:{c.instructions+=1;NFSU2_TR(0x50d0d0);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L50d0d2;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50d0d0u);}goto L50d0d0;}
}
B50d0d2:L50d0d2:{c.instructions+=7;NFSU2_TR(0x50d0d2);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B50d0d4:{NFSU2_TR(0x50d0d4);
s1(0x83818d,u8(0x3full));
}
B50d0db:{NFSU2_TR(0x50d0db);
s1(0x83818e,u8(0x40ull));
}
B50d0e2:{NFSU2_TR(0x50d0e2);
__builtin_memmove(gp(0x83818f),(R+8),1);
}
B50d0e8:{NFSU2_TR(0x50d0e8);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50d0eb:{NFSU2_TR(0x50d0eb);
w4(R+4,u32(0x6ull));
}
B50d0f0:{NFSU2_TR(0x50d0f0);
w4(R+28,u32(0x838190ull));
}
B50d0f5:L50d0f5:{c.instructions+=1;NFSU2_TR(0x50d0f5);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L50d0f7;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50d0f5u);}goto L50d0f5;}
}
B50d0f7:L50d0f7:{c.instructions+=7;NFSU2_TR(0x50d0f7);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B50d0f9:{NFSU2_TR(0x50d0f9);
s1(0x8381a8,u8(0x3full));
}
B50d100:{NFSU2_TR(0x50d100);
s1(0x8381a9,u8(0x40ull));
}
B50d107:{NFSU2_TR(0x50d107);
__builtin_memmove(gp(0x8381aa),(R+8),1);
}
B50d10d:{NFSU2_TR(0x50d10d);
w4(R+4,u32(0x6ull));
}
B50d112:{NFSU2_TR(0x50d112);
w4(R+0,u32(0x2020202ull));
}
B50d117:{NFSU2_TR(0x50d117);
w4(R+28,u32(0x8381abull));
}
B50d11c:L50d11c:{c.instructions+=1;NFSU2_TR(0x50d11c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L50d11e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50d11cu);}goto L50d11c;}
}
B50d11e:L50d11e:{c.instructions+=4;NFSU2_TR(0x50d11e);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B50d120:{NFSU2_TR(0x50d120);
w4(R+4,u32(0x6ull));
}
B50d125:{NFSU2_TR(0x50d125);
w4(R+0,u32(0x3030303ull));
}
B50d12a:{NFSU2_TR(0x50d12a);
w4(R+28,u32(0x8381c6ull));
}
B50d12f:L50d12f:{c.instructions+=1;NFSU2_TR(0x50d12f);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L50d131;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50d12fu);}goto L50d12f;}
}
B50d131:L50d131:{c.instructions+=4;NFSU2_TR(0x50d131);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B50d133:{NFSU2_TR(0x50d133);
w4(R+4,u32(0x6ull));
}
B50d138:{NFSU2_TR(0x50d138);
w4(R+0,u32(0x7070707ull));
}
B50d13d:{NFSU2_TR(0x50d13d);
w4(R+28,u32(0x8381e1ull));
}
B50d142:L50d142:{c.instructions+=1;NFSU2_TR(0x50d142);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L50d144;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50d142u);}goto L50d142;}
}
B50d144:L50d144:{c.instructions+=3;NFSU2_TR(0x50d144);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B50d146:{NFSU2_TR(0x50d146);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50d147:{NFSU2_TR(0x50d147);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d150:L50d150:{c.instructions+=6;NFSU2_TR(0x50d150);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d154:{NFSU2_TR(0x50d154);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50d158:{NFSU2_TR(0x50d158);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1bull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B50d15b:{NFSU2_TR(0x50d15b);
u8 U[13];
w4(U+0,u32(u32(u32(0x837fe0ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(s32(s8(r1(U+12)))));
}
B50d163:{NFSU2_TR(0x50d163);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50d166:{NFSU2_TR(0x50d166);
if(r1(R+518)){{goto L50d174;}}
}
B50d168:L50d168:{c.instructions+=3;NFSU2_TR(0x50d168);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B50d16e:{NFSU2_TR(0x50d16e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d16f:{NFSU2_TR(0x50d16f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d174ull));
TAIL_STATIC(0x458520u,458);
}
B50d174:L50d174:{c.instructions+=1;NFSU2_TR(0x50d174);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d180:L50d180:{c.instructions+=3;NFSU2_TR(0x50d180);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d184:{NFSU2_TR(0x50d184);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50d187:{NFSU2_TR(0x50d187);
if(r1(R+518)){{goto L50d195;}}
}
B50d189:L50d189:{c.instructions+=3;NFSU2_TR(0x50d189);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B50d18f:{NFSU2_TR(0x50d18f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d190:{NFSU2_TR(0x50d190);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d195ull));
TAIL_STATIC(0x458520u,458);
}
B50d195:L50d195:{c.instructions+=1;NFSU2_TR(0x50d195);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d1a0:L50d1a0:{c.instructions+=3;NFSU2_TR(0x50d1a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d1a4:{NFSU2_TR(0x50d1a4);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B50d1a7:{NFSU2_TR(0x50d1a7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L50d1c1;}}
}
B50d1a9:L50d1a9:{c.instructions+=2;NFSU2_TR(0x50d1a9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50d1ac:{NFSU2_TR(0x50d1ac);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L50d1bf;}}
}
B50d1ae:L50d1ae:{c.instructions+=2;NFSU2_TR(0x50d1ae);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50d1b1:{NFSU2_TR(0x50d1b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50d1c1;}}
}
B50d1b3:L50d1b3:{c.instructions+=5;NFSU2_TR(0x50d1b3);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B50d1b7:{NFSU2_TR(0x50d1b7);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B50d1b9:{NFSU2_TR(0x50d1b9);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B50d1bb:{NFSU2_TR(0x50d1bb);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xaull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50d1be:{NFSU2_TR(0x50d1be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d1bf:L50d1bf:{c.instructions+=1;NFSU2_TR(0x50d1bf);
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
B50d1c1:L50d1c1:{c.instructions+=1;NFSU2_TR(0x50d1c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d1d0:L50d1d0:{c.instructions+=4;NFSU2_TR(0x50d1d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d1d4:{NFSU2_TR(0x50d1d4);
__builtin_memmove((R+4),(R+0),4);
}
B50d1d6:{NFSU2_TR(0x50d1d6);
w1(R+512,u8((r4(R+4))<(u32(0x4ull))));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B50d1d9:{NFSU2_TR(0x50d1d9);
if(r1(R+518)){{goto L50d1de;}}
}
B50d1db:L50d1db:{c.instructions+=2;NFSU2_TR(0x50d1db);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50d1dc:{NFSU2_TR(0x50d1dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50d1e0;}}
}
B50d1de:L50d1de:{c.instructions+=1;NFSU2_TR(0x50d1de);
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
B50d1e0:L50d1e0:{c.instructions+=1;NFSU2_TR(0x50d1e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d1f0:L50d1f0:{c.instructions+=8;NFSU2_TR(0x50d1f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50d1f4:{NFSU2_TR(0x50d1f4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B50d1f6:{NFSU2_TR(0x50d1f6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50d1fc:{NFSU2_TR(0x50d1fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50d200:{NFSU2_TR(0x50d200);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B50d203:{NFSU2_TR(0x50d203);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B50d204:{NFSU2_TR(0x50d204);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50d206:{NFSU2_TR(0x50d206);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d210:L50d210:{c.instructions+=8;NFSU2_TR(0x50d210);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50d214:{NFSU2_TR(0x50d214);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B50d216:{NFSU2_TR(0x50d216);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50d21c:{NFSU2_TR(0x50d21c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50d220:{NFSU2_TR(0x50d220);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B50d223:{NFSU2_TR(0x50d223);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B50d224:{NFSU2_TR(0x50d224);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50d226:{NFSU2_TR(0x50d226);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d230:L50d230:{c.instructions+=4;NFSU2_TR(0x50d230);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d234:{NFSU2_TR(0x50d234);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B50d237:{NFSU2_TR(0x50d237);
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
B50d23a:{NFSU2_TR(0x50d23a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L50d245;}}
}
B50d23c:L50d23c:{c.instructions+=1;NFSU2_TR(0x50d23c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x50d248ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50d243:L50d243:{c.instructions+=1;NFSU2_TR(0x50d243);
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
B50d245:L50d245:{c.instructions+=1;NFSU2_TR(0x50d245);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d260:L50d260:{c.instructions+=3;NFSU2_TR(0x50d260);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d264:{NFSU2_TR(0x50d264);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9120409eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50d269:{NFSU2_TR(0x50d269);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50d270;}}
}
B50d26b:L50d26b:{c.instructions+=2;NFSU2_TR(0x50d26b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d26f:{NFSU2_TR(0x50d26f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d270:L50d270:{c.instructions+=7;NFSU2_TR(0x50d270);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B50d272:{NFSU2_TR(0x50d272);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50d277:{NFSU2_TR(0x50d277);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d27b:{NFSU2_TR(0x50d27b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B50d27e:{NFSU2_TR(0x50d27e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B50d27f:{NFSU2_TR(0x50d27f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50d281:{NFSU2_TR(0x50d281);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d290:L50d290:{c.instructions+=1;NFSU2_TR(0x50d290);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d2a0:L50d2a0:{c.instructions+=3;NFSU2_TR(0x50d2a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d2a4:{NFSU2_TR(0x50d2a4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50d2a6:{NFSU2_TR(0x50d2a6);
if(r1(R+518)){{goto L50d2ab;}}
}
B50d2a8:L50d2a8:{c.instructions+=2;NFSU2_TR(0x50d2a8);
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
B50d2aa:{NFSU2_TR(0x50d2aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d2ab:L50d2ab:{c.instructions+=2;NFSU2_TR(0x50d2ab);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50d2ad:{NFSU2_TR(0x50d2ad);
if(r1(R+518)){{goto L50d2b5;}}
}
B50d2af:L50d2af:{c.instructions+=2;NFSU2_TR(0x50d2af);
w4(R+0,u32(0x1ull));
}
B50d2b4:{NFSU2_TR(0x50d2b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d2b5:L50d2b5:{c.instructions+=2;NFSU2_TR(0x50d2b5);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50d2b7:{NFSU2_TR(0x50d2b7);
if(r1(R+518)){{goto L50d2bf;}}
}
B50d2b9:L50d2b9:{c.instructions+=2;NFSU2_TR(0x50d2b9);
w4(R+0,u32(0x2ull));
}
B50d2be:{NFSU2_TR(0x50d2be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d2bf:L50d2bf:{c.instructions+=6;NFSU2_TR(0x50d2bf);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x8ull))));
}
B50d2c1:{NFSU2_TR(0x50d2c1);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B50d2c3:{NFSU2_TR(0x50d2c3);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B50d2c5:{NFSU2_TR(0x50d2c5);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x4ull))));
}
B50d2c8:{NFSU2_TR(0x50d2c8);
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
B50d2c9:{NFSU2_TR(0x50d2c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d2d0:L50d2d0:{c.instructions+=3;NFSU2_TR(0x50d2d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d2d4:{NFSU2_TR(0x50d2d4);
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
B50d2d6:{NFSU2_TR(0x50d2d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50d2de;}}
}
B50d2d8:L50d2d8:{c.instructions+=2;NFSU2_TR(0x50d2d8);
w4(R+0,u32(0x1ull));
}
B50d2dd:{NFSU2_TR(0x50d2dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d2de:L50d2de:{c.instructions+=2;NFSU2_TR(0x50d2de);
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
B50d2e1:{NFSU2_TR(0x50d2e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50d2e9;}}
}
B50d2e3:L50d2e3:{c.instructions+=2;NFSU2_TR(0x50d2e3);
w4(R+0,u32(0x2ull));
}
B50d2e8:{NFSU2_TR(0x50d2e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d2e9:L50d2e9:{c.instructions+=2;NFSU2_TR(0x50d2e9);
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
B50d2ec:{NFSU2_TR(0x50d2ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50d2f4;}}
}
B50d2ee:L50d2ee:{c.instructions+=2;NFSU2_TR(0x50d2ee);
w4(R+0,u32(0x4ull));
}
B50d2f3:{NFSU2_TR(0x50d2f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d2f4:L50d2f4:{c.instructions+=7;NFSU2_TR(0x50d2f4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B50d2f6:{NFSU2_TR(0x50d2f6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50d2f9:{NFSU2_TR(0x50d2f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B50d2fc:{NFSU2_TR(0x50d2fc);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B50d2fd:{NFSU2_TR(0x50d2fd);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50d300:{NFSU2_TR(0x50d300);
__builtin_memmove((R+0),(R+4),4);
}
B50d302:{NFSU2_TR(0x50d302);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d310:L50d310:{c.instructions+=4;NFSU2_TR(0x50d310);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d314:{NFSU2_TR(0x50d314);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d315:{NFSU2_TR(0x50d315);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d316:{NFSU2_TR(0x50d316);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d31bull));
TAIL_STATIC(0x43dbb0u,43d);
}
B50d31b:L50d31b:{c.instructions+=5;NFSU2_TR(0x50d31b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50d31f:{NFSU2_TR(0x50d31f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B50d322:{NFSU2_TR(0x50d322);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B50d324:{NFSU2_TR(0x50d324);
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
B50d326:{NFSU2_TR(0x50d326);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L50d33d;}}
}
B50d328:L50d328:{c.instructions+=3;NFSU2_TR(0x50d328);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50d32c:{NFSU2_TR(0x50d32c);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B50d32d:{NFSU2_TR(0x50d32d);
__builtin_memmove((R+4),(R+4),4);
}
B50d330:L50d330:{c.instructions+=2;NFSU2_TR(0x50d330);
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
B50d332:{NFSU2_TR(0x50d332);
if(r1(R+518)){{goto L50d33d;}}
}
B50d334:L50d334:{c.instructions+=4;NFSU2_TR(0x50d334);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
w1(U+8,u8(0x2aull));
s1(u32(r4(U+4)),r1(U+8));
}
B50d338:{NFSU2_TR(0x50d338);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B50d339:{NFSU2_TR(0x50d339);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B50d33b:{NFSU2_TR(0x50d33b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50d330u);}goto L50d330;}}
}
B50d33d:L50d33d:{c.instructions+=3;NFSU2_TR(0x50d33d);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
w1(U+8,u8(0x0ull));
s1(u32(r4(U+4)),r1(U+8));
}
B50d341:{NFSU2_TR(0x50d341);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50d342:{NFSU2_TR(0x50d342);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d350:L50d350:{c.instructions+=1;NFSU2_TR(0x50d350);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d355ull));
TAIL_STATIC(0x570a30u,570);
}
B50d355:L50d355:{c.instructions+=2;NFSU2_TR(0x50d355);
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
B50d358:{NFSU2_TR(0x50d358);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50d366;}}
}
B50d35a:L50d35a:{c.instructions+=3;NFSU2_TR(0x50d35a);
__builtin_memmove((R+0),gp(0x7f70d0),4);
}
B50d35f:{NFSU2_TR(0x50d35f);
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
B50d361:{NFSU2_TR(0x50d361);
if(r1(R+518)){{goto L50d366;}}
}
B50d363:L50d363:{c.instructions+=2;NFSU2_TR(0x50d363);
w1(R+0,u8(0x1ull));
}
B50d365:{NFSU2_TR(0x50d365);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d366:L50d366:{c.instructions+=1;NFSU2_TR(0x50d366);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d36bull));
TAIL_STATIC(0x570a30u,570);
}
B50d36b:L50d36b:{c.instructions+=2;NFSU2_TR(0x50d36b);
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
B50d36e:{NFSU2_TR(0x50d36e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50d379;}}
}
B50d370:L50d370:{c.instructions+=3;NFSU2_TR(0x50d370);
__builtin_memmove((R+0),gp(0x7f70d0),4);
}
B50d375:{NFSU2_TR(0x50d375);
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
B50d377:{NFSU2_TR(0x50d377);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50d363u);}goto L50d363;}}
}
B50d379:L50d379:{c.instructions+=1;NFSU2_TR(0x50d379);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d37eull));
TAIL_STATIC(0x570a30u,570);
}
B50d37e:L50d37e:{c.instructions+=2;NFSU2_TR(0x50d37e);
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
B50d381:{NFSU2_TR(0x50d381);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50d363u);}goto L50d363;}}
}
B50d383:L50d383:{c.instructions+=1;NFSU2_TR(0x50d383);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d388ull));
TAIL_STATIC(0x570a30u,570);
}
B50d388:L50d388:{c.instructions+=3;NFSU2_TR(0x50d388);
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
B50d38b:{NFSU2_TR(0x50d38b);
__builtin_memmove((R+0),(R+518),1);
}
B50d38e:{NFSU2_TR(0x50d38e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d390:L50d390:{c.instructions+=3;NFSU2_TR(0x50d390);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B50d392:{NFSU2_TR(0x50d392);
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
B50d394:{NFSU2_TR(0x50d394);
if(r1(R+518)){{goto L50d39d;}}
}
B50d396:L50d396:{c.instructions+=2;NFSU2_TR(0x50d396);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d397:{NFSU2_TR(0x50d397);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d39cull));
TAIL_STATIC(0x575630u,575);
}
B50d39c:L50d39c:{c.instructions+=1;NFSU2_TR(0x50d39c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50d39d:L50d39d:{c.instructions+=1;NFSU2_TR(0x50d39d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d3a0:L50d3a0:{c.instructions+=3;NFSU2_TR(0x50d3a0);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B50d3a4:{NFSU2_TR(0x50d3a4);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x30ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B50d3a6:{NFSU2_TR(0x50d3a6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L50d3b2;}}
}
B50d3a8:L50d3a8:{c.instructions+=2;NFSU2_TR(0x50d3a8);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x39ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x39ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50d3aa:{NFSU2_TR(0x50d3aa);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L50d3b2;}}
}
B50d3ac:L50d3ac:{c.instructions+=2;NFSU2_TR(0x50d3ac);
w4(R+0,u32(0x1ull));
}
B50d3b1:{NFSU2_TR(0x50d3b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d3b2:L50d3b2:{c.instructions+=2;NFSU2_TR(0x50d3b2);
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
B50d3b4:{NFSU2_TR(0x50d3b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d3c0:L50d3c0:{c.instructions+=7;NFSU2_TR(0x50d3c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d3c4:{NFSU2_TR(0x50d3c4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d3c5:{NFSU2_TR(0x50d3c5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d3c6:{NFSU2_TR(0x50d3c6);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B50d3c8:{NFSU2_TR(0x50d3c8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B50d3ca:{NFSU2_TR(0x50d3ca);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50d3cc:{NFSU2_TR(0x50d3cc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L50d448;}}
}
B50d3ce:L50d3ce:{c.instructions+=4;NFSU2_TR(0x50d3ce);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d3cf:{NFSU2_TR(0x50d3cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B50d3d3:{NFSU2_TR(0x50d3d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d3d4:{NFSU2_TR(0x50d3d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50d3d8:L50d3d8:{c.instructions+=4;NFSU2_TR(0x50d3d8);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+8),(U+0),1);
}
B50d3da:{NFSU2_TR(0x50d3da);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B50d3db:{NFSU2_TR(0x50d3db);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
w1(R+512,u8((r1(U+0))<(u8(0x80ull))));
}
B50d3de:{NFSU2_TR(0x50d3de);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L50d3e6;}}
}
B50d3e0:L50d3e0:{c.instructions+=2;NFSU2_TR(0x50d3e0);
w2(R+0,u16(r1(R+8)));
}
B50d3e4:{NFSU2_TR(0x50d3e4);
{goto L50d435;}
}
B50d3e6:L50d3e6:{c.instructions+=3;NFSU2_TR(0x50d3e6);
__builtin_memmove((R+0),gp(0x838530),4);
}
B50d3eb:{NFSU2_TR(0x50d3eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50d3ed:{NFSU2_TR(0x50d3ed);
if(r1(R+518)){{goto L50d3f5;}}
}
B50d3ef:L50d3ef:{c.instructions+=2;NFSU2_TR(0x50d3ef);
w2(R+0,u16(r1(R+8)));
}
B50d3f3:{NFSU2_TR(0x50d3f3);
{goto L50d435;}
}
B50d3f5:L50d3f5:{c.instructions+=4;NFSU2_TR(0x50d3f5);
w4(R+0,u32(r1(R+8)));
}
B50d3f8:{NFSU2_TR(0x50d3f8);
u8 U[14];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B50d3fd:{NFSU2_TR(0x50d3fd);
w1(R+512,u8((r2(R+0))<(u16(0x80ull))));
}
B50d401:{NFSU2_TR(0x50d401);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L50d429;}}
}
B50d403:L50d403:{c.instructions+=2;NFSU2_TR(0x50d403);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B50d406:{NFSU2_TR(0x50d406);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50d40e;}}
}
B50d408:L50d408:{c.instructions+=2;NFSU2_TR(0x50d408);
w2(R+0,u16(r1(R+8)));
}
B50d40c:{NFSU2_TR(0x50d40c);
{goto L50d429;}
}
B50d40e:L50d40e:{c.instructions+=4;NFSU2_TR(0x50d40e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+8),(U+0),1);
}
B50d410:{NFSU2_TR(0x50d410);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B50d411:{NFSU2_TR(0x50d411);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
w1(R+512,u8((r1(U+0))<(u8(0x80ull))));
}
B50d414:{NFSU2_TR(0x50d414);
if(r1(R+512)){{goto L50d42e;}}
}
B50d416:L50d416:{c.instructions+=5;NFSU2_TR(0x50d416);
w4(R+0,u32(r2(R+0)));
}
B50d419:{NFSU2_TR(0x50d419);
w4(R+8,u32(r1(R+8)));
}
B50d41c:{NFSU2_TR(0x50d41c);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B50d41f:{NFSU2_TR(0x50d41f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B50d421:{NFSU2_TR(0x50d421);
u8 U[14];
w4(U+0,u32(u32(u32(0xffffff04ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+0),(U+12),2);
}
B50d429:L50d429:{c.instructions+=2;NFSU2_TR(0x50d429);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B50d42c:{NFSU2_TR(0x50d42c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50d435;}}
}
B50d42e:L50d42e:{c.instructions+=2;NFSU2_TR(0x50d42e);
w1(R+12,u8(0x1ull));
}
B50d430:{NFSU2_TR(0x50d430);
w4(R+0,u32(0x5full));
}
B50d435:L50d435:{c.instructions+=4;NFSU2_TR(0x50d435);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),2);
s2(u32(r4(U+4)),r2(U+8));
}
B50d43a:{NFSU2_TR(0x50d43a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B50d43b:{NFSU2_TR(0x50d43b);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B50d43e:{NFSU2_TR(0x50d43e);
if(r1(R+518)){{goto L50d446;}}
}
B50d440:L50d440:{c.instructions+=2;NFSU2_TR(0x50d440);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+8)));
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B50d444:{NFSU2_TR(0x50d444);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50d3d8u);}goto L50d3d8;}}
}
B50d446:L50d446:{c.instructions+=2;NFSU2_TR(0x50d446);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50d447:{NFSU2_TR(0x50d447);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50d448:L50d448:{c.instructions+=6;NFSU2_TR(0x50d448);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B50d44a:{NFSU2_TR(0x50d44a);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50d44c:{NFSU2_TR(0x50d44c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50d44d:{NFSU2_TR(0x50d44d);
__builtin_memmove((R+0),(R+518),1);
}
B50d450:{NFSU2_TR(0x50d450);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50d451:{NFSU2_TR(0x50d451);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d460:L50d460:{c.instructions+=3;NFSU2_TR(0x50d460);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d464:{NFSU2_TR(0x50d464);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9120409eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50d469:{NFSU2_TR(0x50d469);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L50d4c6;}}
}
B50d46b:L50d46b:{c.instructions+=1;NFSU2_TR(0x50d46b);
if(r1(R+518)){{goto L50d4b5;}}
}
B50d46d:L50d46d:{c.instructions+=2;NFSU2_TR(0x50d46d);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x72619778ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x72619778ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x72619778ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50d472:{NFSU2_TR(0x50d472);
if(r1(R+518)){{goto L50d4a4;}}
}
B50d474:L50d474:{c.instructions+=2;NFSU2_TR(0x50d474);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x911ab364ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50d479:{NFSU2_TR(0x50d479);
if(r1(R+518)){{goto L50d493;}}
}
B50d47b:L50d47b:{c.instructions+=2;NFSU2_TR(0x50d47b);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x911c0a4bull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x911c0a4bull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x911c0a4bull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50d480:{NFSU2_TR(0x50d480);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50d4d4;}}
}
B50d482:L50d482:{c.instructions+=6;NFSU2_TR(0x50d482);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d483:{NFSU2_TR(0x50d483);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B50d485:{NFSU2_TR(0x50d485);
w4(R+8,u32(0x7ull));
}
B50d48a:{NFSU2_TR(0x50d48a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d48b:{NFSU2_TR(0x50d48b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d48c:{NFSU2_TR(0x50d48c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d48full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50d48f:L50d48f:{c.instructions+=2;NFSU2_TR(0x50d48f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50d490:{NFSU2_TR(0x50d490);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d493:L50d493:{c.instructions+=6;NFSU2_TR(0x50d493);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d494:{NFSU2_TR(0x50d494);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B50d496:{NFSU2_TR(0x50d496);
w4(R+8,u32(0xaull));
}
B50d49b:{NFSU2_TR(0x50d49b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d49c:{NFSU2_TR(0x50d49c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d49d:{NFSU2_TR(0x50d49d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d4a0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50d4a0:L50d4a0:{c.instructions+=2;NFSU2_TR(0x50d4a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50d4a1:{NFSU2_TR(0x50d4a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d4a4:L50d4a4:{c.instructions+=6;NFSU2_TR(0x50d4a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d4a5:{NFSU2_TR(0x50d4a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B50d4a7:{NFSU2_TR(0x50d4a7);
w4(R+8,u32(0x6ull));
}
B50d4ac:{NFSU2_TR(0x50d4ac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d4ad:{NFSU2_TR(0x50d4ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d4ae:{NFSU2_TR(0x50d4ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d4b1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50d4b1:L50d4b1:{c.instructions+=2;NFSU2_TR(0x50d4b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50d4b2:{NFSU2_TR(0x50d4b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d4b5:L50d4b5:{c.instructions+=6;NFSU2_TR(0x50d4b5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d4b6:{NFSU2_TR(0x50d4b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B50d4b8:{NFSU2_TR(0x50d4b8);
w4(R+8,u32(0x4ull));
}
B50d4bd:{NFSU2_TR(0x50d4bd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d4be:{NFSU2_TR(0x50d4be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d4bf:{NFSU2_TR(0x50d4bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d4c2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50d4c2:L50d4c2:{c.instructions+=2;NFSU2_TR(0x50d4c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50d4c3:{NFSU2_TR(0x50d4c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d4c6:L50d4c6:{c.instructions+=2;NFSU2_TR(0x50d4c6);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50d4cb:{NFSU2_TR(0x50d4cb);
if(r1(R+518)){{goto L50d4ea;}}
}
B50d4cd:L50d4cd:{c.instructions+=2;NFSU2_TR(0x50d4cd);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5af2461ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5af2461ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5af2461ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50d4d2:{NFSU2_TR(0x50d4d2);
if(r1(R+518)){{goto L50d4d9;}}
}
B50d4d4:L50d4d4:{c.instructions+=2;NFSU2_TR(0x50d4d4);
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
B50d4d6:{NFSU2_TR(0x50d4d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d4d9:L50d4d9:{c.instructions+=6;NFSU2_TR(0x50d4d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d4da:{NFSU2_TR(0x50d4da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B50d4dc:{NFSU2_TR(0x50d4dc);
w4(R+8,u32(0x9ull));
}
B50d4e1:{NFSU2_TR(0x50d4e1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d4e2:{NFSU2_TR(0x50d4e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d4e3:{NFSU2_TR(0x50d4e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d4e6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50d4e6:L50d4e6:{c.instructions+=2;NFSU2_TR(0x50d4e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50d4e7:{NFSU2_TR(0x50d4e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d4ea:L50d4ea:{c.instructions+=6;NFSU2_TR(0x50d4ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d4eb:{NFSU2_TR(0x50d4eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B50d4ed:{NFSU2_TR(0x50d4ed);
w4(R+8,u32(0x5ull));
}
B50d4f2:{NFSU2_TR(0x50d4f2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d4f3:{NFSU2_TR(0x50d4f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d4f4:{NFSU2_TR(0x50d4f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d4f7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50d4f7:L50d4f7:{c.instructions+=2;NFSU2_TR(0x50d4f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50d4f8:{NFSU2_TR(0x50d4f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d500:L50d500:{c.instructions+=2;NFSU2_TR(0x50d500);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d504:{NFSU2_TR(0x50d504);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d510:L50d510:{c.instructions+=2;NFSU2_TR(0x50d510);
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
B50d512:{NFSU2_TR(0x50d512);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d520:L50d520:{c.instructions+=1;NFSU2_TR(0x50d520);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d530:L50d530:{c.instructions+=4;NFSU2_TR(0x50d530);
__builtin_memmove((R+8),(R+4),4);
}
B50d532:{NFSU2_TR(0x50d532);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d535:{NFSU2_TR(0x50d535);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d536:{NFSU2_TR(0x50d536);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d53bull));
TAIL_STATIC(0x50ca50u,50c);
}
B50d53b:L50d53b:{c.instructions+=4;NFSU2_TR(0x50d53b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50d53e:{NFSU2_TR(0x50d53e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B50d541:{NFSU2_TR(0x50d541);
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
B50d543:{NFSU2_TR(0x50d543);
if(r1(R+518)){{goto L50d54c;}}
}
B50d545:L50d545:{c.instructions+=2;NFSU2_TR(0x50d545);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d546:{NFSU2_TR(0x50d546);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d54bull));
TAIL_STATIC(0x50ca50u,50c);
}
B50d54b:L50d54b:{c.instructions+=1;NFSU2_TR(0x50d54b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50d54c:L50d54c:{c.instructions+=1;NFSU2_TR(0x50d54c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d550:L50d550:{c.instructions+=4;NFSU2_TR(0x50d550);
__builtin_memmove((R+8),(R+4),4);
}
B50d552:{NFSU2_TR(0x50d552);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d555:{NFSU2_TR(0x50d555);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d556:{NFSU2_TR(0x50d556);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d55bull));
TAIL_STATIC(0x50ca00u,50c);
}
B50d55b:L50d55b:{c.instructions+=4;NFSU2_TR(0x50d55b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50d55e:{NFSU2_TR(0x50d55e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B50d561:{NFSU2_TR(0x50d561);
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
B50d563:{NFSU2_TR(0x50d563);
if(r1(R+518)){{goto L50d56c;}}
}
B50d565:L50d565:{c.instructions+=2;NFSU2_TR(0x50d565);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d566:{NFSU2_TR(0x50d566);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d56bull));
TAIL_STATIC(0x50ca00u,50c);
}
B50d56b:L50d56b:{c.instructions+=1;NFSU2_TR(0x50d56b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50d56c:L50d56c:{c.instructions+=1;NFSU2_TR(0x50d56c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d570:L50d570:{c.instructions+=4;NFSU2_TR(0x50d570);
__builtin_memmove((R+8),(R+4),4);
}
B50d572:{NFSU2_TR(0x50d572);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d575:{NFSU2_TR(0x50d575);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d576:{NFSU2_TR(0x50d576);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d57bull));
TAIL_STATIC(0x50ca50u,50c);
}
B50d57b:L50d57b:{c.instructions+=3;NFSU2_TR(0x50d57b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50d57e:{NFSU2_TR(0x50d57e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d57f:{NFSU2_TR(0x50d57f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d584ull));
TAIL_STATIC(0x50ca50u,50c);
}
B50d584:L50d584:{c.instructions+=4;NFSU2_TR(0x50d584);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50d587:{NFSU2_TR(0x50d587);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B50d58a:{NFSU2_TR(0x50d58a);
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
B50d58c:{NFSU2_TR(0x50d58c);
if(r1(R+518)){{goto L50d595;}}
}
B50d58e:L50d58e:{c.instructions+=2;NFSU2_TR(0x50d58e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d58f:{NFSU2_TR(0x50d58f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d594ull));
TAIL_STATIC(0x50ca50u,50c);
}
B50d594:L50d594:{c.instructions+=1;NFSU2_TR(0x50d594);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50d595:L50d595:{c.instructions+=1;NFSU2_TR(0x50d595);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d5a0:L50d5a0:{c.instructions+=4;NFSU2_TR(0x50d5a0);
__builtin_memmove((R+8),(R+4),4);
}
B50d5a2:{NFSU2_TR(0x50d5a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d5a5:{NFSU2_TR(0x50d5a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d5a6:{NFSU2_TR(0x50d5a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d5abull));
TAIL_STATIC(0x50ca00u,50c);
}
B50d5ab:L50d5ab:{c.instructions+=3;NFSU2_TR(0x50d5ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50d5ae:{NFSU2_TR(0x50d5ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d5af:{NFSU2_TR(0x50d5af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d5b4ull));
TAIL_STATIC(0x50ca00u,50c);
}
B50d5b4:L50d5b4:{c.instructions+=4;NFSU2_TR(0x50d5b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50d5b7:{NFSU2_TR(0x50d5b7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B50d5ba:{NFSU2_TR(0x50d5ba);
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
B50d5bc:{NFSU2_TR(0x50d5bc);
if(r1(R+518)){{goto L50d5c5;}}
}
B50d5be:L50d5be:{c.instructions+=2;NFSU2_TR(0x50d5be);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d5bf:{NFSU2_TR(0x50d5bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d5c4ull));
TAIL_STATIC(0x50ca00u,50c);
}
B50d5c4:L50d5c4:{c.instructions+=1;NFSU2_TR(0x50d5c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50d5c5:L50d5c5:{c.instructions+=1;NFSU2_TR(0x50d5c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d5d0:L50d5d0:{c.instructions+=4;NFSU2_TR(0x50d5d0);
__builtin_memmove((R+8),(R+4),4);
}
B50d5d2:{NFSU2_TR(0x50d5d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d5d5:{NFSU2_TR(0x50d5d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d5d6:{NFSU2_TR(0x50d5d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d5dbull));
TAIL_STATIC(0x50ca50u,50c);
}
B50d5db:L50d5db:{c.instructions+=3;NFSU2_TR(0x50d5db);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50d5de:{NFSU2_TR(0x50d5de);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d5df:{NFSU2_TR(0x50d5df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d5e4ull));
TAIL_STATIC(0x50ca50u,50c);
}
B50d5e4:L50d5e4:{c.instructions+=3;NFSU2_TR(0x50d5e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d5e7:{NFSU2_TR(0x50d5e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d5e8:{NFSU2_TR(0x50d5e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d5edull));
TAIL_STATIC(0x50ca50u,50c);
}
B50d5ed:L50d5ed:{c.instructions+=3;NFSU2_TR(0x50d5ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50d5f0:{NFSU2_TR(0x50d5f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d5f1:{NFSU2_TR(0x50d5f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d5f6ull));
TAIL_STATIC(0x50ca50u,50c);
}
B50d5f6:L50d5f6:{c.instructions+=4;NFSU2_TR(0x50d5f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50d5f9:{NFSU2_TR(0x50d5f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B50d5fc:{NFSU2_TR(0x50d5fc);
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
B50d5fe:{NFSU2_TR(0x50d5fe);
if(r1(R+518)){{goto L50d607;}}
}
B50d600:L50d600:{c.instructions+=2;NFSU2_TR(0x50d600);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d601:{NFSU2_TR(0x50d601);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d606ull));
TAIL_STATIC(0x50ca50u,50c);
}
B50d606:L50d606:{c.instructions+=1;NFSU2_TR(0x50d606);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50d607:L50d607:{c.instructions+=1;NFSU2_TR(0x50d607);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d610:L50d610:{c.instructions+=4;NFSU2_TR(0x50d610);
__builtin_memmove((R+8),(R+4),4);
}
B50d612:{NFSU2_TR(0x50d612);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d615:{NFSU2_TR(0x50d615);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d616:{NFSU2_TR(0x50d616);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d61bull));
TAIL_STATIC(0x50ca00u,50c);
}
B50d61b:L50d61b:{c.instructions+=3;NFSU2_TR(0x50d61b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50d61e:{NFSU2_TR(0x50d61e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d61f:{NFSU2_TR(0x50d61f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d624ull));
TAIL_STATIC(0x50ca00u,50c);
}
B50d624:L50d624:{c.instructions+=3;NFSU2_TR(0x50d624);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d627:{NFSU2_TR(0x50d627);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d628:{NFSU2_TR(0x50d628);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d62dull));
TAIL_STATIC(0x50ca00u,50c);
}
B50d62d:L50d62d:{c.instructions+=3;NFSU2_TR(0x50d62d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50d630:{NFSU2_TR(0x50d630);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d631:{NFSU2_TR(0x50d631);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d636ull));
TAIL_STATIC(0x50ca00u,50c);
}
B50d636:L50d636:{c.instructions+=4;NFSU2_TR(0x50d636);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50d639:{NFSU2_TR(0x50d639);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B50d63c:{NFSU2_TR(0x50d63c);
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
B50d63e:{NFSU2_TR(0x50d63e);
if(r1(R+518)){{goto L50d647;}}
}
B50d640:L50d640:{c.instructions+=2;NFSU2_TR(0x50d640);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d641:{NFSU2_TR(0x50d641);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d646ull));
TAIL_STATIC(0x50ca00u,50c);
}
B50d646:L50d646:{c.instructions+=1;NFSU2_TR(0x50d646);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50d647:L50d647:{c.instructions+=1;NFSU2_TR(0x50d647);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d650:L50d650:{c.instructions+=4;NFSU2_TR(0x50d650);
__builtin_memmove((R+8),(R+4),4);
}
B50d652:{NFSU2_TR(0x50d652);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d655:{NFSU2_TR(0x50d655);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d656:{NFSU2_TR(0x50d656);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d65bull));
TAIL_STATIC(0x50ca50u,50c);
}
B50d65b:L50d65b:{c.instructions+=3;NFSU2_TR(0x50d65b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50d65e:{NFSU2_TR(0x50d65e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d65f:{NFSU2_TR(0x50d65f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d664ull));
TAIL_STATIC(0x50ca50u,50c);
}
B50d664:L50d664:{c.instructions+=3;NFSU2_TR(0x50d664);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d667:{NFSU2_TR(0x50d667);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d668:{NFSU2_TR(0x50d668);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d66dull));
TAIL_STATIC(0x50ca50u,50c);
}
B50d66d:L50d66d:{c.instructions+=3;NFSU2_TR(0x50d66d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50d670:{NFSU2_TR(0x50d670);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d671:{NFSU2_TR(0x50d671);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d676ull));
TAIL_STATIC(0x50ca50u,50c);
}
B50d676:L50d676:{c.instructions+=4;NFSU2_TR(0x50d676);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d679:{NFSU2_TR(0x50d679);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B50d67c:{NFSU2_TR(0x50d67c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50d67e:{NFSU2_TR(0x50d67e);
if(r1(R+518)){{goto L50d689;}}
}
B50d680:L50d680:{c.instructions+=2;NFSU2_TR(0x50d680);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d681:{NFSU2_TR(0x50d681);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d686ull));
TAIL_STATIC(0x50ca50u,50c);
}
B50d686:L50d686:{c.instructions+=1;NFSU2_TR(0x50d686);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B50d689:L50d689:{c.instructions+=3;NFSU2_TR(0x50d689);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50d68c:{NFSU2_TR(0x50d68c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d68d:{NFSU2_TR(0x50d68d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d692ull));
TAIL_STATIC(0x50ca50u,50c);
}
B50d692:L50d692:{c.instructions+=2;NFSU2_TR(0x50d692);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50d693:{NFSU2_TR(0x50d693);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d6a0:L50d6a0:{c.instructions+=4;NFSU2_TR(0x50d6a0);
__builtin_memmove((R+8),(R+4),4);
}
B50d6a2:{NFSU2_TR(0x50d6a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d6a5:{NFSU2_TR(0x50d6a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d6a6:{NFSU2_TR(0x50d6a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d6abull));
TAIL_STATIC(0x50ca00u,50c);
}
B50d6ab:L50d6ab:{c.instructions+=3;NFSU2_TR(0x50d6ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50d6ae:{NFSU2_TR(0x50d6ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d6af:{NFSU2_TR(0x50d6af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d6b4ull));
TAIL_STATIC(0x50ca00u,50c);
}
B50d6b4:L50d6b4:{c.instructions+=3;NFSU2_TR(0x50d6b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d6b7:{NFSU2_TR(0x50d6b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d6b8:{NFSU2_TR(0x50d6b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d6bdull));
TAIL_STATIC(0x50ca00u,50c);
}
B50d6bd:L50d6bd:{c.instructions+=3;NFSU2_TR(0x50d6bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50d6c0:{NFSU2_TR(0x50d6c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d6c1:{NFSU2_TR(0x50d6c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d6c6ull));
TAIL_STATIC(0x50ca00u,50c);
}
B50d6c6:L50d6c6:{c.instructions+=4;NFSU2_TR(0x50d6c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d6c9:{NFSU2_TR(0x50d6c9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B50d6cc:{NFSU2_TR(0x50d6cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50d6ce:{NFSU2_TR(0x50d6ce);
if(r1(R+518)){{goto L50d6d9;}}
}
B50d6d0:L50d6d0:{c.instructions+=2;NFSU2_TR(0x50d6d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d6d1:{NFSU2_TR(0x50d6d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d6d6ull));
TAIL_STATIC(0x50ca00u,50c);
}
B50d6d6:L50d6d6:{c.instructions+=1;NFSU2_TR(0x50d6d6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B50d6d9:L50d6d9:{c.instructions+=3;NFSU2_TR(0x50d6d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50d6dc:{NFSU2_TR(0x50d6dc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d6dd:{NFSU2_TR(0x50d6dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d6e2ull));
TAIL_STATIC(0x50ca00u,50c);
}
B50d6e2:L50d6e2:{c.instructions+=2;NFSU2_TR(0x50d6e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50d6e3:{NFSU2_TR(0x50d6e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d6f0:L50d6f0:{c.instructions+=4;NFSU2_TR(0x50d6f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d6f4:{NFSU2_TR(0x50d6f4);
__builtin_memmove((R+8),(R+0),4);
}
B50d6f6:{NFSU2_TR(0x50d6f6);
w1(R+512,u8((r4(R+8))<(u32(0x4ull))));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B50d6f9:{NFSU2_TR(0x50d6f9);
if(r1(R+518)){{goto L50d718;}}
}
B50d6fb:L50d6fb:{c.instructions+=2;NFSU2_TR(0x50d6fb);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50d6fc:{NFSU2_TR(0x50d6fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50d734;}}
}
B50d6fe:L50d6fe:{c.instructions+=6;NFSU2_TR(0x50d6fe);
{u32 ea_=u32(r4(R+4)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50d704:{NFSU2_TR(0x50d704);
{u32 ea_=u32(r4(R+4)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50d707:{NFSU2_TR(0x50d707);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B50d709:{NFSU2_TR(0x50d709);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50d70b:{NFSU2_TR(0x50d70b);
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
B50d70e:{NFSU2_TR(0x50d70e);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L50d732;}}
}
B50d710:L50d710:{c.instructions+=2;NFSU2_TR(0x50d710);
w4(R+0,u32(0x5ull));
}
B50d715:{NFSU2_TR(0x50d715);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d718:L50d718:{c.instructions+=6;NFSU2_TR(0x50d718);
{u32 ea_=u32(r4(R+4)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50d71e:{NFSU2_TR(0x50d71e);
{u32 ea_=u32(r4(R+4)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50d721:{NFSU2_TR(0x50d721);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B50d723:{NFSU2_TR(0x50d723);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50d725:{NFSU2_TR(0x50d725);
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
B50d728:{NFSU2_TR(0x50d728);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L50d732;}}
}
B50d72a:L50d72a:{c.instructions+=2;NFSU2_TR(0x50d72a);
w4(R+0,u32(0x4ull));
}
B50d72f:{NFSU2_TR(0x50d72f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d732:L50d732:{c.instructions+=1;NFSU2_TR(0x50d732);
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
B50d734:L50d734:{c.instructions+=1;NFSU2_TR(0x50d734);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d740:L50d740:{c.instructions+=5;NFSU2_TR(0x50d740);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d741:{NFSU2_TR(0x50d741);
__builtin_memmove((R+24),(R+4),4);
}
B50d743:{NFSU2_TR(0x50d743);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d746:{NFSU2_TR(0x50d746);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d747:{NFSU2_TR(0x50d747);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d74cull));
TAIL_STATIC(0x50ca50u,50c);
}
B50d74c:L50d74c:{c.instructions+=3;NFSU2_TR(0x50d74c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50d74f:{NFSU2_TR(0x50d74f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d750:{NFSU2_TR(0x50d750);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d755ull));
TAIL_STATIC(0x50ca50u,50c);
}
B50d755:L50d755:{c.instructions+=3;NFSU2_TR(0x50d755);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50d758:{NFSU2_TR(0x50d758);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d759:{NFSU2_TR(0x50d759);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d75eull));
TAIL_STATIC(0x50ca50u,50c);
}
B50d75e:L50d75e:{c.instructions+=5;NFSU2_TR(0x50d75e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d761:{NFSU2_TR(0x50d761);
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
B50d764:{NFSU2_TR(0x50d764);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50d767:{NFSU2_TR(0x50d767);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d769:{NFSU2_TR(0x50d769);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d76cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50d76c:L50d76c:{c.instructions+=3;NFSU2_TR(0x50d76c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50d76f:{NFSU2_TR(0x50d76f);
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
B50d771:{NFSU2_TR(0x50d771);
if(r1(R+518)){{goto L50d77c;}}
}
B50d773:L50d773:{c.instructions+=2;NFSU2_TR(0x50d773);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d774:{NFSU2_TR(0x50d774);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d779ull));
TAIL_STATIC(0x50ca50u,50c);
}
B50d779:L50d779:{c.instructions+=1;NFSU2_TR(0x50d779);
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
B50d77c:L50d77c:{c.instructions+=2;NFSU2_TR(0x50d77c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50d77d:{NFSU2_TR(0x50d77d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d780:L50d780:{c.instructions+=5;NFSU2_TR(0x50d780);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d781:{NFSU2_TR(0x50d781);
__builtin_memmove((R+24),(R+4),4);
}
B50d783:{NFSU2_TR(0x50d783);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d786:{NFSU2_TR(0x50d786);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d787:{NFSU2_TR(0x50d787);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d78cull));
TAIL_STATIC(0x50ca00u,50c);
}
B50d78c:L50d78c:{c.instructions+=3;NFSU2_TR(0x50d78c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50d78f:{NFSU2_TR(0x50d78f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d790:{NFSU2_TR(0x50d790);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d795ull));
TAIL_STATIC(0x50ca00u,50c);
}
B50d795:L50d795:{c.instructions+=3;NFSU2_TR(0x50d795);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50d798:{NFSU2_TR(0x50d798);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d799:{NFSU2_TR(0x50d799);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d79eull));
TAIL_STATIC(0x50ca00u,50c);
}
B50d79e:L50d79e:{c.instructions+=5;NFSU2_TR(0x50d79e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d7a1:{NFSU2_TR(0x50d7a1);
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
B50d7a4:{NFSU2_TR(0x50d7a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50d7a7:{NFSU2_TR(0x50d7a7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d7a9:{NFSU2_TR(0x50d7a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d7acull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50d7ac:L50d7ac:{c.instructions+=3;NFSU2_TR(0x50d7ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50d7af:{NFSU2_TR(0x50d7af);
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
B50d7b1:{NFSU2_TR(0x50d7b1);
if(r1(R+518)){{goto L50d7bc;}}
}
B50d7b3:L50d7b3:{c.instructions+=2;NFSU2_TR(0x50d7b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d7b4:{NFSU2_TR(0x50d7b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d7b9ull));
TAIL_STATIC(0x50ca00u,50c);
}
B50d7b9:L50d7b9:{c.instructions+=1;NFSU2_TR(0x50d7b9);
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
B50d7bc:L50d7bc:{c.instructions+=2;NFSU2_TR(0x50d7bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50d7bd:{NFSU2_TR(0x50d7bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d7c0:L50d7c0:{c.instructions+=2;NFSU2_TR(0x50d7c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B50d7c4:{NFSU2_TR(0x50d7c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d7d0:L50d7d0:{c.instructions+=2;NFSU2_TR(0x50d7d0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B50d7d4:{NFSU2_TR(0x50d7d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d7e0:L50d7e0:{c.instructions+=6;NFSU2_TR(0x50d7e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d7e4:{NFSU2_TR(0x50d7e4);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d7e9:{NFSU2_TR(0x50d7e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d7ea:{NFSU2_TR(0x50d7ea);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14cull))));
}
B50d7f0:{NFSU2_TR(0x50d7f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d7f1:{NFSU2_TR(0x50d7f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d7f6ull));
TAIL_STATIC(0x43dc00u,43d);
}
B50d7f6:L50d7f6:{c.instructions+=2;NFSU2_TR(0x50d7f6);
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
B50d7f9:{NFSU2_TR(0x50d7f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d800:L50d800:{c.instructions+=7;NFSU2_TR(0x50d800);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50d804:{NFSU2_TR(0x50d804);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B50d806:{NFSU2_TR(0x50d806);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50d80c:{NFSU2_TR(0x50d80c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B50d80f:{NFSU2_TR(0x50d80f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B50d810:{NFSU2_TR(0x50d810);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50d813:{NFSU2_TR(0x50d813);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d820:L50d820:{c.instructions+=4;NFSU2_TR(0x50d820);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B50d824:{NFSU2_TR(0x50d824);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50d826:{NFSU2_TR(0x50d826);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d82a:{NFSU2_TR(0x50d82a);
if(r1(R+518)){{goto L50d854;}}
}
B50d82c:L50d82c:{c.instructions+=2;NFSU2_TR(0x50d82c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50d82f:{NFSU2_TR(0x50d82f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50d840;}}
}
B50d831:L50d831:{c.instructions+=3;NFSU2_TR(0x50d831);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d834:{NFSU2_TR(0x50d834);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d835:{NFSU2_TR(0x50d835);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d83aull));
TAIL_STATIC(0x50ca50u,50c);
}
B50d83a:L50d83a:{c.instructions+=2;NFSU2_TR(0x50d83a);
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
B50d83d:{NFSU2_TR(0x50d83d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d840:L50d840:{c.instructions+=2;NFSU2_TR(0x50d840);
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
B50d843:{NFSU2_TR(0x50d843);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50d877;}}
}
B50d845:L50d845:{c.instructions+=3;NFSU2_TR(0x50d845);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50d848:{NFSU2_TR(0x50d848);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d849:{NFSU2_TR(0x50d849);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d84eull));
TAIL_STATIC(0x50ca50u,50c);
}
B50d84e:L50d84e:{c.instructions+=2;NFSU2_TR(0x50d84e);
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
B50d851:{NFSU2_TR(0x50d851);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d854:L50d854:{c.instructions+=2;NFSU2_TR(0x50d854);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50d857:{NFSU2_TR(0x50d857);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50d868;}}
}
B50d859:L50d859:{c.instructions+=3;NFSU2_TR(0x50d859);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50d85c:{NFSU2_TR(0x50d85c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d85d:{NFSU2_TR(0x50d85d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d862ull));
TAIL_STATIC(0x50ca00u,50c);
}
B50d862:L50d862:{c.instructions+=2;NFSU2_TR(0x50d862);
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
B50d865:{NFSU2_TR(0x50d865);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d868:L50d868:{c.instructions+=2;NFSU2_TR(0x50d868);
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
B50d86b:{NFSU2_TR(0x50d86b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50d877;}}
}
B50d86d:L50d86d:{c.instructions+=3;NFSU2_TR(0x50d86d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d870:{NFSU2_TR(0x50d870);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d871:{NFSU2_TR(0x50d871);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d876ull));
TAIL_STATIC(0x50ca00u,50c);
}
B50d876:L50d876:{c.instructions+=1;NFSU2_TR(0x50d876);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50d877:L50d877:{c.instructions+=1;NFSU2_TR(0x50d877);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d880:L50d880:{c.instructions+=6;NFSU2_TR(0x50d880);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B50d884:{NFSU2_TR(0x50d884);
__builtin_memmove((R+8),(R+4),4);
}
B50d886:{NFSU2_TR(0x50d886);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50d888:{NFSU2_TR(0x50d888);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d88b:{NFSU2_TR(0x50d88b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d88c:{NFSU2_TR(0x50d88c);
if(r1(R+518)){{goto L50d8ab;}}
}
B50d88e:L50d88e:{c.instructions+=1;NFSU2_TR(0x50d88e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d893ull));
TAIL_STATIC(0x50ca50u,50c);
}
B50d893:L50d893:{c.instructions+=3;NFSU2_TR(0x50d893);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50d896:{NFSU2_TR(0x50d896);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d897:{NFSU2_TR(0x50d897);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d89cull));
TAIL_STATIC(0x50ca50u,50c);
}
B50d89c:L50d89c:{c.instructions+=3;NFSU2_TR(0x50d89c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50d89f:{NFSU2_TR(0x50d89f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d8a0:{NFSU2_TR(0x50d8a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d8a5ull));
TAIL_STATIC(0x50ca50u,50c);
}
B50d8a5:L50d8a5:{c.instructions+=2;NFSU2_TR(0x50d8a5);
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
B50d8a8:{NFSU2_TR(0x50d8a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d8ab:L50d8ab:{c.instructions+=1;NFSU2_TR(0x50d8ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d8b0ull));
TAIL_STATIC(0x50ca00u,50c);
}
B50d8b0:L50d8b0:{c.instructions+=3;NFSU2_TR(0x50d8b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50d8b3:{NFSU2_TR(0x50d8b3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d8b4:{NFSU2_TR(0x50d8b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d8b9ull));
TAIL_STATIC(0x50ca00u,50c);
}
B50d8b9:L50d8b9:{c.instructions+=3;NFSU2_TR(0x50d8b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50d8bc:{NFSU2_TR(0x50d8bc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d8bd:{NFSU2_TR(0x50d8bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d8c2ull));
TAIL_STATIC(0x50ca00u,50c);
}
B50d8c2:L50d8c2:{c.instructions+=2;NFSU2_TR(0x50d8c2);
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
B50d8c5:{NFSU2_TR(0x50d8c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d8d0:L50d8d0:{c.instructions+=14;NFSU2_TR(0x50d8d0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50d8d4:{NFSU2_TR(0x50d8d4);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50d8da:{NFSU2_TR(0x50d8da);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50d8de:{NFSU2_TR(0x50d8de);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B50d8e0:{NFSU2_TR(0x50d8e0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50d8e4:{NFSU2_TR(0x50d8e4);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50d8e8:{NFSU2_TR(0x50d8e8);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B50d8ea:{NFSU2_TR(0x50d8ea);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50d8ee:{NFSU2_TR(0x50d8ee);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B50d8f0:{NFSU2_TR(0x50d8f0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50d8f4:{NFSU2_TR(0x50d8f4);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50d8f8:{NFSU2_TR(0x50d8f8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50d8fa:{NFSU2_TR(0x50d8fa);
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
B50d8fd:{NFSU2_TR(0x50d8fd);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L50d973;}}
}
B50d8ff:L50d8ff:{c.instructions+=5;NFSU2_TR(0x50d8ff);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50d903:{NFSU2_TR(0x50d903);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50d907:{NFSU2_TR(0x50d907);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50d909:{NFSU2_TR(0x50d909);
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
B50d90c:{NFSU2_TR(0x50d90c);
if(r1(R+518)){{goto L50d973;}}
}
B50d90e:L50d90e:{c.instructions+=5;NFSU2_TR(0x50d90e);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50d912:{NFSU2_TR(0x50d912);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50d916:{NFSU2_TR(0x50d916);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50d918:{NFSU2_TR(0x50d918);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50d91b:{NFSU2_TR(0x50d91b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50d93d;}}
}
B50d91d:L50d91d:{c.instructions+=6;NFSU2_TR(0x50d91d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50d921:{NFSU2_TR(0x50d921);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50d925:{NFSU2_TR(0x50d925);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50d929:{NFSU2_TR(0x50d929);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50d92b:{NFSU2_TR(0x50d92b);
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
B50d92e:{NFSU2_TR(0x50d92e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50d93d;}}
}
B50d930:L50d930:{c.instructions+=4;NFSU2_TR(0x50d930);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50d934:{NFSU2_TR(0x50d934);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50d938:{NFSU2_TR(0x50d938);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B50d93c:{NFSU2_TR(0x50d93c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d93d:L50d93d:{c.instructions+=5;NFSU2_TR(0x50d93d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50d941:{NFSU2_TR(0x50d941);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50d945:{NFSU2_TR(0x50d945);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50d947:{NFSU2_TR(0x50d947);
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
B50d94a:{NFSU2_TR(0x50d94a);
if(r1(R+514)){{goto L50d96c;}}
}
B50d94c:L50d94c:{c.instructions+=6;NFSU2_TR(0x50d94c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50d950:{NFSU2_TR(0x50d950);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50d954:{NFSU2_TR(0x50d954);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50d958:{NFSU2_TR(0x50d958);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50d95a:{NFSU2_TR(0x50d95a);
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
B50d95d:{NFSU2_TR(0x50d95d);
if(r1(R+514)){{goto L50d96c;}}
}
B50d95f:L50d95f:{c.instructions+=4;NFSU2_TR(0x50d95f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50d963:{NFSU2_TR(0x50d963);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50d967:{NFSU2_TR(0x50d967);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B50d96b:{NFSU2_TR(0x50d96b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d96c:L50d96c:{c.instructions+=2;NFSU2_TR(0x50d96c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50d972:{NFSU2_TR(0x50d972);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d973:L50d973:{c.instructions+=2;NFSU2_TR(0x50d973);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50d979:{NFSU2_TR(0x50d979);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d980:L50d980:{c.instructions+=3;NFSU2_TR(0x50d980);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d983:{NFSU2_TR(0x50d983);
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
B50d985:{NFSU2_TR(0x50d985);
if(r1(R+518)){{goto L50d9af;}}
}
B50d987:L50d987:{c.instructions+=4;NFSU2_TR(0x50d987);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50d98b:{NFSU2_TR(0x50d98b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d98c:{NFSU2_TR(0x50d98c);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B50d98f:{NFSU2_TR(0x50d98f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50d9ae;}}
}
B50d991:L50d991:{c.instructions+=13;NFSU2_TR(0x50d991);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50d994:{NFSU2_TR(0x50d994);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B50d996:{NFSU2_TR(0x50d996);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d997:{NFSU2_TR(0x50d997);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50d99b:{NFSU2_TR(0x50d99b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d99c:{NFSU2_TR(0x50d99c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50d9a0:{NFSU2_TR(0x50d9a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d9a1:{NFSU2_TR(0x50d9a1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d9a2:{NFSU2_TR(0x50d9a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50d9a6:{NFSU2_TR(0x50d9a6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d9a7:{NFSU2_TR(0x50d9a7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d9a8:{NFSU2_TR(0x50d9a8);
__builtin_memmove((R+4),(R+0),4);
}
B50d9aa:{NFSU2_TR(0x50d9aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d9adull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50d9ad:L50d9ad:{c.instructions+=1;NFSU2_TR(0x50d9ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50d9ae:L50d9ae:{c.instructions+=1;NFSU2_TR(0x50d9ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50d9af:L50d9af:{c.instructions+=1;NFSU2_TR(0x50d9af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50d9c0:L50d9c0:{c.instructions+=8;NFSU2_TR(0x50d9c0);
{u32 ea_=u32(r4(R+4)+u32(204u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50d9c6:{NFSU2_TR(0x50d9c6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50d9cc:{NFSU2_TR(0x50d9cc);
{u32 ea_=u32(r4(R+4)+u32(212u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50d9d2:{NFSU2_TR(0x50d9d2);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B50d9d4:{NFSU2_TR(0x50d9d4);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50d9d8:{NFSU2_TR(0x50d9d8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50d9da:{NFSU2_TR(0x50d9da);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50d9dd:{NFSU2_TR(0x50d9dd);
if(r1(R+518)){{goto L50da03;}}
}
B50d9df:L50d9df:{c.instructions+=5;NFSU2_TR(0x50d9df);
{u32 ea_=u32(r4(R+4)+u32(212u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50d9e5:{NFSU2_TR(0x50d9e5);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50d9e9:{NFSU2_TR(0x50d9e9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50d9eb:{NFSU2_TR(0x50d9eb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50d9ee:{NFSU2_TR(0x50d9ee);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L50da05;}}
}
B50d9f0:L50d9f0:{c.instructions+=4;NFSU2_TR(0x50d9f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50d9f4:{NFSU2_TR(0x50d9f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50d9f7:{NFSU2_TR(0x50d9f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50d9f8:{NFSU2_TR(0x50d9f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50d9fdull));
TAIL_STATIC(0x50ca50u,50c);
}
B50d9fd:L50d9fd:{c.instructions+=2;NFSU2_TR(0x50d9fd);
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
B50da00:{NFSU2_TR(0x50da00);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50da03:L50da03:{c.instructions+=1;NFSU2_TR(0x50da03);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B50da05:L50da05:{c.instructions+=4;NFSU2_TR(0x50da05);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50da09:{NFSU2_TR(0x50da09);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50da0c:{NFSU2_TR(0x50da0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50da0d:{NFSU2_TR(0x50da0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50da12ull));
TAIL_STATIC(0x50ca00u,50c);
}
B50da12:L50da12:{c.instructions+=2;NFSU2_TR(0x50da12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50da13:{NFSU2_TR(0x50da13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50da20:L50da20:{c.instructions+=9;NFSU2_TR(0x50da20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50da24:{NFSU2_TR(0x50da24);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50da28:{NFSU2_TR(0x50da28);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50da2e:{NFSU2_TR(0x50da2e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50da32:{NFSU2_TR(0x50da32);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50da38:{NFSU2_TR(0x50da38);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50da3c:{NFSU2_TR(0x50da3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x144ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50da42:{NFSU2_TR(0x50da42);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x148ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50da48:{NFSU2_TR(0x50da48);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50da50:L50da50:{c.instructions+=5;NFSU2_TR(0x50da50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50da51:{NFSU2_TR(0x50da51);
__builtin_memmove((R+24),(R+4),4);
}
B50da53:{NFSU2_TR(0x50da53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50da56:{NFSU2_TR(0x50da56);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50da58:{NFSU2_TR(0x50da58);
if(r1(R+518)){{goto L50da5f;}}
}
B50da5a:L50da5a:{c.instructions+=2;NFSU2_TR(0x50da5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50da5d:{NFSU2_TR(0x50da5d);
{goto L50da61;}
}
B50da5f:L50da5f:{c.instructions+=1;NFSU2_TR(0x50da5f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B50da61:L50da61:{c.instructions+=4;NFSU2_TR(0x50da61);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50da62:{NFSU2_TR(0x50da62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50da68:{NFSU2_TR(0x50da68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50da69:{NFSU2_TR(0x50da69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50da6eull));
TAIL_STATIC(0x50c900u,50c);
}
B50da6e:L50da6e:{c.instructions+=4;NFSU2_TR(0x50da6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50da71:{NFSU2_TR(0x50da71);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B50da74:{NFSU2_TR(0x50da74);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50da76:{NFSU2_TR(0x50da76);
if(r1(R+518)){{goto L50da8d;}}
}
B50da78:L50da78:{c.instructions+=5;NFSU2_TR(0x50da78);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50da7b:{NFSU2_TR(0x50da7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50da81:{NFSU2_TR(0x50da81);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50da82:{NFSU2_TR(0x50da82);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50da83:{NFSU2_TR(0x50da83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50da88ull));
TAIL_STATIC(0x50c900u,50c);
}
B50da88:L50da88:{c.instructions+=3;NFSU2_TR(0x50da88);
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
B50da8b:{NFSU2_TR(0x50da8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50da8c:{NFSU2_TR(0x50da8c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50da8d:L50da8d:{c.instructions+=5;NFSU2_TR(0x50da8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50da93:{NFSU2_TR(0x50da93);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B50da95:{NFSU2_TR(0x50da95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50da96:{NFSU2_TR(0x50da96);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50da97:{NFSU2_TR(0x50da97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50da9cull));
TAIL_STATIC(0x50c900u,50c);
}
B50da9c:L50da9c:{c.instructions+=3;NFSU2_TR(0x50da9c);
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
B50da9f:{NFSU2_TR(0x50da9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50daa0:{NFSU2_TR(0x50daa0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50dab0:L50dab0:{c.instructions+=6;NFSU2_TR(0x50dab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50dab3:{NFSU2_TR(0x50dab3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50dab4:{NFSU2_TR(0x50dab4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50dab8:{NFSU2_TR(0x50dab8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x4cull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x4cull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4cull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50dabb:{NFSU2_TR(0x50dabb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50dabc:{NFSU2_TR(0x50dabc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50dabfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50dabf:L50dabf:{c.instructions+=3;NFSU2_TR(0x50dabf);
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
B50dac1:{NFSU2_TR(0x50dac1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50dac4:{NFSU2_TR(0x50dac4);
if(r1(R+518)){{goto L50dada;}}
}
B50dac6:L50dac6:{c.instructions+=2;NFSU2_TR(0x50dac6);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B50dac9:{NFSU2_TR(0x50dac9);
if(r1(R+518)){{goto L50dada;}}
}
B50dacb:L50dacb:{c.instructions+=4;NFSU2_TR(0x50dacb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50dace:{NFSU2_TR(0x50dace);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x400000ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50dad4:{NFSU2_TR(0x50dad4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50dad7:{NFSU2_TR(0x50dad7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50dada:L50dada:{c.instructions+=2;NFSU2_TR(0x50dada);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50dadb:{NFSU2_TR(0x50dadb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50dae0:L50dae0:{c.instructions+=9;NFSU2_TR(0x50dae0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50dae4:{NFSU2_TR(0x50dae4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50dae8:{NFSU2_TR(0x50dae8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50daee:{NFSU2_TR(0x50daee);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50daf2:{NFSU2_TR(0x50daf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50daf5:{NFSU2_TR(0x50daf5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50daf9:{NFSU2_TR(0x50daf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50daff:{NFSU2_TR(0x50daff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50db05:{NFSU2_TR(0x50db05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50db10:L50db10:{c.instructions+=7;NFSU2_TR(0x50db10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50db11:{NFSU2_TR(0x50db11);
__builtin_memmove((R+24),(R+4),4);
}
B50db13:{NFSU2_TR(0x50db13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50db16:{NFSU2_TR(0x50db16);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50db17:{NFSU2_TR(0x50db17);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50db1b:{NFSU2_TR(0x50db1b);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B50db1d:{NFSU2_TR(0x50db1d);
if(r1(R+518)){{goto L50db36;}}
}
B50db1f:L50db1f:{c.instructions+=2;NFSU2_TR(0x50db1f);
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
B50db21:{NFSU2_TR(0x50db21);
if(r1(R+518)){{goto L50db28;}}
}
B50db23:L50db23:{c.instructions+=2;NFSU2_TR(0x50db23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B50db25:{NFSU2_TR(0x50db25);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50db28ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50db28:L50db28:{c.instructions+=6;NFSU2_TR(0x50db28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50db2b:{NFSU2_TR(0x50db2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50db2e:{NFSU2_TR(0x50db2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B50db30:{NFSU2_TR(0x50db30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50db31:{NFSU2_TR(0x50db31);
__builtin_memmove((R+4),(R+28),4);
}
B50db33:{NFSU2_TR(0x50db33);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50db36ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50db36:L50db36:{c.instructions+=3;NFSU2_TR(0x50db36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50db37:{NFSU2_TR(0x50db37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50db38:{NFSU2_TR(0x50db38);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50db40:L50db40:{c.instructions+=12;NFSU2_TR(0x50db40);
__builtin_memmove((R+0),(R+4),4);
}
B50db42:{NFSU2_TR(0x50db42);
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
B50db44:{NFSU2_TR(0x50db44);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B50db46:{NFSU2_TR(0x50db46);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50db49:{NFSU2_TR(0x50db49);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50db4c:{NFSU2_TR(0x50db4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50db4f:{NFSU2_TR(0x50db4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50db52:{NFSU2_TR(0x50db52);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50db55:{NFSU2_TR(0x50db55);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50db58:{NFSU2_TR(0x50db58);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
w4(U+4,u32(0x911c0a4bull));
s4(u32(r4(U+0)),r4(U+4));
}
B50db5f:{NFSU2_TR(0x50db5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
w4(U+4,u32(0x72619778ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50db66:{NFSU2_TR(0x50db66);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50db70:L50db70:{c.instructions+=3;NFSU2_TR(0x50db70);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50db73:{NFSU2_TR(0x50db73);
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
B50db75:{NFSU2_TR(0x50db75);
if(r1(R+518)){{goto L50db7e;}}
}
B50db77:L50db77:{c.instructions+=2;NFSU2_TR(0x50db77);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50db78:{NFSU2_TR(0x50db78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50db7dull));
TAIL_STATIC(0x575630u,575);
}
B50db7d:L50db7d:{c.instructions+=1;NFSU2_TR(0x50db7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50db7e:L50db7e:{c.instructions+=1;NFSU2_TR(0x50db7e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50db80:L50db80:{c.instructions+=5;NFSU2_TR(0x50db80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50db81:{NFSU2_TR(0x50db81);
__builtin_memmove((R+24),(R+4),4);
}
B50db83:{NFSU2_TR(0x50db83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50db86:{NFSU2_TR(0x50db86);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50db88:{NFSU2_TR(0x50db88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50dbaa;}}
}
B50db8a:L50db8a:{c.instructions+=4;NFSU2_TR(0x50db8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50db8e:{NFSU2_TR(0x50db8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50db8f:{NFSU2_TR(0x50db8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50db92:{NFSU2_TR(0x50db92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50db97ull));
TAIL_STATIC(0x575620u,575);
}
B50db97:L50db97:{c.instructions+=8;NFSU2_TR(0x50db97);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B50db9a:{NFSU2_TR(0x50db9a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B50db9c:{NFSU2_TR(0x50db9c);
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
B50db9e:{NFSU2_TR(0x50db9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50dba1:{NFSU2_TR(0x50dba1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B50dba4:{NFSU2_TR(0x50dba4);
__builtin_memmove((R+0),(R+4),1);
}
B50dba6:{NFSU2_TR(0x50dba6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50dba7:{NFSU2_TR(0x50dba7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50dbaa:L50dbaa:{c.instructions+=3;NFSU2_TR(0x50dbaa);
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
B50dbac:{NFSU2_TR(0x50dbac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50dbad:{NFSU2_TR(0x50dbad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50dbb0:L50dbb0:{c.instructions+=14;NFSU2_TR(0x50dbb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50dbb4:{NFSU2_TR(0x50dbb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50dbb8:{NFSU2_TR(0x50dbb8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50dbb9:{NFSU2_TR(0x50dbb9);
__builtin_memmove((R+24),(R+4),4);
}
B50dbbb:{NFSU2_TR(0x50dbbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50dbbf:{NFSU2_TR(0x50dbbf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B50dbc1:{NFSU2_TR(0x50dbc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50dbc5:{NFSU2_TR(0x50dbc5);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50dbc7:{NFSU2_TR(0x50dbc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50dbca:{NFSU2_TR(0x50dbca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50dbcb:{NFSU2_TR(0x50dbcb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B50dbce:{NFSU2_TR(0x50dbce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50dbcf:{NFSU2_TR(0x50dbcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50dbd2:{NFSU2_TR(0x50dbd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50dbd7ull));
TAIL_STATIC(0x43dc00u,43d);
}
B50dbd7:L50dbd7:{c.instructions+=5;NFSU2_TR(0x50dbd7);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50dbdb:{NFSU2_TR(0x50dbdb);
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
B50dbde:{NFSU2_TR(0x50dbde);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50dbe1:{NFSU2_TR(0x50dbe1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50dbe2:{NFSU2_TR(0x50dbe2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50dbf0:L50dbf0:{c.instructions+=11;NFSU2_TR(0x50dbf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50dbf4:{NFSU2_TR(0x50dbf4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50dbf5:{NFSU2_TR(0x50dbf5);
__builtin_memmove((R+0),(R+4),4);
}
B50dbf7:{NFSU2_TR(0x50dbf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50dbfa:{NFSU2_TR(0x50dbfa);
w4(R+24,u32(0x7fffffffull));
}
B50dbff:{NFSU2_TR(0x50dbff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50dc00:{NFSU2_TR(0x50dc00);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50dc03:{NFSU2_TR(0x50dc03);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B50dc05:{NFSU2_TR(0x50dc05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B50dc08:{NFSU2_TR(0x50dc08);
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
B50dc0a:{NFSU2_TR(0x50dc0a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L50dc5c;}}
}
B50dc0c:L50dc0c:{c.instructions+=14;NFSU2_TR(0x50dc0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50dc0f:{NFSU2_TR(0x50dc0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50dc12:{NFSU2_TR(0x50dc12);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B50dc14:{NFSU2_TR(0x50dc14);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50dc17:{NFSU2_TR(0x50dc17);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B50dc1a:{NFSU2_TR(0x50dc1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50dc1d:{NFSU2_TR(0x50dc1d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50dc21:{NFSU2_TR(0x50dc21);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+8))));
}
B50dc23:{NFSU2_TR(0x50dc23);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50dc24:{NFSU2_TR(0x50dc24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50dc27:{NFSU2_TR(0x50dc27);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B50dc2a:{NFSU2_TR(0x50dc2a);
__builtin_memmove((R+4),(R+8),4);
}
B50dc2c:{NFSU2_TR(0x50dc2c);
__builtin_memmove((R+12),(R+4),4);
}
B50dc2e:{NFSU2_TR(0x50dc2e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B50dc31:L50dc31:{c.instructions+=1;NFSU2_TR(0x50dc31);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L50dc33;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50dc31u);}goto L50dc31;}
}
B50dc33:L50dc33:{c.instructions+=2;NFSU2_TR(0x50dc33);
__builtin_memmove((R+4),(R+12),4);
}
B50dc35:{NFSU2_TR(0x50dc35);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B50dc38:L50dc38:{c.instructions+=1;NFSU2_TR(0x50dc38);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L50dc3a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50dc38u);}goto L50dc38;}
}
B50dc3a:L50dc3a:{c.instructions+=12;NFSU2_TR(0x50dc3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50dc3d:{NFSU2_TR(0x50dc3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50dc40:{NFSU2_TR(0x50dc40);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B50dc43:{NFSU2_TR(0x50dc43);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
w2(U+8,u16(0x0ull));
s2(u32(r4(U+4)),r2(U+8));
}
B50dc49:{NFSU2_TR(0x50dc49);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50dc4c:{NFSU2_TR(0x50dc4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50dc4f:{NFSU2_TR(0x50dc4f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B50dc50:{NFSU2_TR(0x50dc50);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B50dc53:{NFSU2_TR(0x50dc53);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+8)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50dc55:{NFSU2_TR(0x50dc55);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50dc58:{NFSU2_TR(0x50dc58);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50dc5b:{NFSU2_TR(0x50dc5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50dc5c:L50dc5c:{c.instructions+=3;NFSU2_TR(0x50dc5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50dc5d:{NFSU2_TR(0x50dc5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50dc5e:{NFSU2_TR(0x50dc5e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50dc70:L50dc70:{c.instructions+=5;NFSU2_TR(0x50dc70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50dc74:{NFSU2_TR(0x50dc74);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((R+4),(U+0),2);
}
B50dc77:{NFSU2_TR(0x50dc77);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B50dc79:{NFSU2_TR(0x50dc79);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(U+4,u16(u32(r2(R+4))&u32(r2(R+4))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B50dc7c:{NFSU2_TR(0x50dc7c);
if(r1(R+518)){{goto L50dc9e;}}
}
B50dc7e:L50dc7e:{c.instructions+=1;NFSU2_TR(0x50dc7e);
__builtin_memmove((R+28),(R+28),4);
}
B50dc80:L50dc80:{c.instructions+=2;NFSU2_TR(0x50dc80);
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
B50dc82:{NFSU2_TR(0x50dc82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50dc9e;}}
}
B50dc84:L50dc84:{c.instructions+=2;NFSU2_TR(0x50dc84);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xaull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B50dc88:{NFSU2_TR(0x50dc88);
if(r1(R+518)){{goto L50dc90;}}
}
B50dc8a:L50dc8a:{c.instructions+=2;NFSU2_TR(0x50dc8a);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x5eull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B50dc8e:{NFSU2_TR(0x50dc8e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50dc92;}}
}
B50dc90:L50dc90:{c.instructions+=1;NFSU2_TR(0x50dc90);
__builtin_memmove((R+0),(R+8),4);
}
B50dc92:L50dc92:{c.instructions+=4;NFSU2_TR(0x50dc92);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B50dc96:{NFSU2_TR(0x50dc96);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B50dc99:{NFSU2_TR(0x50dc99);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(U+4,u16(u32(r2(R+4))&u32(r2(R+4))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B50dc9c:{NFSU2_TR(0x50dc9c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50dc80u);}goto L50dc80;}}
}
B50dc9e:L50dc9e:{c.instructions+=1;NFSU2_TR(0x50dc9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50dcb0:L50dcb0:{c.instructions+=3;NFSU2_TR(0x50dcb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50dcb4:{NFSU2_TR(0x50dcb4);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((U+6),(U+0),2);
w1(R+512,u8((r2(U+6))<(u16(0x0ull))));
w1(R+523,sborrow<u16>(r2(U+6),u16(0x0ull)));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
w2(U+2,u16(u32(r2(U+8))&u32(u16(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r2(U+2)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50dcb8:{NFSU2_TR(0x50dcb8);
if(r1(R+518)){{goto L50dcc9;}}
}
B50dcba:L50dcba:{c.instructions+=1;NFSU2_TR(0x50dcba);
__builtin_memmove((R+12),(R+12),4);
}
B50dcc0:L50dcc0:{c.instructions+=3;NFSU2_TR(0x50dcc0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B50dcc3:{NFSU2_TR(0x50dcc3);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((U+6),(U+0),2);
w1(R+512,u8((r2(U+6))<(u16(0x0ull))));
w1(R+523,sborrow<u16>(r2(U+6),u16(0x0ull)));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
w2(U+2,u16(u32(r2(U+8))&u32(u16(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r2(U+2)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50dcc7:{NFSU2_TR(0x50dcc7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50dcc0u);}goto L50dcc0;}}
}
B50dcc9:L50dcc9:{c.instructions+=1;NFSU2_TR(0x50dcc9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50dcd0:L50dcd0:{c.instructions+=7;NFSU2_TR(0x50dcd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B50dcd3:{NFSU2_TR(0x50dcd3);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50dcd7:{NFSU2_TR(0x50dcd7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50dcd8:{NFSU2_TR(0x50dcd8);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B50dcda:{NFSU2_TR(0x50dcda);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50dcdc:{NFSU2_TR(0x50dcdc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50dce0:{NFSU2_TR(0x50dce0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L50ddcb;}}
}
B50dce6:L50dce6:{c.instructions+=6;NFSU2_TR(0x50dce6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50dce7:{NFSU2_TR(0x50dce7);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50dceb:{NFSU2_TR(0x50dceb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50dcec:{NFSU2_TR(0x50dcec);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B50dcf0:{NFSU2_TR(0x50dcf0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50dcf1:{NFSU2_TR(0x50dcf1);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50dcf5:L50dcf5:{c.instructions+=42;NFSU2_TR(0x50dcf5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B50dcf9:{NFSU2_TR(0x50dcf9);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B50dcfd:{NFSU2_TR(0x50dcfd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50dcff:{NFSU2_TR(0x50dcff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50dd00:{NFSU2_TR(0x50dd00);
{u32 ea_=u32(u32(7967612u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50dd06:{NFSU2_TR(0x50dd06);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50dd0e:{NFSU2_TR(0x50dd0e);
{u32 ea_=u32(u32(7973904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50dd14:{NFSU2_TR(0x50dd14);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50dd18:{NFSU2_TR(0x50dd18);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50dd20:{NFSU2_TR(0x50dd20);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B50dd22:{NFSU2_TR(0x50dd22);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50dd2a:{NFSU2_TR(0x50dd2a);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50dd2c:{NFSU2_TR(0x50dd2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50dd34:{NFSU2_TR(0x50dd34);
{u32 ea_=u32(u32(7973904u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50dd3a:{NFSU2_TR(0x50dd3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50dd3e:{NFSU2_TR(0x50dd3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50dd46:{NFSU2_TR(0x50dd46);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50dd4e:{NFSU2_TR(0x50dd4e);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B50dd50:{NFSU2_TR(0x50dd50);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50dd56:{NFSU2_TR(0x50dd56);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50dd5a:{NFSU2_TR(0x50dd5a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B50dd5c:{NFSU2_TR(0x50dd5c);
{u32 ea_=u32(u32(7973908u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50dd62:{NFSU2_TR(0x50dd62);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50dd66:{NFSU2_TR(0x50dd66);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50dd69:{NFSU2_TR(0x50dd69);
{u32 ea_=u32(u32(7973908u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50dd6f:{NFSU2_TR(0x50dd6f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50dd73:{NFSU2_TR(0x50dd73);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50dd79:{NFSU2_TR(0x50dd79);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B50dd7b:{NFSU2_TR(0x50dd7b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50dd7f:{NFSU2_TR(0x50dd7f);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50dd82:{NFSU2_TR(0x50dd82);
{u32 ea_=u32(u32(7973904u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50dd88:{NFSU2_TR(0x50dd88);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B50dd8a:{NFSU2_TR(0x50dd8a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50dd90:{NFSU2_TR(0x50dd90);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50dd94:{NFSU2_TR(0x50dd94);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B50dd96:{NFSU2_TR(0x50dd96);
{u32 ea_=u32(r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50dd99:{NFSU2_TR(0x50dd99);
{u32 ea_=u32(u32(7973908u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50dd9f:{NFSU2_TR(0x50dd9f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50dda3:{NFSU2_TR(0x50dda3);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50dda9:{NFSU2_TR(0x50dda9);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B50ddab:{NFSU2_TR(0x50ddab);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50ddaf:{NFSU2_TR(0x50ddaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50ddb4ull));
TAIL_STATIC(0x5c5750u,5c5);
}
B50ddb4:L50ddb4:{c.instructions+=6;NFSU2_TR(0x50ddb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50ddb8:{NFSU2_TR(0x50ddb8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B50ddbb:{NFSU2_TR(0x50ddbb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B50ddbc:{NFSU2_TR(0x50ddbc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B50ddbe:{NFSU2_TR(0x50ddbe);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50ddc2:{NFSU2_TR(0x50ddc2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50dcf5u);}goto L50dcf5;}}
}
B50ddc8:L50ddc8:{c.instructions+=3;NFSU2_TR(0x50ddc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50ddc9:{NFSU2_TR(0x50ddc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50ddca:{NFSU2_TR(0x50ddca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50ddcb:L50ddcb:{c.instructions+=3;NFSU2_TR(0x50ddcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50ddcc:{NFSU2_TR(0x50ddcc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x44ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x44ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50ddcf:{NFSU2_TR(0x50ddcf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ddd0:L50ddd0:{c.instructions+=10;NFSU2_TR(0x50ddd0);
__builtin_memmove((R+0),(R+4),4);
}
B50ddd2:{NFSU2_TR(0x50ddd2);
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
B50ddd4:{NFSU2_TR(0x50ddd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50ddd7:{NFSU2_TR(0x50ddd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50ddda:{NFSU2_TR(0x50ddda);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50dddd:{NFSU2_TR(0x50dddd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50dde0:{NFSU2_TR(0x50dde0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50dde3:{NFSU2_TR(0x50dde3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50dde6:{NFSU2_TR(0x50dde6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50dde9:{NFSU2_TR(0x50dde9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ddf0:L50ddf0:{c.instructions+=5;NFSU2_TR(0x50ddf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ddf1:{NFSU2_TR(0x50ddf1);
__builtin_memmove((R+24),(R+4),4);
}
B50ddf3:{NFSU2_TR(0x50ddf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50ddf6:{NFSU2_TR(0x50ddf6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ddf7:{NFSU2_TR(0x50ddf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50ddfcull));
TAIL_STATIC(0x575630u,575);
}
B50ddfc:L50ddfc:{c.instructions+=4;NFSU2_TR(0x50ddfc);
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
B50ddff:{NFSU2_TR(0x50ddff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50de06:{NFSU2_TR(0x50de06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50de07:{NFSU2_TR(0x50de07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50de10:L50de10:{c.instructions+=12;NFSU2_TR(0x50de10);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50de16:{NFSU2_TR(0x50de16);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50de18:{NFSU2_TR(0x50de18);
u8 U[4];
w4(U+0,u32(0x776fd4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50de1d:{NFSU2_TR(0x50de1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50de1e:{NFSU2_TR(0x50de1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50de22:{NFSU2_TR(0x50de22);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50de29:{NFSU2_TR(0x50de29);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50de2a:{NFSU2_TR(0x50de2a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50de2b:{NFSU2_TR(0x50de2b);
__builtin_memmove((R+24),(R+4),4);
}
B50de2d:{NFSU2_TR(0x50de2d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B50de30:{NFSU2_TR(0x50de30);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50de31:{NFSU2_TR(0x50de31);
if(r1(R+518)){{goto L50de79;}}
}
B50de33:L50de33:{c.instructions+=4;NFSU2_TR(0x50de33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50de36:{NFSU2_TR(0x50de36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50de39:{NFSU2_TR(0x50de39);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50de3a:{NFSU2_TR(0x50de3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50de3full));
TAIL_STATIC(0x575630u,575);
}
B50de3f:L50de3f:{c.instructions+=4;NFSU2_TR(0x50de3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50de42:{NFSU2_TR(0x50de42);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B50de49:{NFSU2_TR(0x50de49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50de4a:{NFSU2_TR(0x50de4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50de4full));
TAIL_STATIC(0x575620u,575);
}
B50de4f:L50de4f:{c.instructions+=6;NFSU2_TR(0x50de4f);
__builtin_memmove((R+28),(R+0),4);
}
B50de51:{NFSU2_TR(0x50de51);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B50de54:{NFSU2_TR(0x50de54);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50de58:{NFSU2_TR(0x50de58);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50de5a:{NFSU2_TR(0x50de5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50de62:{NFSU2_TR(0x50de62);
if(r1(R+518)){{goto L50de74;}}
}
B50de64:L50de64:{c.instructions+=5;NFSU2_TR(0x50de64);
u8 U[4];
w4(U+0,u32(0x502fd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50de69:{NFSU2_TR(0x50de69);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50de6a:{NFSU2_TR(0x50de6a);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50de6c:{NFSU2_TR(0x50de6c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50de6d:{NFSU2_TR(0x50de6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50de72ull));
TAIL_STATIC(0x401650u,401);
}
B50de72:L50de72:{c.instructions+=1;NFSU2_TR(0x50de72);
{goto L50de76;}
}
B50de74:L50de74:{c.instructions+=1;NFSU2_TR(0x50de74);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B50de76:L50de76:{c.instructions+=1;NFSU2_TR(0x50de76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50de79:L50de79:{c.instructions+=7;NFSU2_TR(0x50de79);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50de7d:{NFSU2_TR(0x50de7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50de7e:{NFSU2_TR(0x50de7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50de7f:{NFSU2_TR(0x50de7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50de86:{NFSU2_TR(0x50de86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50de87:{NFSU2_TR(0x50de87);
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
B50de8a:{NFSU2_TR(0x50de8a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50de90:L50de90:{c.instructions+=29;NFSU2_TR(0x50de90);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50de91:{NFSU2_TR(0x50de91);
__builtin_memmove((R+20),(R+16),4);
}
B50de93:{NFSU2_TR(0x50de93);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B50de96:{NFSU2_TR(0x50de96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x38ull))));
}
B50de99:{NFSU2_TR(0x50de99);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50de9c:{NFSU2_TR(0x50de9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50de9f:{NFSU2_TR(0x50de9f);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50dea2:{NFSU2_TR(0x50dea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50dea5:{NFSU2_TR(0x50dea5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50dea6:{NFSU2_TR(0x50dea6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50dea7:{NFSU2_TR(0x50dea7);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50deab:{NFSU2_TR(0x50deab);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50deae:{NFSU2_TR(0x50deae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50deaf:{NFSU2_TR(0x50deaf);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50deb2:{NFSU2_TR(0x50deb2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50deb3:{NFSU2_TR(0x50deb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50deb6:{NFSU2_TR(0x50deb6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50deb8:{NFSU2_TR(0x50deb8);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50debc:{NFSU2_TR(0x50debc);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50dec0:{NFSU2_TR(0x50dec0);
__builtin_memmove((R+0),(R+8),4);
}
B50dec2:{NFSU2_TR(0x50dec2);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50dec6:{NFSU2_TR(0x50dec6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50decc:{NFSU2_TR(0x50decc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50ded0:{NFSU2_TR(0x50ded0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50ded4:{NFSU2_TR(0x50ded4);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50ded8:{NFSU2_TR(0x50ded8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50dee0:{NFSU2_TR(0x50dee0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50dee8:{NFSU2_TR(0x50dee8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50def0:{NFSU2_TR(0x50def0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L50df42;}}
}
B50def2:L50def2:{c.instructions+=4;NFSU2_TR(0x50def2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50def5:{NFSU2_TR(0x50def5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2cull))));
}
B50def8:{NFSU2_TR(0x50def8);
__builtin_memmove((R+12),(R+28),4);
}
B50defa:{NFSU2_TR(0x50defa);
__builtin_memmove((R+12),(R+12),4);
}
B50df00:L50df00:{c.instructions+=11;NFSU2_TR(0x50df00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B50df02:{NFSU2_TR(0x50df02);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50df05:{NFSU2_TR(0x50df05);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+20),(U+12),4);
}
B50df09:{NFSU2_TR(0x50df09);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B50df0d:{NFSU2_TR(0x50df0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50df11:{NFSU2_TR(0x50df11);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50df15:{NFSU2_TR(0x50df15);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50df19:{NFSU2_TR(0x50df19);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50df1d:{NFSU2_TR(0x50df1d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50df1f:{NFSU2_TR(0x50df1f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50df22:{NFSU2_TR(0x50df22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50df3c;}}
}
B50df24:L50df24:{c.instructions+=8;NFSU2_TR(0x50df24);
__builtin_memmove((R+0),(R+20),4);
}
B50df26:{NFSU2_TR(0x50df26);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B50df28:{NFSU2_TR(0x50df28);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50df2a:{NFSU2_TR(0x50df2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50df2e:{NFSU2_TR(0x50df2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50df31:{NFSU2_TR(0x50df31);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50df35:{NFSU2_TR(0x50df35);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50df38:{NFSU2_TR(0x50df38);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50df3c:L50df3c:{c.instructions+=3;NFSU2_TR(0x50df3c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x30ull))));
}
B50df3f:{NFSU2_TR(0x50df3f);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B50df40:{NFSU2_TR(0x50df40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50df00u);}goto L50df00;}}
}
B50df42:L50df42:{c.instructions+=8;NFSU2_TR(0x50df42);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50df46:{NFSU2_TR(0x50df46);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B50df48:{NFSU2_TR(0x50df48);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50df4b:{NFSU2_TR(0x50df4b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B50df4d:{NFSU2_TR(0x50df4d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B50df51:{NFSU2_TR(0x50df51);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50df53:{NFSU2_TR(0x50df53);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50df56:{NFSU2_TR(0x50df56);
if(r1(R+518)){{goto L50df5e;}}
}
B50df58:L50df58:{c.instructions+=2;NFSU2_TR(0x50df58);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B50df5a:{NFSU2_TR(0x50df5a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50df5e:L50df5e:{c.instructions+=5;NFSU2_TR(0x50df5e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50df62:{NFSU2_TR(0x50df62);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B50df64:{NFSU2_TR(0x50df64);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50df66:{NFSU2_TR(0x50df66);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50df69:{NFSU2_TR(0x50df69);
if(r1(R+514)){{goto L50df71;}}
}
B50df6b:L50df6b:{c.instructions+=2;NFSU2_TR(0x50df6b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B50df6d:{NFSU2_TR(0x50df6d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50df71:L50df71:{c.instructions+=13;NFSU2_TR(0x50df71);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50df75:{NFSU2_TR(0x50df75);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B50df77:{NFSU2_TR(0x50df77);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50df79:{NFSU2_TR(0x50df79);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50df7d:{NFSU2_TR(0x50df7d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50df81:{NFSU2_TR(0x50df81);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50df85:{NFSU2_TR(0x50df85);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B50df87:{NFSU2_TR(0x50df87);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50df8b:{NFSU2_TR(0x50df8b);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50df8f:{NFSU2_TR(0x50df8f);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B50df91:{NFSU2_TR(0x50df91);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50df95:{NFSU2_TR(0x50df95);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50df99:{NFSU2_TR(0x50df99);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x50e113u,50e);}
}
B50df9f:L50df9f:{c.instructions+=9;NFSU2_TR(0x50df9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50dfa3:{NFSU2_TR(0x50dfa3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50dfa7:{NFSU2_TR(0x50dfa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50dfaa:{NFSU2_TR(0x50dfaa);
u8 U[16];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B50dfae:{NFSU2_TR(0x50dfae);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B50dfb0:{NFSU2_TR(0x50dfb0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B50dfb2:{NFSU2_TR(0x50dfb2);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B50dfb3:{NFSU2_TR(0x50dfb3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50dfb5:{NFSU2_TR(0x50dfb5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x50e0f4u,50e);}
}
B50dfbb:L50dfbb:{c.instructions+=15;NFSU2_TR(0x50dfbb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+20),(U+0),4);
}
B50dfbe:{NFSU2_TR(0x50dfbe);
__builtin_memmove((R+28),(R+28),4);
}
B50dfc0:{NFSU2_TR(0x50dfc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50dfc3:{NFSU2_TR(0x50dfc3);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B50dfc7:{NFSU2_TR(0x50dfc7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50dfc8:{NFSU2_TR(0x50dfc8);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B50dfcc:{NFSU2_TR(0x50dfcc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50dfcd:{NFSU2_TR(0x50dfcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B50dfd0:{NFSU2_TR(0x50dfd0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50dfd1:{NFSU2_TR(0x50dfd1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B50dfd4:{NFSU2_TR(0x50dfd4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50dfd5:{NFSU2_TR(0x50dfd5);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B50dfd9:{NFSU2_TR(0x50dfd9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50dfda:{NFSU2_TR(0x50dfda);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50dfdb:{NFSU2_TR(0x50dfdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50dfe0ull));
TAIL_STATIC(0x4fe050u,4fe);
}
B50dfe0:L50dfe0:{c.instructions+=12;NFSU2_TR(0x50dfe0);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B50dfe4:{NFSU2_TR(0x50dfe4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50dfe5:{NFSU2_TR(0x50dfe5);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B50dfe9:{NFSU2_TR(0x50dfe9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50dfea:{NFSU2_TR(0x50dfea);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50dfeb:{NFSU2_TR(0x50dfeb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B50dfee:{NFSU2_TR(0x50dfee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50dfef:{NFSU2_TR(0x50dfef);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B50dff2:{NFSU2_TR(0x50dff2);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B50dff6:{NFSU2_TR(0x50dff6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50dff7:{NFSU2_TR(0x50dff7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50dff8:{NFSU2_TR(0x50dff8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50dffdull));
TAIL_STATIC(0x4fe050u,4fe);
}
B50dffd:L50dffd:{c.instructions+=1;NFSU2_TR(0x50dffd);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
TAIL_STATIC(0x50e001u,50e);
}
XIT:NFSU2_TR_EXIT(0x50d,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
