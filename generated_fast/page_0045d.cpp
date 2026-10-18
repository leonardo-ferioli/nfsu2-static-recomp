#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_45a(u8* __restrict R,Cpu& c);
u32 body_45b(u8* __restrict R,Cpu& c);
u32 body_45e(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x45d,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x45d,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_45d(u8* __restrict R,Cpu& c);
u32 page_45d(Cpu& c){return body_45d(c.regs.data(),c);}
__attribute__((noinline)) u32 body_45d(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x45d000:goto L45d000;
case 0x45d002:c.instructions+=18;goto B45d002;
case 0x45d005:c.instructions+=17;goto B45d005;
case 0x45d008:c.instructions+=16;goto B45d008;
case 0x45d00e:c.instructions+=15;goto B45d00e;
case 0x45d014:c.instructions+=14;goto B45d014;
case 0x45d01a:c.instructions+=13;goto B45d01a;
case 0x45d01d:c.instructions+=12;goto B45d01d;
case 0x45d01f:c.instructions+=11;goto B45d01f;
case 0x45d022:c.instructions+=10;goto B45d022;
case 0x45d028:c.instructions+=9;goto B45d028;
case 0x45d02a:c.instructions+=8;goto B45d02a;
case 0x45d030:c.instructions+=7;goto B45d030;
case 0x45d036:c.instructions+=6;goto B45d036;
case 0x45d039:c.instructions+=5;goto B45d039;
case 0x45d043:c.instructions+=4;goto B45d043;
case 0x45d049:c.instructions+=3;goto B45d049;
case 0x45d04a:c.instructions+=2;goto B45d04a;
case 0x45d04b:c.instructions+=1;goto B45d04b;
case 0x45d050:goto L45d050;
case 0x45d052:c.instructions+=5;goto B45d052;
case 0x45d056:c.instructions+=4;goto B45d056;
case 0x45d059:c.instructions+=3;goto B45d059;
case 0x45d05f:c.instructions+=2;goto B45d05f;
case 0x45d065:c.instructions+=1;goto B45d065;
case 0x45d070:goto L45d070;
case 0x45d074:c.instructions+=2;goto B45d074;
case 0x45d077:c.instructions+=1;goto B45d077;
case 0x45d079:goto L45d079;
case 0x45d07a:c.instructions+=1;goto B45d07a;
case 0x45d07c:goto L45d07c;
case 0x45d07d:c.instructions+=1;goto B45d07d;
case 0x45d07f:goto L45d07f;
case 0x45d082:c.instructions+=1;goto B45d082;
case 0x45d085:goto L45d085;
case 0x45d08a:c.instructions+=1;goto B45d08a;
case 0x45d08d:goto L45d08d;
case 0x45d092:c.instructions+=1;goto B45d092;
case 0x45d095:goto L45d095;
case 0x45d09a:c.instructions+=1;goto B45d09a;
case 0x45d0a0:goto L45d0a0;
case 0x45d0a3:c.instructions+=14;goto B45d0a3;
case 0x45d0a6:c.instructions+=13;goto B45d0a6;
case 0x45d0a9:c.instructions+=12;goto B45d0a9;
case 0x45d0af:c.instructions+=11;goto B45d0af;
case 0x45d0b0:c.instructions+=10;goto B45d0b0;
case 0x45d0b6:c.instructions+=9;goto B45d0b6;
case 0x45d0bc:c.instructions+=8;goto B45d0bc;
case 0x45d0c2:c.instructions+=7;goto B45d0c2;
case 0x45d0c8:c.instructions+=6;goto B45d0c8;
case 0x45d0cb:c.instructions+=5;goto B45d0cb;
case 0x45d0d1:c.instructions+=4;goto B45d0d1;
case 0x45d0d4:c.instructions+=3;goto B45d0d4;
case 0x45d0da:c.instructions+=2;goto B45d0da;
case 0x45d0dc:c.instructions+=1;goto B45d0dc;
case 0x45d0de:goto L45d0de;
case 0x45d0e4:goto L45d0e4;
case 0x45d0ea:c.instructions+=1;goto B45d0ea;
case 0x45d0ef:goto L45d0ef;
case 0x45d0f2:c.instructions+=3;goto B45d0f2;
case 0x45d0f8:c.instructions+=2;goto B45d0f8;
case 0x45d0fa:c.instructions+=1;goto B45d0fa;
case 0x45d0fc:goto L45d0fc;
case 0x45d0ff:c.instructions+=2;goto B45d0ff;
case 0x45d105:c.instructions+=1;goto B45d105;
case 0x45d107:goto L45d107;
case 0x45d10d:c.instructions+=3;goto B45d10d;
case 0x45d10e:c.instructions+=2;goto B45d10e;
case 0x45d110:c.instructions+=1;goto B45d110;
case 0x45d115:goto L45d115;
case 0x45d117:goto L45d117;
case 0x45d11a:c.instructions+=3;goto B45d11a;
case 0x45d11d:c.instructions+=2;goto B45d11d;
case 0x45d120:c.instructions+=1;goto B45d120;
case 0x45d122:goto L45d122;
case 0x45d124:c.instructions+=1;goto B45d124;
case 0x45d126:goto L45d126;
case 0x45d12a:c.instructions+=2;goto B45d12a;
case 0x45d130:c.instructions+=1;goto B45d130;
case 0x45d132:goto L45d132;
case 0x45d138:c.instructions+=3;goto B45d138;
case 0x45d139:c.instructions+=2;goto B45d139;
case 0x45d13b:c.instructions+=1;goto B45d13b;
case 0x45d140:goto L45d140;
case 0x45d142:goto L45d142;
case 0x45d146:c.instructions+=1;goto B45d146;
case 0x45d148:goto L45d148;
case 0x45d14e:c.instructions+=5;goto B45d14e;
case 0x45d14f:c.instructions+=4;goto B45d14f;
case 0x45d155:c.instructions+=3;goto B45d155;
case 0x45d157:c.instructions+=2;goto B45d157;
case 0x45d15a:c.instructions+=1;goto B45d15a;
case 0x45d15f:goto L45d15f;
case 0x45d161:goto L45d161;
case 0x45d167:c.instructions+=2;goto B45d167;
case 0x45d168:c.instructions+=1;goto B45d168;
case 0x45d16a:goto L45d16a;
case 0x45d170:c.instructions+=1;goto B45d170;
case 0x45d176:goto L45d176;
case 0x45d177:goto L45d177;
case 0x45d179:c.instructions+=1;goto B45d179;
case 0x45d17e:goto L45d17e;
case 0x45d180:c.instructions+=3;goto B45d180;
case 0x45d182:c.instructions+=2;goto B45d182;
case 0x45d183:c.instructions+=1;goto B45d183;
case 0x45d190:goto L45d190;
case 0x45d191:c.instructions+=6;goto B45d191;
case 0x45d193:c.instructions+=5;goto B45d193;
case 0x45d194:c.instructions+=4;goto B45d194;
case 0x45d197:c.instructions+=3;goto B45d197;
case 0x45d19d:c.instructions+=2;goto B45d19d;
case 0x45d1a3:c.instructions+=1;goto B45d1a3;
case 0x45d1a8:goto L45d1a8;
case 0x45d1ab:c.instructions+=3;goto B45d1ab;
case 0x45d1b1:c.instructions+=2;goto B45d1b1;
case 0x45d1b7:c.instructions+=1;goto B45d1b7;
case 0x45d1bc:goto L45d1bc;
case 0x45d1c2:c.instructions+=3;goto B45d1c2;
case 0x45d1c5:c.instructions+=2;goto B45d1c5;
case 0x45d1cb:c.instructions+=1;goto B45d1cb;
case 0x45d1d0:goto L45d1d0;
case 0x45d1d6:c.instructions+=3;goto B45d1d6;
case 0x45d1dc:c.instructions+=2;goto B45d1dc;
case 0x45d1e2:c.instructions+=1;goto B45d1e2;
case 0x45d1e7:goto L45d1e7;
case 0x45d1e8:c.instructions+=3;goto B45d1e8;
case 0x45d1ee:c.instructions+=2;goto B45d1ee;
case 0x45d1ef:c.instructions+=1;goto B45d1ef;
case 0x45d1f0:goto L45d1f0;
case 0x45d1f5:c.instructions+=1;goto B45d1f5;
case 0x45d200:goto L45d200;
case 0x45d205:c.instructions+=1;goto B45d205;
case 0x45d210:goto L45d210;
case 0x45d212:c.instructions+=15;goto B45d212;
case 0x45d217:c.instructions+=14;goto B45d217;
case 0x45d21d:c.instructions+=13;goto B45d21d;
case 0x45d21e:c.instructions+=12;goto B45d21e;
case 0x45d225:c.instructions+=11;goto B45d225;
case 0x45d226:c.instructions+=10;goto B45d226;
case 0x45d227:c.instructions+=9;goto B45d227;
case 0x45d228:c.instructions+=8;goto B45d228;
case 0x45d22a:c.instructions+=7;goto B45d22a;
case 0x45d22b:c.instructions+=6;goto B45d22b;
case 0x45d22f:c.instructions+=5;goto B45d22f;
case 0x45d235:c.instructions+=4;goto B45d235;
case 0x45d238:c.instructions+=3;goto B45d238;
case 0x45d23d:c.instructions+=2;goto B45d23d;
case 0x45d23f:c.instructions+=1;goto B45d23f;
case 0x45d240:goto L45d240;
case 0x45d242:c.instructions+=4;goto B45d242;
case 0x45d245:c.instructions+=3;goto B45d245;
case 0x45d246:c.instructions+=2;goto B45d246;
case 0x45d24a:c.instructions+=1;goto B45d24a;
case 0x45d24c:goto L45d24c;
case 0x45d24f:c.instructions+=10;goto B45d24f;
case 0x45d252:c.instructions+=9;goto B45d252;
case 0x45d255:c.instructions+=8;goto B45d255;
case 0x45d258:c.instructions+=7;goto B45d258;
case 0x45d25b:c.instructions+=6;goto B45d25b;
case 0x45d261:c.instructions+=5;goto B45d261;
case 0x45d263:c.instructions+=4;goto B45d263;
case 0x45d265:c.instructions+=3;goto B45d265;
case 0x45d269:c.instructions+=2;goto B45d269;
case 0x45d26f:c.instructions+=1;goto B45d26f;
case 0x45d274:goto L45d274;
case 0x45d275:c.instructions+=3;goto B45d275;
case 0x45d277:c.instructions+=2;goto B45d277;
case 0x45d27c:c.instructions+=1;goto B45d27c;
case 0x45d281:goto L45d281;
case 0x45d286:c.instructions+=24;goto B45d286;
case 0x45d28b:c.instructions+=23;goto B45d28b;
case 0x45d291:c.instructions+=22;goto B45d291;
case 0x45d297:c.instructions+=21;goto B45d297;
case 0x45d29d:c.instructions+=20;goto B45d29d;
case 0x45d2a3:c.instructions+=19;goto B45d2a3;
case 0x45d2a9:c.instructions+=18;goto B45d2a9;
case 0x45d2af:c.instructions+=17;goto B45d2af;
case 0x45d2b5:c.instructions+=16;goto B45d2b5;
case 0x45d2b8:c.instructions+=15;goto B45d2b8;
case 0x45d2be:c.instructions+=14;goto B45d2be;
case 0x45d2c4:c.instructions+=13;goto B45d2c4;
case 0x45d2ca:c.instructions+=12;goto B45d2ca;
case 0x45d2d0:c.instructions+=11;goto B45d2d0;
case 0x45d2d6:c.instructions+=10;goto B45d2d6;
case 0x45d2da:c.instructions+=9;goto B45d2da;
case 0x45d2e0:c.instructions+=8;goto B45d2e0;
case 0x45d2e1:c.instructions+=7;goto B45d2e1;
case 0x45d2e8:c.instructions+=6;goto B45d2e8;
case 0x45d2ea:c.instructions+=5;goto B45d2ea;
case 0x45d2eb:c.instructions+=4;goto B45d2eb;
case 0x45d2ec:c.instructions+=3;goto B45d2ec;
case 0x45d2f3:c.instructions+=2;goto B45d2f3;
case 0x45d2f6:c.instructions+=1;goto B45d2f6;
case 0x45d300:goto L45d300;
case 0x45d306:c.instructions+=1;goto B45d306;
case 0x45d310:goto L45d310;
case 0x45d312:c.instructions+=12;goto B45d312;
case 0x45d317:c.instructions+=11;goto B45d317;
case 0x45d31d:c.instructions+=10;goto B45d31d;
case 0x45d31e:c.instructions+=9;goto B45d31e;
case 0x45d325:c.instructions+=8;goto B45d325;
case 0x45d326:c.instructions+=7;goto B45d326;
case 0x45d327:c.instructions+=6;goto B45d327;
case 0x45d329:c.instructions+=5;goto B45d329;
case 0x45d32d:c.instructions+=4;goto B45d32d;
case 0x45d333:c.instructions+=3;goto B45d333;
case 0x45d339:c.instructions+=2;goto B45d339;
case 0x45d341:c.instructions+=1;goto B45d341;
case 0x45d346:goto L45d346;
case 0x45d34a:c.instructions+=5;goto B45d34a;
case 0x45d350:c.instructions+=4;goto B45d350;
case 0x45d351:c.instructions+=3;goto B45d351;
case 0x45d358:c.instructions+=2;goto B45d358;
case 0x45d35b:c.instructions+=1;goto B45d35b;
case 0x45d360:goto L45d360;
case 0x45d365:c.instructions+=3;goto B45d365;
case 0x45d368:c.instructions+=2;goto B45d368;
case 0x45d36a:c.instructions+=1;goto B45d36a;
case 0x45d36f:goto L45d36f;
case 0x45d370:goto L45d370;
case 0x45d371:c.instructions+=6;goto B45d371;
case 0x45d373:c.instructions+=5;goto B45d373;
case 0x45d376:c.instructions+=4;goto B45d376;
case 0x45d37a:c.instructions+=3;goto B45d37a;
case 0x45d37d:c.instructions+=2;goto B45d37d;
case 0x45d380:c.instructions+=1;goto B45d380;
case 0x45d385:goto L45d385;
case 0x45d38b:c.instructions+=6;goto B45d38b;
case 0x45d38e:c.instructions+=5;goto B45d38e;
case 0x45d391:c.instructions+=4;goto B45d391;
case 0x45d394:c.instructions+=3;goto B45d394;
case 0x45d396:c.instructions+=2;goto B45d396;
case 0x45d399:c.instructions+=1;goto B45d399;
case 0x45d39e:goto L45d39e;
case 0x45d3a4:c.instructions+=10;goto B45d3a4;
case 0x45d3a7:c.instructions+=9;goto B45d3a7;
case 0x45d3ad:c.instructions+=8;goto B45d3ad;
case 0x45d3b0:c.instructions+=7;goto B45d3b0;
case 0x45d3b6:c.instructions+=6;goto B45d3b6;
case 0x45d3bc:c.instructions+=5;goto B45d3bc;
case 0x45d3bf:c.instructions+=4;goto B45d3bf;
case 0x45d3c5:c.instructions+=3;goto B45d3c5;
case 0x45d3c8:c.instructions+=2;goto B45d3c8;
case 0x45d3c9:c.instructions+=1;goto B45d3c9;
case 0x45d3d0:goto L45d3d0;
case 0x45d3d5:c.instructions+=1;goto B45d3d5;
case 0x45d3e0:goto L45d3e0;
case 0x45d3e5:c.instructions+=1;goto B45d3e5;
case 0x45d3f0:goto L45d3f0;
case 0x45d3f2:c.instructions+=10;goto B45d3f2;
case 0x45d3f7:c.instructions+=9;goto B45d3f7;
case 0x45d3fd:c.instructions+=8;goto B45d3fd;
case 0x45d3fe:c.instructions+=7;goto B45d3fe;
case 0x45d405:c.instructions+=6;goto B45d405;
case 0x45d406:c.instructions+=5;goto B45d406;
case 0x45d407:c.instructions+=4;goto B45d407;
case 0x45d408:c.instructions+=3;goto B45d408;
case 0x45d40a:c.instructions+=2;goto B45d40a;
case 0x45d40e:c.instructions+=1;goto B45d40e;
case 0x45d413:goto L45d413;
case 0x45d415:c.instructions+=4;goto B45d415;
case 0x45d41b:c.instructions+=3;goto B45d41b;
case 0x45d41f:c.instructions+=2;goto B45d41f;
case 0x45d425:c.instructions+=1;goto B45d425;
case 0x45d42a:goto L45d42a;
case 0x45d42e:c.instructions+=17;goto B45d42e;
case 0x45d433:c.instructions+=16;goto B45d433;
case 0x45d439:c.instructions+=15;goto B45d439;
case 0x45d43f:c.instructions+=14;goto B45d43f;
case 0x45d445:c.instructions+=13;goto B45d445;
case 0x45d44b:c.instructions+=12;goto B45d44b;
case 0x45d452:c.instructions+=11;goto B45d452;
case 0x45d458:c.instructions+=10;goto B45d458;
case 0x45d45e:c.instructions+=9;goto B45d45e;
case 0x45d464:c.instructions+=8;goto B45d464;
case 0x45d46a:c.instructions+=7;goto B45d46a;
case 0x45d470:c.instructions+=6;goto B45d470;
case 0x45d472:c.instructions+=5;goto B45d472;
case 0x45d473:c.instructions+=4;goto B45d473;
case 0x45d474:c.instructions+=3;goto B45d474;
case 0x45d47b:c.instructions+=2;goto B45d47b;
case 0x45d47e:c.instructions+=1;goto B45d47e;
case 0x45d480:goto L45d480;
case 0x45d482:c.instructions+=12;goto B45d482;
case 0x45d487:c.instructions+=11;goto B45d487;
case 0x45d48d:c.instructions+=10;goto B45d48d;
case 0x45d48e:c.instructions+=9;goto B45d48e;
case 0x45d495:c.instructions+=8;goto B45d495;
case 0x45d496:c.instructions+=7;goto B45d496;
case 0x45d497:c.instructions+=6;goto B45d497;
case 0x45d499:c.instructions+=5;goto B45d499;
case 0x45d49d:c.instructions+=4;goto B45d49d;
case 0x45d4a3:c.instructions+=3;goto B45d4a3;
case 0x45d4a9:c.instructions+=2;goto B45d4a9;
case 0x45d4b1:c.instructions+=1;goto B45d4b1;
case 0x45d4b6:goto L45d4b6;
case 0x45d4bc:c.instructions+=3;goto B45d4bc;
case 0x45d4c2:c.instructions+=2;goto B45d4c2;
case 0x45d4ca:c.instructions+=1;goto B45d4ca;
case 0x45d4cf:goto L45d4cf;
case 0x45d4d3:c.instructions+=5;goto B45d4d3;
case 0x45d4d9:c.instructions+=4;goto B45d4d9;
case 0x45d4da:c.instructions+=3;goto B45d4da;
case 0x45d4e1:c.instructions+=2;goto B45d4e1;
case 0x45d4e4:c.instructions+=1;goto B45d4e4;
case 0x45d4f0:goto L45d4f0;
case 0x45d4f4:c.instructions+=3;goto B45d4f4;
case 0x45d4f7:c.instructions+=2;goto B45d4f7;
case 0x45d4fa:c.instructions+=1;goto B45d4fa;
case 0x45d4fc:goto L45d4fc;
case 0x45d4ff:c.instructions+=1;goto B45d4ff;
case 0x45d501:goto L45d501;
case 0x45d504:c.instructions+=1;goto B45d504;
case 0x45d506:goto L45d506;
case 0x45d50d:c.instructions+=4;goto B45d50d;
case 0x45d510:c.instructions+=3;goto B45d510;
case 0x45d513:c.instructions+=2;goto B45d513;
case 0x45d516:c.instructions+=1;goto B45d516;
case 0x45d519:goto L45d519;
case 0x45d51b:c.instructions+=4;goto B45d51b;
case 0x45d51e:c.instructions+=3;goto B45d51e;
case 0x45d521:c.instructions+=2;goto B45d521;
case 0x45d524:c.instructions+=1;goto B45d524;
case 0x45d530:goto L45d530;
case 0x45d531:c.instructions+=2;goto B45d531;
case 0x45d533:c.instructions+=1;goto B45d533;
case 0x45d538:goto L45d538;
case 0x45d539:c.instructions+=2;goto B45d539;
case 0x45d53f:c.instructions+=1;goto B45d53f;
case 0x45d544:goto L45d544;
case 0x45d547:c.instructions+=6;goto B45d547;
case 0x45d54a:c.instructions+=5;goto B45d54a;
case 0x45d54d:c.instructions+=4;goto B45d54d;
case 0x45d550:c.instructions+=3;goto B45d550;
case 0x45d556:c.instructions+=2;goto B45d556;
case 0x45d557:c.instructions+=1;goto B45d557;
case 0x45d560:goto L45d560;
case 0x45d561:c.instructions+=5;goto B45d561;
case 0x45d566:c.instructions+=4;goto B45d566;
case 0x45d568:c.instructions+=3;goto B45d568;
case 0x45d569:c.instructions+=2;goto B45d569;
case 0x45d56b:c.instructions+=1;goto B45d56b;
case 0x45d56d:goto L45d56d;
case 0x45d572:c.instructions+=2;goto B45d572;
case 0x45d574:c.instructions+=1;goto B45d574;
case 0x45d576:goto L45d576;
case 0x45d57c:c.instructions+=5;goto B45d57c;
case 0x45d582:c.instructions+=4;goto B45d582;
case 0x45d584:c.instructions+=3;goto B45d584;
case 0x45d58a:c.instructions+=2;goto B45d58a;
case 0x45d591:c.instructions+=1;goto B45d591;
case 0x45d593:goto L45d593;
case 0x45d599:c.instructions+=1;goto B45d599;
case 0x45d59b:goto L45d59b;
case 0x45d5a0:c.instructions+=2;goto B45d5a0;
case 0x45d5a2:c.instructions+=1;goto B45d5a2;
case 0x45d5a4:goto L45d5a4;
case 0x45d5a9:c.instructions+=2;goto B45d5a9;
case 0x45d5ab:c.instructions+=1;goto B45d5ab;
case 0x45d5ad:goto L45d5ad;
case 0x45d5b3:c.instructions+=5;goto B45d5b3;
case 0x45d5b9:c.instructions+=4;goto B45d5b9;
case 0x45d5bb:c.instructions+=3;goto B45d5bb;
case 0x45d5c1:c.instructions+=2;goto B45d5c1;
case 0x45d5c8:c.instructions+=1;goto B45d5c8;
case 0x45d5ca:goto L45d5ca;
case 0x45d5d0:c.instructions+=1;goto B45d5d0;
case 0x45d5d2:goto L45d5d2;
case 0x45d5d8:c.instructions+=5;goto B45d5d8;
case 0x45d5de:c.instructions+=4;goto B45d5de;
case 0x45d5e0:c.instructions+=3;goto B45d5e0;
case 0x45d5e6:c.instructions+=2;goto B45d5e6;
case 0x45d5ed:c.instructions+=1;goto B45d5ed;
case 0x45d5ef:goto L45d5ef;
case 0x45d5f5:c.instructions+=1;goto B45d5f5;
case 0x45d5f7:goto L45d5f7;
case 0x45d5fd:goto L45d5fd;
case 0x45d600:c.instructions+=3;goto B45d600;
case 0x45d602:c.instructions+=2;goto B45d602;
case 0x45d606:c.instructions+=1;goto B45d606;
case 0x45d608:goto L45d608;
case 0x45d60a:c.instructions+=5;goto B45d60a;
case 0x45d610:c.instructions+=4;goto B45d610;
case 0x45d616:c.instructions+=3;goto B45d616;
case 0x45d619:c.instructions+=2;goto B45d619;
case 0x45d61f:c.instructions+=1;goto B45d61f;
case 0x45d624:goto L45d624;
case 0x45d62b:c.instructions+=8;goto B45d62b;
case 0x45d62e:c.instructions+=7;goto B45d62e;
case 0x45d631:c.instructions+=6;goto B45d631;
case 0x45d632:c.instructions+=5;goto B45d632;
case 0x45d637:c.instructions+=4;goto B45d637;
case 0x45d639:c.instructions+=3;goto B45d639;
case 0x45d63a:c.instructions+=2;goto B45d63a;
case 0x45d641:c.instructions+=1;goto B45d641;
case 0x45d646:goto L45d646;
case 0x45d64c:c.instructions+=4;goto B45d64c;
case 0x45d64f:c.instructions+=3;goto B45d64f;
case 0x45d655:c.instructions+=2;goto B45d655;
case 0x45d659:c.instructions+=1;goto B45d659;
case 0x45d65f:goto L45d65f;
case 0x45d662:c.instructions+=5;goto B45d662;
case 0x45d663:c.instructions+=4;goto B45d663;
case 0x45d669:c.instructions+=3;goto B45d669;
case 0x45d66b:c.instructions+=2;goto B45d66b;
case 0x45d66c:c.instructions+=1;goto B45d66c;
case 0x45d670:goto L45d670;
case 0x45d671:c.instructions+=10;goto B45d671;
case 0x45d672:c.instructions+=9;goto B45d672;
case 0x45d674:c.instructions+=8;goto B45d674;
case 0x45d67a:c.instructions+=7;goto B45d67a;
case 0x45d67c:c.instructions+=6;goto B45d67c;
case 0x45d682:c.instructions+=5;goto B45d682;
case 0x45d686:c.instructions+=4;goto B45d686;
case 0x45d68c:c.instructions+=3;goto B45d68c;
case 0x45d68e:c.instructions+=2;goto B45d68e;
case 0x45d691:c.instructions+=1;goto B45d691;
case 0x45d693:goto L45d693;
case 0x45d697:c.instructions+=5;goto B45d697;
case 0x45d69d:c.instructions+=4;goto B45d69d;
case 0x45d6a1:c.instructions+=3;goto B45d6a1;
case 0x45d6a3:c.instructions+=2;goto B45d6a3;
case 0x45d6a6:c.instructions+=1;goto B45d6a6;
case 0x45d6a8:goto L45d6a8;
case 0x45d6aa:c.instructions+=1;goto B45d6aa;
case 0x45d6b0:goto L45d6b0;
case 0x45d6b6:c.instructions+=4;goto B45d6b6;
case 0x45d6bb:c.instructions+=3;goto B45d6bb;
case 0x45d6bd:c.instructions+=2;goto B45d6bd;
case 0x45d6c0:c.instructions+=1;goto B45d6c0;
case 0x45d6c2:goto L45d6c2;
case 0x45d6c5:c.instructions+=1;goto B45d6c5;
case 0x45d6c7:goto L45d6c7;
case 0x45d6c9:c.instructions+=1;goto B45d6c9;
case 0x45d6cb:goto L45d6cb;
case 0x45d6d1:c.instructions+=3;goto B45d6d1;
case 0x45d6d4:c.instructions+=2;goto B45d6d4;
case 0x45d6d7:c.instructions+=1;goto B45d6d7;
case 0x45d6d9:goto L45d6d9;
case 0x45d6db:c.instructions+=1;goto B45d6db;
case 0x45d6dd:goto L45d6dd;
case 0x45d6e0:c.instructions+=2;goto B45d6e0;
case 0x45d6e3:c.instructions+=1;goto B45d6e3;
case 0x45d6e8:goto L45d6e8;
case 0x45d6ea:c.instructions+=1;goto B45d6ea;
case 0x45d6ec:goto L45d6ec;
case 0x45d6f3:c.instructions+=3;goto B45d6f3;
case 0x45d6f4:c.instructions+=2;goto B45d6f4;
case 0x45d6f5:c.instructions+=1;goto B45d6f5;
case 0x45d6f8:goto L45d6f8;
case 0x45d6fe:c.instructions+=1;goto B45d6fe;
case 0x45d700:goto L45d700;
case 0x45d707:c.instructions+=2;goto B45d707;
case 0x45d70a:c.instructions+=1;goto B45d70a;
case 0x45d710:goto L45d710;
case 0x45d711:c.instructions+=2;goto B45d711;
case 0x45d712:c.instructions+=1;goto B45d712;
case 0x45d720:goto L45d720;
case 0x45d721:c.instructions+=9;goto B45d721;
case 0x45d722:c.instructions+=8;goto B45d722;
case 0x45d724:c.instructions+=7;goto B45d724;
case 0x45d727:c.instructions+=6;goto B45d727;
case 0x45d72a:c.instructions+=5;goto B45d72a;
case 0x45d730:c.instructions+=4;goto B45d730;
case 0x45d733:c.instructions+=3;goto B45d733;
case 0x45d737:c.instructions+=2;goto B45d737;
case 0x45d73a:c.instructions+=1;goto B45d73a;
case 0x45d73f:goto L45d73f;
case 0x45d743:c.instructions+=3;goto B45d743;
case 0x45d748:c.instructions+=2;goto B45d748;
case 0x45d74a:c.instructions+=1;goto B45d74a;
case 0x45d74c:goto L45d74c;
case 0x45d751:c.instructions+=2;goto B45d751;
case 0x45d753:c.instructions+=1;goto B45d753;
case 0x45d755:goto L45d755;
case 0x45d75b:c.instructions+=1;goto B45d75b;
case 0x45d75d:goto L45d75d;
case 0x45d762:c.instructions+=2;goto B45d762;
case 0x45d764:c.instructions+=1;goto B45d764;
case 0x45d766:goto L45d766;
case 0x45d76b:c.instructions+=2;goto B45d76b;
case 0x45d76d:c.instructions+=1;goto B45d76d;
case 0x45d76f:goto L45d76f;
case 0x45d775:c.instructions+=1;goto B45d775;
case 0x45d777:goto L45d777;
case 0x45d77d:goto L45d77d;
case 0x45d77f:c.instructions+=2;goto B45d77f;
case 0x45d785:c.instructions+=1;goto B45d785;
case 0x45d78a:goto L45d78a;
case 0x45d78c:c.instructions+=8;goto B45d78c;
case 0x45d78f:c.instructions+=7;goto B45d78f;
case 0x45d792:c.instructions+=6;goto B45d792;
case 0x45d795:c.instructions+=5;goto B45d795;
case 0x45d79b:c.instructions+=4;goto B45d79b;
case 0x45d79c:c.instructions+=3;goto B45d79c;
case 0x45d79f:c.instructions+=2;goto B45d79f;
case 0x45d7a0:c.instructions+=1;goto B45d7a0;
case 0x45d7a2:goto L45d7a2;
case 0x45d7a7:goto L45d7a7;
case 0x45d7a9:c.instructions+=1;goto B45d7a9;
case 0x45d7ab:goto L45d7ab;
case 0x45d7ad:goto L45d7ad;
case 0x45d7ae:c.instructions+=1;goto B45d7ae;
case 0x45d7b0:goto L45d7b0;
case 0x45d7b4:c.instructions+=2;goto B45d7b4;
case 0x45d7b7:c.instructions+=1;goto B45d7b7;
case 0x45d7b9:goto L45d7b9;
case 0x45d7ba:c.instructions+=1;goto B45d7ba;
case 0x45d7bc:goto L45d7bc;
case 0x45d7bf:c.instructions+=1;goto B45d7bf;
case 0x45d7c2:goto L45d7c2;
case 0x45d7c7:c.instructions+=1;goto B45d7c7;
case 0x45d7ca:goto L45d7ca;
case 0x45d7cf:c.instructions+=1;goto B45d7cf;
case 0x45d7e0:goto L45d7e0;
case 0x45d7e5:c.instructions+=5;goto B45d7e5;
case 0x45d7e7:c.instructions+=4;goto B45d7e7;
case 0x45d7ea:c.instructions+=3;goto B45d7ea;
case 0x45d7eb:c.instructions+=2;goto B45d7eb;
case 0x45d7ed:c.instructions+=1;goto B45d7ed;
case 0x45d7f3:goto L45d7f3;
case 0x45d7f6:c.instructions+=1;goto B45d7f6;
case 0x45d7fc:goto L45d7fc;
case 0x45d7fe:c.instructions+=1;goto B45d7fe;
case 0x45d804:goto L45d804;
case 0x45d807:c.instructions+=4;goto B45d807;
case 0x45d80a:c.instructions+=3;goto B45d80a;
case 0x45d810:c.instructions+=2;goto B45d810;
case 0x45d812:c.instructions+=1;goto B45d812;
case 0x45d814:goto L45d814;
case 0x45d81e:c.instructions+=2;goto B45d81e;
case 0x45d81f:c.instructions+=1;goto B45d81f;
case 0x45d820:goto L45d820;
case 0x45d822:c.instructions+=1;goto B45d822;
case 0x45d827:goto L45d827;
case 0x45d82d:c.instructions+=3;goto B45d82d;
case 0x45d82f:c.instructions+=2;goto B45d82f;
case 0x45d832:c.instructions+=1;goto B45d832;
case 0x45d834:goto L45d834;
case 0x45d837:c.instructions+=1;goto B45d837;
case 0x45d839:goto L45d839;
case 0x45d83b:c.instructions+=1;goto B45d83b;
case 0x45d840:goto L45d840;
case 0x45d846:c.instructions+=1;goto B45d846;
case 0x45d84c:goto L45d84c;
case 0x45d84f:c.instructions+=4;goto B45d84f;
case 0x45d855:c.instructions+=3;goto B45d855;
case 0x45d857:c.instructions+=2;goto B45d857;
case 0x45d85a:c.instructions+=1;goto B45d85a;
case 0x45d85c:goto L45d85c;
case 0x45d85e:c.instructions+=1;goto B45d85e;
case 0x45d863:goto L45d863;
case 0x45d866:c.instructions+=1;goto B45d866;
case 0x45d868:goto L45d868;
case 0x45d86d:c.instructions+=1;goto B45d86d;
case 0x45d86f:goto L45d86f;
case 0x45d872:c.instructions+=1;goto B45d872;
case 0x45d874:goto L45d874;
case 0x45d879:goto L45d879;
case 0x45d87f:c.instructions+=3;goto B45d87f;
case 0x45d884:c.instructions+=2;goto B45d884;
case 0x45d885:c.instructions+=1;goto B45d885;
case 0x45d88a:goto L45d88a;
case 0x45d890:c.instructions+=7;goto B45d890;
case 0x45d896:c.instructions+=6;goto B45d896;
case 0x45d899:c.instructions+=5;goto B45d899;
case 0x45d89a:c.instructions+=4;goto B45d89a;
case 0x45d8a4:c.instructions+=3;goto B45d8a4;
case 0x45d8aa:c.instructions+=2;goto B45d8aa;
case 0x45d8ab:c.instructions+=1;goto B45d8ab;
case 0x45d8ac:goto L45d8ac;
case 0x45d8b2:c.instructions+=5;goto B45d8b2;
case 0x45d8b5:c.instructions+=4;goto B45d8b5;
case 0x45d8bc:c.instructions+=3;goto B45d8bc;
case 0x45d8be:c.instructions+=2;goto B45d8be;
case 0x45d8c1:c.instructions+=1;goto B45d8c1;
case 0x45d8c3:goto L45d8c3;
case 0x45d8c6:c.instructions+=1;goto B45d8c6;
case 0x45d8c8:goto L45d8c8;
case 0x45d8ca:c.instructions+=1;goto B45d8ca;
case 0x45d8cf:goto L45d8cf;
case 0x45d8d5:c.instructions+=2;goto B45d8d5;
case 0x45d8db:c.instructions+=1;goto B45d8db;
case 0x45d8dd:goto L45d8dd;
case 0x45d8e3:c.instructions+=1;goto B45d8e3;
case 0x45d8e5:goto L45d8e5;
case 0x45d8ef:goto L45d8ef;
case 0x45d8f2:c.instructions+=1;goto B45d8f2;
case 0x45d8f4:goto L45d8f4;
case 0x45d8f7:c.instructions+=7;goto B45d8f7;
case 0x45d8fa:c.instructions+=6;goto B45d8fa;
case 0x45d900:c.instructions+=5;goto B45d900;
case 0x45d906:c.instructions+=4;goto B45d906;
case 0x45d90c:c.instructions+=3;goto B45d90c;
case 0x45d90e:c.instructions+=2;goto B45d90e;
case 0x45d911:c.instructions+=1;goto B45d911;
case 0x45d913:goto L45d913;
case 0x45d91d:goto L45d91d;
case 0x45d923:c.instructions+=2;goto B45d923;
case 0x45d924:c.instructions+=1;goto B45d924;
case 0x45d92a:goto L45d92a;
case 0x45d92b:c.instructions+=1;goto B45d92b;
case 0x45d930:goto L45d930;
case 0x45d935:c.instructions+=1;goto B45d935;
case 0x45d940:goto L45d940;
case 0x45d945:c.instructions+=1;goto B45d945;
case 0x45d950:goto L45d950;
case 0x45d952:c.instructions+=5;goto B45d952;
case 0x45d953:c.instructions+=4;goto B45d953;
case 0x45d959:c.instructions+=3;goto B45d959;
case 0x45d95c:c.instructions+=2;goto B45d95c;
case 0x45d961:c.instructions+=1;goto B45d961;
case 0x45d963:goto L45d963;
case 0x45d965:c.instructions+=4;goto B45d965;
case 0x45d968:c.instructions+=3;goto B45d968;
case 0x45d969:c.instructions+=2;goto B45d969;
case 0x45d96d:c.instructions+=1;goto B45d96d;
case 0x45d96f:goto L45d96f;
case 0x45d972:c.instructions+=52;goto B45d972;
case 0x45d975:c.instructions+=51;goto B45d975;
case 0x45d978:c.instructions+=50;goto B45d978;
case 0x45d97b:c.instructions+=49;goto B45d97b;
case 0x45d97e:c.instructions+=48;goto B45d97e;
case 0x45d984:c.instructions+=47;goto B45d984;
case 0x45d98a:c.instructions+=46;goto B45d98a;
case 0x45d990:c.instructions+=45;goto B45d990;
case 0x45d996:c.instructions+=44;goto B45d996;
case 0x45d99c:c.instructions+=43;goto B45d99c;
case 0x45d9a2:c.instructions+=42;goto B45d9a2;
case 0x45d9a8:c.instructions+=41;goto B45d9a8;
case 0x45d9af:c.instructions+=40;goto B45d9af;
case 0x45d9b5:c.instructions+=39;goto B45d9b5;
case 0x45d9bf:c.instructions+=38;goto B45d9bf;
case 0x45d9c5:c.instructions+=37;goto B45d9c5;
case 0x45d9cb:c.instructions+=36;goto B45d9cb;
case 0x45d9d5:c.instructions+=35;goto B45d9d5;
case 0x45d9df:c.instructions+=34;goto B45d9df;
case 0x45d9e9:c.instructions+=33;goto B45d9e9;
case 0x45d9f3:c.instructions+=32;goto B45d9f3;
case 0x45d9fd:c.instructions+=31;goto B45d9fd;
case 0x45da07:c.instructions+=30;goto B45da07;
case 0x45da11:c.instructions+=29;goto B45da11;
case 0x45da1b:c.instructions+=28;goto B45da1b;
case 0x45da20:c.instructions+=27;goto B45da20;
case 0x45da26:c.instructions+=26;goto B45da26;
case 0x45da2c:c.instructions+=25;goto B45da2c;
case 0x45da32:c.instructions+=24;goto B45da32;
case 0x45da3c:c.instructions+=23;goto B45da3c;
case 0x45da42:c.instructions+=22;goto B45da42;
case 0x45da48:c.instructions+=21;goto B45da48;
case 0x45da4e:c.instructions+=20;goto B45da4e;
case 0x45da54:c.instructions+=19;goto B45da54;
case 0x45da57:c.instructions+=18;goto B45da57;
case 0x45da5d:c.instructions+=17;goto B45da5d;
case 0x45da63:c.instructions+=16;goto B45da63;
case 0x45da69:c.instructions+=15;goto B45da69;
case 0x45da6f:c.instructions+=14;goto B45da6f;
case 0x45da75:c.instructions+=13;goto B45da75;
case 0x45da7b:c.instructions+=12;goto B45da7b;
case 0x45da81:c.instructions+=11;goto B45da81;
case 0x45da8b:c.instructions+=10;goto B45da8b;
case 0x45da91:c.instructions+=9;goto B45da91;
case 0x45da97:c.instructions+=8;goto B45da97;
case 0x45da9d:c.instructions+=7;goto B45da9d;
case 0x45daa3:c.instructions+=6;goto B45daa3;
case 0x45daa9:c.instructions+=5;goto B45daa9;
case 0x45daaf:c.instructions+=4;goto B45daaf;
case 0x45dab5:c.instructions+=3;goto B45dab5;
case 0x45dabb:c.instructions+=2;goto B45dabb;
case 0x45dabc:c.instructions+=1;goto B45dabc;
case 0x45dac0:goto L45dac0;
case 0x45dac4:c.instructions+=3;goto B45dac4;
case 0x45dac7:c.instructions+=2;goto B45dac7;
case 0x45daca:c.instructions+=1;goto B45daca;
case 0x45dacc:goto L45dacc;
case 0x45dacf:c.instructions+=1;goto B45dacf;
case 0x45dad1:goto L45dad1;
case 0x45dad4:c.instructions+=1;goto B45dad4;
case 0x45dad6:goto L45dad6;
case 0x45dadd:c.instructions+=2;goto B45dadd;
case 0x45dae0:c.instructions+=1;goto B45dae0;
case 0x45dae3:goto L45dae3;
case 0x45dae6:c.instructions+=2;goto B45dae6;
case 0x45dae9:c.instructions+=1;goto B45dae9;
case 0x45daf0:goto L45daf0;
case 0x45daf1:c.instructions+=7;goto B45daf1;
case 0x45daf3:c.instructions+=6;goto B45daf3;
case 0x45daf6:c.instructions+=5;goto B45daf6;
case 0x45dafc:c.instructions+=4;goto B45dafc;
case 0x45db00:c.instructions+=3;goto B45db00;
case 0x45db02:c.instructions+=2;goto B45db02;
case 0x45db03:c.instructions+=1;goto B45db03;
case 0x45db06:goto L45db06;
case 0x45db09:c.instructions+=8;goto B45db09;
case 0x45db0b:c.instructions+=7;goto B45db0b;
case 0x45db0e:c.instructions+=6;goto B45db0e;
case 0x45db11:c.instructions+=5;goto B45db11;
case 0x45db14:c.instructions+=4;goto B45db14;
case 0x45db17:c.instructions+=3;goto B45db17;
case 0x45db1d:c.instructions+=2;goto B45db1d;
case 0x45db1e:c.instructions+=1;goto B45db1e;
case 0x45db20:goto L45db20;
case 0x45db24:c.instructions+=5;goto B45db24;
case 0x45db26:c.instructions+=4;goto B45db26;
case 0x45db28:c.instructions+=3;goto B45db28;
case 0x45db2b:c.instructions+=2;goto B45db2b;
case 0x45db2e:c.instructions+=1;goto B45db2e;
case 0x45db40:goto L45db40;
case 0x45db43:c.instructions+=7;goto B45db43;
case 0x45db45:c.instructions+=6;goto B45db45;
case 0x45db47:c.instructions+=5;goto B45db47;
case 0x45db4a:c.instructions+=4;goto B45db4a;
case 0x45db4d:c.instructions+=3;goto B45db4d;
case 0x45db50:c.instructions+=2;goto B45db50;
case 0x45db53:c.instructions+=1;goto B45db53;
case 0x45db55:goto L45db55;
case 0x45db58:c.instructions+=2;goto B45db58;
case 0x45db5b:c.instructions+=1;goto B45db5b;
case 0x45db5d:goto L45db5d;
case 0x45db60:c.instructions+=1;goto B45db60;
case 0x45db62:goto L45db62;
case 0x45db65:c.instructions+=1;goto B45db65;
case 0x45db67:goto L45db67;
case 0x45db6c:c.instructions+=3;goto B45db6c;
case 0x45db6f:c.instructions+=2;goto B45db6f;
case 0x45db72:c.instructions+=1;goto B45db72;
case 0x45db73:goto L45db73;
case 0x45db78:c.instructions+=3;goto B45db78;
case 0x45db7b:c.instructions+=2;goto B45db7b;
case 0x45db7e:c.instructions+=1;goto B45db7e;
case 0x45db7f:goto L45db7f;
case 0x45db84:c.instructions+=2;goto B45db84;
case 0x45db87:c.instructions+=1;goto B45db87;
case 0x45db8a:goto L45db8a;
case 0x45db90:goto L45db90;
case 0x45db96:c.instructions+=3;goto B45db96;
case 0x45db98:c.instructions+=2;goto B45db98;
case 0x45db9a:c.instructions+=1;goto B45db9a;
case 0x45dba0:goto L45dba0;
case 0x45dba4:c.instructions+=13;goto B45dba4;
case 0x45dba8:c.instructions+=12;goto B45dba8;
case 0x45dbad:c.instructions+=11;goto B45dbad;
case 0x45dbb3:c.instructions+=10;goto B45dbb3;
case 0x45dbba:c.instructions+=9;goto B45dbba;
case 0x45dbbf:c.instructions+=8;goto B45dbbf;
case 0x45dbc2:c.instructions+=7;goto B45dbc2;
case 0x45dbc9:c.instructions+=6;goto B45dbc9;
case 0x45dbcf:c.instructions+=5;goto B45dbcf;
case 0x45dbd5:c.instructions+=4;goto B45dbd5;
case 0x45dbdb:c.instructions+=3;goto B45dbdb;
case 0x45dbdd:c.instructions+=2;goto B45dbdd;
case 0x45dbe0:c.instructions+=1;goto B45dbe0;
case 0x45dbe2:goto L45dbe2;
case 0x45dbec:goto L45dbec;
case 0x45dbf6:c.instructions+=9;goto B45dbf6;
case 0x45dbfc:c.instructions+=8;goto B45dbfc;
case 0x45dc02:c.instructions+=7;goto B45dc02;
case 0x45dc08:c.instructions+=6;goto B45dc08;
case 0x45dc0e:c.instructions+=5;goto B45dc0e;
case 0x45dc14:c.instructions+=4;goto B45dc14;
case 0x45dc1e:c.instructions+=3;goto B45dc1e;
case 0x45dc28:c.instructions+=2;goto B45dc28;
case 0x45dc32:c.instructions+=1;goto B45dc32;
case 0x45dc3c:goto L45dc3c;
case 0x45dc40:goto L45dc40;
case 0x45dc45:c.instructions+=1;goto B45dc45;
case 0x45dc50:goto L45dc50;
case 0x45dc55:c.instructions+=1;goto B45dc55;
case 0x45dc60:goto L45dc60;
case 0x45dc65:c.instructions+=1;goto B45dc65;
case 0x45dc70:goto L45dc70;
case 0x45dc75:c.instructions+=1;goto B45dc75;
case 0x45dc80:goto L45dc80;
case 0x45dc82:c.instructions+=5;goto B45dc82;
case 0x45dc83:c.instructions+=4;goto B45dc83;
case 0x45dc89:c.instructions+=3;goto B45dc89;
case 0x45dc8c:c.instructions+=2;goto B45dc8c;
case 0x45dc91:c.instructions+=1;goto B45dc91;
case 0x45dc93:goto L45dc93;
case 0x45dc95:c.instructions+=4;goto B45dc95;
case 0x45dc98:c.instructions+=3;goto B45dc98;
case 0x45dc99:c.instructions+=2;goto B45dc99;
case 0x45dc9d:c.instructions+=1;goto B45dc9d;
case 0x45dc9f:goto L45dc9f;
case 0x45dca2:c.instructions+=7;goto B45dca2;
case 0x45dca5:c.instructions+=6;goto B45dca5;
case 0x45dca8:c.instructions+=5;goto B45dca8;
case 0x45dcab:c.instructions+=4;goto B45dcab;
case 0x45dcae:c.instructions+=3;goto B45dcae;
case 0x45dcb4:c.instructions+=2;goto B45dcb4;
case 0x45dcb5:c.instructions+=1;goto B45dcb5;
case 0x45dcc0:goto L45dcc0;
case 0x45dcc5:c.instructions+=7;goto B45dcc5;
case 0x45dcc8:c.instructions+=6;goto B45dcc8;
case 0x45dccb:c.instructions+=5;goto B45dccb;
case 0x45dccc:c.instructions+=4;goto B45dccc;
case 0x45dcce:c.instructions+=3;goto B45dcce;
case 0x45dcd0:c.instructions+=2;goto B45dcd0;
case 0x45dcd6:c.instructions+=1;goto B45dcd6;
case 0x45dcdb:goto L45dcdb;
case 0x45dcde:c.instructions+=2;goto B45dcde;
case 0x45dcdf:c.instructions+=1;goto B45dcdf;
case 0x45dce0:goto L45dce0;
case 0x45dce5:c.instructions+=1;goto B45dce5;
case 0x45dcf0:goto L45dcf0;
case 0x45dcf5:c.instructions+=1;goto B45dcf5;
case 0x45dd00:goto L45dd00;
case 0x45dd05:c.instructions+=1;goto B45dd05;
case 0x45dd10:goto L45dd10;
case 0x45dd15:c.instructions+=1;goto B45dd15;
case 0x45dd20:goto L45dd20;
case 0x45dd25:c.instructions+=1;goto B45dd25;
case 0x45dd30:goto L45dd30;
case 0x45dd35:c.instructions+=1;goto B45dd35;
case 0x45dd40:goto L45dd40;
case 0x45dd45:c.instructions+=1;goto B45dd45;
case 0x45dd50:goto L45dd50;
case 0x45dd55:c.instructions+=1;goto B45dd55;
case 0x45dd60:goto L45dd60;
case 0x45dd62:c.instructions+=15;goto B45dd62;
case 0x45dd67:c.instructions+=14;goto B45dd67;
case 0x45dd6d:c.instructions+=13;goto B45dd6d;
case 0x45dd6e:c.instructions+=12;goto B45dd6e;
case 0x45dd75:c.instructions+=11;goto B45dd75;
case 0x45dd76:c.instructions+=10;goto B45dd76;
case 0x45dd77:c.instructions+=9;goto B45dd77;
case 0x45dd78:c.instructions+=8;goto B45dd78;
case 0x45dd79:c.instructions+=7;goto B45dd79;
case 0x45dd7b:c.instructions+=6;goto B45dd7b;
case 0x45dd7c:c.instructions+=5;goto B45dd7c;
case 0x45dd80:c.instructions+=4;goto B45dd80;
case 0x45dd86:c.instructions+=3;goto B45dd86;
case 0x45dd89:c.instructions+=2;goto B45dd89;
case 0x45dd8e:c.instructions+=1;goto B45dd8e;
case 0x45dd90:goto L45dd90;
case 0x45dd92:c.instructions+=4;goto B45dd92;
case 0x45dd95:c.instructions+=3;goto B45dd95;
case 0x45dd96:c.instructions+=2;goto B45dd96;
case 0x45dd9a:c.instructions+=1;goto B45dd9a;
case 0x45dd9c:goto L45dd9c;
case 0x45dd9f:c.instructions+=9;goto B45dd9f;
case 0x45dda2:c.instructions+=8;goto B45dda2;
case 0x45dda5:c.instructions+=7;goto B45dda5;
case 0x45dda8:c.instructions+=6;goto B45dda8;
case 0x45ddab:c.instructions+=5;goto B45ddab;
case 0x45ddb1:c.instructions+=4;goto B45ddb1;
case 0x45ddb3:c.instructions+=3;goto B45ddb3;
case 0x45ddb7:c.instructions+=2;goto B45ddb7;
case 0x45ddbd:c.instructions+=1;goto B45ddbd;
case 0x45ddc2:goto L45ddc2;
case 0x45ddc7:c.instructions+=4;goto B45ddc7;
case 0x45ddca:c.instructions+=3;goto B45ddca;
case 0x45ddcd:c.instructions+=2;goto B45ddcd;
case 0x45ddd3:c.instructions+=1;goto B45ddd3;
case 0x45ddd8:goto L45ddd8;
case 0x45ddda:goto L45ddda;
case 0x45dddc:c.instructions+=3;goto B45dddc;
case 0x45ddde:c.instructions+=2;goto B45ddde;
case 0x45dde3:c.instructions+=1;goto B45dde3;
case 0x45dde8:goto L45dde8;
case 0x45ddec:c.instructions+=17;goto B45ddec;
case 0x45ddf1:c.instructions+=16;goto B45ddf1;
case 0x45ddf7:c.instructions+=15;goto B45ddf7;
case 0x45ddfd:c.instructions+=14;goto B45ddfd;
case 0x45ddfe:c.instructions+=13;goto B45ddfe;
case 0x45de04:c.instructions+=12;goto B45de04;
case 0x45de0a:c.instructions+=11;goto B45de0a;
case 0x45de10:c.instructions+=10;goto B45de10;
case 0x45de16:c.instructions+=9;goto B45de16;
case 0x45de19:c.instructions+=8;goto B45de19;
case 0x45de20:c.instructions+=7;goto B45de20;
case 0x45de22:c.instructions+=6;goto B45de22;
case 0x45de23:c.instructions+=5;goto B45de23;
case 0x45de24:c.instructions+=4;goto B45de24;
case 0x45de25:c.instructions+=3;goto B45de25;
case 0x45de2c:c.instructions+=2;goto B45de2c;
case 0x45de2f:c.instructions+=1;goto B45de2f;
case 0x45de30:goto L45de30;
case 0x45de34:c.instructions+=3;goto B45de34;
case 0x45de38:c.instructions+=2;goto B45de38;
case 0x45de3f:c.instructions+=1;goto B45de3f;
case 0x45de41:goto L45de41;
case 0x45de48:goto L45de48;
case 0x45de50:goto L45de50;
case 0x45de53:c.instructions+=1;goto B45de53;
case 0x45de60:goto L45de60;
case 0x45de63:c.instructions+=14;goto B45de63;
case 0x45de68:c.instructions+=13;goto B45de68;
case 0x45de6b:c.instructions+=12;goto B45de6b;
case 0x45de6e:c.instructions+=11;goto B45de6e;
case 0x45de70:c.instructions+=10;goto B45de70;
case 0x45de74:c.instructions+=9;goto B45de74;
case 0x45de75:c.instructions+=8;goto B45de75;
case 0x45de79:c.instructions+=7;goto B45de79;
case 0x45de7c:c.instructions+=6;goto B45de7c;
case 0x45de80:c.instructions+=5;goto B45de80;
case 0x45de82:c.instructions+=4;goto B45de82;
case 0x45de83:c.instructions+=3;goto B45de83;
case 0x45de87:c.instructions+=2;goto B45de87;
case 0x45de89:c.instructions+=1;goto B45de89;
case 0x45de8e:goto L45de8e;
case 0x45de93:c.instructions+=9;goto B45de93;
case 0x45de97:c.instructions+=8;goto B45de97;
case 0x45de9a:c.instructions+=7;goto B45de9a;
case 0x45de9e:c.instructions+=6;goto B45de9e;
case 0x45dea0:c.instructions+=5;goto B45dea0;
case 0x45dea2:c.instructions+=4;goto B45dea2;
case 0x45dea6:c.instructions+=3;goto B45dea6;
case 0x45deaa:c.instructions+=2;goto B45deaa;
case 0x45deab:c.instructions+=1;goto B45deab;
case 0x45deb0:goto L45deb0;
case 0x45deb4:c.instructions+=13;goto B45deb4;
case 0x45deb9:c.instructions+=12;goto B45deb9;
case 0x45debc:c.instructions+=11;goto B45debc;
case 0x45debe:c.instructions+=10;goto B45debe;
case 0x45dec3:c.instructions+=9;goto B45dec3;
case 0x45deca:c.instructions+=8;goto B45deca;
case 0x45decd:c.instructions+=7;goto B45decd;
case 0x45ded1:c.instructions+=6;goto B45ded1;
case 0x45ded3:c.instructions+=5;goto B45ded3;
case 0x45ded5:c.instructions+=4;goto B45ded5;
case 0x45dedb:c.instructions+=3;goto B45dedb;
case 0x45dedd:c.instructions+=2;goto B45dedd;
case 0x45dee0:c.instructions+=1;goto B45dee0;
case 0x45dee2:goto L45dee2;
case 0x45dee7:c.instructions+=3;goto B45dee7;
case 0x45deec:c.instructions+=2;goto B45deec;
case 0x45deee:c.instructions+=1;goto B45deee;
case 0x45def5:goto L45def5;
case 0x45def8:c.instructions+=1;goto B45def8;
case 0x45df00:goto L45df00;
case 0x45df01:c.instructions+=7;goto B45df01;
case 0x45df02:c.instructions+=6;goto B45df02;
case 0x45df04:c.instructions+=5;goto B45df04;
case 0x45df0a:c.instructions+=4;goto B45df0a;
case 0x45df11:c.instructions+=3;goto B45df11;
case 0x45df13:c.instructions+=2;goto B45df13;
case 0x45df15:c.instructions+=1;goto B45df15;
case 0x45df17:goto L45df17;
case 0x45df1c:c.instructions+=2;goto B45df1c;
case 0x45df1e:c.instructions+=1;goto B45df1e;
case 0x45df24:goto L45df24;
case 0x45df27:c.instructions+=2;goto B45df27;
case 0x45df29:c.instructions+=1;goto B45df29;
case 0x45df2f:goto L45df2f;
case 0x45df31:c.instructions+=8;goto B45df31;
case 0x45df32:c.instructions+=7;goto B45df32;
case 0x45df35:c.instructions+=6;goto B45df35;
case 0x45df37:c.instructions+=5;goto B45df37;
case 0x45df3a:c.instructions+=4;goto B45df3a;
case 0x45df3d:c.instructions+=3;goto B45df3d;
case 0x45df42:c.instructions+=2;goto B45df42;
case 0x45df45:c.instructions+=1;goto B45df45;
case 0x45df4b:goto L45df4b;
case 0x45df52:goto L45df52;
case 0x45df59:c.instructions+=6;goto B45df59;
case 0x45df5f:c.instructions+=5;goto B45df5f;
case 0x45df65:c.instructions+=4;goto B45df65;
case 0x45df6c:c.instructions+=3;goto B45df6c;
case 0x45df6e:c.instructions+=2;goto B45df6e;
case 0x45df73:c.instructions+=1;goto B45df73;
case 0x45df78:goto L45df78;
case 0x45df7f:c.instructions+=5;goto B45df7f;
case 0x45df82:c.instructions+=4;goto B45df82;
case 0x45df88:c.instructions+=3;goto B45df88;
case 0x45df89:c.instructions+=2;goto B45df89;
case 0x45df8a:c.instructions+=1;goto B45df8a;
case 0x45df8f:goto L45df8f;
case 0x45df92:c.instructions+=1;goto B45df92;
case 0x45df97:goto L45df97;
case 0x45df9a:c.instructions+=6;goto B45df9a;
case 0x45dfa0:c.instructions+=5;goto B45dfa0;
case 0x45dfa7:c.instructions+=4;goto B45dfa7;
case 0x45dfad:c.instructions+=3;goto B45dfad;
case 0x45dfb3:c.instructions+=2;goto B45dfb3;
case 0x45dfba:c.instructions+=1;goto B45dfba;
case 0x45dfbf:goto L45dfbf;
case 0x45dfc6:c.instructions+=6;goto B45dfc6;
case 0x45dfcb:c.instructions+=5;goto B45dfcb;
case 0x45dfd1:c.instructions+=4;goto B45dfd1;
case 0x45dfd8:c.instructions+=3;goto B45dfd8;
case 0x45dfda:c.instructions+=2;goto B45dfda;
case 0x45dfe0:c.instructions+=1;goto B45dfe0;
case 0x45dfe5:goto L45dfe5;
case 0x45dfec:c.instructions+=5;goto B45dfec;
case 0x45dfef:c.instructions+=4;goto B45dfef;
case 0x45dff5:c.instructions+=3;goto B45dff5;
case 0x45dff6:c.instructions+=2;goto B45dff6;
case 0x45dff7:c.instructions+=1;goto B45dff7;
case 0x45dffc:goto L45dffc;
case 0x45dfff:c.instructions+=1;goto B45dfff;
default:missing_instruction(c.pc);}
B45d000:L45d000:{c.instructions+=19;NFSU2_TR(0x45d000);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B45d002:{NFSU2_TR(0x45d002);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45d005:{NFSU2_TR(0x45d005);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xda,0x00"::"a"(ea_):"memory");}
}
B45d008:{NFSU2_TR(0x45d008);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d00e:{NFSU2_TR(0x45d00e);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45d014:{NFSU2_TR(0x45d014);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45d01a:{NFSU2_TR(0x45d01a);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B45d01d:{NFSU2_TR(0x45d01d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B45d01f:{NFSU2_TR(0x45d01f);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45d022:{NFSU2_TR(0x45d022);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d028:{NFSU2_TR(0x45d028);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B45d02a:{NFSU2_TR(0x45d02a);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45d030:{NFSU2_TR(0x45d030);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45d036:{NFSU2_TR(0x45d036);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B45d039:{NFSU2_TR(0x45d039);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45d043:{NFSU2_TR(0x45d043);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45d049:{NFSU2_TR(0x45d049);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45d04a:{NFSU2_TR(0x45d04a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45d04b:{NFSU2_TR(0x45d04b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45d050:L45d050:{c.instructions+=6;NFSU2_TR(0x45d050);
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
B45d052:{NFSU2_TR(0x45d052);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45d056:{NFSU2_TR(0x45d056);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d059:{NFSU2_TR(0x45d059);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d05f:{NFSU2_TR(0x45d05f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d065:{NFSU2_TR(0x45d065);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45d070:L45d070:{c.instructions+=3;NFSU2_TR(0x45d070);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45d074:{NFSU2_TR(0x45d074);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x0ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45d077:{NFSU2_TR(0x45d077);
if(r1(R+518)){{goto L45d095;}}
}
B45d079:L45d079:{c.instructions+=2;NFSU2_TR(0x45d079);
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
B45d07a:{NFSU2_TR(0x45d07a);
if(r1(R+518)){{goto L45d08d;}}
}
B45d07c:L45d07c:{c.instructions+=2;NFSU2_TR(0x45d07c);
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
B45d07d:{NFSU2_TR(0x45d07d);
if(r1(R+518)){{goto L45d085;}}
}
B45d07f:L45d07f:{c.instructions+=2;NFSU2_TR(0x45d07f);
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
B45d082:{NFSU2_TR(0x45d082);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45d085:L45d085:{c.instructions+=2;NFSU2_TR(0x45d085);
w4(R+0,u32(0x4ull));
}
B45d08a:{NFSU2_TR(0x45d08a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45d08d:L45d08d:{c.instructions+=2;NFSU2_TR(0x45d08d);
w4(R+0,u32(0x3ull));
}
B45d092:{NFSU2_TR(0x45d092);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45d095:L45d095:{c.instructions+=2;NFSU2_TR(0x45d095);
w4(R+0,u32(0x5ull));
}
B45d09a:{NFSU2_TR(0x45d09a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45d0a0:L45d0a0:{c.instructions+=15;NFSU2_TR(0x45d0a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45d0a3:{NFSU2_TR(0x45d0a3);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45d0a6:{NFSU2_TR(0x45d0a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45d0a9:{NFSU2_TR(0x45d0a9);
{u32 ea_=u32(r4(R+4)+u32(244u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B45d0af:{NFSU2_TR(0x45d0af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d0b0:{NFSU2_TR(0x45d0b0);
{u32 ea_=u32(r4(R+4)+u32(236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45d0b6:{NFSU2_TR(0x45d0b6);
{u32 ea_=u32(r4(R+8)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45d0bc:{NFSU2_TR(0x45d0bc);
{u32 ea_=u32(r4(R+8)+u32(300u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B45d0c2:{NFSU2_TR(0x45d0c2);
{u32 ea_=u32(r4(R+4)+u32(240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45d0c8:{NFSU2_TR(0x45d0c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45d0cb:{NFSU2_TR(0x45d0cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d0d1:{NFSU2_TR(0x45d0d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45d0d4:{NFSU2_TR(0x45d0d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B45d0da:{NFSU2_TR(0x45d0da);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B45d0dc:{NFSU2_TR(0x45d0dc);
if(r1(R+518)){{goto L45d0ef;}}
}
B45d0de:L45d0de:{c.instructions+=1;NFSU2_TR(0x45d0de);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45d0e4:L45d0e4:{c.instructions+=2;NFSU2_TR(0x45d0e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45d0ea:{NFSU2_TR(0x45d0ea);
{goto L45d176;}
}
B45d0ef:L45d0ef:{c.instructions+=4;NFSU2_TR(0x45d0ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45d0f2:{NFSU2_TR(0x45d0f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45d0f8:{NFSU2_TR(0x45d0f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45d0fa:{NFSU2_TR(0x45d0fa);
if(r1(R+518)){{goto L45d117;}}
}
B45d0fc:L45d0fc:{c.instructions+=3;NFSU2_TR(0x45d0fc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45d0ff:{NFSU2_TR(0x45d0ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45d105:{NFSU2_TR(0x45d105);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45d0e4u);}goto L45d0e4;}}
}
B45d107:L45d107:{c.instructions+=4;NFSU2_TR(0x45d107);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45d10d:{NFSU2_TR(0x45d10d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d10e:{NFSU2_TR(0x45d10e);
__builtin_memmove((R+4),(R+24),4);
}
B45d110:{NFSU2_TR(0x45d110);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45d115ull));
TAIL_STATIC(0x576a10u,576);
}
B45d115:L45d115:{c.instructions+=1;NFSU2_TR(0x45d115);
{goto L45d17e;}
}
B45d117:L45d117:{c.instructions+=4;NFSU2_TR(0x45d117);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45d11a:{NFSU2_TR(0x45d11a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45d11d:{NFSU2_TR(0x45d11d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45d120:{NFSU2_TR(0x45d120);
if(r1(R+518)){{goto L45d126;}}
}
B45d122:L45d122:{c.instructions+=2;NFSU2_TR(0x45d122);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45d124:{NFSU2_TR(0x45d124);
if(r1(R+518)){{goto L45d16a;}}
}
B45d126:L45d126:{c.instructions+=3;NFSU2_TR(0x45d126);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B45d12a:{NFSU2_TR(0x45d12a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45d130:{NFSU2_TR(0x45d130);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45d142;}}
}
B45d132:L45d132:{c.instructions+=4;NFSU2_TR(0x45d132);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45d138:{NFSU2_TR(0x45d138);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d139:{NFSU2_TR(0x45d139);
__builtin_memmove((R+4),(R+24),4);
}
B45d13b:{NFSU2_TR(0x45d13b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45d140ull));
TAIL_STATIC(0x576a10u,576);
}
B45d140:L45d140:{c.instructions+=1;NFSU2_TR(0x45d140);
{goto L45d17e;}
}
B45d142:L45d142:{c.instructions+=2;NFSU2_TR(0x45d142);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B45d146:{NFSU2_TR(0x45d146);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45d161;}}
}
B45d148:L45d148:{c.instructions+=6;NFSU2_TR(0x45d148);
{u32 ea_=u32(u32(7898656u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45d14e:{NFSU2_TR(0x45d14e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d14f:{NFSU2_TR(0x45d14f);
{u32 ea_=u32(r4(R+4)+u32(236u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45d155:{NFSU2_TR(0x45d155);
__builtin_memmove((R+4),(R+24),4);
}
B45d157:{NFSU2_TR(0x45d157);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45d15a:{NFSU2_TR(0x45d15a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45d15full));
TAIL_STATIC(0x576a10u,576);
}
B45d15f:L45d15f:{c.instructions+=1;NFSU2_TR(0x45d15f);
{goto L45d17e;}
}
B45d161:L45d161:{c.instructions+=3;NFSU2_TR(0x45d161);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45d167:{NFSU2_TR(0x45d167);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d168:{NFSU2_TR(0x45d168);
{goto L45d177;}
}
B45d16a:L45d16a:{c.instructions+=2;NFSU2_TR(0x45d16a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45d170:{NFSU2_TR(0x45d170);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45d176:L45d176:{c.instructions+=1;NFSU2_TR(0x45d176);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d177:L45d177:{c.instructions+=2;NFSU2_TR(0x45d177);
__builtin_memmove((R+4),(R+24),4);
}
B45d179:{NFSU2_TR(0x45d179);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45d17eull));
TAIL_STATIC(0x576970u,576);
}
B45d17e:L45d17e:{c.instructions+=4;NFSU2_TR(0x45d17e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45d180:{NFSU2_TR(0x45d180);
__builtin_memmove((R+4),(R+24),4);
}
B45d182:{NFSU2_TR(0x45d182);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45d183:{NFSU2_TR(0x45d183);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B45d190:L45d190:{c.instructions+=7;NFSU2_TR(0x45d190);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d191:{NFSU2_TR(0x45d191);
__builtin_memmove((R+24),(R+4),4);
}
B45d193:{NFSU2_TR(0x45d193);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d194:{NFSU2_TR(0x45d194);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B45d197:{NFSU2_TR(0x45d197);
{u32 ea_=u32(r4(R+28)+u32(252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45d19d:{NFSU2_TR(0x45d19d);
{u32 ea_=u32(r4(R+24)+u32(184u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B45d1a3:{NFSU2_TR(0x45d1a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45d1a8ull));
TAIL_STATIC(0x75bed4u,75b);
}
B45d1a8:L45d1a8:{c.instructions+=4;NFSU2_TR(0x45d1a8);
{u32 ea_=u32(r4(R+24)+u32(124u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B45d1ab:{NFSU2_TR(0x45d1ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d1b1:{NFSU2_TR(0x45d1b1);
{u32 ea_=u32(r4(R+28)+u32(280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45d1b7:{NFSU2_TR(0x45d1b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45d1bcull));
TAIL_STATIC(0x75bed4u,75b);
}
B45d1bc:L45d1bc:{c.instructions+=4;NFSU2_TR(0x45d1bc);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B45d1c2:{NFSU2_TR(0x45d1c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d1c5:{NFSU2_TR(0x45d1c5);
{u32 ea_=u32(r4(R+28)+u32(280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45d1cb:{NFSU2_TR(0x45d1cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45d1d0ull));
TAIL_STATIC(0x75bed4u,75b);
}
B45d1d0:L45d1d0:{c.instructions+=4;NFSU2_TR(0x45d1d0);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B45d1d6:{NFSU2_TR(0x45d1d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d1dc:{NFSU2_TR(0x45d1dc);
{u32 ea_=u32(r4(R+28)+u32(280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45d1e2:{NFSU2_TR(0x45d1e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45d1e7ull));
TAIL_STATIC(0x75bed4u,75b);
}
B45d1e7:L45d1e7:{c.instructions+=4;NFSU2_TR(0x45d1e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45d1e8:{NFSU2_TR(0x45d1e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d1ee:{NFSU2_TR(0x45d1ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45d1ef:{NFSU2_TR(0x45d1ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45d1f0:L45d1f0:{c.instructions+=2;NFSU2_TR(0x45d1f0);
w4(R+0,u32(0x7ed2f4ull));
}
B45d1f5:{NFSU2_TR(0x45d1f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45d200:L45d200:{c.instructions+=2;NFSU2_TR(0x45d200);
__builtin_memmove((R+0),gp(0x7ed2f8),4);
}
B45d205:{NFSU2_TR(0x45d205);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45d210:L45d210:{c.instructions+=16;NFSU2_TR(0x45d210);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d212:{NFSU2_TR(0x45d212);
u8 U[4];
w4(U+0,u32(0x7723c6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d217:{NFSU2_TR(0x45d217);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45d21d:{NFSU2_TR(0x45d21d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d21e:{NFSU2_TR(0x45d21e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d225:{NFSU2_TR(0x45d225);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d226:{NFSU2_TR(0x45d226);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d227:{NFSU2_TR(0x45d227);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d228:{NFSU2_TR(0x45d228);
__builtin_memmove((R+24),(R+4),4);
}
B45d22a:{NFSU2_TR(0x45d22a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d22b:{NFSU2_TR(0x45d22b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d22f:{NFSU2_TR(0x45d22f);
u8 U[4];
w4(U+0,u32(0x789ed4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B45d235:{NFSU2_TR(0x45d235);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B45d238:{NFSU2_TR(0x45d238);
w4(R+4,u32(0x10ull));
}
B45d23d:{NFSU2_TR(0x45d23d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B45d23f:{NFSU2_TR(0x45d23f);
}
B45d240:L45d240:{c.instructions+=5;NFSU2_TR(0x45d240);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B45d242:{NFSU2_TR(0x45d242);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B45d245:{NFSU2_TR(0x45d245);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B45d246:{NFSU2_TR(0x45d246);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B45d24a:{NFSU2_TR(0x45d24a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45d240u);}goto L45d240;}}
}
B45d24c:L45d24c:{c.instructions+=11;NFSU2_TR(0x45d24c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45d24f:{NFSU2_TR(0x45d24f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d252:{NFSU2_TR(0x45d252);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d255:{NFSU2_TR(0x45d255);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d258:{NFSU2_TR(0x45d258);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d25b:{NFSU2_TR(0x45d25b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45d261:{NFSU2_TR(0x45d261);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d263:{NFSU2_TR(0x45d263);
__builtin_memmove((R+4),(R+28),4);
}
B45d265:{NFSU2_TR(0x45d265);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d269:{NFSU2_TR(0x45d269);
u8 U[4];
w4(U+0,u32(0x78a008ull));
s4(u32(r4(R+24)),r4(U+0));
}
B45d26f:{NFSU2_TR(0x45d26f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45d274ull));
TAIL_STATIC(0x579f20u,579);
}
B45d274:L45d274:{c.instructions+=4;NFSU2_TR(0x45d274);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d275:{NFSU2_TR(0x45d275);
__builtin_memmove((R+4),(R+28),4);
}
B45d277:{NFSU2_TR(0x45d277);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45d27c:{NFSU2_TR(0x45d27c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45d281ull));
TAIL_STATIC(0x576a10u,576);
}
B45d281:L45d281:{c.instructions+=25;NFSU2_TR(0x45d281);
w4(R+0,u32(0x1ull));
}
B45d286:{NFSU2_TR(0x45d286);
w4(R+4,u32(0x447a0000ull));
}
B45d28b:{NFSU2_TR(0x45d28b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d291:{NFSU2_TR(0x45d291);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d297:{NFSU2_TR(0x45d297);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45d29d:{NFSU2_TR(0x45d29d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d2a3:{NFSU2_TR(0x45d2a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d2a9:{NFSU2_TR(0x45d2a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d2af:{NFSU2_TR(0x45d2af);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45d2b5:{NFSU2_TR(0x45d2b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d2b8:{NFSU2_TR(0x45d2b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d2be:{NFSU2_TR(0x45d2be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d2c4:{NFSU2_TR(0x45d2c4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45d2ca:{NFSU2_TR(0x45d2ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d2d0:{NFSU2_TR(0x45d2d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d2d6:{NFSU2_TR(0x45d2d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45d2da:{NFSU2_TR(0x45d2da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d2e0:{NFSU2_TR(0x45d2e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45d2e1:{NFSU2_TR(0x45d2e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
w4(U+4,u32(0x461c4000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45d2e8:{NFSU2_TR(0x45d2e8);
__builtin_memmove((R+0),(R+24),4);
}
B45d2ea:{NFSU2_TR(0x45d2ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45d2eb:{NFSU2_TR(0x45d2eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45d2ec:{NFSU2_TR(0x45d2ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d2f3:{NFSU2_TR(0x45d2f3);
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
B45d2f6:{NFSU2_TR(0x45d2f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45d300:L45d300:{c.instructions+=2;NFSU2_TR(0x45d300);
{u32 ea_=u32(r4(R+4)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45d306:{NFSU2_TR(0x45d306);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45d310:L45d310:{c.instructions+=13;NFSU2_TR(0x45d310);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d312:{NFSU2_TR(0x45d312);
u8 U[4];
w4(U+0,u32(0x772268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d317:{NFSU2_TR(0x45d317);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45d31d:{NFSU2_TR(0x45d31d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d31e:{NFSU2_TR(0x45d31e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d325:{NFSU2_TR(0x45d325);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d326:{NFSU2_TR(0x45d326);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d327:{NFSU2_TR(0x45d327);
__builtin_memmove((R+24),(R+4),4);
}
B45d329:{NFSU2_TR(0x45d329);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d32d:{NFSU2_TR(0x45d32d);
u8 U[4];
w4(U+0,u32(0x78a008ull));
s4(u32(r4(R+24)),r4(U+0));
}
B45d333:{NFSU2_TR(0x45d333);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45d339:{NFSU2_TR(0x45d339);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45d341:{NFSU2_TR(0x45d341);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45d346ull));
TAIL_STATIC(0x5768e0u,576);
}
B45d346:L45d346:{c.instructions+=6;NFSU2_TR(0x45d346);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45d34a:{NFSU2_TR(0x45d34a);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B45d350:{NFSU2_TR(0x45d350);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45d351:{NFSU2_TR(0x45d351);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d358:{NFSU2_TR(0x45d358);
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
B45d35b:{NFSU2_TR(0x45d35b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45d360:L45d360:{c.instructions+=4;NFSU2_TR(0x45d360);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B45d365:{NFSU2_TR(0x45d365);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45d368:{NFSU2_TR(0x45d368);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d36a:{NFSU2_TR(0x45d36a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45d36full));
TAIL_STATIC(0x45ad40u,45a);
}
B45d36f:L45d36f:{c.instructions+=1;NFSU2_TR(0x45d36f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45d370:L45d370:{c.instructions+=7;NFSU2_TR(0x45d370);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d371:{NFSU2_TR(0x45d371);
__builtin_memmove((R+24),(R+4),4);
}
B45d373:{NFSU2_TR(0x45d373);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45d376:{NFSU2_TR(0x45d376);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45d37a:{NFSU2_TR(0x45d37a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45d37d:{NFSU2_TR(0x45d37d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45d380:{NFSU2_TR(0x45d380);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45d385ull));
TAIL_STATIC(0x5928d0u,592);
}
B45d385:L45d385:{c.instructions+=7;NFSU2_TR(0x45d385);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45d38b:{NFSU2_TR(0x45d38b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45d38e:{NFSU2_TR(0x45d38e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45d391:{NFSU2_TR(0x45d391);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45d394:{NFSU2_TR(0x45d394);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d396:{NFSU2_TR(0x45d396);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45d399:{NFSU2_TR(0x45d399);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45d39eull));
TAIL_STATIC(0x5b5350u,5b5);
}
B45d39e:L45d39e:{c.instructions+=11;NFSU2_TR(0x45d39e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45d3a4:{NFSU2_TR(0x45d3a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d3a7:{NFSU2_TR(0x45d3a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45d3ad:{NFSU2_TR(0x45d3ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d3b0:{NFSU2_TR(0x45d3b0);
{u32 ea_=u32(r4(R+0)+u32(500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45d3b6:{NFSU2_TR(0x45d3b6);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B45d3bc:{NFSU2_TR(0x45d3bc);
{u32 ea_=u32(r4(R+24)+u32(124u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B45d3bf:{NFSU2_TR(0x45d3bf);
{u32 ea_=u32(u32(7881984u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45d3c5:{NFSU2_TR(0x45d3c5);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45d3c8:{NFSU2_TR(0x45d3c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45d3c9:{NFSU2_TR(0x45d3c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45d3d0:L45d3d0:{c.instructions+=2;NFSU2_TR(0x45d3d0);
w4(R+0,u32(0x7ed304ull));
}
B45d3d5:{NFSU2_TR(0x45d3d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45d3e0:L45d3e0:{c.instructions+=2;NFSU2_TR(0x45d3e0);
__builtin_memmove((R+0),gp(0x7ed308),4);
}
B45d3e5:{NFSU2_TR(0x45d3e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45d3f0:L45d3f0:{c.instructions+=11;NFSU2_TR(0x45d3f0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d3f2:{NFSU2_TR(0x45d3f2);
u8 U[4];
w4(U+0,u32(0x7723d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d3f7:{NFSU2_TR(0x45d3f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45d3fd:{NFSU2_TR(0x45d3fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d3fe:{NFSU2_TR(0x45d3fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d405:{NFSU2_TR(0x45d405);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d406:{NFSU2_TR(0x45d406);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d407:{NFSU2_TR(0x45d407);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d408:{NFSU2_TR(0x45d408);
__builtin_memmove((R+24),(R+4),4);
}
B45d40a:{NFSU2_TR(0x45d40a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d40e:{NFSU2_TR(0x45d40e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45d413ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45d210u);}goto L45d210;}
}
B45d413:L45d413:{c.instructions+=5;NFSU2_TR(0x45d413);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B45d415:{NFSU2_TR(0x45d415);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B45d41b:{NFSU2_TR(0x45d41b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d41f:{NFSU2_TR(0x45d41f);
u8 U[4];
w4(U+0,u32(0x78a030ull));
s4(u32(r4(R+24)),r4(U+0));
}
B45d425:{NFSU2_TR(0x45d425);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45d42aull));
TAIL_STATIC(0x45b590u,45b);
}
B45d42a:L45d42a:{c.instructions+=18;NFSU2_TR(0x45d42a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45d42e:{NFSU2_TR(0x45d42e);
w4(R+0,u32(0x2ull));
}
B45d433:{NFSU2_TR(0x45d433);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d439:{NFSU2_TR(0x45d439);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d43f:{NFSU2_TR(0x45d43f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d445:{NFSU2_TR(0x45d445);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d44b:{NFSU2_TR(0x45d44b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x29cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B45d452:{NFSU2_TR(0x45d452);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d458:{NFSU2_TR(0x45d458);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d45e:{NFSU2_TR(0x45d45e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x294ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d464:{NFSU2_TR(0x45d464);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x290ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45d46a:{NFSU2_TR(0x45d46a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x291ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45d470:{NFSU2_TR(0x45d470);
__builtin_memmove((R+0),(R+24),4);
}
B45d472:{NFSU2_TR(0x45d472);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45d473:{NFSU2_TR(0x45d473);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45d474:{NFSU2_TR(0x45d474);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d47b:{NFSU2_TR(0x45d47b);
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
B45d47e:{NFSU2_TR(0x45d47e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45d480:L45d480:{c.instructions+=13;NFSU2_TR(0x45d480);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d482:{NFSU2_TR(0x45d482);
u8 U[4];
w4(U+0,u32(0x772400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d487:{NFSU2_TR(0x45d487);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45d48d:{NFSU2_TR(0x45d48d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d48e:{NFSU2_TR(0x45d48e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d495:{NFSU2_TR(0x45d495);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d496:{NFSU2_TR(0x45d496);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d497:{NFSU2_TR(0x45d497);
__builtin_memmove((R+24),(R+4),4);
}
B45d499:{NFSU2_TR(0x45d499);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d49d:{NFSU2_TR(0x45d49d);
u8 U[4];
w4(U+0,u32(0x78a030ull));
s4(u32(r4(R+24)),r4(U+0));
}
B45d4a3:{NFSU2_TR(0x45d4a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B45d4a9:{NFSU2_TR(0x45d4a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45d4b1:{NFSU2_TR(0x45d4b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45d4b6ull));
TAIL_STATIC(0x45b730u,45b);
}
B45d4b6:L45d4b6:{c.instructions+=4;NFSU2_TR(0x45d4b6);
u8 U[4];
w4(U+0,u32(0x78a008ull));
s4(u32(r4(R+24)),r4(U+0));
}
B45d4bc:{NFSU2_TR(0x45d4bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45d4c2:{NFSU2_TR(0x45d4c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45d4ca:{NFSU2_TR(0x45d4ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45d4cfull));
TAIL_STATIC(0x5768e0u,576);
}
B45d4cf:L45d4cf:{c.instructions+=6;NFSU2_TR(0x45d4cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45d4d3:{NFSU2_TR(0x45d4d3);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B45d4d9:{NFSU2_TR(0x45d4d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45d4da:{NFSU2_TR(0x45d4da);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d4e1:{NFSU2_TR(0x45d4e1);
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
B45d4e4:{NFSU2_TR(0x45d4e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45d4f0:L45d4f0:{c.instructions+=4;NFSU2_TR(0x45d4f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45d4f4:{NFSU2_TR(0x45d4f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45d4f7:{NFSU2_TR(0x45d4f7);
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
B45d4fa:{NFSU2_TR(0x45d4fa);
if(r1(R+518)){{goto L45d519;}}
}
B45d4fc:L45d4fc:{c.instructions+=2;NFSU2_TR(0x45d4fc);
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
B45d4ff:{NFSU2_TR(0x45d4ff);
if(r1(R+518)){{goto L45d519;}}
}
B45d501:L45d501:{c.instructions+=2;NFSU2_TR(0x45d501);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B45d504:{NFSU2_TR(0x45d504);
if(r1(R+518)){{goto L45d519;}}
}
B45d506:L45d506:{c.instructions+=5;NFSU2_TR(0x45d506);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45d50d:{NFSU2_TR(0x45d50d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45d510:{NFSU2_TR(0x45d510);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d513:{NFSU2_TR(0x45d513);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d516:{NFSU2_TR(0x45d516);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45d519:L45d519:{c.instructions+=5;NFSU2_TR(0x45d519);
__builtin_memmove((R+0),(R+8),4);
}
B45d51b:{NFSU2_TR(0x45d51b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d51e:{NFSU2_TR(0x45d51e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d521:{NFSU2_TR(0x45d521);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d524:{NFSU2_TR(0x45d524);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45d530:L45d530:{c.instructions+=3;NFSU2_TR(0x45d530);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d531:{NFSU2_TR(0x45d531);
__builtin_memmove((R+24),(R+4),4);
}
B45d533:{NFSU2_TR(0x45d533);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45d538ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45d370u);}goto L45d370;}
}
B45d538:L45d538:{c.instructions+=3;NFSU2_TR(0x45d538);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d539:{NFSU2_TR(0x45d539);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B45d53f:{NFSU2_TR(0x45d53f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45d544ull));
TAIL_STATIC(0x45b7c0u,45b);
}
B45d544:L45d544:{c.instructions+=7;NFSU2_TR(0x45d544);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45d547:{NFSU2_TR(0x45d547);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45d54a:{NFSU2_TR(0x45d54a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45d54d:{NFSU2_TR(0x45d54d);
{u32 ea_=u32(r4(R+8)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45d550:{NFSU2_TR(0x45d550);
{u32 ea_=u32(r4(R+24)+u32(684u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45d556:{NFSU2_TR(0x45d556);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45d557:{NFSU2_TR(0x45d557);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45d560:L45d560:{c.instructions+=6;NFSU2_TR(0x45d560);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d561:{NFSU2_TR(0x45d561);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B45d566:{NFSU2_TR(0x45d566);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B45d568:{NFSU2_TR(0x45d568);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d569:{NFSU2_TR(0x45d569);
__builtin_memmove((R+24),(R+4),4);
}
B45d56b:{NFSU2_TR(0x45d56b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45d576;}}
}
B45d56d:L45d56d:{c.instructions+=3;NFSU2_TR(0x45d56d);
__builtin_memmove((R+0),gp(0x890104),4);
}
B45d572:{NFSU2_TR(0x45d572);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45d574:{NFSU2_TR(0x45d574);
if(r1(R+518)){{goto L45d59b;}}
}
B45d576:L45d576:{c.instructions+=6;NFSU2_TR(0x45d576);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B45d57c:{NFSU2_TR(0x45d57c);
{u32 ea_=u32(u32(7898752u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45d582:{NFSU2_TR(0x45d582);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B45d584:{NFSU2_TR(0x45d584);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45d58a:{NFSU2_TR(0x45d58a);
{u32 ea_=u32((r4(R+0)*4u)+u32(7898760u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45d591:{NFSU2_TR(0x45d591);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45d5f7;}}
}
B45d593:L45d593:{c.instructions+=2;NFSU2_TR(0x45d593);
{u32 ea_=u32(u32(7898756u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45d599:{NFSU2_TR(0x45d599);
{goto L45d5fd;}
}
B45d59b:L45d59b:{c.instructions+=3;NFSU2_TR(0x45d59b);
__builtin_memmove((R+0),gp(0x89e7e3),1);
}
B45d5a0:{NFSU2_TR(0x45d5a0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B45d5a2:{NFSU2_TR(0x45d5a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45d5ad;}}
}
B45d5a4:L45d5a4:{c.instructions+=3;NFSU2_TR(0x45d5a4);
__builtin_memmove((R+0),gp(0x89010c),4);
}
B45d5a9:{NFSU2_TR(0x45d5a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45d5ab:{NFSU2_TR(0x45d5ab);
if(r1(R+518)){{goto L45d5d2;}}
}
B45d5ad:L45d5ad:{c.instructions+=6;NFSU2_TR(0x45d5ad);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B45d5b3:{NFSU2_TR(0x45d5b3);
{u32 ea_=u32(u32(7898708u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45d5b9:{NFSU2_TR(0x45d5b9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B45d5bb:{NFSU2_TR(0x45d5bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45d5c1:{NFSU2_TR(0x45d5c1);
{u32 ea_=u32((r4(R+0)*4u)+u32(7898716u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45d5c8:{NFSU2_TR(0x45d5c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45d5f7;}}
}
B45d5ca:L45d5ca:{c.instructions+=2;NFSU2_TR(0x45d5ca);
{u32 ea_=u32(u32(7898712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45d5d0:{NFSU2_TR(0x45d5d0);
{goto L45d5fd;}
}
B45d5d2:L45d5d2:{c.instructions+=6;NFSU2_TR(0x45d5d2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B45d5d8:{NFSU2_TR(0x45d5d8);
{u32 ea_=u32(u32(7898664u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45d5de:{NFSU2_TR(0x45d5de);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B45d5e0:{NFSU2_TR(0x45d5e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45d5e6:{NFSU2_TR(0x45d5e6);
{u32 ea_=u32((r4(R+0)*4u)+u32(7898672u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45d5ed:{NFSU2_TR(0x45d5ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45d5f7;}}
}
B45d5ef:L45d5ef:{c.instructions+=2;NFSU2_TR(0x45d5ef);
{u32 ea_=u32(u32(7898668u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45d5f5:{NFSU2_TR(0x45d5f5);
{goto L45d5fd;}
}
B45d5f7:L45d5f7:{c.instructions+=1;NFSU2_TR(0x45d5f7);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45d5fd:L45d5fd:{c.instructions+=4;NFSU2_TR(0x45d5fd);
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
B45d600:{NFSU2_TR(0x45d600);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B45d602:{NFSU2_TR(0x45d602);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B45d606:{NFSU2_TR(0x45d606);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L45d65f;}}
}
B45d608:L45d608:{c.instructions+=6;NFSU2_TR(0x45d608);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B45d60a:{NFSU2_TR(0x45d60a);
{u32 ea_=u32(u32(7898832u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45d610:{NFSU2_TR(0x45d610);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45d616:{NFSU2_TR(0x45d616);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B45d619:{NFSU2_TR(0x45d619);
{u32 ea_=u32(u32(7905204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45d61f:{NFSU2_TR(0x45d61f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45d624ull));
TAIL_STATIC(0x75bed4u,75b);
}
B45d624:L45d624:{c.instructions+=9;NFSU2_TR(0x45d624);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x29cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B45d62b:{NFSU2_TR(0x45d62b);
w2(R+4,u16(u32(r2(R+4))-u32(r2(R+0))));
}
B45d62e:{NFSU2_TR(0x45d62e);
w4(R+0,u32(r2(R+4)));
}
B45d631:{NFSU2_TR(0x45d631);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B45d632:{NFSU2_TR(0x45d632);
w4(R+4,u32(0xffffull));
}
B45d637:{NFSU2_TR(0x45d637);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x45d637);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x45d637);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B45d639:{NFSU2_TR(0x45d639);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d63a:{NFSU2_TR(0x45d63a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x29cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B45d641:{NFSU2_TR(0x45d641);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45d646ull));
TAIL_STATIC(0x43c2b0u,43c);
}
B45d646:L45d646:{c.instructions+=5;NFSU2_TR(0x45d646);
{u32 ea_=u32(u32(7898836u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45d64c:{NFSU2_TR(0x45d64c);
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
B45d64f:{NFSU2_TR(0x45d64f);
{u32 ea_=u32(r4(R+24)+u32(672u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45d655:{NFSU2_TR(0x45d655);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45d659:{NFSU2_TR(0x45d659);
{u32 ea_=u32(r4(R+24)+u32(660u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45d65f:L45d65f:{c.instructions+=6;NFSU2_TR(0x45d65f);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45d662:{NFSU2_TR(0x45d662);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45d663:{NFSU2_TR(0x45d663);
{u32 ea_=u32(u32(7905372u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45d669:{NFSU2_TR(0x45d669);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B45d66b:{NFSU2_TR(0x45d66b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45d66c:{NFSU2_TR(0x45d66c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45d670:L45d670:{c.instructions+=11;NFSU2_TR(0x45d670);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d671:{NFSU2_TR(0x45d671);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d672:{NFSU2_TR(0x45d672);
__builtin_memmove((R+24),(R+4),4);
}
B45d674:{NFSU2_TR(0x45d674);
{u32 ea_=u32(r4(R+24)+u32(440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45d67a:{NFSU2_TR(0x45d67a);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B45d67c:{NFSU2_TR(0x45d67c);
{u32 ea_=u32(u32(7898840u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B45d682:{NFSU2_TR(0x45d682);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B45d686:{NFSU2_TR(0x45d686);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B45d68c:{NFSU2_TR(0x45d68c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B45d68e:{NFSU2_TR(0x45d68e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B45d691:{NFSU2_TR(0x45d691);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45d6f8;}}
}
B45d693:L45d693:{c.instructions+=6;NFSU2_TR(0x45d693);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45d697:{NFSU2_TR(0x45d697);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45d69d:{NFSU2_TR(0x45d69d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B45d6a1:{NFSU2_TR(0x45d6a1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B45d6a3:{NFSU2_TR(0x45d6a3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B45d6a6:{NFSU2_TR(0x45d6a6);
if(r1(R+514)){{goto L45d6b0;}}
}
B45d6a8:L45d6a8:{c.instructions+=2;NFSU2_TR(0x45d6a8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B45d6aa:{NFSU2_TR(0x45d6aa);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45d6b0:L45d6b0:{c.instructions+=5;NFSU2_TR(0x45d6b0);
{u32 ea_=u32(r4(R+24)+u32(660u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45d6b6:{NFSU2_TR(0x45d6b6);
__builtin_memmove((R+0),gp(0x890118),4);
}
B45d6bb:{NFSU2_TR(0x45d6bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45d6bd:{NFSU2_TR(0x45d6bd);
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
B45d6c0:{NFSU2_TR(0x45d6c0);
if(r1(R+518)){{goto L45d710;}}
}
B45d6c2:L45d6c2:{c.instructions+=2;NFSU2_TR(0x45d6c2);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B45d6c5:{NFSU2_TR(0x45d6c5);
if(r1(R+518)){{goto L45d710;}}
}
B45d6c7:L45d6c7:{c.instructions+=2;NFSU2_TR(0x45d6c7);
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
B45d6c9:{NFSU2_TR(0x45d6c9);
if(r1(R+518)){{goto L45d710;}}
}
B45d6cb:L45d6cb:{c.instructions+=4;NFSU2_TR(0x45d6cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45d6d1:{NFSU2_TR(0x45d6d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45d6d4:{NFSU2_TR(0x45d6d4);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B45d6d7:{NFSU2_TR(0x45d6d7);
if(r1(R+518)){{goto L45d710;}}
}
B45d6d9:L45d6d9:{c.instructions+=2;NFSU2_TR(0x45d6d9);
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
B45d6db:{NFSU2_TR(0x45d6db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45d710;}}
}
B45d6dd:L45d6dd:{c.instructions+=3;NFSU2_TR(0x45d6dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45d6e0:{NFSU2_TR(0x45d6e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45d6e3:{NFSU2_TR(0x45d6e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45d6e8ull));
TAIL_STATIC(0x5ecdf0u,5ec);
}
B45d6e8:L45d6e8:{c.instructions+=2;NFSU2_TR(0x45d6e8);
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
B45d6ea:{NFSU2_TR(0x45d6ea);
if(r1(R+518)){{goto L45d700;}}
}
B45d6ec:L45d6ec:{c.instructions+=4;NFSU2_TR(0x45d6ec);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45d6f3:{NFSU2_TR(0x45d6f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45d6f4:{NFSU2_TR(0x45d6f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45d6f5:{NFSU2_TR(0x45d6f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45d6f8:L45d6f8:{c.instructions+=2;NFSU2_TR(0x45d6f8);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45d6fe:{NFSU2_TR(0x45d6fe);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45d6b0u);}goto L45d6b0;}
}
B45d700:L45d700:{c.instructions+=3;NFSU2_TR(0x45d700);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x3ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B45d707:{NFSU2_TR(0x45d707);
__builtin_memmove((R+8),(R+518),1);
}
B45d70a:{NFSU2_TR(0x45d70a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45d710:L45d710:{c.instructions+=3;NFSU2_TR(0x45d710);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45d711:{NFSU2_TR(0x45d711);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45d712:{NFSU2_TR(0x45d712);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45d720:L45d720:{c.instructions+=10;NFSU2_TR(0x45d720);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d721:{NFSU2_TR(0x45d721);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d722:{NFSU2_TR(0x45d722);
__builtin_memmove((R+24),(R+4),4);
}
B45d724:{NFSU2_TR(0x45d724);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45d727:{NFSU2_TR(0x45d727);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45d72a:{NFSU2_TR(0x45d72a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45d730:{NFSU2_TR(0x45d730);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45d733:{NFSU2_TR(0x45d733);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d737:{NFSU2_TR(0x45d737);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45d73a:{NFSU2_TR(0x45d73a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45d73full));
TAIL_STATIC(0x5b5930u,5b5);
}
B45d73f:L45d73f:{c.instructions+=4;NFSU2_TR(0x45d73f);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B45d743:{NFSU2_TR(0x45d743);
__builtin_memmove((R+0),gp(0x89e7e3),1);
}
B45d748:{NFSU2_TR(0x45d748);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B45d74a:{NFSU2_TR(0x45d74a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45d755;}}
}
B45d74c:L45d74c:{c.instructions+=3;NFSU2_TR(0x45d74c);
__builtin_memmove((R+0),gp(0x89010c),4);
}
B45d751:{NFSU2_TR(0x45d751);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45d753:{NFSU2_TR(0x45d753);
if(r1(R+518)){{goto L45d75d;}}
}
B45d755:L45d755:{c.instructions+=2;NFSU2_TR(0x45d755);
{u32 ea_=u32(u32(7898848u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45d75b:{NFSU2_TR(0x45d75b);
{goto L45d77d;}
}
B45d75d:L45d75d:{c.instructions+=3;NFSU2_TR(0x45d75d);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B45d762:{NFSU2_TR(0x45d762);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B45d764:{NFSU2_TR(0x45d764);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45d76f;}}
}
B45d766:L45d766:{c.instructions+=3;NFSU2_TR(0x45d766);
__builtin_memmove((R+0),gp(0x890104),4);
}
B45d76b:{NFSU2_TR(0x45d76b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B45d76d:{NFSU2_TR(0x45d76d);
if(r1(R+518)){{goto L45d777;}}
}
B45d76f:L45d76f:{c.instructions+=2;NFSU2_TR(0x45d76f);
{u32 ea_=u32(u32(7898852u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45d775:{NFSU2_TR(0x45d775);
{goto L45d77d;}
}
B45d777:L45d777:{c.instructions+=1;NFSU2_TR(0x45d777);
{u32 ea_=u32(u32(7898844u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45d77d:L45d77d:{c.instructions+=3;NFSU2_TR(0x45d77d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B45d77f:{NFSU2_TR(0x45d77f);
{u32 ea_=u32(u32(7897588u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45d785:{NFSU2_TR(0x45d785);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45d78aull));
TAIL_STATIC(0x75bed4u,75b);
}
B45d78a:L45d78a:{c.instructions+=9;NFSU2_TR(0x45d78a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B45d78c:{NFSU2_TR(0x45d78c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45d78f:{NFSU2_TR(0x45d78f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45d792:{NFSU2_TR(0x45d792);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45d795:{NFSU2_TR(0x45d795);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45d79b:{NFSU2_TR(0x45d79b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B45d79c:{NFSU2_TR(0x45d79c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45d79f:{NFSU2_TR(0x45d79f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45d7a0:{NFSU2_TR(0x45d7a0);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L45d7a7;}}
}
B45d7a2:L45d7a2:{c.instructions+=1;NFSU2_TR(0x45d7a2);
w4(R+0,u32(0x2ull));
}
B45d7a7:L45d7a7:{c.instructions+=2;NFSU2_TR(0x45d7a7);
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
B45d7a9:{NFSU2_TR(0x45d7a9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45d7ad;}}
}
B45d7ab:L45d7ab:{c.instructions+=1;NFSU2_TR(0x45d7ab);
__builtin_memmove((R+0),(R+4),4);
}
B45d7ad:L45d7ad:{c.instructions+=2;NFSU2_TR(0x45d7ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45d7ae:{NFSU2_TR(0x45d7ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45d7b0:L45d7b0:{c.instructions+=3;NFSU2_TR(0x45d7b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45d7b4:{NFSU2_TR(0x45d7b4);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x0ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45d7b7:{NFSU2_TR(0x45d7b7);
if(r1(R+518)){{goto L45d7ca;}}
}
B45d7b9:L45d7b9:{c.instructions+=2;NFSU2_TR(0x45d7b9);
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
B45d7ba:{NFSU2_TR(0x45d7ba);
if(r1(R+518)){{goto L45d7c2;}}
}
B45d7bc:L45d7bc:{c.instructions+=2;NFSU2_TR(0x45d7bc);
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
B45d7bf:{NFSU2_TR(0x45d7bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45d7c2:L45d7c2:{c.instructions+=2;NFSU2_TR(0x45d7c2);
w4(R+0,u32(0x2ull));
}
B45d7c7:{NFSU2_TR(0x45d7c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45d7ca:L45d7ca:{c.instructions+=2;NFSU2_TR(0x45d7ca);
w4(R+0,u32(0x3ull));
}
B45d7cf:{NFSU2_TR(0x45d7cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45d7e0:L45d7e0:{c.instructions+=6;NFSU2_TR(0x45d7e0);
__builtin_memmove((R+0),gp(0x890118),4);
}
B45d7e5:{NFSU2_TR(0x45d7e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45d7e7:{NFSU2_TR(0x45d7e7);
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
B45d7ea:{NFSU2_TR(0x45d7ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d7eb:{NFSU2_TR(0x45d7eb);
__builtin_memmove((R+24),(R+4),4);
}
B45d7ed:{NFSU2_TR(0x45d7ed);
if(r1(R+518)){{goto L45d92a;}}
}
B45d7f3:L45d7f3:{c.instructions+=2;NFSU2_TR(0x45d7f3);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B45d7f6:{NFSU2_TR(0x45d7f6);
if(r1(R+518)){{goto L45d92a;}}
}
B45d7fc:L45d7fc:{c.instructions+=2;NFSU2_TR(0x45d7fc);
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
B45d7fe:{NFSU2_TR(0x45d7fe);
if(r1(R+518)){{goto L45d92a;}}
}
B45d804:L45d804:{c.instructions+=5;NFSU2_TR(0x45d804);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45d807:{NFSU2_TR(0x45d807);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45d80a:{NFSU2_TR(0x45d80a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45d810:{NFSU2_TR(0x45d810);
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
B45d812:{NFSU2_TR(0x45d812);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45d820;}}
}
B45d814:L45d814:{c.instructions+=3;NFSU2_TR(0x45d814);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45d81e:{NFSU2_TR(0x45d81e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45d81f:{NFSU2_TR(0x45d81f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45d820:L45d820:{c.instructions+=2;NFSU2_TR(0x45d820);
__builtin_memmove((R+4),(R+24),4);
}
B45d822:{NFSU2_TR(0x45d822);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45d827ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45d720u);}goto L45d720;}
}
B45d827:L45d827:{c.instructions+=4;NFSU2_TR(0x45d827);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45d82d:{NFSU2_TR(0x45d82d);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B45d82f:{NFSU2_TR(0x45d82f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B45d832:{NFSU2_TR(0x45d832);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45d839;}}
}
B45d834:L45d834:{c.instructions+=2;NFSU2_TR(0x45d834);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfffffffeull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffffeull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45d837:{NFSU2_TR(0x45d837);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L45d84c;}}
}
B45d839:L45d839:{c.instructions+=2;NFSU2_TR(0x45d839);
__builtin_memmove((R+4),(R+24),4);
}
B45d83b:{NFSU2_TR(0x45d83b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45d840ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45d720u);}goto L45d720;}
}
B45d840:L45d840:{c.instructions+=2;NFSU2_TR(0x45d840);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d846:{NFSU2_TR(0x45d846);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d84c:L45d84c:{c.instructions+=5;NFSU2_TR(0x45d84c);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45d84f:{NFSU2_TR(0x45d84f);
{u32 ea_=u32(u32(7905376u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B45d855:{NFSU2_TR(0x45d855);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B45d857:{NFSU2_TR(0x45d857);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B45d85a:{NFSU2_TR(0x45d85a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45d8ac;}}
}
B45d85c:L45d85c:{c.instructions+=2;NFSU2_TR(0x45d85c);
__builtin_memmove((R+4),(R+24),4);
}
B45d85e:{NFSU2_TR(0x45d85e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45d863ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45d720u);}goto L45d720;}
}
B45d863:L45d863:{c.instructions+=2;NFSU2_TR(0x45d863);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45d866:{NFSU2_TR(0x45d866);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L45d86f;}}
}
B45d868:L45d868:{c.instructions+=2;NFSU2_TR(0x45d868);
w4(R+0,u32(0x3ull));
}
B45d86d:{NFSU2_TR(0x45d86d);
{goto L45d879;}
}
B45d86f:L45d86f:{c.instructions+=2;NFSU2_TR(0x45d86f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45d872:{NFSU2_TR(0x45d872);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45d879;}}
}
B45d874:L45d874:{c.instructions+=1;NFSU2_TR(0x45d874);
w4(R+0,u32(0x7ull));
}
B45d879:L45d879:{c.instructions+=4;NFSU2_TR(0x45d879);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d87f:{NFSU2_TR(0x45d87f);
__builtin_memmove((R+0),gp(0x7886e8),4);
}
B45d884:{NFSU2_TR(0x45d884);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d885:{NFSU2_TR(0x45d885);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45d88aull));
TAIL_STATIC(0x43c1f0u,43c);
}
B45d88a:L45d88a:{c.instructions+=8;NFSU2_TR(0x45d88a);
{u32 ea_=u32(r4(R+24)+u32(664u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45d890:{NFSU2_TR(0x45d890);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45d896:{NFSU2_TR(0x45d896);
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B45d899:{NFSU2_TR(0x45d899);
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
B45d89a:{NFSU2_TR(0x45d89a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45d8a4:{NFSU2_TR(0x45d8a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d8aa:{NFSU2_TR(0x45d8aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45d8ab:{NFSU2_TR(0x45d8ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45d8ac:L45d8ac:{c.instructions+=6;NFSU2_TR(0x45d8ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45d8b2:{NFSU2_TR(0x45d8b2);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45d8b5:{NFSU2_TR(0x45d8b5);
{u32 ea_=u32((r4(R+4)*4u)+u32(7898796u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B45d8bc:{NFSU2_TR(0x45d8bc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B45d8be:{NFSU2_TR(0x45d8be);
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
B45d8c1:{NFSU2_TR(0x45d8c1);
if(r1(R+514)){{goto L45d92a;}}
}
B45d8c3:L45d8c3:{c.instructions+=2;NFSU2_TR(0x45d8c3);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B45d8c6:{NFSU2_TR(0x45d8c6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45d92a;}}
}
B45d8c8:L45d8c8:{c.instructions+=2;NFSU2_TR(0x45d8c8);
__builtin_memmove((R+4),(R+24),4);
}
B45d8ca:{NFSU2_TR(0x45d8ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45d8cfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45d720u);}goto L45d720;}
}
B45d8cf:L45d8cf:{c.instructions+=3;NFSU2_TR(0x45d8cf);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B45d8d5:{NFSU2_TR(0x45d8d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d8db:{NFSU2_TR(0x45d8db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45d8e5;}}
}
B45d8dd:L45d8dd:{c.instructions+=2;NFSU2_TR(0x45d8dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B45d8e3:{NFSU2_TR(0x45d8e3);
{goto L45d8ef;}
}
B45d8e5:L45d8e5:{c.instructions+=1;NFSU2_TR(0x45d8e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45d8ef:L45d8ef:{c.instructions+=2;NFSU2_TR(0x45d8ef);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x2ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45d8f2:{NFSU2_TR(0x45d8f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45d91d;}}
}
B45d8f4:L45d8f4:{c.instructions+=8;NFSU2_TR(0x45d8f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45d8f7:{NFSU2_TR(0x45d8f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45d8fa:{NFSU2_TR(0x45d8fa);
{u32 ea_=u32(r4(R+0)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45d900:{NFSU2_TR(0x45d900);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45d906:{NFSU2_TR(0x45d906);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B45d90c:{NFSU2_TR(0x45d90c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B45d90e:{NFSU2_TR(0x45d90e);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B45d911:{NFSU2_TR(0x45d911);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45d91d;}}
}
B45d913:L45d913:{c.instructions+=1;NFSU2_TR(0x45d913);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45d91d:L45d91d:{c.instructions+=3;NFSU2_TR(0x45d91d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45d923:{NFSU2_TR(0x45d923);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45d924:{NFSU2_TR(0x45d924);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d92a:L45d92a:{c.instructions+=2;NFSU2_TR(0x45d92a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45d92b:{NFSU2_TR(0x45d92b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45d930:L45d930:{c.instructions+=2;NFSU2_TR(0x45d930);
w4(R+0,u32(0x7ed314ull));
}
B45d935:{NFSU2_TR(0x45d935);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45d940:L45d940:{c.instructions+=2;NFSU2_TR(0x45d940);
__builtin_memmove((R+0),gp(0x7ed318),4);
}
B45d945:{NFSU2_TR(0x45d945);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45d950:L45d950:{c.instructions+=6;NFSU2_TR(0x45d950);
__builtin_memmove((R+0),(R+4),4);
}
B45d952:{NFSU2_TR(0x45d952);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45d953:{NFSU2_TR(0x45d953);
u8 U[4];
w4(U+0,u32(0x789ed4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B45d959:{NFSU2_TR(0x45d959);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B45d95c:{NFSU2_TR(0x45d95c);
w4(R+24,u32(0x10ull));
}
B45d961:{NFSU2_TR(0x45d961);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B45d963:L45d963:{c.instructions+=5;NFSU2_TR(0x45d963);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B45d965:{NFSU2_TR(0x45d965);
w1(R+512,carry<u32>(r4(R+8),u32(0x4ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B45d968:{NFSU2_TR(0x45d968);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45d969:{NFSU2_TR(0x45d969);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B45d96d:{NFSU2_TR(0x45d96d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45d963u);}goto L45d963;}}
}
B45d96f:L45d96f:{c.instructions+=53;NFSU2_TR(0x45d96f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45d972:{NFSU2_TR(0x45d972);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d975:{NFSU2_TR(0x45d975);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d978:{NFSU2_TR(0x45d978);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d97b:{NFSU2_TR(0x45d97b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d97e:{NFSU2_TR(0x45d97e);
u8 U[4];
w4(U+0,u32(0x78a064ull));
s4(u32(r4(R+0)),r4(U+0));
}
B45d984:{NFSU2_TR(0x45d984);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d98a:{NFSU2_TR(0x45d98a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d990:{NFSU2_TR(0x45d990);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d996:{NFSU2_TR(0x45d996);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d99c:{NFSU2_TR(0x45d99c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d9a2:{NFSU2_TR(0x45d9a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45d9a8:{NFSU2_TR(0x45d9a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45d9af:{NFSU2_TR(0x45d9af);
__builtin_memmove(gp(0x82b078),(R+4),4);
}
B45d9b5:{NFSU2_TR(0x45d9b5);
s4(0x82a998,u32(0x7full));
}
B45d9bf:{NFSU2_TR(0x45d9bf);
__builtin_memmove(gp(0x82b070),(R+4),4);
}
B45d9c5:{NFSU2_TR(0x45d9c5);
__builtin_memmove(gp(0x82b880),(R+4),4);
}
B45d9cb:{NFSU2_TR(0x45d9cb);
s4(0x82a5b8,u32(0x0ull));
}
B45d9d5:{NFSU2_TR(0x45d9d5);
s4(0x82b618,u32(0x3f800000ull));
}
B45d9df:{NFSU2_TR(0x45d9df);
s4(0x82a5cc,u32(0x0ull));
}
B45d9e9:{NFSU2_TR(0x45d9e9);
s4(0x82a5d0,u32(0x3f800000ull));
}
B45d9f3:{NFSU2_TR(0x45d9f3);
s4(0x82b064,u32(0x0ull));
}
B45d9fd:{NFSU2_TR(0x45d9fd);
s4(0x82af30,u32(0x0ull));
}
B45da07:{NFSU2_TR(0x45da07);
s4(0x82afac,u32(0x3f800000ull));
}
B45da11:{NFSU2_TR(0x45da11);
s4(0x82b074,u32(0x3f800000ull));
}
B45da1b:{NFSU2_TR(0x45da1b);
w4(R+8,u32(0x5ull));
}
B45da20:{NFSU2_TR(0x45da20);
__builtin_memmove(gp(0x82b060),(R+8),4);
}
B45da26:{NFSU2_TR(0x45da26);
__builtin_memmove(gp(0x82af2c),(R+8),4);
}
B45da2c:{NFSU2_TR(0x45da2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45da32:{NFSU2_TR(0x45da32);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb4ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B45da3c:{NFSU2_TR(0x45da3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45da42:{NFSU2_TR(0x45da42);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45da48:{NFSU2_TR(0x45da48);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45da4e:{NFSU2_TR(0x45da4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45da54:{NFSU2_TR(0x45da54);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45da57:{NFSU2_TR(0x45da57);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45da5d:{NFSU2_TR(0x45da5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45da63:{NFSU2_TR(0x45da63);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45da69:{NFSU2_TR(0x45da69);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45da6f:{NFSU2_TR(0x45da6f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45da75:{NFSU2_TR(0x45da75);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd5ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45da7b:{NFSU2_TR(0x45da7b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd6ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45da81:{NFSU2_TR(0x45da81);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbcull))));
w4(U+4,u32(0x3a83126full));
s4(u32(r4(U+0)),r4(U+4));
}
B45da8b:{NFSU2_TR(0x45da8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45da91:{NFSU2_TR(0x45da91);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45da97:{NFSU2_TR(0x45da97);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45da9d:{NFSU2_TR(0x45da9d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45daa3:{NFSU2_TR(0x45daa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45daa9:{NFSU2_TR(0x45daa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45daaf:{NFSU2_TR(0x45daaf);
__builtin_memmove(gp(0x82af28),(R+4),1);
}
B45dab5:{NFSU2_TR(0x45dab5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd7ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45dabb:{NFSU2_TR(0x45dabb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45dabc:{NFSU2_TR(0x45dabc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45dac0:L45dac0:{c.instructions+=4;NFSU2_TR(0x45dac0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45dac4:{NFSU2_TR(0x45dac4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45dac7:{NFSU2_TR(0x45dac7);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B45daca:{NFSU2_TR(0x45daca);
if(r1(R+518)){{goto L45dae3;}}
}
B45dacc:L45dacc:{c.instructions+=2;NFSU2_TR(0x45dacc);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B45dacf:{NFSU2_TR(0x45dacf);
if(r1(R+518)){{goto L45dae3;}}
}
B45dad1:L45dad1:{c.instructions+=2;NFSU2_TR(0x45dad1);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B45dad4:{NFSU2_TR(0x45dad4);
if(r1(R+518)){{goto L45dae3;}}
}
B45dad6:L45dad6:{c.instructions+=3;NFSU2_TR(0x45dad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45dadd:{NFSU2_TR(0x45dadd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45dae0:{NFSU2_TR(0x45dae0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45dae3:L45dae3:{c.instructions+=3;NFSU2_TR(0x45dae3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45dae6:{NFSU2_TR(0x45dae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45dae9:{NFSU2_TR(0x45dae9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45daf0:L45daf0:{c.instructions+=8;NFSU2_TR(0x45daf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45daf1:{NFSU2_TR(0x45daf1);
__builtin_memmove((R+24),(R+4),4);
}
B45daf3:{NFSU2_TR(0x45daf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45daf6:{NFSU2_TR(0x45daf6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+8),(U+0),4);
}
B45dafc:{NFSU2_TR(0x45dafc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45db00:{NFSU2_TR(0x45db00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B45db02:{NFSU2_TR(0x45db02);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45db03:{NFSU2_TR(0x45db03);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45db06ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45db06:L45db06:{c.instructions+=9;NFSU2_TR(0x45db06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45db09:{NFSU2_TR(0x45db09);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45db0b:{NFSU2_TR(0x45db0b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45db0e:{NFSU2_TR(0x45db0e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x71ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45db11:{NFSU2_TR(0x45db11);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B45db14:{NFSU2_TR(0x45db14);
__builtin_memmove((R+8),(R+518),1);
}
B45db17:{NFSU2_TR(0x45db17);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd7ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45db1d:{NFSU2_TR(0x45db1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45db1e:{NFSU2_TR(0x45db1e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45db20:L45db20:{c.instructions+=6;NFSU2_TR(0x45db20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45db24:{NFSU2_TR(0x45db24);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B45db26:{NFSU2_TR(0x45db26);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B45db28:{NFSU2_TR(0x45db28);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff5ull))));
}
B45db2b:{NFSU2_TR(0x45db2b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xaull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xaull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45db2e:{NFSU2_TR(0x45db2e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45db40:L45db40:{c.instructions+=8;NFSU2_TR(0x45db40);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B45db43:{NFSU2_TR(0x45db43);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B45db45:{NFSU2_TR(0x45db45);
u8 U[5];
__builtin_memmove((U+3),(R+0),1);
w1(R+512,u8((r1(R+8))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+8),r1(U+3)));
w1(U+4,u8(u32(r1(R+8))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B45db47:{NFSU2_TR(0x45db47);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45db4a:{NFSU2_TR(0x45db4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45db4d:{NFSU2_TR(0x45db4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45db50:{NFSU2_TR(0x45db50);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45db53:{NFSU2_TR(0x45db53);
if(r1(R+518)){{goto L45db8a;}}
}
B45db55:L45db55:{c.instructions+=3;NFSU2_TR(0x45db55);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45db58:{NFSU2_TR(0x45db58);
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
B45db5b:{NFSU2_TR(0x45db5b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L45db7f;}}
}
B45db5d:L45db5d:{c.instructions+=2;NFSU2_TR(0x45db5d);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45db60:{NFSU2_TR(0x45db60);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L45db73;}}
}
B45db62:L45db62:{c.instructions+=2;NFSU2_TR(0x45db62);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x14ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x14ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45db65:{NFSU2_TR(0x45db65);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45db7f;}}
}
B45db67:L45db67:{c.instructions+=4;NFSU2_TR(0x45db67);
w4(R+0,u32(0x1ull));
}
B45db6c:{NFSU2_TR(0x45db6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45db6f:{NFSU2_TR(0x45db6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45db72:{NFSU2_TR(0x45db72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45db73:L45db73:{c.instructions+=4;NFSU2_TR(0x45db73);
w4(R+0,u32(0x1ull));
}
B45db78:{NFSU2_TR(0x45db78);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45db7b:{NFSU2_TR(0x45db7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45db7e:{NFSU2_TR(0x45db7e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45db7f:L45db7f:{c.instructions+=3;NFSU2_TR(0x45db7f);
w4(R+0,u32(0x1ull));
}
B45db84:{NFSU2_TR(0x45db84);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45db87:{NFSU2_TR(0x45db87);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45db8a:L45db8a:{c.instructions+=1;NFSU2_TR(0x45db8a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45db90:L45db90:{c.instructions+=4;NFSU2_TR(0x45db90);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B45db96:{NFSU2_TR(0x45db96);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B45db98:{NFSU2_TR(0x45db98);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
w1(R+512,u8((r1(R+0))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+0),r1(U+3)));
w1(U+4,u8(u32(r1(R+0))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B45db9a:{NFSU2_TR(0x45db9a);
if(r1(R+518)){{goto L45dc3c;}}
}
B45dba0:L45dba0:{c.instructions+=14;NFSU2_TR(0x45dba0);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B45dba4:{NFSU2_TR(0x45dba4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45dba8:{NFSU2_TR(0x45dba8);
__builtin_memmove(gp(0x82af2c),(R+0),4);
}
B45dbad:{NFSU2_TR(0x45dbad);
{u32 ea_=u32(u32(8563100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45dbb3:{NFSU2_TR(0x45dbb3);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45dbba:{NFSU2_TR(0x45dbba);
__builtin_memmove((R+0),gp(0x82b060),4);
}
B45dbbf:{NFSU2_TR(0x45dbbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B45dbc2:{NFSU2_TR(0x45dbc2);
{u32 ea_=u32((r4(R+0)*8u)+u32(8337288u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B45dbc9:{NFSU2_TR(0x45dbc9);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45dbcf:{NFSU2_TR(0x45dbcf);
{u32 ea_=u32(r4(R+4)+u32(188u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B45dbd5:{NFSU2_TR(0x45dbd5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B45dbdb:{NFSU2_TR(0x45dbdb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B45dbdd:{NFSU2_TR(0x45dbdd);
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
B45dbe0:{NFSU2_TR(0x45dbe0);
if(r1(R+514)){{goto L45dbec;}}
}
B45dbe2:L45dbe2:{c.instructions+=1;NFSU2_TR(0x45dbe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
w4(U+4,u32(0x3c23d70aull));
s4(u32(r4(U+0)),r4(U+4));
}
B45dbec:L45dbec:{c.instructions+=10;NFSU2_TR(0x45dbec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45dbf6:{NFSU2_TR(0x45dbf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45dbfc:{NFSU2_TR(0x45dbfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45dc02:{NFSU2_TR(0x45dc02);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45dc08:{NFSU2_TR(0x45dc08);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45dc0e:{NFSU2_TR(0x45dc0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45dc14:{NFSU2_TR(0x45dc14);
s4(0x82b064,u32(0x0ull));
}
B45dc1e:{NFSU2_TR(0x45dc1e);
s4(0x82af30,u32(0x0ull));
}
B45dc28:{NFSU2_TR(0x45dc28);
s4(0x82afac,u32(0x3f800000ull));
}
B45dc32:{NFSU2_TR(0x45dc32);
s4(0x82b074,u32(0x3f800000ull));
}
B45dc3c:L45dc3c:{c.instructions+=1;NFSU2_TR(0x45dc3c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45dc40:L45dc40:{c.instructions+=2;NFSU2_TR(0x45dc40);
w4(R+0,u32(0x7ed324ull));
}
B45dc45:{NFSU2_TR(0x45dc45);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45dc50:L45dc50:{c.instructions+=2;NFSU2_TR(0x45dc50);
__builtin_memmove((R+0),gp(0x7ed328),4);
}
B45dc55:{NFSU2_TR(0x45dc55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45dc60:L45dc60:{c.instructions+=2;NFSU2_TR(0x45dc60);
w4(R+0,u32(0x7ed334ull));
}
B45dc65:{NFSU2_TR(0x45dc65);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45dc70:L45dc70:{c.instructions+=2;NFSU2_TR(0x45dc70);
__builtin_memmove((R+0),gp(0x7ed338),4);
}
B45dc75:{NFSU2_TR(0x45dc75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45dc80:L45dc80:{c.instructions+=6;NFSU2_TR(0x45dc80);
__builtin_memmove((R+0),(R+4),4);
}
B45dc82:{NFSU2_TR(0x45dc82);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45dc83:{NFSU2_TR(0x45dc83);
u8 U[4];
w4(U+0,u32(0x789ed4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B45dc89:{NFSU2_TR(0x45dc89);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B45dc8c:{NFSU2_TR(0x45dc8c);
w4(R+8,u32(0x10ull));
}
B45dc91:{NFSU2_TR(0x45dc91);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B45dc93:L45dc93:{c.instructions+=5;NFSU2_TR(0x45dc93);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B45dc95:{NFSU2_TR(0x45dc95);
w1(R+512,carry<u32>(r4(R+4),u32(0x4ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B45dc98:{NFSU2_TR(0x45dc98);
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
B45dc99:{NFSU2_TR(0x45dc99);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B45dc9d:{NFSU2_TR(0x45dc9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45dc93u);}goto L45dc93;}}
}
B45dc9f:L45dc9f:{c.instructions+=8;NFSU2_TR(0x45dc9f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45dca2:{NFSU2_TR(0x45dca2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45dca5:{NFSU2_TR(0x45dca5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45dca8:{NFSU2_TR(0x45dca8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45dcab:{NFSU2_TR(0x45dcab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45dcae:{NFSU2_TR(0x45dcae);
u8 U[4];
w4(U+0,u32(0x78a08cull));
s4(u32(r4(R+0)),r4(U+0));
}
B45dcb4:{NFSU2_TR(0x45dcb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45dcb5:{NFSU2_TR(0x45dcb5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45dcc0:L45dcc0:{c.instructions+=8;NFSU2_TR(0x45dcc0);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B45dcc5:{NFSU2_TR(0x45dcc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45dcc8:{NFSU2_TR(0x45dcc8);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45dccb:{NFSU2_TR(0x45dccb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45dccc:{NFSU2_TR(0x45dccc);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45dcce:{NFSU2_TR(0x45dcce);
__builtin_memmove((R+24),(R+4),4);
}
B45dcd0:{NFSU2_TR(0x45dcd0);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45dcd6:{NFSU2_TR(0x45dcd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45dcdbull));
TAIL_STATIC(0x75bed4u,75b);
}
B45dcdb:L45dcdb:{c.instructions+=3;NFSU2_TR(0x45dcdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45dcde:{NFSU2_TR(0x45dcde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45dcdf:{NFSU2_TR(0x45dcdf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45dce0:L45dce0:{c.instructions+=2;NFSU2_TR(0x45dce0);
w4(R+0,u32(0x7ed348ull));
}
B45dce5:{NFSU2_TR(0x45dce5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45dcf0:L45dcf0:{c.instructions+=2;NFSU2_TR(0x45dcf0);
__builtin_memmove((R+0),gp(0x7ed34c),4);
}
B45dcf5:{NFSU2_TR(0x45dcf5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45dd00:L45dd00:{c.instructions+=2;NFSU2_TR(0x45dd00);
w4(R+0,u32(0x7ed358ull));
}
B45dd05:{NFSU2_TR(0x45dd05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45dd10:L45dd10:{c.instructions+=2;NFSU2_TR(0x45dd10);
__builtin_memmove((R+0),gp(0x7ed35c),4);
}
B45dd15:{NFSU2_TR(0x45dd15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45dd20:L45dd20:{c.instructions+=2;NFSU2_TR(0x45dd20);
w4(R+0,u32(0x7ed368ull));
}
B45dd25:{NFSU2_TR(0x45dd25);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45dd30:L45dd30:{c.instructions+=2;NFSU2_TR(0x45dd30);
__builtin_memmove((R+0),gp(0x7ed36c),4);
}
B45dd35:{NFSU2_TR(0x45dd35);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45dd40:L45dd40:{c.instructions+=2;NFSU2_TR(0x45dd40);
w4(R+0,u32(0x7ed26cull));
}
B45dd45:{NFSU2_TR(0x45dd45);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45dd50:L45dd50:{c.instructions+=2;NFSU2_TR(0x45dd50);
__builtin_memmove((R+0),gp(0x7ed270),4);
}
B45dd55:{NFSU2_TR(0x45dd55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45dd60:L45dd60:{c.instructions+=16;NFSU2_TR(0x45dd60);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45dd62:{NFSU2_TR(0x45dd62);
u8 U[4];
w4(U+0,u32(0x772426ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45dd67:{NFSU2_TR(0x45dd67);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45dd6d:{NFSU2_TR(0x45dd6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45dd6e:{NFSU2_TR(0x45dd6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45dd75:{NFSU2_TR(0x45dd75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45dd76:{NFSU2_TR(0x45dd76);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45dd77:{NFSU2_TR(0x45dd77);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45dd78:{NFSU2_TR(0x45dd78);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45dd79:{NFSU2_TR(0x45dd79);
__builtin_memmove((R+24),(R+4),4);
}
B45dd7b:{NFSU2_TR(0x45dd7b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45dd7c:{NFSU2_TR(0x45dd7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45dd80:{NFSU2_TR(0x45dd80);
u8 U[4];
w4(U+0,u32(0x789ed4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B45dd86:{NFSU2_TR(0x45dd86);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B45dd89:{NFSU2_TR(0x45dd89);
w4(R+4,u32(0x10ull));
}
B45dd8e:{NFSU2_TR(0x45dd8e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B45dd90:L45dd90:{c.instructions+=5;NFSU2_TR(0x45dd90);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B45dd92:{NFSU2_TR(0x45dd92);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B45dd95:{NFSU2_TR(0x45dd95);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B45dd96:{NFSU2_TR(0x45dd96);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B45dd9a:{NFSU2_TR(0x45dd9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45dd90u);}goto L45dd90;}}
}
B45dd9c:L45dd9c:{c.instructions+=10;NFSU2_TR(0x45dd9c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45dd9f:{NFSU2_TR(0x45dd9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45dda2:{NFSU2_TR(0x45dda2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45dda5:{NFSU2_TR(0x45dda5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45dda8:{NFSU2_TR(0x45dda8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ddab:{NFSU2_TR(0x45ddab);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((R+20),(U+0),4);
}
B45ddb1:{NFSU2_TR(0x45ddb1);
__builtin_memmove((R+4),(R+20),4);
}
B45ddb3:{NFSU2_TR(0x45ddb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ddb7:{NFSU2_TR(0x45ddb7);
u8 U[4];
w4(U+0,u32(0x78a0b4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B45ddbd:{NFSU2_TR(0x45ddbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45ddc2ull));
TAIL_STATIC(0x576880u,576);
}
B45ddc2:L45ddc2:{c.instructions+=5;NFSU2_TR(0x45ddc2);
w4(R+0,u32(0x1388ull));
}
B45ddc7:{NFSU2_TR(0x45ddc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ddca:{NFSU2_TR(0x45ddca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ddcd:{NFSU2_TR(0x45ddcd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45ddd3:{NFSU2_TR(0x45ddd3);
w4(R+4,u32(0x6ull));
}
B45ddd8:L45ddd8:{c.instructions+=1;NFSU2_TR(0x45ddd8);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L45ddda;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45ddd8u);}goto L45ddd8;}
}
B45ddda:L45ddda:{c.instructions+=4;NFSU2_TR(0x45ddda);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45dddc:{NFSU2_TR(0x45dddc);
__builtin_memmove((R+4),(R+20),4);
}
B45ddde:{NFSU2_TR(0x45ddde);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45dde3:{NFSU2_TR(0x45dde3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45dde8ull));
TAIL_STATIC(0x5768a0u,576);
}
B45dde8:L45dde8:{c.instructions+=18;NFSU2_TR(0x45dde8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45ddec:{NFSU2_TR(0x45ddec);
w4(R+0,u32(0xbf800000ull));
}
B45ddf1:{NFSU2_TR(0x45ddf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ddf7:{NFSU2_TR(0x45ddf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45ddfd:{NFSU2_TR(0x45ddfd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45ddfe:{NFSU2_TR(0x45ddfe);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45de04:{NFSU2_TR(0x45de04);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd5ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45de0a:{NFSU2_TR(0x45de0a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd6ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45de10:{NFSU2_TR(0x45de10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45de16:{NFSU2_TR(0x45de16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45de19:{NFSU2_TR(0x45de19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45de20:{NFSU2_TR(0x45de20);
__builtin_memmove((R+0),(R+24),4);
}
B45de22:{NFSU2_TR(0x45de22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45de23:{NFSU2_TR(0x45de23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B45de24:{NFSU2_TR(0x45de24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45de25:{NFSU2_TR(0x45de25);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45de2c:{NFSU2_TR(0x45de2c);
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
B45de2f:{NFSU2_TR(0x45de2f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45de30:L45de30:{c.instructions+=4;NFSU2_TR(0x45de30);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45de34:{NFSU2_TR(0x45de34);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45de38:{NFSU2_TR(0x45de38);
u8 U[30];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+22),(U+12),4);
w1(R+512,u8((r4(U+22))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+22),r4(R+8)));
w4(U+26,u32(u32(r4(U+22))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+26))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+26))==(u32(0x0ull))));
w4(U+16,u32(u32(r4(U+26))&u32(u32(0xffull))));
w1(U+20,u8(__builtin_popcountll(u64(r4(U+16)))));
w1(U+21,u8(u32(r1(U+20))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+21))==(u8(0x0ull))));
}
B45de3f:{NFSU2_TR(0x45de3f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L45de48;}}
}
B45de41:L45de41:{c.instructions+=1;NFSU2_TR(0x45de41);
u8 U[16];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B45de48:L45de48:{c.instructions+=1;NFSU2_TR(0x45de48);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45de50:L45de50:{c.instructions+=2;NFSU2_TR(0x45de50);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B45de53:{NFSU2_TR(0x45de53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45de60:L45de60:{c.instructions+=15;NFSU2_TR(0x45de60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B45de63:{NFSU2_TR(0x45de63);
__builtin_memmove((R+0),gp(0x82bb7c),4);
}
B45de68:{NFSU2_TR(0x45de68);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45de6b:{NFSU2_TR(0x45de6b);
{u32 ea_=u32(r4(R+4)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45de6e:{NFSU2_TR(0x45de6e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B45de70:{NFSU2_TR(0x45de70);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B45de74:{NFSU2_TR(0x45de74);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45de75:{NFSU2_TR(0x45de75);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45de79:{NFSU2_TR(0x45de79);
{u32 ea_=u32(r4(R+4)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45de7c:{NFSU2_TR(0x45de7c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B45de80:{NFSU2_TR(0x45de80);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B45de82:{NFSU2_TR(0x45de82);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45de83:{NFSU2_TR(0x45de83);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45de87:{NFSU2_TR(0x45de87);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B45de89:{NFSU2_TR(0x45de89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45de8eull));
TAIL_STATIC(0x43ce50u,43c);
}
B45de8e:L45de8e:{c.instructions+=10;NFSU2_TR(0x45de8e);
__builtin_memmove((R+0),gp(0x82bb78),4);
}
B45de93:{NFSU2_TR(0x45de93);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45de97:{NFSU2_TR(0x45de97);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45de9a:{NFSU2_TR(0x45de9a);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45de9e:{NFSU2_TR(0x45de9e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45dea0:{NFSU2_TR(0x45dea0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B45dea2:{NFSU2_TR(0x45dea2);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45dea6:{NFSU2_TR(0x45dea6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45deaa:{NFSU2_TR(0x45deaa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45deab:{NFSU2_TR(0x45deab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45deb0ull));
TAIL_STATIC(0x43c490u,43c);
}
B45deb0:L45deb0:{c.instructions+=14;NFSU2_TR(0x45deb0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45deb4:{NFSU2_TR(0x45deb4);
w4(R+4,u32(0x4000ull));
}
B45deb9:{NFSU2_TR(0x45deb9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B45debc:{NFSU2_TR(0x45debc);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B45debe:{NFSU2_TR(0x45debe);
__builtin_memmove((R+0),gp(0x82bb78),4);
}
B45dec3:{NFSU2_TR(0x45dec3);
__builtin_memmove(gp(0x82bb80),(R+4),2);
}
B45deca:{NFSU2_TR(0x45deca);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45decd:{NFSU2_TR(0x45decd);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45ded1:{NFSU2_TR(0x45ded1);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B45ded3:{NFSU2_TR(0x45ded3);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B45ded5:{NFSU2_TR(0x45ded5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B45dedb:{NFSU2_TR(0x45dedb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B45dedd:{NFSU2_TR(0x45dedd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B45dee0:{NFSU2_TR(0x45dee0);
if(r1(R+514)){{goto L45def5;}}
}
B45dee2:L45dee2:{c.instructions+=4;NFSU2_TR(0x45dee2);
__builtin_memmove((R+0),gp(0x82bb80),4);
}
B45dee7:{NFSU2_TR(0x45dee7);
w4(R+8,u32(0xffffull));
}
B45deec:{NFSU2_TR(0x45deec);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B45deee:{NFSU2_TR(0x45deee);
__builtin_memmove(gp(0x82bb80),(R+8),2);
}
B45def5:L45def5:{c.instructions+=2;NFSU2_TR(0x45def5);
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
B45def8:{NFSU2_TR(0x45def8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45df00:L45df00:{c.instructions+=8;NFSU2_TR(0x45df00);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45df01:{NFSU2_TR(0x45df01);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45df02:{NFSU2_TR(0x45df02);
__builtin_memmove((R+24),(R+4),4);
}
B45df04:{NFSU2_TR(0x45df04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45df0a:{NFSU2_TR(0x45df0a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x82bb40ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B45df11:{NFSU2_TR(0x45df11);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B45df13:{NFSU2_TR(0x45df13);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45df15:{NFSU2_TR(0x45df15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45df24;}}
}
B45df17:L45df17:{c.instructions+=3;NFSU2_TR(0x45df17);
__builtin_memmove((R+0),gp(0x82bb40),4);
}
B45df1c:{NFSU2_TR(0x45df1c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45df1e:{NFSU2_TR(0x45df1e);
if(r1(R+518)){TAIL_STATIC(0x45e0d9u,45e);}
}
B45df24:L45df24:{c.instructions+=3;NFSU2_TR(0x45df24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45df27:{NFSU2_TR(0x45df27);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45df29:{NFSU2_TR(0x45df29);
if(r1(R+518)){TAIL_STATIC(0x45e0d9u,45e);}
}
B45df2f:L45df2f:{c.instructions+=9;NFSU2_TR(0x45df2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45df31:{NFSU2_TR(0x45df31);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45df32:{NFSU2_TR(0x45df32);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45df35:{NFSU2_TR(0x45df35);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B45df37:{NFSU2_TR(0x45df37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45df3a:{NFSU2_TR(0x45df3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45df3d:{NFSU2_TR(0x45df3d);
__builtin_memmove((R+0),gp(0x82bc14),4);
}
B45df42:{NFSU2_TR(0x45df42);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B45df45:{NFSU2_TR(0x45df45);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x45e0c7u,45e);}
}
B45df4b:L45df4b:{c.instructions+=1;NFSU2_TR(0x45df4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x45e0ecull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45df52:L45df52:{c.instructions+=7;NFSU2_TR(0x45df52);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x82bf10ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B45df59:{NFSU2_TR(0x45df59);
__builtin_memmove(gp(0x82bb7c),(R+4),4);
}
B45df5f:{NFSU2_TR(0x45df5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45df65:{NFSU2_TR(0x45df65);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x82beccull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B45df6c:{NFSU2_TR(0x45df6c);
__builtin_memmove((R+4),(R+24),4);
}
B45df6e:{NFSU2_TR(0x45df6e);
__builtin_memmove(gp(0x82bb78),(R+0),4);
}
B45df73:{NFSU2_TR(0x45df73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45df78ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45de60u);}goto L45de60;}
}
B45df78:L45df78:{c.instructions+=6;NFSU2_TR(0x45df78);
w4(R+4,u32(m2(0x82bb80)));
}
B45df7f:{NFSU2_TR(0x45df7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45df82:{NFSU2_TR(0x45df82);
__builtin_memmove((R+8),gp(0x82bb7c),4);
}
B45df88:{NFSU2_TR(0x45df88);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45df89:{NFSU2_TR(0x45df89);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45df8a:{NFSU2_TR(0x45df8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45df8full));
TAIL_STATIC(0x401150u,401);
}
B45df8f:L45df8f:{c.instructions+=2;NFSU2_TR(0x45df8f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B45df92:{NFSU2_TR(0x45df92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45df97ull));
TAIL_STATIC(0x75bed4u,75b);
}
B45df97:L45df97:{c.instructions+=7;NFSU2_TR(0x45df97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45df9a:{NFSU2_TR(0x45df9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45dfa0:{NFSU2_TR(0x45dfa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x82bedcull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B45dfa7:{NFSU2_TR(0x45dfa7);
__builtin_memmove(gp(0x82bb7c),(R+4),4);
}
B45dfad:{NFSU2_TR(0x45dfad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45dfb3:{NFSU2_TR(0x45dfb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x82c6c4ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B45dfba:{NFSU2_TR(0x45dfba);
TAIL_STATIC(0x45e099u,45e);
}
B45dfbf:L45dfbf:{c.instructions+=7;NFSU2_TR(0x45dfbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x82bf20ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B45dfc6:{NFSU2_TR(0x45dfc6);
__builtin_memmove(gp(0x82bb7c),(R+0),4);
}
B45dfcb:{NFSU2_TR(0x45dfcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45dfd1:{NFSU2_TR(0x45dfd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x82be70ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B45dfd8:{NFSU2_TR(0x45dfd8);
__builtin_memmove((R+4),(R+24),4);
}
B45dfda:{NFSU2_TR(0x45dfda);
__builtin_memmove(gp(0x82bb78),(R+8),4);
}
B45dfe0:{NFSU2_TR(0x45dfe0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45dfe5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x45de60u);}goto L45de60;}
}
B45dfe5:L45dfe5:{c.instructions+=6;NFSU2_TR(0x45dfe5);
w4(R+0,u32(m2(0x82bb80)));
}
B45dfec:{NFSU2_TR(0x45dfec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45dfef:{NFSU2_TR(0x45dfef);
__builtin_memmove((R+4),gp(0x82bb7c),4);
}
B45dff5:{NFSU2_TR(0x45dff5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45dff6:{NFSU2_TR(0x45dff6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45dff7:{NFSU2_TR(0x45dff7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45dffcull));
TAIL_STATIC(0x401150u,401);
}
B45dffc:L45dffc:{c.instructions+=2;NFSU2_TR(0x45dffc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B45dfff:{NFSU2_TR(0x45dfff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45e004ull));
TAIL_STATIC(0x75bed4u,75b);
}
XIT:NFSU2_TR_EXIT(0x45d,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
