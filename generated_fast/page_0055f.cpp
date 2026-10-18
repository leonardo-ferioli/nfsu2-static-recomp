#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4ae(u8* __restrict R,Cpu& c);
u32 body_4c2(u8* __restrict R,Cpu& c);
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_521(u8* __restrict R,Cpu& c);
u32 body_527(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_530(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_539(u8* __restrict R,Cpu& c);
u32 body_53a(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_54f(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55b(u8* __restrict R,Cpu& c);
u32 body_55c(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_60f(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_631(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x55f,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x55f,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_55f(u8* __restrict R,Cpu& c);
u32 page_55f(Cpu& c){return body_55f(c.regs.data(),c);}
__attribute__((noinline)) u32 body_55f(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x55f000:goto L55f000;
case 0x55f005:goto L55f005;
case 0x55f007:c.instructions+=3;goto B55f007;
case 0x55f009:c.instructions+=2;goto B55f009;
case 0x55f00e:c.instructions+=1;goto B55f00e;
case 0x55f013:goto L55f013;
case 0x55f016:c.instructions+=4;goto B55f016;
case 0x55f019:c.instructions+=3;goto B55f019;
case 0x55f01b:c.instructions+=2;goto B55f01b;
case 0x55f01d:c.instructions+=1;goto B55f01d;
case 0x55f01f:goto L55f01f;
case 0x55f022:c.instructions+=4;goto B55f022;
case 0x55f027:c.instructions+=3;goto B55f027;
case 0x55f02c:c.instructions+=2;goto B55f02c;
case 0x55f02d:c.instructions+=1;goto B55f02d;
case 0x55f02f:goto L55f02f;
case 0x55f032:c.instructions+=3;goto B55f032;
case 0x55f037:c.instructions+=2;goto B55f037;
case 0x55f03c:c.instructions+=1;goto B55f03c;
case 0x55f03d:goto L55f03d;
case 0x55f042:goto L55f042;
case 0x55f045:c.instructions+=4;goto B55f045;
case 0x55f04a:c.instructions+=3;goto B55f04a;
case 0x55f04f:c.instructions+=2;goto B55f04f;
case 0x55f054:c.instructions+=1;goto B55f054;
case 0x55f059:goto L55f059;
case 0x55f05b:c.instructions+=2;goto B55f05b;
case 0x55f05d:c.instructions+=1;goto B55f05d;
case 0x55f062:goto L55f062;
case 0x55f065:c.instructions+=5;goto B55f065;
case 0x55f06b:c.instructions+=4;goto B55f06b;
case 0x55f06e:c.instructions+=3;goto B55f06e;
case 0x55f073:c.instructions+=2;goto B55f073;
case 0x55f074:c.instructions+=1;goto B55f074;
case 0x55f079:goto L55f079;
case 0x55f07a:c.instructions+=2;goto B55f07a;
case 0x55f07b:c.instructions+=1;goto B55f07b;
case 0x55f080:goto L55f080;
case 0x55f081:c.instructions+=14;goto B55f081;
case 0x55f083:c.instructions+=13;goto B55f083;
case 0x55f086:c.instructions+=12;goto B55f086;
case 0x55f089:c.instructions+=11;goto B55f089;
case 0x55f08a:c.instructions+=10;goto B55f08a;
case 0x55f08b:c.instructions+=9;goto B55f08b;
case 0x55f08e:c.instructions+=8;goto B55f08e;
case 0x55f090:c.instructions+=7;goto B55f090;
case 0x55f093:c.instructions+=6;goto B55f093;
case 0x55f094:c.instructions+=5;goto B55f094;
case 0x55f095:c.instructions+=4;goto B55f095;
case 0x55f096:c.instructions+=3;goto B55f096;
case 0x55f097:c.instructions+=2;goto B55f097;
case 0x55f099:c.instructions+=1;goto B55f099;
case 0x55f09e:goto L55f09e;
case 0x55f0a4:c.instructions+=1;goto B55f0a4;
case 0x55f0aa:goto L55f0aa;
case 0x55f0b0:goto L55f0b0;
case 0x55f0b6:c.instructions+=1;goto B55f0b6;
case 0x55f0b8:goto L55f0b8;
case 0x55f0be:c.instructions+=1;goto B55f0be;
case 0x55f0c4:goto L55f0c4;
case 0x55f0ca:c.instructions+=1;goto B55f0ca;
case 0x55f0d0:goto L55f0d0;
case 0x55f0d1:c.instructions+=3;goto B55f0d1;
case 0x55f0d2:c.instructions+=2;goto B55f0d2;
case 0x55f0d3:c.instructions+=1;goto B55f0d3;
case 0x55f0d6:goto L55f0d6;
case 0x55f0d9:c.instructions+=2;goto B55f0d9;
case 0x55f0e0:c.instructions+=1;goto B55f0e0;
case 0x55f0e6:goto L55f0e6;
case 0x55f0e8:c.instructions+=2;goto B55f0e8;
case 0x55f0ed:c.instructions+=1;goto B55f0ed;
case 0x55f0f2:goto L55f0f2;
case 0x55f0f4:c.instructions+=3;goto B55f0f4;
case 0x55f0f9:c.instructions+=2;goto B55f0f9;
case 0x55f0fb:c.instructions+=1;goto B55f0fb;
case 0x55f100:goto L55f100;
case 0x55f102:c.instructions+=1;goto B55f102;
case 0x55f104:goto L55f104;
case 0x55f107:c.instructions+=4;goto B55f107;
case 0x55f10c:c.instructions+=3;goto B55f10c;
case 0x55f111:c.instructions+=2;goto B55f111;
case 0x55f112:c.instructions+=1;goto B55f112;
case 0x55f117:goto L55f117;
case 0x55f11a:c.instructions+=3;goto B55f11a;
case 0x55f11c:c.instructions+=2;goto B55f11c;
case 0x55f126:c.instructions+=1;goto B55f126;
case 0x55f12b:goto L55f12b;
case 0x55f12c:c.instructions+=3;goto B55f12c;
case 0x55f12d:c.instructions+=2;goto B55f12d;
case 0x55f12e:c.instructions+=1;goto B55f12e;
case 0x55f131:goto L55f131;
case 0x55f134:c.instructions+=10;goto B55f134;
case 0x55f139:c.instructions+=9;goto B55f139;
case 0x55f13b:c.instructions+=8;goto B55f13b;
case 0x55f140:c.instructions+=7;goto B55f140;
case 0x55f145:c.instructions+=6;goto B55f145;
case 0x55f14a:c.instructions+=5;goto B55f14a;
case 0x55f14f:c.instructions+=4;goto B55f14f;
case 0x55f154:c.instructions+=3;goto B55f154;
case 0x55f159:c.instructions+=2;goto B55f159;
case 0x55f15a:c.instructions+=1;goto B55f15a;
case 0x55f15f:goto L55f15f;
case 0x55f162:c.instructions+=3;goto B55f162;
case 0x55f164:c.instructions+=2;goto B55f164;
case 0x55f16e:c.instructions+=1;goto B55f16e;
case 0x55f173:goto L55f173;
case 0x55f174:c.instructions+=3;goto B55f174;
case 0x55f175:c.instructions+=2;goto B55f175;
case 0x55f176:c.instructions+=1;goto B55f176;
case 0x55f179:goto L55f179;
case 0x55f17c:c.instructions+=4;goto B55f17c;
case 0x55f181:c.instructions+=3;goto B55f181;
case 0x55f186:c.instructions+=2;goto B55f186;
case 0x55f187:c.instructions+=1;goto B55f187;
case 0x55f18c:goto L55f18c;
case 0x55f18f:c.instructions+=2;goto B55f18f;
case 0x55f191:c.instructions+=1;goto B55f191;
case 0x55f197:goto L55f197;
case 0x55f19a:c.instructions+=2;goto B55f19a;
case 0x55f19c:c.instructions+=1;goto B55f19c;
case 0x55f1a2:goto L55f1a2;
case 0x55f1a5:c.instructions+=5;goto B55f1a5;
case 0x55f1a7:c.instructions+=4;goto B55f1a7;
case 0x55f1ac:c.instructions+=3;goto B55f1ac;
case 0x55f1b1:c.instructions+=2;goto B55f1b1;
case 0x55f1b2:c.instructions+=1;goto B55f1b2;
case 0x55f1b7:goto L55f1b7;
case 0x55f1ba:c.instructions+=4;goto B55f1ba;
case 0x55f1bb:c.instructions+=3;goto B55f1bb;
case 0x55f1bc:c.instructions+=2;goto B55f1bc;
case 0x55f1bd:c.instructions+=1;goto B55f1bd;
case 0x55f1c0:goto L55f1c0;
case 0x55f1c3:c.instructions+=4;goto B55f1c3;
case 0x55f1c8:c.instructions+=3;goto B55f1c8;
case 0x55f1cd:c.instructions+=2;goto B55f1cd;
case 0x55f1ce:c.instructions+=1;goto B55f1ce;
case 0x55f1d3:goto L55f1d3;
case 0x55f1d6:c.instructions+=2;goto B55f1d6;
case 0x55f1d8:c.instructions+=1;goto B55f1d8;
case 0x55f1de:goto L55f1de;
case 0x55f1e1:c.instructions+=6;goto B55f1e1;
case 0x55f1e3:c.instructions+=5;goto B55f1e3;
case 0x55f1e8:c.instructions+=4;goto B55f1e8;
case 0x55f1ed:c.instructions+=3;goto B55f1ed;
case 0x55f1ee:c.instructions+=2;goto B55f1ee;
case 0x55f1f8:c.instructions+=1;goto B55f1f8;
case 0x55f1fd:goto L55f1fd;
case 0x55f200:c.instructions+=4;goto B55f200;
case 0x55f201:c.instructions+=3;goto B55f201;
case 0x55f202:c.instructions+=2;goto B55f202;
case 0x55f203:c.instructions+=1;goto B55f203;
case 0x55f206:goto L55f206;
case 0x55f20c:c.instructions+=1;goto B55f20c;
case 0x55f212:goto L55f212;
case 0x55f218:c.instructions+=1;goto B55f218;
case 0x55f21a:goto L55f21a;
case 0x55f220:c.instructions+=1;goto B55f220;
case 0x55f226:goto L55f226;
case 0x55f22c:c.instructions+=2;goto B55f22c;
case 0x55f231:c.instructions+=1;goto B55f231;
case 0x55f233:goto L55f233;
case 0x55f238:c.instructions+=1;goto B55f238;
case 0x55f23e:goto L55f23e;
case 0x55f241:c.instructions+=3;goto B55f241;
case 0x55f243:c.instructions+=2;goto B55f243;
case 0x55f244:c.instructions+=1;goto B55f244;
case 0x55f249:goto L55f249;
case 0x55f24c:c.instructions+=2;goto B55f24c;
case 0x55f256:c.instructions+=1;goto B55f256;
case 0x55f25b:goto L55f25b;
case 0x55f25d:c.instructions+=1;goto B55f25d;
case 0x55f262:goto L55f262;
case 0x55f263:c.instructions+=3;goto B55f263;
case 0x55f264:c.instructions+=2;goto B55f264;
case 0x55f265:c.instructions+=1;goto B55f265;
case 0x55f268:goto L55f268;
case 0x55f26b:c.instructions+=7;goto B55f26b;
case 0x55f26e:c.instructions+=6;goto B55f26e;
case 0x55f274:c.instructions+=5;goto B55f274;
case 0x55f277:c.instructions+=4;goto B55f277;
case 0x55f27a:c.instructions+=3;goto B55f27a;
case 0x55f27b:c.instructions+=2;goto B55f27b;
case 0x55f27c:c.instructions+=1;goto B55f27c;
case 0x55f281:goto L55f281;
case 0x55f284:c.instructions+=1;goto B55f284;
case 0x55f289:goto L55f289;
case 0x55f28b:c.instructions+=1;goto B55f28b;
case 0x55f290:goto L55f290;
case 0x55f291:c.instructions+=3;goto B55f291;
case 0x55f292:c.instructions+=2;goto B55f292;
case 0x55f293:c.instructions+=1;goto B55f293;
case 0x55f296:goto L55f296;
case 0x55f298:c.instructions+=2;goto B55f298;
case 0x55f29d:c.instructions+=1;goto B55f29d;
case 0x55f2a2:goto L55f2a2;
case 0x55f2a4:c.instructions+=4;goto B55f2a4;
case 0x55f2a5:c.instructions+=3;goto B55f2a5;
case 0x55f2a7:c.instructions+=2;goto B55f2a7;
case 0x55f2ac:c.instructions+=1;goto B55f2ac;
case 0x55f2b1:goto L55f2b1;
case 0x55f2b2:c.instructions+=3;goto B55f2b2;
case 0x55f2b4:c.instructions+=2;goto B55f2b4;
case 0x55f2b9:c.instructions+=1;goto B55f2b9;
case 0x55f2be:goto L55f2be;
case 0x55f2c3:c.instructions+=2;goto B55f2c3;
case 0x55f2c8:c.instructions+=1;goto B55f2c8;
case 0x55f2cd:goto L55f2cd;
case 0x55f2cf:c.instructions+=3;goto B55f2cf;
case 0x55f2d1:c.instructions+=2;goto B55f2d1;
case 0x55f2d6:c.instructions+=1;goto B55f2d6;
case 0x55f2db:goto L55f2db;
case 0x55f2e1:c.instructions+=4;goto B55f2e1;
case 0x55f2e4:c.instructions+=3;goto B55f2e4;
case 0x55f2e9:c.instructions+=2;goto B55f2e9;
case 0x55f2ec:c.instructions+=1;goto B55f2ec;
case 0x55f2f1:goto L55f2f1;
case 0x55f2f6:c.instructions+=3;goto B55f2f6;
case 0x55f2fb:c.instructions+=2;goto B55f2fb;
case 0x55f300:c.instructions+=1;goto B55f300;
case 0x55f305:goto L55f305;
case 0x55f30a:c.instructions+=2;goto B55f30a;
case 0x55f30f:c.instructions+=1;goto B55f30f;
case 0x55f314:goto L55f314;
case 0x55f316:c.instructions+=3;goto B55f316;
case 0x55f318:c.instructions+=2;goto B55f318;
case 0x55f31d:c.instructions+=1;goto B55f31d;
case 0x55f322:goto L55f322;
case 0x55f325:goto L55f325;
case 0x55f327:c.instructions+=1;goto B55f327;
case 0x55f32c:goto L55f32c;
case 0x55f32d:c.instructions+=3;goto B55f32d;
case 0x55f32e:c.instructions+=2;goto B55f32e;
case 0x55f32f:c.instructions+=1;goto B55f32f;
case 0x55f340:goto L55f340;
case 0x55f342:c.instructions+=19;goto B55f342;
case 0x55f347:c.instructions+=18;goto B55f347;
case 0x55f34d:c.instructions+=17;goto B55f34d;
case 0x55f34e:c.instructions+=16;goto B55f34e;
case 0x55f355:c.instructions+=15;goto B55f355;
case 0x55f358:c.instructions+=14;goto B55f358;
case 0x55f35d:c.instructions+=13;goto B55f35d;
case 0x55f35e:c.instructions+=12;goto B55f35e;
case 0x55f362:c.instructions+=11;goto B55f362;
case 0x55f363:c.instructions+=10;goto B55f363;
case 0x55f367:c.instructions+=9;goto B55f367;
case 0x55f36b:c.instructions+=8;goto B55f36b;
case 0x55f36c:c.instructions+=7;goto B55f36c;
case 0x55f370:c.instructions+=6;goto B55f370;
case 0x55f378:c.instructions+=5;goto B55f378;
case 0x55f37c:c.instructions+=4;goto B55f37c;
case 0x55f380:c.instructions+=3;goto B55f380;
case 0x55f382:c.instructions+=2;goto B55f382;
case 0x55f38a:c.instructions+=1;goto B55f38a;
case 0x55f38f:goto L55f38f;
case 0x55f395:c.instructions+=4;goto B55f395;
case 0x55f397:c.instructions+=3;goto B55f397;
case 0x55f399:c.instructions+=2;goto B55f399;
case 0x55f39c:c.instructions+=1;goto B55f39c;
case 0x55f39f:goto L55f39f;
case 0x55f3a1:c.instructions+=6;goto B55f3a1;
case 0x55f3a3:c.instructions+=5;goto B55f3a3;
case 0x55f3a5:c.instructions+=4;goto B55f3a5;
case 0x55f3a7:c.instructions+=3;goto B55f3a7;
case 0x55f3a8:c.instructions+=2;goto B55f3a8;
case 0x55f3ad:c.instructions+=1;goto B55f3ad;
case 0x55f3b2:goto L55f3b2;
case 0x55f3b4:c.instructions+=2;goto B55f3b4;
case 0x55f3b6:c.instructions+=1;goto B55f3b6;
case 0x55f3b8:goto L55f3b8;
case 0x55f3bc:c.instructions+=2;goto B55f3bc;
case 0x55f3be:c.instructions+=1;goto B55f3be;
case 0x55f3c0:goto L55f3c0;
case 0x55f3c4:c.instructions+=4;goto B55f3c4;
case 0x55f3c5:c.instructions+=3;goto B55f3c5;
case 0x55f3c6:c.instructions+=2;goto B55f3c6;
case 0x55f3c7:c.instructions+=1;goto B55f3c7;
case 0x55f3cc:goto L55f3cc;
case 0x55f3cf:c.instructions+=2;goto B55f3cf;
case 0x55f3d1:c.instructions+=1;goto B55f3d1;
case 0x55f3d3:goto L55f3d3;
case 0x55f3d5:c.instructions+=1;goto B55f3d5;
case 0x55f3da:goto L55f3da;
case 0x55f3dd:c.instructions+=2;goto B55f3dd;
case 0x55f3df:c.instructions+=1;goto B55f3df;
case 0x55f3e1:goto L55f3e1;
case 0x55f3e4:c.instructions+=2;goto B55f3e4;
case 0x55f3eb:c.instructions+=1;goto B55f3eb;
case 0x55f3ed:goto L55f3ed;
case 0x55f3ef:goto L55f3ef;
case 0x55f3f3:c.instructions+=5;goto B55f3f3;
case 0x55f3f5:c.instructions+=4;goto B55f3f5;
case 0x55f3f9:c.instructions+=3;goto B55f3f9;
case 0x55f3fc:c.instructions+=2;goto B55f3fc;
case 0x55f400:c.instructions+=1;goto B55f400;
case 0x55f402:goto L55f402;
case 0x55f404:c.instructions+=6;goto B55f404;
case 0x55f406:c.instructions+=5;goto B55f406;
case 0x55f408:c.instructions+=4;goto B55f408;
case 0x55f409:c.instructions+=3;goto B55f409;
case 0x55f40a:c.instructions+=2;goto B55f40a;
case 0x55f40f:c.instructions+=1;goto B55f40f;
case 0x55f414:goto L55f414;
case 0x55f416:c.instructions+=2;goto B55f416;
case 0x55f418:c.instructions+=1;goto B55f418;
case 0x55f41a:goto L55f41a;
case 0x55f41e:c.instructions+=2;goto B55f41e;
case 0x55f422:c.instructions+=1;goto B55f422;
case 0x55f427:goto L55f427;
case 0x55f429:c.instructions+=2;goto B55f429;
case 0x55f42d:c.instructions+=1;goto B55f42d;
case 0x55f433:goto L55f433;
case 0x55f436:c.instructions+=1;goto B55f436;
case 0x55f43b:goto L55f43b;
case 0x55f43f:c.instructions+=5;goto B55f43f;
case 0x55f441:c.instructions+=4;goto B55f441;
case 0x55f442:c.instructions+=3;goto B55f442;
case 0x55f443:c.instructions+=2;goto B55f443;
case 0x55f447:c.instructions+=1;goto B55f447;
case 0x55f44c:goto L55f44c;
case 0x55f44f:c.instructions+=2;goto B55f44f;
case 0x55f451:c.instructions+=1;goto B55f451;
case 0x55f457:goto L55f457;
case 0x55f459:c.instructions+=3;goto B55f459;
case 0x55f45d:c.instructions+=2;goto B55f45d;
case 0x55f45f:c.instructions+=1;goto B55f45f;
case 0x55f464:goto L55f464;
case 0x55f466:c.instructions+=5;goto B55f466;
case 0x55f469:c.instructions+=4;goto B55f469;
case 0x55f46d:c.instructions+=3;goto B55f46d;
case 0x55f46f:c.instructions+=2;goto B55f46f;
case 0x55f474:c.instructions+=1;goto B55f474;
case 0x55f476:goto L55f476;
case 0x55f47a:c.instructions+=2;goto B55f47a;
case 0x55f47b:c.instructions+=1;goto B55f47b;
case 0x55f480:goto L55f480;
case 0x55f484:c.instructions+=25;goto B55f484;
case 0x55f487:c.instructions+=24;goto B55f487;
case 0x55f48a:c.instructions+=23;goto B55f48a;
case 0x55f48c:c.instructions+=22;goto B55f48c;
case 0x55f48f:c.instructions+=21;goto B55f48f;
case 0x55f492:c.instructions+=20;goto B55f492;
case 0x55f495:c.instructions+=19;goto B55f495;
case 0x55f498:c.instructions+=18;goto B55f498;
case 0x55f49b:c.instructions+=17;goto B55f49b;
case 0x55f49e:c.instructions+=16;goto B55f49e;
case 0x55f4a1:c.instructions+=15;goto B55f4a1;
case 0x55f4a4:c.instructions+=14;goto B55f4a4;
case 0x55f4a9:c.instructions+=13;goto B55f4a9;
case 0x55f4ac:c.instructions+=12;goto B55f4ac;
case 0x55f4af:c.instructions+=11;goto B55f4af;
case 0x55f4b2:c.instructions+=10;goto B55f4b2;
case 0x55f4b5:c.instructions+=9;goto B55f4b5;
case 0x55f4b8:c.instructions+=8;goto B55f4b8;
case 0x55f4bc:c.instructions+=7;goto B55f4bc;
case 0x55f4c0:c.instructions+=6;goto B55f4c0;
case 0x55f4c3:c.instructions+=5;goto B55f4c3;
case 0x55f4c9:c.instructions+=4;goto B55f4c9;
case 0x55f4cc:c.instructions+=3;goto B55f4cc;
case 0x55f4ce:c.instructions+=2;goto B55f4ce;
case 0x55f4d1:c.instructions+=1;goto B55f4d1;
case 0x55f4d3:goto L55f4d3;
case 0x55f4d5:goto L55f4d5;
case 0x55f4d9:c.instructions+=2;goto B55f4d9;
case 0x55f4de:c.instructions+=1;goto B55f4de;
case 0x55f4e0:goto L55f4e0;
case 0x55f4e3:c.instructions+=1;goto B55f4e3;
case 0x55f4e8:goto L55f4e8;
case 0x55f4ec:c.instructions+=3;goto B55f4ec;
case 0x55f4ed:c.instructions+=2;goto B55f4ed;
case 0x55f4ee:c.instructions+=1;goto B55f4ee;
case 0x55f4f3:goto L55f4f3;
case 0x55f4f6:c.instructions+=2;goto B55f4f6;
case 0x55f4f8:c.instructions+=1;goto B55f4f8;
case 0x55f4fa:goto L55f4fa;
case 0x55f4fc:c.instructions+=15;goto B55f4fc;
case 0x55f4fe:c.instructions+=14;goto B55f4fe;
case 0x55f501:c.instructions+=13;goto B55f501;
case 0x55f503:c.instructions+=12;goto B55f503;
case 0x55f505:c.instructions+=11;goto B55f505;
case 0x55f508:c.instructions+=10;goto B55f508;
case 0x55f50b:c.instructions+=9;goto B55f50b;
case 0x55f50e:c.instructions+=8;goto B55f50e;
case 0x55f510:c.instructions+=7;goto B55f510;
case 0x55f513:c.instructions+=6;goto B55f513;
case 0x55f516:c.instructions+=5;goto B55f516;
case 0x55f518:c.instructions+=4;goto B55f518;
case 0x55f51c:c.instructions+=3;goto B55f51c;
case 0x55f51d:c.instructions+=2;goto B55f51d;
case 0x55f51f:c.instructions+=1;goto B55f51f;
case 0x55f521:goto L55f521;
case 0x55f525:c.instructions+=7;goto B55f525;
case 0x55f527:c.instructions+=6;goto B55f527;
case 0x55f52a:c.instructions+=5;goto B55f52a;
case 0x55f52d:c.instructions+=4;goto B55f52d;
case 0x55f530:c.instructions+=3;goto B55f530;
case 0x55f532:c.instructions+=2;goto B55f532;
case 0x55f533:c.instructions+=1;goto B55f533;
case 0x55f536:goto L55f536;
case 0x55f538:c.instructions+=1;goto B55f538;
case 0x55f53a:goto L55f53a;
case 0x55f53d:c.instructions+=3;goto B55f53d;
case 0x55f542:c.instructions+=2;goto B55f542;
case 0x55f544:c.instructions+=1;goto B55f544;
case 0x55f546:goto L55f546;
case 0x55f549:c.instructions+=1;goto B55f549;
case 0x55f550:goto L55f550;
case 0x55f554:c.instructions+=1;goto B55f554;
case 0x55f55a:goto L55f55a;
case 0x55f55c:c.instructions+=2;goto B55f55c;
case 0x55f561:c.instructions+=1;goto B55f561;
case 0x55f566:goto L55f566;
case 0x55f568:c.instructions+=3;goto B55f568;
case 0x55f56c:c.instructions+=2;goto B55f56c;
case 0x55f572:c.instructions+=1;goto B55f572;
case 0x55f574:goto L55f574;
case 0x55f576:c.instructions+=3;goto B55f576;
case 0x55f57b:c.instructions+=2;goto B55f57b;
case 0x55f57d:c.instructions+=1;goto B55f57d;
case 0x55f582:goto L55f582;
case 0x55f586:c.instructions+=1;goto B55f586;
case 0x55f588:goto L55f588;
case 0x55f58e:c.instructions+=2;goto B55f58e;
case 0x55f591:c.instructions+=1;goto B55f591;
case 0x55f596:goto L55f596;
case 0x55f597:c.instructions+=1;goto B55f597;
case 0x55f59c:goto L55f59c;
case 0x55f59d:c.instructions+=2;goto B55f59d;
case 0x55f59f:c.instructions+=1;goto B55f59f;
case 0x55f5a4:goto L55f5a4;
case 0x55f5a5:c.instructions+=1;goto B55f5a5;
case 0x55f5aa:goto L55f5aa;
case 0x55f5ad:c.instructions+=2;goto B55f5ad;
case 0x55f5af:c.instructions+=1;goto B55f5af;
case 0x55f5b1:goto L55f5b1;
case 0x55f5b4:goto L55f5b4;
case 0x55f5b7:c.instructions+=2;goto B55f5b7;
case 0x55f5b8:c.instructions+=1;goto B55f5b8;
case 0x55f5bd:goto L55f5bd;
case 0x55f5be:c.instructions+=1;goto B55f5be;
case 0x55f5c3:goto L55f5c3;
case 0x55f5c6:c.instructions+=2;goto B55f5c6;
case 0x55f5c8:c.instructions+=1;goto B55f5c8;
case 0x55f5ce:goto L55f5ce;
case 0x55f5d1:c.instructions+=2;goto B55f5d1;
case 0x55f5d3:c.instructions+=1;goto B55f5d3;
case 0x55f5d9:goto L55f5d9;
case 0x55f5dc:c.instructions+=2;goto B55f5dc;
case 0x55f5df:c.instructions+=1;goto B55f5df;
case 0x55f5e7:goto L55f5e7;
case 0x55f5e9:c.instructions+=1;goto B55f5e9;
case 0x55f5eb:goto L55f5eb;
case 0x55f5ee:c.instructions+=1;goto B55f5ee;
case 0x55f5f0:goto L55f5f0;
case 0x55f5f2:goto L55f5f2;
case 0x55f5f4:c.instructions+=1;goto B55f5f4;
case 0x55f5f6:goto L55f5f6;
case 0x55f5f9:c.instructions+=1;goto B55f5f9;
case 0x55f5fb:goto L55f5fb;
case 0x55f5fd:goto L55f5fd;
case 0x55f5ff:c.instructions+=1;goto B55f5ff;
case 0x55f601:goto L55f601;
case 0x55f604:c.instructions+=3;goto B55f604;
case 0x55f607:c.instructions+=2;goto B55f607;
case 0x55f609:c.instructions+=1;goto B55f609;
case 0x55f60b:goto L55f60b;
case 0x55f60d:c.instructions+=2;goto B55f60d;
case 0x55f60f:c.instructions+=1;goto B55f60f;
case 0x55f611:goto L55f611;
case 0x55f614:c.instructions+=2;goto B55f614;
case 0x55f616:c.instructions+=1;goto B55f616;
case 0x55f618:goto L55f618;
case 0x55f61a:c.instructions+=1;goto B55f61a;
case 0x55f61c:goto L55f61c;
case 0x55f61e:goto L55f61e;
case 0x55f621:c.instructions+=5;goto B55f621;
case 0x55f623:c.instructions+=4;goto B55f623;
case 0x55f626:c.instructions+=3;goto B55f626;
case 0x55f627:c.instructions+=2;goto B55f627;
case 0x55f629:c.instructions+=1;goto B55f629;
case 0x55f62b:goto L55f62b;
case 0x55f62c:c.instructions+=1;goto B55f62c;
case 0x55f631:goto L55f631;
case 0x55f634:c.instructions+=2;goto B55f634;
case 0x55f636:c.instructions+=1;goto B55f636;
case 0x55f638:goto L55f638;
case 0x55f63b:c.instructions+=1;goto B55f63b;
case 0x55f63d:goto L55f63d;
case 0x55f63f:goto L55f63f;
case 0x55f642:c.instructions+=1;goto B55f642;
case 0x55f644:goto L55f644;
case 0x55f648:c.instructions+=4;goto B55f648;
case 0x55f64b:c.instructions+=3;goto B55f64b;
case 0x55f64c:c.instructions+=2;goto B55f64c;
case 0x55f650:c.instructions+=1;goto B55f650;
case 0x55f652:goto L55f652;
case 0x55f656:c.instructions+=2;goto B55f656;
case 0x55f657:c.instructions+=1;goto B55f657;
case 0x55f659:goto L55f659;
case 0x55f65b:goto L55f65b;
case 0x55f65e:c.instructions+=2;goto B55f65e;
case 0x55f661:c.instructions+=1;goto B55f661;
case 0x55f664:goto L55f664;
case 0x55f66a:c.instructions+=2;goto B55f66a;
case 0x55f66d:c.instructions+=1;goto B55f66d;
case 0x55f672:goto L55f672;
case 0x55f673:c.instructions+=1;goto B55f673;
case 0x55f678:goto L55f678;
case 0x55f67b:c.instructions+=3;goto B55f67b;
case 0x55f67e:c.instructions+=2;goto B55f67e;
case 0x55f680:c.instructions+=1;goto B55f680;
case 0x55f682:goto L55f682;
case 0x55f685:c.instructions+=4;goto B55f685;
case 0x55f688:c.instructions+=3;goto B55f688;
case 0x55f68d:c.instructions+=2;goto B55f68d;
case 0x55f692:c.instructions+=1;goto B55f692;
case 0x55f697:goto L55f697;
case 0x55f698:c.instructions+=3;goto B55f698;
case 0x55f69a:c.instructions+=2;goto B55f69a;
case 0x55f69f:c.instructions+=1;goto B55f69f;
case 0x55f6a4:goto L55f6a4;
case 0x55f6a5:c.instructions+=3;goto B55f6a5;
case 0x55f6a7:c.instructions+=2;goto B55f6a7;
case 0x55f6ac:c.instructions+=1;goto B55f6ac;
case 0x55f6b1:goto L55f6b1;
case 0x55f6b3:c.instructions+=3;goto B55f6b3;
case 0x55f6b5:c.instructions+=2;goto B55f6b5;
case 0x55f6ba:c.instructions+=1;goto B55f6ba;
case 0x55f6bf:goto L55f6bf;
case 0x55f6c2:c.instructions+=4;goto B55f6c2;
case 0x55f6c7:c.instructions+=3;goto B55f6c7;
case 0x55f6cc:c.instructions+=2;goto B55f6cc;
case 0x55f6d1:c.instructions+=1;goto B55f6d1;
case 0x55f6d6:goto L55f6d6;
case 0x55f6d9:c.instructions+=6;goto B55f6d9;
case 0x55f6dc:c.instructions+=5;goto B55f6dc;
case 0x55f6de:c.instructions+=4;goto B55f6de;
case 0x55f6e0:c.instructions+=3;goto B55f6e0;
case 0x55f6e1:c.instructions+=2;goto B55f6e1;
case 0x55f6e3:c.instructions+=1;goto B55f6e3;
case 0x55f6e8:goto L55f6e8;
case 0x55f6eb:goto L55f6eb;
case 0x55f6ed:c.instructions+=2;goto B55f6ed;
case 0x55f6ef:c.instructions+=1;goto B55f6ef;
case 0x55f6f2:goto L55f6f2;
case 0x55f6f6:c.instructions+=7;goto B55f6f6;
case 0x55f6f7:c.instructions+=6;goto B55f6f7;
case 0x55f6fb:c.instructions+=5;goto B55f6fb;
case 0x55f6fd:c.instructions+=4;goto B55f6fd;
case 0x55f6fe:c.instructions+=3;goto B55f6fe;
case 0x55f706:c.instructions+=2;goto B55f706;
case 0x55f707:c.instructions+=1;goto B55f707;
case 0x55f709:goto L55f709;
case 0x55f710:goto L55f710;
case 0x55f712:c.instructions+=6;goto B55f712;
case 0x55f714:c.instructions+=5;goto B55f714;
case 0x55f717:c.instructions+=4;goto B55f717;
case 0x55f719:c.instructions+=3;goto B55f719;
case 0x55f71a:c.instructions+=2;goto B55f71a;
case 0x55f71d:c.instructions+=1;goto B55f71d;
case 0x55f722:goto L55f722;
case 0x55f726:c.instructions+=4;goto B55f726;
case 0x55f72a:c.instructions+=3;goto B55f72a;
case 0x55f72d:c.instructions+=2;goto B55f72d;
case 0x55f72f:c.instructions+=1;goto B55f72f;
case 0x55f731:goto L55f731;
case 0x55f735:c.instructions+=3;goto B55f735;
case 0x55f73c:c.instructions+=2;goto B55f73c;
case 0x55f73f:c.instructions+=1;goto B55f73f;
case 0x55f740:goto L55f740;
case 0x55f741:c.instructions+=7;goto B55f741;
case 0x55f743:c.instructions+=6;goto B55f743;
case 0x55f744:c.instructions+=5;goto B55f744;
case 0x55f745:c.instructions+=4;goto B55f745;
case 0x55f747:c.instructions+=3;goto B55f747;
case 0x55f74d:c.instructions+=2;goto B55f74d;
case 0x55f74f:c.instructions+=1;goto B55f74f;
case 0x55f755:goto L55f755;
case 0x55f75b:c.instructions+=6;goto B55f75b;
case 0x55f75c:c.instructions+=5;goto B55f75c;
case 0x55f75f:c.instructions+=4;goto B55f75f;
case 0x55f762:c.instructions+=3;goto B55f762;
case 0x55f763:c.instructions+=2;goto B55f763;
case 0x55f766:c.instructions+=1;goto B55f766;
case 0x55f768:goto L55f768;
case 0x55f76e:c.instructions+=3;goto B55f76e;
case 0x55f770:c.instructions+=2;goto B55f770;
case 0x55f776:c.instructions+=1;goto B55f776;
case 0x55f778:goto L55f778;
case 0x55f77b:c.instructions+=1;goto B55f77b;
case 0x55f77d:goto L55f77d;
case 0x55f77f:goto L55f77f;
case 0x55f782:c.instructions+=1;goto B55f782;
case 0x55f784:goto L55f784;
case 0x55f787:c.instructions+=3;goto B55f787;
case 0x55f78e:c.instructions+=2;goto B55f78e;
case 0x55f791:c.instructions+=1;goto B55f791;
case 0x55f793:goto L55f793;
case 0x55f799:c.instructions+=2;goto B55f799;
case 0x55f79a:c.instructions+=1;goto B55f79a;
case 0x55f79f:goto L55f79f;
case 0x55f7a1:c.instructions+=1;goto B55f7a1;
case 0x55f7a6:goto L55f7a6;
case 0x55f7a8:goto L55f7a8;
case 0x55f7ab:c.instructions+=1;goto B55f7ab;
case 0x55f7ad:goto L55f7ad;
case 0x55f7b3:c.instructions+=2;goto B55f7b3;
case 0x55f7b5:c.instructions+=1;goto B55f7b5;
case 0x55f7ba:goto L55f7ba;
case 0x55f7bc:c.instructions+=1;goto B55f7bc;
case 0x55f7be:goto L55f7be;
case 0x55f7c1:c.instructions+=5;goto B55f7c1;
case 0x55f7c4:c.instructions+=4;goto B55f7c4;
case 0x55f7c5:c.instructions+=3;goto B55f7c5;
case 0x55f7c7:c.instructions+=2;goto B55f7c7;
case 0x55f7c8:c.instructions+=1;goto B55f7c8;
case 0x55f7cd:goto L55f7cd;
case 0x55f7d0:goto L55f7d0;
case 0x55f7d2:c.instructions+=1;goto B55f7d2;
case 0x55f7d7:goto L55f7d7;
case 0x55f7dd:c.instructions+=2;goto B55f7dd;
case 0x55f7e0:c.instructions+=1;goto B55f7e0;
case 0x55f7e6:goto L55f7e6;
case 0x55f7e9:c.instructions+=1;goto B55f7e9;
case 0x55f7eb:goto L55f7eb;
case 0x55f7f1:c.instructions+=2;goto B55f7f1;
case 0x55f7f3:c.instructions+=1;goto B55f7f3;
case 0x55f7f8:goto L55f7f8;
case 0x55f7fa:c.instructions+=1;goto B55f7fa;
case 0x55f7ff:goto L55f7ff;
case 0x55f801:goto L55f801;
case 0x55f804:c.instructions+=1;goto B55f804;
case 0x55f806:goto L55f806;
case 0x55f80c:c.instructions+=2;goto B55f80c;
case 0x55f80e:c.instructions+=1;goto B55f80e;
case 0x55f813:goto L55f813;
case 0x55f815:c.instructions+=1;goto B55f815;
case 0x55f81a:goto L55f81a;
case 0x55f81d:c.instructions+=3;goto B55f81d;
case 0x55f822:c.instructions+=2;goto B55f822;
case 0x55f827:c.instructions+=1;goto B55f827;
case 0x55f82c:goto L55f82c;
case 0x55f82d:c.instructions+=3;goto B55f82d;
case 0x55f82f:c.instructions+=2;goto B55f82f;
case 0x55f834:c.instructions+=1;goto B55f834;
case 0x55f839:goto L55f839;
case 0x55f83a:c.instructions+=3;goto B55f83a;
case 0x55f83c:c.instructions+=2;goto B55f83c;
case 0x55f841:c.instructions+=1;goto B55f841;
case 0x55f846:goto L55f846;
case 0x55f848:c.instructions+=3;goto B55f848;
case 0x55f84a:c.instructions+=2;goto B55f84a;
case 0x55f84f:c.instructions+=1;goto B55f84f;
case 0x55f854:goto L55f854;
case 0x55f857:c.instructions+=4;goto B55f857;
case 0x55f85c:c.instructions+=3;goto B55f85c;
case 0x55f861:c.instructions+=2;goto B55f861;
case 0x55f866:c.instructions+=1;goto B55f866;
case 0x55f86b:goto L55f86b;
case 0x55f86d:c.instructions+=2;goto B55f86d;
case 0x55f86f:c.instructions+=1;goto B55f86f;
case 0x55f872:goto L55f872;
case 0x55f878:c.instructions+=3;goto B55f878;
case 0x55f87a:c.instructions+=2;goto B55f87a;
case 0x55f880:c.instructions+=1;goto B55f880;
case 0x55f882:goto L55f882;
case 0x55f885:c.instructions+=1;goto B55f885;
case 0x55f887:goto L55f887;
case 0x55f889:goto L55f889;
case 0x55f88c:c.instructions+=1;goto B55f88c;
case 0x55f88e:goto L55f88e;
case 0x55f894:c.instructions+=2;goto B55f894;
case 0x55f895:c.instructions+=1;goto B55f895;
case 0x55f89a:goto L55f89a;
case 0x55f89d:c.instructions+=6;goto B55f89d;
case 0x55f89e:c.instructions+=5;goto B55f89e;
case 0x55f89f:c.instructions+=4;goto B55f89f;
case 0x55f8a0:c.instructions+=3;goto B55f8a0;
case 0x55f8a2:c.instructions+=2;goto B55f8a2;
case 0x55f8a3:c.instructions+=1;goto B55f8a3;
case 0x55f8a6:goto L55f8a6;
case 0x55f8ab:goto L55f8ab;
case 0x55f8ad:c.instructions+=1;goto B55f8ad;
case 0x55f8af:goto L55f8af;
case 0x55f8b5:c.instructions+=2;goto B55f8b5;
case 0x55f8b6:c.instructions+=1;goto B55f8b6;
case 0x55f8bb:goto L55f8bb;
case 0x55f8be:c.instructions+=6;goto B55f8be;
case 0x55f8bf:c.instructions+=5;goto B55f8bf;
case 0x55f8c0:c.instructions+=4;goto B55f8c0;
case 0x55f8c1:c.instructions+=3;goto B55f8c1;
case 0x55f8c3:c.instructions+=2;goto B55f8c3;
case 0x55f8c4:c.instructions+=1;goto B55f8c4;
case 0x55f8c7:goto L55f8c7;
case 0x55f8cd:c.instructions+=2;goto B55f8cd;
case 0x55f8ce:c.instructions+=1;goto B55f8ce;
case 0x55f8d3:goto L55f8d3;
case 0x55f8d9:c.instructions+=2;goto B55f8d9;
case 0x55f8da:c.instructions+=1;goto B55f8da;
case 0x55f8df:goto L55f8df;
case 0x55f8e2:goto L55f8e2;
case 0x55f8e3:c.instructions+=1;goto B55f8e3;
case 0x55f8e4:goto L55f8e4;
case 0x55f8e5:c.instructions+=3;goto B55f8e5;
case 0x55f8e7:c.instructions+=2;goto B55f8e7;
case 0x55f8e8:c.instructions+=1;goto B55f8e8;
case 0x55f8f0:goto L55f8f0;
case 0x55f8f3:c.instructions+=7;goto B55f8f3;
case 0x55f8f4:c.instructions+=6;goto B55f8f4;
case 0x55f8f5:c.instructions+=5;goto B55f8f5;
case 0x55f8f7:c.instructions+=4;goto B55f8f7;
case 0x55f8f8:c.instructions+=3;goto B55f8f8;
case 0x55f8fe:c.instructions+=2;goto B55f8fe;
case 0x55f900:c.instructions+=1;goto B55f900;
case 0x55f905:goto L55f905;
case 0x55f908:c.instructions+=8;goto B55f908;
case 0x55f90a:c.instructions+=7;goto B55f90a;
case 0x55f90e:c.instructions+=6;goto B55f90e;
case 0x55f911:c.instructions+=5;goto B55f911;
case 0x55f917:c.instructions+=4;goto B55f917;
case 0x55f919:c.instructions+=3;goto B55f919;
case 0x55f91b:c.instructions+=2;goto B55f91b;
case 0x55f91f:c.instructions+=1;goto B55f91f;
case 0x55f925:goto L55f925;
case 0x55f927:c.instructions+=1;goto B55f927;
case 0x55f92c:goto L55f92c;
case 0x55f92f:c.instructions+=2;goto B55f92f;
case 0x55f931:c.instructions+=1;goto B55f931;
case 0x55f933:goto L55f933;
case 0x55f937:c.instructions+=12;goto B55f937;
case 0x55f93a:c.instructions+=11;goto B55f93a;
case 0x55f93d:c.instructions+=10;goto B55f93d;
case 0x55f940:c.instructions+=9;goto B55f940;
case 0x55f943:c.instructions+=8;goto B55f943;
case 0x55f946:c.instructions+=7;goto B55f946;
case 0x55f949:c.instructions+=6;goto B55f949;
case 0x55f94d:c.instructions+=5;goto B55f94d;
case 0x55f950:c.instructions+=4;goto B55f950;
case 0x55f953:c.instructions+=3;goto B55f953;
case 0x55f959:c.instructions+=2;goto B55f959;
case 0x55f95c:c.instructions+=1;goto B55f95c;
case 0x55f95e:goto L55f95e;
case 0x55f960:goto L55f960;
case 0x55f962:c.instructions+=4;goto B55f962;
case 0x55f964:c.instructions+=3;goto B55f964;
case 0x55f965:c.instructions+=2;goto B55f965;
case 0x55f967:c.instructions+=1;goto B55f967;
case 0x55f96c:goto L55f96c;
case 0x55f96e:c.instructions+=1;goto B55f96e;
case 0x55f970:goto L55f970;
case 0x55f973:c.instructions+=3;goto B55f973;
case 0x55f978:c.instructions+=2;goto B55f978;
case 0x55f97a:c.instructions+=1;goto B55f97a;
case 0x55f97c:goto L55f97c;
case 0x55f97f:c.instructions+=1;goto B55f97f;
case 0x55f986:goto L55f986;
case 0x55f98c:c.instructions+=9;goto B55f98c;
case 0x55f990:c.instructions+=8;goto B55f990;
case 0x55f994:c.instructions+=7;goto B55f994;
case 0x55f995:c.instructions+=6;goto B55f995;
case 0x55f99b:c.instructions+=5;goto B55f99b;
case 0x55f99d:c.instructions+=4;goto B55f99d;
case 0x55f9a0:c.instructions+=3;goto B55f9a0;
case 0x55f9a2:c.instructions+=2;goto B55f9a2;
case 0x55f9a6:c.instructions+=1;goto B55f9a6;
case 0x55f9ac:goto L55f9ac;
case 0x55f9b2:c.instructions+=2;goto B55f9b2;
case 0x55f9b4:c.instructions+=1;goto B55f9b4;
case 0x55f9b6:goto L55f9b6;
case 0x55f9bb:c.instructions+=4;goto B55f9bb;
case 0x55f9bc:c.instructions+=3;goto B55f9bc;
case 0x55f9c1:c.instructions+=2;goto B55f9c1;
case 0x55f9c5:c.instructions+=1;goto B55f9c5;
case 0x55f9ca:goto L55f9ca;
case 0x55f9ce:c.instructions+=1;goto B55f9ce;
case 0x55f9d0:goto L55f9d0;
case 0x55f9d6:c.instructions+=1;goto B55f9d6;
case 0x55f9db:goto L55f9db;
case 0x55f9dc:c.instructions+=1;goto B55f9dc;
case 0x55f9e1:goto L55f9e1;
case 0x55f9e5:c.instructions+=4;goto B55f9e5;
case 0x55f9e8:c.instructions+=3;goto B55f9e8;
case 0x55f9eb:c.instructions+=2;goto B55f9eb;
case 0x55f9ed:c.instructions+=1;goto B55f9ed;
case 0x55f9ef:goto L55f9ef;
case 0x55f9f5:c.instructions+=3;goto B55f9f5;
case 0x55f9f6:c.instructions+=2;goto B55f9f6;
case 0x55f9f8:c.instructions+=1;goto B55f9f8;
case 0x55f9fd:goto L55f9fd;
case 0x55f9ff:c.instructions+=1;goto B55f9ff;
case 0x55fa01:goto L55fa01;
case 0x55fa04:c.instructions+=2;goto B55fa04;
case 0x55fa06:c.instructions+=1;goto B55fa06;
case 0x55fa08:goto L55fa08;
case 0x55fa0b:c.instructions+=1;goto B55fa0b;
case 0x55fa0d:goto L55fa0d;
case 0x55fa0f:goto L55fa0f;
case 0x55fa10:c.instructions+=2;goto B55fa10;
case 0x55fa12:c.instructions+=1;goto B55fa12;
case 0x55fa17:goto L55fa17;
case 0x55fa18:c.instructions+=2;goto B55fa18;
case 0x55fa1b:c.instructions+=1;goto B55fa1b;
case 0x55fa20:goto L55fa20;
case 0x55fa22:goto L55fa22;
case 0x55fa25:c.instructions+=2;goto B55fa25;
case 0x55fa27:c.instructions+=1;goto B55fa27;
case 0x55fa29:goto L55fa29;
case 0x55fa2c:c.instructions+=1;goto B55fa2c;
case 0x55fa2e:goto L55fa2e;
case 0x55fa30:goto L55fa30;
case 0x55fa33:c.instructions+=1;goto B55fa33;
case 0x55fa35:goto L55fa35;
case 0x55fa38:c.instructions+=3;goto B55fa38;
case 0x55fa3b:c.instructions+=2;goto B55fa3b;
case 0x55fa3e:c.instructions+=1;goto B55fa3e;
case 0x55fa40:goto L55fa40;
case 0x55fa43:c.instructions+=1;goto B55fa43;
case 0x55fa45:goto L55fa45;
case 0x55fa48:goto L55fa48;
case 0x55fa4a:c.instructions+=5;goto B55fa4a;
case 0x55fa4d:c.instructions+=4;goto B55fa4d;
case 0x55fa4f:c.instructions+=3;goto B55fa4f;
case 0x55fa51:c.instructions+=2;goto B55fa51;
case 0x55fa54:c.instructions+=1;goto B55fa54;
case 0x55fa56:goto L55fa56;
case 0x55fa5c:goto L55fa5c;
case 0x55fa5f:c.instructions+=10;goto B55fa5f;
case 0x55fa62:c.instructions+=9;goto B55fa62;
case 0x55fa65:c.instructions+=8;goto B55fa65;
case 0x55fa67:c.instructions+=7;goto B55fa67;
case 0x55fa6a:c.instructions+=6;goto B55fa6a;
case 0x55fa6e:c.instructions+=5;goto B55fa6e;
case 0x55fa71:c.instructions+=4;goto B55fa71;
case 0x55fa73:c.instructions+=3;goto B55fa73;
case 0x55fa74:c.instructions+=2;goto B55fa74;
case 0x55fa76:c.instructions+=1;goto B55fa76;
case 0x55fa7b:goto L55fa7b;
case 0x55fa81:c.instructions+=5;goto B55fa81;
case 0x55fa87:c.instructions+=4;goto B55fa87;
case 0x55fa8a:c.instructions+=3;goto B55fa8a;
case 0x55fa8f:c.instructions+=2;goto B55fa8f;
case 0x55fa94:c.instructions+=1;goto B55fa94;
case 0x55fa99:goto L55fa99;
case 0x55fa9a:c.instructions+=3;goto B55fa9a;
case 0x55fa9c:c.instructions+=2;goto B55fa9c;
case 0x55faa1:c.instructions+=1;goto B55faa1;
case 0x55faa6:goto L55faa6;
case 0x55faa7:c.instructions+=3;goto B55faa7;
case 0x55faa9:c.instructions+=2;goto B55faa9;
case 0x55faae:c.instructions+=1;goto B55faae;
case 0x55fab3:goto L55fab3;
case 0x55fab4:c.instructions+=3;goto B55fab4;
case 0x55fab6:c.instructions+=2;goto B55fab6;
case 0x55fabb:c.instructions+=1;goto B55fabb;
case 0x55fac0:goto L55fac0;
case 0x55fac3:c.instructions+=4;goto B55fac3;
case 0x55fac8:c.instructions+=3;goto B55fac8;
case 0x55facd:c.instructions+=2;goto B55facd;
case 0x55fad2:c.instructions+=1;goto B55fad2;
case 0x55fad7:goto L55fad7;
case 0x55fad8:c.instructions+=4;goto B55fad8;
case 0x55fad9:c.instructions+=3;goto B55fad9;
case 0x55fada:c.instructions+=2;goto B55fada;
case 0x55fadc:c.instructions+=1;goto B55fadc;
case 0x55fae1:goto L55fae1;
case 0x55fae3:c.instructions+=7;goto B55fae3;
case 0x55fae6:c.instructions+=6;goto B55fae6;
case 0x55fae7:c.instructions+=5;goto B55fae7;
case 0x55fae9:c.instructions+=4;goto B55fae9;
case 0x55faea:c.instructions+=3;goto B55faea;
case 0x55faeb:c.instructions+=2;goto B55faeb;
case 0x55faee:c.instructions+=1;goto B55faee;
case 0x55fb00:goto L55fb00;
case 0x55fb01:c.instructions+=10;goto B55fb01;
case 0x55fb02:c.instructions+=9;goto B55fb02;
case 0x55fb03:c.instructions+=8;goto B55fb03;
case 0x55fb05:c.instructions+=7;goto B55fb05;
case 0x55fb08:c.instructions+=6;goto B55fb08;
case 0x55fb09:c.instructions+=5;goto B55fb09;
case 0x55fb0e:c.instructions+=4;goto B55fb0e;
case 0x55fb0f:c.instructions+=3;goto B55fb0f;
case 0x55fb16:c.instructions+=2;goto B55fb16;
case 0x55fb1d:c.instructions+=1;goto B55fb1d;
case 0x55fb22:goto L55fb22;
case 0x55fb25:c.instructions+=4;goto B55fb25;
case 0x55fb27:c.instructions+=3;goto B55fb27;
case 0x55fb2a:c.instructions+=2;goto B55fb2a;
case 0x55fb2c:c.instructions+=1;goto B55fb2c;
case 0x55fb2e:goto L55fb2e;
case 0x55fb2f:c.instructions+=1;goto B55fb2f;
case 0x55fb34:goto L55fb34;
case 0x55fb37:c.instructions+=2;goto B55fb37;
case 0x55fb39:c.instructions+=1;goto B55fb39;
case 0x55fb3b:goto L55fb3b;
case 0x55fb40:c.instructions+=2;goto B55fb40;
case 0x55fb42:c.instructions+=1;goto B55fb42;
case 0x55fb47:goto L55fb47;
case 0x55fb49:c.instructions+=1;goto B55fb49;
case 0x55fb4b:goto L55fb4b;
case 0x55fb50:c.instructions+=2;goto B55fb50;
case 0x55fb52:c.instructions+=1;goto B55fb52;
case 0x55fb54:goto L55fb54;
case 0x55fb57:c.instructions+=3;goto B55fb57;
case 0x55fb58:c.instructions+=2;goto B55fb58;
case 0x55fb5d:c.instructions+=1;goto B55fb5d;
case 0x55fb62:goto L55fb62;
case 0x55fb64:c.instructions+=2;goto B55fb64;
case 0x55fb66:c.instructions+=1;goto B55fb66;
case 0x55fb68:goto L55fb68;
case 0x55fb6b:c.instructions+=2;goto B55fb6b;
case 0x55fb6d:c.instructions+=1;goto B55fb6d;
case 0x55fb6f:goto L55fb6f;
case 0x55fb70:goto L55fb70;
case 0x55fb75:c.instructions+=1;goto B55fb75;
case 0x55fb7a:goto L55fb7a;
case 0x55fb7d:c.instructions+=3;goto B55fb7d;
case 0x55fb80:c.instructions+=2;goto B55fb80;
case 0x55fb82:c.instructions+=1;goto B55fb82;
case 0x55fb84:goto L55fb84;
case 0x55fb87:c.instructions+=2;goto B55fb87;
case 0x55fb89:c.instructions+=1;goto B55fb89;
case 0x55fb8b:goto L55fb8b;
case 0x55fb8d:goto L55fb8d;
case 0x55fb8f:c.instructions+=1;goto B55fb8f;
case 0x55fb91:goto L55fb91;
case 0x55fb94:c.instructions+=1;goto B55fb94;
case 0x55fb96:goto L55fb96;
case 0x55fb98:c.instructions+=2;goto B55fb98;
case 0x55fb9b:c.instructions+=1;goto B55fb9b;
case 0x55fba0:goto L55fba0;
case 0x55fba3:c.instructions+=1;goto B55fba3;
case 0x55fba6:goto L55fba6;
case 0x55fba9:goto L55fba9;
case 0x55fbab:c.instructions+=2;goto B55fbab;
case 0x55fbae:c.instructions+=1;goto B55fbae;
case 0x55fbb3:goto L55fbb3;
case 0x55fbb9:c.instructions+=4;goto B55fbb9;
case 0x55fbbb:c.instructions+=3;goto B55fbbb;
case 0x55fbbd:c.instructions+=2;goto B55fbbd;
case 0x55fbc1:c.instructions+=1;goto B55fbc1;
case 0x55fbc6:goto L55fbc6;
case 0x55fbc9:c.instructions+=3;goto B55fbc9;
case 0x55fbce:c.instructions+=2;goto B55fbce;
case 0x55fbcf:c.instructions+=1;goto B55fbcf;
case 0x55fbd4:goto L55fbd4;
case 0x55fbd7:c.instructions+=3;goto B55fbd7;
case 0x55fbdc:c.instructions+=2;goto B55fbdc;
case 0x55fbdd:c.instructions+=1;goto B55fbdd;
case 0x55fbe2:goto L55fbe2;
case 0x55fbe5:c.instructions+=3;goto B55fbe5;
case 0x55fbe8:c.instructions+=2;goto B55fbe8;
case 0x55fbea:c.instructions+=1;goto B55fbea;
case 0x55fbec:goto L55fbec;
case 0x55fbef:c.instructions+=1;goto B55fbef;
case 0x55fbf1:goto L55fbf1;
case 0x55fbf3:goto L55fbf3;
case 0x55fbf6:c.instructions+=1;goto B55fbf6;
case 0x55fbf8:goto L55fbf8;
case 0x55fbfe:c.instructions+=2;goto B55fbfe;
case 0x55fbff:c.instructions+=1;goto B55fbff;
case 0x55fc04:goto L55fc04;
case 0x55fc07:c.instructions+=1;goto B55fc07;
case 0x55fc09:goto L55fc09;
case 0x55fc0c:c.instructions+=2;goto B55fc0c;
case 0x55fc0e:c.instructions+=1;goto B55fc0e;
case 0x55fc10:goto L55fc10;
case 0x55fc13:c.instructions+=1;goto B55fc13;
case 0x55fc15:goto L55fc15;
case 0x55fc17:goto L55fc17;
case 0x55fc1a:c.instructions+=1;goto B55fc1a;
case 0x55fc1c:goto L55fc1c;
case 0x55fc22:c.instructions+=2;goto B55fc22;
case 0x55fc23:c.instructions+=1;goto B55fc23;
case 0x55fc28:goto L55fc28;
case 0x55fc2b:c.instructions+=1;goto B55fc2b;
case 0x55fc2d:goto L55fc2d;
case 0x55fc33:c.instructions+=2;goto B55fc33;
case 0x55fc34:c.instructions+=1;goto B55fc34;
case 0x55fc39:goto L55fc39;
case 0x55fc3f:c.instructions+=2;goto B55fc3f;
case 0x55fc40:c.instructions+=1;goto B55fc40;
case 0x55fc45:goto L55fc45;
case 0x55fc48:goto L55fc48;
case 0x55fc4b:c.instructions+=2;goto B55fc4b;
case 0x55fc4d:c.instructions+=1;goto B55fc4d;
case 0x55fc4f:goto L55fc4f;
case 0x55fc50:c.instructions+=1;goto B55fc50;
case 0x55fc55:goto L55fc55;
case 0x55fc58:c.instructions+=2;goto B55fc58;
case 0x55fc5a:c.instructions+=1;goto B55fc5a;
case 0x55fc5c:goto L55fc5c;
case 0x55fc61:c.instructions+=2;goto B55fc61;
case 0x55fc63:c.instructions+=1;goto B55fc63;
case 0x55fc68:goto L55fc68;
case 0x55fc6a:c.instructions+=1;goto B55fc6a;
case 0x55fc6c:goto L55fc6c;
case 0x55fc71:c.instructions+=2;goto B55fc71;
case 0x55fc73:c.instructions+=1;goto B55fc73;
case 0x55fc75:goto L55fc75;
case 0x55fc78:c.instructions+=3;goto B55fc78;
case 0x55fc79:c.instructions+=2;goto B55fc79;
case 0x55fc7e:c.instructions+=1;goto B55fc7e;
case 0x55fc83:goto L55fc83;
case 0x55fc85:c.instructions+=2;goto B55fc85;
case 0x55fc87:c.instructions+=1;goto B55fc87;
case 0x55fc89:goto L55fc89;
case 0x55fc8c:c.instructions+=2;goto B55fc8c;
case 0x55fc8e:c.instructions+=1;goto B55fc8e;
case 0x55fc90:goto L55fc90;
case 0x55fc95:c.instructions+=1;goto B55fc95;
case 0x55fc9a:goto L55fc9a;
case 0x55fc9d:c.instructions+=3;goto B55fc9d;
case 0x55fca0:c.instructions+=2;goto B55fca0;
case 0x55fca2:c.instructions+=1;goto B55fca2;
case 0x55fca4:goto L55fca4;
case 0x55fca7:c.instructions+=2;goto B55fca7;
case 0x55fca9:c.instructions+=1;goto B55fca9;
case 0x55fcab:goto L55fcab;
case 0x55fcac:c.instructions+=4;goto B55fcac;
case 0x55fcad:c.instructions+=3;goto B55fcad;
case 0x55fcae:c.instructions+=2;goto B55fcae;
case 0x55fcaf:c.instructions+=1;goto B55fcaf;
case 0x55fcb0:goto L55fcb0;
case 0x55fcb2:c.instructions+=1;goto B55fcb2;
case 0x55fcb4:goto L55fcb4;
case 0x55fcb7:c.instructions+=1;goto B55fcb7;
case 0x55fcb9:goto L55fcb9;
case 0x55fcbb:c.instructions+=2;goto B55fcbb;
case 0x55fcbe:c.instructions+=1;goto B55fcbe;
case 0x55fcc3:goto L55fcc3;
case 0x55fcc6:c.instructions+=1;goto B55fcc6;
case 0x55fcc9:goto L55fcc9;
case 0x55fccc:goto L55fccc;
case 0x55fccd:c.instructions+=4;goto B55fccd;
case 0x55fcce:c.instructions+=3;goto B55fcce;
case 0x55fccf:c.instructions+=2;goto B55fccf;
case 0x55fcd0:c.instructions+=1;goto B55fcd0;
case 0x55fce0:goto L55fce0;
case 0x55fce1:c.instructions+=7;goto B55fce1;
case 0x55fce3:c.instructions+=6;goto B55fce3;
case 0x55fce4:c.instructions+=5;goto B55fce4;
case 0x55fce5:c.instructions+=4;goto B55fce5;
case 0x55fce7:c.instructions+=3;goto B55fce7;
case 0x55fced:c.instructions+=2;goto B55fced;
case 0x55fcef:c.instructions+=1;goto B55fcef;
case 0x55fcf4:goto L55fcf4;
case 0x55fcf7:c.instructions+=5;goto B55fcf7;
case 0x55fcfc:c.instructions+=4;goto B55fcfc;
case 0x55fcfd:c.instructions+=3;goto B55fcfd;
case 0x55fd04:c.instructions+=2;goto B55fd04;
case 0x55fd0b:c.instructions+=1;goto B55fd0b;
case 0x55fd10:goto L55fd10;
case 0x55fd13:c.instructions+=4;goto B55fd13;
case 0x55fd19:c.instructions+=3;goto B55fd19;
case 0x55fd1b:c.instructions+=2;goto B55fd1b;
case 0x55fd1f:c.instructions+=1;goto B55fd1f;
case 0x55fd24:goto L55fd24;
case 0x55fd27:c.instructions+=4;goto B55fd27;
case 0x55fd2c:c.instructions+=3;goto B55fd2c;
case 0x55fd2d:c.instructions+=2;goto B55fd2d;
case 0x55fd31:c.instructions+=1;goto B55fd31;
case 0x55fd36:goto L55fd36;
case 0x55fd39:c.instructions+=3;goto B55fd39;
case 0x55fd3e:c.instructions+=2;goto B55fd3e;
case 0x55fd3f:c.instructions+=1;goto B55fd3f;
case 0x55fd44:goto L55fd44;
case 0x55fd4a:c.instructions+=3;goto B55fd4a;
case 0x55fd4d:c.instructions+=2;goto B55fd4d;
case 0x55fd50:c.instructions+=1;goto B55fd50;
case 0x55fd55:goto L55fd55;
case 0x55fd56:c.instructions+=1;goto B55fd56;
case 0x55fd5b:goto L55fd5b;
case 0x55fd5e:c.instructions+=4;goto B55fd5e;
case 0x55fd61:c.instructions+=3;goto B55fd61;
case 0x55fd63:c.instructions+=2;goto B55fd63;
case 0x55fd68:c.instructions+=1;goto B55fd68;
case 0x55fd6a:goto L55fd6a;
case 0x55fd6d:c.instructions+=4;goto B55fd6d;
case 0x55fd6e:c.instructions+=3;goto B55fd6e;
case 0x55fd71:c.instructions+=2;goto B55fd71;
case 0x55fd76:c.instructions+=1;goto B55fd76;
case 0x55fd7b:goto L55fd7b;
case 0x55fd7c:c.instructions+=3;goto B55fd7c;
case 0x55fd7e:c.instructions+=2;goto B55fd7e;
case 0x55fd83:c.instructions+=1;goto B55fd83;
case 0x55fd88:goto L55fd88;
case 0x55fd89:c.instructions+=3;goto B55fd89;
case 0x55fd8b:c.instructions+=2;goto B55fd8b;
case 0x55fd90:c.instructions+=1;goto B55fd90;
case 0x55fd95:goto L55fd95;
case 0x55fd97:c.instructions+=3;goto B55fd97;
case 0x55fd99:c.instructions+=2;goto B55fd99;
case 0x55fd9e:c.instructions+=1;goto B55fd9e;
case 0x55fda3:goto L55fda3;
case 0x55fda6:c.instructions+=4;goto B55fda6;
case 0x55fdab:c.instructions+=3;goto B55fdab;
case 0x55fdb0:c.instructions+=2;goto B55fdb0;
case 0x55fdb5:c.instructions+=1;goto B55fdb5;
case 0x55fdba:goto L55fdba;
case 0x55fdbd:c.instructions+=6;goto B55fdbd;
case 0x55fdc0:c.instructions+=5;goto B55fdc0;
case 0x55fdc2:c.instructions+=4;goto B55fdc2;
case 0x55fdc4:c.instructions+=3;goto B55fdc4;
case 0x55fdc5:c.instructions+=2;goto B55fdc5;
case 0x55fdc7:c.instructions+=1;goto B55fdc7;
case 0x55fdcc:goto L55fdcc;
case 0x55fdcf:c.instructions+=2;goto B55fdcf;
case 0x55fdd0:c.instructions+=1;goto B55fdd0;
case 0x55fdd2:goto L55fdd2;
case 0x55fdd8:c.instructions+=2;goto B55fdd8;
case 0x55fddd:c.instructions+=1;goto B55fddd;
case 0x55fde2:goto L55fde2;
case 0x55fde3:c.instructions+=3;goto B55fde3;
case 0x55fde5:c.instructions+=2;goto B55fde5;
case 0x55fdea:c.instructions+=1;goto B55fdea;
case 0x55fdef:goto L55fdef;
case 0x55fdf0:c.instructions+=3;goto B55fdf0;
case 0x55fdf2:c.instructions+=2;goto B55fdf2;
case 0x55fdf7:c.instructions+=1;goto B55fdf7;
case 0x55fdfc:goto L55fdfc;
case 0x55fdfe:c.instructions+=3;goto B55fdfe;
case 0x55fe00:c.instructions+=2;goto B55fe00;
case 0x55fe05:c.instructions+=1;goto B55fe05;
case 0x55fe0a:goto L55fe0a;
case 0x55fe0d:c.instructions+=4;goto B55fe0d;
case 0x55fe12:c.instructions+=3;goto B55fe12;
case 0x55fe17:c.instructions+=2;goto B55fe17;
case 0x55fe1c:c.instructions+=1;goto B55fe1c;
case 0x55fe21:goto L55fe21;
case 0x55fe27:c.instructions+=5;goto B55fe27;
case 0x55fe29:c.instructions+=4;goto B55fe29;
case 0x55fe2b:c.instructions+=3;goto B55fe2b;
case 0x55fe2c:c.instructions+=2;goto B55fe2c;
case 0x55fe2e:c.instructions+=1;goto B55fe2e;
case 0x55fe33:goto L55fe33;
case 0x55fe36:goto L55fe36;
case 0x55fe39:c.instructions+=3;goto B55fe39;
case 0x55fe3b:c.instructions+=2;goto B55fe3b;
case 0x55fe3d:c.instructions+=1;goto B55fe3d;
case 0x55fe3f:goto L55fe3f;
case 0x55fe42:c.instructions+=4;goto B55fe42;
case 0x55fe47:c.instructions+=3;goto B55fe47;
case 0x55fe4c:c.instructions+=2;goto B55fe4c;
case 0x55fe4d:c.instructions+=1;goto B55fe4d;
case 0x55fe4f:goto L55fe4f;
case 0x55fe52:c.instructions+=3;goto B55fe52;
case 0x55fe57:c.instructions+=2;goto B55fe57;
case 0x55fe5c:c.instructions+=1;goto B55fe5c;
case 0x55fe5d:goto L55fe5d;
case 0x55fe62:goto L55fe62;
case 0x55fe65:c.instructions+=4;goto B55fe65;
case 0x55fe6a:c.instructions+=3;goto B55fe6a;
case 0x55fe6f:c.instructions+=2;goto B55fe6f;
case 0x55fe74:c.instructions+=1;goto B55fe74;
case 0x55fe79:goto L55fe79;
case 0x55fe7b:c.instructions+=2;goto B55fe7b;
case 0x55fe7d:c.instructions+=1;goto B55fe7d;
case 0x55fe82:goto L55fe82;
case 0x55fe85:c.instructions+=4;goto B55fe85;
case 0x55fe86:c.instructions+=3;goto B55fe86;
case 0x55fe87:c.instructions+=2;goto B55fe87;
case 0x55fe88:c.instructions+=1;goto B55fe88;
case 0x55fe90:goto L55fe90;
case 0x55fe91:c.instructions+=9;goto B55fe91;
case 0x55fe94:c.instructions+=8;goto B55fe94;
case 0x55fe97:c.instructions+=7;goto B55fe97;
case 0x55fe98:c.instructions+=6;goto B55fe98;
case 0x55fe9e:c.instructions+=5;goto B55fe9e;
case 0x55fea1:c.instructions+=4;goto B55fea1;
case 0x55fea6:c.instructions+=3;goto B55fea6;
case 0x55fea8:c.instructions+=2;goto B55fea8;
case 0x55feb0:c.instructions+=1;goto B55feb0;
case 0x55feb2:goto L55feb2;
case 0x55feb9:goto L55feb9;
case 0x55fec1:c.instructions+=3;goto B55fec1;
case 0x55fec6:c.instructions+=2;goto B55fec6;
case 0x55fecb:c.instructions+=1;goto B55fecb;
case 0x55fecd:goto L55fecd;
case 0x55fed5:c.instructions+=3;goto B55fed5;
case 0x55feda:c.instructions+=2;goto B55feda;
case 0x55fedf:c.instructions+=1;goto B55fedf;
case 0x55fee1:goto L55fee1;
case 0x55fee9:c.instructions+=2;goto B55fee9;
case 0x55feee:c.instructions+=1;goto B55feee;
case 0x55fef3:goto L55fef3;
case 0x55fef4:c.instructions+=5;goto B55fef4;
case 0x55fef7:c.instructions+=4;goto B55fef7;
case 0x55fef9:c.instructions+=3;goto B55fef9;
case 0x55fefa:c.instructions+=2;goto B55fefa;
case 0x55fefc:c.instructions+=1;goto B55fefc;
case 0x55fefe:goto L55fefe;
case 0x55ff00:goto L55ff00;
case 0x55ff01:c.instructions+=2;goto B55ff01;
case 0x55ff06:c.instructions+=1;goto B55ff06;
case 0x55ff0b:goto L55ff0b;
case 0x55ff0c:c.instructions+=2;goto B55ff0c;
case 0x55ff0e:c.instructions+=1;goto B55ff0e;
case 0x55ff10:goto L55ff10;
case 0x55ff13:c.instructions+=3;goto B55ff13;
case 0x55ff14:c.instructions+=2;goto B55ff14;
case 0x55ff15:c.instructions+=1;goto B55ff15;
case 0x55ff17:goto L55ff17;
case 0x55ff1a:c.instructions+=1;goto B55ff1a;
case 0x55ff1c:goto L55ff1c;
case 0x55ff20:c.instructions+=4;goto B55ff20;
case 0x55ff21:c.instructions+=3;goto B55ff21;
case 0x55ff22:c.instructions+=2;goto B55ff22;
case 0x55ff27:c.instructions+=1;goto B55ff27;
case 0x55ff2c:goto L55ff2c;
case 0x55ff2e:c.instructions+=1;goto B55ff2e;
case 0x55ff30:goto L55ff30;
case 0x55ff31:c.instructions+=3;goto B55ff31;
case 0x55ff32:c.instructions+=2;goto B55ff32;
case 0x55ff37:c.instructions+=1;goto B55ff37;
case 0x55ff3c:goto L55ff3c;
case 0x55ff41:c.instructions+=3;goto B55ff41;
case 0x55ff42:c.instructions+=2;goto B55ff42;
case 0x55ff45:c.instructions+=1;goto B55ff45;
case 0x55ff70:goto L55ff70;
case 0x55ff73:c.instructions+=4;goto B55ff73;
case 0x55ff76:c.instructions+=3;goto B55ff76;
case 0x55ff7b:c.instructions+=2;goto B55ff7b;
case 0x55ff7c:c.instructions+=1;goto B55ff7c;
case 0x55ff7e:goto L55ff7e;
case 0x55ff83:c.instructions+=1;goto B55ff83;
case 0x55ff85:goto L55ff85;
case 0x55ff8a:c.instructions+=2;goto B55ff8a;
case 0x55ff8d:c.instructions+=1;goto B55ff8d;
case 0x55ff8f:goto L55ff8f;
case 0x55ff96:goto L55ff96;
case 0x55ff9b:c.instructions+=1;goto B55ff9b;
case 0x55ff9d:goto L55ff9d;
case 0x55ffa2:c.instructions+=1;goto B55ffa2;
case 0x55ffa4:goto L55ffa4;
case 0x55ffa9:c.instructions+=1;goto B55ffa9;
case 0x55ffab:goto L55ffab;
case 0x55ffb0:c.instructions+=2;goto B55ffb0;
case 0x55ffb3:c.instructions+=1;goto B55ffb3;
case 0x55ffb5:goto L55ffb5;
case 0x55ffbc:goto L55ffbc;
case 0x55ffc1:c.instructions+=1;goto B55ffc1;
case 0x55ffc3:goto L55ffc3;
case 0x55ffc8:goto L55ffc8;
case 0x55ffc9:c.instructions+=3;goto B55ffc9;
case 0x55ffcc:c.instructions+=2;goto B55ffcc;
case 0x55ffce:c.instructions+=1;goto B55ffce;
case 0x55ffd0:goto L55ffd0;
case 0x55ffd1:c.instructions+=2;goto B55ffd1;
case 0x55ffd6:c.instructions+=1;goto B55ffd6;
case 0x55ffdb:goto L55ffdb;
case 0x55ffdc:c.instructions+=2;goto B55ffdc;
case 0x55ffde:c.instructions+=1;goto B55ffde;
case 0x55ffe0:goto L55ffe0;
case 0x55ffe1:c.instructions+=3;goto B55ffe1;
case 0x55ffe6:c.instructions+=2;goto B55ffe6;
case 0x55ffe7:c.instructions+=1;goto B55ffe7;
case 0x55ffec:goto L55ffec;
case 0x55ffed:c.instructions+=1;goto B55ffed;
default:missing_instruction(c.pc);}
B55f000:L55f000:{c.instructions+=1;NFSU2_TR(0x55f000);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f005ull));
TAIL_STATIC(0x413440u,413);
}
B55f005:L55f005:{c.instructions+=4;NFSU2_TR(0x55f005);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f007:{NFSU2_TR(0x55f007);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f009:{NFSU2_TR(0x55f009);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f00e:{NFSU2_TR(0x55f00e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f013ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B55f013:L55f013:{c.instructions+=5;NFSU2_TR(0x55f013);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55f016:{NFSU2_TR(0x55f016);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55f019:{NFSU2_TR(0x55f019);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55f01b:{NFSU2_TR(0x55f01b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f01d:{NFSU2_TR(0x55f01d);
if(r1(R+518)){{goto L55f02f;}}
}
B55f01f:L55f01f:{c.instructions+=5;NFSU2_TR(0x55f01f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55f022:{NFSU2_TR(0x55f022);
u8 U[4];
w4(U+0,u32(0x79d79cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f027:{NFSU2_TR(0x55f027);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f02c:{NFSU2_TR(0x55f02c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f02d:{NFSU2_TR(0x55f02d);
{goto L55f03d;}
}
B55f02f:L55f02f:{c.instructions+=4;NFSU2_TR(0x55f02f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55f032:{NFSU2_TR(0x55f032);
u8 U[4];
w4(U+0,u32(0x79d790ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f037:{NFSU2_TR(0x55f037);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f03c:{NFSU2_TR(0x55f03c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f03d:L55f03d:{c.instructions+=1;NFSU2_TR(0x55f03d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f042ull));
TAIL_STATIC(0x537c00u,537);
}
B55f042:L55f042:{c.instructions+=5;NFSU2_TR(0x55f042);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B55f045:{NFSU2_TR(0x55f045);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f04a:{NFSU2_TR(0x55f04a);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f04f:{NFSU2_TR(0x55f04f);
w4(R+4,u32(0x8637d0ull));
}
B55f054:{NFSU2_TR(0x55f054);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f059ull));
TAIL_STATIC(0x55b1a0u,55b);
}
B55f059:L55f059:{c.instructions+=3;NFSU2_TR(0x55f059);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f05b:{NFSU2_TR(0x55f05b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f05d:{NFSU2_TR(0x55f05d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f062ull));
TAIL_STATIC(0x4c2140u,4c2);
}
B55f062:L55f062:{c.instructions+=6;NFSU2_TR(0x55f062);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55f065:{NFSU2_TR(0x55f065);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B55f06b:{NFSU2_TR(0x55f06b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55f06e:{NFSU2_TR(0x55f06e);
u8 U[4];
w4(U+0,u32(0x790634ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f073:{NFSU2_TR(0x55f073);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f074:{NFSU2_TR(0x55f074);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f079ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B55f079:L55f079:{c.instructions+=3;NFSU2_TR(0x55f079);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55f07a:{NFSU2_TR(0x55f07a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55f07b:{NFSU2_TR(0x55f07b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55f080:L55f080:{c.instructions+=15;NFSU2_TR(0x55f080);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f081:{NFSU2_TR(0x55f081);
__builtin_memmove((R+20),(R+16),4);
}
B55f083:{NFSU2_TR(0x55f083);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55f086:{NFSU2_TR(0x55f086);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55f089:{NFSU2_TR(0x55f089);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f08a:{NFSU2_TR(0x55f08a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f08b:{NFSU2_TR(0x55f08b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55f08e:{NFSU2_TR(0x55f08e);
__builtin_memmove((R+24),(R+4),4);
}
B55f090:{NFSU2_TR(0x55f090);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55f093:{NFSU2_TR(0x55f093);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f094:{NFSU2_TR(0x55f094);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f095:{NFSU2_TR(0x55f095);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f096:{NFSU2_TR(0x55f096);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f097:{NFSU2_TR(0x55f097);
__builtin_memmove((R+4),(R+24),4);
}
B55f099:{NFSU2_TR(0x55f099);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f09eull));
TAIL_STATIC(0x543d40u,543);
}
B55f09e:L55f09e:{c.instructions+=2;NFSU2_TR(0x55f09e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x911ab364ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55f0a4:{NFSU2_TR(0x55f0a4);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L55f206;}}
}
B55f0aa:L55f0aa:{c.instructions+=1;NFSU2_TR(0x55f0aa);
if(r1(R+518)){{goto L55f1c0;}}
}
B55f0b0:L55f0b0:{c.instructions+=2;NFSU2_TR(0x55f0b0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55f0b6:{NFSU2_TR(0x55f0b6);
if(r1(R+518)){{goto L55f0d6;}}
}
B55f0b8:L55f0b8:{c.instructions+=2;NFSU2_TR(0x55f0b8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1fab5998ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55f0be:{NFSU2_TR(0x55f0be);
if(r1(R+518)){{goto L55f325;}}
}
B55f0c4:L55f0c4:{c.instructions+=2;NFSU2_TR(0x55f0c4);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x34dc1becull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x34dc1becull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x34dc1becull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55f0ca:{NFSU2_TR(0x55f0ca);
if(r1(R+518)){{goto L55f325;}}
}
B55f0d0:L55f0d0:{c.instructions+=4;NFSU2_TR(0x55f0d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55f0d1:{NFSU2_TR(0x55f0d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55f0d2:{NFSU2_TR(0x55f0d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55f0d3:{NFSU2_TR(0x55f0d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55f0d6:L55f0d6:{c.instructions+=3;NFSU2_TR(0x55f0d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55f0d9:{NFSU2_TR(0x55f0d9);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x3b83203ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x3b83203ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x3b83203ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B55f0e0:{NFSU2_TR(0x55f0e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55f179;}}
}
B55f0e6:L55f0e6:{c.instructions+=3;NFSU2_TR(0x55f0e6);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f0e8:{NFSU2_TR(0x55f0e8);
w4(R+4,u32(0x838980ull));
}
B55f0ed:{NFSU2_TR(0x55f0ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f0f2ull));
TAIL_STATIC(0x53aea0u,53a);
}
B55f0f2:L55f0f2:{c.instructions+=4;NFSU2_TR(0x55f0f2);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f0f4:{NFSU2_TR(0x55f0f4);
w4(R+4,u32(0x8392c0ull));
}
B55f0f9:{NFSU2_TR(0x55f0f9);
__builtin_memmove((R+28),(R+0),4);
}
B55f0fb:{NFSU2_TR(0x55f0fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f100ull));
TAIL_STATIC(0x6102f0u,610);
}
B55f100:L55f100:{c.instructions+=2;NFSU2_TR(0x55f100);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55f102:{NFSU2_TR(0x55f102);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55f131;}}
}
B55f104:L55f104:{c.instructions+=5;NFSU2_TR(0x55f104);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55f107:{NFSU2_TR(0x55f107);
u8 U[4];
w4(U+0,u32(0xda15d7e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f10c:{NFSU2_TR(0x55f10c);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f111:{NFSU2_TR(0x55f111);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f112:{NFSU2_TR(0x55f112);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f117ull));
TAIL_STATIC(0x558430u,558);
}
B55f117:L55f117:{c.instructions+=4;NFSU2_TR(0x55f117);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55f11a:{NFSU2_TR(0x55f11a);
__builtin_memmove((R+4),(R+24),4);
}
B55f11c:{NFSU2_TR(0x55f11c);
s4(0x838970,u32(0x34dc1becull));
}
B55f126:{NFSU2_TR(0x55f126);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f12bull));
TAIL_STATIC(0x538c00u,538);
}
B55f12b:L55f12b:{c.instructions+=4;NFSU2_TR(0x55f12b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55f12c:{NFSU2_TR(0x55f12c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55f12d:{NFSU2_TR(0x55f12d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55f12e:{NFSU2_TR(0x55f12e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55f131:L55f131:{c.instructions+=11;NFSU2_TR(0x55f131);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55f134:{NFSU2_TR(0x55f134);
u8 U[4];
w4(U+0,u32(0x5d336f96ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f139:{NFSU2_TR(0x55f139);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f13b:{NFSU2_TR(0x55f13b);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f140:{NFSU2_TR(0x55f140);
u8 U[4];
w4(U+0,u32(0x1fab5998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f145:{NFSU2_TR(0x55f145);
u8 U[4];
w4(U+0,u32(0xd05fc3a3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f14a:{NFSU2_TR(0x55f14a);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f14f:{NFSU2_TR(0x55f14f);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f154:{NFSU2_TR(0x55f154);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f159:{NFSU2_TR(0x55f159);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f15a:{NFSU2_TR(0x55f15a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f15full));
TAIL_STATIC(0x558790u,558);
}
B55f15f:L55f15f:{c.instructions+=4;NFSU2_TR(0x55f15f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B55f162:{NFSU2_TR(0x55f162);
__builtin_memmove((R+4),(R+24),4);
}
B55f164:{NFSU2_TR(0x55f164);
s4(0x838970,u32(0x1fab5998ull));
}
B55f16e:{NFSU2_TR(0x55f16e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f173ull));
TAIL_STATIC(0x538c00u,538);
}
B55f173:L55f173:{c.instructions+=4;NFSU2_TR(0x55f173);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55f174:{NFSU2_TR(0x55f174);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55f175:{NFSU2_TR(0x55f175);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55f176:{NFSU2_TR(0x55f176);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55f179:L55f179:{c.instructions+=5;NFSU2_TR(0x55f179);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55f17c:{NFSU2_TR(0x55f17c);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f181:{NFSU2_TR(0x55f181);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f186:{NFSU2_TR(0x55f186);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f187:{NFSU2_TR(0x55f187);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f18cull));
TAIL_STATIC(0x537d40u,537);
}
B55f18c:L55f18c:{c.instructions+=3;NFSU2_TR(0x55f18c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55f18f:{NFSU2_TR(0x55f18f);
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
B55f191:{NFSU2_TR(0x55f191);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55f32c;}}
}
B55f197:L55f197:{c.instructions+=3;NFSU2_TR(0x55f197);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55f19a:{NFSU2_TR(0x55f19a);
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
B55f19c:{NFSU2_TR(0x55f19c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55f32c;}}
}
B55f1a2:L55f1a2:{c.instructions+=6;NFSU2_TR(0x55f1a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55f1a5:{NFSU2_TR(0x55f1a5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f1a7:{NFSU2_TR(0x55f1a7);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f1ac:{NFSU2_TR(0x55f1ac);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f1b1:{NFSU2_TR(0x55f1b1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f1b2:{NFSU2_TR(0x55f1b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f1b7ull));
TAIL_STATIC(0x537c60u,537);
}
B55f1b7:L55f1b7:{c.instructions+=5;NFSU2_TR(0x55f1b7);
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
B55f1ba:{NFSU2_TR(0x55f1ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55f1bb:{NFSU2_TR(0x55f1bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55f1bc:{NFSU2_TR(0x55f1bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55f1bd:{NFSU2_TR(0x55f1bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55f1c0:L55f1c0:{c.instructions+=5;NFSU2_TR(0x55f1c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55f1c3:{NFSU2_TR(0x55f1c3);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f1c8:{NFSU2_TR(0x55f1c8);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f1cd:{NFSU2_TR(0x55f1cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f1ce:{NFSU2_TR(0x55f1ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f1d3ull));
TAIL_STATIC(0x537d40u,537);
}
B55f1d3:L55f1d3:{c.instructions+=3;NFSU2_TR(0x55f1d3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55f1d6:{NFSU2_TR(0x55f1d6);
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
B55f1d8:{NFSU2_TR(0x55f1d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55f32c;}}
}
B55f1de:L55f1de:{c.instructions+=7;NFSU2_TR(0x55f1de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55f1e1:{NFSU2_TR(0x55f1e1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f1e3:{NFSU2_TR(0x55f1e3);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f1e8:{NFSU2_TR(0x55f1e8);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f1ed:{NFSU2_TR(0x55f1ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f1ee:{NFSU2_TR(0x55f1ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
w4(U+4,u32(0x911ab364ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55f1f8:{NFSU2_TR(0x55f1f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f1fdull));
TAIL_STATIC(0x537c60u,537);
}
B55f1fd:L55f1fd:{c.instructions+=5;NFSU2_TR(0x55f1fd);
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
B55f200:{NFSU2_TR(0x55f200);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55f201:{NFSU2_TR(0x55f201);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55f202:{NFSU2_TR(0x55f202);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55f203:{NFSU2_TR(0x55f203);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55f206:L55f206:{c.instructions+=2;NFSU2_TR(0x55f206);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb4edeb6dull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55f20c:{NFSU2_TR(0x55f20c);
if(r1(R+518)){{goto L55f325;}}
}
B55f212:L55f212:{c.instructions+=2;NFSU2_TR(0x55f212);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xd05fc3a3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xd05fc3a3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xd05fc3a3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55f218:{NFSU2_TR(0x55f218);
if(r1(R+518)){{goto L55f296;}}
}
B55f21a:L55f21a:{c.instructions+=2;NFSU2_TR(0x55f21a);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xe1fde1d1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xe1fde1d1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xe1fde1d1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55f220:{NFSU2_TR(0x55f220);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55f32c;}}
}
B55f226:L55f226:{c.instructions+=3;NFSU2_TR(0x55f226);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55f22c:{NFSU2_TR(0x55f22c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55f231:{NFSU2_TR(0x55f231);
if(r1(R+518)){{goto L55f268;}}
}
B55f233:L55f233:{c.instructions+=2;NFSU2_TR(0x55f233);
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
B55f238:{NFSU2_TR(0x55f238);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55f32c;}}
}
B55f23e:L55f23e:{c.instructions+=4;NFSU2_TR(0x55f23e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55f241:{NFSU2_TR(0x55f241);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f243:{NFSU2_TR(0x55f243);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f244:{NFSU2_TR(0x55f244);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f249ull));
TAIL_STATIC(0x50b8c0u,50b);
}
B55f249:L55f249:{c.instructions+=3;NFSU2_TR(0x55f249);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55f24c:{NFSU2_TR(0x55f24c);
s4(0x839bbc,u32(0x0ull));
}
B55f256:{NFSU2_TR(0x55f256);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f25bull));
TAIL_STATIC(0x54f980u,54f);
}
B55f25b:L55f25b:{c.instructions+=2;NFSU2_TR(0x55f25b);
__builtin_memmove((R+4),(R+0),4);
}
B55f25d:{NFSU2_TR(0x55f25d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f262ull));
TAIL_STATIC(0x55bdf0u,55b);
}
B55f262:L55f262:{c.instructions+=4;NFSU2_TR(0x55f262);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55f263:{NFSU2_TR(0x55f263);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55f264:{NFSU2_TR(0x55f264);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55f265:{NFSU2_TR(0x55f265);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55f268:L55f268:{c.instructions+=8;NFSU2_TR(0x55f268);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55f26b:{NFSU2_TR(0x55f26b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55f26e:{NFSU2_TR(0x55f26e);
__builtin_memmove(gp(0x839bbc),(R+8),4);
}
B55f274:{NFSU2_TR(0x55f274);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55f277:{NFSU2_TR(0x55f277);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55f27a:{NFSU2_TR(0x55f27a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f27b:{NFSU2_TR(0x55f27b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f27c:{NFSU2_TR(0x55f27c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f281ull));
TAIL_STATIC(0x50b8c0u,50b);
}
B55f281:L55f281:{c.instructions+=2;NFSU2_TR(0x55f281);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55f284:{NFSU2_TR(0x55f284);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f289ull));
TAIL_STATIC(0x54f980u,54f);
}
B55f289:L55f289:{c.instructions+=2;NFSU2_TR(0x55f289);
__builtin_memmove((R+4),(R+0),4);
}
B55f28b:{NFSU2_TR(0x55f28b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f290ull));
TAIL_STATIC(0x55bd60u,55b);
}
B55f290:L55f290:{c.instructions+=4;NFSU2_TR(0x55f290);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55f291:{NFSU2_TR(0x55f291);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55f292:{NFSU2_TR(0x55f292);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55f293:{NFSU2_TR(0x55f293);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55f296:L55f296:{c.instructions+=3;NFSU2_TR(0x55f296);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f298:{NFSU2_TR(0x55f298);
w4(R+4,u32(0x838980ull));
}
B55f29d:{NFSU2_TR(0x55f29d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f2a2ull));
TAIL_STATIC(0x53aea0u,53a);
}
B55f2a2:L55f2a2:{c.instructions+=5;NFSU2_TR(0x55f2a2);
__builtin_memmove((R+28),(R+0),4);
}
B55f2a4:{NFSU2_TR(0x55f2a4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f2a5:{NFSU2_TR(0x55f2a5);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f2a7:{NFSU2_TR(0x55f2a7);
w4(R+4,u32(0x8392c0ull));
}
B55f2ac:{NFSU2_TR(0x55f2ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f2b1ull));
TAIL_STATIC(0x631d20u,631);
}
B55f2b1:L55f2b1:{c.instructions+=4;NFSU2_TR(0x55f2b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f2b2:{NFSU2_TR(0x55f2b2);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f2b4:{NFSU2_TR(0x55f2b4);
w4(R+4,u32(0x8392c0ull));
}
B55f2b9:{NFSU2_TR(0x55f2b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f2beull));
TAIL_STATIC(0x631d20u,631);
}
B55f2be:L55f2be:{c.instructions+=3;NFSU2_TR(0x55f2be);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f2c3:{NFSU2_TR(0x55f2c3);
w4(R+4,u32(0x8389d0ull));
}
B55f2c8:{NFSU2_TR(0x55f2c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f2cdull));
TAIL_STATIC(0x413440u,413);
}
B55f2cd:L55f2cd:{c.instructions+=4;NFSU2_TR(0x55f2cd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f2cf:{NFSU2_TR(0x55f2cf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f2d1:{NFSU2_TR(0x55f2d1);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f2d6:{NFSU2_TR(0x55f2d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f2dbull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B55f2db:L55f2db:{c.instructions+=5;NFSU2_TR(0x55f2db);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B55f2e1:{NFSU2_TR(0x55f2e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55f2e4:{NFSU2_TR(0x55f2e4);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f2e9:{NFSU2_TR(0x55f2e9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B55f2ec:{NFSU2_TR(0x55f2ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f2f1ull));
TAIL_STATIC(0x503950u,503);
}
B55f2f1:L55f2f1:{c.instructions+=4;NFSU2_TR(0x55f2f1);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f2f6:{NFSU2_TR(0x55f2f6);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f2fb:{NFSU2_TR(0x55f2fb);
w4(R+4,u32(0x8637d0ull));
}
B55f300:{NFSU2_TR(0x55f300);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f305ull));
TAIL_STATIC(0x55b1a0u,55b);
}
B55f305:L55f305:{c.instructions+=3;NFSU2_TR(0x55f305);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f30a:{NFSU2_TR(0x55f30a);
w4(R+4,u32(0x8389d0ull));
}
B55f30f:{NFSU2_TR(0x55f30f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f314ull));
TAIL_STATIC(0x413440u,413);
}
B55f314:L55f314:{c.instructions+=4;NFSU2_TR(0x55f314);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f316:{NFSU2_TR(0x55f316);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f318:{NFSU2_TR(0x55f318);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f31d:{NFSU2_TR(0x55f31d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f322ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B55f322:L55f322:{c.instructions+=1;NFSU2_TR(0x55f322);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55f325:L55f325:{c.instructions+=2;NFSU2_TR(0x55f325);
__builtin_memmove((R+4),(R+24),4);
}
B55f327:{NFSU2_TR(0x55f327);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f32cull));
TAIL_STATIC(0x538ca0u,538);
}
B55f32c:L55f32c:{c.instructions+=4;NFSU2_TR(0x55f32c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55f32d:{NFSU2_TR(0x55f32d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55f32e:{NFSU2_TR(0x55f32e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55f32f:{NFSU2_TR(0x55f32f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55f340:L55f340:{c.instructions+=20;NFSU2_TR(0x55f340);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f342:{NFSU2_TR(0x55f342);
u8 U[4];
w4(U+0,u32(0x7784dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f347:{NFSU2_TR(0x55f347);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55f34d:{NFSU2_TR(0x55f34d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f34e:{NFSU2_TR(0x55f34e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f355:{NFSU2_TR(0x55f355);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x20ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55f358:{NFSU2_TR(0x55f358);
__builtin_memmove((R+0),gp(0x839bbc),4);
}
B55f35d:{NFSU2_TR(0x55f35d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f35e:{NFSU2_TR(0x55f35e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f362:{NFSU2_TR(0x55f362);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f363:{NFSU2_TR(0x55f363);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B55f367:{NFSU2_TR(0x55f367);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B55f36b:{NFSU2_TR(0x55f36b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f36c:{NFSU2_TR(0x55f36c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f370:{NFSU2_TR(0x55f370);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x79d7b0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55f378:{NFSU2_TR(0x55f378);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f37c:{NFSU2_TR(0x55f37c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f380:{NFSU2_TR(0x55f380);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f382:{NFSU2_TR(0x55f382);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55f38a:{NFSU2_TR(0x55f38a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f38full));
TAIL_STATIC(0x60fee0u,60f);
}
B55f38f:L55f38f:{c.instructions+=5;NFSU2_TR(0x55f38f);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B55f395:{NFSU2_TR(0x55f395);
__builtin_memmove((R+12),(R+0),4);
}
B55f397:{NFSU2_TR(0x55f397);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B55f399:{NFSU2_TR(0x55f399);
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
B55f39c:{NFSU2_TR(0x55f39c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f39full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B55f39f:L55f39f:{c.instructions+=7;NFSU2_TR(0x55f39f);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f3a1:{NFSU2_TR(0x55f3a1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f3a3:{NFSU2_TR(0x55f3a3);
__builtin_memmove((R+28),(R+0),4);
}
B55f3a5:{NFSU2_TR(0x55f3a5);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f3a7:{NFSU2_TR(0x55f3a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f3a8:{NFSU2_TR(0x55f3a8);
w4(R+4,u32(0x8a2b68ull));
}
B55f3ad:{NFSU2_TR(0x55f3ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f3b2ull));
TAIL_STATIC(0x61ba30u,61b);
}
B55f3b2:L55f3b2:{c.instructions+=3;NFSU2_TR(0x55f3b2);
__builtin_memmove((R+24),(R+0),4);
}
B55f3b4:{NFSU2_TR(0x55f3b4);
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
B55f3b6:{NFSU2_TR(0x55f3b6);
if(r1(R+518)){{goto L55f41a;}}
}
B55f3b8:L55f3b8:{c.instructions+=3;NFSU2_TR(0x55f3b8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B55f3bc:{NFSU2_TR(0x55f3bc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55f3be:{NFSU2_TR(0x55f3be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55f402;}}
}
B55f3c0:L55f3c0:{c.instructions+=5;NFSU2_TR(0x55f3c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55f3c4:{NFSU2_TR(0x55f3c4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f3c5:{NFSU2_TR(0x55f3c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f3c6:{NFSU2_TR(0x55f3c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f3c7:{NFSU2_TR(0x55f3c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f3ccull));
TAIL_STATIC(0x539b70u,539);
}
B55f3cc:L55f3cc:{c.instructions+=3;NFSU2_TR(0x55f3cc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55f3cf:{NFSU2_TR(0x55f3cf);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55f3d1:{NFSU2_TR(0x55f3d1);
if(r1(R+518)){{goto L55f402;}}
}
B55f3d3:L55f3d3:{c.instructions+=2;NFSU2_TR(0x55f3d3);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f3d5:{NFSU2_TR(0x55f3d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f3daull));
TAIL_STATIC(0x575620u,575);
}
B55f3da:L55f3da:{c.instructions+=3;NFSU2_TR(0x55f3da);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55f3dd:{NFSU2_TR(0x55f3dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55f3df:{NFSU2_TR(0x55f3df);
if(r1(R+518)){{goto L55f3ed;}}
}
B55f3e1:L55f3e1:{c.instructions+=3;NFSU2_TR(0x55f3e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f3e4:{NFSU2_TR(0x55f3e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55f3eb:{NFSU2_TR(0x55f3eb);
{goto L55f3ef;}
}
B55f3ed:L55f3ed:{c.instructions+=1;NFSU2_TR(0x55f3ed);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55f3ef:L55f3ef:{c.instructions+=6;NFSU2_TR(0x55f3ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55f3f3:{NFSU2_TR(0x55f3f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B55f3f5:{NFSU2_TR(0x55f3f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f3f9:{NFSU2_TR(0x55f3f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f3fc:{NFSU2_TR(0x55f3fc);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B55f400:{NFSU2_TR(0x55f400);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B55f402:L55f402:{c.instructions+=7;NFSU2_TR(0x55f402);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f404:{NFSU2_TR(0x55f404);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f406:{NFSU2_TR(0x55f406);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f408:{NFSU2_TR(0x55f408);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f409:{NFSU2_TR(0x55f409);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f40a:{NFSU2_TR(0x55f40a);
w4(R+4,u32(0x8a2b68ull));
}
B55f40f:{NFSU2_TR(0x55f40f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f414ull));
TAIL_STATIC(0x61ba50u,61b);
}
B55f414:L55f414:{c.instructions+=3;NFSU2_TR(0x55f414);
__builtin_memmove((R+24),(R+0),4);
}
B55f416:{NFSU2_TR(0x55f416);
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
B55f418:{NFSU2_TR(0x55f418);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55f3b8u);}goto L55f3b8;}}
}
B55f41a:L55f41a:{c.instructions+=3;NFSU2_TR(0x55f41a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55f41e:{NFSU2_TR(0x55f41e);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B55f422:{NFSU2_TR(0x55f422);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f427ull));
TAIL_STATIC(0x502fd0u,502);
}
B55f427:L55f427:{c.instructions+=3;NFSU2_TR(0x55f427);
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
B55f429:{NFSU2_TR(0x55f429);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f42d:{NFSU2_TR(0x55f42d);
if(r1(R+518)){{goto L55f55a;}}
}
B55f433:L55f433:{c.instructions+=2;NFSU2_TR(0x55f433);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55f436:{NFSU2_TR(0x55f436);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f43bull));
TAIL_STATIC(0x610000u,610);
}
B55f43b:L55f43b:{c.instructions+=6;NFSU2_TR(0x55f43b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55f43f:{NFSU2_TR(0x55f43f);
__builtin_memmove((R+24),(R+0),4);
}
B55f441:{NFSU2_TR(0x55f441);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f442:{NFSU2_TR(0x55f442);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f443:{NFSU2_TR(0x55f443);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f447:{NFSU2_TR(0x55f447);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f44cull));
TAIL_STATIC(0x43dcc0u,43d);
}
B55f44c:L55f44c:{c.instructions+=3;NFSU2_TR(0x55f44c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55f44f:{NFSU2_TR(0x55f44f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55f451:{NFSU2_TR(0x55f451);
if(r1(R+518)){{goto L55f550;}}
}
B55f457:L55f457:{c.instructions+=4;NFSU2_TR(0x55f457);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f459:{NFSU2_TR(0x55f459);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f45d:{NFSU2_TR(0x55f45d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B55f45f:{NFSU2_TR(0x55f45f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f464ull));
TAIL_STATIC(0x575620u,575);
}
B55f464:L55f464:{c.instructions+=6;NFSU2_TR(0x55f464);
__builtin_memmove((R+24),(R+0),4);
}
B55f466:{NFSU2_TR(0x55f466);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55f469:{NFSU2_TR(0x55f469);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f46d:{NFSU2_TR(0x55f46d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55f46f:{NFSU2_TR(0x55f46f);
u8 U[5];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55f474:{NFSU2_TR(0x55f474);
if(r1(R+518)){{goto L55f4d3;}}
}
B55f476:L55f476:{c.instructions+=3;NFSU2_TR(0x55f476);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55f47a:{NFSU2_TR(0x55f47a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f47b:{NFSU2_TR(0x55f47b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f480ull));
TAIL_STATIC(0x43db50u,43d);
}
B55f480:L55f480:{c.instructions+=26;NFSU2_TR(0x55f480);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55f484:{NFSU2_TR(0x55f484);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f487:{NFSU2_TR(0x55f487);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55f48a:{NFSU2_TR(0x55f48a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55f48c:{NFSU2_TR(0x55f48c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f48f:{NFSU2_TR(0x55f48f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f492:{NFSU2_TR(0x55f492);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f495:{NFSU2_TR(0x55f495);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55f498:{NFSU2_TR(0x55f498);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55f49b:{NFSU2_TR(0x55f49b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55f49e:{NFSU2_TR(0x55f49e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f4a1:{NFSU2_TR(0x55f4a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f4a4:{NFSU2_TR(0x55f4a4);
w4(R+0,u32(0x3f800000ull));
}
B55f4a9:{NFSU2_TR(0x55f4a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f4ac:{NFSU2_TR(0x55f4ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f4af:{NFSU2_TR(0x55f4af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f4b2:{NFSU2_TR(0x55f4b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f4b5:{NFSU2_TR(0x55f4b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+0),(U+0),4);
}
B55f4b8:{NFSU2_TR(0x55f4b8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55f4bc:{NFSU2_TR(0x55f4bc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55f4c0:{NFSU2_TR(0x55f4c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x45ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55f4c3:{NFSU2_TR(0x55f4c3);
u8 U[4];
w4(U+0,u32(0x79be44ull));
s4(u32(r4(R+24)),r4(U+0));
}
B55f4c9:{NFSU2_TR(0x55f4c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f4cc:{NFSU2_TR(0x55f4cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B55f4ce:{NFSU2_TR(0x55f4ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f4d1:{NFSU2_TR(0x55f4d1);
{goto L55f4d5;}
}
B55f4d3:L55f4d3:{c.instructions+=1;NFSU2_TR(0x55f4d3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B55f4d5:L55f4d5:{c.instructions+=3;NFSU2_TR(0x55f4d5);
u8 U[22];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
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
B55f4d9:{NFSU2_TR(0x55f4d9);
u8 U[5];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55f4de:{NFSU2_TR(0x55f4de);
if(r1(R+518)){{goto L55f521;}}
}
B55f4e0:L55f4e0:{c.instructions+=2;NFSU2_TR(0x55f4e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55f4e3:{NFSU2_TR(0x55f4e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f4e8ull));
TAIL_STATIC(0x610000u,610);
}
B55f4e8:L55f4e8:{c.instructions+=4;NFSU2_TR(0x55f4e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55f4ec:{NFSU2_TR(0x55f4ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f4ed:{NFSU2_TR(0x55f4ed);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f4ee:{NFSU2_TR(0x55f4ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f4f3ull));
TAIL_STATIC(0x43dcc0u,43d);
}
B55f4f3:L55f4f3:{c.instructions+=3;NFSU2_TR(0x55f4f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55f4f6:{NFSU2_TR(0x55f4f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55f4f8:{NFSU2_TR(0x55f4f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55f521;}}
}
B55f4fa:L55f4fa:{c.instructions+=16;NFSU2_TR(0x55f4fa);
__builtin_memmove((R+0),(R+28),4);
}
B55f4fc:{NFSU2_TR(0x55f4fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B55f4fe:{NFSU2_TR(0x55f4fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55f501:{NFSU2_TR(0x55f501);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B55f503:{NFSU2_TR(0x55f503);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B55f505:{NFSU2_TR(0x55f505);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f508:{NFSU2_TR(0x55f508);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55f50b:{NFSU2_TR(0x55f50b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B55f50e:{NFSU2_TR(0x55f50e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B55f510:{NFSU2_TR(0x55f510);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f513:{NFSU2_TR(0x55f513);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f516:{NFSU2_TR(0x55f516);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B55f518:{NFSU2_TR(0x55f518);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55f51c:{NFSU2_TR(0x55f51c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B55f51d:{NFSU2_TR(0x55f51d);
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
B55f51f:{NFSU2_TR(0x55f51f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55f4e0u);}goto L55f4e0;}}
}
B55f521:L55f521:{c.instructions+=8;NFSU2_TR(0x55f521);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55f525:{NFSU2_TR(0x55f525);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55f527:{NFSU2_TR(0x55f527);
__builtin_memmove((R+0),(R+518),1);
}
B55f52a:{NFSU2_TR(0x55f52a);
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
B55f52d:{NFSU2_TR(0x55f52d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55f530:{NFSU2_TR(0x55f530);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B55f532:{NFSU2_TR(0x55f532);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f533:{NFSU2_TR(0x55f533);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f536ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B55f536:L55f536:{c.instructions+=2;NFSU2_TR(0x55f536);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55f538:{NFSU2_TR(0x55f538);
if(r1(R+518)){{goto L55f550;}}
}
B55f53a:L55f53a:{c.instructions+=4;NFSU2_TR(0x55f53a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55f53d:{NFSU2_TR(0x55f53d);
w4(R+4,u32(0x294d2a3ull));
}
B55f542:{NFSU2_TR(0x55f542);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55f544:{NFSU2_TR(0x55f544);
if(r1(R+518)){{goto L55f550;}}
}
B55f546:L55f546:{c.instructions+=2;NFSU2_TR(0x55f546);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f549:{NFSU2_TR(0x55f549);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B55f550:L55f550:{c.instructions+=2;NFSU2_TR(0x55f550);
u8 U[22];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
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
B55f554:{NFSU2_TR(0x55f554);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55f433u);}goto L55f433;}}
}
B55f55a:L55f55a:{c.instructions+=3;NFSU2_TR(0x55f55a);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f55c:{NFSU2_TR(0x55f55c);
w4(R+4,u32(0x8392c0ull));
}
B55f561:{NFSU2_TR(0x55f561);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f566ull));
TAIL_STATIC(0x6102f0u,610);
}
B55f566:L55f566:{c.instructions+=4;NFSU2_TR(0x55f566);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55f568:{NFSU2_TR(0x55f568);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B55f56c:{NFSU2_TR(0x55f56c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f572:{NFSU2_TR(0x55f572);
if(r1(R+518)){{goto L55f5b4;}}
}
B55f574:L55f574:{c.instructions+=4;NFSU2_TR(0x55f574);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f576:{NFSU2_TR(0x55f576);
u8 U[4];
w4(U+0,u32(0xebb03e66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f57b:{NFSU2_TR(0x55f57b);
__builtin_memmove((R+4),(R+0),4);
}
B55f57d:{NFSU2_TR(0x55f57d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f582ull));
TAIL_STATIC(0x61b500u,61b);
}
B55f582:L55f582:{c.instructions+=2;NFSU2_TR(0x55f582);
u8 U[22];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B55f586:{NFSU2_TR(0x55f586);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55f5b4;}}
}
B55f588:L55f588:{c.instructions+=3;NFSU2_TR(0x55f588);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55f58e:{NFSU2_TR(0x55f58e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B55f591:{NFSU2_TR(0x55f591);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f596ull));
TAIL_STATIC(0x610000u,610);
}
B55f596:L55f596:{c.instructions+=2;NFSU2_TR(0x55f596);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f597:{NFSU2_TR(0x55f597);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f59cull));
TAIL_STATIC(0x43db50u,43d);
}
B55f59c:L55f59c:{c.instructions+=3;NFSU2_TR(0x55f59c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f59d:{NFSU2_TR(0x55f59d);
__builtin_memmove((R+28),(R+0),4);
}
B55f59f:{NFSU2_TR(0x55f59f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f5a4ull));
TAIL_STATIC(0x505450u,505);
}
B55f5a4:L55f5a4:{c.instructions+=2;NFSU2_TR(0x55f5a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f5a5:{NFSU2_TR(0x55f5a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f5aaull));
TAIL_STATIC(0x50b840u,50b);
}
B55f5aa:L55f5aa:{c.instructions+=3;NFSU2_TR(0x55f5aa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55f5ad:{NFSU2_TR(0x55f5ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55f5af:{NFSU2_TR(0x55f5af);
if(r1(R+518)){{goto L55f5b4;}}
}
B55f5b1:L55f5b1:{c.instructions+=1;NFSU2_TR(0x55f5b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f5b4:L55f5b4:{c.instructions+=3;NFSU2_TR(0x55f5b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55f5b7:{NFSU2_TR(0x55f5b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f5b8:{NFSU2_TR(0x55f5b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f5bdull));
TAIL_STATIC(0x505450u,505);
}
B55f5bd:L55f5bd:{c.instructions+=2;NFSU2_TR(0x55f5bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f5be:{NFSU2_TR(0x55f5be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f5c3ull));
TAIL_STATIC(0x50b840u,50b);
}
B55f5c3:L55f5c3:{c.instructions+=3;NFSU2_TR(0x55f5c3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55f5c6:{NFSU2_TR(0x55f5c6);
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
B55f5c8:{NFSU2_TR(0x55f5c8);
if(r1(R+518)){{goto L55f659;}}
}
B55f5ce:L55f5ce:{c.instructions+=3;NFSU2_TR(0x55f5ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55f5d1:{NFSU2_TR(0x55f5d1);
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
B55f5d3:{NFSU2_TR(0x55f5d3);
if(r1(R+518)){{goto L55f659;}}
}
B55f5d9:L55f5d9:{c.instructions+=3;NFSU2_TR(0x55f5d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55f5dc:{NFSU2_TR(0x55f5dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55f5df:{NFSU2_TR(0x55f5df);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55f5e7:L55f5e7:{c.instructions+=2;NFSU2_TR(0x55f5e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55f5e9:{NFSU2_TR(0x55f5e9);
if(r1(R+518)){{goto L55f5f0;}}
}
B55f5eb:L55f5eb:{c.instructions+=2;NFSU2_TR(0x55f5eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B55f5ee:{NFSU2_TR(0x55f5ee);
{goto L55f5f2;}
}
B55f5f0:L55f5f0:{c.instructions+=1;NFSU2_TR(0x55f5f0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B55f5f2:L55f5f2:{c.instructions+=2;NFSU2_TR(0x55f5f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55f5f4:{NFSU2_TR(0x55f5f4);
if(r1(R+518)){{goto L55f5fb;}}
}
B55f5f6:L55f5f6:{c.instructions+=2;NFSU2_TR(0x55f5f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B55f5f9:{NFSU2_TR(0x55f5f9);
{goto L55f5fd;}
}
B55f5fb:L55f5fb:{c.instructions+=1;NFSU2_TR(0x55f5fb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55f5fd:L55f5fd:{c.instructions+=2;NFSU2_TR(0x55f5fd);
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
B55f5ff:{NFSU2_TR(0x55f5ff);
if(r1(R+518)){{goto L55f664;}}
}
B55f601:L55f601:{c.instructions+=4;NFSU2_TR(0x55f601);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55f604:{NFSU2_TR(0x55f604);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B55f607:{NFSU2_TR(0x55f607);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55f609:{NFSU2_TR(0x55f609);
if(r1(R+518)){{goto L55f62b;}}
}
B55f60b:L55f60b:{c.instructions+=3;NFSU2_TR(0x55f60b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B55f60d:{NFSU2_TR(0x55f60d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55f60f:{NFSU2_TR(0x55f60f);
if(r1(R+518)){{goto L55f62b;}}
}
B55f611:L55f611:{c.instructions+=3;NFSU2_TR(0x55f611);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B55f614:{NFSU2_TR(0x55f614);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B55f616:{NFSU2_TR(0x55f616);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L55f61e;}}
}
B55f618:L55f618:{c.instructions+=2;NFSU2_TR(0x55f618);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55f61a:{NFSU2_TR(0x55f61a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L55f61e;}}
}
B55f61c:L55f61c:{c.instructions+=1;NFSU2_TR(0x55f61c);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B55f61e:L55f61e:{c.instructions+=6;NFSU2_TR(0x55f61e);
w4(R+0,u32(r1(R+0)));
}
B55f621:{NFSU2_TR(0x55f621);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B55f623:{NFSU2_TR(0x55f623);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55f626:{NFSU2_TR(0x55f626);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B55f627:{NFSU2_TR(0x55f627);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55f629:{NFSU2_TR(0x55f629);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55f611u);}goto L55f611;}}
}
B55f62b:L55f62b:{c.instructions+=2;NFSU2_TR(0x55f62b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f62c:{NFSU2_TR(0x55f62c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f631ull));
TAIL_STATIC(0x50b840u,50b);
}
B55f631:L55f631:{c.instructions+=3;NFSU2_TR(0x55f631);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55f634:{NFSU2_TR(0x55f634);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55f636:{NFSU2_TR(0x55f636);
if(r1(R+518)){{goto L55f63d;}}
}
B55f638:L55f638:{c.instructions+=2;NFSU2_TR(0x55f638);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55f63b:{NFSU2_TR(0x55f63b);
{goto L55f63f;}
}
B55f63d:L55f63d:{c.instructions+=1;NFSU2_TR(0x55f63d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55f63f:L55f63f:{c.instructions+=2;NFSU2_TR(0x55f63f);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
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
B55f642:{NFSU2_TR(0x55f642);
if(r1(R+518)){{goto L55f652;}}
}
B55f644:L55f644:{c.instructions+=5;NFSU2_TR(0x55f644);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55f648:{NFSU2_TR(0x55f648);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55f64b:{NFSU2_TR(0x55f64b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B55f64c:{NFSU2_TR(0x55f64c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f650:{NFSU2_TR(0x55f650);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55f5e7u);}goto L55f5e7;}
}
B55f652:L55f652:{c.instructions+=3;NFSU2_TR(0x55f652);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55f656:{NFSU2_TR(0x55f656);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f657:{NFSU2_TR(0x55f657);
{goto L55f65b;}
}
B55f659:L55f659:{c.instructions+=1;NFSU2_TR(0x55f659);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f65b:L55f65b:{c.instructions+=3;NFSU2_TR(0x55f65b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55f65e:{NFSU2_TR(0x55f65e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B55f661:{NFSU2_TR(0x55f661);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f664ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B55f664:L55f664:{c.instructions+=3;NFSU2_TR(0x55f664);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55f66a:{NFSU2_TR(0x55f66a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55f66d:{NFSU2_TR(0x55f66d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f672ull));
TAIL_STATIC(0x610000u,610);
}
B55f672:L55f672:{c.instructions+=2;NFSU2_TR(0x55f672);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f673:{NFSU2_TR(0x55f673);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f678ull));
TAIL_STATIC(0x43db50u,43d);
}
B55f678:L55f678:{c.instructions+=4;NFSU2_TR(0x55f678);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55f67b:{NFSU2_TR(0x55f67b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55f67e:{NFSU2_TR(0x55f67e);
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
B55f680:{NFSU2_TR(0x55f680);
if(r1(R+518)){{goto L55f6eb;}}
}
B55f682:L55f682:{c.instructions+=5;NFSU2_TR(0x55f682);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55f685:{NFSU2_TR(0x55f685);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B55f688:{NFSU2_TR(0x55f688);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f68d:{NFSU2_TR(0x55f68d);
w4(R+4,u32(0x8389d0ull));
}
B55f692:{NFSU2_TR(0x55f692);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f697ull));
TAIL_STATIC(0x413440u,413);
}
B55f697:L55f697:{c.instructions+=4;NFSU2_TR(0x55f697);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f698:{NFSU2_TR(0x55f698);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f69a:{NFSU2_TR(0x55f69a);
w4(R+4,u32(0x8389d0ull));
}
B55f69f:{NFSU2_TR(0x55f69f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f6a4ull));
TAIL_STATIC(0x631d20u,631);
}
B55f6a4:L55f6a4:{c.instructions+=4;NFSU2_TR(0x55f6a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f6a5:{NFSU2_TR(0x55f6a5);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f6a7:{NFSU2_TR(0x55f6a7);
w4(R+4,u32(0x8389d0ull));
}
B55f6ac:{NFSU2_TR(0x55f6ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f6b1ull));
TAIL_STATIC(0x631d20u,631);
}
B55f6b1:L55f6b1:{c.instructions+=4;NFSU2_TR(0x55f6b1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f6b3:{NFSU2_TR(0x55f6b3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f6b5:{NFSU2_TR(0x55f6b5);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f6ba:{NFSU2_TR(0x55f6ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f6bfull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B55f6bf:L55f6bf:{c.instructions+=5;NFSU2_TR(0x55f6bf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55f6c2:{NFSU2_TR(0x55f6c2);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f6c7:{NFSU2_TR(0x55f6c7);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f6cc:{NFSU2_TR(0x55f6cc);
w4(R+4,u32(0x8637d0ull));
}
B55f6d1:{NFSU2_TR(0x55f6d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f6d6ull));
TAIL_STATIC(0x55b1a0u,55b);
}
B55f6d6:L55f6d6:{c.instructions+=7;NFSU2_TR(0x55f6d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55f6d9:{NFSU2_TR(0x55f6d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55f6dc:{NFSU2_TR(0x55f6dc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f6de:{NFSU2_TR(0x55f6de);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f6e0:{NFSU2_TR(0x55f6e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f6e1:{NFSU2_TR(0x55f6e1);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f6e3:{NFSU2_TR(0x55f6e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f6e8ull));
TAIL_STATIC(0x4c2100u,4c2);
}
B55f6e8:L55f6e8:{c.instructions+=1;NFSU2_TR(0x55f6e8);
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
B55f6eb:L55f6eb:{c.instructions+=3;NFSU2_TR(0x55f6eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B55f6ed:{NFSU2_TR(0x55f6ed);
__builtin_memmove((R+4),(R+12),4);
}
B55f6ef:{NFSU2_TR(0x55f6ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f6f2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B55f6f2:L55f6f2:{c.instructions+=8;NFSU2_TR(0x55f6f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55f6f6:{NFSU2_TR(0x55f6f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55f6f7:{NFSU2_TR(0x55f6f7);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B55f6fb:{NFSU2_TR(0x55f6fb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55f6fd:{NFSU2_TR(0x55f6fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55f6fe:{NFSU2_TR(0x55f6fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B55f706:{NFSU2_TR(0x55f706);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55f707:{NFSU2_TR(0x55f707);
if(r1(R+518)){{goto L55f731;}}
}
B55f709:L55f709:{c.instructions+=1;NFSU2_TR(0x55f709);
__builtin_memmove((R+16),(R+16),4);
}
B55f710:L55f710:{c.instructions+=7;NFSU2_TR(0x55f710);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B55f712:{NFSU2_TR(0x55f712);
__builtin_memmove((R+8),(R+0),4);
}
B55f714:{NFSU2_TR(0x55f714);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55f717:{NFSU2_TR(0x55f717);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B55f719:{NFSU2_TR(0x55f719);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f71a:{NFSU2_TR(0x55f71a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f71d:{NFSU2_TR(0x55f71d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f722ull));
TAIL_STATIC(0x575630u,575);
}
B55f722:L55f722:{c.instructions+=5;NFSU2_TR(0x55f722);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55f726:{NFSU2_TR(0x55f726);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B55f72a:{NFSU2_TR(0x55f72a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55f72d:{NFSU2_TR(0x55f72d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55f72f:{NFSU2_TR(0x55f72f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55f710u);}goto L55f710;}}
}
B55f731:L55f731:{c.instructions+=4;NFSU2_TR(0x55f731);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55f735:{NFSU2_TR(0x55f735);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f73c:{NFSU2_TR(0x55f73c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55f73f:{NFSU2_TR(0x55f73f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55f740:L55f740:{c.instructions+=8;NFSU2_TR(0x55f740);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f741:{NFSU2_TR(0x55f741);
__builtin_memmove((R+20),(R+16),4);
}
B55f743:{NFSU2_TR(0x55f743);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f744:{NFSU2_TR(0x55f744);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f745:{NFSU2_TR(0x55f745);
__builtin_memmove((R+24),(R+4),4);
}
B55f747:{NFSU2_TR(0x55f747);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55f74d:{NFSU2_TR(0x55f74d);
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
B55f74f:{NFSU2_TR(0x55f74f);
if(r1(R+518)){{goto L55f8e4;}}
}
B55f755:L55f755:{c.instructions+=7;NFSU2_TR(0x55f755);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55f75b:{NFSU2_TR(0x55f75b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f75c:{NFSU2_TR(0x55f75c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B55f75f:{NFSU2_TR(0x55f75f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55f762:{NFSU2_TR(0x55f762);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f763:{NFSU2_TR(0x55f763);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f766:{NFSU2_TR(0x55f766);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55f7a8;}}
}
B55f768:L55f768:{c.instructions+=4;NFSU2_TR(0x55f768);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55f76e:{NFSU2_TR(0x55f76e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55f770:{NFSU2_TR(0x55f770);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55f776:{NFSU2_TR(0x55f776);
if(r1(R+518)){{goto L55f77d;}}
}
B55f778:L55f778:{c.instructions+=2;NFSU2_TR(0x55f778);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B55f77b:{NFSU2_TR(0x55f77b);
{goto L55f77f;}
}
B55f77d:L55f77d:{c.instructions+=1;NFSU2_TR(0x55f77d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55f77f:L55f77f:{c.instructions+=2;NFSU2_TR(0x55f77f);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B55f782:{NFSU2_TR(0x55f782);
if(r1(R+518)){{goto L55f79f;}}
}
B55f784:L55f784:{c.instructions+=4;NFSU2_TR(0x55f784);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55f787:{NFSU2_TR(0x55f787);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x838082ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B55f78e:{NFSU2_TR(0x55f78e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55f791:{NFSU2_TR(0x55f791);
if(r1(R+518)){{goto L55f79f;}}
}
B55f793:L55f793:{c.instructions+=3;NFSU2_TR(0x55f793);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B55f799:{NFSU2_TR(0x55f799);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f79a:{NFSU2_TR(0x55f79a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f79full));
TAIL_STATIC(0x458520u,458);
}
B55f79f:L55f79f:{c.instructions+=2;NFSU2_TR(0x55f79f);
__builtin_memmove((R+4),(R+28),4);
}
B55f7a1:{NFSU2_TR(0x55f7a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f7a6ull));
TAIL_STATIC(0x495900u,495);
}
B55f7a6:L55f7a6:{c.instructions+=1;NFSU2_TR(0x55f7a6);
{goto L55f7d7;}
}
B55f7a8:L55f7a8:{c.instructions+=2;NFSU2_TR(0x55f7a8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55f7ab:{NFSU2_TR(0x55f7ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55f7d7;}}
}
B55f7ad:L55f7ad:{c.instructions+=3;NFSU2_TR(0x55f7ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55f7b3:{NFSU2_TR(0x55f7b3);
__builtin_memmove((R+4),(R+28),4);
}
B55f7b5:{NFSU2_TR(0x55f7b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f7baull));
TAIL_STATIC(0x4aebc0u,4ae);
}
B55f7ba:L55f7ba:{c.instructions+=2;NFSU2_TR(0x55f7ba);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55f7bc:{NFSU2_TR(0x55f7bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55f7d0;}}
}
B55f7be:L55f7be:{c.instructions+=6;NFSU2_TR(0x55f7be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55f7c1:{NFSU2_TR(0x55f7c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55f7c4:{NFSU2_TR(0x55f7c4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f7c5:{NFSU2_TR(0x55f7c5);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f7c7:{NFSU2_TR(0x55f7c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f7c8:{NFSU2_TR(0x55f7c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f7cdull));
TAIL_STATIC(0x50d150u,50d);
}
B55f7cd:L55f7cd:{c.instructions+=1;NFSU2_TR(0x55f7cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55f7d0:L55f7d0:{c.instructions+=2;NFSU2_TR(0x55f7d0);
__builtin_memmove((R+4),(R+28),4);
}
B55f7d2:{NFSU2_TR(0x55f7d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f7d7ull));
TAIL_STATIC(0x4958f0u,495);
}
B55f7d7:L55f7d7:{c.instructions+=3;NFSU2_TR(0x55f7d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55f7dd:{NFSU2_TR(0x55f7dd);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B55f7e0:{NFSU2_TR(0x55f7e0);
if(r1(R+518)){{goto L55f8e2;}}
}
B55f7e6:L55f7e6:{c.instructions+=2;NFSU2_TR(0x55f7e6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55f7e9:{NFSU2_TR(0x55f7e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55f801;}}
}
B55f7eb:L55f7eb:{c.instructions+=3;NFSU2_TR(0x55f7eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55f7f1:{NFSU2_TR(0x55f7f1);
__builtin_memmove((R+4),(R+12),4);
}
B55f7f3:{NFSU2_TR(0x55f7f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f7f8ull));
TAIL_STATIC(0x527610u,527);
}
B55f7f8:L55f7f8:{c.instructions+=2;NFSU2_TR(0x55f7f8);
__builtin_memmove((R+4),(R+12),4);
}
B55f7fa:{NFSU2_TR(0x55f7fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f7ffull));
TAIL_STATIC(0x495850u,495);
}
B55f7ff:L55f7ff:{c.instructions+=1;NFSU2_TR(0x55f7ff);
{goto L55f81a;}
}
B55f801:L55f801:{c.instructions+=2;NFSU2_TR(0x55f801);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55f804:{NFSU2_TR(0x55f804);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55f81a;}}
}
B55f806:L55f806:{c.instructions+=3;NFSU2_TR(0x55f806);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55f80c:{NFSU2_TR(0x55f80c);
__builtin_memmove((R+4),(R+12),4);
}
B55f80e:{NFSU2_TR(0x55f80e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f813ull));
TAIL_STATIC(0x527660u,527);
}
B55f813:L55f813:{c.instructions+=2;NFSU2_TR(0x55f813);
__builtin_memmove((R+4),(R+12),4);
}
B55f815:{NFSU2_TR(0x55f815);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f81aull));
TAIL_STATIC(0x495810u,495);
}
B55f81a:L55f81a:{c.instructions+=4;NFSU2_TR(0x55f81a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55f81d:{NFSU2_TR(0x55f81d);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f822:{NFSU2_TR(0x55f822);
w4(R+4,u32(0x8389d0ull));
}
B55f827:{NFSU2_TR(0x55f827);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f82cull));
TAIL_STATIC(0x413440u,413);
}
B55f82c:L55f82c:{c.instructions+=4;NFSU2_TR(0x55f82c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f82d:{NFSU2_TR(0x55f82d);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f82f:{NFSU2_TR(0x55f82f);
w4(R+4,u32(0x8389d0ull));
}
B55f834:{NFSU2_TR(0x55f834);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f839ull));
TAIL_STATIC(0x631d20u,631);
}
B55f839:L55f839:{c.instructions+=4;NFSU2_TR(0x55f839);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f83a:{NFSU2_TR(0x55f83a);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f83c:{NFSU2_TR(0x55f83c);
w4(R+4,u32(0x8389d0ull));
}
B55f841:{NFSU2_TR(0x55f841);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f846ull));
TAIL_STATIC(0x631d20u,631);
}
B55f846:L55f846:{c.instructions+=4;NFSU2_TR(0x55f846);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f848:{NFSU2_TR(0x55f848);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f84a:{NFSU2_TR(0x55f84a);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f84f:{NFSU2_TR(0x55f84f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f854ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B55f854:L55f854:{c.instructions+=5;NFSU2_TR(0x55f854);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55f857:{NFSU2_TR(0x55f857);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f85c:{NFSU2_TR(0x55f85c);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f861:{NFSU2_TR(0x55f861);
w4(R+4,u32(0x8637d0ull));
}
B55f866:{NFSU2_TR(0x55f866);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f86bull));
TAIL_STATIC(0x55b1a0u,55b);
}
B55f86b:L55f86b:{c.instructions+=3;NFSU2_TR(0x55f86b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B55f86d:{NFSU2_TR(0x55f86d);
__builtin_memmove((R+4),(R+24),4);
}
B55f86f:{NFSU2_TR(0x55f86f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f872ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B55f872:L55f872:{c.instructions+=4;NFSU2_TR(0x55f872);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55f878:{NFSU2_TR(0x55f878);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55f87a:{NFSU2_TR(0x55f87a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+4),(U+0),4);
}
B55f880:{NFSU2_TR(0x55f880);
if(r1(R+518)){{goto L55f887;}}
}
B55f882:L55f882:{c.instructions+=2;NFSU2_TR(0x55f882);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B55f885:{NFSU2_TR(0x55f885);
{goto L55f889;}
}
B55f887:L55f887:{c.instructions+=1;NFSU2_TR(0x55f887);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55f889:L55f889:{c.instructions+=2;NFSU2_TR(0x55f889);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B55f88c:{NFSU2_TR(0x55f88c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55f8a6;}}
}
B55f88e:L55f88e:{c.instructions+=3;NFSU2_TR(0x55f88e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55f894:{NFSU2_TR(0x55f894);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f895:{NFSU2_TR(0x55f895);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f89aull));
TAIL_STATIC(0x50ca00u,50c);
}
B55f89a:L55f89a:{c.instructions+=7;NFSU2_TR(0x55f89a);
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
B55f89d:{NFSU2_TR(0x55f89d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55f89e:{NFSU2_TR(0x55f89e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55f89f:{NFSU2_TR(0x55f89f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55f8a0:{NFSU2_TR(0x55f8a0);
__builtin_memmove((R+16),(R+20),4);
}
B55f8a2:{NFSU2_TR(0x55f8a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55f8a3:{NFSU2_TR(0x55f8a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55f8a6:L55f8a6:{c.instructions+=1;NFSU2_TR(0x55f8a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f8abull));
TAIL_STATIC(0x4aebc0u,4ae);
}
B55f8ab:L55f8ab:{c.instructions+=2;NFSU2_TR(0x55f8ab);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55f8ad:{NFSU2_TR(0x55f8ad);
if(r1(R+518)){{goto L55f8c7;}}
}
B55f8af:L55f8af:{c.instructions+=3;NFSU2_TR(0x55f8af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x200ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55f8b5:{NFSU2_TR(0x55f8b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f8b6:{NFSU2_TR(0x55f8b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f8bbull));
TAIL_STATIC(0x50ca00u,50c);
}
B55f8bb:L55f8bb:{c.instructions+=7;NFSU2_TR(0x55f8bb);
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
B55f8be:{NFSU2_TR(0x55f8be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55f8bf:{NFSU2_TR(0x55f8bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55f8c0:{NFSU2_TR(0x55f8c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55f8c1:{NFSU2_TR(0x55f8c1);
__builtin_memmove((R+16),(R+20),4);
}
B55f8c3:{NFSU2_TR(0x55f8c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55f8c4:{NFSU2_TR(0x55f8c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55f8c7:L55f8c7:{c.instructions+=3;NFSU2_TR(0x55f8c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55f8cd:{NFSU2_TR(0x55f8cd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f8ce:{NFSU2_TR(0x55f8ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f8d3ull));
TAIL_STATIC(0x50ca50u,50c);
}
B55f8d3:L55f8d3:{c.instructions+=3;NFSU2_TR(0x55f8d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x200ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55f8d9:{NFSU2_TR(0x55f8d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f8da:{NFSU2_TR(0x55f8da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f8dfull));
TAIL_STATIC(0x50ca50u,50c);
}
B55f8df:L55f8df:{c.instructions+=1;NFSU2_TR(0x55f8df);
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
B55f8e2:L55f8e2:{c.instructions+=2;NFSU2_TR(0x55f8e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55f8e3:{NFSU2_TR(0x55f8e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55f8e4:L55f8e4:{c.instructions+=4;NFSU2_TR(0x55f8e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55f8e5:{NFSU2_TR(0x55f8e5);
__builtin_memmove((R+16),(R+20),4);
}
B55f8e7:{NFSU2_TR(0x55f8e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55f8e8:{NFSU2_TR(0x55f8e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55f8f0:L55f8f0:{c.instructions+=8;NFSU2_TR(0x55f8f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B55f8f3:{NFSU2_TR(0x55f8f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f8f4:{NFSU2_TR(0x55f8f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f8f5:{NFSU2_TR(0x55f8f5);
__builtin_memmove((R+24),(R+4),4);
}
B55f8f7:{NFSU2_TR(0x55f8f7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f8f8:{NFSU2_TR(0x55f8f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55f8fe:{NFSU2_TR(0x55f8fe);
__builtin_memmove((R+4),(R+28),4);
}
B55f900:{NFSU2_TR(0x55f900);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f905ull));
TAIL_STATIC(0x5385c0u,538);
}
B55f905:L55f905:{c.instructions+=9;NFSU2_TR(0x55f905);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55f908:{NFSU2_TR(0x55f908);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B55f90a:{NFSU2_TR(0x55f90a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f90e:{NFSU2_TR(0x55f90e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
}
B55f911:{NFSU2_TR(0x55f911);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f917:{NFSU2_TR(0x55f917);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B55f919:{NFSU2_TR(0x55f919);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55f91b:{NFSU2_TR(0x55f91b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f91f:{NFSU2_TR(0x55f91f);
if(r1(R+518)){{goto L55f9ac;}}
}
B55f925:L55f925:{c.instructions+=2;NFSU2_TR(0x55f925);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f927:{NFSU2_TR(0x55f927);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f92cull));
TAIL_STATIC(0x575620u,575);
}
B55f92c:L55f92c:{c.instructions+=3;NFSU2_TR(0x55f92c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55f92f:{NFSU2_TR(0x55f92f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55f931:{NFSU2_TR(0x55f931);
if(r1(R+518)){{goto L55f95e;}}
}
B55f933:L55f933:{c.instructions+=13;NFSU2_TR(0x55f933);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55f937:{NFSU2_TR(0x55f937);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55f93a:{NFSU2_TR(0x55f93a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f93d:{NFSU2_TR(0x55f93d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f940:{NFSU2_TR(0x55f940);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f943:{NFSU2_TR(0x55f943);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f946:{NFSU2_TR(0x55f946);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55f949:{NFSU2_TR(0x55f949);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55f94d:{NFSU2_TR(0x55f94d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55f950:{NFSU2_TR(0x55f950);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55f953:{NFSU2_TR(0x55f953);
u8 U[4];
w4(U+0,u32(0x79afdcull));
s4(u32(r4(R+0)),r4(U+0));
}
B55f959:{NFSU2_TR(0x55f959);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f95c:{NFSU2_TR(0x55f95c);
{goto L55f960;}
}
B55f95e:L55f95e:{c.instructions+=1;NFSU2_TR(0x55f95e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55f960:L55f960:{c.instructions+=5;NFSU2_TR(0x55f960);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f962:{NFSU2_TR(0x55f962);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f964:{NFSU2_TR(0x55f964);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f965:{NFSU2_TR(0x55f965);
__builtin_memmove((R+4),(R+28),4);
}
B55f967:{NFSU2_TR(0x55f967);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f96cull));
TAIL_STATIC(0x52ed80u,52e);
}
B55f96c:L55f96c:{c.instructions+=2;NFSU2_TR(0x55f96c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55f96e:{NFSU2_TR(0x55f96e);
if(r1(R+518)){{goto L55f986;}}
}
B55f970:L55f970:{c.instructions+=4;NFSU2_TR(0x55f970);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55f973:{NFSU2_TR(0x55f973);
w4(R+4,u32(0x73c4ec2dull));
}
B55f978:{NFSU2_TR(0x55f978);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55f97a:{NFSU2_TR(0x55f97a);
if(r1(R+518)){{goto L55f986;}}
}
B55f97c:L55f97c:{c.instructions+=2;NFSU2_TR(0x55f97c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f97f:{NFSU2_TR(0x55f97f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B55f986:L55f986:{c.instructions+=10;NFSU2_TR(0x55f986);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55f98c:{NFSU2_TR(0x55f98c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55f990:{NFSU2_TR(0x55f990);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55f994:{NFSU2_TR(0x55f994);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B55f995:{NFSU2_TR(0x55f995);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f99b:{NFSU2_TR(0x55f99b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B55f99d:{NFSU2_TR(0x55f99d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4cull))));
}
B55f9a0:{NFSU2_TR(0x55f9a0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55f9a2:{NFSU2_TR(0x55f9a2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f9a6:{NFSU2_TR(0x55f9a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55f925u);}goto L55f925;}}
}
B55f9ac:L55f9ac:{c.instructions+=3;NFSU2_TR(0x55f9ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55f9b2:{NFSU2_TR(0x55f9b2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55f9b4:{NFSU2_TR(0x55f9b4);
if(r1(R+518)){{goto L55fa22;}}
}
B55f9b6:L55f9b6:{c.instructions+=5;NFSU2_TR(0x55f9b6);
__builtin_memmove((R+0),gp(0x839bbc),4);
}
B55f9bb:{NFSU2_TR(0x55f9bb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f9bc:{NFSU2_TR(0x55f9bc);
u8 U[4];
w4(U+0,u32(0xebb03e66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f9c1:{NFSU2_TR(0x55f9c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55f9c5:{NFSU2_TR(0x55f9c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f9caull));
TAIL_STATIC(0x61b500u,61b);
}
B55f9ca:L55f9ca:{c.instructions+=2;NFSU2_TR(0x55f9ca);
u8 U[22];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B55f9ce:{NFSU2_TR(0x55f9ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55fa22;}}
}
B55f9d0:L55f9d0:{c.instructions+=2;NFSU2_TR(0x55f9d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55f9d6:{NFSU2_TR(0x55f9d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f9dbull));
TAIL_STATIC(0x610000u,610);
}
B55f9db:L55f9db:{c.instructions+=2;NFSU2_TR(0x55f9db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f9dc:{NFSU2_TR(0x55f9dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f9e1ull));
TAIL_STATIC(0x43db50u,43d);
}
B55f9e1:L55f9e1:{c.instructions+=5;NFSU2_TR(0x55f9e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55f9e5:{NFSU2_TR(0x55f9e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55f9e8:{NFSU2_TR(0x55f9e8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55f9eb:{NFSU2_TR(0x55f9eb);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55f9ed:{NFSU2_TR(0x55f9ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55fa22;}}
}
B55f9ef:L55f9ef:{c.instructions+=4;NFSU2_TR(0x55f9ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55f9f5:{NFSU2_TR(0x55f9f5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55f9f6:{NFSU2_TR(0x55f9f6);
__builtin_memmove((R+4),(R+28),4);
}
B55f9f8:{NFSU2_TR(0x55f9f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55f9fdull));
TAIL_STATIC(0x51f7a0u,51f);
}
B55f9fd:L55f9fd:{c.instructions+=2;NFSU2_TR(0x55f9fd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55f9ff:{NFSU2_TR(0x55f9ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55fa0f;}}
}
B55fa01:L55fa01:{c.instructions+=3;NFSU2_TR(0x55fa01);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55fa04:{NFSU2_TR(0x55fa04);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55fa06:{NFSU2_TR(0x55fa06);
if(r1(R+518)){{goto L55fa0d;}}
}
B55fa08:L55fa08:{c.instructions+=2;NFSU2_TR(0x55fa08);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B55fa0b:{NFSU2_TR(0x55fa0b);
{goto L55fa0f;}
}
B55fa0d:L55fa0d:{c.instructions+=1;NFSU2_TR(0x55fa0d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55fa0f:L55fa0f:{c.instructions+=3;NFSU2_TR(0x55fa0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fa10:{NFSU2_TR(0x55fa10);
__builtin_memmove((R+4),(R+28),4);
}
B55fa12:{NFSU2_TR(0x55fa12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fa17ull));
TAIL_STATIC(0x5386a0u,538);
}
B55fa17:L55fa17:{c.instructions+=3;NFSU2_TR(0x55fa17);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fa18:{NFSU2_TR(0x55fa18);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B55fa1b:{NFSU2_TR(0x55fa1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fa20ull));
TAIL_STATIC(0x43be80u,43b);
}
B55fa20:L55fa20:{c.instructions+=1;NFSU2_TR(0x55fa20);
{goto L55fa7b;}
}
B55fa22:L55fa22:{c.instructions+=3;NFSU2_TR(0x55fa22);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55fa25:{NFSU2_TR(0x55fa25);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55fa27:{NFSU2_TR(0x55fa27);
if(r1(R+518)){{goto L55fa2e;}}
}
B55fa29:L55fa29:{c.instructions+=2;NFSU2_TR(0x55fa29);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B55fa2c:{NFSU2_TR(0x55fa2c);
{goto L55fa30;}
}
B55fa2e:L55fa2e:{c.instructions+=1;NFSU2_TR(0x55fa2e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55fa30:L55fa30:{c.instructions+=2;NFSU2_TR(0x55fa30);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B55fa33:{NFSU2_TR(0x55fa33);
if(r1(R+518)){{goto L55fa7b;}}
}
B55fa35:L55fa35:{c.instructions+=4;NFSU2_TR(0x55fa35);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B55fa38:{NFSU2_TR(0x55fa38);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55fa3b:{NFSU2_TR(0x55fa3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55fa3e:{NFSU2_TR(0x55fa3e);
if(r1(R+518)){{goto L55fa45;}}
}
B55fa40:L55fa40:{c.instructions+=2;NFSU2_TR(0x55fa40);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B55fa43:{NFSU2_TR(0x55fa43);
{goto L55fa48;}
}
B55fa45:L55fa45:{c.instructions+=1;NFSU2_TR(0x55fa45);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B55fa48:L55fa48:{c.instructions+=6;NFSU2_TR(0x55fa48);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B55fa4a:{NFSU2_TR(0x55fa4a);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B55fa4d:{NFSU2_TR(0x55fa4d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B55fa4f:{NFSU2_TR(0x55fa4f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B55fa51:{NFSU2_TR(0x55fa51);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B55fa54:{NFSU2_TR(0x55fa54);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L55fa5c;}}
}
B55fa56:L55fa56:{c.instructions+=1;NFSU2_TR(0x55fa56);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
w2(U+4,u16(0x2ull));
s2(u32(r4(U+0)),r2(U+4));
}
B55fa5c:L55fa5c:{c.instructions+=11;NFSU2_TR(0x55fa5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55fa5f:{NFSU2_TR(0x55fa5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55fa62:{NFSU2_TR(0x55fa62);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55fa65:{NFSU2_TR(0x55fa65);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B55fa67:{NFSU2_TR(0x55fa67);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55fa6a:{NFSU2_TR(0x55fa6a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B55fa6e:{NFSU2_TR(0x55fa6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55fa71:{NFSU2_TR(0x55fa71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B55fa73:{NFSU2_TR(0x55fa73);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fa74:{NFSU2_TR(0x55fa74);
__builtin_memmove((R+4),(R+28),4);
}
B55fa76:{NFSU2_TR(0x55fa76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fa7bull));
TAIL_STATIC(0x52eea0u,52e);
}
B55fa7b:L55fa7b:{c.instructions+=6;NFSU2_TR(0x55fa7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55fa81:{NFSU2_TR(0x55fa81);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17full))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55fa87:{NFSU2_TR(0x55fa87);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55fa8a:{NFSU2_TR(0x55fa8a);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fa8f:{NFSU2_TR(0x55fa8f);
w4(R+4,u32(0x8389d0ull));
}
B55fa94:{NFSU2_TR(0x55fa94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fa99ull));
TAIL_STATIC(0x413440u,413);
}
B55fa99:L55fa99:{c.instructions+=4;NFSU2_TR(0x55fa99);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fa9a:{NFSU2_TR(0x55fa9a);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fa9c:{NFSU2_TR(0x55fa9c);
w4(R+4,u32(0x8389d0ull));
}
B55faa1:{NFSU2_TR(0x55faa1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55faa6ull));
TAIL_STATIC(0x631d20u,631);
}
B55faa6:L55faa6:{c.instructions+=4;NFSU2_TR(0x55faa6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55faa7:{NFSU2_TR(0x55faa7);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55faa9:{NFSU2_TR(0x55faa9);
w4(R+4,u32(0x8389d0ull));
}
B55faae:{NFSU2_TR(0x55faae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fab3ull));
TAIL_STATIC(0x631d20u,631);
}
B55fab3:L55fab3:{c.instructions+=4;NFSU2_TR(0x55fab3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fab4:{NFSU2_TR(0x55fab4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fab6:{NFSU2_TR(0x55fab6);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fabb:{NFSU2_TR(0x55fabb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fac0ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B55fac0:L55fac0:{c.instructions+=5;NFSU2_TR(0x55fac0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55fac3:{NFSU2_TR(0x55fac3);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fac8:{NFSU2_TR(0x55fac8);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55facd:{NFSU2_TR(0x55facd);
w4(R+4,u32(0x8637d0ull));
}
B55fad2:{NFSU2_TR(0x55fad2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fad7ull));
TAIL_STATIC(0x55b1a0u,55b);
}
B55fad7:L55fad7:{c.instructions+=5;NFSU2_TR(0x55fad7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fad8:{NFSU2_TR(0x55fad8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fad9:{NFSU2_TR(0x55fad9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fada:{NFSU2_TR(0x55fada);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fadc:{NFSU2_TR(0x55fadc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fae1ull));
TAIL_STATIC(0x4c2100u,4c2);
}
B55fae1:L55fae1:{c.instructions+=8;NFSU2_TR(0x55fae1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B55fae3:{NFSU2_TR(0x55fae3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B55fae6:{NFSU2_TR(0x55fae6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55fae7:{NFSU2_TR(0x55fae7);
__builtin_memmove((R+4),(R+24),4);
}
B55fae9:{NFSU2_TR(0x55fae9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55faea:{NFSU2_TR(0x55faea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55faeb:{NFSU2_TR(0x55faeb);
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
B55faee:{NFSU2_TR(0x55faee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B55fb00:L55fb00:{c.instructions+=11;NFSU2_TR(0x55fb00);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fb01:{NFSU2_TR(0x55fb01);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fb02:{NFSU2_TR(0x55fb02);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fb03:{NFSU2_TR(0x55fb03);
__builtin_memmove((R+24),(R+4),4);
}
B55fb05:{NFSU2_TR(0x55fb05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55fb08:{NFSU2_TR(0x55fb08);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fb09:{NFSU2_TR(0x55fb09);
u8 U[4];
w4(U+0,u32(0xdf422345ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fb0e:{NFSU2_TR(0x55fb0e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fb0f:{NFSU2_TR(0x55fb0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x43a05263ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55fb16:{NFSU2_TR(0x55fb16);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55fb1d:{NFSU2_TR(0x55fb1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fb22ull));
TAIL_STATIC(0x4954e0u,495);
}
B55fb22:L55fb22:{c.instructions+=5;NFSU2_TR(0x55fb22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55fb25:{NFSU2_TR(0x55fb25);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B55fb27:{NFSU2_TR(0x55fb27);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55fb2a:{NFSU2_TR(0x55fb2a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55fb2c:{NFSU2_TR(0x55fb2c);
if(r1(R+518)){{goto L55fb4b;}}
}
B55fb2e:L55fb2e:{c.instructions+=2;NFSU2_TR(0x55fb2e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fb2f:{NFSU2_TR(0x55fb2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fb34ull));
TAIL_STATIC(0x52cef0u,52c);
}
B55fb34:L55fb34:{c.instructions+=3;NFSU2_TR(0x55fb34);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55fb37:{NFSU2_TR(0x55fb37);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55fb39:{NFSU2_TR(0x55fb39);
if(r1(R+518)){{goto L55fb4b;}}
}
B55fb3b:L55fb3b:{c.instructions+=3;NFSU2_TR(0x55fb3b);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fb40:{NFSU2_TR(0x55fb40);
__builtin_memmove((R+4),(R+0),4);
}
B55fb42:{NFSU2_TR(0x55fb42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fb47ull));
TAIL_STATIC(0x517f80u,517);
}
B55fb47:L55fb47:{c.instructions+=2;NFSU2_TR(0x55fb47);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55fb49:{NFSU2_TR(0x55fb49);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55fb62;}}
}
B55fb4b:L55fb4b:{c.instructions+=3;NFSU2_TR(0x55fb4b);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B55fb50:{NFSU2_TR(0x55fb50);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55fb52:{NFSU2_TR(0x55fb52);
if(r1(R+518)){{goto L55fba9;}}
}
B55fb54:L55fb54:{c.instructions+=4;NFSU2_TR(0x55fb54);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55fb57:{NFSU2_TR(0x55fb57);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fb58:{NFSU2_TR(0x55fb58);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fb5d:{NFSU2_TR(0x55fb5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fb62ull));
TAIL_STATIC(0x52c570u,52c);
}
B55fb62:L55fb62:{c.instructions+=3;NFSU2_TR(0x55fb62);
__builtin_memmove((R+20),(R+0),4);
}
B55fb64:{NFSU2_TR(0x55fb64);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55fb66:{NFSU2_TR(0x55fb66);
if(r1(R+518)){{goto L55fba9;}}
}
B55fb68:L55fb68:{c.instructions+=3;NFSU2_TR(0x55fb68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55fb6b:{NFSU2_TR(0x55fb6b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55fb6d:{NFSU2_TR(0x55fb6d);
if(r1(R+518)){{goto L55fba9;}}
}
B55fb6f:L55fb6f:{c.instructions+=1;NFSU2_TR(0x55fb6f);
}
B55fb70:L55fb70:{c.instructions+=2;NFSU2_TR(0x55fb70);
u8 U[4];
w4(U+0,u32(0x79d788ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fb75:{NFSU2_TR(0x55fb75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fb7aull));
TAIL_STATIC(0x505450u,505);
}
B55fb7a:L55fb7a:{c.instructions+=4;NFSU2_TR(0x55fb7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55fb7d:{NFSU2_TR(0x55fb7d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55fb80:{NFSU2_TR(0x55fb80);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55fb82:{NFSU2_TR(0x55fb82);
if(r1(R+518)){{goto L55fb8d;}}
}
B55fb84:L55fb84:{c.instructions+=3;NFSU2_TR(0x55fb84);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55fb87:{NFSU2_TR(0x55fb87);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55fb89:{NFSU2_TR(0x55fb89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55fb70u);}goto L55fb70;}}
}
B55fb8b:L55fb8b:{c.instructions+=1;NFSU2_TR(0x55fb8b);
{goto L55fba9;}
}
B55fb8d:L55fb8d:{c.instructions+=2;NFSU2_TR(0x55fb8d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55fb8f:{NFSU2_TR(0x55fb8f);
if(r1(R+518)){{goto L55fba9;}}
}
B55fb91:L55fb91:{c.instructions+=2;NFSU2_TR(0x55fb91);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B55fb94:{NFSU2_TR(0x55fb94);
if(r1(R+518)){{goto L55fba6;}}
}
B55fb96:L55fb96:{c.instructions+=3;NFSU2_TR(0x55fb96);
__builtin_memmove((R+4),(R+20),4);
}
B55fb98:{NFSU2_TR(0x55fb98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55fb9b:{NFSU2_TR(0x55fb9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fba0ull));
TAIL_STATIC(0x517720u,517);
}
B55fba0:L55fba0:{c.instructions+=2;NFSU2_TR(0x55fba0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55fba3:{NFSU2_TR(0x55fba3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55fba6:L55fba6:{c.instructions+=1;NFSU2_TR(0x55fba6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55fba9:L55fba9:{c.instructions+=3;NFSU2_TR(0x55fba9);
__builtin_memmove((R+4),(R+24),4);
}
B55fbab:{NFSU2_TR(0x55fbab);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55fbae:{NFSU2_TR(0x55fbae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fbb3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55f8f0u);}goto L55f8f0;}
}
B55fbb3:L55fbb3:{c.instructions+=5;NFSU2_TR(0x55fbb3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55fbb9:{NFSU2_TR(0x55fbb9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fbbb:{NFSU2_TR(0x55fbbb);
__builtin_memmove((R+4),(R+28),4);
}
B55fbbd:{NFSU2_TR(0x55fbbd);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55fbc1:{NFSU2_TR(0x55fbc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fbc6ull));
TAIL_STATIC(0x52eb90u,52e);
}
B55fbc6:L55fbc6:{c.instructions+=4;NFSU2_TR(0x55fbc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55fbc9:{NFSU2_TR(0x55fbc9);
u8 U[4];
w4(U+0,u32(0xa936c3a2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fbce:{NFSU2_TR(0x55fbce);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fbcf:{NFSU2_TR(0x55fbcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fbd4ull));
TAIL_STATIC(0x495520u,495);
}
B55fbd4:L55fbd4:{c.instructions+=4;NFSU2_TR(0x55fbd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55fbd7:{NFSU2_TR(0x55fbd7);
u8 U[4];
w4(U+0,u32(0x89782734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fbdc:{NFSU2_TR(0x55fbdc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fbdd:{NFSU2_TR(0x55fbdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fbe2ull));
TAIL_STATIC(0x495520u,495);
}
B55fbe2:L55fbe2:{c.instructions+=4;NFSU2_TR(0x55fbe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55fbe5:{NFSU2_TR(0x55fbe5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B55fbe8:{NFSU2_TR(0x55fbe8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55fbea:{NFSU2_TR(0x55fbea);
if(r1(R+518)){{goto L55fbf1;}}
}
B55fbec:L55fbec:{c.instructions+=2;NFSU2_TR(0x55fbec);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B55fbef:{NFSU2_TR(0x55fbef);
{goto L55fbf3;}
}
B55fbf1:L55fbf1:{c.instructions+=1;NFSU2_TR(0x55fbf1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55fbf3:L55fbf3:{c.instructions+=2;NFSU2_TR(0x55fbf3);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B55fbf6:{NFSU2_TR(0x55fbf6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55fc09;}}
}
B55fbf8:L55fbf8:{c.instructions+=3;NFSU2_TR(0x55fbf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55fbfe:{NFSU2_TR(0x55fbfe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fbff:{NFSU2_TR(0x55fbff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fc04ull));
TAIL_STATIC(0x50ca00u,50c);
}
B55fc04:L55fc04:{c.instructions+=2;NFSU2_TR(0x55fc04);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55fc07:{NFSU2_TR(0x55fc07);
{goto L55fc48;}
}
B55fc09:L55fc09:{c.instructions+=3;NFSU2_TR(0x55fc09);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55fc0c:{NFSU2_TR(0x55fc0c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55fc0e:{NFSU2_TR(0x55fc0e);
if(r1(R+518)){{goto L55fc15;}}
}
B55fc10:L55fc10:{c.instructions+=2;NFSU2_TR(0x55fc10);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B55fc13:{NFSU2_TR(0x55fc13);
{goto L55fc17;}
}
B55fc15:L55fc15:{c.instructions+=1;NFSU2_TR(0x55fc15);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55fc17:L55fc17:{c.instructions+=2;NFSU2_TR(0x55fc17);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B55fc1a:{NFSU2_TR(0x55fc1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55fc2d;}}
}
B55fc1c:L55fc1c:{c.instructions+=3;NFSU2_TR(0x55fc1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x200ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55fc22:{NFSU2_TR(0x55fc22);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fc23:{NFSU2_TR(0x55fc23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fc28ull));
TAIL_STATIC(0x50ca00u,50c);
}
B55fc28:L55fc28:{c.instructions+=2;NFSU2_TR(0x55fc28);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55fc2b:{NFSU2_TR(0x55fc2b);
{goto L55fc48;}
}
B55fc2d:L55fc2d:{c.instructions+=3;NFSU2_TR(0x55fc2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55fc33:{NFSU2_TR(0x55fc33);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fc34:{NFSU2_TR(0x55fc34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fc39ull));
TAIL_STATIC(0x50ca50u,50c);
}
B55fc39:L55fc39:{c.instructions+=3;NFSU2_TR(0x55fc39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x200ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55fc3f:{NFSU2_TR(0x55fc3f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fc40:{NFSU2_TR(0x55fc40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fc45ull));
TAIL_STATIC(0x50ca50u,50c);
}
B55fc45:L55fc45:{c.instructions+=1;NFSU2_TR(0x55fc45);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55fc48:L55fc48:{c.instructions+=3;NFSU2_TR(0x55fc48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B55fc4b:{NFSU2_TR(0x55fc4b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55fc4d:{NFSU2_TR(0x55fc4d);
if(r1(R+518)){{goto L55fc6c;}}
}
B55fc4f:L55fc4f:{c.instructions+=2;NFSU2_TR(0x55fc4f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fc50:{NFSU2_TR(0x55fc50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fc55ull));
TAIL_STATIC(0x52cef0u,52c);
}
B55fc55:L55fc55:{c.instructions+=3;NFSU2_TR(0x55fc55);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55fc58:{NFSU2_TR(0x55fc58);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55fc5a:{NFSU2_TR(0x55fc5a);
if(r1(R+518)){{goto L55fc6c;}}
}
B55fc5c:L55fc5c:{c.instructions+=3;NFSU2_TR(0x55fc5c);
u8 U[4];
w4(U+0,u32(0x55c171e2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fc61:{NFSU2_TR(0x55fc61);
__builtin_memmove((R+4),(R+0),4);
}
B55fc63:{NFSU2_TR(0x55fc63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fc68ull));
TAIL_STATIC(0x517f80u,517);
}
B55fc68:L55fc68:{c.instructions+=2;NFSU2_TR(0x55fc68);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55fc6a:{NFSU2_TR(0x55fc6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55fc83;}}
}
B55fc6c:L55fc6c:{c.instructions+=3;NFSU2_TR(0x55fc6c);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B55fc71:{NFSU2_TR(0x55fc71);
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
B55fc73:{NFSU2_TR(0x55fc73);
if(r1(R+518)){{goto L55fccc;}}
}
B55fc75:L55fc75:{c.instructions+=4;NFSU2_TR(0x55fc75);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55fc78:{NFSU2_TR(0x55fc78);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fc79:{NFSU2_TR(0x55fc79);
u8 U[4];
w4(U+0,u32(0x55c171e2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fc7e:{NFSU2_TR(0x55fc7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fc83ull));
TAIL_STATIC(0x52c570u,52c);
}
B55fc83:L55fc83:{c.instructions+=3;NFSU2_TR(0x55fc83);
__builtin_memmove((R+28),(R+0),4);
}
B55fc85:{NFSU2_TR(0x55fc85);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B55fc87:{NFSU2_TR(0x55fc87);
if(r1(R+518)){{goto L55fccc;}}
}
B55fc89:L55fc89:{c.instructions+=3;NFSU2_TR(0x55fc89);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B55fc8c:{NFSU2_TR(0x55fc8c);
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
B55fc8e:{NFSU2_TR(0x55fc8e);
if(r1(R+518)){{goto L55fccc;}}
}
B55fc90:L55fc90:{c.instructions+=2;NFSU2_TR(0x55fc90);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fc95:{NFSU2_TR(0x55fc95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fc9aull));
TAIL_STATIC(0x505450u,505);
}
B55fc9a:L55fc9a:{c.instructions+=4;NFSU2_TR(0x55fc9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55fc9d:{NFSU2_TR(0x55fc9d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55fca0:{NFSU2_TR(0x55fca0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55fca2:{NFSU2_TR(0x55fca2);
if(r1(R+518)){{goto L55fcb0;}}
}
B55fca4:L55fca4:{c.instructions+=3;NFSU2_TR(0x55fca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B55fca7:{NFSU2_TR(0x55fca7);
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
B55fca9:{NFSU2_TR(0x55fca9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55fc90u);}goto L55fc90;}}
}
B55fcab:L55fcab:{c.instructions+=5;NFSU2_TR(0x55fcab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55fcac:{NFSU2_TR(0x55fcac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55fcad:{NFSU2_TR(0x55fcad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55fcae:{NFSU2_TR(0x55fcae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55fcaf:{NFSU2_TR(0x55fcaf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55fcb0:L55fcb0:{c.instructions+=2;NFSU2_TR(0x55fcb0);
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
B55fcb2:{NFSU2_TR(0x55fcb2);
if(r1(R+518)){{goto L55fccc;}}
}
B55fcb4:L55fcb4:{c.instructions+=2;NFSU2_TR(0x55fcb4);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+14)));
w4(U+18,u32(u32(r4(R+24))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B55fcb7:{NFSU2_TR(0x55fcb7);
if(r1(R+518)){{goto L55fcc9;}}
}
B55fcb9:L55fcb9:{c.instructions+=3;NFSU2_TR(0x55fcb9);
__builtin_memmove((R+4),(R+28),4);
}
B55fcbb:{NFSU2_TR(0x55fcbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55fcbe:{NFSU2_TR(0x55fcbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fcc3ull));
TAIL_STATIC(0x517720u,517);
}
B55fcc3:L55fcc3:{c.instructions+=2;NFSU2_TR(0x55fcc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55fcc6:{NFSU2_TR(0x55fcc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55fcc9:L55fcc9:{c.instructions+=1;NFSU2_TR(0x55fcc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55fccc:L55fccc:{c.instructions+=5;NFSU2_TR(0x55fccc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55fccd:{NFSU2_TR(0x55fccd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55fcce:{NFSU2_TR(0x55fcce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55fccf:{NFSU2_TR(0x55fccf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55fcd0:{NFSU2_TR(0x55fcd0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55fce0:L55fce0:{c.instructions+=8;NFSU2_TR(0x55fce0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fce1:{NFSU2_TR(0x55fce1);
__builtin_memmove((R+20),(R+16),4);
}
B55fce3:{NFSU2_TR(0x55fce3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fce4:{NFSU2_TR(0x55fce4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fce5:{NFSU2_TR(0x55fce5);
__builtin_memmove((R+24),(R+4),4);
}
B55fce7:{NFSU2_TR(0x55fce7);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B55fced:{NFSU2_TR(0x55fced);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fcef:{NFSU2_TR(0x55fcef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fcf4ull));
TAIL_STATIC(0x458520u,458);
}
B55fcf4:L55fcf4:{c.instructions+=6;NFSU2_TR(0x55fcf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55fcf7:{NFSU2_TR(0x55fcf7);
u8 U[4];
w4(U+0,u32(0xdf422345ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fcfc:{NFSU2_TR(0x55fcfc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fcfd:{NFSU2_TR(0x55fcfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x7a4c4ab2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55fd04:{NFSU2_TR(0x55fd04);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55fd0b:{NFSU2_TR(0x55fd0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fd10ull));
TAIL_STATIC(0x495520u,495);
}
B55fd10:L55fd10:{c.instructions+=5;NFSU2_TR(0x55fd10);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55fd13:{NFSU2_TR(0x55fd13);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+4),(U+0),4);
}
B55fd19:{NFSU2_TR(0x55fd19);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fd1b:{NFSU2_TR(0x55fd1b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2full))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55fd1f:{NFSU2_TR(0x55fd1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fd24ull));
TAIL_STATIC(0x52eb90u,52e);
}
B55fd24:L55fd24:{c.instructions+=5;NFSU2_TR(0x55fd24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55fd27:{NFSU2_TR(0x55fd27);
u8 U[4];
w4(U+0,u32(0xa936c3a2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fd2c:{NFSU2_TR(0x55fd2c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fd2d:{NFSU2_TR(0x55fd2d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55fd31:{NFSU2_TR(0x55fd31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fd36ull));
TAIL_STATIC(0x4954e0u,495);
}
B55fd36:L55fd36:{c.instructions+=4;NFSU2_TR(0x55fd36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55fd39:{NFSU2_TR(0x55fd39);
u8 U[4];
w4(U+0,u32(0x89782734ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fd3e:{NFSU2_TR(0x55fd3e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fd3f:{NFSU2_TR(0x55fd3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fd44ull));
TAIL_STATIC(0x4954e0u,495);
}
B55fd44:L55fd44:{c.instructions+=4;NFSU2_TR(0x55fd44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55fd4a:{NFSU2_TR(0x55fd4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55fd4d:{NFSU2_TR(0x55fd4d);
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
B55fd50:{NFSU2_TR(0x55fd50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fd55ull));
TAIL_STATIC(0x610000u,610);
}
B55fd55:L55fd55:{c.instructions+=2;NFSU2_TR(0x55fd55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fd56:{NFSU2_TR(0x55fd56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fd5bull));
TAIL_STATIC(0x43db50u,43d);
}
B55fd5b:L55fd5b:{c.instructions+=5;NFSU2_TR(0x55fd5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55fd5e:{NFSU2_TR(0x55fd5e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55fd61:{NFSU2_TR(0x55fd61);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55fd63:{NFSU2_TR(0x55fd63);
w4(R+4,u32(0x8389d0ull));
}
B55fd68:{NFSU2_TR(0x55fd68);
if(r1(R+518)){{goto L55fdd2;}}
}
B55fd6a:L55fd6a:{c.instructions+=5;NFSU2_TR(0x55fd6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55fd6d:{NFSU2_TR(0x55fd6d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fd6e:{NFSU2_TR(0x55fd6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B55fd71:{NFSU2_TR(0x55fd71);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fd76:{NFSU2_TR(0x55fd76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fd7bull));
TAIL_STATIC(0x413440u,413);
}
B55fd7b:L55fd7b:{c.instructions+=4;NFSU2_TR(0x55fd7b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fd7c:{NFSU2_TR(0x55fd7c);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fd7e:{NFSU2_TR(0x55fd7e);
w4(R+4,u32(0x8389d0ull));
}
B55fd83:{NFSU2_TR(0x55fd83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fd88ull));
TAIL_STATIC(0x631d20u,631);
}
B55fd88:L55fd88:{c.instructions+=4;NFSU2_TR(0x55fd88);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fd89:{NFSU2_TR(0x55fd89);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fd8b:{NFSU2_TR(0x55fd8b);
w4(R+4,u32(0x8389d0ull));
}
B55fd90:{NFSU2_TR(0x55fd90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fd95ull));
TAIL_STATIC(0x631d20u,631);
}
B55fd95:L55fd95:{c.instructions+=4;NFSU2_TR(0x55fd95);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fd97:{NFSU2_TR(0x55fd97);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fd99:{NFSU2_TR(0x55fd99);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fd9e:{NFSU2_TR(0x55fd9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fda3ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B55fda3:L55fda3:{c.instructions+=5;NFSU2_TR(0x55fda3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55fda6:{NFSU2_TR(0x55fda6);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fdab:{NFSU2_TR(0x55fdab);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fdb0:{NFSU2_TR(0x55fdb0);
w4(R+4,u32(0x8637d0ull));
}
B55fdb5:{NFSU2_TR(0x55fdb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fdbaull));
TAIL_STATIC(0x55b1a0u,55b);
}
B55fdba:L55fdba:{c.instructions+=7;NFSU2_TR(0x55fdba);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55fdbd:{NFSU2_TR(0x55fdbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55fdc0:{NFSU2_TR(0x55fdc0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fdc2:{NFSU2_TR(0x55fdc2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fdc4:{NFSU2_TR(0x55fdc4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fdc5:{NFSU2_TR(0x55fdc5);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fdc7:{NFSU2_TR(0x55fdc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fdccull));
TAIL_STATIC(0x4c2100u,4c2);
}
B55fdcc:L55fdcc:{c.instructions+=3;NFSU2_TR(0x55fdcc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B55fdcf:{NFSU2_TR(0x55fdcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55fdd0:{NFSU2_TR(0x55fdd0);
{goto L55fe36;}
}
B55fdd2:L55fdd2:{c.instructions+=3;NFSU2_TR(0x55fdd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55fdd8:{NFSU2_TR(0x55fdd8);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fddd:{NFSU2_TR(0x55fddd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fde2ull));
TAIL_STATIC(0x413440u,413);
}
B55fde2:L55fde2:{c.instructions+=4;NFSU2_TR(0x55fde2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fde3:{NFSU2_TR(0x55fde3);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fde5:{NFSU2_TR(0x55fde5);
w4(R+4,u32(0x8389d0ull));
}
B55fdea:{NFSU2_TR(0x55fdea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fdefull));
TAIL_STATIC(0x631d20u,631);
}
B55fdef:L55fdef:{c.instructions+=4;NFSU2_TR(0x55fdef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fdf0:{NFSU2_TR(0x55fdf0);
u8 U[4];
w4(U+0,u32(0x1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fdf2:{NFSU2_TR(0x55fdf2);
w4(R+4,u32(0x8389d0ull));
}
B55fdf7:{NFSU2_TR(0x55fdf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fdfcull));
TAIL_STATIC(0x631d20u,631);
}
B55fdfc:L55fdfc:{c.instructions+=4;NFSU2_TR(0x55fdfc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fdfe:{NFSU2_TR(0x55fdfe);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fe00:{NFSU2_TR(0x55fe00);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fe05:{NFSU2_TR(0x55fe05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fe0aull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B55fe0a:L55fe0a:{c.instructions+=5;NFSU2_TR(0x55fe0a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55fe0d:{NFSU2_TR(0x55fe0d);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fe12:{NFSU2_TR(0x55fe12);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fe17:{NFSU2_TR(0x55fe17);
w4(R+4,u32(0x8637d0ull));
}
B55fe1c:{NFSU2_TR(0x55fe1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fe21ull));
TAIL_STATIC(0x55b1a0u,55b);
}
B55fe21:L55fe21:{c.instructions+=6;NFSU2_TR(0x55fe21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55fe27:{NFSU2_TR(0x55fe27);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fe29:{NFSU2_TR(0x55fe29);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fe2b:{NFSU2_TR(0x55fe2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fe2c:{NFSU2_TR(0x55fe2c);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fe2e:{NFSU2_TR(0x55fe2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fe33ull));
TAIL_STATIC(0x4c2100u,4c2);
}
B55fe33:L55fe33:{c.instructions+=1;NFSU2_TR(0x55fe33);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B55fe36:L55fe36:{c.instructions+=4;NFSU2_TR(0x55fe36);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55fe39:{NFSU2_TR(0x55fe39);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55fe3b:{NFSU2_TR(0x55fe3b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fe3d:{NFSU2_TR(0x55fe3d);
if(r1(R+518)){{goto L55fe4f;}}
}
B55fe3f:L55fe3f:{c.instructions+=5;NFSU2_TR(0x55fe3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55fe42:{NFSU2_TR(0x55fe42);
u8 U[4];
w4(U+0,u32(0x79d79cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fe47:{NFSU2_TR(0x55fe47);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fe4c:{NFSU2_TR(0x55fe4c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fe4d:{NFSU2_TR(0x55fe4d);
{goto L55fe5d;}
}
B55fe4f:L55fe4f:{c.instructions+=4;NFSU2_TR(0x55fe4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55fe52:{NFSU2_TR(0x55fe52);
u8 U[4];
w4(U+0,u32(0x79d790ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fe57:{NFSU2_TR(0x55fe57);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fe5c:{NFSU2_TR(0x55fe5c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fe5d:L55fe5d:{c.instructions+=1;NFSU2_TR(0x55fe5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fe62ull));
TAIL_STATIC(0x537c00u,537);
}
B55fe62:L55fe62:{c.instructions+=5;NFSU2_TR(0x55fe62);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B55fe65:{NFSU2_TR(0x55fe65);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fe6a:{NFSU2_TR(0x55fe6a);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fe6f:{NFSU2_TR(0x55fe6f);
w4(R+4,u32(0x8637d0ull));
}
B55fe74:{NFSU2_TR(0x55fe74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fe79ull));
TAIL_STATIC(0x55b1a0u,55b);
}
B55fe79:L55fe79:{c.instructions+=3;NFSU2_TR(0x55fe79);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fe7b:{NFSU2_TR(0x55fe7b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fe7d:{NFSU2_TR(0x55fe7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55fe82ull));
TAIL_STATIC(0x4c2140u,4c2);
}
B55fe82:L55fe82:{c.instructions+=5;NFSU2_TR(0x55fe82);
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
B55fe85:{NFSU2_TR(0x55fe85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55fe86:{NFSU2_TR(0x55fe86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55fe87:{NFSU2_TR(0x55fe87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55fe88:{NFSU2_TR(0x55fe88);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55fe90:L55fe90:{c.instructions+=10;NFSU2_TR(0x55fe90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fe91:{NFSU2_TR(0x55fe91);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55fe94:{NFSU2_TR(0x55fe94);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55fe97:{NFSU2_TR(0x55fe97);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fe98:{NFSU2_TR(0x55fe98);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffdfffaull))));
}
B55fe9e:{NFSU2_TR(0x55fe9e);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B55fea1:{NFSU2_TR(0x55fea1);
w4(R+28,u32(0xa9ull));
}
B55fea6:{NFSU2_TR(0x55fea6);
__builtin_memmove((R+0),(R+28),4);
}
B55fea8:{NFSU2_TR(0x55fea8);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55feb0:{NFSU2_TR(0x55feb0);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L55fef3;}}
}
B55feb2:L55feb2:{c.instructions+=1;NFSU2_TR(0x55feb2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x55ff4cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B55feb9:L55feb9:{c.instructions+=4;NFSU2_TR(0x55feb9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55fec1:{NFSU2_TR(0x55fec1);
w4(R+28,u32(0x39ull));
}
B55fec6:{NFSU2_TR(0x55fec6);
w4(R+0,u32(0x89ull));
}
B55fecb:{NFSU2_TR(0x55fecb);
{goto L55fef3;}
}
B55fecd:L55fecd:{c.instructions+=4;NFSU2_TR(0x55fecd);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55fed5:{NFSU2_TR(0x55fed5);
w4(R+28,u32(0x3aull));
}
B55feda:{NFSU2_TR(0x55feda);
w4(R+0,u32(0x91ull));
}
B55fedf:{NFSU2_TR(0x55fedf);
{goto L55fef3;}
}
B55fee1:L55fee1:{c.instructions+=3;NFSU2_TR(0x55fee1);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55fee9:{NFSU2_TR(0x55fee9);
w4(R+28,u32(0x34ull));
}
B55feee:{NFSU2_TR(0x55feee);
w4(R+0,u32(0x61ull));
}
B55fef3:L55fef3:{c.instructions+=6;NFSU2_TR(0x55fef3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fef4:{NFSU2_TR(0x55fef4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55fef7:{NFSU2_TR(0x55fef7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B55fef9:{NFSU2_TR(0x55fef9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55fefa:{NFSU2_TR(0x55fefa);
__builtin_memmove((R+24),(R+0),4);
}
B55fefc:{NFSU2_TR(0x55fefc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L55ff10;}}
}
B55fefe:L55fefe:{c.instructions+=1;NFSU2_TR(0x55fefe);
__builtin_memmove((R+28),(R+28),4);
}
B55ff00:L55ff00:{c.instructions+=3;NFSU2_TR(0x55ff00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ff01:{NFSU2_TR(0x55ff01);
w4(R+4,u32(0x838980ull));
}
B55ff06:{NFSU2_TR(0x55ff06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ff0bull));
TAIL_STATIC(0x530290u,530);
}
B55ff0b:L55ff0b:{c.instructions+=3;NFSU2_TR(0x55ff0b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B55ff0c:{NFSU2_TR(0x55ff0c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B55ff0e:{NFSU2_TR(0x55ff0e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55ff00u);}goto L55ff00;}}
}
B55ff10:L55ff10:{c.instructions+=4;NFSU2_TR(0x55ff10);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x34ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B55ff13:{NFSU2_TR(0x55ff13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55ff14:{NFSU2_TR(0x55ff14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55ff15:{NFSU2_TR(0x55ff15);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L55ff3c;}}
}
B55ff17:L55ff17:{c.instructions+=2;NFSU2_TR(0x55ff17);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3eull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3eull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55ff1a:{NFSU2_TR(0x55ff1a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L55ff3c;}}
}
B55ff1c:L55ff1c:{c.instructions+=5;NFSU2_TR(0x55ff1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55ff20:{NFSU2_TR(0x55ff20);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ff21:{NFSU2_TR(0x55ff21);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ff22:{NFSU2_TR(0x55ff22);
w4(R+4,u32(0x838980ull));
}
B55ff27:{NFSU2_TR(0x55ff27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ff2cull));
TAIL_STATIC(0x521940u,521);
}
B55ff2c:L55ff2c:{c.instructions+=2;NFSU2_TR(0x55ff2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55ff2e:{NFSU2_TR(0x55ff2e);
if(r1(R+518)){{goto L55ff3c;}}
}
B55ff30:L55ff30:{c.instructions+=4;NFSU2_TR(0x55ff30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ff31:{NFSU2_TR(0x55ff31);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ff32:{NFSU2_TR(0x55ff32);
w4(R+4,u32(0x838980ull));
}
B55ff37:{NFSU2_TR(0x55ff37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ff3cull));
TAIL_STATIC(0x53af20u,53a);
}
B55ff3c:L55ff3c:{c.instructions+=4;NFSU2_TR(0x55ff3c);
w4(R+4,u32(0x838980ull));
}
B55ff41:{NFSU2_TR(0x55ff41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55ff42:{NFSU2_TR(0x55ff42);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55ff45:{NFSU2_TR(0x55ff45);
TAIL_STATIC(0x55c460u,55c);
}
B55ff70:L55ff70:{c.instructions+=5;NFSU2_TR(0x55ff70);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55ff73:{NFSU2_TR(0x55ff73);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55ff76:{NFSU2_TR(0x55ff76);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x20007ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20007ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55ff7b:{NFSU2_TR(0x55ff7b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ff7c:{NFSU2_TR(0x55ff7c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L55ffab;}}
}
B55ff7e:L55ff7e:{c.instructions+=2;NFSU2_TR(0x55ff7e);
w1(R+512,u8((r4(R+0))<(u32(0x20006ull))));
}
B55ff83:{NFSU2_TR(0x55ff83);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L55ffa4;}}
}
B55ff85:L55ff85:{c.instructions+=3;NFSU2_TR(0x55ff85);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x10001ull))));
}
B55ff8a:{NFSU2_TR(0x55ff8a);
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
B55ff8d:{NFSU2_TR(0x55ff8d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L55ffec;}}
}
B55ff8f:L55ff8f:{c.instructions+=1;NFSU2_TR(0x55ff8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x55fff0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B55ff96:L55ff96:{c.instructions+=2;NFSU2_TR(0x55ff96);
w4(R+24,u32(0x79ull));
}
B55ff9b:{NFSU2_TR(0x55ff9b);
{goto L55ffc8;}
}
B55ff9d:L55ff9d:{c.instructions+=2;NFSU2_TR(0x55ff9d);
w4(R+24,u32(0x81ull));
}
B55ffa2:{NFSU2_TR(0x55ffa2);
{goto L55ffc8;}
}
B55ffa4:L55ffa4:{c.instructions+=2;NFSU2_TR(0x55ffa4);
w4(R+24,u32(0x89ull));
}
B55ffa9:{NFSU2_TR(0x55ffa9);
{goto L55ffc8;}
}
B55ffab:L55ffab:{c.instructions+=3;NFSU2_TR(0x55ffab);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x20008ull))));
}
B55ffb0:{NFSU2_TR(0x55ffb0);
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
B55ffb3:{NFSU2_TR(0x55ffb3);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L55ffec;}}
}
B55ffb5:L55ffb5:{c.instructions+=1;NFSU2_TR(0x55ffb5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x560004ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B55ffbc:L55ffbc:{c.instructions+=2;NFSU2_TR(0x55ffbc);
w4(R+24,u32(0x91ull));
}
B55ffc1:{NFSU2_TR(0x55ffc1);
{goto L55ffc8;}
}
B55ffc3:L55ffc3:{c.instructions+=1;NFSU2_TR(0x55ffc3);
w4(R+24,u32(0x61ull));
}
B55ffc8:L55ffc8:{c.instructions+=4;NFSU2_TR(0x55ffc8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ffc9:{NFSU2_TR(0x55ffc9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55ffcc:{NFSU2_TR(0x55ffcc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B55ffce:{NFSU2_TR(0x55ffce);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L55ffe0;}}
}
B55ffd0:L55ffd0:{c.instructions+=3;NFSU2_TR(0x55ffd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ffd1:{NFSU2_TR(0x55ffd1);
w4(R+4,u32(0x838980ull));
}
B55ffd6:{NFSU2_TR(0x55ffd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ffdbull));
TAIL_STATIC(0x530290u,530);
}
B55ffdb:L55ffdb:{c.instructions+=3;NFSU2_TR(0x55ffdb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B55ffdc:{NFSU2_TR(0x55ffdc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B55ffde:{NFSU2_TR(0x55ffde);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55ffd0u);}goto L55ffd0;}}
}
B55ffe0:L55ffe0:{c.instructions+=4;NFSU2_TR(0x55ffe0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55ffe1:{NFSU2_TR(0x55ffe1);
w4(R+4,u32(0x838980ull));
}
B55ffe6:{NFSU2_TR(0x55ffe6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55ffe7:{NFSU2_TR(0x55ffe7);
TAIL_STATIC(0x55c460u,55c);
}
B55ffec:L55ffec:{c.instructions+=2;NFSU2_TR(0x55ffec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55ffed:{NFSU2_TR(0x55ffed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x55f,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
