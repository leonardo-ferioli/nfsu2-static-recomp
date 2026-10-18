#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_404(u8* __restrict R,Cpu& c);
u32 body_406(u8* __restrict R,Cpu& c);
u32 body_407(u8* __restrict R,Cpu& c);
u32 body_40a(u8* __restrict R,Cpu& c);
u32 body_410(u8* __restrict R,Cpu& c);
u32 body_411(u8* __restrict R,Cpu& c);
u32 body_412(u8* __restrict R,Cpu& c);
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_416(u8* __restrict R,Cpu& c);
u32 body_418(u8* __restrict R,Cpu& c);
u32 body_419(u8* __restrict R,Cpu& c);
u32 body_41a(u8* __restrict R,Cpu& c);
u32 body_41b(u8* __restrict R,Cpu& c);
u32 body_41c(u8* __restrict R,Cpu& c);
u32 body_41d(u8* __restrict R,Cpu& c);
u32 body_41f(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_594(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5bf(u8* __restrict R,Cpu& c);
u32 body_5c9(u8* __restrict R,Cpu& c);
u32 body_5d4(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5dc(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x41e,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x41e,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_41e(u8* __restrict R,Cpu& c);
u32 page_41e(Cpu& c){return body_41e(c.regs.data(),c);}
__attribute__((noinline)) u32 body_41e(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x41e003:goto L41e003;
case 0x41e005:goto L41e005;
case 0x41e009:c.instructions+=5;goto B41e009;
case 0x41e00d:c.instructions+=4;goto B41e00d;
case 0x41e00e:c.instructions+=3;goto B41e00e;
case 0x41e00f:c.instructions+=2;goto B41e00f;
case 0x41e011:c.instructions+=1;goto B41e011;
case 0x41e016:goto L41e016;
case 0x41e017:c.instructions+=5;goto B41e017;
case 0x41e01b:c.instructions+=4;goto B41e01b;
case 0x41e01f:c.instructions+=3;goto B41e01f;
case 0x41e020:c.instructions+=2;goto B41e020;
case 0x41e022:c.instructions+=1;goto B41e022;
case 0x41e027:goto L41e027;
case 0x41e02d:c.instructions+=6;goto B41e02d;
case 0x41e02e:c.instructions+=5;goto B41e02e;
case 0x41e031:c.instructions+=4;goto B41e031;
case 0x41e037:c.instructions+=3;goto B41e037;
case 0x41e03a:c.instructions+=2;goto B41e03a;
case 0x41e03b:c.instructions+=1;goto B41e03b;
case 0x41e040:goto L41e040;
case 0x41e042:c.instructions+=5;goto B41e042;
case 0x41e048:c.instructions+=4;goto B41e048;
case 0x41e04c:c.instructions+=3;goto B41e04c;
case 0x41e04d:c.instructions+=2;goto B41e04d;
case 0x41e04e:c.instructions+=1;goto B41e04e;
case 0x41e060:goto L41e060;
case 0x41e061:c.instructions+=4;goto B41e061;
case 0x41e063:c.instructions+=3;goto B41e063;
case 0x41e069:c.instructions+=2;goto B41e069;
case 0x41e06b:c.instructions+=1;goto B41e06b;
case 0x41e071:goto L41e071;
case 0x41e077:c.instructions+=2;goto B41e077;
case 0x41e079:c.instructions+=1;goto B41e079;
case 0x41e07b:goto L41e07b;
case 0x41e081:c.instructions+=5;goto B41e081;
case 0x41e082:c.instructions+=4;goto B41e082;
case 0x41e087:c.instructions+=3;goto B41e087;
case 0x41e08c:c.instructions+=2;goto B41e08c;
case 0x41e08d:c.instructions+=1;goto B41e08d;
case 0x41e092:goto L41e092;
case 0x41e098:c.instructions+=5;goto B41e098;
case 0x41e099:c.instructions+=4;goto B41e099;
case 0x41e09e:c.instructions+=3;goto B41e09e;
case 0x41e0a3:c.instructions+=2;goto B41e0a3;
case 0x41e0a4:c.instructions+=1;goto B41e0a4;
case 0x41e0a9:goto L41e0a9;
case 0x41e0ac:goto L41e0ac;
case 0x41e0b2:c.instructions+=5;goto B41e0b2;
case 0x41e0b3:c.instructions+=4;goto B41e0b3;
case 0x41e0b8:c.instructions+=3;goto B41e0b8;
case 0x41e0bd:c.instructions+=2;goto B41e0bd;
case 0x41e0be:c.instructions+=1;goto B41e0be;
case 0x41e0c3:goto L41e0c3;
case 0x41e0c9:c.instructions+=5;goto B41e0c9;
case 0x41e0ca:c.instructions+=4;goto B41e0ca;
case 0x41e0cf:c.instructions+=3;goto B41e0cf;
case 0x41e0d4:c.instructions+=2;goto B41e0d4;
case 0x41e0d5:c.instructions+=1;goto B41e0d5;
case 0x41e0da:goto L41e0da;
case 0x41e0e0:c.instructions+=5;goto B41e0e0;
case 0x41e0e1:c.instructions+=4;goto B41e0e1;
case 0x41e0e6:c.instructions+=3;goto B41e0e6;
case 0x41e0eb:c.instructions+=2;goto B41e0eb;
case 0x41e0ec:c.instructions+=1;goto B41e0ec;
case 0x41e0f1:goto L41e0f1;
case 0x41e0f7:c.instructions+=5;goto B41e0f7;
case 0x41e0f8:c.instructions+=4;goto B41e0f8;
case 0x41e0fd:c.instructions+=3;goto B41e0fd;
case 0x41e102:c.instructions+=2;goto B41e102;
case 0x41e103:c.instructions+=1;goto B41e103;
case 0x41e108:goto L41e108;
case 0x41e10e:c.instructions+=6;goto B41e10e;
case 0x41e111:c.instructions+=5;goto B41e111;
case 0x41e112:c.instructions+=4;goto B41e112;
case 0x41e117:c.instructions+=3;goto B41e117;
case 0x41e11c:c.instructions+=2;goto B41e11c;
case 0x41e11d:c.instructions+=1;goto B41e11d;
case 0x41e122:goto L41e122;
case 0x41e128:c.instructions+=5;goto B41e128;
case 0x41e129:c.instructions+=4;goto B41e129;
case 0x41e12e:c.instructions+=3;goto B41e12e;
case 0x41e133:c.instructions+=2;goto B41e133;
case 0x41e134:c.instructions+=1;goto B41e134;
case 0x41e139:goto L41e139;
case 0x41e13f:c.instructions+=5;goto B41e13f;
case 0x41e140:c.instructions+=4;goto B41e140;
case 0x41e145:c.instructions+=3;goto B41e145;
case 0x41e14a:c.instructions+=2;goto B41e14a;
case 0x41e14b:c.instructions+=1;goto B41e14b;
case 0x41e150:goto L41e150;
case 0x41e156:c.instructions+=5;goto B41e156;
case 0x41e157:c.instructions+=4;goto B41e157;
case 0x41e15c:c.instructions+=3;goto B41e15c;
case 0x41e161:c.instructions+=2;goto B41e161;
case 0x41e162:c.instructions+=1;goto B41e162;
case 0x41e167:goto L41e167;
case 0x41e16d:c.instructions+=6;goto B41e16d;
case 0x41e170:c.instructions+=5;goto B41e170;
case 0x41e171:c.instructions+=4;goto B41e171;
case 0x41e176:c.instructions+=3;goto B41e176;
case 0x41e17b:c.instructions+=2;goto B41e17b;
case 0x41e17c:c.instructions+=1;goto B41e17c;
case 0x41e181:goto L41e181;
case 0x41e187:c.instructions+=5;goto B41e187;
case 0x41e188:c.instructions+=4;goto B41e188;
case 0x41e18d:c.instructions+=3;goto B41e18d;
case 0x41e192:c.instructions+=2;goto B41e192;
case 0x41e193:c.instructions+=1;goto B41e193;
case 0x41e198:goto L41e198;
case 0x41e19e:c.instructions+=5;goto B41e19e;
case 0x41e19f:c.instructions+=4;goto B41e19f;
case 0x41e1a4:c.instructions+=3;goto B41e1a4;
case 0x41e1a9:c.instructions+=2;goto B41e1a9;
case 0x41e1aa:c.instructions+=1;goto B41e1aa;
case 0x41e1af:goto L41e1af;
case 0x41e1b5:c.instructions+=5;goto B41e1b5;
case 0x41e1b6:c.instructions+=4;goto B41e1b6;
case 0x41e1bb:c.instructions+=3;goto B41e1bb;
case 0x41e1c0:c.instructions+=2;goto B41e1c0;
case 0x41e1c1:c.instructions+=1;goto B41e1c1;
case 0x41e1c6:goto L41e1c6;
case 0x41e1cc:c.instructions+=6;goto B41e1cc;
case 0x41e1cf:c.instructions+=5;goto B41e1cf;
case 0x41e1d0:c.instructions+=4;goto B41e1d0;
case 0x41e1d5:c.instructions+=3;goto B41e1d5;
case 0x41e1da:c.instructions+=2;goto B41e1da;
case 0x41e1db:c.instructions+=1;goto B41e1db;
case 0x41e1e0:goto L41e1e0;
case 0x41e1e6:c.instructions+=5;goto B41e1e6;
case 0x41e1e7:c.instructions+=4;goto B41e1e7;
case 0x41e1ec:c.instructions+=3;goto B41e1ec;
case 0x41e1f1:c.instructions+=2;goto B41e1f1;
case 0x41e1f2:c.instructions+=1;goto B41e1f2;
case 0x41e1f7:goto L41e1f7;
case 0x41e1fd:c.instructions+=5;goto B41e1fd;
case 0x41e1fe:c.instructions+=4;goto B41e1fe;
case 0x41e203:c.instructions+=3;goto B41e203;
case 0x41e208:c.instructions+=2;goto B41e208;
case 0x41e209:c.instructions+=1;goto B41e209;
case 0x41e20e:goto L41e20e;
case 0x41e214:c.instructions+=5;goto B41e214;
case 0x41e215:c.instructions+=4;goto B41e215;
case 0x41e21a:c.instructions+=3;goto B41e21a;
case 0x41e21f:c.instructions+=2;goto B41e21f;
case 0x41e220:c.instructions+=1;goto B41e220;
case 0x41e225:goto L41e225;
case 0x41e228:c.instructions+=2;goto B41e228;
case 0x41e22a:c.instructions+=1;goto B41e22a;
case 0x41e22f:goto L41e22f;
case 0x41e235:c.instructions+=13;goto B41e235;
case 0x41e238:c.instructions+=12;goto B41e238;
case 0x41e23b:c.instructions+=11;goto B41e23b;
case 0x41e23e:c.instructions+=10;goto B41e23e;
case 0x41e245:c.instructions+=9;goto B41e245;
case 0x41e24c:c.instructions+=8;goto B41e24c;
case 0x41e252:c.instructions+=7;goto B41e252;
case 0x41e255:c.instructions+=6;goto B41e255;
case 0x41e25b:c.instructions+=5;goto B41e25b;
case 0x41e25e:c.instructions+=4;goto B41e25e;
case 0x41e264:c.instructions+=3;goto B41e264;
case 0x41e26a:c.instructions+=2;goto B41e26a;
case 0x41e26c:c.instructions+=1;goto B41e26c;
case 0x41e26e:goto L41e26e;
case 0x41e274:c.instructions+=2;goto B41e274;
case 0x41e275:c.instructions+=1;goto B41e275;
case 0x41e27a:goto L41e27a;
case 0x41e27c:c.instructions+=1;goto B41e27c;
case 0x41e27e:goto L41e27e;
case 0x41e284:c.instructions+=6;goto B41e284;
case 0x41e287:c.instructions+=5;goto B41e287;
case 0x41e28a:c.instructions+=4;goto B41e28a;
case 0x41e28d:c.instructions+=3;goto B41e28d;
case 0x41e294:c.instructions+=2;goto B41e294;
case 0x41e29a:c.instructions+=1;goto B41e29a;
case 0x41e29f:goto L41e29f;
case 0x41e2a5:c.instructions+=4;goto B41e2a5;
case 0x41e2a6:c.instructions+=3;goto B41e2a6;
case 0x41e2a7:c.instructions+=2;goto B41e2a7;
case 0x41e2ad:c.instructions+=1;goto B41e2ad;
case 0x41e2b2:goto L41e2b2;
case 0x41e2bc:goto L41e2bc;
case 0x41e2bd:c.instructions+=1;goto B41e2bd;
case 0x41e2c0:goto L41e2c0;
case 0x41e2c1:c.instructions+=4;goto B41e2c1;
case 0x41e2c2:c.instructions+=3;goto B41e2c2;
case 0x41e2c4:c.instructions+=2;goto B41e2c4;
case 0x41e2cb:c.instructions+=1;goto B41e2cb;
case 0x41e2d1:goto L41e2d1;
case 0x41e2d7:c.instructions+=2;goto B41e2d7;
case 0x41e2d8:c.instructions+=1;goto B41e2d8;
case 0x41e2dd:goto L41e2dd;
case 0x41e2e3:c.instructions+=5;goto B41e2e3;
case 0x41e2e6:c.instructions+=4;goto B41e2e6;
case 0x41e2e7:c.instructions+=3;goto B41e2e7;
case 0x41e2ec:c.instructions+=2;goto B41e2ec;
case 0x41e2ed:c.instructions+=1;goto B41e2ed;
case 0x41e2f2:goto L41e2f2;
case 0x41e2f8:c.instructions+=2;goto B41e2f8;
case 0x41e2f9:c.instructions+=1;goto B41e2f9;
case 0x41e2fe:goto L41e2fe;
case 0x41e301:c.instructions+=2;goto B41e301;
case 0x41e303:c.instructions+=1;goto B41e303;
case 0x41e305:goto L41e305;
case 0x41e307:c.instructions+=1;goto B41e307;
case 0x41e30c:goto L41e30c;
case 0x41e312:c.instructions+=2;goto B41e312;
case 0x41e314:c.instructions+=1;goto B41e314;
case 0x41e316:goto L41e316;
case 0x41e320:c.instructions+=1;goto B41e320;
case 0x41e32a:goto L41e32a;
case 0x41e32b:c.instructions+=4;goto B41e32b;
case 0x41e32f:c.instructions+=3;goto B41e32f;
case 0x41e330:c.instructions+=2;goto B41e330;
case 0x41e332:c.instructions+=1;goto B41e332;
case 0x41e337:goto L41e337;
case 0x41e33d:c.instructions+=2;goto B41e33d;
case 0x41e33f:c.instructions+=1;goto B41e33f;
case 0x41e341:goto L41e341;
case 0x41e347:c.instructions+=2;goto B41e347;
case 0x41e349:c.instructions+=1;goto B41e349;
case 0x41e34b:goto L41e34b;
case 0x41e353:c.instructions+=1;goto B41e353;
case 0x41e355:goto L41e355;
case 0x41e35b:c.instructions+=1;goto B41e35b;
case 0x41e35f:goto L41e35f;
case 0x41e365:c.instructions+=6;goto B41e365;
case 0x41e369:c.instructions+=5;goto B41e369;
case 0x41e36a:c.instructions+=4;goto B41e36a;
case 0x41e36b:c.instructions+=3;goto B41e36b;
case 0x41e36c:c.instructions+=2;goto B41e36c;
case 0x41e372:c.instructions+=1;goto B41e372;
case 0x41e377:goto L41e377;
case 0x41e37e:goto L41e37e;
case 0x41e384:c.instructions+=2;goto B41e384;
case 0x41e386:c.instructions+=1;goto B41e386;
case 0x41e388:goto L41e388;
case 0x41e38d:c.instructions+=3;goto B41e38d;
case 0x41e38f:c.instructions+=2;goto B41e38f;
case 0x41e399:c.instructions+=1;goto B41e399;
case 0x41e39e:goto L41e39e;
case 0x41e3a4:c.instructions+=2;goto B41e3a4;
case 0x41e3a8:c.instructions+=1;goto B41e3a8;
case 0x41e3ae:goto L41e3ae;
case 0x41e3b1:c.instructions+=6;goto B41e3b1;
case 0x41e3b4:c.instructions+=5;goto B41e3b4;
case 0x41e3ba:c.instructions+=4;goto B41e3ba;
case 0x41e3bb:c.instructions+=3;goto B41e3bb;
case 0x41e3c0:c.instructions+=2;goto B41e3c0;
case 0x41e3c2:c.instructions+=1;goto B41e3c2;
case 0x41e3c4:goto L41e3c4;
case 0x41e3ca:c.instructions+=3;goto B41e3ca;
case 0x41e3d0:c.instructions+=2;goto B41e3d0;
case 0x41e3d2:c.instructions+=1;goto B41e3d2;
case 0x41e3d4:goto L41e3d4;
case 0x41e3d7:c.instructions+=1;goto B41e3d7;
case 0x41e3d9:goto L41e3d9;
case 0x41e3dc:c.instructions+=1;goto B41e3dc;
case 0x41e3de:goto L41e3de;
case 0x41e3e8:c.instructions+=2;goto B41e3e8;
case 0x41e3ef:c.instructions+=1;goto B41e3ef;
case 0x41e3f1:goto L41e3f1;
case 0x41e3f4:c.instructions+=1;goto B41e3f4;
case 0x41e3f6:goto L41e3f6;
case 0x41e3fb:goto L41e3fb;
case 0x41e3fd:c.instructions+=1;goto B41e3fd;
case 0x41e3ff:goto L41e3ff;
case 0x41e405:c.instructions+=1;goto B41e405;
case 0x41e408:goto L41e408;
case 0x41e40e:c.instructions+=1;goto B41e40e;
case 0x41e410:goto L41e410;
case 0x41e413:c.instructions+=4;goto B41e413;
case 0x41e419:c.instructions+=3;goto B41e419;
case 0x41e41a:c.instructions+=2;goto B41e41a;
case 0x41e41c:c.instructions+=1;goto B41e41c;
case 0x41e421:goto L41e421;
case 0x41e425:c.instructions+=4;goto B41e425;
case 0x41e426:c.instructions+=3;goto B41e426;
case 0x41e427:c.instructions+=2;goto B41e427;
case 0x41e429:c.instructions+=1;goto B41e429;
case 0x41e42e:goto L41e42e;
case 0x41e42f:c.instructions+=3;goto B41e42f;
case 0x41e430:c.instructions+=2;goto B41e430;
case 0x41e431:c.instructions+=1;goto B41e431;
case 0x41e434:goto L41e434;
case 0x41e439:c.instructions+=1;goto B41e439;
case 0x41e43e:goto L41e43e;
case 0x41e440:c.instructions+=1;goto B41e440;
case 0x41e442:goto L41e442;
case 0x41e448:c.instructions+=4;goto B41e448;
case 0x41e44e:c.instructions+=3;goto B41e44e;
case 0x41e450:c.instructions+=2;goto B41e450;
case 0x41e453:c.instructions+=1;goto B41e453;
case 0x41e455:goto L41e455;
case 0x41e457:c.instructions+=1;goto B41e457;
case 0x41e459:goto L41e459;
case 0x41e45b:goto L41e45b;
case 0x41e45e:goto L41e45e;
case 0x41e45f:goto L41e45f;
case 0x41e463:c.instructions+=3;goto B41e463;
case 0x41e464:c.instructions+=2;goto B41e464;
case 0x41e466:c.instructions+=1;goto B41e466;
case 0x41e46b:goto L41e46b;
case 0x41e46c:goto L41e46c;
case 0x41e46d:c.instructions+=2;goto B41e46d;
case 0x41e46e:c.instructions+=1;goto B41e46e;
case 0x41e480:goto L41e480;
case 0x41e482:c.instructions+=13;goto B41e482;
case 0x41e487:c.instructions+=12;goto B41e487;
case 0x41e48d:c.instructions+=11;goto B41e48d;
case 0x41e48e:c.instructions+=10;goto B41e48e;
case 0x41e495:c.instructions+=9;goto B41e495;
case 0x41e496:c.instructions+=8;goto B41e496;
case 0x41e497:c.instructions+=7;goto B41e497;
case 0x41e499:c.instructions+=6;goto B41e499;
case 0x41e49d:c.instructions+=5;goto B41e49d;
case 0x41e4a3:c.instructions+=4;goto B41e4a3;
case 0x41e4a6:c.instructions+=3;goto B41e4a6;
case 0x41e4a8:c.instructions+=2;goto B41e4a8;
case 0x41e4b0:c.instructions+=1;goto B41e4b0;
case 0x41e4b2:goto L41e4b2;
case 0x41e4b4:c.instructions+=2;goto B41e4b4;
case 0x41e4b6:c.instructions+=1;goto B41e4b6;
case 0x41e4b8:goto L41e4b8;
case 0x41e4be:c.instructions+=2;goto B41e4be;
case 0x41e4c0:c.instructions+=1;goto B41e4c0;
case 0x41e4c2:goto L41e4c2;
case 0x41e4c4:c.instructions+=2;goto B41e4c4;
case 0x41e4c6:c.instructions+=1;goto B41e4c6;
case 0x41e4c8:goto L41e4c8;
case 0x41e4ca:c.instructions+=2;goto B41e4ca;
case 0x41e4d2:c.instructions+=1;goto B41e4d2;
case 0x41e4d7:goto L41e4d7;
case 0x41e4db:c.instructions+=4;goto B41e4db;
case 0x41e4dc:c.instructions+=3;goto B41e4dc;
case 0x41e4e3:c.instructions+=2;goto B41e4e3;
case 0x41e4e6:c.instructions+=1;goto B41e4e6;
case 0x41e4f0:goto L41e4f0;
case 0x41e4f5:c.instructions+=2;goto B41e4f5;
case 0x41e4fb:c.instructions+=1;goto B41e4fb;
case 0x41e500:goto L41e500;
case 0x41e505:c.instructions+=2;goto B41e505;
case 0x41e50b:c.instructions+=1;goto B41e50b;
case 0x41e510:goto L41e510;
case 0x41e516:c.instructions+=2;goto B41e516;
case 0x41e518:c.instructions+=1;goto B41e518;
case 0x41e51a:goto L41e51a;
case 0x41e51f:c.instructions+=1;goto B41e51f;
case 0x41e521:goto L41e521;
case 0x41e526:c.instructions+=3;goto B41e526;
case 0x41e528:c.instructions+=2;goto B41e528;
case 0x41e52b:c.instructions+=1;goto B41e52b;
case 0x41e52c:goto L41e52c;
case 0x41e52e:c.instructions+=3;goto B41e52e;
case 0x41e530:c.instructions+=2;goto B41e530;
case 0x41e533:c.instructions+=1;goto B41e533;
case 0x41e540:goto L41e540;
case 0x41e541:c.instructions+=25;goto B41e541;
case 0x41e543:c.instructions+=24;goto B41e543;
case 0x41e546:c.instructions+=23;goto B41e546;
case 0x41e54c:c.instructions+=22;goto B41e54c;
case 0x41e54d:c.instructions+=21;goto B41e54d;
case 0x41e54e:c.instructions+=20;goto B41e54e;
case 0x41e550:c.instructions+=19;goto B41e550;
case 0x41e553:c.instructions+=18;goto B41e553;
case 0x41e559:c.instructions+=17;goto B41e559;
case 0x41e55c:c.instructions+=16;goto B41e55c;
case 0x41e55f:c.instructions+=15;goto B41e55f;
case 0x41e565:c.instructions+=14;goto B41e565;
case 0x41e567:c.instructions+=13;goto B41e567;
case 0x41e56b:c.instructions+=12;goto B41e56b;
case 0x41e56c:c.instructions+=11;goto B41e56c;
case 0x41e56e:c.instructions+=10;goto B41e56e;
case 0x41e572:c.instructions+=9;goto B41e572;
case 0x41e576:c.instructions+=8;goto B41e576;
case 0x41e579:c.instructions+=7;goto B41e579;
case 0x41e580:c.instructions+=6;goto B41e580;
case 0x41e587:c.instructions+=5;goto B41e587;
case 0x41e58e:c.instructions+=4;goto B41e58e;
case 0x41e595:c.instructions+=3;goto B41e595;
case 0x41e59c:c.instructions+=2;goto B41e59c;
case 0x41e5a0:c.instructions+=1;goto B41e5a0;
case 0x41e5a2:goto L41e5a2;
case 0x41e5a8:c.instructions+=3;goto B41e5a8;
case 0x41e5ae:c.instructions+=2;goto B41e5ae;
case 0x41e5b2:c.instructions+=1;goto B41e5b2;
case 0x41e5b6:goto L41e5b6;
case 0x41e5b9:c.instructions+=2;goto B41e5b9;
case 0x41e5bb:c.instructions+=1;goto B41e5bb;
case 0x41e5c0:goto L41e5c0;
case 0x41e5c2:c.instructions+=1;goto B41e5c2;
case 0x41e5c4:goto L41e5c4;
case 0x41e5c7:c.instructions+=9;goto B41e5c7;
case 0x41e5cb:c.instructions+=8;goto B41e5cb;
case 0x41e5cd:c.instructions+=7;goto B41e5cd;
case 0x41e5d0:c.instructions+=6;goto B41e5d0;
case 0x41e5d4:c.instructions+=5;goto B41e5d4;
case 0x41e5d8:c.instructions+=4;goto B41e5d8;
case 0x41e5dc:c.instructions+=3;goto B41e5dc;
case 0x41e5e0:c.instructions+=2;goto B41e5e0;
case 0x41e5e6:c.instructions+=1;goto B41e5e6;
case 0x41e5e8:goto L41e5e8;
case 0x41e5eb:c.instructions+=4;goto B41e5eb;
case 0x41e5ee:c.instructions+=3;goto B41e5ee;
case 0x41e5f2:c.instructions+=2;goto B41e5f2;
case 0x41e5f5:c.instructions+=1;goto B41e5f5;
case 0x41e5f9:goto L41e5f9;
case 0x41e5fc:c.instructions+=13;goto B41e5fc;
case 0x41e5fd:c.instructions+=12;goto B41e5fd;
case 0x41e5ff:c.instructions+=11;goto B41e5ff;
case 0x41e604:c.instructions+=10;goto B41e604;
case 0x41e608:c.instructions+=9;goto B41e608;
case 0x41e609:c.instructions+=8;goto B41e609;
case 0x41e60d:c.instructions+=7;goto B41e60d;
case 0x41e60e:c.instructions+=6;goto B41e60e;
case 0x41e611:c.instructions+=5;goto B41e611;
case 0x41e612:c.instructions+=4;goto B41e612;
case 0x41e616:c.instructions+=3;goto B41e616;
case 0x41e61a:c.instructions+=2;goto B41e61a;
case 0x41e61b:c.instructions+=1;goto B41e61b;
case 0x41e620:goto L41e620;
case 0x41e623:c.instructions+=2;goto B41e623;
case 0x41e625:c.instructions+=1;goto B41e625;
case 0x41e627:goto L41e627;
case 0x41e62b:c.instructions+=18;goto B41e62b;
case 0x41e62e:c.instructions+=17;goto B41e62e;
case 0x41e62f:c.instructions+=16;goto B41e62f;
case 0x41e631:c.instructions+=15;goto B41e631;
case 0x41e633:c.instructions+=14;goto B41e633;
case 0x41e637:c.instructions+=13;goto B41e637;
case 0x41e63b:c.instructions+=12;goto B41e63b;
case 0x41e640:c.instructions+=11;goto B41e640;
case 0x41e644:c.instructions+=10;goto B41e644;
case 0x41e646:c.instructions+=9;goto B41e646;
case 0x41e647:c.instructions+=8;goto B41e647;
case 0x41e64b:c.instructions+=7;goto B41e64b;
case 0x41e64f:c.instructions+=6;goto B41e64f;
case 0x41e650:c.instructions+=5;goto B41e650;
case 0x41e653:c.instructions+=4;goto B41e653;
case 0x41e654:c.instructions+=3;goto B41e654;
case 0x41e658:c.instructions+=2;goto B41e658;
case 0x41e659:c.instructions+=1;goto B41e659;
case 0x41e65e:goto L41e65e;
case 0x41e661:c.instructions+=2;goto B41e661;
case 0x41e663:c.instructions+=1;goto B41e663;
case 0x41e669:goto L41e669;
case 0x41e66d:c.instructions+=7;goto B41e66d;
case 0x41e670:c.instructions+=6;goto B41e670;
case 0x41e677:c.instructions+=5;goto B41e677;
case 0x41e679:c.instructions+=4;goto B41e679;
case 0x41e67c:c.instructions+=3;goto B41e67c;
case 0x41e67f:c.instructions+=2;goto B41e67f;
case 0x41e682:c.instructions+=1;goto B41e682;
case 0x41e687:goto L41e687;
case 0x41e68a:c.instructions+=3;goto B41e68a;
case 0x41e68d:c.instructions+=2;goto B41e68d;
case 0x41e68e:c.instructions+=1;goto B41e68e;
case 0x41e690:goto L41e690;
case 0x41e696:c.instructions+=1;goto B41e696;
case 0x41e69b:goto L41e69b;
case 0x41e6a3:c.instructions+=3;goto B41e6a3;
case 0x41e6a5:c.instructions+=2;goto B41e6a5;
case 0x41e6a7:c.instructions+=1;goto B41e6a7;
case 0x41e6a9:goto L41e6a9;
case 0x41e6b0:goto L41e6b0;
case 0x41e6b3:c.instructions+=2;goto B41e6b3;
case 0x41e6b5:c.instructions+=1;goto B41e6b5;
case 0x41e6b8:goto L41e6b8;
case 0x41e6bb:c.instructions+=1;goto B41e6bb;
case 0x41e6bd:goto L41e6bd;
case 0x41e6be:c.instructions+=3;goto B41e6be;
case 0x41e6c1:c.instructions+=2;goto B41e6c1;
case 0x41e6c4:c.instructions+=1;goto B41e6c4;
case 0x41e6c6:goto L41e6c6;
case 0x41e6c8:goto L41e6c8;
case 0x41e6ca:goto L41e6ca;
case 0x41e6cc:c.instructions+=16;goto B41e6cc;
case 0x41e6d1:c.instructions+=15;goto B41e6d1;
case 0x41e6d3:c.instructions+=14;goto B41e6d3;
case 0x41e6d6:c.instructions+=13;goto B41e6d6;
case 0x41e6db:c.instructions+=12;goto B41e6db;
case 0x41e6de:c.instructions+=11;goto B41e6de;
case 0x41e6e0:c.instructions+=10;goto B41e6e0;
case 0x41e6e2:c.instructions+=9;goto B41e6e2;
case 0x41e6e6:c.instructions+=8;goto B41e6e6;
case 0x41e6e9:c.instructions+=7;goto B41e6e9;
case 0x41e6ee:c.instructions+=6;goto B41e6ee;
case 0x41e6f0:c.instructions+=5;goto B41e6f0;
case 0x41e6f3:c.instructions+=4;goto B41e6f3;
case 0x41e6f4:c.instructions+=3;goto B41e6f4;
case 0x41e6f6:c.instructions+=2;goto B41e6f6;
case 0x41e6fa:c.instructions+=1;goto B41e6fa;
case 0x41e6fc:goto L41e6fc;
case 0x41e6fd:c.instructions+=5;goto B41e6fd;
case 0x41e6fe:c.instructions+=4;goto B41e6fe;
case 0x41e6ff:c.instructions+=3;goto B41e6ff;
case 0x41e701:c.instructions+=2;goto B41e701;
case 0x41e702:c.instructions+=1;goto B41e702;
case 0x41e710:goto L41e710;
case 0x41e712:c.instructions+=13;goto B41e712;
case 0x41e717:c.instructions+=12;goto B41e717;
case 0x41e71d:c.instructions+=11;goto B41e71d;
case 0x41e71e:c.instructions+=10;goto B41e71e;
case 0x41e725:c.instructions+=9;goto B41e725;
case 0x41e726:c.instructions+=8;goto B41e726;
case 0x41e727:c.instructions+=7;goto B41e727;
case 0x41e729:c.instructions+=6;goto B41e729;
case 0x41e72d:c.instructions+=5;goto B41e72d;
case 0x41e733:c.instructions+=4;goto B41e733;
case 0x41e739:c.instructions+=3;goto B41e739;
case 0x41e73b:c.instructions+=2;goto B41e73b;
case 0x41e743:c.instructions+=1;goto B41e743;
case 0x41e745:goto L41e745;
case 0x41e74b:goto L41e74b;
case 0x41e74e:c.instructions+=2;goto B41e74e;
case 0x41e750:c.instructions+=1;goto B41e750;
case 0x41e752:goto L41e752;
case 0x41e754:c.instructions+=2;goto B41e754;
case 0x41e756:c.instructions+=1;goto B41e756;
case 0x41e758:goto L41e758;
case 0x41e75a:c.instructions+=2;goto B41e75a;
case 0x41e762:c.instructions+=1;goto B41e762;
case 0x41e767:goto L41e767;
case 0x41e76b:c.instructions+=4;goto B41e76b;
case 0x41e76c:c.instructions+=3;goto B41e76c;
case 0x41e773:c.instructions+=2;goto B41e773;
case 0x41e776:c.instructions+=1;goto B41e776;
case 0x41e780:goto L41e780;
case 0x41e787:c.instructions+=1;goto B41e787;
case 0x41e790:goto L41e790;
case 0x41e796:c.instructions+=2;goto B41e796;
case 0x41e798:c.instructions+=1;goto B41e798;
case 0x41e7a0:goto L41e7a0;
case 0x41e7a6:c.instructions+=4;goto B41e7a6;
case 0x41e7ac:c.instructions+=3;goto B41e7ac;
case 0x41e7ae:c.instructions+=2;goto B41e7ae;
case 0x41e7b1:c.instructions+=1;goto B41e7b1;
case 0x41e7b3:goto L41e7b3;
case 0x41e7b5:c.instructions+=1;goto B41e7b5;
case 0x41e7bb:goto L41e7bb;
case 0x41e7c0:goto L41e7c0;
case 0x41e7c2:c.instructions+=10;goto B41e7c2;
case 0x41e7c7:c.instructions+=9;goto B41e7c7;
case 0x41e7cd:c.instructions+=8;goto B41e7cd;
case 0x41e7ce:c.instructions+=7;goto B41e7ce;
case 0x41e7d5:c.instructions+=6;goto B41e7d5;
case 0x41e7d6:c.instructions+=5;goto B41e7d6;
case 0x41e7d7:c.instructions+=4;goto B41e7d7;
case 0x41e7d9:c.instructions+=3;goto B41e7d9;
case 0x41e7dd:c.instructions+=2;goto B41e7dd;
case 0x41e7e5:c.instructions+=1;goto B41e7e5;
case 0x41e7ea:goto L41e7ea;
case 0x41e7ef:c.instructions+=6;goto B41e7ef;
case 0x41e7f1:c.instructions+=5;goto B41e7f1;
case 0x41e7f6:c.instructions+=4;goto B41e7f6;
case 0x41e7fc:c.instructions+=3;goto B41e7fc;
case 0x41e7fd:c.instructions+=2;goto B41e7fd;
case 0x41e802:c.instructions+=1;goto B41e802;
case 0x41e807:goto L41e807;
case 0x41e80d:c.instructions+=2;goto B41e80d;
case 0x41e812:c.instructions+=1;goto B41e812;
case 0x41e817:goto L41e817;
case 0x41e81d:c.instructions+=2;goto B41e81d;
case 0x41e825:c.instructions+=1;goto B41e825;
case 0x41e82a:goto L41e82a;
case 0x41e82e:c.instructions+=4;goto B41e82e;
case 0x41e82f:c.instructions+=3;goto B41e82f;
case 0x41e836:c.instructions+=2;goto B41e836;
case 0x41e839:c.instructions+=1;goto B41e839;
case 0x41e840:goto L41e840;
case 0x41e841:c.instructions+=2;goto B41e841;
case 0x41e843:c.instructions+=1;goto B41e843;
case 0x41e848:goto L41e848;
case 0x41e84d:c.instructions+=1;goto B41e84d;
case 0x41e84f:goto L41e84f;
case 0x41e850:c.instructions+=1;goto B41e850;
case 0x41e855:goto L41e855;
case 0x41e858:goto L41e858;
case 0x41e85a:c.instructions+=2;goto B41e85a;
case 0x41e85b:c.instructions+=1;goto B41e85b;
case 0x41e860:goto L41e860;
case 0x41e861:c.instructions+=10;goto B41e861;
case 0x41e863:c.instructions+=9;goto B41e863;
case 0x41e866:c.instructions+=8;goto B41e866;
case 0x41e869:c.instructions+=7;goto B41e869;
case 0x41e86a:c.instructions+=6;goto B41e86a;
case 0x41e86b:c.instructions+=5;goto B41e86b;
case 0x41e86d:c.instructions+=4;goto B41e86d;
case 0x41e870:c.instructions+=3;goto B41e870;
case 0x41e871:c.instructions+=2;goto B41e871;
case 0x41e872:c.instructions+=1;goto B41e872;
case 0x41e877:goto L41e877;
case 0x41e87a:c.instructions+=7;goto B41e87a;
case 0x41e87c:c.instructions+=6;goto B41e87c;
case 0x41e87f:c.instructions+=5;goto B41e87f;
case 0x41e883:c.instructions+=4;goto B41e883;
case 0x41e885:c.instructions+=3;goto B41e885;
case 0x41e887:c.instructions+=2;goto B41e887;
case 0x41e88b:c.instructions+=1;goto B41e88b;
case 0x41e88d:goto L41e88d;
case 0x41e894:c.instructions+=1;goto B41e894;
case 0x41e896:goto L41e896;
case 0x41e89d:c.instructions+=10;goto B41e89d;
case 0x41e8a2:c.instructions+=9;goto B41e8a2;
case 0x41e8a5:c.instructions+=8;goto B41e8a5;
case 0x41e8a6:c.instructions+=7;goto B41e8a6;
case 0x41e8a7:c.instructions+=6;goto B41e8a7;
case 0x41e8aa:c.instructions+=5;goto B41e8aa;
case 0x41e8ac:c.instructions+=4;goto B41e8ac;
case 0x41e8ae:c.instructions+=3;goto B41e8ae;
case 0x41e8af:c.instructions+=2;goto B41e8af;
case 0x41e8b2:c.instructions+=1;goto B41e8b2;
case 0x41e8b7:goto L41e8b7;
case 0x41e8b9:c.instructions+=1;goto B41e8b9;
case 0x41e8bf:goto L41e8bf;
case 0x41e8c3:c.instructions+=3;goto B41e8c3;
case 0x41e8c7:c.instructions+=2;goto B41e8c7;
case 0x41e8cb:c.instructions+=1;goto B41e8cb;
case 0x41e8d0:goto L41e8d0;
case 0x41e8d4:c.instructions+=5;goto B41e8d4;
case 0x41e8d6:c.instructions+=4;goto B41e8d6;
case 0x41e8d8:c.instructions+=3;goto B41e8d8;
case 0x41e8d9:c.instructions+=2;goto B41e8d9;
case 0x41e8db:c.instructions+=1;goto B41e8db;
case 0x41e8de:goto L41e8de;
case 0x41e8e2:c.instructions+=4;goto B41e8e2;
case 0x41e8e4:c.instructions+=3;goto B41e8e4;
case 0x41e8e5:c.instructions+=2;goto B41e8e5;
case 0x41e8e7:c.instructions+=1;goto B41e8e7;
case 0x41e8ea:goto L41e8ea;
case 0x41e8ee:c.instructions+=4;goto B41e8ee;
case 0x41e8f0:c.instructions+=3;goto B41e8f0;
case 0x41e8f2:c.instructions+=2;goto B41e8f2;
case 0x41e8f5:c.instructions+=1;goto B41e8f5;
case 0x41e8f7:goto L41e8f7;
case 0x41e8f9:c.instructions+=1;goto B41e8f9;
case 0x41e8fd:goto L41e8fd;
case 0x41e901:c.instructions+=4;goto B41e901;
case 0x41e903:c.instructions+=3;goto B41e903;
case 0x41e905:c.instructions+=2;goto B41e905;
case 0x41e908:c.instructions+=1;goto B41e908;
case 0x41e90a:goto L41e90a;
case 0x41e90e:c.instructions+=3;goto B41e90e;
case 0x41e910:c.instructions+=2;goto B41e910;
case 0x41e914:c.instructions+=1;goto B41e914;
case 0x41e916:goto L41e916;
case 0x41e91a:goto L41e91a;
case 0x41e91e:c.instructions+=9;goto B41e91e;
case 0x41e921:c.instructions+=8;goto B41e921;
case 0x41e922:c.instructions+=7;goto B41e922;
case 0x41e923:c.instructions+=6;goto B41e923;
case 0x41e924:c.instructions+=5;goto B41e924;
case 0x41e928:c.instructions+=4;goto B41e928;
case 0x41e92b:c.instructions+=3;goto B41e92b;
case 0x41e92c:c.instructions+=2;goto B41e92c;
case 0x41e92e:c.instructions+=1;goto B41e92e;
case 0x41e933:goto L41e933;
case 0x41e937:c.instructions+=2;goto B41e937;
case 0x41e93b:c.instructions+=1;goto B41e93b;
case 0x41e93d:goto L41e93d;
case 0x41e941:c.instructions+=2;goto B41e941;
case 0x41e945:c.instructions+=1;goto B41e945;
case 0x41e947:goto L41e947;
case 0x41e94a:c.instructions+=2;goto B41e94a;
case 0x41e94c:c.instructions+=1;goto B41e94c;
case 0x41e94e:goto L41e94e;
case 0x41e955:c.instructions+=4;goto B41e955;
case 0x41e958:c.instructions+=3;goto B41e958;
case 0x41e95b:c.instructions+=2;goto B41e95b;
case 0x41e962:c.instructions+=1;goto B41e962;
case 0x41e964:goto L41e964;
case 0x41e967:c.instructions+=4;goto B41e967;
case 0x41e969:c.instructions+=3;goto B41e969;
case 0x41e96c:c.instructions+=2;goto B41e96c;
case 0x41e973:c.instructions+=1;goto B41e973;
case 0x41e975:goto L41e975;
case 0x41e977:goto L41e977;
case 0x41e979:c.instructions+=2;goto B41e979;
case 0x41e97c:c.instructions+=1;goto B41e97c;
case 0x41e97e:goto L41e97e;
case 0x41e982:c.instructions+=6;goto B41e982;
case 0x41e985:c.instructions+=5;goto B41e985;
case 0x41e986:c.instructions+=4;goto B41e986;
case 0x41e988:c.instructions+=3;goto B41e988;
case 0x41e989:c.instructions+=2;goto B41e989;
case 0x41e98f:c.instructions+=1;goto B41e98f;
case 0x41e994:goto L41e994;
case 0x41e997:c.instructions+=5;goto B41e997;
case 0x41e998:c.instructions+=4;goto B41e998;
case 0x41e999:c.instructions+=3;goto B41e999;
case 0x41e99d:c.instructions+=2;goto B41e99d;
case 0x41e99e:c.instructions+=1;goto B41e99e;
case 0x41e9a3:goto L41e9a3;
case 0x41e9a7:goto L41e9a7;
case 0x41e9a9:c.instructions+=2;goto B41e9a9;
case 0x41e9ab:c.instructions+=1;goto B41e9ab;
case 0x41e9ae:goto L41e9ae;
case 0x41e9b2:c.instructions+=5;goto B41e9b2;
case 0x41e9b5:c.instructions+=4;goto B41e9b5;
case 0x41e9b8:c.instructions+=3;goto B41e9b8;
case 0x41e9ba:c.instructions+=2;goto B41e9ba;
case 0x41e9bd:c.instructions+=1;goto B41e9bd;
case 0x41e9bf:goto L41e9bf;
case 0x41e9c3:c.instructions+=5;goto B41e9c3;
case 0x41e9c7:c.instructions+=4;goto B41e9c7;
case 0x41e9ca:c.instructions+=3;goto B41e9ca;
case 0x41e9cc:c.instructions+=2;goto B41e9cc;
case 0x41e9cf:c.instructions+=1;goto B41e9cf;
case 0x41e9d1:goto L41e9d1;
case 0x41e9d4:c.instructions+=2;goto B41e9d4;
case 0x41e9d8:c.instructions+=1;goto B41e9d8;
case 0x41e9da:goto L41e9da;
case 0x41e9de:c.instructions+=5;goto B41e9de;
case 0x41e9e2:c.instructions+=4;goto B41e9e2;
case 0x41e9e5:c.instructions+=3;goto B41e9e5;
case 0x41e9e7:c.instructions+=2;goto B41e9e7;
case 0x41e9ea:c.instructions+=1;goto B41e9ea;
case 0x41e9ec:goto L41e9ec;
case 0x41e9ef:c.instructions+=1;goto B41e9ef;
case 0x41e9f3:goto L41e9f3;
case 0x41e9f7:c.instructions+=8;goto B41e9f7;
case 0x41e9fb:c.instructions+=7;goto B41e9fb;
case 0x41e9fe:c.instructions+=6;goto B41e9fe;
case 0x41e9ff:c.instructions+=5;goto B41e9ff;
case 0x41ea02:c.instructions+=4;goto B41ea02;
case 0x41ea04:c.instructions+=3;goto B41ea04;
case 0x41ea08:c.instructions+=2;goto B41ea08;
case 0x41ea0c:c.instructions+=1;goto B41ea0c;
case 0x41ea0e:goto L41ea0e;
case 0x41ea11:c.instructions+=2;goto B41ea11;
case 0x41ea14:c.instructions+=1;goto B41ea14;
case 0x41ea1a:goto L41ea1a;
case 0x41ea1b:c.instructions+=5;goto B41ea1b;
case 0x41ea1c:c.instructions+=4;goto B41ea1c;
case 0x41ea1d:c.instructions+=3;goto B41ea1d;
case 0x41ea1f:c.instructions+=2;goto B41ea1f;
case 0x41ea20:c.instructions+=1;goto B41ea20;
case 0x41ea30:goto L41ea30;
case 0x41ea34:c.instructions+=4;goto B41ea34;
case 0x41ea3a:c.instructions+=3;goto B41ea3a;
case 0x41ea3e:c.instructions+=2;goto B41ea3e;
case 0x41ea40:c.instructions+=1;goto B41ea40;
case 0x41ea42:goto L41ea42;
case 0x41ea43:c.instructions+=2;goto B41ea43;
case 0x41ea49:c.instructions+=1;goto B41ea49;
case 0x41ea4e:goto L41ea4e;
case 0x41ea60:goto L41ea60;
case 0x41ea61:c.instructions+=8;goto B41ea61;
case 0x41ea62:c.instructions+=7;goto B41ea62;
case 0x41ea63:c.instructions+=6;goto B41ea63;
case 0x41ea64:c.instructions+=5;goto B41ea64;
case 0x41ea65:c.instructions+=4;goto B41ea65;
case 0x41ea69:c.instructions+=3;goto B41ea69;
case 0x41ea6b:c.instructions+=2;goto B41ea6b;
case 0x41ea6d:c.instructions+=1;goto B41ea6d;
case 0x41ea72:goto L41ea72;
case 0x41ea78:c.instructions+=15;goto B41ea78;
case 0x41ea7e:c.instructions+=14;goto B41ea7e;
case 0x41ea84:c.instructions+=13;goto B41ea84;
case 0x41ea8a:c.instructions+=12;goto B41ea8a;
case 0x41ea90:c.instructions+=11;goto B41ea90;
case 0x41ea96:c.instructions+=10;goto B41ea96;
case 0x41ea9c:c.instructions+=9;goto B41ea9c;
case 0x41eaa2:c.instructions+=8;goto B41eaa2;
case 0x41eaa8:c.instructions+=7;goto B41eaa8;
case 0x41eaae:c.instructions+=6;goto B41eaae;
case 0x41eab4:c.instructions+=5;goto B41eab4;
case 0x41eaba:c.instructions+=4;goto B41eaba;
case 0x41eac0:c.instructions+=3;goto B41eac0;
case 0x41eac2:c.instructions+=2;goto B41eac2;
case 0x41eac4:c.instructions+=1;goto B41eac4;
case 0x41eac6:goto L41eac6;
case 0x41eac8:c.instructions+=4;goto B41eac8;
case 0x41eaca:c.instructions+=3;goto B41eaca;
case 0x41ead0:c.instructions+=2;goto B41ead0;
case 0x41ead4:c.instructions+=1;goto B41ead4;
case 0x41ead6:goto L41ead6;
case 0x41eada:c.instructions+=1;goto B41eada;
case 0x41eae0:goto L41eae0;
case 0x41eae2:c.instructions+=3;goto B41eae2;
case 0x41eae3:c.instructions+=2;goto B41eae3;
case 0x41eae5:c.instructions+=1;goto B41eae5;
case 0x41eaea:goto L41eaea;
case 0x41eaf0:c.instructions+=4;goto B41eaf0;
case 0x41eaf1:c.instructions+=3;goto B41eaf1;
case 0x41eaf7:c.instructions+=2;goto B41eaf7;
case 0x41eaf9:c.instructions+=1;goto B41eaf9;
case 0x41eafb:goto L41eafb;
case 0x41eb01:c.instructions+=13;goto B41eb01;
case 0x41eb07:c.instructions+=12;goto B41eb07;
case 0x41eb0d:c.instructions+=11;goto B41eb0d;
case 0x41eb13:c.instructions+=10;goto B41eb13;
case 0x41eb19:c.instructions+=9;goto B41eb19;
case 0x41eb1f:c.instructions+=8;goto B41eb1f;
case 0x41eb25:c.instructions+=7;goto B41eb25;
case 0x41eb2b:c.instructions+=6;goto B41eb2b;
case 0x41eb31:c.instructions+=5;goto B41eb31;
case 0x41eb37:c.instructions+=4;goto B41eb37;
case 0x41eb3a:c.instructions+=3;goto B41eb3a;
case 0x41eb3c:c.instructions+=2;goto B41eb3c;
case 0x41eb44:c.instructions+=1;goto B41eb44;
case 0x41eb4a:goto L41eb4a;
case 0x41eb4d:c.instructions+=1;goto B41eb4d;
case 0x41eb51:goto L41eb51;
case 0x41eb55:c.instructions+=5;goto B41eb55;
case 0x41eb57:c.instructions+=4;goto B41eb57;
case 0x41eb59:c.instructions+=3;goto B41eb59;
case 0x41eb5b:c.instructions+=2;goto B41eb5b;
case 0x41eb5d:c.instructions+=1;goto B41eb5d;
case 0x41eb60:goto L41eb60;
case 0x41eb63:c.instructions+=16;goto B41eb63;
case 0x41eb66:c.instructions+=15;goto B41eb66;
case 0x41eb67:c.instructions+=14;goto B41eb67;
case 0x41eb6a:c.instructions+=13;goto B41eb6a;
case 0x41eb6b:c.instructions+=12;goto B41eb6b;
case 0x41eb6c:c.instructions+=11;goto B41eb6c;
case 0x41eb6d:c.instructions+=10;goto B41eb6d;
case 0x41eb71:c.instructions+=9;goto B41eb71;
case 0x41eb74:c.instructions+=8;goto B41eb74;
case 0x41eb75:c.instructions+=7;goto B41eb75;
case 0x41eb79:c.instructions+=6;goto B41eb79;
case 0x41eb7c:c.instructions+=5;goto B41eb7c;
case 0x41eb7d:c.instructions+=4;goto B41eb7d;
case 0x41eb7e:c.instructions+=3;goto B41eb7e;
case 0x41eb7f:c.instructions+=2;goto B41eb7f;
case 0x41eb81:c.instructions+=1;goto B41eb81;
case 0x41eb86:goto L41eb86;
case 0x41eb89:c.instructions+=46;goto B41eb89;
case 0x41eb8c:c.instructions+=45;goto B41eb8c;
case 0x41eb90:c.instructions+=44;goto B41eb90;
case 0x41eb93:c.instructions+=43;goto B41eb93;
case 0x41eb96:c.instructions+=42;goto B41eb96;
case 0x41eb98:c.instructions+=41;goto B41eb98;
case 0x41eb9b:c.instructions+=40;goto B41eb9b;
case 0x41eb9d:c.instructions+=39;goto B41eb9d;
case 0x41eba0:c.instructions+=38;goto B41eba0;
case 0x41eba3:c.instructions+=37;goto B41eba3;
case 0x41eba6:c.instructions+=36;goto B41eba6;
case 0x41eba9:c.instructions+=35;goto B41eba9;
case 0x41ebac:c.instructions+=34;goto B41ebac;
case 0x41ebaf:c.instructions+=33;goto B41ebaf;
case 0x41ebb2:c.instructions+=32;goto B41ebb2;
case 0x41ebb5:c.instructions+=31;goto B41ebb5;
case 0x41ebb8:c.instructions+=30;goto B41ebb8;
case 0x41ebba:c.instructions+=29;goto B41ebba;
case 0x41ebbd:c.instructions+=28;goto B41ebbd;
case 0x41ebbf:c.instructions+=27;goto B41ebbf;
case 0x41ebc2:c.instructions+=26;goto B41ebc2;
case 0x41ebc5:c.instructions+=25;goto B41ebc5;
case 0x41ebc8:c.instructions+=24;goto B41ebc8;
case 0x41ebcb:c.instructions+=23;goto B41ebcb;
case 0x41ebce:c.instructions+=22;goto B41ebce;
case 0x41ebd1:c.instructions+=21;goto B41ebd1;
case 0x41ebd4:c.instructions+=20;goto B41ebd4;
case 0x41ebd7:c.instructions+=19;goto B41ebd7;
case 0x41ebda:c.instructions+=18;goto B41ebda;
case 0x41ebdc:c.instructions+=17;goto B41ebdc;
case 0x41ebdf:c.instructions+=16;goto B41ebdf;
case 0x41ebe1:c.instructions+=15;goto B41ebe1;
case 0x41ebe4:c.instructions+=14;goto B41ebe4;
case 0x41ebe7:c.instructions+=13;goto B41ebe7;
case 0x41ebea:c.instructions+=12;goto B41ebea;
case 0x41ebed:c.instructions+=11;goto B41ebed;
case 0x41ebf0:c.instructions+=10;goto B41ebf0;
case 0x41ebf3:c.instructions+=9;goto B41ebf3;
case 0x41ebf7:c.instructions+=8;goto B41ebf7;
case 0x41ebfb:c.instructions+=7;goto B41ebfb;
case 0x41ebfe:c.instructions+=6;goto B41ebfe;
case 0x41ebff:c.instructions+=5;goto B41ebff;
case 0x41ec02:c.instructions+=4;goto B41ec02;
case 0x41ec04:c.instructions+=3;goto B41ec04;
case 0x41ec08:c.instructions+=2;goto B41ec08;
case 0x41ec0c:c.instructions+=1;goto B41ec0c;
case 0x41ec12:goto L41ec12;
case 0x41ec13:c.instructions+=5;goto B41ec13;
case 0x41ec14:c.instructions+=4;goto B41ec14;
case 0x41ec15:c.instructions+=3;goto B41ec15;
case 0x41ec16:c.instructions+=2;goto B41ec16;
case 0x41ec17:c.instructions+=1;goto B41ec17;
case 0x41ec20:goto L41ec20;
case 0x41ec21:c.instructions+=9;goto B41ec21;
case 0x41ec25:c.instructions+=8;goto B41ec25;
case 0x41ec26:c.instructions+=7;goto B41ec26;
case 0x41ec27:c.instructions+=6;goto B41ec27;
case 0x41ec28:c.instructions+=5;goto B41ec28;
case 0x41ec2a:c.instructions+=4;goto B41ec2a;
case 0x41ec2c:c.instructions+=3;goto B41ec2c;
case 0x41ec2d:c.instructions+=2;goto B41ec2d;
case 0x41ec35:c.instructions+=1;goto B41ec35;
case 0x41ec3a:goto L41ec3a;
case 0x41ec3c:c.instructions+=2;goto B41ec3c;
case 0x41ec40:c.instructions+=1;goto B41ec40;
case 0x41ec46:goto L41ec46;
case 0x41ec4a:c.instructions+=4;goto B41ec4a;
case 0x41ec4e:c.instructions+=3;goto B41ec4e;
case 0x41ec4f:c.instructions+=2;goto B41ec4f;
case 0x41ec51:c.instructions+=1;goto B41ec51;
case 0x41ec56:goto L41ec56;
case 0x41ec58:c.instructions+=5;goto B41ec58;
case 0x41ec5b:c.instructions+=4;goto B41ec5b;
case 0x41ec5d:c.instructions+=3;goto B41ec5d;
case 0x41ec60:c.instructions+=2;goto B41ec60;
case 0x41ec63:c.instructions+=1;goto B41ec63;
case 0x41ec65:goto L41ec65;
case 0x41ec67:c.instructions+=5;goto B41ec67;
case 0x41ec69:c.instructions+=4;goto B41ec69;
case 0x41ec6c:c.instructions+=3;goto B41ec6c;
case 0x41ec6f:c.instructions+=2;goto B41ec6f;
case 0x41ec71:c.instructions+=1;goto B41ec71;
case 0x41ec77:goto L41ec77;
case 0x41ec7a:c.instructions+=2;goto B41ec7a;
case 0x41ec7c:c.instructions+=1;goto B41ec7c;
case 0x41ec7e:goto L41ec7e;
case 0x41ec82:c.instructions+=2;goto B41ec82;
case 0x41ec86:c.instructions+=1;goto B41ec86;
case 0x41ec88:goto L41ec88;
case 0x41ec90:c.instructions+=1;goto B41ec90;
case 0x41ec94:goto L41ec94;
case 0x41ec96:c.instructions+=4;goto B41ec96;
case 0x41ec99:c.instructions+=3;goto B41ec99;
case 0x41ec9b:c.instructions+=2;goto B41ec9b;
case 0x41ec9d:c.instructions+=1;goto B41ec9d;
case 0x41ec9f:goto L41ec9f;
case 0x41eca3:c.instructions+=3;goto B41eca3;
case 0x41eca5:c.instructions+=2;goto B41eca5;
case 0x41eca6:c.instructions+=1;goto B41eca6;
case 0x41eca9:goto L41eca9;
case 0x41ecab:c.instructions+=1;goto B41ecab;
case 0x41ecb1:goto L41ecb1;
case 0x41ecb4:c.instructions+=3;goto B41ecb4;
case 0x41ecb7:c.instructions+=2;goto B41ecb7;
case 0x41ecba:c.instructions+=1;goto B41ecba;
case 0x41ecbc:goto L41ecbc;
case 0x41ecc2:c.instructions+=2;goto B41ecc2;
case 0x41ecc4:c.instructions+=1;goto B41ecc4;
case 0x41ecc6:goto L41ecc6;
case 0x41ecc8:c.instructions+=1;goto B41ecc8;
case 0x41ecca:goto L41ecca;
case 0x41eccd:c.instructions+=5;goto B41eccd;
case 0x41ecd3:c.instructions+=4;goto B41ecd3;
case 0x41ecd9:c.instructions+=3;goto B41ecd9;
case 0x41ecdb:c.instructions+=2;goto B41ecdb;
case 0x41ecde:c.instructions+=1;goto B41ecde;
case 0x41ece0:goto L41ece0;
case 0x41ece4:c.instructions+=8;goto B41ece4;
case 0x41ece6:c.instructions+=7;goto B41ece6;
case 0x41ecec:c.instructions+=6;goto B41ecec;
case 0x41ecee:c.instructions+=5;goto B41ecee;
case 0x41ecf0:c.instructions+=4;goto B41ecf0;
case 0x41ecf1:c.instructions+=3;goto B41ecf1;
case 0x41ecf2:c.instructions+=2;goto B41ecf2;
case 0x41ecf3:c.instructions+=1;goto B41ecf3;
case 0x41ecf8:goto L41ecf8;
case 0x41ecfa:c.instructions+=1;goto B41ecfa;
case 0x41ecfc:goto L41ecfc;
case 0x41ed00:c.instructions+=5;goto B41ed00;
case 0x41ed04:c.instructions+=4;goto B41ed04;
case 0x41ed06:c.instructions+=3;goto B41ed06;
case 0x41ed07:c.instructions+=2;goto B41ed07;
case 0x41ed0b:c.instructions+=1;goto B41ed0b;
case 0x41ed10:goto L41ed10;
case 0x41ed12:c.instructions+=1;goto B41ed12;
case 0x41ed18:goto L41ed18;
case 0x41ed1c:c.instructions+=5;goto B41ed1c;
case 0x41ed20:c.instructions+=4;goto B41ed20;
case 0x41ed26:c.instructions+=3;goto B41ed26;
case 0x41ed29:c.instructions+=2;goto B41ed29;
case 0x41ed2d:c.instructions+=1;goto B41ed2d;
case 0x41ed33:goto L41ed33;
case 0x41ed35:c.instructions+=8;goto B41ed35;
case 0x41ed37:c.instructions+=7;goto B41ed37;
case 0x41ed38:c.instructions+=6;goto B41ed38;
case 0x41ed3a:c.instructions+=5;goto B41ed3a;
case 0x41ed3e:c.instructions+=4;goto B41ed3e;
case 0x41ed40:c.instructions+=3;goto B41ed40;
case 0x41ed42:c.instructions+=2;goto B41ed42;
case 0x41ed45:c.instructions+=1;goto B41ed45;
case 0x41ed4a:goto L41ed4a;
case 0x41ed4e:c.instructions+=1;goto B41ed4e;
case 0x41ed54:goto L41ed54;
case 0x41ed55:c.instructions+=6;goto B41ed55;
case 0x41ed56:c.instructions+=5;goto B41ed56;
case 0x41ed57:c.instructions+=4;goto B41ed57;
case 0x41ed59:c.instructions+=3;goto B41ed59;
case 0x41ed5a:c.instructions+=2;goto B41ed5a;
case 0x41ed5b:c.instructions+=1;goto B41ed5b;
case 0x41ed5e:goto L41ed5e;
case 0x41ed60:c.instructions+=1;goto B41ed60;
case 0x41ed65:goto L41ed65;
case 0x41ed69:c.instructions+=3;goto B41ed69;
case 0x41ed6b:c.instructions+=2;goto B41ed6b;
case 0x41ed6d:c.instructions+=1;goto B41ed6d;
case 0x41ed72:goto L41ed72;
case 0x41ed76:c.instructions+=25;goto B41ed76;
case 0x41ed78:c.instructions+=24;goto B41ed78;
case 0x41ed7a:c.instructions+=23;goto B41ed7a;
case 0x41ed7f:c.instructions+=22;goto B41ed7f;
case 0x41ed81:c.instructions+=21;goto B41ed81;
case 0x41ed86:c.instructions+=20;goto B41ed86;
case 0x41ed88:c.instructions+=19;goto B41ed88;
case 0x41ed8a:c.instructions+=18;goto B41ed8a;
case 0x41ed8e:c.instructions+=17;goto B41ed8e;
case 0x41ed91:c.instructions+=16;goto B41ed91;
case 0x41ed93:c.instructions+=15;goto B41ed93;
case 0x41ed96:c.instructions+=14;goto B41ed96;
case 0x41ed98:c.instructions+=13;goto B41ed98;
case 0x41ed9a:c.instructions+=12;goto B41ed9a;
case 0x41ed9d:c.instructions+=11;goto B41ed9d;
case 0x41ed9f:c.instructions+=10;goto B41ed9f;
case 0x41eda2:c.instructions+=9;goto B41eda2;
case 0x41eda5:c.instructions+=8;goto B41eda5;
case 0x41eda7:c.instructions+=7;goto B41eda7;
case 0x41eda9:c.instructions+=6;goto B41eda9;
case 0x41edad:c.instructions+=5;goto B41edad;
case 0x41edaf:c.instructions+=4;goto B41edaf;
case 0x41edb2:c.instructions+=3;goto B41edb2;
case 0x41edb5:c.instructions+=2;goto B41edb5;
case 0x41edb8:c.instructions+=1;goto B41edb8;
case 0x41edba:goto L41edba;
case 0x41edbe:c.instructions+=2;goto B41edbe;
case 0x41edc0:c.instructions+=1;goto B41edc0;
case 0x41edc2:goto L41edc2;
case 0x41edc5:c.instructions+=8;goto B41edc5;
case 0x41edc6:c.instructions+=7;goto B41edc6;
case 0x41edc7:c.instructions+=6;goto B41edc7;
case 0x41edcd:c.instructions+=5;goto B41edcd;
case 0x41edce:c.instructions+=4;goto B41edce;
case 0x41edd0:c.instructions+=3;goto B41edd0;
case 0x41edd1:c.instructions+=2;goto B41edd1;
case 0x41edd2:c.instructions+=1;goto B41edd2;
case 0x41edd5:goto L41edd5;
case 0x41eddb:c.instructions+=8;goto B41eddb;
case 0x41eddc:c.instructions+=7;goto B41eddc;
case 0x41eddd:c.instructions+=6;goto B41eddd;
case 0x41ede3:c.instructions+=5;goto B41ede3;
case 0x41ede4:c.instructions+=4;goto B41ede4;
case 0x41ede6:c.instructions+=3;goto B41ede6;
case 0x41ede7:c.instructions+=2;goto B41ede7;
case 0x41ede8:c.instructions+=1;goto B41ede8;
case 0x41edeb:goto L41edeb;
case 0x41eded:c.instructions+=1;goto B41eded;
case 0x41edf0:goto L41edf0;
case 0x41edf2:c.instructions+=1;goto B41edf2;
case 0x41edf8:goto L41edf8;
case 0x41edfa:c.instructions+=5;goto B41edfa;
case 0x41edfc:c.instructions+=4;goto B41edfc;
case 0x41edff:c.instructions+=3;goto B41edff;
case 0x41ee06:c.instructions+=2;goto B41ee06;
case 0x41ee0a:c.instructions+=1;goto B41ee0a;
case 0x41ee0c:goto L41ee0c;
case 0x41ee0d:c.instructions+=6;goto B41ee0d;
case 0x41ee0e:c.instructions+=5;goto B41ee0e;
case 0x41ee0f:c.instructions+=4;goto B41ee0f;
case 0x41ee11:c.instructions+=3;goto B41ee11;
case 0x41ee12:c.instructions+=2;goto B41ee12;
case 0x41ee13:c.instructions+=1;goto B41ee13;
case 0x41ee20:goto L41ee20;
case 0x41ee21:c.instructions+=12;goto B41ee21;
case 0x41ee23:c.instructions+=11;goto B41ee23;
case 0x41ee26:c.instructions+=10;goto B41ee26;
case 0x41ee2c:c.instructions+=9;goto B41ee2c;
case 0x41ee2f:c.instructions+=8;goto B41ee2f;
case 0x41ee30:c.instructions+=7;goto B41ee30;
case 0x41ee32:c.instructions+=6;goto B41ee32;
case 0x41ee35:c.instructions+=5;goto B41ee35;
case 0x41ee36:c.instructions+=4;goto B41ee36;
case 0x41ee37:c.instructions+=3;goto B41ee37;
case 0x41ee3a:c.instructions+=2;goto B41ee3a;
case 0x41ee3e:c.instructions+=1;goto B41ee3e;
case 0x41ee43:goto L41ee43;
case 0x41ee46:c.instructions+=7;goto B41ee46;
case 0x41ee4a:c.instructions+=6;goto B41ee4a;
case 0x41ee4d:c.instructions+=5;goto B41ee4d;
case 0x41ee4f:c.instructions+=4;goto B41ee4f;
case 0x41ee53:c.instructions+=3;goto B41ee53;
case 0x41ee55:c.instructions+=2;goto B41ee55;
case 0x41ee57:c.instructions+=1;goto B41ee57;
case 0x41ee5a:goto L41ee5a;
case 0x41ee5e:c.instructions+=3;goto B41ee5e;
case 0x41ee62:c.instructions+=2;goto B41ee62;
case 0x41ee66:c.instructions+=1;goto B41ee66;
case 0x41ee6c:goto L41ee6c;
case 0x41ee70:c.instructions+=2;goto B41ee70;
case 0x41ee74:c.instructions+=1;goto B41ee74;
case 0x41ee76:goto L41ee76;
case 0x41ee79:c.instructions+=2;goto B41ee79;
case 0x41ee7b:c.instructions+=1;goto B41ee7b;
case 0x41ee7d:goto L41ee7d;
case 0x41ee84:c.instructions+=1;goto B41ee84;
case 0x41ee86:goto L41ee86;
case 0x41ee88:goto L41ee88;
case 0x41ee8b:c.instructions+=5;goto B41ee8b;
case 0x41ee8e:c.instructions+=4;goto B41ee8e;
case 0x41ee95:c.instructions+=3;goto B41ee95;
case 0x41ee97:c.instructions+=2;goto B41ee97;
case 0x41ee9b:c.instructions+=1;goto B41ee9b;
case 0x41ee9d:goto L41ee9d;
case 0x41eea1:c.instructions+=7;goto B41eea1;
case 0x41eea3:c.instructions+=6;goto B41eea3;
case 0x41eea6:c.instructions+=5;goto B41eea6;
case 0x41eea8:c.instructions+=4;goto B41eea8;
case 0x41eeaa:c.instructions+=3;goto B41eeaa;
case 0x41eead:c.instructions+=2;goto B41eead;
case 0x41eeb1:c.instructions+=1;goto B41eeb1;
case 0x41eeb4:goto L41eeb4;
case 0x41eeb7:c.instructions+=6;goto B41eeb7;
case 0x41eebb:c.instructions+=5;goto B41eebb;
case 0x41eebd:c.instructions+=4;goto B41eebd;
case 0x41eec1:c.instructions+=3;goto B41eec1;
case 0x41eec2:c.instructions+=2;goto B41eec2;
case 0x41eec4:c.instructions+=1;goto B41eec4;
case 0x41eec9:goto L41eec9;
case 0x41eecd:c.instructions+=12;goto B41eecd;
case 0x41eed1:c.instructions+=11;goto B41eed1;
case 0x41eed2:c.instructions+=10;goto B41eed2;
case 0x41eed6:c.instructions+=9;goto B41eed6;
case 0x41eeda:c.instructions+=8;goto B41eeda;
case 0x41eedc:c.instructions+=7;goto B41eedc;
case 0x41eedf:c.instructions+=6;goto B41eedf;
case 0x41eee0:c.instructions+=5;goto B41eee0;
case 0x41eee1:c.instructions+=4;goto B41eee1;
case 0x41eee5:c.instructions+=3;goto B41eee5;
case 0x41eee6:c.instructions+=2;goto B41eee6;
case 0x41eee8:c.instructions+=1;goto B41eee8;
case 0x41eeeb:goto L41eeeb;
case 0x41eeef:c.instructions+=1;goto B41eeef;
case 0x41eef1:goto L41eef1;
case 0x41eef7:c.instructions+=1;goto B41eef7;
case 0x41eeff:goto L41eeff;
case 0x41ef03:c.instructions+=8;goto B41ef03;
case 0x41ef07:c.instructions+=7;goto B41ef07;
case 0x41ef0b:c.instructions+=6;goto B41ef0b;
case 0x41ef0e:c.instructions+=5;goto B41ef0e;
case 0x41ef10:c.instructions+=4;goto B41ef10;
case 0x41ef12:c.instructions+=3;goto B41ef12;
case 0x41ef14:c.instructions+=2;goto B41ef14;
case 0x41ef18:c.instructions+=1;goto B41ef18;
case 0x41ef1b:goto L41ef1b;
case 0x41ef1f:c.instructions+=3;goto B41ef1f;
case 0x41ef23:c.instructions+=2;goto B41ef23;
case 0x41ef27:c.instructions+=1;goto B41ef27;
case 0x41ef2d:goto L41ef2d;
case 0x41ef31:c.instructions+=2;goto B41ef31;
case 0x41ef35:c.instructions+=1;goto B41ef35;
case 0x41ef37:goto L41ef37;
case 0x41ef3a:c.instructions+=2;goto B41ef3a;
case 0x41ef3c:c.instructions+=1;goto B41ef3c;
case 0x41ef3e:goto L41ef3e;
case 0x41ef45:c.instructions+=1;goto B41ef45;
case 0x41ef47:goto L41ef47;
case 0x41ef49:goto L41ef49;
case 0x41ef4c:c.instructions+=5;goto B41ef4c;
case 0x41ef4f:c.instructions+=4;goto B41ef4f;
case 0x41ef56:c.instructions+=3;goto B41ef56;
case 0x41ef58:c.instructions+=2;goto B41ef58;
case 0x41ef5c:c.instructions+=1;goto B41ef5c;
case 0x41ef5e:goto L41ef5e;
case 0x41ef62:c.instructions+=7;goto B41ef62;
case 0x41ef64:c.instructions+=6;goto B41ef64;
case 0x41ef67:c.instructions+=5;goto B41ef67;
case 0x41ef69:c.instructions+=4;goto B41ef69;
case 0x41ef6b:c.instructions+=3;goto B41ef6b;
case 0x41ef6e:c.instructions+=2;goto B41ef6e;
case 0x41ef72:c.instructions+=1;goto B41ef72;
case 0x41ef75:goto L41ef75;
case 0x41ef78:c.instructions+=6;goto B41ef78;
case 0x41ef7c:c.instructions+=5;goto B41ef7c;
case 0x41ef7e:c.instructions+=4;goto B41ef7e;
case 0x41ef82:c.instructions+=3;goto B41ef82;
case 0x41ef83:c.instructions+=2;goto B41ef83;
case 0x41ef85:c.instructions+=1;goto B41ef85;
case 0x41ef8a:goto L41ef8a;
case 0x41ef8e:c.instructions+=12;goto B41ef8e;
case 0x41ef92:c.instructions+=11;goto B41ef92;
case 0x41ef93:c.instructions+=10;goto B41ef93;
case 0x41ef97:c.instructions+=9;goto B41ef97;
case 0x41ef9b:c.instructions+=8;goto B41ef9b;
case 0x41ef9d:c.instructions+=7;goto B41ef9d;
case 0x41efa0:c.instructions+=6;goto B41efa0;
case 0x41efa1:c.instructions+=5;goto B41efa1;
case 0x41efa2:c.instructions+=4;goto B41efa2;
case 0x41efa6:c.instructions+=3;goto B41efa6;
case 0x41efa7:c.instructions+=2;goto B41efa7;
case 0x41efa9:c.instructions+=1;goto B41efa9;
case 0x41efac:goto L41efac;
case 0x41efb0:c.instructions+=1;goto B41efb0;
case 0x41efb2:goto L41efb2;
case 0x41efb8:c.instructions+=1;goto B41efb8;
case 0x41efc0:goto L41efc0;
case 0x41efc3:c.instructions+=9;goto B41efc3;
case 0x41efc7:c.instructions+=8;goto B41efc7;
case 0x41efcb:c.instructions+=7;goto B41efcb;
case 0x41efce:c.instructions+=6;goto B41efce;
case 0x41efd2:c.instructions+=5;goto B41efd2;
case 0x41efd4:c.instructions+=4;goto B41efd4;
case 0x41efd6:c.instructions+=3;goto B41efd6;
case 0x41efd8:c.instructions+=2;goto B41efd8;
case 0x41efdc:c.instructions+=1;goto B41efdc;
case 0x41efdf:goto L41efdf;
case 0x41efe3:c.instructions+=3;goto B41efe3;
case 0x41efe7:c.instructions+=2;goto B41efe7;
case 0x41efeb:c.instructions+=1;goto B41efeb;
case 0x41eff1:goto L41eff1;
case 0x41eff5:c.instructions+=2;goto B41eff5;
case 0x41eff9:c.instructions+=1;goto B41eff9;
case 0x41effb:goto L41effb;
case 0x41effe:c.instructions+=1;goto B41effe;
default:missing_instruction(c.pc);}
B41e003:L41e003:{c.instructions+=1;NFSU2_TR(0x41e003);
{goto L41e016;}
}
B41e005:L41e005:{c.instructions+=6;NFSU2_TR(0x41e005);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41e009:{NFSU2_TR(0x41e009);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41e00d:{NFSU2_TR(0x41e00d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e00e:{NFSU2_TR(0x41e00e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e00f:{NFSU2_TR(0x41e00f);
__builtin_memmove((R+4),(R+24),4);
}
B41e011:{NFSU2_TR(0x41e011);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e016ull));
TAIL_STATIC(0x416bb0u,416);
}
B41e016:L41e016:{c.instructions+=6;NFSU2_TR(0x41e016);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e017:{NFSU2_TR(0x41e017);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41e01b:{NFSU2_TR(0x41e01b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41e01f:{NFSU2_TR(0x41e01f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e020:{NFSU2_TR(0x41e020);
__builtin_memmove((R+4),(R+24),4);
}
B41e022:{NFSU2_TR(0x41e022);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e027ull));
TAIL_STATIC(0x406460u,406);
}
B41e027:L41e027:{c.instructions+=7;NFSU2_TR(0x41e027);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B41e02d:{NFSU2_TR(0x41e02d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e02e:{NFSU2_TR(0x41e02e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41e031:{NFSU2_TR(0x41e031);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41e037:{NFSU2_TR(0x41e037);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41e03a:{NFSU2_TR(0x41e03a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e03b:{NFSU2_TR(0x41e03b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e040ull));
TAIL_STATIC(0x576aa0u,576);
}
B41e040:L41e040:{c.instructions+=6;NFSU2_TR(0x41e040);
__builtin_memmove((R+0),(R+28),4);
}
B41e042:{NFSU2_TR(0x41e042);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41e048:{NFSU2_TR(0x41e048);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B41e04c:{NFSU2_TR(0x41e04c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41e04d:{NFSU2_TR(0x41e04d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41e04e:{NFSU2_TR(0x41e04e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41e060:L41e060:{c.instructions+=5;NFSU2_TR(0x41e060);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e061:{NFSU2_TR(0x41e061);
__builtin_memmove((R+24),(R+4),4);
}
B41e063:{NFSU2_TR(0x41e063);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41e069:{NFSU2_TR(0x41e069);
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
B41e06b:{NFSU2_TR(0x41e06b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41e2bc;}}
}
B41e071:L41e071:{c.instructions+=3;NFSU2_TR(0x41e071);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41e077:{NFSU2_TR(0x41e077);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41e079:{NFSU2_TR(0x41e079);
if(r1(R+518)){{goto L41e0ac;}}
}
B41e07b:L41e07b:{c.instructions+=6;NFSU2_TR(0x41e07b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41e081:{NFSU2_TR(0x41e081);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e082:{NFSU2_TR(0x41e082);
u8 U[4];
w4(U+0,u32(0x407750ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e087:{NFSU2_TR(0x41e087);
u8 U[4];
w4(U+0,u32(0x8full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e08c:{NFSU2_TR(0x41e08c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e08d:{NFSU2_TR(0x41e08d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e092ull));
TAIL_STATIC(0x579410u,579);
}
B41e092:L41e092:{c.instructions+=6;NFSU2_TR(0x41e092);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41e098:{NFSU2_TR(0x41e098);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e099:{NFSU2_TR(0x41e099);
u8 U[4];
w4(U+0,u32(0x407750ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e09e:{NFSU2_TR(0x41e09e);
u8 U[4];
w4(U+0,u32(0x90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e0a3:{NFSU2_TR(0x41e0a3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e0a4:{NFSU2_TR(0x41e0a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e0a9ull));
TAIL_STATIC(0x579410u,579);
}
B41e0a9:L41e0a9:{c.instructions+=1;NFSU2_TR(0x41e0a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B41e0ac:L41e0ac:{c.instructions+=6;NFSU2_TR(0x41e0ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41e0b2:{NFSU2_TR(0x41e0b2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e0b3:{NFSU2_TR(0x41e0b3);
u8 U[4];
w4(U+0,u32(0x416de0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e0b8:{NFSU2_TR(0x41e0b8);
u8 U[4];
w4(U+0,u32(0x91ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e0bd:{NFSU2_TR(0x41e0bd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e0be:{NFSU2_TR(0x41e0be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e0c3ull));
TAIL_STATIC(0x579410u,579);
}
B41e0c3:L41e0c3:{c.instructions+=6;NFSU2_TR(0x41e0c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41e0c9:{NFSU2_TR(0x41e0c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e0ca:{NFSU2_TR(0x41e0ca);
u8 U[4];
w4(U+0,u32(0x416de0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e0cf:{NFSU2_TR(0x41e0cf);
u8 U[4];
w4(U+0,u32(0x92ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e0d4:{NFSU2_TR(0x41e0d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e0d5:{NFSU2_TR(0x41e0d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e0daull));
TAIL_STATIC(0x579410u,579);
}
B41e0da:L41e0da:{c.instructions+=6;NFSU2_TR(0x41e0da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41e0e0:{NFSU2_TR(0x41e0e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e0e1:{NFSU2_TR(0x41e0e1);
u8 U[4];
w4(U+0,u32(0x416de0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e0e6:{NFSU2_TR(0x41e0e6);
u8 U[4];
w4(U+0,u32(0x93ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e0eb:{NFSU2_TR(0x41e0eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e0ec:{NFSU2_TR(0x41e0ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e0f1ull));
TAIL_STATIC(0x579410u,579);
}
B41e0f1:L41e0f1:{c.instructions+=6;NFSU2_TR(0x41e0f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41e0f7:{NFSU2_TR(0x41e0f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e0f8:{NFSU2_TR(0x41e0f8);
u8 U[4];
w4(U+0,u32(0x407eb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e0fd:{NFSU2_TR(0x41e0fd);
u8 U[4];
w4(U+0,u32(0x94ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e102:{NFSU2_TR(0x41e102);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e103:{NFSU2_TR(0x41e103);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e108ull));
TAIL_STATIC(0x579410u,579);
}
B41e108:L41e108:{c.instructions+=7;NFSU2_TR(0x41e108);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41e10e:{NFSU2_TR(0x41e10e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B41e111:{NFSU2_TR(0x41e111);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e112:{NFSU2_TR(0x41e112);
u8 U[4];
w4(U+0,u32(0x407eb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e117:{NFSU2_TR(0x41e117);
u8 U[4];
w4(U+0,u32(0x95ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e11c:{NFSU2_TR(0x41e11c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e11d:{NFSU2_TR(0x41e11d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e122ull));
TAIL_STATIC(0x579410u,579);
}
B41e122:L41e122:{c.instructions+=6;NFSU2_TR(0x41e122);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41e128:{NFSU2_TR(0x41e128);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e129:{NFSU2_TR(0x41e129);
u8 U[4];
w4(U+0,u32(0x407eb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e12e:{NFSU2_TR(0x41e12e);
u8 U[4];
w4(U+0,u32(0x96ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e133:{NFSU2_TR(0x41e133);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e134:{NFSU2_TR(0x41e134);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e139ull));
TAIL_STATIC(0x579410u,579);
}
B41e139:L41e139:{c.instructions+=6;NFSU2_TR(0x41e139);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41e13f:{NFSU2_TR(0x41e13f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e140:{NFSU2_TR(0x41e140);
u8 U[4];
w4(U+0,u32(0x4077d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e145:{NFSU2_TR(0x41e145);
u8 U[4];
w4(U+0,u32(0x97ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e14a:{NFSU2_TR(0x41e14a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e14b:{NFSU2_TR(0x41e14b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e150ull));
TAIL_STATIC(0x579410u,579);
}
B41e150:L41e150:{c.instructions+=6;NFSU2_TR(0x41e150);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41e156:{NFSU2_TR(0x41e156);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e157:{NFSU2_TR(0x41e157);
u8 U[4];
w4(U+0,u32(0x4077d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e15c:{NFSU2_TR(0x41e15c);
u8 U[4];
w4(U+0,u32(0x98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e161:{NFSU2_TR(0x41e161);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e162:{NFSU2_TR(0x41e162);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e167ull));
TAIL_STATIC(0x579410u,579);
}
B41e167:L41e167:{c.instructions+=7;NFSU2_TR(0x41e167);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41e16d:{NFSU2_TR(0x41e16d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B41e170:{NFSU2_TR(0x41e170);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e171:{NFSU2_TR(0x41e171);
u8 U[4];
w4(U+0,u32(0x407f40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e176:{NFSU2_TR(0x41e176);
u8 U[4];
w4(U+0,u32(0x99ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e17b:{NFSU2_TR(0x41e17b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e17c:{NFSU2_TR(0x41e17c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e181ull));
TAIL_STATIC(0x579410u,579);
}
B41e181:L41e181:{c.instructions+=6;NFSU2_TR(0x41e181);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41e187:{NFSU2_TR(0x41e187);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e188:{NFSU2_TR(0x41e188);
u8 U[4];
w4(U+0,u32(0x407f40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e18d:{NFSU2_TR(0x41e18d);
u8 U[4];
w4(U+0,u32(0x9aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e192:{NFSU2_TR(0x41e192);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e193:{NFSU2_TR(0x41e193);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e198ull));
TAIL_STATIC(0x579410u,579);
}
B41e198:L41e198:{c.instructions+=6;NFSU2_TR(0x41e198);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41e19e:{NFSU2_TR(0x41e19e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e19f:{NFSU2_TR(0x41e19f);
u8 U[4];
w4(U+0,u32(0x407fc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e1a4:{NFSU2_TR(0x41e1a4);
u8 U[4];
w4(U+0,u32(0x9bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e1a9:{NFSU2_TR(0x41e1a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e1aa:{NFSU2_TR(0x41e1aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e1afull));
TAIL_STATIC(0x579410u,579);
}
B41e1af:L41e1af:{c.instructions+=6;NFSU2_TR(0x41e1af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41e1b5:{NFSU2_TR(0x41e1b5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e1b6:{NFSU2_TR(0x41e1b6);
u8 U[4];
w4(U+0,u32(0x407fc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e1bb:{NFSU2_TR(0x41e1bb);
u8 U[4];
w4(U+0,u32(0x9dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e1c0:{NFSU2_TR(0x41e1c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e1c1:{NFSU2_TR(0x41e1c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e1c6ull));
TAIL_STATIC(0x579410u,579);
}
B41e1c6:L41e1c6:{c.instructions+=7;NFSU2_TR(0x41e1c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41e1cc:{NFSU2_TR(0x41e1cc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B41e1cf:{NFSU2_TR(0x41e1cf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e1d0:{NFSU2_TR(0x41e1d0);
u8 U[4];
w4(U+0,u32(0x4080b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e1d5:{NFSU2_TR(0x41e1d5);
u8 U[4];
w4(U+0,u32(0x9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e1da:{NFSU2_TR(0x41e1da);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e1db:{NFSU2_TR(0x41e1db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e1e0ull));
TAIL_STATIC(0x579410u,579);
}
B41e1e0:L41e1e0:{c.instructions+=6;NFSU2_TR(0x41e1e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41e1e6:{NFSU2_TR(0x41e1e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e1e7:{NFSU2_TR(0x41e1e7);
u8 U[4];
w4(U+0,u32(0x4080b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e1ec:{NFSU2_TR(0x41e1ec);
u8 U[4];
w4(U+0,u32(0x9eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e1f1:{NFSU2_TR(0x41e1f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e1f2:{NFSU2_TR(0x41e1f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e1f7ull));
TAIL_STATIC(0x579410u,579);
}
B41e1f7:L41e1f7:{c.instructions+=6;NFSU2_TR(0x41e1f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41e1fd:{NFSU2_TR(0x41e1fd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e1fe:{NFSU2_TR(0x41e1fe);
u8 U[4];
w4(U+0,u32(0x408180ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e203:{NFSU2_TR(0x41e203);
u8 U[4];
w4(U+0,u32(0x9full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e208:{NFSU2_TR(0x41e208);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e209:{NFSU2_TR(0x41e209);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e20eull));
TAIL_STATIC(0x579410u,579);
}
B41e20e:L41e20e:{c.instructions+=6;NFSU2_TR(0x41e20e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41e214:{NFSU2_TR(0x41e214);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e215:{NFSU2_TR(0x41e215);
u8 U[4];
w4(U+0,u32(0x408180ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e21a:{NFSU2_TR(0x41e21a);
u8 U[4];
w4(U+0,u32(0xa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e21f:{NFSU2_TR(0x41e21f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e220:{NFSU2_TR(0x41e220);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e225ull));
TAIL_STATIC(0x579410u,579);
}
B41e225:L41e225:{c.instructions+=3;NFSU2_TR(0x41e225);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B41e228:{NFSU2_TR(0x41e228);
__builtin_memmove((R+4),(R+24),4);
}
B41e22a:{NFSU2_TR(0x41e22a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e22full));
TAIL_STATIC(0x410480u,410);
}
B41e22f:L41e22f:{c.instructions+=14;NFSU2_TR(0x41e22f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41e235:{NFSU2_TR(0x41e235);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41e238:{NFSU2_TR(0x41e238);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41e23b:{NFSU2_TR(0x41e23b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B41e23e:{NFSU2_TR(0x41e23e);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa7dull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B41e245:{NFSU2_TR(0x41e245);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa64ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B41e24c:{NFSU2_TR(0x41e24c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41e252:{NFSU2_TR(0x41e252);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41e255:{NFSU2_TR(0x41e255);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x228ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41e25b:{NFSU2_TR(0x41e25b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41e25e:{NFSU2_TR(0x41e25e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41e264:{NFSU2_TR(0x41e264);
__builtin_memmove((R+4),gp(0x870760),4);
}
B41e26a:{NFSU2_TR(0x41e26a);
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
B41e26c:{NFSU2_TR(0x41e26c);
if(r1(R+518)){{goto L41e2b2;}}
}
B41e26e:L41e26e:{c.instructions+=3;NFSU2_TR(0x41e26e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41e274:{NFSU2_TR(0x41e274);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e275:{NFSU2_TR(0x41e275);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e27aull));
TAIL_STATIC(0x5bfd70u,5bf);
}
B41e27a:L41e27a:{c.instructions+=2;NFSU2_TR(0x41e27a);
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
B41e27c:{NFSU2_TR(0x41e27c);
if(r1(R+518)){{goto L41e2b2;}}
}
B41e27e:L41e27e:{c.instructions+=7;NFSU2_TR(0x41e27e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41e284:{NFSU2_TR(0x41e284);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41e287:{NFSU2_TR(0x41e287);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41e28a:{NFSU2_TR(0x41e28a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B41e28d:{NFSU2_TR(0x41e28d);
{u32 ea_=u32((r4(R+0)*8u)+u32(8628872u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41e294:{NFSU2_TR(0x41e294);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41e29a:{NFSU2_TR(0x41e29a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e29full));
TAIL_STATIC(0x75bed4u,75b);
}
B41e29f:L41e29f:{c.instructions+=5;NFSU2_TR(0x41e29f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41e2a5:{NFSU2_TR(0x41e2a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e2a6:{NFSU2_TR(0x41e2a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e2a7:{NFSU2_TR(0x41e2a7);
__builtin_memmove((R+4),gp(0x870760),4);
}
B41e2ad:{NFSU2_TR(0x41e2ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e2b2ull));
TAIL_STATIC(0x5c9120u,5c9);
}
B41e2b2:L41e2b2:{c.instructions+=1;NFSU2_TR(0x41e2b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41e2bc:L41e2bc:{c.instructions+=2;NFSU2_TR(0x41e2bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41e2bd:{NFSU2_TR(0x41e2bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41e2c0:L41e2c0:{c.instructions+=5;NFSU2_TR(0x41e2c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e2c1:{NFSU2_TR(0x41e2c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e2c2:{NFSU2_TR(0x41e2c2);
__builtin_memmove((R+24),(R+4),4);
}
B41e2c4:{NFSU2_TR(0x41e2c4);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B41e2cb:{NFSU2_TR(0x41e2cb);
if(r1(R+518)){{goto L41e46c;}}
}
B41e2d1:L41e2d1:{c.instructions+=3;NFSU2_TR(0x41e2d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41e2d7:{NFSU2_TR(0x41e2d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e2d8:{NFSU2_TR(0x41e2d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e2ddull));
TAIL_STATIC(0x4022c0u,402);
}
B41e2dd:L41e2dd:{c.instructions+=6;NFSU2_TR(0x41e2dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41e2e3:{NFSU2_TR(0x41e2e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41e2e6:{NFSU2_TR(0x41e2e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e2e7:{NFSU2_TR(0x41e2e7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x5c4ull))));
}
B41e2ec:{NFSU2_TR(0x41e2ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e2ed:{NFSU2_TR(0x41e2ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e2f2ull));
TAIL_STATIC(0x5dc410u,5dc);
}
B41e2f2:L41e2f2:{c.instructions+=3;NFSU2_TR(0x41e2f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41e2f8:{NFSU2_TR(0x41e2f8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e2f9:{NFSU2_TR(0x41e2f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e2feull));
TAIL_STATIC(0x571a60u,571);
}
B41e2fe:L41e2fe:{c.instructions+=3;NFSU2_TR(0x41e2fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B41e301:{NFSU2_TR(0x41e301);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41e303:{NFSU2_TR(0x41e303);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41e30c;}}
}
B41e305:L41e305:{c.instructions+=2;NFSU2_TR(0x41e305);
__builtin_memmove((R+4),(R+24),4);
}
B41e307:{NFSU2_TR(0x41e307);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e30cull));
TAIL_STATIC(0x4076c0u,407);
}
B41e30c:L41e30c:{c.instructions+=3;NFSU2_TR(0x41e30c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41e312:{NFSU2_TR(0x41e312);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41e314:{NFSU2_TR(0x41e314);
if(r1(R+518)){{goto L41e32a;}}
}
B41e316:L41e316:{c.instructions+=2;NFSU2_TR(0x41e316);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41e320:{NFSU2_TR(0x41e320);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dcull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41e32a:L41e32a:{c.instructions+=5;NFSU2_TR(0x41e32a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e32b:{NFSU2_TR(0x41e32b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41e32f:{NFSU2_TR(0x41e32f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e330:{NFSU2_TR(0x41e330);
__builtin_memmove((R+4),(R+24),4);
}
B41e332:{NFSU2_TR(0x41e332);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e337ull));
TAIL_STATIC(0x407a30u,407);
}
B41e337:L41e337:{c.instructions+=3;NFSU2_TR(0x41e337);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41e33d:{NFSU2_TR(0x41e33d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41e33f:{NFSU2_TR(0x41e33f);
if(r1(R+518)){{goto L41e37e;}}
}
B41e341:L41e341:{c.instructions+=3;NFSU2_TR(0x41e341);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2fbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41e347:{NFSU2_TR(0x41e347);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41e349:{NFSU2_TR(0x41e349);
if(r1(R+518)){{goto L41e355;}}
}
B41e34b:L41e34b:{c.instructions+=2;NFSU2_TR(0x41e34b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41e353:{NFSU2_TR(0x41e353);
{goto L41e35f;}
}
B41e355:L41e355:{c.instructions+=2;NFSU2_TR(0x41e355);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41e35b:{NFSU2_TR(0x41e35b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41e35f:L41e35f:{c.instructions+=7;NFSU2_TR(0x41e35f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41e365:{NFSU2_TR(0x41e365);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41e369:{NFSU2_TR(0x41e369);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e36a:{NFSU2_TR(0x41e36a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e36b:{NFSU2_TR(0x41e36b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e36c:{NFSU2_TR(0x41e36c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41e372:{NFSU2_TR(0x41e372);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e377ull));
TAIL_STATIC(0x41dfc0u,41d);
}
B41e377:L41e377:{c.instructions+=1;NFSU2_TR(0x41e377);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B41e37e:L41e37e:{c.instructions+=3;NFSU2_TR(0x41e37e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41e384:{NFSU2_TR(0x41e384);
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
B41e386:{NFSU2_TR(0x41e386);
if(r1(R+518)){{goto L41e39e;}}
}
B41e388:L41e388:{c.instructions+=4;NFSU2_TR(0x41e388);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e38d:{NFSU2_TR(0x41e38d);
__builtin_memmove((R+4),(R+24),4);
}
B41e38f:{NFSU2_TR(0x41e38f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41e399:{NFSU2_TR(0x41e399);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e39eull));
TAIL_STATIC(0x5eb8f0u,5eb);
}
B41e39e:L41e39e:{c.instructions+=3;NFSU2_TR(0x41e39e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41e3a4:{NFSU2_TR(0x41e3a4);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B41e3a8:{NFSU2_TR(0x41e3a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41e45f;}}
}
B41e3ae:L41e3ae:{c.instructions+=7;NFSU2_TR(0x41e3ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41e3b1:{NFSU2_TR(0x41e3b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41e3b4:{NFSU2_TR(0x41e3b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41e3ba:{NFSU2_TR(0x41e3ba);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e3bb:{NFSU2_TR(0x41e3bb);
w4(R+20,u32(0x3ull));
}
B41e3c0:{NFSU2_TR(0x41e3c0);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41e3c2:{NFSU2_TR(0x41e3c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41e3f1;}}
}
B41e3c4:L41e3c4:{c.instructions+=4;NFSU2_TR(0x41e3c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41e3ca:{NFSU2_TR(0x41e3ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41e3d0:{NFSU2_TR(0x41e3d0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41e3d2:{NFSU2_TR(0x41e3d2);
if(r1(R+518)){{goto L41e408;}}
}
B41e3d4:L41e3d4:{c.instructions+=2;NFSU2_TR(0x41e3d4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41e3d7:{NFSU2_TR(0x41e3d7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L41e3de;}}
}
B41e3d9:L41e3d9:{c.instructions+=2;NFSU2_TR(0x41e3d9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41e3dc:{NFSU2_TR(0x41e3dc);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L41e408;}}
}
B41e3de:L41e3de:{c.instructions+=3;NFSU2_TR(0x41e3de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c0ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41e3e8:{NFSU2_TR(0x41e3e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41e3ef:{NFSU2_TR(0x41e3ef);
{goto L41e408;}
}
B41e3f1:L41e3f1:{c.instructions+=2;NFSU2_TR(0x41e3f1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41e3f4:{NFSU2_TR(0x41e3f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41e408;}}
}
B41e3f6:L41e3f6:{c.instructions+=1;NFSU2_TR(0x41e3f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e3fbull));
TAIL_STATIC(0x5ecd70u,5ec);
}
B41e3fb:L41e3fb:{c.instructions+=2;NFSU2_TR(0x41e3fb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41e3fd:{NFSU2_TR(0x41e3fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41e408;}}
}
B41e3ff:L41e3ff:{c.instructions+=2;NFSU2_TR(0x41e3ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c0ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41e405:{NFSU2_TR(0x41e405);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41e408:L41e408:{c.instructions+=2;NFSU2_TR(0x41e408);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B41e40e:{NFSU2_TR(0x41e40e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41e434;}}
}
B41e410:L41e410:{c.instructions+=5;NFSU2_TR(0x41e410);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41e413:{NFSU2_TR(0x41e413);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41e419:{NFSU2_TR(0x41e419);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e41a:{NFSU2_TR(0x41e41a);
__builtin_memmove((R+4),(R+28),4);
}
B41e41c:{NFSU2_TR(0x41e41c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e421ull));
TAIL_STATIC(0x594910u,594);
}
B41e421:L41e421:{c.instructions+=5;NFSU2_TR(0x41e421);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41e425:{NFSU2_TR(0x41e425);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41e426:{NFSU2_TR(0x41e426);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e427:{NFSU2_TR(0x41e427);
__builtin_memmove((R+4),(R+24),4);
}
B41e429:{NFSU2_TR(0x41e429);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e42eull));
TAIL_STATIC(0x407400u,407);
}
B41e42e:L41e42e:{c.instructions+=4;NFSU2_TR(0x41e42e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41e42f:{NFSU2_TR(0x41e42f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41e430:{NFSU2_TR(0x41e430);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41e431:{NFSU2_TR(0x41e431);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41e434:L41e434:{c.instructions+=2;NFSU2_TR(0x41e434);
w4(R+4,u32(0x89e7a0ull));
}
B41e439:{NFSU2_TR(0x41e439);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e43eull));
TAIL_STATIC(0x401950u,401);
}
B41e43e:L41e43e:{c.instructions+=2;NFSU2_TR(0x41e43e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41e440:{NFSU2_TR(0x41e440);
if(r1(R+518)){{goto L41e45e;}}
}
B41e442:L41e442:{c.instructions+=5;NFSU2_TR(0x41e442);
{u32 ea_=u32(r4(R+24)+u32(528u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41e448:{NFSU2_TR(0x41e448);
{u32 ea_=u32(u32(7882084u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41e44e:{NFSU2_TR(0x41e44e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41e450:{NFSU2_TR(0x41e450);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41e453:{NFSU2_TR(0x41e453);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41e459;}}
}
B41e455:L41e455:{c.instructions+=2;NFSU2_TR(0x41e455);
w1(R+0,u8(0x1ull));
}
B41e457:{NFSU2_TR(0x41e457);
{goto L41e45b;}
}
B41e459:L41e459:{c.instructions+=1;NFSU2_TR(0x41e459);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B41e45b:L41e45b:{c.instructions+=1;NFSU2_TR(0x41e45b);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41e45e:L41e45e:{c.instructions+=1;NFSU2_TR(0x41e45e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41e45f:L41e45f:{c.instructions+=4;NFSU2_TR(0x41e45f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41e463:{NFSU2_TR(0x41e463);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e464:{NFSU2_TR(0x41e464);
__builtin_memmove((R+4),(R+24),4);
}
B41e466:{NFSU2_TR(0x41e466);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e46bull));
TAIL_STATIC(0x407400u,407);
}
B41e46b:L41e46b:{c.instructions+=1;NFSU2_TR(0x41e46b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41e46c:L41e46c:{c.instructions+=3;NFSU2_TR(0x41e46c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41e46d:{NFSU2_TR(0x41e46d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41e46e:{NFSU2_TR(0x41e46e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41e480:L41e480:{c.instructions+=14;NFSU2_TR(0x41e480);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e482:{NFSU2_TR(0x41e482);
u8 U[4];
w4(U+0,u32(0x7715f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e487:{NFSU2_TR(0x41e487);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41e48d:{NFSU2_TR(0x41e48d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e48e:{NFSU2_TR(0x41e48e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41e495:{NFSU2_TR(0x41e495);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e496:{NFSU2_TR(0x41e496);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e497:{NFSU2_TR(0x41e497);
__builtin_memmove((R+24),(R+4),4);
}
B41e499:{NFSU2_TR(0x41e499);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41e49d:{NFSU2_TR(0x41e49d);
u8 U[4];
w4(U+0,u32(0x785370ull));
s4(u32(r4(R+24)),r4(U+0));
}
B41e4a3:{NFSU2_TR(0x41e4a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41e4a6:{NFSU2_TR(0x41e4a6);
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
B41e4a8:{NFSU2_TR(0x41e4a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41e4b0:{NFSU2_TR(0x41e4b0);
if(r1(R+518)){{goto L41e4b8;}}
}
B41e4b2:L41e4b2:{c.instructions+=3;NFSU2_TR(0x41e4b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41e4b4:{NFSU2_TR(0x41e4b4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e4b6:{NFSU2_TR(0x41e4b6);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e4b8ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B41e4b8:L41e4b8:{c.instructions+=3;NFSU2_TR(0x41e4b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41e4be:{NFSU2_TR(0x41e4be);
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
B41e4c0:{NFSU2_TR(0x41e4c0);
if(r1(R+518)){{goto L41e4c8;}}
}
B41e4c2:L41e4c2:{c.instructions+=3;NFSU2_TR(0x41e4c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41e4c4:{NFSU2_TR(0x41e4c4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e4c6:{NFSU2_TR(0x41e4c6);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e4c8ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B41e4c8:L41e4c8:{c.instructions+=3;NFSU2_TR(0x41e4c8);
__builtin_memmove((R+4),(R+24),4);
}
B41e4ca:{NFSU2_TR(0x41e4ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B41e4d2:{NFSU2_TR(0x41e4d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e4d7ull));
TAIL_STATIC(0x41be00u,41b);
}
B41e4d7:L41e4d7:{c.instructions+=5;NFSU2_TR(0x41e4d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41e4db:{NFSU2_TR(0x41e4db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41e4dc:{NFSU2_TR(0x41e4dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41e4e3:{NFSU2_TR(0x41e4e3);
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
B41e4e6:{NFSU2_TR(0x41e4e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41e4f0:L41e4f0:{c.instructions+=3;NFSU2_TR(0x41e4f0);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B41e4f5:{NFSU2_TR(0x41e4f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7a8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41e4fb:{NFSU2_TR(0x41e4fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41e500:L41e500:{c.instructions+=3;NFSU2_TR(0x41e500);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B41e505:{NFSU2_TR(0x41e505);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7acull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41e50b:{NFSU2_TR(0x41e50b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41e510:L41e510:{c.instructions+=3;NFSU2_TR(0x41e510);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x734ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41e516:{NFSU2_TR(0x41e516);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41e518:{NFSU2_TR(0x41e518);
if(r1(R+518)){{goto L41e52c;}}
}
B41e51a:L41e51a:{c.instructions+=2;NFSU2_TR(0x41e51a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41e51f:{NFSU2_TR(0x41e51f);
if(r1(R+518)){{goto L41e52c;}}
}
B41e521:L41e521:{c.instructions+=4;NFSU2_TR(0x41e521);
w4(R+0,u32(0x1ull));
}
B41e526:{NFSU2_TR(0x41e526);
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
B41e528:{NFSU2_TR(0x41e528);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B41e52b:{NFSU2_TR(0x41e52b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41e52c:L41e52c:{c.instructions+=4;NFSU2_TR(0x41e52c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B41e52e:{NFSU2_TR(0x41e52e);
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
B41e530:{NFSU2_TR(0x41e530);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B41e533:{NFSU2_TR(0x41e533);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41e540:L41e540:{c.instructions+=26;NFSU2_TR(0x41e540);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e541:{NFSU2_TR(0x41e541);
__builtin_memmove((R+20),(R+16),4);
}
B41e543:{NFSU2_TR(0x41e543);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B41e546:{NFSU2_TR(0x41e546);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xf4ull))));
}
B41e54c:{NFSU2_TR(0x41e54c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e54d:{NFSU2_TR(0x41e54d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e54e:{NFSU2_TR(0x41e54e);
__builtin_memmove((R+24),(R+4),4);
}
B41e550:{NFSU2_TR(0x41e550);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41e553:{NFSU2_TR(0x41e553);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41e559:{NFSU2_TR(0x41e559);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41e55c:{NFSU2_TR(0x41e55c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41e55f:{NFSU2_TR(0x41e55f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41e565:{NFSU2_TR(0x41e565);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B41e567:{NFSU2_TR(0x41e567);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41e56b:{NFSU2_TR(0x41e56b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e56c:{NFSU2_TR(0x41e56c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41e56e:{NFSU2_TR(0x41e56e);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41e572:{NFSU2_TR(0x41e572);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41e576:{NFSU2_TR(0x41e576);
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
B41e579:{NFSU2_TR(0x41e579);
u8 U[5];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41e580:{NFSU2_TR(0x41e580);
u8 U[5];
w4(U+0,u32(u32(u32(0xf9ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41e587:{NFSU2_TR(0x41e587);
u8 U[5];
w4(U+0,u32(u32(u32(0xfaull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41e58e:{NFSU2_TR(0x41e58e);
u8 U[5];
w4(U+0,u32(u32(u32(0xfbull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41e595:{NFSU2_TR(0x41e595);
u8 U[5];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41e59c:{NFSU2_TR(0x41e59c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41e5a0:{NFSU2_TR(0x41e5a0);
if(r1(R+514)){{goto L41e5b6;}}
}
B41e5a2:L41e5a2:{c.instructions+=4;NFSU2_TR(0x41e5a2);
{u32 ea_=u32(r4(R+4)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41e5a8:{NFSU2_TR(0x41e5a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41e5ae:{NFSU2_TR(0x41e5ae);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41e5b2:{NFSU2_TR(0x41e5b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41e5b6:L41e5b6:{c.instructions+=3;NFSU2_TR(0x41e5b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41e5b9:{NFSU2_TR(0x41e5b9);
__builtin_memmove((R+4),(R+28),4);
}
B41e5bb:{NFSU2_TR(0x41e5bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e5c0ull));
TAIL_STATIC(0x5ec0b0u,5ec);
}
B41e5c0:L41e5c0:{c.instructions+=2;NFSU2_TR(0x41e5c0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41e5c2:{NFSU2_TR(0x41e5c2);
if(r1(R+518)){{goto L41e5e8;}}
}
B41e5c4:L41e5c4:{c.instructions+=10;NFSU2_TR(0x41e5c4);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41e5c7:{NFSU2_TR(0x41e5c7);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B41e5cb:{NFSU2_TR(0x41e5cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B41e5cd:{NFSU2_TR(0x41e5cd);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B41e5d0:{NFSU2_TR(0x41e5d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41e5d4:{NFSU2_TR(0x41e5d4);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41e5d8:{NFSU2_TR(0x41e5d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41e5dc:{NFSU2_TR(0x41e5dc);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B41e5e0:{NFSU2_TR(0x41e5e0);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41e5e6:{NFSU2_TR(0x41e5e6);
{goto L41e5f9;}
}
B41e5e8:L41e5e8:{c.instructions+=5;NFSU2_TR(0x41e5e8);
{u32 ea_=u32(r4(R+28)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41e5eb:{NFSU2_TR(0x41e5eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41e5ee:{NFSU2_TR(0x41e5ee);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41e5f2:{NFSU2_TR(0x41e5f2);
{u32 ea_=u32(r4(R+28)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41e5f5:{NFSU2_TR(0x41e5f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41e5f9:L41e5f9:{c.instructions+=14;NFSU2_TR(0x41e5f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41e5fc:{NFSU2_TR(0x41e5fc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e5fd:{NFSU2_TR(0x41e5fd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e5ff:{NFSU2_TR(0x41e5ff);
u8 U[4];
w4(U+0,u32(0x43c80000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e604:{NFSU2_TR(0x41e604);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41e608:{NFSU2_TR(0x41e608);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e609:{NFSU2_TR(0x41e609);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B41e60d:{NFSU2_TR(0x41e60d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e60e:{NFSU2_TR(0x41e60e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B41e611:{NFSU2_TR(0x41e611);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e612:{NFSU2_TR(0x41e612);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41e616:{NFSU2_TR(0x41e616);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41e61a:{NFSU2_TR(0x41e61a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e61b:{NFSU2_TR(0x41e61b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e620ull));
TAIL_STATIC(0x41b820u,41b);
}
B41e620:L41e620:{c.instructions+=3;NFSU2_TR(0x41e620);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B41e623:{NFSU2_TR(0x41e623);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41e625:{NFSU2_TR(0x41e625);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41e669;}}
}
B41e627:L41e627:{c.instructions+=19;NFSU2_TR(0x41e627);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41e62b:{NFSU2_TR(0x41e62b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41e62e:{NFSU2_TR(0x41e62e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e62f:{NFSU2_TR(0x41e62f);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B41e631:{NFSU2_TR(0x41e631);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e633:{NFSU2_TR(0x41e633);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41e637:{NFSU2_TR(0x41e637);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41e63b:{NFSU2_TR(0x41e63b);
u8 U[4];
w4(U+0,u32(0x43c80000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e640:{NFSU2_TR(0x41e640);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B41e644:{NFSU2_TR(0x41e644);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B41e646:{NFSU2_TR(0x41e646);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e647:{NFSU2_TR(0x41e647);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41e64b:{NFSU2_TR(0x41e64b);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41e64f:{NFSU2_TR(0x41e64f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e650:{NFSU2_TR(0x41e650);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x60ull))));
}
B41e653:{NFSU2_TR(0x41e653);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e654:{NFSU2_TR(0x41e654);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B41e658:{NFSU2_TR(0x41e658);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e659:{NFSU2_TR(0x41e659);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e65eull));
TAIL_STATIC(0x41b820u,41b);
}
B41e65e:L41e65e:{c.instructions+=3;NFSU2_TR(0x41e65e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B41e661:{NFSU2_TR(0x41e661);
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
B41e663:{NFSU2_TR(0x41e663);
if(r1(R+518)){{goto L41e6fc;}}
}
B41e669:L41e669:{c.instructions+=8;NFSU2_TR(0x41e669);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41e66d:{NFSU2_TR(0x41e66d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41e670:{NFSU2_TR(0x41e670);
u8 U[5];
w4(U+0,u32(u32(u32(0xfbull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41e677:{NFSU2_TR(0x41e677);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41e679:{NFSU2_TR(0x41e679);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B41e67c:{NFSU2_TR(0x41e67c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41e67f:{NFSU2_TR(0x41e67f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B41e682:{NFSU2_TR(0x41e682);
w4(R+4,u32(0x10ull));
}
B41e687:L41e687:{c.instructions+=4;NFSU2_TR(0x41e687);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0xfffffffcull))));
s4(u32(r4(R+0)),r4(U+0));
}
B41e68a:{NFSU2_TR(0x41e68a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B41e68d:{NFSU2_TR(0x41e68d);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B41e68e:{NFSU2_TR(0x41e68e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41e687u);}goto L41e687;}}
}
B41e690:L41e690:{c.instructions+=2;NFSU2_TR(0x41e690);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41e696:{NFSU2_TR(0x41e696);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e69bull));
TAIL_STATIC(0x411be0u,411);
}
B41e69b:L41e69b:{c.instructions+=4;NFSU2_TR(0x41e69b);
u8 U[5];
w4(U+0,u32(u32(u32(0xf9ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(s32(s8(r1(U+4)))));
}
B41e6a3:{NFSU2_TR(0x41e6a3);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B41e6a5:{NFSU2_TR(0x41e6a5);
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
B41e6a7:{NFSU2_TR(0x41e6a7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L41e6fc;}}
}
B41e6a9:L41e6a9:{c.instructions+=1;NFSU2_TR(0x41e6a9);
__builtin_memmove((R+16),(R+16),4);
}
B41e6b0:L41e6b0:{c.instructions+=3;NFSU2_TR(0x41e6b0);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B41e6b3:{NFSU2_TR(0x41e6b3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B41e6b5:{NFSU2_TR(0x41e6b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41e6b8:L41e6b8:{c.instructions+=2;NFSU2_TR(0x41e6b8);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B41e6bb:{NFSU2_TR(0x41e6bb);
if(r1(R+518)){{goto L41e6c8;}}
}
B41e6bd:L41e6bd:{c.instructions+=4;NFSU2_TR(0x41e6bd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B41e6be:{NFSU2_TR(0x41e6be);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B41e6c1:{NFSU2_TR(0x41e6c1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41e6c4:{NFSU2_TR(0x41e6c4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41e6b8u);}goto L41e6b8;}}
}
B41e6c6:L41e6c6:{c.instructions+=1;NFSU2_TR(0x41e6c6);
{goto L41e6ca;}
}
B41e6c8:L41e6c8:{c.instructions+=1;NFSU2_TR(0x41e6c8);
__builtin_memmove((R+4),(R+0),4);
}
B41e6ca:L41e6ca:{c.instructions+=17;NFSU2_TR(0x41e6ca);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B41e6cc:{NFSU2_TR(0x41e6cc);
u8 U[14];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+0),(U+12),2);
}
B41e6d1:{NFSU2_TR(0x41e6d1);
__builtin_memmove((R+28),(R+0),4);
}
B41e6d3:{NFSU2_TR(0x41e6d3);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B41e6d6:{NFSU2_TR(0x41e6d6);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1fffull))));
}
B41e6db:{NFSU2_TR(0x41e6db);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x1ull))));
}
B41e6de:{NFSU2_TR(0x41e6de);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B41e6e0:{NFSU2_TR(0x41e6e0);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B41e6e2:{NFSU2_TR(0x41e6e2);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B41e6e6:{NFSU2_TR(0x41e6e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B41e6e9:{NFSU2_TR(0x41e6e9);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffe0007ull))));
}
B41e6ee:{NFSU2_TR(0x41e6ee);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B41e6f0:{NFSU2_TR(0x41e6f0);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x7ull))));
}
B41e6f3:{NFSU2_TR(0x41e6f3);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B41e6f4:{NFSU2_TR(0x41e6f4);
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
B41e6f6:{NFSU2_TR(0x41e6f6);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B41e6fa:{NFSU2_TR(0x41e6fa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41e6b0u);}goto L41e6b0;}}
}
B41e6fc:L41e6fc:{c.instructions+=6;NFSU2_TR(0x41e6fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41e6fd:{NFSU2_TR(0x41e6fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41e6fe:{NFSU2_TR(0x41e6fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41e6ff:{NFSU2_TR(0x41e6ff);
__builtin_memmove((R+16),(R+20),4);
}
B41e701:{NFSU2_TR(0x41e701);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41e702:{NFSU2_TR(0x41e702);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41e710:L41e710:{c.instructions+=14;NFSU2_TR(0x41e710);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e712:{NFSU2_TR(0x41e712);
u8 U[4];
w4(U+0,u32(0x7715f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e717:{NFSU2_TR(0x41e717);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41e71d:{NFSU2_TR(0x41e71d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e71e:{NFSU2_TR(0x41e71e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41e725:{NFSU2_TR(0x41e725);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e726:{NFSU2_TR(0x41e726);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e727:{NFSU2_TR(0x41e727);
__builtin_memmove((R+24),(R+4),4);
}
B41e729:{NFSU2_TR(0x41e729);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41e72d:{NFSU2_TR(0x41e72d);
u8 U[4];
w4(U+0,u32(0x785428ull));
s4(u32(r4(R+24)),r4(U+0));
}
B41e733:{NFSU2_TR(0x41e733);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41e739:{NFSU2_TR(0x41e739);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41e73b:{NFSU2_TR(0x41e73b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41e743:{NFSU2_TR(0x41e743);
if(r1(R+518)){{goto L41e74b;}}
}
B41e745:L41e745:{c.instructions+=1;NFSU2_TR(0x41e745);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))-u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B41e74b:L41e74b:{c.instructions+=3;NFSU2_TR(0x41e74b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41e74e:{NFSU2_TR(0x41e74e);
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
B41e750:{NFSU2_TR(0x41e750);
if(r1(R+518)){{goto L41e758;}}
}
B41e752:L41e752:{c.instructions+=3;NFSU2_TR(0x41e752);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41e754:{NFSU2_TR(0x41e754);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e756:{NFSU2_TR(0x41e756);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e758ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B41e758:L41e758:{c.instructions+=3;NFSU2_TR(0x41e758);
__builtin_memmove((R+4),(R+24),4);
}
B41e75a:{NFSU2_TR(0x41e75a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B41e762:{NFSU2_TR(0x41e762);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e767ull));
TAIL_STATIC(0x41be00u,41b);
}
B41e767:L41e767:{c.instructions+=5;NFSU2_TR(0x41e767);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41e76b:{NFSU2_TR(0x41e76b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41e76c:{NFSU2_TR(0x41e76c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41e773:{NFSU2_TR(0x41e773);
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
B41e776:{NFSU2_TR(0x41e776);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41e780:L41e780:{c.instructions+=2;NFSU2_TR(0x41e780);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x799ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B41e787:{NFSU2_TR(0x41e787);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41e790:L41e790:{c.instructions+=3;NFSU2_TR(0x41e790);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41e796:{NFSU2_TR(0x41e796);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41e798:{NFSU2_TR(0x41e798);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B41e7a0:L41e7a0:{c.instructions+=5;NFSU2_TR(0x41e7a0);
{u32 ea_=u32(r4(R+4)+u32(1948u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41e7a6:{NFSU2_TR(0x41e7a6);
{u32 ea_=u32(u32(7882148u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B41e7ac:{NFSU2_TR(0x41e7ac);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41e7ae:{NFSU2_TR(0x41e7ae);
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
B41e7b1:{NFSU2_TR(0x41e7b1);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L41e7bb;}}
}
B41e7b3:L41e7b3:{c.instructions+=2;NFSU2_TR(0x41e7b3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41e7b5:{NFSU2_TR(0x41e7b5);
{u32 ea_=u32(u32(7882148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41e7bb:L41e7bb:{c.instructions+=1;NFSU2_TR(0x41e7bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41e7c0:L41e7c0:{c.instructions+=11;NFSU2_TR(0x41e7c0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e7c2:{NFSU2_TR(0x41e7c2);
u8 U[4];
w4(U+0,u32(0x771644ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e7c7:{NFSU2_TR(0x41e7c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41e7cd:{NFSU2_TR(0x41e7cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e7ce:{NFSU2_TR(0x41e7ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41e7d5:{NFSU2_TR(0x41e7d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e7d6:{NFSU2_TR(0x41e7d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e7d7:{NFSU2_TR(0x41e7d7);
__builtin_memmove((R+24),(R+4),4);
}
B41e7d9:{NFSU2_TR(0x41e7d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41e7dd:{NFSU2_TR(0x41e7dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41e7e5:{NFSU2_TR(0x41e7e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e7eaull));
TAIL_STATIC(0x41abc0u,41a);
}
B41e7ea:L41e7ea:{c.instructions+=7;NFSU2_TR(0x41e7ea);
u8 U[4];
w4(U+0,u32(0x50f7d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e7ef:{NFSU2_TR(0x41e7ef);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e7f1:{NFSU2_TR(0x41e7f1);
u8 U[4];
w4(U+0,u32(0x920ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e7f6:{NFSU2_TR(0x41e7f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x910ull))));
__builtin_memmove((R+0),(U+0),4);
}
B41e7fc:{NFSU2_TR(0x41e7fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e7fd:{NFSU2_TR(0x41e7fd);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41e802:{NFSU2_TR(0x41e802);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e807ull));
TAIL_STATIC(0x75c401u,75c);
}
B41e807:L41e807:{c.instructions+=3;NFSU2_TR(0x41e807);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41e80d:{NFSU2_TR(0x41e80d);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41e812:{NFSU2_TR(0x41e812);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e817ull));
TAIL_STATIC(0x413350u,413);
}
B41e817:L41e817:{c.instructions+=3;NFSU2_TR(0x41e817);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x394ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41e81d:{NFSU2_TR(0x41e81d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B41e825:{NFSU2_TR(0x41e825);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e82aull));
TAIL_STATIC(0x4022c0u,402);
}
B41e82a:L41e82a:{c.instructions+=5;NFSU2_TR(0x41e82a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41e82e:{NFSU2_TR(0x41e82e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41e82f:{NFSU2_TR(0x41e82f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41e836:{NFSU2_TR(0x41e836);
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
B41e839:{NFSU2_TR(0x41e839);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41e840:L41e840:{c.instructions+=3;NFSU2_TR(0x41e840);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e841:{NFSU2_TR(0x41e841);
__builtin_memmove((R+24),(R+4),4);
}
B41e843:{NFSU2_TR(0x41e843);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e848ull));
TAIL_STATIC(0x4184f0u,418);
}
B41e848:L41e848:{c.instructions+=2;NFSU2_TR(0x41e848);
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
B41e84d:{NFSU2_TR(0x41e84d);
if(r1(R+518)){{goto L41e858;}}
}
B41e84f:L41e84f:{c.instructions+=2;NFSU2_TR(0x41e84f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e850:{NFSU2_TR(0x41e850);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e855ull));
TAIL_STATIC(0x575630u,575);
}
B41e855:L41e855:{c.instructions+=1;NFSU2_TR(0x41e855);
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
B41e858:L41e858:{c.instructions+=3;NFSU2_TR(0x41e858);
__builtin_memmove((R+0),(R+24),4);
}
B41e85a:{NFSU2_TR(0x41e85a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41e85b:{NFSU2_TR(0x41e85b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41e860:L41e860:{c.instructions+=11;NFSU2_TR(0x41e860);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e861:{NFSU2_TR(0x41e861);
__builtin_memmove((R+20),(R+16),4);
}
B41e863:{NFSU2_TR(0x41e863);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B41e866:{NFSU2_TR(0x41e866);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B41e869:{NFSU2_TR(0x41e869);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e86a:{NFSU2_TR(0x41e86a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e86b:{NFSU2_TR(0x41e86b);
__builtin_memmove((R+12),(R+4),4);
}
B41e86d:{NFSU2_TR(0x41e86d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41e870:{NFSU2_TR(0x41e870);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e871:{NFSU2_TR(0x41e871);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e872:{NFSU2_TR(0x41e872);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e877ull));
TAIL_STATIC(0x4116a0u,411);
}
B41e877:L41e877:{c.instructions+=8;NFSU2_TR(0x41e877);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41e87a:{NFSU2_TR(0x41e87a);
__builtin_memmove((R+24),(R+0),4);
}
B41e87c:{NFSU2_TR(0x41e87c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41e87f:{NFSU2_TR(0x41e87f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41e883:{NFSU2_TR(0x41e883);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B41e885:{NFSU2_TR(0x41e885);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41e887:{NFSU2_TR(0x41e887);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41e88b:{NFSU2_TR(0x41e88b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41e896;}}
}
B41e88d:L41e88d:{c.instructions+=2;NFSU2_TR(0x41e88d);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x115ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B41e894:{NFSU2_TR(0x41e894);
{goto L41e8b7;}
}
B41e896:L41e896:{c.instructions+=11;NFSU2_TR(0x41e896);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x115ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B41e89d:{NFSU2_TR(0x41e89d);
u8 U[4];
w4(U+0,u32(0x3dcccccdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e8a2:{NFSU2_TR(0x41e8a2);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B41e8a5:{NFSU2_TR(0x41e8a5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e8a6:{NFSU2_TR(0x41e8a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e8a7:{NFSU2_TR(0x41e8a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B41e8aa:{NFSU2_TR(0x41e8aa);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B41e8ac:{NFSU2_TR(0x41e8ac);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e8ae:{NFSU2_TR(0x41e8ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e8af:{NFSU2_TR(0x41e8af);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41e8b2:{NFSU2_TR(0x41e8b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e8b7ull));
TAIL_STATIC(0x4198c0u,419);
}
B41e8b7:L41e8b7:{c.instructions+=2;NFSU2_TR(0x41e8b7);
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
B41e8b9:{NFSU2_TR(0x41e8b9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41ea1a;}}
}
B41e8bf:L41e8bf:{c.instructions+=4;NFSU2_TR(0x41e8bf);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B41e8c3:{NFSU2_TR(0x41e8c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41e8c7:{NFSU2_TR(0x41e8c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41e8cb:{NFSU2_TR(0x41e8cb);
{goto L41e8d0;}
}
B41e8d0:L41e8d0:{c.instructions+=6;NFSU2_TR(0x41e8d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41e8d4:{NFSU2_TR(0x41e8d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B41e8d6:{NFSU2_TR(0x41e8d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41e8d8:{NFSU2_TR(0x41e8d8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e8d9:{NFSU2_TR(0x41e8d9);
__builtin_memmove((R+4),(R+28),4);
}
B41e8db:{NFSU2_TR(0x41e8db);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e8deull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41e8de:L41e8de:{c.instructions+=5;NFSU2_TR(0x41e8de);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41e8e2:{NFSU2_TR(0x41e8e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41e8e4:{NFSU2_TR(0x41e8e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e8e5:{NFSU2_TR(0x41e8e5);
__builtin_memmove((R+4),(R+28),4);
}
B41e8e7:{NFSU2_TR(0x41e8e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e8eaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41e8ea:L41e8ea:{c.instructions+=5;NFSU2_TR(0x41e8ea);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41e8ee:{NFSU2_TR(0x41e8ee);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B41e8f0:{NFSU2_TR(0x41e8f0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41e8f2:{NFSU2_TR(0x41e8f2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41e8f5:{NFSU2_TR(0x41e8f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41e8fd;}}
}
B41e8f7:L41e8f7:{c.instructions+=2;NFSU2_TR(0x41e8f7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41e8f9:{NFSU2_TR(0x41e8f9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41e8fd:L41e8fd:{c.instructions+=5;NFSU2_TR(0x41e8fd);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41e901:{NFSU2_TR(0x41e901);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B41e903:{NFSU2_TR(0x41e903);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41e905:{NFSU2_TR(0x41e905);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41e908:{NFSU2_TR(0x41e908);
if(r1(R+514)){{goto L41e916;}}
}
B41e90a:L41e90a:{c.instructions+=4;NFSU2_TR(0x41e90a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41e90e:{NFSU2_TR(0x41e90e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41e910:{NFSU2_TR(0x41e910);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41e914:{NFSU2_TR(0x41e914);
{goto L41e91a;}
}
B41e916:L41e916:{c.instructions+=1;NFSU2_TR(0x41e916);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41e91a:L41e91a:{c.instructions+=10;NFSU2_TR(0x41e91a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41e91e:{NFSU2_TR(0x41e91e);
{u32 ea_=u32(r4(R+28)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41e921:{NFSU2_TR(0x41e921);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e922:{NFSU2_TR(0x41e922);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e923:{NFSU2_TR(0x41e923);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e924:{NFSU2_TR(0x41e924);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B41e928:{NFSU2_TR(0x41e928);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41e92b:{NFSU2_TR(0x41e92b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e92c:{NFSU2_TR(0x41e92c);
__builtin_memmove((R+4),(R+28),4);
}
B41e92e:{NFSU2_TR(0x41e92e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e933ull));
TAIL_STATIC(0x4122c0u,412);
}
B41e933:L41e933:{c.instructions+=3;NFSU2_TR(0x41e933);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B41e937:{NFSU2_TR(0x41e937);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B41e93b:{NFSU2_TR(0x41e93b);
if(r1(R+518)){{goto L41e975;}}
}
B41e93d:L41e93d:{c.instructions+=3;NFSU2_TR(0x41e93d);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B41e941:{NFSU2_TR(0x41e941);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B41e945:{NFSU2_TR(0x41e945);
if(r1(R+518)){{goto L41e975;}}
}
B41e947:L41e947:{c.instructions+=3;NFSU2_TR(0x41e947);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B41e94a:{NFSU2_TR(0x41e94a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B41e94c:{NFSU2_TR(0x41e94c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41e964;}}
}
B41e94e:L41e94e:{c.instructions+=5;NFSU2_TR(0x41e94e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B41e955:{NFSU2_TR(0x41e955);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B41e958:{NFSU2_TR(0x41e958);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B41e95b:{NFSU2_TR(0x41e95b);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B41e962:{NFSU2_TR(0x41e962);
{goto L41e977;}
}
B41e964:L41e964:{c.instructions+=5;NFSU2_TR(0x41e964);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B41e967:{NFSU2_TR(0x41e967);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B41e969:{NFSU2_TR(0x41e969);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B41e96c:{NFSU2_TR(0x41e96c);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B41e973:{NFSU2_TR(0x41e973);
{goto L41e977;}
}
B41e975:L41e975:{c.instructions+=1;NFSU2_TR(0x41e975);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B41e977:L41e977:{c.instructions+=3;NFSU2_TR(0x41e977);
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
B41e979:{NFSU2_TR(0x41e979);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41e97c:{NFSU2_TR(0x41e97c);
if(r1(R+518)){{goto L41e9a7;}}
}
B41e97e:L41e97e:{c.instructions+=7;NFSU2_TR(0x41e97e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41e982:{NFSU2_TR(0x41e982);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B41e985:{NFSU2_TR(0x41e985);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e986:{NFSU2_TR(0x41e986);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e988:{NFSU2_TR(0x41e988);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e989:{NFSU2_TR(0x41e989);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x7ffull))));
}
B41e98f:{NFSU2_TR(0x41e98f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e994ull));
TAIL_STATIC(0x5d89b0u,5d8);
}
B41e994:L41e994:{c.instructions+=6;NFSU2_TR(0x41e994);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41e997:{NFSU2_TR(0x41e997);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e998:{NFSU2_TR(0x41e998);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e999:{NFSU2_TR(0x41e999);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41e99d:{NFSU2_TR(0x41e99d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41e99e:{NFSU2_TR(0x41e99e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e9a3ull));
TAIL_STATIC(0x404cd0u,404);
}
B41e9a3:L41e9a3:{c.instructions+=1;NFSU2_TR(0x41e9a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B41e9a7:L41e9a7:{c.instructions+=3;NFSU2_TR(0x41e9a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41e9a9:{NFSU2_TR(0x41e9a9);
__builtin_memmove((R+4),(R+28),4);
}
B41e9ab:{NFSU2_TR(0x41e9ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41e9aeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41e9ae:L41e9ae:{c.instructions+=6;NFSU2_TR(0x41e9ae);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41e9b2:{NFSU2_TR(0x41e9b2);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41e9b5:{NFSU2_TR(0x41e9b5);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41e9b8:{NFSU2_TR(0x41e9b8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41e9ba:{NFSU2_TR(0x41e9ba);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41e9bd:{NFSU2_TR(0x41e9bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41e9da;}}
}
B41e9bf:L41e9bf:{c.instructions+=6;NFSU2_TR(0x41e9bf);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B41e9c3:{NFSU2_TR(0x41e9c3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B41e9c7:{NFSU2_TR(0x41e9c7);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41e9ca:{NFSU2_TR(0x41e9ca);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41e9cc:{NFSU2_TR(0x41e9cc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41e9cf:{NFSU2_TR(0x41e9cf);
if(r1(R+518)){{goto L41e9f3;}}
}
B41e9d1:L41e9d1:{c.instructions+=3;NFSU2_TR(0x41e9d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41e9d4:{NFSU2_TR(0x41e9d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41e9d8:{NFSU2_TR(0x41e9d8);
{goto L41e9f3;}
}
B41e9da:L41e9da:{c.instructions+=6;NFSU2_TR(0x41e9da);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41e9de:{NFSU2_TR(0x41e9de);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B41e9e2:{NFSU2_TR(0x41e9e2);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41e9e5:{NFSU2_TR(0x41e9e5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41e9e7:{NFSU2_TR(0x41e9e7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41e9ea:{NFSU2_TR(0x41e9ea);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L41e9f3;}}
}
B41e9ec:L41e9ec:{c.instructions+=2;NFSU2_TR(0x41e9ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41e9ef:{NFSU2_TR(0x41e9ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41e9f3:L41e9f3:{c.instructions+=9;NFSU2_TR(0x41e9f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41e9f7:{NFSU2_TR(0x41e9f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41e9fb:{NFSU2_TR(0x41e9fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41e9fe:{NFSU2_TR(0x41e9fe);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B41e9ff:{NFSU2_TR(0x41e9ff);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B41ea02:{NFSU2_TR(0x41ea02);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B41ea04:{NFSU2_TR(0x41ea04);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ea08:{NFSU2_TR(0x41ea08);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ea0c:{NFSU2_TR(0x41ea0c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41ea1a;}}
}
B41ea0e:L41ea0e:{c.instructions+=3;NFSU2_TR(0x41ea0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41ea11:{NFSU2_TR(0x41ea11);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x14ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x14ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x14ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B41ea14:{NFSU2_TR(0x41ea14);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41e8d0u);}goto L41e8d0;}}
}
B41ea1a:L41ea1a:{c.instructions+=6;NFSU2_TR(0x41ea1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41ea1b:{NFSU2_TR(0x41ea1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41ea1c:{NFSU2_TR(0x41ea1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41ea1d:{NFSU2_TR(0x41ea1d);
__builtin_memmove((R+16),(R+20),4);
}
B41ea1f:{NFSU2_TR(0x41ea1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41ea20:{NFSU2_TR(0x41ea20);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41ea30:L41ea30:{c.instructions+=5;NFSU2_TR(0x41ea30);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41ea34:{NFSU2_TR(0x41ea34);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3e4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ea3a:{NFSU2_TR(0x41ea3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41ea3e:{NFSU2_TR(0x41ea3e);
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
B41ea40:{NFSU2_TR(0x41ea40);
if(r1(R+518)){{goto L41ea4e;}}
}
B41ea42:L41ea42:{c.instructions+=3;NFSU2_TR(0x41ea42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ea43:{NFSU2_TR(0x41ea43);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3f0ull))));
}
B41ea49:{NFSU2_TR(0x41ea49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ea4eull));
TAIL_STATIC(0x40a2d0u,40a);
}
B41ea4e:L41ea4e:{c.instructions+=1;NFSU2_TR(0x41ea4e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41ea60:L41ea60:{c.instructions+=9;NFSU2_TR(0x41ea60);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ea61:{NFSU2_TR(0x41ea61);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ea62:{NFSU2_TR(0x41ea62);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ea63:{NFSU2_TR(0x41ea63);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ea64:{NFSU2_TR(0x41ea64);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ea65:{NFSU2_TR(0x41ea65);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41ea69:{NFSU2_TR(0x41ea69);
__builtin_memmove((R+12),(R+4),4);
}
B41ea6b:{NFSU2_TR(0x41ea6b);
__builtin_memmove((R+4),(R+28),4);
}
B41ea6d:{NFSU2_TR(0x41ea6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ea72ull));
TAIL_STATIC(0x411be0u,411);
}
B41ea72:L41ea72:{c.instructions+=16;NFSU2_TR(0x41ea72);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41ea78:{NFSU2_TR(0x41ea78);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41ea7e:{NFSU2_TR(0x41ea7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41ea84:{NFSU2_TR(0x41ea84);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ea8a:{NFSU2_TR(0x41ea8a);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B41ea90:{NFSU2_TR(0x41ea90);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41ea96:{NFSU2_TR(0x41ea96);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41ea9c:{NFSU2_TR(0x41ea9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41eaa2:{NFSU2_TR(0x41eaa2);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xadull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B41eaa8:{NFSU2_TR(0x41eaa8);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xadull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41eaae:{NFSU2_TR(0x41eaae);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41eab4:{NFSU2_TR(0x41eab4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41eaba:{NFSU2_TR(0x41eaba);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41eac0:{NFSU2_TR(0x41eac0);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B41eac2:{NFSU2_TR(0x41eac2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41eac4:{NFSU2_TR(0x41eac4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L41eafb;}}
}
B41eac6:L41eac6:{c.instructions+=5;NFSU2_TR(0x41eac6);
__builtin_memmove((R+0),(R+12),4);
}
B41eac8:{NFSU2_TR(0x41eac8);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B41eaca:{NFSU2_TR(0x41eaca);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41ead0:{NFSU2_TR(0x41ead0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ead4:{NFSU2_TR(0x41ead4);
{goto L41eae0;}
}
B41ead6:L41ead6:{c.instructions+=2;NFSU2_TR(0x41ead6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41eada:{NFSU2_TR(0x41eada);
__builtin_memmove((R+12),(R+12),4);
}
B41eae0:L41eae0:{c.instructions+=4;NFSU2_TR(0x41eae0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+24)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+24)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B41eae2:{NFSU2_TR(0x41eae2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41eae3:{NFSU2_TR(0x41eae3);
__builtin_memmove((R+4),(R+24),4);
}
B41eae5:{NFSU2_TR(0x41eae5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41eaeaull));
TAIL_STATIC(0x40a4d0u,40a);
}
B41eaea:L41eaea:{c.instructions+=5;NFSU2_TR(0x41eaea);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41eaf0:{NFSU2_TR(0x41eaf0);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B41eaf1:{NFSU2_TR(0x41eaf1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x80ull))));
}
B41eaf7:{NFSU2_TR(0x41eaf7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41eaf9:{NFSU2_TR(0x41eaf9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41ead6u);}goto L41ead6;}}
}
B41eafb:L41eafb:{c.instructions+=14;NFSU2_TR(0x41eafb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41eb01:{NFSU2_TR(0x41eb01);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41eb07:{NFSU2_TR(0x41eb07);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41eb0d:{NFSU2_TR(0x41eb0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41eb13:{NFSU2_TR(0x41eb13);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41eb19:{NFSU2_TR(0x41eb19);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41eb1f:{NFSU2_TR(0x41eb1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41eb25:{NFSU2_TR(0x41eb25);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41eb2b:{NFSU2_TR(0x41eb2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41eb31:{NFSU2_TR(0x41eb31);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41eb37:{NFSU2_TR(0x41eb37);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41eb3a:{NFSU2_TR(0x41eb3a);
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
B41eb3c:{NFSU2_TR(0x41eb3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41eb44:{NFSU2_TR(0x41eb44);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L41ec12;}}
}
B41eb4a:L41eb4a:{c.instructions+=2;NFSU2_TR(0x41eb4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B41eb4d:{NFSU2_TR(0x41eb4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41eb51:L41eb51:{c.instructions+=6;NFSU2_TR(0x41eb51);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41eb55:{NFSU2_TR(0x41eb55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B41eb57:{NFSU2_TR(0x41eb57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41eb59:{NFSU2_TR(0x41eb59);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41eb5b:{NFSU2_TR(0x41eb5b);
__builtin_memmove((R+4),(R+24),4);
}
B41eb5d:{NFSU2_TR(0x41eb5d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41eb60ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41eb60:L41eb60:{c.instructions+=17;NFSU2_TR(0x41eb60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41eb63:{NFSU2_TR(0x41eb63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41eb66:{NFSU2_TR(0x41eb66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41eb67:{NFSU2_TR(0x41eb67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41eb6a:{NFSU2_TR(0x41eb6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41eb6b:{NFSU2_TR(0x41eb6b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41eb6c:{NFSU2_TR(0x41eb6c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41eb6d:{NFSU2_TR(0x41eb6d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B41eb71:{NFSU2_TR(0x41eb71);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B41eb74:{NFSU2_TR(0x41eb74);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41eb75:{NFSU2_TR(0x41eb75);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B41eb79:{NFSU2_TR(0x41eb79);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41eb7c:{NFSU2_TR(0x41eb7c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41eb7d:{NFSU2_TR(0x41eb7d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41eb7e:{NFSU2_TR(0x41eb7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41eb7f:{NFSU2_TR(0x41eb7f);
__builtin_memmove((R+4),(R+28),4);
}
B41eb81:{NFSU2_TR(0x41eb81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41eb86ull));
TAIL_STATIC(0x418a50u,418);
}
B41eb86:L41eb86:{c.instructions+=47;NFSU2_TR(0x41eb86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41eb89:{NFSU2_TR(0x41eb89);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41eb8c:{NFSU2_TR(0x41eb8c);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B41eb90:{NFSU2_TR(0x41eb90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41eb93:{NFSU2_TR(0x41eb93);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41eb96:{NFSU2_TR(0x41eb96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+20),(U+0),4);
}
B41eb98:{NFSU2_TR(0x41eb98);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((R+8),(U+0),4);
}
B41eb9b:{NFSU2_TR(0x41eb9b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+8)),r4(U+0));
}
B41eb9d:{NFSU2_TR(0x41eb9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B41eba0:{NFSU2_TR(0x41eba0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41eba3:{NFSU2_TR(0x41eba3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B41eba6:{NFSU2_TR(0x41eba6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41eba9:{NFSU2_TR(0x41eba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41ebac:{NFSU2_TR(0x41ebac);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ebaf:{NFSU2_TR(0x41ebaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41ebb2:{NFSU2_TR(0x41ebb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ebb5:{NFSU2_TR(0x41ebb5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+4),(U+0),4);
}
B41ebb8:{NFSU2_TR(0x41ebb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+20),(U+0),4);
}
B41ebba:{NFSU2_TR(0x41ebba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((R+8),(U+0),4);
}
B41ebbd:{NFSU2_TR(0x41ebbd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+8)),r4(U+0));
}
B41ebbf:{NFSU2_TR(0x41ebbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B41ebc2:{NFSU2_TR(0x41ebc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ebc5:{NFSU2_TR(0x41ebc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B41ebc8:{NFSU2_TR(0x41ebc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ebcb:{NFSU2_TR(0x41ebcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41ebce:{NFSU2_TR(0x41ebce);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ebd1:{NFSU2_TR(0x41ebd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41ebd4:{NFSU2_TR(0x41ebd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ebd7:{NFSU2_TR(0x41ebd7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x44ull))));
}
B41ebda:{NFSU2_TR(0x41ebda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B41ebdc:{NFSU2_TR(0x41ebdc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
}
B41ebdf:{NFSU2_TR(0x41ebdf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B41ebe1:{NFSU2_TR(0x41ebe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41ebe4:{NFSU2_TR(0x41ebe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ebe7:{NFSU2_TR(0x41ebe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41ebea:{NFSU2_TR(0x41ebea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ebed:{NFSU2_TR(0x41ebed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41ebf0:{NFSU2_TR(0x41ebf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ebf3:{NFSU2_TR(0x41ebf3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41ebf7:{NFSU2_TR(0x41ebf7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41ebfb:{NFSU2_TR(0x41ebfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41ebfe:{NFSU2_TR(0x41ebfe);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B41ebff:{NFSU2_TR(0x41ebff);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B41ec02:{NFSU2_TR(0x41ec02);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B41ec04:{NFSU2_TR(0x41ec04);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ec08:{NFSU2_TR(0x41ec08);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ec0c:{NFSU2_TR(0x41ec0c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41eb51u);}goto L41eb51;}}
}
B41ec12:L41ec12:{c.instructions+=6;NFSU2_TR(0x41ec12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41ec13:{NFSU2_TR(0x41ec13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41ec14:{NFSU2_TR(0x41ec14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41ec15:{NFSU2_TR(0x41ec15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41ec16:{NFSU2_TR(0x41ec16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41ec17:{NFSU2_TR(0x41ec17);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41ec20:L41ec20:{c.instructions+=10;NFSU2_TR(0x41ec20);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ec21:{NFSU2_TR(0x41ec21);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41ec25:{NFSU2_TR(0x41ec25);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ec26:{NFSU2_TR(0x41ec26);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ec27:{NFSU2_TR(0x41ec27);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ec28:{NFSU2_TR(0x41ec28);
__builtin_memmove((R+20),(R+4),4);
}
B41ec2a:{NFSU2_TR(0x41ec2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B41ec2c:{NFSU2_TR(0x41ec2c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ec2d:{NFSU2_TR(0x41ec2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41ec35:{NFSU2_TR(0x41ec35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ec3aull));
TAIL_STATIC(0x5d4380u,5d4);
}
B41ec3a:L41ec3a:{c.instructions+=3;NFSU2_TR(0x41ec3a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41ec3c:{NFSU2_TR(0x41ec3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B41ec40:{NFSU2_TR(0x41ec40);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L41ed18;}}
}
B41ec46:L41ec46:{c.instructions+=5;NFSU2_TR(0x41ec46);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41ec4a:{NFSU2_TR(0x41ec4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41ec4e:{NFSU2_TR(0x41ec4e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ec4f:{NFSU2_TR(0x41ec4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B41ec51:{NFSU2_TR(0x41ec51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ec56ull));
TAIL_STATIC(0x5d43c0u,5d4);
}
B41ec56:L41ec56:{c.instructions+=6;NFSU2_TR(0x41ec56);
__builtin_memmove((R+24),(R+0),4);
}
B41ec58:{NFSU2_TR(0x41ec58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41ec5b:{NFSU2_TR(0x41ec5b);
__builtin_memmove((R+4),(R+0),1);
}
B41ec5d:{NFSU2_TR(0x41ec5d);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B41ec60:{NFSU2_TR(0x41ec60);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B41ec63:{NFSU2_TR(0x41ec63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41ec77;}}
}
B41ec65:L41ec65:{c.instructions+=6;NFSU2_TR(0x41ec65);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+4),(U+0),1);
}
B41ec67:{NFSU2_TR(0x41ec67);
__builtin_memmove((R+8),(R+0),4);
}
B41ec69:{NFSU2_TR(0x41ec69);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B41ec6c:{NFSU2_TR(0x41ec6c);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x1ull))));
}
B41ec6f:{NFSU2_TR(0x41ec6f);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+4))));
w1(R+518,u8((r1(R+8))==(u8(0x0ull))));
}
B41ec71:{NFSU2_TR(0x41ec71);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41ed4a;}}
}
B41ec77:L41ec77:{c.instructions+=3;NFSU2_TR(0x41ec77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41ec7a:{NFSU2_TR(0x41ec7a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41ec7c:{NFSU2_TR(0x41ec7c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L41ec88;}}
}
B41ec7e:L41ec7e:{c.instructions+=3;NFSU2_TR(0x41ec7e);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B41ec82:{NFSU2_TR(0x41ec82);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ec86:{NFSU2_TR(0x41ec86);
{goto L41ec94;}
}
B41ec88:L41ec88:{c.instructions+=2;NFSU2_TR(0x41ec88);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41ec90:{NFSU2_TR(0x41ec90);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41ec94:L41ec94:{c.instructions+=5;NFSU2_TR(0x41ec94);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+4),(U+0),1);
}
B41ec96:{NFSU2_TR(0x41ec96);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B41ec99:{NFSU2_TR(0x41ec99);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
}
B41ec9b:{NFSU2_TR(0x41ec9b);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
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
B41ec9d:{NFSU2_TR(0x41ec9d);
if(r1(R+518)){{goto L41ecfc;}}
}
B41ec9f:L41ec9f:{c.instructions+=4;NFSU2_TR(0x41ec9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41eca3:{NFSU2_TR(0x41eca3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41eca5:{NFSU2_TR(0x41eca5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41eca6:{NFSU2_TR(0x41eca6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41eca9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41eca9:L41eca9:{c.instructions+=2;NFSU2_TR(0x41eca9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41ecab:{NFSU2_TR(0x41ecab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41ed5e;}}
}
B41ecb1:L41ecb1:{c.instructions+=4;NFSU2_TR(0x41ecb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41ecb4:{NFSU2_TR(0x41ecb4);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B41ecb7:{NFSU2_TR(0x41ecb7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41ecba:{NFSU2_TR(0x41ecba);
if(r1(R+518)){{goto L41ece0;}}
}
B41ecbc:L41ecbc:{c.instructions+=3;NFSU2_TR(0x41ecbc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41ecc2:{NFSU2_TR(0x41ecc2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41ecc4:{NFSU2_TR(0x41ecc4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41ece0;}}
}
B41ecc6:L41ecc6:{c.instructions+=2;NFSU2_TR(0x41ecc6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41ecc8:{NFSU2_TR(0x41ecc8);
if(r1(R+518)){{goto L41ecfc;}}
}
B41ecca:L41ecca:{c.instructions+=6;NFSU2_TR(0x41ecca);
{u32 ea_=u32(r4(R+28)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41eccd:{NFSU2_TR(0x41eccd);
{u32 ea_=u32(r4(R+20)+u32(852u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41ecd3:{NFSU2_TR(0x41ecd3);
{u32 ea_=u32(u32(7879780u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41ecd9:{NFSU2_TR(0x41ecd9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41ecdb:{NFSU2_TR(0x41ecdb);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41ecde:{NFSU2_TR(0x41ecde);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41ecfc;}}
}
B41ece0:L41ece0:{c.instructions+=9;NFSU2_TR(0x41ece0);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41ece4:{NFSU2_TR(0x41ece4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B41ece6:{NFSU2_TR(0x41ece6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B41ecec:{NFSU2_TR(0x41ecec);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B41ecee:{NFSU2_TR(0x41ecee);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+0),(U+0),1);
}
B41ecf0:{NFSU2_TR(0x41ecf0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ecf1:{NFSU2_TR(0x41ecf1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ecf2:{NFSU2_TR(0x41ecf2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ecf3:{NFSU2_TR(0x41ecf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ecf8ull));
TAIL_STATIC(0x41cfa0u,41c);
}
B41ecf8:L41ecf8:{c.instructions+=2;NFSU2_TR(0x41ecf8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41ecfa:{NFSU2_TR(0x41ecfa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41ed5e;}}
}
B41ecfc:L41ecfc:{c.instructions+=6;NFSU2_TR(0x41ecfc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B41ed00:{NFSU2_TR(0x41ed00);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41ed04:{NFSU2_TR(0x41ed04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B41ed06:{NFSU2_TR(0x41ed06);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B41ed07:{NFSU2_TR(0x41ed07);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ed0b:{NFSU2_TR(0x41ed0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ed10ull));
TAIL_STATIC(0x5d4380u,5d4);
}
B41ed10:L41ed10:{c.instructions+=2;NFSU2_TR(0x41ed10);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41ed12:{NFSU2_TR(0x41ed12);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41ec46u);}goto L41ec46;}}
}
B41ed18:L41ed18:{c.instructions+=6;NFSU2_TR(0x41ed18);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41ed1c:{NFSU2_TR(0x41ed1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B41ed20:{NFSU2_TR(0x41ed20);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+8)),r4(U+0));
}
B41ed26:{NFSU2_TR(0x41ed26);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B41ed29:{NFSU2_TR(0x41ed29);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41ed2d:{NFSU2_TR(0x41ed2d);
if(r1(R+518)){{goto L41edeb;}}
}
B41ed33:L41ed33:{c.instructions+=9;NFSU2_TR(0x41ed33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B41ed35:{NFSU2_TR(0x41ed35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B41ed37:{NFSU2_TR(0x41ed37);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B41ed38:{NFSU2_TR(0x41ed38);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B41ed3a:{NFSU2_TR(0x41ed3a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B41ed3e:{NFSU2_TR(0x41ed3e);
__builtin_memmove((R+8),(R+12),4);
}
B41ed40:{NFSU2_TR(0x41ed40);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41ed42:{NFSU2_TR(0x41ed42);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
__builtin_memmove((R+4),(U+0),1);
}
B41ed45:{NFSU2_TR(0x41ed45);
{goto L41edf0;}
}
B41ed4a:L41ed4a:{c.instructions+=2;NFSU2_TR(0x41ed4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41ed4e:{NFSU2_TR(0x41ed4e);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+8)),r4(U+0));
}
B41ed54:L41ed54:{c.instructions+=7;NFSU2_TR(0x41ed54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41ed55:{NFSU2_TR(0x41ed55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41ed56:{NFSU2_TR(0x41ed56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41ed57:{NFSU2_TR(0x41ed57);
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
B41ed59:{NFSU2_TR(0x41ed59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41ed5a:{NFSU2_TR(0x41ed5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41ed5b:{NFSU2_TR(0x41ed5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41ed5e:L41ed5e:{c.instructions+=2;NFSU2_TR(0x41ed5e);
__builtin_memmove((R+4),(R+24),4);
}
B41ed60:{NFSU2_TR(0x41ed60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ed65ull));
TAIL_STATIC(0x5d86a0u,5d8);
}
B41ed65:L41ed65:{c.instructions+=4;NFSU2_TR(0x41ed65);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41ed69:{NFSU2_TR(0x41ed69);
__builtin_memmove((R+4),(R+24),4);
}
B41ed6b:{NFSU2_TR(0x41ed6b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B41ed6d:{NFSU2_TR(0x41ed6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ed72ull));
TAIL_STATIC(0x5d86d0u,5d8);
}
B41ed72:L41ed72:{c.instructions+=26;NFSU2_TR(0x41ed72);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41ed76:{NFSU2_TR(0x41ed76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B41ed78:{NFSU2_TR(0x41ed78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+0))));
}
B41ed7a:{NFSU2_TR(0x41ed7a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x8cull))));
}
B41ed7f:{NFSU2_TR(0x41ed7f);
__builtin_memmove((R+4),(R+0),4);
}
B41ed81:{NFSU2_TR(0x41ed81);
w4(R+0,u32(0x92492493ull));
}
B41ed86:{NFSU2_TR(0x41ed86);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B41ed88:{NFSU2_TR(0x41ed88);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B41ed8a:{NFSU2_TR(0x41ed8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41ed8e:{NFSU2_TR(0x41ed8e);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B41ed91:{NFSU2_TR(0x41ed91);
__builtin_memmove((R+0),(R+8),4);
}
B41ed93:{NFSU2_TR(0x41ed93);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B41ed96:{NFSU2_TR(0x41ed96);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B41ed98:{NFSU2_TR(0x41ed98);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B41ed9a:{NFSU2_TR(0x41ed9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41ed9d:{NFSU2_TR(0x41ed9d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+0),(U+0),1);
}
B41ed9f:{NFSU2_TR(0x41ed9f);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B41eda2:{NFSU2_TR(0x41eda2);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x1ull))));
}
B41eda5:{NFSU2_TR(0x41eda5);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+8))));
}
B41eda7:{NFSU2_TR(0x41eda7);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+12)),r1(U+0));
}
B41eda9:{NFSU2_TR(0x41eda9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41edad:{NFSU2_TR(0x41edad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B41edaf:{NFSU2_TR(0x41edaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41edb2:{NFSU2_TR(0x41edb2);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B41edb5:{NFSU2_TR(0x41edb5);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41edb8:{NFSU2_TR(0x41edb8);
if(r1(R+518)){{goto L41ee0c;}}
}
B41edba:L41edba:{c.instructions+=3;NFSU2_TR(0x41edba);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41edbe:{NFSU2_TR(0x41edbe);
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
B41edc0:{NFSU2_TR(0x41edc0);
if(r1(R+518)){{goto L41edd5;}}
}
B41edc2:L41edc2:{c.instructions+=9;NFSU2_TR(0x41edc2);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41edc5:{NFSU2_TR(0x41edc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41edc6:{NFSU2_TR(0x41edc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41edc7:{NFSU2_TR(0x41edc7);
{u32 ea_=u32(r4(R+20)+u32(852u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41edcd:{NFSU2_TR(0x41edcd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41edce:{NFSU2_TR(0x41edce);
w1(R+0,u8(0x1ull));
}
B41edd0:{NFSU2_TR(0x41edd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41edd1:{NFSU2_TR(0x41edd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41edd2:{NFSU2_TR(0x41edd2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41edd5:L41edd5:{c.instructions+=9;NFSU2_TR(0x41edd5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41eddb:{NFSU2_TR(0x41eddb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41eddc:{NFSU2_TR(0x41eddc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41eddd:{NFSU2_TR(0x41eddd);
{u32 ea_=u32(r4(R+20)+u32(852u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41ede3:{NFSU2_TR(0x41ede3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41ede4:{NFSU2_TR(0x41ede4);
w1(R+0,u8(0x1ull));
}
B41ede6:{NFSU2_TR(0x41ede6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41ede7:{NFSU2_TR(0x41ede7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41ede8:{NFSU2_TR(0x41ede8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41edeb:L41edeb:{c.instructions+=2;NFSU2_TR(0x41edeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))-u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B41eded:{NFSU2_TR(0x41eded);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
__builtin_memmove((R+4),(U+0),1);
}
B41edf0:L41edf0:{c.instructions+=2;NFSU2_TR(0x41edf0);
u8 U[4];
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41edf2:{NFSU2_TR(0x41edf2);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41ed54u);}goto L41ed54;}}
}
B41edf8:L41edf8:{c.instructions+=6;NFSU2_TR(0x41edf8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41edfa:{NFSU2_TR(0x41edfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41edfc:{NFSU2_TR(0x41edfc);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(s64(s32(u32(0x38ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+8)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B41edff:{NFSU2_TR(0x41edff);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B41ee06:{NFSU2_TR(0x41ee06);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41ee0a:{NFSU2_TR(0x41ee0a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B41ee0c:L41ee0c:{c.instructions+=7;NFSU2_TR(0x41ee0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41ee0d:{NFSU2_TR(0x41ee0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41ee0e:{NFSU2_TR(0x41ee0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41ee0f:{NFSU2_TR(0x41ee0f);
w1(R+0,u8(0x1ull));
}
B41ee11:{NFSU2_TR(0x41ee11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41ee12:{NFSU2_TR(0x41ee12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41ee13:{NFSU2_TR(0x41ee13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41ee20:L41ee20:{c.instructions+=13;NFSU2_TR(0x41ee20);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ee21:{NFSU2_TR(0x41ee21);
__builtin_memmove((R+20),(R+16),4);
}
B41ee23:{NFSU2_TR(0x41ee23);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B41ee26:{NFSU2_TR(0x41ee26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xb4ull))));
}
B41ee2c:{NFSU2_TR(0x41ee2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41ee2f:{NFSU2_TR(0x41ee2f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ee30:{NFSU2_TR(0x41ee30);
__builtin_memmove((R+12),(R+4),4);
}
B41ee32:{NFSU2_TR(0x41ee32);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41ee35:{NFSU2_TR(0x41ee35);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ee36:{NFSU2_TR(0x41ee36);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ee37:{NFSU2_TR(0x41ee37);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B41ee3a:{NFSU2_TR(0x41ee3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ee3e:{NFSU2_TR(0x41ee3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ee43ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B41ee43:L41ee43:{c.instructions+=8;NFSU2_TR(0x41ee43);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41ee46:{NFSU2_TR(0x41ee46);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B41ee4a:{NFSU2_TR(0x41ee4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41ee4d:{NFSU2_TR(0x41ee4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41ee4f:{NFSU2_TR(0x41ee4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ee53:{NFSU2_TR(0x41ee53);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ee55:{NFSU2_TR(0x41ee55);
__builtin_memmove((R+4),(R+24),4);
}
B41ee57:{NFSU2_TR(0x41ee57);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ee5aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41ee5a:L41ee5a:{c.instructions+=4;NFSU2_TR(0x41ee5a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41ee5e:{NFSU2_TR(0x41ee5e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B41ee62:{NFSU2_TR(0x41ee62);
u8 U[6];
w1(R+512,u8((r2(R+0))<(u16(0xffffull))));
w1(R+523,sborrow<u16>(r2(R+0),u16(0xffffull)));
w2(U+4,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B41ee66:{NFSU2_TR(0x41ee66);
if(r1(R+518)){{goto L41eef1;}}
}
B41ee6c:L41ee6c:{c.instructions+=3;NFSU2_TR(0x41ee6c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B41ee70:{NFSU2_TR(0x41ee70);
u8 U[8];
__builtin_memmove((U+4),(R+4),2);
w1(R+512,u8((r2(U+4))<(u16(0xffffull))));
w1(R+523,sborrow<u16>(r2(U+4),u16(0xffffull)));
w2(U+6,u16(u32(r2(U+4))-u32(u16(0xffffull))));
w1(R+519,u8(s16(r2(U+6))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+6))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B41ee74:{NFSU2_TR(0x41ee74);
if(r1(R+518)){{goto L41eef1;}}
}
B41ee76:L41ee76:{c.instructions+=3;NFSU2_TR(0x41ee76);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B41ee79:{NFSU2_TR(0x41ee79);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B41ee7b:{NFSU2_TR(0x41ee7b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41ee86;}}
}
B41ee7d:L41ee7d:{c.instructions+=2;NFSU2_TR(0x41ee7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B41ee84:{NFSU2_TR(0x41ee84);
{goto L41ee88;}
}
B41ee86:L41ee86:{c.instructions+=1;NFSU2_TR(0x41ee86);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B41ee88:L41ee88:{c.instructions+=6;NFSU2_TR(0x41ee88);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B41ee8b:{NFSU2_TR(0x41ee8b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B41ee8e:{NFSU2_TR(0x41ee8e);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B41ee95:{NFSU2_TR(0x41ee95);
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
B41ee97:{NFSU2_TR(0x41ee97);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ee9b:{NFSU2_TR(0x41ee9b);
if(r1(R+518)){{goto L41eef1;}}
}
B41ee9d:L41ee9d:{c.instructions+=8;NFSU2_TR(0x41ee9d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41eea1:{NFSU2_TR(0x41eea1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41eea3:{NFSU2_TR(0x41eea3);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41eea6:{NFSU2_TR(0x41eea6);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41eea8:{NFSU2_TR(0x41eea8);
__builtin_memmove((R+4),(R+24),4);
}
B41eeaa:{NFSU2_TR(0x41eeaa);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41eead:{NFSU2_TR(0x41eead);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41eeb1:{NFSU2_TR(0x41eeb1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41eeb4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41eeb4:L41eeb4:{c.instructions+=7;NFSU2_TR(0x41eeb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41eeb7:{NFSU2_TR(0x41eeb7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41eebb:{NFSU2_TR(0x41eebb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B41eebd:{NFSU2_TR(0x41eebd);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41eec1:{NFSU2_TR(0x41eec1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41eec2:{NFSU2_TR(0x41eec2);
__builtin_memmove((R+4),(R+28),4);
}
B41eec4:{NFSU2_TR(0x41eec4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41eec9ull));
TAIL_STATIC(0x401c40u,401);
}
B41eec9:L41eec9:{c.instructions+=13;NFSU2_TR(0x41eec9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41eecd:{NFSU2_TR(0x41eecd);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41eed1:{NFSU2_TR(0x41eed1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41eed2:{NFSU2_TR(0x41eed2);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41eed6:{NFSU2_TR(0x41eed6);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41eeda:{NFSU2_TR(0x41eeda);
__builtin_memmove((R+4),(R+28),4);
}
B41eedc:{NFSU2_TR(0x41eedc);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41eedf:{NFSU2_TR(0x41eedf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41eee0:{NFSU2_TR(0x41eee0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41eee1:{NFSU2_TR(0x41eee1);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41eee5:{NFSU2_TR(0x41eee5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41eee6:{NFSU2_TR(0x41eee6);
__builtin_memmove((R+4),(R+24),4);
}
B41eee8:{NFSU2_TR(0x41eee8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41eeebull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41eeeb:L41eeeb:{c.instructions+=2;NFSU2_TR(0x41eeeb);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41eeef:{NFSU2_TR(0x41eeef);
{goto L41eeff;}
}
B41eef1:L41eef1:{c.instructions+=2;NFSU2_TR(0x41eef1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41eef7:{NFSU2_TR(0x41eef7);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41eeff:L41eeff:{c.instructions+=9;NFSU2_TR(0x41eeff);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41ef03:{NFSU2_TR(0x41ef03);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41ef07:{NFSU2_TR(0x41ef07);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ef0b:{NFSU2_TR(0x41ef0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41ef0e:{NFSU2_TR(0x41ef0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41ef10:{NFSU2_TR(0x41ef10);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ef12:{NFSU2_TR(0x41ef12);
__builtin_memmove((R+4),(R+24),4);
}
B41ef14:{NFSU2_TR(0x41ef14);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ef18:{NFSU2_TR(0x41ef18);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ef1bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41ef1b:L41ef1b:{c.instructions+=4;NFSU2_TR(0x41ef1b);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41ef1f:{NFSU2_TR(0x41ef1f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B41ef23:{NFSU2_TR(0x41ef23);
u8 U[6];
w1(R+512,u8((r2(R+0))<(u16(0xffffull))));
w1(R+523,sborrow<u16>(r2(R+0),u16(0xffffull)));
w2(U+4,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B41ef27:{NFSU2_TR(0x41ef27);
if(r1(R+518)){{goto L41efb2;}}
}
B41ef2d:L41ef2d:{c.instructions+=3;NFSU2_TR(0x41ef2d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B41ef31:{NFSU2_TR(0x41ef31);
u8 U[8];
__builtin_memmove((U+4),(R+4),2);
w1(R+512,u8((r2(U+4))<(u16(0xffffull))));
w1(R+523,sborrow<u16>(r2(U+4),u16(0xffffull)));
w2(U+6,u16(u32(r2(U+4))-u32(u16(0xffffull))));
w1(R+519,u8(s16(r2(U+6))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+6))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B41ef35:{NFSU2_TR(0x41ef35);
if(r1(R+518)){{goto L41efb2;}}
}
B41ef37:L41ef37:{c.instructions+=3;NFSU2_TR(0x41ef37);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B41ef3a:{NFSU2_TR(0x41ef3a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B41ef3c:{NFSU2_TR(0x41ef3c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41ef47;}}
}
B41ef3e:L41ef3e:{c.instructions+=2;NFSU2_TR(0x41ef3e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B41ef45:{NFSU2_TR(0x41ef45);
{goto L41ef49;}
}
B41ef47:L41ef47:{c.instructions+=1;NFSU2_TR(0x41ef47);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B41ef49:L41ef49:{c.instructions+=6;NFSU2_TR(0x41ef49);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B41ef4c:{NFSU2_TR(0x41ef4c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B41ef4f:{NFSU2_TR(0x41ef4f);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B41ef56:{NFSU2_TR(0x41ef56);
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
B41ef58:{NFSU2_TR(0x41ef58);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ef5c:{NFSU2_TR(0x41ef5c);
if(r1(R+518)){{goto L41efb2;}}
}
B41ef5e:L41ef5e:{c.instructions+=8;NFSU2_TR(0x41ef5e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41ef62:{NFSU2_TR(0x41ef62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41ef64:{NFSU2_TR(0x41ef64);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41ef67:{NFSU2_TR(0x41ef67);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ef69:{NFSU2_TR(0x41ef69);
__builtin_memmove((R+4),(R+24),4);
}
B41ef6b:{NFSU2_TR(0x41ef6b);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41ef6e:{NFSU2_TR(0x41ef6e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41ef72:{NFSU2_TR(0x41ef72);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ef75ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41ef75:L41ef75:{c.instructions+=7;NFSU2_TR(0x41ef75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41ef78:{NFSU2_TR(0x41ef78);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ef7c:{NFSU2_TR(0x41ef7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B41ef7e:{NFSU2_TR(0x41ef7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ef82:{NFSU2_TR(0x41ef82);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ef83:{NFSU2_TR(0x41ef83);
__builtin_memmove((R+4),(R+28),4);
}
B41ef85:{NFSU2_TR(0x41ef85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ef8aull));
TAIL_STATIC(0x401c40u,401);
}
B41ef8a:L41ef8a:{c.instructions+=13;NFSU2_TR(0x41ef8a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41ef8e:{NFSU2_TR(0x41ef8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41ef92:{NFSU2_TR(0x41ef92);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ef93:{NFSU2_TR(0x41ef93);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41ef97:{NFSU2_TR(0x41ef97);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41ef9b:{NFSU2_TR(0x41ef9b);
__builtin_memmove((R+4),(R+28),4);
}
B41ef9d:{NFSU2_TR(0x41ef9d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41efa0:{NFSU2_TR(0x41efa0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41efa1:{NFSU2_TR(0x41efa1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41efa2:{NFSU2_TR(0x41efa2);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41efa6:{NFSU2_TR(0x41efa6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41efa7:{NFSU2_TR(0x41efa7);
__builtin_memmove((R+4),(R+24),4);
}
B41efa9:{NFSU2_TR(0x41efa9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41efacull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41efac:L41efac:{c.instructions+=2;NFSU2_TR(0x41efac);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41efb0:{NFSU2_TR(0x41efb0);
{goto L41efc0;}
}
B41efb2:L41efb2:{c.instructions+=2;NFSU2_TR(0x41efb2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41efb8:{NFSU2_TR(0x41efb8);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41efc0:L41efc0:{c.instructions+=10;NFSU2_TR(0x41efc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41efc3:{NFSU2_TR(0x41efc3);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41efc7:{NFSU2_TR(0x41efc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41efcb:{NFSU2_TR(0x41efcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41efce:{NFSU2_TR(0x41efce);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41efd2:{NFSU2_TR(0x41efd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41efd4:{NFSU2_TR(0x41efd4);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41efd6:{NFSU2_TR(0x41efd6);
__builtin_memmove((R+4),(R+28),4);
}
B41efd8:{NFSU2_TR(0x41efd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41efdc:{NFSU2_TR(0x41efdc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41efdfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41efdf:L41efdf:{c.instructions+=4;NFSU2_TR(0x41efdf);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41efe3:{NFSU2_TR(0x41efe3);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B41efe7:{NFSU2_TR(0x41efe7);
u8 U[6];
w1(R+512,u8((r2(R+0))<(u16(0xffffull))));
w1(R+523,sborrow<u16>(r2(R+0),u16(0xffffull)));
w2(U+4,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B41efeb:{NFSU2_TR(0x41efeb);
if(r1(R+518)){TAIL_STATIC(0x41f076u,41f);}
}
B41eff1:L41eff1:{c.instructions+=3;NFSU2_TR(0x41eff1);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B41eff5:{NFSU2_TR(0x41eff5);
u8 U[8];
__builtin_memmove((U+4),(R+4),2);
w1(R+512,u8((r2(U+4))<(u16(0xffffull))));
w1(R+523,sborrow<u16>(r2(U+4),u16(0xffffull)));
w2(U+6,u16(u32(r2(U+4))-u32(u16(0xffffull))));
w1(R+519,u8(s16(r2(U+6))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+6))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B41eff9:{NFSU2_TR(0x41eff9);
if(r1(R+518)){TAIL_STATIC(0x41f076u,41f);}
}
B41effb:L41effb:{c.instructions+=2;NFSU2_TR(0x41effb);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B41effe:{NFSU2_TR(0x41effe);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
TAIL_STATIC(0x41f000u,41f);
}
XIT:NFSU2_TR_EXIT(0x41e,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
