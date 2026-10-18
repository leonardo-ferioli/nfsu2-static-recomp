#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_40a(u8* __restrict R,Cpu& c);
u32 body_40b(u8* __restrict R,Cpu& c);
u32 body_411(u8* __restrict R,Cpu& c);
u32 body_412(u8* __restrict R,Cpu& c);
u32 body_418(u8* __restrict R,Cpu& c);
u32 body_419(u8* __restrict R,Cpu& c);
u32 body_41a(u8* __restrict R,Cpu& c);
u32 body_41e(u8* __restrict R,Cpu& c);
u32 body_420(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x41f,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x41f,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_41f(u8* __restrict R,Cpu& c);
u32 page_41f(Cpu& c){return body_41f(c.regs.data(),c);}
__attribute__((noinline)) u32 body_41f(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x41f000:goto L41f000;
case 0x41f002:goto L41f002;
case 0x41f009:c.instructions+=1;goto B41f009;
case 0x41f00b:goto L41f00b;
case 0x41f00d:goto L41f00d;
case 0x41f010:c.instructions+=5;goto B41f010;
case 0x41f013:c.instructions+=4;goto B41f013;
case 0x41f01a:c.instructions+=3;goto B41f01a;
case 0x41f01c:c.instructions+=2;goto B41f01c;
case 0x41f020:c.instructions+=1;goto B41f020;
case 0x41f022:goto L41f022;
case 0x41f026:c.instructions+=7;goto B41f026;
case 0x41f028:c.instructions+=6;goto B41f028;
case 0x41f02b:c.instructions+=5;goto B41f02b;
case 0x41f02d:c.instructions+=4;goto B41f02d;
case 0x41f02f:c.instructions+=3;goto B41f02f;
case 0x41f032:c.instructions+=2;goto B41f032;
case 0x41f036:c.instructions+=1;goto B41f036;
case 0x41f039:goto L41f039;
case 0x41f03c:c.instructions+=5;goto B41f03c;
case 0x41f03e:c.instructions+=4;goto B41f03e;
case 0x41f042:c.instructions+=3;goto B41f042;
case 0x41f046:c.instructions+=2;goto B41f046;
case 0x41f047:c.instructions+=1;goto B41f047;
case 0x41f04c:goto L41f04c;
case 0x41f050:c.instructions+=11;goto B41f050;
case 0x41f054:c.instructions+=10;goto B41f054;
case 0x41f055:c.instructions+=9;goto B41f055;
case 0x41f059:c.instructions+=8;goto B41f059;
case 0x41f05d:c.instructions+=7;goto B41f05d;
case 0x41f061:c.instructions+=6;goto B41f061;
case 0x41f064:c.instructions+=5;goto B41f064;
case 0x41f065:c.instructions+=4;goto B41f065;
case 0x41f066:c.instructions+=3;goto B41f066;
case 0x41f067:c.instructions+=2;goto B41f067;
case 0x41f069:c.instructions+=1;goto B41f069;
case 0x41f06c:goto L41f06c;
case 0x41f070:c.instructions+=2;goto B41f070;
case 0x41f074:c.instructions+=1;goto B41f074;
case 0x41f076:goto L41f076;
case 0x41f07c:c.instructions+=1;goto B41f07c;
case 0x41f084:goto L41f084;
case 0x41f088:c.instructions+=8;goto B41f088;
case 0x41f08c:c.instructions+=7;goto B41f08c;
case 0x41f08f:c.instructions+=6;goto B41f08f;
case 0x41f093:c.instructions+=5;goto B41f093;
case 0x41f095:c.instructions+=4;goto B41f095;
case 0x41f097:c.instructions+=3;goto B41f097;
case 0x41f099:c.instructions+=2;goto B41f099;
case 0x41f09d:c.instructions+=1;goto B41f09d;
case 0x41f0a0:goto L41f0a0;
case 0x41f0a4:c.instructions+=3;goto B41f0a4;
case 0x41f0a8:c.instructions+=2;goto B41f0a8;
case 0x41f0ac:c.instructions+=1;goto B41f0ac;
case 0x41f0b2:goto L41f0b2;
case 0x41f0b6:c.instructions+=2;goto B41f0b6;
case 0x41f0ba:c.instructions+=1;goto B41f0ba;
case 0x41f0bc:goto L41f0bc;
case 0x41f0bf:c.instructions+=2;goto B41f0bf;
case 0x41f0c1:c.instructions+=1;goto B41f0c1;
case 0x41f0c3:goto L41f0c3;
case 0x41f0ca:c.instructions+=1;goto B41f0ca;
case 0x41f0cc:goto L41f0cc;
case 0x41f0ce:goto L41f0ce;
case 0x41f0d1:c.instructions+=5;goto B41f0d1;
case 0x41f0d4:c.instructions+=4;goto B41f0d4;
case 0x41f0db:c.instructions+=3;goto B41f0db;
case 0x41f0dd:c.instructions+=2;goto B41f0dd;
case 0x41f0e1:c.instructions+=1;goto B41f0e1;
case 0x41f0e3:goto L41f0e3;
case 0x41f0e7:c.instructions+=7;goto B41f0e7;
case 0x41f0e9:c.instructions+=6;goto B41f0e9;
case 0x41f0ec:c.instructions+=5;goto B41f0ec;
case 0x41f0ee:c.instructions+=4;goto B41f0ee;
case 0x41f0f0:c.instructions+=3;goto B41f0f0;
case 0x41f0f3:c.instructions+=2;goto B41f0f3;
case 0x41f0f7:c.instructions+=1;goto B41f0f7;
case 0x41f0fa:goto L41f0fa;
case 0x41f0fd:c.instructions+=5;goto B41f0fd;
case 0x41f0ff:c.instructions+=4;goto B41f0ff;
case 0x41f103:c.instructions+=3;goto B41f103;
case 0x41f107:c.instructions+=2;goto B41f107;
case 0x41f108:c.instructions+=1;goto B41f108;
case 0x41f10d:goto L41f10d;
case 0x41f111:c.instructions+=11;goto B41f111;
case 0x41f115:c.instructions+=10;goto B41f115;
case 0x41f116:c.instructions+=9;goto B41f116;
case 0x41f11a:c.instructions+=8;goto B41f11a;
case 0x41f11e:c.instructions+=7;goto B41f11e;
case 0x41f122:c.instructions+=6;goto B41f122;
case 0x41f125:c.instructions+=5;goto B41f125;
case 0x41f126:c.instructions+=4;goto B41f126;
case 0x41f127:c.instructions+=3;goto B41f127;
case 0x41f128:c.instructions+=2;goto B41f128;
case 0x41f12a:c.instructions+=1;goto B41f12a;
case 0x41f12d:goto L41f12d;
case 0x41f131:c.instructions+=2;goto B41f131;
case 0x41f135:c.instructions+=1;goto B41f135;
case 0x41f137:goto L41f137;
case 0x41f13d:c.instructions+=1;goto B41f13d;
case 0x41f145:goto L41f145;
case 0x41f149:c.instructions+=6;goto B41f149;
case 0x41f14d:c.instructions+=5;goto B41f14d;
case 0x41f151:c.instructions+=4;goto B41f151;
case 0x41f152:c.instructions+=3;goto B41f152;
case 0x41f154:c.instructions+=2;goto B41f154;
case 0x41f158:c.instructions+=1;goto B41f158;
case 0x41f15d:goto L41f15d;
case 0x41f161:c.instructions+=4;goto B41f161;
case 0x41f165:c.instructions+=3;goto B41f165;
case 0x41f166:c.instructions+=2;goto B41f166;
case 0x41f168:c.instructions+=1;goto B41f168;
case 0x41f16d:goto L41f16d;
case 0x41f171:c.instructions+=4;goto B41f171;
case 0x41f175:c.instructions+=3;goto B41f175;
case 0x41f176:c.instructions+=2;goto B41f176;
case 0x41f178:c.instructions+=1;goto B41f178;
case 0x41f17d:goto L41f17d;
case 0x41f181:c.instructions+=4;goto B41f181;
case 0x41f185:c.instructions+=3;goto B41f185;
case 0x41f186:c.instructions+=2;goto B41f186;
case 0x41f188:c.instructions+=1;goto B41f188;
case 0x41f18d:goto L41f18d;
case 0x41f191:c.instructions+=4;goto B41f191;
case 0x41f193:c.instructions+=3;goto B41f193;
case 0x41f195:c.instructions+=2;goto B41f195;
case 0x41f198:c.instructions+=1;goto B41f198;
case 0x41f19a:goto L41f19a;
case 0x41f19e:c.instructions+=3;goto B41f19e;
case 0x41f1a0:c.instructions+=2;goto B41f1a0;
case 0x41f1a4:c.instructions+=1;goto B41f1a4;
case 0x41f1a6:goto L41f1a6;
case 0x41f1aa:goto L41f1aa;
case 0x41f1b0:c.instructions+=11;goto B41f1b0;
case 0x41f1b8:c.instructions+=10;goto B41f1b8;
case 0x41f1be:c.instructions+=9;goto B41f1be;
case 0x41f1c4:c.instructions+=8;goto B41f1c4;
case 0x41f1c6:c.instructions+=7;goto B41f1c6;
case 0x41f1ca:c.instructions+=6;goto B41f1ca;
case 0x41f1ce:c.instructions+=5;goto B41f1ce;
case 0x41f1d4:c.instructions+=4;goto B41f1d4;
case 0x41f1d8:c.instructions+=3;goto B41f1d8;
case 0x41f1da:c.instructions+=2;goto B41f1da;
case 0x41f1dd:c.instructions+=1;goto B41f1dd;
case 0x41f1df:goto L41f1df;
case 0x41f1e3:c.instructions+=1;goto B41f1e3;
case 0x41f1e7:goto L41f1e7;
case 0x41f1ee:c.instructions+=3;goto B41f1ee;
case 0x41f1f6:c.instructions+=2;goto B41f1f6;
case 0x41f1fa:c.instructions+=1;goto B41f1fa;
case 0x41f202:goto L41f202;
case 0x41f206:c.instructions+=8;goto B41f206;
case 0x41f208:c.instructions+=7;goto B41f208;
case 0x41f20c:c.instructions+=6;goto B41f20c;
case 0x41f20e:c.instructions+=5;goto B41f20e;
case 0x41f210:c.instructions+=4;goto B41f210;
case 0x41f213:c.instructions+=3;goto B41f213;
case 0x41f217:c.instructions+=2;goto B41f217;
case 0x41f218:c.instructions+=1;goto B41f218;
case 0x41f21a:goto L41f21a;
case 0x41f21d:goto L41f21d;
case 0x41f21f:goto L41f21f;
case 0x41f222:goto L41f222;
case 0x41f224:c.instructions+=14;goto B41f224;
case 0x41f226:c.instructions+=13;goto B41f226;
case 0x41f228:c.instructions+=12;goto B41f228;
case 0x41f22c:c.instructions+=11;goto B41f22c;
case 0x41f22e:c.instructions+=10;goto B41f22e;
case 0x41f234:c.instructions+=9;goto B41f234;
case 0x41f236:c.instructions+=8;goto B41f236;
case 0x41f23c:c.instructions+=7;goto B41f23c;
case 0x41f23e:c.instructions+=6;goto B41f23e;
case 0x41f240:c.instructions+=5;goto B41f240;
case 0x41f244:c.instructions+=4;goto B41f244;
case 0x41f246:c.instructions+=3;goto B41f246;
case 0x41f248:c.instructions+=2;goto B41f248;
case 0x41f24b:c.instructions+=1;goto B41f24b;
case 0x41f24d:goto L41f24d;
case 0x41f251:c.instructions+=1;goto B41f251;
case 0x41f253:goto L41f253;
case 0x41f255:goto L41f255;
case 0x41f259:c.instructions+=9;goto B41f259;
case 0x41f25d:c.instructions+=8;goto B41f25d;
case 0x41f261:c.instructions+=7;goto B41f261;
case 0x41f262:c.instructions+=6;goto B41f262;
case 0x41f265:c.instructions+=5;goto B41f265;
case 0x41f266:c.instructions+=4;goto B41f266;
case 0x41f26a:c.instructions+=3;goto B41f26a;
case 0x41f26e:c.instructions+=2;goto B41f26e;
case 0x41f272:c.instructions+=1;goto B41f272;
case 0x41f274:goto L41f274;
case 0x41f278:c.instructions+=2;goto B41f278;
case 0x41f27c:c.instructions+=1;goto B41f27c;
case 0x41f280:goto L41f280;
case 0x41f283:c.instructions+=6;goto B41f283;
case 0x41f287:c.instructions+=5;goto B41f287;
case 0x41f28d:c.instructions+=4;goto B41f28d;
case 0x41f28f:c.instructions+=3;goto B41f28f;
case 0x41f291:c.instructions+=2;goto B41f291;
case 0x41f294:c.instructions+=1;goto B41f294;
case 0x41f296:goto L41f296;
case 0x41f299:c.instructions+=3;goto B41f299;
case 0x41f29b:c.instructions+=2;goto B41f29b;
case 0x41f29f:c.instructions+=1;goto B41f29f;
case 0x41f2a1:goto L41f2a1;
case 0x41f2a8:goto L41f2a8;
case 0x41f2aa:c.instructions+=3;goto B41f2aa;
case 0x41f2ac:c.instructions+=2;goto B41f2ac;
case 0x41f2ae:c.instructions+=1;goto B41f2ae;
case 0x41f2b0:goto L41f2b0;
case 0x41f2b3:c.instructions+=7;goto B41f2b3;
case 0x41f2b7:c.instructions+=6;goto B41f2b7;
case 0x41f2bf:c.instructions+=5;goto B41f2bf;
case 0x41f2c2:c.instructions+=4;goto B41f2c2;
case 0x41f2c3:c.instructions+=3;goto B41f2c3;
case 0x41f2c5:c.instructions+=2;goto B41f2c5;
case 0x41f2c8:c.instructions+=1;goto B41f2c8;
case 0x41f2ca:goto L41f2ca;
case 0x41f2d0:goto L41f2d0;
case 0x41f2d6:c.instructions+=6;goto B41f2d6;
case 0x41f2d8:c.instructions+=5;goto B41f2d8;
case 0x41f2dc:c.instructions+=4;goto B41f2dc;
case 0x41f2df:c.instructions+=3;goto B41f2df;
case 0x41f2e1:c.instructions+=2;goto B41f2e1;
case 0x41f2e4:c.instructions+=1;goto B41f2e4;
case 0x41f2ea:goto L41f2ea;
case 0x41f2ee:c.instructions+=1;goto B41f2ee;
case 0x41f2f4:goto L41f2f4;
case 0x41f2f7:c.instructions+=10;goto B41f2f7;
case 0x41f2fb:c.instructions+=9;goto B41f2fb;
case 0x41f2ff:c.instructions+=8;goto B41f2ff;
case 0x41f303:c.instructions+=7;goto B41f303;
case 0x41f306:c.instructions+=6;goto B41f306;
case 0x41f30a:c.instructions+=5;goto B41f30a;
case 0x41f30c:c.instructions+=4;goto B41f30c;
case 0x41f310:c.instructions+=3;goto B41f310;
case 0x41f311:c.instructions+=2;goto B41f311;
case 0x41f313:c.instructions+=1;goto B41f313;
case 0x41f316:goto L41f316;
case 0x41f31a:c.instructions+=18;goto B41f31a;
case 0x41f320:c.instructions+=17;goto B41f320;
case 0x41f321:c.instructions+=16;goto B41f321;
case 0x41f324:c.instructions+=15;goto B41f324;
case 0x41f328:c.instructions+=14;goto B41f328;
case 0x41f32a:c.instructions+=13;goto B41f32a;
case 0x41f32d:c.instructions+=12;goto B41f32d;
case 0x41f330:c.instructions+=11;goto B41f330;
case 0x41f334:c.instructions+=10;goto B41f334;
case 0x41f337:c.instructions+=9;goto B41f337;
case 0x41f33b:c.instructions+=8;goto B41f33b;
case 0x41f341:c.instructions+=7;goto B41f341;
case 0x41f344:c.instructions+=6;goto B41f344;
case 0x41f345:c.instructions+=5;goto B41f345;
case 0x41f346:c.instructions+=4;goto B41f346;
case 0x41f347:c.instructions+=3;goto B41f347;
case 0x41f348:c.instructions+=2;goto B41f348;
case 0x41f34a:c.instructions+=1;goto B41f34a;
case 0x41f34f:goto L41f34f;
case 0x41f352:c.instructions+=3;goto B41f352;
case 0x41f356:c.instructions+=2;goto B41f356;
case 0x41f358:c.instructions+=1;goto B41f358;
case 0x41f35e:goto L41f35e;
case 0x41f361:c.instructions+=2;goto B41f361;
case 0x41f364:c.instructions+=1;goto B41f364;
case 0x41f366:goto L41f366;
case 0x41f36a:c.instructions+=3;goto B41f36a;
case 0x41f36d:c.instructions+=2;goto B41f36d;
case 0x41f36f:c.instructions+=1;goto B41f36f;
case 0x41f371:goto L41f371;
case 0x41f375:c.instructions+=6;goto B41f375;
case 0x41f379:c.instructions+=5;goto B41f379;
case 0x41f37c:c.instructions+=4;goto B41f37c;
case 0x41f37f:c.instructions+=3;goto B41f37f;
case 0x41f383:c.instructions+=2;goto B41f383;
case 0x41f387:c.instructions+=1;goto B41f387;
case 0x41f38a:goto L41f38a;
case 0x41f38d:c.instructions+=6;goto B41f38d;
case 0x41f38e:c.instructions+=5;goto B41f38e;
case 0x41f38f:c.instructions+=4;goto B41f38f;
case 0x41f390:c.instructions+=3;goto B41f390;
case 0x41f392:c.instructions+=2;goto B41f392;
case 0x41f393:c.instructions+=1;goto B41f393;
case 0x41f396:goto L41f396;
case 0x41f398:c.instructions+=3;goto B41f398;
case 0x41f39a:c.instructions+=2;goto B41f39a;
case 0x41f39c:c.instructions+=1;goto B41f39c;
case 0x41f39e:goto L41f39e;
case 0x41f39f:c.instructions+=5;goto B41f39f;
case 0x41f3a0:c.instructions+=4;goto B41f3a0;
case 0x41f3a1:c.instructions+=3;goto B41f3a1;
case 0x41f3a3:c.instructions+=2;goto B41f3a3;
case 0x41f3a4:c.instructions+=1;goto B41f3a4;
case 0x41f3a7:goto L41f3a7;
case 0x41f3ab:c.instructions+=5;goto B41f3ab;
case 0x41f3b0:c.instructions+=4;goto B41f3b0;
case 0x41f3b4:c.instructions+=3;goto B41f3b4;
case 0x41f3b6:c.instructions+=2;goto B41f3b6;
case 0x41f3b9:c.instructions+=1;goto B41f3b9;
case 0x41f3bb:goto L41f3bb;
case 0x41f3c0:goto L41f3c0;
case 0x41f3c4:c.instructions+=9;goto B41f3c4;
case 0x41f3c8:c.instructions+=8;goto B41f3c8;
case 0x41f3ca:c.instructions+=7;goto B41f3ca;
case 0x41f3ce:c.instructions+=6;goto B41f3ce;
case 0x41f3d0:c.instructions+=5;goto B41f3d0;
case 0x41f3d2:c.instructions+=4;goto B41f3d2;
case 0x41f3d6:c.instructions+=3;goto B41f3d6;
case 0x41f3d8:c.instructions+=2;goto B41f3d8;
case 0x41f3dc:c.instructions+=1;goto B41f3dc;
case 0x41f3de:goto L41f3de;
case 0x41f3e1:goto L41f3e1;
case 0x41f3e5:c.instructions+=1;goto B41f3e5;
case 0x41f3e7:goto L41f3e7;
case 0x41f3ea:goto L41f3ea;
case 0x41f3ee:goto L41f3ee;
case 0x41f3f2:c.instructions+=9;goto B41f3f2;
case 0x41f3f6:c.instructions+=8;goto B41f3f6;
case 0x41f3fa:c.instructions+=7;goto B41f3fa;
case 0x41f3fc:c.instructions+=6;goto B41f3fc;
case 0x41f3fd:c.instructions+=5;goto B41f3fd;
case 0x41f3fe:c.instructions+=4;goto B41f3fe;
case 0x41f402:c.instructions+=3;goto B41f402;
case 0x41f404:c.instructions+=2;goto B41f404;
case 0x41f405:c.instructions+=1;goto B41f405;
case 0x41f40a:goto L41f40a;
case 0x41f40e:c.instructions+=9;goto B41f40e;
case 0x41f412:c.instructions+=8;goto B41f412;
case 0x41f416:c.instructions+=7;goto B41f416;
case 0x41f41d:c.instructions+=6;goto B41f41d;
case 0x41f424:c.instructions+=5;goto B41f424;
case 0x41f428:c.instructions+=4;goto B41f428;
case 0x41f430:c.instructions+=3;goto B41f430;
case 0x41f434:c.instructions+=2;goto B41f434;
case 0x41f438:c.instructions+=1;goto B41f438;
case 0x41f440:goto L41f440;
case 0x41f444:c.instructions+=5;goto B41f444;
case 0x41f448:c.instructions+=4;goto B41f448;
case 0x41f44a:c.instructions+=3;goto B41f44a;
case 0x41f44c:c.instructions+=2;goto B41f44c;
case 0x41f450:c.instructions+=1;goto B41f450;
case 0x41f452:goto L41f452;
case 0x41f456:c.instructions+=4;goto B41f456;
case 0x41f458:c.instructions+=3;goto B41f458;
case 0x41f459:c.instructions+=2;goto B41f459;
case 0x41f45b:c.instructions+=1;goto B41f45b;
case 0x41f45e:goto L41f45e;
case 0x41f462:c.instructions+=13;goto B41f462;
case 0x41f466:c.instructions+=12;goto B41f466;
case 0x41f467:c.instructions+=11;goto B41f467;
case 0x41f46b:c.instructions+=10;goto B41f46b;
case 0x41f46f:c.instructions+=9;goto B41f46f;
case 0x41f473:c.instructions+=8;goto B41f473;
case 0x41f474:c.instructions+=7;goto B41f474;
case 0x41f478:c.instructions+=6;goto B41f478;
case 0x41f479:c.instructions+=5;goto B41f479;
case 0x41f47d:c.instructions+=4;goto B41f47d;
case 0x41f480:c.instructions+=3;goto B41f480;
case 0x41f481:c.instructions+=2;goto B41f481;
case 0x41f483:c.instructions+=1;goto B41f483;
case 0x41f488:goto L41f488;
case 0x41f48c:c.instructions+=5;goto B41f48c;
case 0x41f490:c.instructions+=4;goto B41f490;
case 0x41f494:c.instructions+=3;goto B41f494;
case 0x41f496:c.instructions+=2;goto B41f496;
case 0x41f499:c.instructions+=1;goto B41f499;
case 0x41f49b:goto L41f49b;
case 0x41f49f:c.instructions+=4;goto B41f49f;
case 0x41f4a1:c.instructions+=3;goto B41f4a1;
case 0x41f4a2:c.instructions+=2;goto B41f4a2;
case 0x41f4a4:c.instructions+=1;goto B41f4a4;
case 0x41f4a7:goto L41f4a7;
case 0x41f4ab:c.instructions+=13;goto B41f4ab;
case 0x41f4af:c.instructions+=12;goto B41f4af;
case 0x41f4b0:c.instructions+=11;goto B41f4b0;
case 0x41f4b4:c.instructions+=10;goto B41f4b4;
case 0x41f4b8:c.instructions+=9;goto B41f4b8;
case 0x41f4bc:c.instructions+=8;goto B41f4bc;
case 0x41f4bd:c.instructions+=7;goto B41f4bd;
case 0x41f4c1:c.instructions+=6;goto B41f4c1;
case 0x41f4c2:c.instructions+=5;goto B41f4c2;
case 0x41f4c9:c.instructions+=4;goto B41f4c9;
case 0x41f4cb:c.instructions+=3;goto B41f4cb;
case 0x41f4ce:c.instructions+=2;goto B41f4ce;
case 0x41f4cf:c.instructions+=1;goto B41f4cf;
case 0x41f4d4:goto L41f4d4;
case 0x41f4d8:c.instructions+=4;goto B41f4d8;
case 0x41f4df:c.instructions+=3;goto B41f4df;
case 0x41f4e6:c.instructions+=2;goto B41f4e6;
case 0x41f4e8:c.instructions+=1;goto B41f4e8;
case 0x41f4eb:goto L41f4eb;
case 0x41f4ef:c.instructions+=12;goto B41f4ef;
case 0x41f4f3:c.instructions+=11;goto B41f4f3;
case 0x41f4f7:c.instructions+=10;goto B41f4f7;
case 0x41f4f8:c.instructions+=9;goto B41f4f8;
case 0x41f4fc:c.instructions+=8;goto B41f4fc;
case 0x41f500:c.instructions+=7;goto B41f500;
case 0x41f503:c.instructions+=6;goto B41f503;
case 0x41f506:c.instructions+=5;goto B41f506;
case 0x41f507:c.instructions+=4;goto B41f507;
case 0x41f50b:c.instructions+=3;goto B41f50b;
case 0x41f50f:c.instructions+=2;goto B41f50f;
case 0x41f513:c.instructions+=1;goto B41f513;
case 0x41f519:goto L41f519;
case 0x41f51d:c.instructions+=4;goto B41f51d;
case 0x41f51f:c.instructions+=3;goto B41f51f;
case 0x41f523:c.instructions+=2;goto B41f523;
case 0x41f527:c.instructions+=1;goto B41f527;
case 0x41f529:goto L41f529;
case 0x41f52b:c.instructions+=1;goto B41f52b;
case 0x41f530:goto L41f530;
case 0x41f533:c.instructions+=1;goto B41f533;
case 0x41f535:goto L41f535;
case 0x41f53c:c.instructions+=1;goto B41f53c;
case 0x41f540:goto L41f540;
case 0x41f544:c.instructions+=3;goto B41f544;
case 0x41f54a:c.instructions+=2;goto B41f54a;
case 0x41f54e:c.instructions+=1;goto B41f54e;
case 0x41f550:goto L41f550;
case 0x41f554:c.instructions+=2;goto B41f554;
case 0x41f558:c.instructions+=1;goto B41f558;
case 0x41f55a:goto L41f55a;
case 0x41f55d:c.instructions+=2;goto B41f55d;
case 0x41f55f:c.instructions+=1;goto B41f55f;
case 0x41f561:goto L41f561;
case 0x41f568:c.instructions+=1;goto B41f568;
case 0x41f56a:goto L41f56a;
case 0x41f56c:goto L41f56c;
case 0x41f56f:c.instructions+=4;goto B41f56f;
case 0x41f572:c.instructions+=3;goto B41f572;
case 0x41f579:c.instructions+=2;goto B41f579;
case 0x41f57b:c.instructions+=1;goto B41f57b;
case 0x41f57d:goto L41f57d;
case 0x41f57f:c.instructions+=5;goto B41f57f;
case 0x41f581:c.instructions+=4;goto B41f581;
case 0x41f582:c.instructions+=3;goto B41f582;
case 0x41f583:c.instructions+=2;goto B41f583;
case 0x41f585:c.instructions+=1;goto B41f585;
case 0x41f588:goto L41f588;
case 0x41f58b:c.instructions+=2;goto B41f58b;
case 0x41f58e:c.instructions+=1;goto B41f58e;
case 0x41f590:goto L41f590;
case 0x41f593:c.instructions+=5;goto B41f593;
case 0x41f597:c.instructions+=4;goto B41f597;
case 0x41f59b:c.instructions+=3;goto B41f59b;
case 0x41f5a1:c.instructions+=2;goto B41f5a1;
case 0x41f5a5:c.instructions+=1;goto B41f5a5;
case 0x41f5a7:goto L41f5a7;
case 0x41f5ab:c.instructions+=2;goto B41f5ab;
case 0x41f5af:c.instructions+=1;goto B41f5af;
case 0x41f5b1:goto L41f5b1;
case 0x41f5b4:c.instructions+=2;goto B41f5b4;
case 0x41f5b6:c.instructions+=1;goto B41f5b6;
case 0x41f5b8:goto L41f5b8;
case 0x41f5bf:c.instructions+=4;goto B41f5bf;
case 0x41f5c2:c.instructions+=3;goto B41f5c2;
case 0x41f5c5:c.instructions+=2;goto B41f5c5;
case 0x41f5cc:c.instructions+=1;goto B41f5cc;
case 0x41f5ce:goto L41f5ce;
case 0x41f5d1:c.instructions+=4;goto B41f5d1;
case 0x41f5d3:c.instructions+=3;goto B41f5d3;
case 0x41f5d6:c.instructions+=2;goto B41f5d6;
case 0x41f5dd:c.instructions+=1;goto B41f5dd;
case 0x41f5df:goto L41f5df;
case 0x41f5e1:goto L41f5e1;
case 0x41f5e3:c.instructions+=3;goto B41f5e3;
case 0x41f5e4:c.instructions+=2;goto B41f5e4;
case 0x41f5e6:c.instructions+=1;goto B41f5e6;
case 0x41f5e9:goto L41f5e9;
case 0x41f5ed:c.instructions+=3;goto B41f5ed;
case 0x41f5ef:c.instructions+=2;goto B41f5ef;
case 0x41f5f2:c.instructions+=1;goto B41f5f2;
case 0x41f5f8:goto L41f5f8;
case 0x41f600:goto L41f600;
case 0x41f604:c.instructions+=2;goto B41f604;
case 0x41f608:c.instructions+=1;goto B41f608;
case 0x41f60a:goto L41f60a;
case 0x41f60f:c.instructions+=1;goto B41f60f;
case 0x41f611:goto L41f611;
case 0x41f614:c.instructions+=2;goto B41f614;
case 0x41f616:c.instructions+=1;goto B41f616;
case 0x41f618:goto L41f618;
case 0x41f61f:c.instructions+=1;goto B41f61f;
case 0x41f621:goto L41f621;
case 0x41f623:goto L41f623;
case 0x41f627:c.instructions+=2;goto B41f627;
case 0x41f62b:c.instructions+=1;goto B41f62b;
case 0x41f62d:goto L41f62d;
case 0x41f631:c.instructions+=2;goto B41f631;
case 0x41f635:c.instructions+=1;goto B41f635;
case 0x41f637:goto L41f637;
case 0x41f63a:c.instructions+=2;goto B41f63a;
case 0x41f63c:c.instructions+=1;goto B41f63c;
case 0x41f63e:goto L41f63e;
case 0x41f645:c.instructions+=4;goto B41f645;
case 0x41f648:c.instructions+=3;goto B41f648;
case 0x41f64b:c.instructions+=2;goto B41f64b;
case 0x41f652:c.instructions+=1;goto B41f652;
case 0x41f654:goto L41f654;
case 0x41f657:c.instructions+=4;goto B41f657;
case 0x41f659:c.instructions+=3;goto B41f659;
case 0x41f65c:c.instructions+=2;goto B41f65c;
case 0x41f663:c.instructions+=1;goto B41f663;
case 0x41f665:goto L41f665;
case 0x41f667:goto L41f667;
case 0x41f66b:c.instructions+=1;goto B41f66b;
case 0x41f670:goto L41f670;
case 0x41f672:c.instructions+=4;goto B41f672;
case 0x41f674:c.instructions+=3;goto B41f674;
case 0x41f678:c.instructions+=2;goto B41f678;
case 0x41f680:c.instructions+=1;goto B41f680;
case 0x41f683:goto L41f683;
case 0x41f685:c.instructions+=18;goto B41f685;
case 0x41f687:c.instructions+=17;goto B41f687;
case 0x41f689:c.instructions+=16;goto B41f689;
case 0x41f68d:c.instructions+=15;goto B41f68d;
case 0x41f690:c.instructions+=14;goto B41f690;
case 0x41f693:c.instructions+=13;goto B41f693;
case 0x41f694:c.instructions+=12;goto B41f694;
case 0x41f698:c.instructions+=11;goto B41f698;
case 0x41f699:c.instructions+=10;goto B41f699;
case 0x41f69d:c.instructions+=9;goto B41f69d;
case 0x41f69e:c.instructions+=8;goto B41f69e;
case 0x41f6a2:c.instructions+=7;goto B41f6a2;
case 0x41f6a3:c.instructions+=6;goto B41f6a3;
case 0x41f6a7:c.instructions+=5;goto B41f6a7;
case 0x41f6a8:c.instructions+=4;goto B41f6a8;
case 0x41f6ac:c.instructions+=3;goto B41f6ac;
case 0x41f6ad:c.instructions+=2;goto B41f6ad;
case 0x41f6af:c.instructions+=1;goto B41f6af;
case 0x41f6b4:goto L41f6b4;
case 0x41f6b6:c.instructions+=1;goto B41f6b6;
case 0x41f6bc:goto L41f6bc;
case 0x41f6be:c.instructions+=2;goto B41f6be;
case 0x41f6c0:c.instructions+=1;goto B41f6c0;
case 0x41f6c3:goto L41f6c3;
case 0x41f6c8:c.instructions+=5;goto B41f6c8;
case 0x41f6ca:c.instructions+=4;goto B41f6ca;
case 0x41f6cc:c.instructions+=3;goto B41f6cc;
case 0x41f6cd:c.instructions+=2;goto B41f6cd;
case 0x41f6cf:c.instructions+=1;goto B41f6cf;
case 0x41f6d1:goto L41f6d1;
case 0x41f6d3:c.instructions+=3;goto B41f6d3;
case 0x41f6d5:c.instructions+=2;goto B41f6d5;
case 0x41f6d7:c.instructions+=1;goto B41f6d7;
case 0x41f6d9:goto L41f6d9;
case 0x41f6dd:c.instructions+=8;goto B41f6dd;
case 0x41f6e1:c.instructions+=7;goto B41f6e1;
case 0x41f6e3:c.instructions+=6;goto B41f6e3;
case 0x41f6e5:c.instructions+=5;goto B41f6e5;
case 0x41f6e8:c.instructions+=4;goto B41f6e8;
case 0x41f6e9:c.instructions+=3;goto B41f6e9;
case 0x41f6ea:c.instructions+=2;goto B41f6ea;
case 0x41f6ec:c.instructions+=1;goto B41f6ec;
case 0x41f6f1:goto L41f6f1;
case 0x41f6f3:goto L41f6f3;
case 0x41f6f7:c.instructions+=3;goto B41f6f7;
case 0x41f6fb:c.instructions+=2;goto B41f6fb;
case 0x41f6ff:c.instructions+=1;goto B41f6ff;
case 0x41f704:goto L41f704;
case 0x41f706:c.instructions+=9;goto B41f706;
case 0x41f70a:c.instructions+=8;goto B41f70a;
case 0x41f710:c.instructions+=7;goto B41f710;
case 0x41f713:c.instructions+=6;goto B41f713;
case 0x41f716:c.instructions+=5;goto B41f716;
case 0x41f71a:c.instructions+=4;goto B41f71a;
case 0x41f71e:c.instructions+=3;goto B41f71e;
case 0x41f722:c.instructions+=2;goto B41f722;
case 0x41f725:c.instructions+=1;goto B41f725;
case 0x41f727:goto L41f727;
case 0x41f72b:c.instructions+=1;goto B41f72b;
case 0x41f72d:goto L41f72d;
case 0x41f730:c.instructions+=2;goto B41f730;
case 0x41f732:c.instructions+=1;goto B41f732;
case 0x41f734:goto L41f734;
case 0x41f73b:c.instructions+=1;goto B41f73b;
case 0x41f73d:goto L41f73d;
case 0x41f73f:goto L41f73f;
case 0x41f742:c.instructions+=4;goto B41f742;
case 0x41f745:c.instructions+=3;goto B41f745;
case 0x41f74c:c.instructions+=2;goto B41f74c;
case 0x41f74e:c.instructions+=1;goto B41f74e;
case 0x41f750:goto L41f750;
case 0x41f754:c.instructions+=6;goto B41f754;
case 0x41f756:c.instructions+=5;goto B41f756;
case 0x41f758:c.instructions+=4;goto B41f758;
case 0x41f759:c.instructions+=3;goto B41f759;
case 0x41f75a:c.instructions+=2;goto B41f75a;
case 0x41f75c:c.instructions+=1;goto B41f75c;
case 0x41f75f:goto L41f75f;
case 0x41f762:c.instructions+=2;goto B41f762;
case 0x41f765:c.instructions+=1;goto B41f765;
case 0x41f767:goto L41f767;
case 0x41f76a:c.instructions+=5;goto B41f76a;
case 0x41f76e:c.instructions+=4;goto B41f76e;
case 0x41f772:c.instructions+=3;goto B41f772;
case 0x41f778:c.instructions+=2;goto B41f778;
case 0x41f77c:c.instructions+=1;goto B41f77c;
case 0x41f77e:goto L41f77e;
case 0x41f782:c.instructions+=2;goto B41f782;
case 0x41f786:c.instructions+=1;goto B41f786;
case 0x41f788:goto L41f788;
case 0x41f78b:c.instructions+=2;goto B41f78b;
case 0x41f78d:c.instructions+=1;goto B41f78d;
case 0x41f78f:goto L41f78f;
case 0x41f796:c.instructions+=4;goto B41f796;
case 0x41f799:c.instructions+=3;goto B41f799;
case 0x41f79c:c.instructions+=2;goto B41f79c;
case 0x41f7a3:c.instructions+=1;goto B41f7a3;
case 0x41f7a5:goto L41f7a5;
case 0x41f7a8:c.instructions+=4;goto B41f7a8;
case 0x41f7aa:c.instructions+=3;goto B41f7aa;
case 0x41f7ad:c.instructions+=2;goto B41f7ad;
case 0x41f7b4:c.instructions+=1;goto B41f7b4;
case 0x41f7b6:goto L41f7b6;
case 0x41f7b8:goto L41f7b8;
case 0x41f7ba:c.instructions+=3;goto B41f7ba;
case 0x41f7bb:c.instructions+=2;goto B41f7bb;
case 0x41f7bd:c.instructions+=1;goto B41f7bd;
case 0x41f7c0:goto L41f7c0;
case 0x41f7c4:c.instructions+=3;goto B41f7c4;
case 0x41f7c6:c.instructions+=2;goto B41f7c6;
case 0x41f7c9:c.instructions+=1;goto B41f7c9;
case 0x41f7cf:goto L41f7cf;
case 0x41f7d5:c.instructions+=7;goto B41f7d5;
case 0x41f7d9:c.instructions+=6;goto B41f7d9;
case 0x41f7dd:c.instructions+=5;goto B41f7dd;
case 0x41f7e0:c.instructions+=4;goto B41f7e0;
case 0x41f7e3:c.instructions+=3;goto B41f7e3;
case 0x41f7e6:c.instructions+=2;goto B41f7e6;
case 0x41f7e9:c.instructions+=1;goto B41f7e9;
case 0x41f7eb:goto L41f7eb;
case 0x41f7ef:c.instructions+=3;goto B41f7ef;
case 0x41f7f2:c.instructions+=2;goto B41f7f2;
case 0x41f7f4:c.instructions+=1;goto B41f7f4;
case 0x41f7f6:goto L41f7f6;
case 0x41f7fa:c.instructions+=6;goto B41f7fa;
case 0x41f7fe:c.instructions+=5;goto B41f7fe;
case 0x41f801:c.instructions+=4;goto B41f801;
case 0x41f804:c.instructions+=3;goto B41f804;
case 0x41f808:c.instructions+=2;goto B41f808;
case 0x41f80c:c.instructions+=1;goto B41f80c;
case 0x41f80f:goto L41f80f;
case 0x41f812:c.instructions+=1;goto B41f812;
case 0x41f814:goto L41f814;
case 0x41f816:c.instructions+=3;goto B41f816;
case 0x41f818:c.instructions+=2;goto B41f818;
case 0x41f81a:c.instructions+=1;goto B41f81a;
case 0x41f81c:goto L41f81c;
case 0x41f822:c.instructions+=2;goto B41f822;
case 0x41f825:c.instructions+=1;goto B41f825;
case 0x41f82b:goto L41f82b;
case 0x41f82e:c.instructions+=26;goto B41f82e;
case 0x41f832:c.instructions+=25;goto B41f832;
case 0x41f835:c.instructions+=24;goto B41f835;
case 0x41f838:c.instructions+=23;goto B41f838;
case 0x41f83f:c.instructions+=22;goto B41f83f;
case 0x41f845:c.instructions+=21;goto B41f845;
case 0x41f849:c.instructions+=20;goto B41f849;
case 0x41f84c:c.instructions+=19;goto B41f84c;
case 0x41f853:c.instructions+=18;goto B41f853;
case 0x41f859:c.instructions+=17;goto B41f859;
case 0x41f85c:c.instructions+=16;goto B41f85c;
case 0x41f863:c.instructions+=15;goto B41f863;
case 0x41f869:c.instructions+=14;goto B41f869;
case 0x41f86d:c.instructions+=13;goto B41f86d;
case 0x41f870:c.instructions+=12;goto B41f870;
case 0x41f877:c.instructions+=11;goto B41f877;
case 0x41f87b:c.instructions+=10;goto B41f87b;
case 0x41f87f:c.instructions+=9;goto B41f87f;
case 0x41f886:c.instructions+=8;goto B41f886;
case 0x41f88c:c.instructions+=7;goto B41f88c;
case 0x41f88f:c.instructions+=6;goto B41f88f;
case 0x41f896:c.instructions+=5;goto B41f896;
case 0x41f89c:c.instructions+=4;goto B41f89c;
case 0x41f89f:c.instructions+=3;goto B41f89f;
case 0x41f8a6:c.instructions+=2;goto B41f8a6;
case 0x41f8ab:c.instructions+=1;goto B41f8ab;
case 0x41f8b2:goto L41f8b2;
case 0x41f8b4:goto L41f8b4;
case 0x41f8ba:c.instructions+=6;goto B41f8ba;
case 0x41f8bb:c.instructions+=5;goto B41f8bb;
case 0x41f8bc:c.instructions+=4;goto B41f8bc;
case 0x41f8bd:c.instructions+=3;goto B41f8bd;
case 0x41f8bf:c.instructions+=2;goto B41f8bf;
case 0x41f8c0:c.instructions+=1;goto B41f8c0;
case 0x41f8c3:goto L41f8c3;
case 0x41f8c6:c.instructions+=4;goto B41f8c6;
case 0x41f8c8:c.instructions+=3;goto B41f8c8;
case 0x41f8c9:c.instructions+=2;goto B41f8c9;
case 0x41f8cb:c.instructions+=1;goto B41f8cb;
case 0x41f8d0:goto L41f8d0;
case 0x41f8d1:c.instructions+=5;goto B41f8d1;
case 0x41f8d2:c.instructions+=4;goto B41f8d2;
case 0x41f8d3:c.instructions+=3;goto B41f8d3;
case 0x41f8d5:c.instructions+=2;goto B41f8d5;
case 0x41f8d6:c.instructions+=1;goto B41f8d6;
case 0x41f8e0:goto L41f8e0;
case 0x41f8e1:c.instructions+=13;goto B41f8e1;
case 0x41f8e3:c.instructions+=12;goto B41f8e3;
case 0x41f8e6:c.instructions+=11;goto B41f8e6;
case 0x41f8e9:c.instructions+=10;goto B41f8e9;
case 0x41f8ec:c.instructions+=9;goto B41f8ec;
case 0x41f8ed:c.instructions+=8;goto B41f8ed;
case 0x41f8f3:c.instructions+=7;goto B41f8f3;
case 0x41f8f4:c.instructions+=6;goto B41f8f4;
case 0x41f8f6:c.instructions+=5;goto B41f8f6;
case 0x41f8f7:c.instructions+=4;goto B41f8f7;
case 0x41f8fb:c.instructions+=3;goto B41f8fb;
case 0x41f8fd:c.instructions+=2;goto B41f8fd;
case 0x41f900:c.instructions+=1;goto B41f900;
case 0x41f902:goto L41f902;
case 0x41f904:c.instructions+=2;goto B41f904;
case 0x41f908:c.instructions+=1;goto B41f908;
case 0x41f90a:goto L41f90a;
case 0x41f90f:c.instructions+=1;goto B41f90f;
case 0x41f913:goto L41f913;
case 0x41f916:c.instructions+=9;goto B41f916;
case 0x41f919:c.instructions+=8;goto B41f919;
case 0x41f920:c.instructions+=7;goto B41f920;
case 0x41f928:c.instructions+=6;goto B41f928;
case 0x41f92b:c.instructions+=5;goto B41f92b;
case 0x41f931:c.instructions+=4;goto B41f931;
case 0x41f933:c.instructions+=3;goto B41f933;
case 0x41f938:c.instructions+=2;goto B41f938;
case 0x41f93a:c.instructions+=1;goto B41f93a;
case 0x41f93c:goto L41f93c;
case 0x41f93d:c.instructions+=2;goto B41f93d;
case 0x41f941:c.instructions+=1;goto B41f941;
case 0x41f943:goto L41f943;
case 0x41f947:goto L41f947;
case 0x41f94a:c.instructions+=9;goto B41f94a;
case 0x41f94d:c.instructions+=8;goto B41f94d;
case 0x41f94f:c.instructions+=7;goto B41f94f;
case 0x41f951:c.instructions+=6;goto B41f951;
case 0x41f954:c.instructions+=5;goto B41f954;
case 0x41f958:c.instructions+=4;goto B41f958;
case 0x41f959:c.instructions+=3;goto B41f959;
case 0x41f95b:c.instructions+=2;goto B41f95b;
case 0x41f95d:c.instructions+=1;goto B41f95d;
case 0x41f95f:goto L41f95f;
case 0x41f961:goto L41f961;
case 0x41f963:c.instructions+=1;goto B41f963;
case 0x41f969:goto L41f969;
case 0x41f96c:c.instructions+=15;goto B41f96c;
case 0x41f970:c.instructions+=14;goto B41f970;
case 0x41f972:c.instructions+=13;goto B41f972;
case 0x41f976:c.instructions+=12;goto B41f976;
case 0x41f978:c.instructions+=11;goto B41f978;
case 0x41f97a:c.instructions+=10;goto B41f97a;
case 0x41f97e:c.instructions+=9;goto B41f97e;
case 0x41f981:c.instructions+=8;goto B41f981;
case 0x41f987:c.instructions+=7;goto B41f987;
case 0x41f989:c.instructions+=6;goto B41f989;
case 0x41f98d:c.instructions+=5;goto B41f98d;
case 0x41f98f:c.instructions+=4;goto B41f98f;
case 0x41f992:c.instructions+=3;goto B41f992;
case 0x41f996:c.instructions+=2;goto B41f996;
case 0x41f998:c.instructions+=1;goto B41f998;
case 0x41f99e:goto L41f99e;
case 0x41f9a1:c.instructions+=1;goto B41f9a1;
case 0x41f9a3:goto L41f9a3;
case 0x41f9a7:c.instructions+=1;goto B41f9a7;
case 0x41f9a9:goto L41f9a9;
case 0x41f9ac:c.instructions+=7;goto B41f9ac;
case 0x41f9af:c.instructions+=6;goto B41f9af;
case 0x41f9b2:c.instructions+=5;goto B41f9b2;
case 0x41f9b6:c.instructions+=4;goto B41f9b6;
case 0x41f9b7:c.instructions+=3;goto B41f9b7;
case 0x41f9b9:c.instructions+=2;goto B41f9b9;
case 0x41f9bc:c.instructions+=1;goto B41f9bc;
case 0x41f9be:goto L41f9be;
case 0x41f9c1:c.instructions+=6;goto B41f9c1;
case 0x41f9c5:c.instructions+=5;goto B41f9c5;
case 0x41f9c9:c.instructions+=4;goto B41f9c9;
case 0x41f9cd:c.instructions+=3;goto B41f9cd;
case 0x41f9cf:c.instructions+=2;goto B41f9cf;
case 0x41f9d2:c.instructions+=1;goto B41f9d2;
case 0x41f9d4:goto L41f9d4;
case 0x41f9d8:c.instructions+=2;goto B41f9d8;
case 0x41f9dc:c.instructions+=1;goto B41f9dc;
case 0x41f9e0:goto L41f9e0;
case 0x41f9e4:c.instructions+=2;goto B41f9e4;
case 0x41f9e8:c.instructions+=1;goto B41f9e8;
case 0x41f9ea:goto L41f9ea;
case 0x41f9ee:c.instructions+=10;goto B41f9ee;
case 0x41f9ef:c.instructions+=9;goto B41f9ef;
case 0x41f9f2:c.instructions+=8;goto B41f9f2;
case 0x41f9f6:c.instructions+=7;goto B41f9f6;
case 0x41f9f8:c.instructions+=6;goto B41f9f8;
case 0x41f9fb:c.instructions+=5;goto B41f9fb;
case 0x41f9ff:c.instructions+=4;goto B41f9ff;
case 0x41fa03:c.instructions+=3;goto B41fa03;
case 0x41fa05:c.instructions+=2;goto B41fa05;
case 0x41fa08:c.instructions+=1;goto B41fa08;
case 0x41fa0a:goto L41fa0a;
case 0x41fa0e:goto L41fa0e;
case 0x41fa11:c.instructions+=4;goto B41fa11;
case 0x41fa13:c.instructions+=3;goto B41fa13;
case 0x41fa17:c.instructions+=2;goto B41fa17;
case 0x41fa1b:c.instructions+=1;goto B41fa1b;
case 0x41fa1d:goto L41fa1d;
case 0x41fa21:goto L41fa21;
case 0x41fa25:c.instructions+=4;goto B41fa25;
case 0x41fa29:c.instructions+=3;goto B41fa29;
case 0x41fa2a:c.instructions+=2;goto B41fa2a;
case 0x41fa2c:c.instructions+=1;goto B41fa2c;
case 0x41fa32:goto L41fa32;
case 0x41fa36:c.instructions+=1;goto B41fa36;
case 0x41fa3b:goto L41fa3b;
case 0x41fa3e:c.instructions+=1;goto B41fa3e;
case 0x41fa40:goto L41fa40;
case 0x41fa42:c.instructions+=1;goto B41fa42;
case 0x41fa44:goto L41fa44;
case 0x41fa47:c.instructions+=7;goto B41fa47;
case 0x41fa4a:c.instructions+=6;goto B41fa4a;
case 0x41fa4d:c.instructions+=5;goto B41fa4d;
case 0x41fa51:c.instructions+=4;goto B41fa51;
case 0x41fa52:c.instructions+=3;goto B41fa52;
case 0x41fa54:c.instructions+=2;goto B41fa54;
case 0x41fa57:c.instructions+=1;goto B41fa57;
case 0x41fa59:goto L41fa59;
case 0x41fa5c:c.instructions+=6;goto B41fa5c;
case 0x41fa5e:c.instructions+=5;goto B41fa5e;
case 0x41fa62:c.instructions+=4;goto B41fa62;
case 0x41fa66:c.instructions+=3;goto B41fa66;
case 0x41fa68:c.instructions+=2;goto B41fa68;
case 0x41fa6b:c.instructions+=1;goto B41fa6b;
case 0x41fa6d:goto L41fa6d;
case 0x41fa71:c.instructions+=1;goto B41fa71;
case 0x41fa75:goto L41fa75;
case 0x41fa77:c.instructions+=1;goto B41fa77;
case 0x41fa79:goto L41fa79;
case 0x41fa7c:c.instructions+=8;goto B41fa7c;
case 0x41fa7f:c.instructions+=7;goto B41fa7f;
case 0x41fa82:c.instructions+=6;goto B41fa82;
case 0x41fa86:c.instructions+=5;goto B41fa86;
case 0x41fa8a:c.instructions+=4;goto B41fa8a;
case 0x41fa8b:c.instructions+=3;goto B41fa8b;
case 0x41fa8d:c.instructions+=2;goto B41fa8d;
case 0x41fa90:c.instructions+=1;goto B41fa90;
case 0x41fa92:goto L41fa92;
case 0x41fa96:goto L41fa96;
case 0x41fa97:c.instructions+=2;goto B41fa97;
case 0x41fa99:c.instructions+=1;goto B41fa99;
case 0x41fa9b:goto L41fa9b;
case 0x41fa9d:goto L41fa9d;
case 0x41faa1:c.instructions+=3;goto B41faa1;
case 0x41faa2:c.instructions+=2;goto B41faa2;
case 0x41faa4:c.instructions+=1;goto B41faa4;
case 0x41faa6:goto L41faa6;
case 0x41faa8:goto L41faa8;
case 0x41faac:goto L41faac;
case 0x41fab0:goto L41fab0;
case 0x41fab2:c.instructions+=7;goto B41fab2;
case 0x41fab4:c.instructions+=6;goto B41fab4;
case 0x41fab7:c.instructions+=5;goto B41fab7;
case 0x41fabb:c.instructions+=4;goto B41fabb;
case 0x41fabc:c.instructions+=3;goto B41fabc;
case 0x41fabe:c.instructions+=2;goto B41fabe;
case 0x41fac0:c.instructions+=1;goto B41fac0;
case 0x41fac2:goto L41fac2;
case 0x41fac6:goto L41fac6;
case 0x41faca:c.instructions+=8;goto B41faca;
case 0x41facc:c.instructions+=7;goto B41facc;
case 0x41face:c.instructions+=6;goto B41face;
case 0x41fad1:c.instructions+=5;goto B41fad1;
case 0x41fad5:c.instructions+=4;goto B41fad5;
case 0x41fad6:c.instructions+=3;goto B41fad6;
case 0x41fad8:c.instructions+=2;goto B41fad8;
case 0x41fada:c.instructions+=1;goto B41fada;
case 0x41fadc:goto L41fadc;
case 0x41fae0:goto L41fae0;
case 0x41fae2:c.instructions+=7;goto B41fae2;
case 0x41fae4:c.instructions+=6;goto B41fae4;
case 0x41fae7:c.instructions+=5;goto B41fae7;
case 0x41faeb:c.instructions+=4;goto B41faeb;
case 0x41faec:c.instructions+=3;goto B41faec;
case 0x41faee:c.instructions+=2;goto B41faee;
case 0x41faf0:c.instructions+=1;goto B41faf0;
case 0x41faf2:goto L41faf2;
case 0x41faf6:goto L41faf6;
case 0x41fafa:c.instructions+=7;goto B41fafa;
case 0x41fafc:c.instructions+=6;goto B41fafc;
case 0x41fafe:c.instructions+=5;goto B41fafe;
case 0x41fb01:c.instructions+=4;goto B41fb01;
case 0x41fb02:c.instructions+=3;goto B41fb02;
case 0x41fb04:c.instructions+=2;goto B41fb04;
case 0x41fb06:c.instructions+=1;goto B41fb06;
case 0x41fb08:goto L41fb08;
case 0x41fb0a:goto L41fb0a;
case 0x41fb0d:c.instructions+=2;goto B41fb0d;
case 0x41fb10:c.instructions+=1;goto B41fb10;
case 0x41fb16:goto L41fb16;
case 0x41fb1b:c.instructions+=5;goto B41fb1b;
case 0x41fb1c:c.instructions+=4;goto B41fb1c;
case 0x41fb1e:c.instructions+=3;goto B41fb1e;
case 0x41fb22:c.instructions+=2;goto B41fb22;
case 0x41fb23:c.instructions+=1;goto B41fb23;
case 0x41fb28:goto L41fb28;
case 0x41fb2d:c.instructions+=5;goto B41fb2d;
case 0x41fb2f:c.instructions+=4;goto B41fb2f;
case 0x41fb31:c.instructions+=3;goto B41fb31;
case 0x41fb35:c.instructions+=2;goto B41fb35;
case 0x41fb36:c.instructions+=1;goto B41fb36;
case 0x41fb3b:goto L41fb3b;
case 0x41fb3e:c.instructions+=3;goto B41fb3e;
case 0x41fb41:c.instructions+=2;goto B41fb41;
case 0x41fb44:c.instructions+=1;goto B41fb44;
case 0x41fb49:goto L41fb49;
case 0x41fb4f:c.instructions+=6;goto B41fb4f;
case 0x41fb53:c.instructions+=5;goto B41fb53;
case 0x41fb55:c.instructions+=4;goto B41fb55;
case 0x41fb57:c.instructions+=3;goto B41fb57;
case 0x41fb59:c.instructions+=2;goto B41fb59;
case 0x41fb5b:c.instructions+=1;goto B41fb5b;
case 0x41fb61:goto L41fb61;
case 0x41fb64:c.instructions+=2;goto B41fb64;
case 0x41fb68:c.instructions+=1;goto B41fb68;
case 0x41fb6b:goto L41fb6b;
case 0x41fb71:c.instructions+=4;goto B41fb71;
case 0x41fb75:c.instructions+=3;goto B41fb75;
case 0x41fb77:c.instructions+=2;goto B41fb77;
case 0x41fb7a:c.instructions+=1;goto B41fb7a;
case 0x41fb80:goto L41fb80;
case 0x41fb84:c.instructions+=2;goto B41fb84;
case 0x41fb86:c.instructions+=1;goto B41fb86;
case 0x41fb8a:goto L41fb8a;
case 0x41fb8e:c.instructions+=8;goto B41fb8e;
case 0x41fb92:c.instructions+=7;goto B41fb92;
case 0x41fb94:c.instructions+=6;goto B41fb94;
case 0x41fb95:c.instructions+=5;goto B41fb95;
case 0x41fb96:c.instructions+=4;goto B41fb96;
case 0x41fb9a:c.instructions+=3;goto B41fb9a;
case 0x41fb9b:c.instructions+=2;goto B41fb9b;
case 0x41fb9d:c.instructions+=1;goto B41fb9d;
case 0x41fba2:goto L41fba2;
case 0x41fba6:c.instructions+=14;goto B41fba6;
case 0x41fbaa:c.instructions+=13;goto B41fbaa;
case 0x41fbae:c.instructions+=12;goto B41fbae;
case 0x41fbb2:c.instructions+=11;goto B41fbb2;
case 0x41fbb6:c.instructions+=10;goto B41fbb6;
case 0x41fbb9:c.instructions+=9;goto B41fbb9;
case 0x41fbbb:c.instructions+=8;goto B41fbbb;
case 0x41fbbc:c.instructions+=7;goto B41fbbc;
case 0x41fbbe:c.instructions+=6;goto B41fbbe;
case 0x41fbc2:c.instructions+=5;goto B41fbc2;
case 0x41fbc5:c.instructions+=4;goto B41fbc5;
case 0x41fbc6:c.instructions+=3;goto B41fbc6;
case 0x41fbca:c.instructions+=2;goto B41fbca;
case 0x41fbcb:c.instructions+=1;goto B41fbcb;
case 0x41fbd0:goto L41fbd0;
case 0x41fbd4:c.instructions+=10;goto B41fbd4;
case 0x41fbd8:c.instructions+=9;goto B41fbd8;
case 0x41fbdc:c.instructions+=8;goto B41fbdc;
case 0x41fbe0:c.instructions+=7;goto B41fbe0;
case 0x41fbe4:c.instructions+=6;goto B41fbe4;
case 0x41fbe8:c.instructions+=5;goto B41fbe8;
case 0x41fbec:c.instructions+=4;goto B41fbec;
case 0x41fbf0:c.instructions+=3;goto B41fbf0;
case 0x41fbf2:c.instructions+=2;goto B41fbf2;
case 0x41fbf6:c.instructions+=1;goto B41fbf6;
case 0x41fbfc:goto L41fbfc;
case 0x41fc02:c.instructions+=23;goto B41fc02;
case 0x41fc06:c.instructions+=22;goto B41fc06;
case 0x41fc0c:c.instructions+=21;goto B41fc0c;
case 0x41fc10:c.instructions+=20;goto B41fc10;
case 0x41fc16:c.instructions+=19;goto B41fc16;
case 0x41fc19:c.instructions+=18;goto B41fc19;
case 0x41fc1f:c.instructions+=17;goto B41fc1f;
case 0x41fc23:c.instructions+=16;goto B41fc23;
case 0x41fc29:c.instructions+=15;goto B41fc29;
case 0x41fc2d:c.instructions+=14;goto B41fc2d;
case 0x41fc33:c.instructions+=13;goto B41fc33;
case 0x41fc37:c.instructions+=12;goto B41fc37;
case 0x41fc3a:c.instructions+=11;goto B41fc3a;
case 0x41fc40:c.instructions+=10;goto B41fc40;
case 0x41fc46:c.instructions+=9;goto B41fc46;
case 0x41fc4d:c.instructions+=8;goto B41fc4d;
case 0x41fc51:c.instructions+=7;goto B41fc51;
case 0x41fc58:c.instructions+=6;goto B41fc58;
case 0x41fc59:c.instructions+=5;goto B41fc59;
case 0x41fc5a:c.instructions+=4;goto B41fc5a;
case 0x41fc5b:c.instructions+=3;goto B41fc5b;
case 0x41fc5d:c.instructions+=2;goto B41fc5d;
case 0x41fc5e:c.instructions+=1;goto B41fc5e;
case 0x41fc61:goto L41fc61;
case 0x41fc63:c.instructions+=3;goto B41fc63;
case 0x41fc66:c.instructions+=2;goto B41fc66;
case 0x41fc6a:c.instructions+=1;goto B41fc6a;
case 0x41fc6d:goto L41fc6d;
case 0x41fc73:c.instructions+=4;goto B41fc73;
case 0x41fc77:c.instructions+=3;goto B41fc77;
case 0x41fc79:c.instructions+=2;goto B41fc79;
case 0x41fc7c:c.instructions+=1;goto B41fc7c;
case 0x41fc82:goto L41fc82;
case 0x41fc86:c.instructions+=1;goto B41fc86;
case 0x41fc8b:goto L41fc8b;
case 0x41fc91:c.instructions+=25;goto B41fc91;
case 0x41fc95:c.instructions+=24;goto B41fc95;
case 0x41fc9b:c.instructions+=23;goto B41fc9b;
case 0x41fc9f:c.instructions+=22;goto B41fc9f;
case 0x41fca5:c.instructions+=21;goto B41fca5;
case 0x41fca9:c.instructions+=20;goto B41fca9;
case 0x41fcaf:c.instructions+=19;goto B41fcaf;
case 0x41fcb3:c.instructions+=18;goto B41fcb3;
case 0x41fcb9:c.instructions+=17;goto B41fcb9;
case 0x41fcbc:c.instructions+=16;goto B41fcbc;
case 0x41fcc2:c.instructions+=15;goto B41fcc2;
case 0x41fcc8:c.instructions+=14;goto B41fcc8;
case 0x41fccc:c.instructions+=13;goto B41fccc;
case 0x41fccf:c.instructions+=12;goto B41fccf;
case 0x41fcd2:c.instructions+=11;goto B41fcd2;
case 0x41fcd8:c.instructions+=10;goto B41fcd8;
case 0x41fcdb:c.instructions+=9;goto B41fcdb;
case 0x41fcdf:c.instructions+=8;goto B41fcdf;
case 0x41fce2:c.instructions+=7;goto B41fce2;
case 0x41fce9:c.instructions+=6;goto B41fce9;
case 0x41fcea:c.instructions+=5;goto B41fcea;
case 0x41fceb:c.instructions+=4;goto B41fceb;
case 0x41fcec:c.instructions+=3;goto B41fcec;
case 0x41fcee:c.instructions+=2;goto B41fcee;
case 0x41fcef:c.instructions+=1;goto B41fcef;
case 0x41fcf2:goto L41fcf2;
case 0x41fcf5:c.instructions+=1;goto B41fcf5;
case 0x41fcf7:goto L41fcf7;
case 0x41fcfc:c.instructions+=5;goto B41fcfc;
case 0x41fcfe:c.instructions+=4;goto B41fcfe;
case 0x41fd00:c.instructions+=3;goto B41fd00;
case 0x41fd04:c.instructions+=2;goto B41fd04;
case 0x41fd05:c.instructions+=1;goto B41fd05;
case 0x41fd0a:goto L41fd0a;
case 0x41fd0e:c.instructions+=1;goto B41fd0e;
case 0x41fd10:goto L41fd10;
case 0x41fd13:c.instructions+=7;goto B41fd13;
case 0x41fd14:c.instructions+=6;goto B41fd14;
case 0x41fd18:c.instructions+=5;goto B41fd18;
case 0x41fd1a:c.instructions+=4;goto B41fd1a;
case 0x41fd1b:c.instructions+=3;goto B41fd1b;
case 0x41fd1f:c.instructions+=2;goto B41fd1f;
case 0x41fd20:c.instructions+=1;goto B41fd20;
case 0x41fd25:goto L41fd25;
case 0x41fd29:c.instructions+=6;goto B41fd29;
case 0x41fd2d:c.instructions+=5;goto B41fd2d;
case 0x41fd2e:c.instructions+=4;goto B41fd2e;
case 0x41fd31:c.instructions+=3;goto B41fd31;
case 0x41fd35:c.instructions+=2;goto B41fd35;
case 0x41fd39:c.instructions+=1;goto B41fd39;
case 0x41fd3b:goto L41fd3b;
case 0x41fd3c:c.instructions+=5;goto B41fd3c;
case 0x41fd3d:c.instructions+=4;goto B41fd3d;
case 0x41fd3e:c.instructions+=3;goto B41fd3e;
case 0x41fd40:c.instructions+=2;goto B41fd40;
case 0x41fd41:c.instructions+=1;goto B41fd41;
case 0x41fd44:goto L41fd44;
case 0x41fd46:goto L41fd46;
case 0x41fd47:c.instructions+=5;goto B41fd47;
case 0x41fd48:c.instructions+=4;goto B41fd48;
case 0x41fd49:c.instructions+=3;goto B41fd49;
case 0x41fd4b:c.instructions+=2;goto B41fd4b;
case 0x41fd4c:c.instructions+=1;goto B41fd4c;
case 0x41fd50:goto L41fd50;
case 0x41fd53:c.instructions+=5;goto B41fd53;
case 0x41fd54:c.instructions+=4;goto B41fd54;
case 0x41fd56:c.instructions+=3;goto B41fd56;
case 0x41fd59:c.instructions+=2;goto B41fd59;
case 0x41fd5b:c.instructions+=1;goto B41fd5b;
case 0x41fd61:goto L41fd61;
case 0x41fd62:c.instructions+=6;goto B41fd62;
case 0x41fd63:c.instructions+=5;goto B41fd63;
case 0x41fd67:c.instructions+=4;goto B41fd67;
case 0x41fd6a:c.instructions+=3;goto B41fd6a;
case 0x41fd6b:c.instructions+=2;goto B41fd6b;
case 0x41fd6e:c.instructions+=1;goto B41fd6e;
case 0x41fd73:goto L41fd73;
case 0x41fd75:c.instructions+=1;goto B41fd75;
case 0x41fd7a:goto L41fd7a;
case 0x41fd7c:c.instructions+=7;goto B41fd7c;
case 0x41fd7e:c.instructions+=6;goto B41fd7e;
case 0x41fd80:c.instructions+=5;goto B41fd80;
case 0x41fd82:c.instructions+=4;goto B41fd82;
case 0x41fd84:c.instructions+=3;goto B41fd84;
case 0x41fd85:c.instructions+=2;goto B41fd85;
case 0x41fd87:c.instructions+=1;goto B41fd87;
case 0x41fd8c:goto L41fd8c;
case 0x41fd8f:c.instructions+=1;goto B41fd8f;
case 0x41fd91:goto L41fd91;
case 0x41fd96:c.instructions+=4;goto B41fd96;
case 0x41fd97:c.instructions+=3;goto B41fd97;
case 0x41fd99:c.instructions+=2;goto B41fd99;
case 0x41fd9b:c.instructions+=1;goto B41fd9b;
case 0x41fda0:goto L41fda0;
case 0x41fda4:c.instructions+=1;goto B41fda4;
case 0x41fda6:goto L41fda6;
case 0x41fda9:c.instructions+=2;goto B41fda9;
case 0x41fdab:c.instructions+=1;goto B41fdab;
case 0x41fdad:goto L41fdad;
case 0x41fdaf:c.instructions+=7;goto B41fdaf;
case 0x41fdb3:c.instructions+=6;goto B41fdb3;
case 0x41fdb4:c.instructions+=5;goto B41fdb4;
case 0x41fdb8:c.instructions+=4;goto B41fdb8;
case 0x41fdb9:c.instructions+=3;goto B41fdb9;
case 0x41fdba:c.instructions+=2;goto B41fdba;
case 0x41fdbc:c.instructions+=1;goto B41fdbc;
case 0x41fdc1:goto L41fdc1;
case 0x41fdc6:goto L41fdc6;
case 0x41fdce:goto L41fdce;
case 0x41fdd1:c.instructions+=5;goto B41fdd1;
case 0x41fdd5:c.instructions+=4;goto B41fdd5;
case 0x41fdd7:c.instructions+=3;goto B41fdd7;
case 0x41fdd9:c.instructions+=2;goto B41fdd9;
case 0x41fddb:c.instructions+=1;goto B41fddb;
case 0x41fdde:goto L41fdde;
case 0x41fde2:c.instructions+=4;goto B41fde2;
case 0x41fde4:c.instructions+=3;goto B41fde4;
case 0x41fde6:c.instructions+=2;goto B41fde6;
case 0x41fde8:c.instructions+=1;goto B41fde8;
case 0x41fdeb:goto L41fdeb;
case 0x41fdee:c.instructions+=5;goto B41fdee;
case 0x41fdf2:c.instructions+=4;goto B41fdf2;
case 0x41fdf5:c.instructions+=3;goto B41fdf5;
case 0x41fdfa:c.instructions+=2;goto B41fdfa;
case 0x41fdfd:c.instructions+=1;goto B41fdfd;
case 0x41fe05:goto L41fe05;
case 0x41fe07:c.instructions+=3;goto B41fe07;
case 0x41fe08:c.instructions+=2;goto B41fe08;
case 0x41fe0a:c.instructions+=1;goto B41fe0a;
case 0x41fe0d:goto L41fe0d;
case 0x41fe11:c.instructions+=4;goto B41fe11;
case 0x41fe13:c.instructions+=3;goto B41fe13;
case 0x41fe14:c.instructions+=2;goto B41fe14;
case 0x41fe16:c.instructions+=1;goto B41fe16;
case 0x41fe19:goto L41fe19;
case 0x41fe1b:c.instructions+=8;goto B41fe1b;
case 0x41fe1f:c.instructions+=7;goto B41fe1f;
case 0x41fe23:c.instructions+=6;goto B41fe23;
case 0x41fe26:c.instructions+=5;goto B41fe26;
case 0x41fe29:c.instructions+=4;goto B41fe29;
case 0x41fe2a:c.instructions+=3;goto B41fe2a;
case 0x41fe2b:c.instructions+=2;goto B41fe2b;
case 0x41fe2f:c.instructions+=1;goto B41fe2f;
case 0x41fe31:goto L41fe31;
case 0x41fe34:c.instructions+=2;goto B41fe34;
case 0x41fe37:c.instructions+=1;goto B41fe37;
case 0x41fe3d:goto L41fe3d;
case 0x41fe41:c.instructions+=4;goto B41fe41;
case 0x41fe42:c.instructions+=3;goto B41fe42;
case 0x41fe46:c.instructions+=2;goto B41fe46;
case 0x41fe4a:c.instructions+=1;goto B41fe4a;
case 0x41fe4c:goto L41fe4c;
case 0x41fe50:goto L41fe50;
case 0x41fe53:c.instructions+=12;goto B41fe53;
case 0x41fe56:c.instructions+=11;goto B41fe56;
case 0x41fe59:c.instructions+=10;goto B41fe59;
case 0x41fe5c:c.instructions+=9;goto B41fe5c;
case 0x41fe60:c.instructions+=8;goto B41fe60;
case 0x41fe65:c.instructions+=7;goto B41fe65;
case 0x41fe6b:c.instructions+=6;goto B41fe6b;
case 0x41fe6f:c.instructions+=5;goto B41fe6f;
case 0x41fe73:c.instructions+=4;goto B41fe73;
case 0x41fe79:c.instructions+=3;goto B41fe79;
case 0x41fe7b:c.instructions+=2;goto B41fe7b;
case 0x41fe7e:c.instructions+=1;goto B41fe7e;
case 0x41fe80:goto L41fe80;
case 0x41fe85:goto L41fe85;
case 0x41fe89:c.instructions+=4;goto B41fe89;
case 0x41fe8f:c.instructions+=3;goto B41fe8f;
case 0x41fe91:c.instructions+=2;goto B41fe91;
case 0x41fe94:c.instructions+=1;goto B41fe94;
case 0x41fe96:goto L41fe96;
case 0x41fe98:c.instructions+=1;goto B41fe98;
case 0x41fe9a:goto L41fe9a;
case 0x41fe9c:goto L41fe9c;
case 0x41fe9e:c.instructions+=3;goto B41fe9e;
case 0x41fea0:c.instructions+=2;goto B41fea0;
case 0x41fea2:c.instructions+=1;goto B41fea2;
case 0x41fea5:goto L41fea5;
case 0x41fea9:c.instructions+=4;goto B41fea9;
case 0x41feab:c.instructions+=3;goto B41feab;
case 0x41fead:c.instructions+=2;goto B41fead;
case 0x41feaf:c.instructions+=1;goto B41feaf;
case 0x41feb2:goto L41feb2;
case 0x41feb6:c.instructions+=10;goto B41feb6;
case 0x41feba:c.instructions+=9;goto B41feba;
case 0x41febe:c.instructions+=8;goto B41febe;
case 0x41fec2:c.instructions+=7;goto B41fec2;
case 0x41fec6:c.instructions+=6;goto B41fec6;
case 0x41feca:c.instructions+=5;goto B41feca;
case 0x41fece:c.instructions+=4;goto B41fece;
case 0x41fed4:c.instructions+=3;goto B41fed4;
case 0x41fed6:c.instructions+=2;goto B41fed6;
case 0x41fed9:c.instructions+=1;goto B41fed9;
case 0x41fedb:goto L41fedb;
case 0x41fedf:c.instructions+=4;goto B41fedf;
case 0x41fee5:c.instructions+=3;goto B41fee5;
case 0x41fee7:c.instructions+=2;goto B41fee7;
case 0x41feea:c.instructions+=1;goto B41feea;
case 0x41feec:goto L41feec;
case 0x41fef4:goto L41fef4;
case 0x41fef8:c.instructions+=4;goto B41fef8;
case 0x41fefe:c.instructions+=3;goto B41fefe;
case 0x41ff00:c.instructions+=2;goto B41ff00;
case 0x41ff03:c.instructions+=1;goto B41ff03;
case 0x41ff05:goto L41ff05;
case 0x41ff09:c.instructions+=4;goto B41ff09;
case 0x41ff0f:c.instructions+=3;goto B41ff0f;
case 0x41ff11:c.instructions+=2;goto B41ff11;
case 0x41ff14:c.instructions+=1;goto B41ff14;
case 0x41ff16:goto L41ff16;
case 0x41ff1e:goto L41ff1e;
case 0x41ff22:c.instructions+=2;goto B41ff22;
case 0x41ff24:c.instructions+=1;goto B41ff24;
case 0x41ff26:goto L41ff26;
case 0x41ff2c:c.instructions+=2;goto B41ff2c;
case 0x41ff30:c.instructions+=1;goto B41ff30;
case 0x41ff34:goto L41ff34;
case 0x41ff36:c.instructions+=1;goto B41ff36;
case 0x41ff38:goto L41ff38;
case 0x41ff3a:c.instructions+=2;goto B41ff3a;
case 0x41ff40:c.instructions+=1;goto B41ff40;
case 0x41ff44:goto L41ff44;
case 0x41ff47:c.instructions+=7;goto B41ff47;
case 0x41ff4a:c.instructions+=6;goto B41ff4a;
case 0x41ff4e:c.instructions+=5;goto B41ff4e;
case 0x41ff52:c.instructions+=4;goto B41ff52;
case 0x41ff54:c.instructions+=3;goto B41ff54;
case 0x41ff56:c.instructions+=2;goto B41ff56;
case 0x41ff59:c.instructions+=1;goto B41ff59;
case 0x41ff5b:goto L41ff5b;
case 0x41ff5d:c.instructions+=1;goto B41ff5d;
case 0x41ff61:goto L41ff61;
case 0x41ff64:c.instructions+=7;goto B41ff64;
case 0x41ff68:c.instructions+=6;goto B41ff68;
case 0x41ff6c:c.instructions+=5;goto B41ff6c;
case 0x41ff70:c.instructions+=4;goto B41ff70;
case 0x41ff72:c.instructions+=3;goto B41ff72;
case 0x41ff74:c.instructions+=2;goto B41ff74;
case 0x41ff77:c.instructions+=1;goto B41ff77;
case 0x41ff79:goto L41ff79;
case 0x41ff7b:c.instructions+=1;goto B41ff7b;
case 0x41ff7f:goto L41ff7f;
case 0x41ff83:c.instructions+=12;goto B41ff83;
case 0x41ff86:c.instructions+=11;goto B41ff86;
case 0x41ff88:c.instructions+=10;goto B41ff88;
case 0x41ff8b:c.instructions+=9;goto B41ff8b;
case 0x41ff8d:c.instructions+=8;goto B41ff8d;
case 0x41ff92:c.instructions+=7;goto B41ff92;
case 0x41ff95:c.instructions+=6;goto B41ff95;
case 0x41ff99:c.instructions+=5;goto B41ff99;
case 0x41ffa1:c.instructions+=4;goto B41ffa1;
case 0x41ffa3:c.instructions+=3;goto B41ffa3;
case 0x41ffa4:c.instructions+=2;goto B41ffa4;
case 0x41ffa6:c.instructions+=1;goto B41ffa6;
case 0x41ffa9:goto L41ffa9;
case 0x41ffad:c.instructions+=4;goto B41ffad;
case 0x41ffaf:c.instructions+=3;goto B41ffaf;
case 0x41ffb0:c.instructions+=2;goto B41ffb0;
case 0x41ffb2:c.instructions+=1;goto B41ffb2;
case 0x41ffb5:goto L41ffb5;
case 0x41ffb9:c.instructions+=8;goto B41ffb9;
case 0x41ffbc:c.instructions+=7;goto B41ffbc;
case 0x41ffbe:c.instructions+=6;goto B41ffbe;
case 0x41ffc2:c.instructions+=5;goto B41ffc2;
case 0x41ffc6:c.instructions+=4;goto B41ffc6;
case 0x41ffc8:c.instructions+=3;goto B41ffc8;
case 0x41ffca:c.instructions+=2;goto B41ffca;
case 0x41ffcd:c.instructions+=1;goto B41ffcd;
case 0x41ffcf:goto L41ffcf;
case 0x41ffd1:c.instructions+=1;goto B41ffd1;
case 0x41ffd5:goto L41ffd5;
case 0x41ffd9:c.instructions+=7;goto B41ffd9;
case 0x41ffdc:c.instructions+=6;goto B41ffdc;
case 0x41ffe0:c.instructions+=5;goto B41ffe0;
case 0x41ffe4:c.instructions+=4;goto B41ffe4;
case 0x41ffe6:c.instructions+=3;goto B41ffe6;
case 0x41ffe8:c.instructions+=2;goto B41ffe8;
case 0x41ffeb:c.instructions+=1;goto B41ffeb;
case 0x41ffed:goto L41ffed;
case 0x41ffef:c.instructions+=1;goto B41ffef;
case 0x41fff3:goto L41fff3;
case 0x41fff7:c.instructions+=3;goto B41fff7;
case 0x41fffa:c.instructions+=2;goto B41fffa;
case 0x41fffd:c.instructions+=1;goto B41fffd;
default:missing_instruction(c.pc);}
B41f000:L41f000:{c.instructions+=1;NFSU2_TR(0x41f000);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41f00b;}}
}
B41f002:L41f002:{c.instructions+=2;NFSU2_TR(0x41f002);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B41f009:{NFSU2_TR(0x41f009);
{goto L41f00d;}
}
B41f00b:L41f00b:{c.instructions+=1;NFSU2_TR(0x41f00b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B41f00d:L41f00d:{c.instructions+=6;NFSU2_TR(0x41f00d);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B41f010:{NFSU2_TR(0x41f010);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B41f013:{NFSU2_TR(0x41f013);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B41f01a:{NFSU2_TR(0x41f01a);
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
B41f01c:{NFSU2_TR(0x41f01c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f020:{NFSU2_TR(0x41f020);
if(r1(R+518)){{goto L41f076;}}
}
B41f022:L41f022:{c.instructions+=8;NFSU2_TR(0x41f022);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41f026:{NFSU2_TR(0x41f026);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41f028:{NFSU2_TR(0x41f028);
{u32 ea_=u32(r4(R+28)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41f02b:{NFSU2_TR(0x41f02b);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f02d:{NFSU2_TR(0x41f02d);
__builtin_memmove((R+4),(R+28),4);
}
B41f02f:{NFSU2_TR(0x41f02f);
{u32 ea_=u32(r4(R+28)+u32(84u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41f032:{NFSU2_TR(0x41f032);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41f036:{NFSU2_TR(0x41f036);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41f039ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41f039:L41f039:{c.instructions+=6;NFSU2_TR(0x41f039);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41f03c:{NFSU2_TR(0x41f03c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+12),(U+0),4);
}
B41f03e:{NFSU2_TR(0x41f03e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f042:{NFSU2_TR(0x41f042);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41f046:{NFSU2_TR(0x41f046);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f047:{NFSU2_TR(0x41f047);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41f04cull));
TAIL_STATIC(0x401c40u,401);
}
B41f04c:L41f04c:{c.instructions+=12;NFSU2_TR(0x41f04c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41f050:{NFSU2_TR(0x41f050);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41f054:{NFSU2_TR(0x41f054);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f055:{NFSU2_TR(0x41f055);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41f059:{NFSU2_TR(0x41f059);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41f05d:{NFSU2_TR(0x41f05d);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41f061:{NFSU2_TR(0x41f061);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41f064:{NFSU2_TR(0x41f064);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f065:{NFSU2_TR(0x41f065);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f066:{NFSU2_TR(0x41f066);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f067:{NFSU2_TR(0x41f067);
__builtin_memmove((R+4),(R+28),4);
}
B41f069:{NFSU2_TR(0x41f069);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41f06cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41f06c:L41f06c:{c.instructions+=3;NFSU2_TR(0x41f06c);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41f070:{NFSU2_TR(0x41f070);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B41f074:{NFSU2_TR(0x41f074);
{goto L41f084;}
}
B41f076:L41f076:{c.instructions+=2;NFSU2_TR(0x41f076);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41f07c:{NFSU2_TR(0x41f07c);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41f084:L41f084:{c.instructions+=9;NFSU2_TR(0x41f084);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41f088:{NFSU2_TR(0x41f088);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41f08c:{NFSU2_TR(0x41f08c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41f08f:{NFSU2_TR(0x41f08f);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f093:{NFSU2_TR(0x41f093);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41f095:{NFSU2_TR(0x41f095);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f097:{NFSU2_TR(0x41f097);
__builtin_memmove((R+4),(R+28),4);
}
B41f099:{NFSU2_TR(0x41f099);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f09d:{NFSU2_TR(0x41f09d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41f0a0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41f0a0:L41f0a0:{c.instructions+=4;NFSU2_TR(0x41f0a0);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41f0a4:{NFSU2_TR(0x41f0a4);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B41f0a8:{NFSU2_TR(0x41f0a8);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B41f0ac:{NFSU2_TR(0x41f0ac);
if(r1(R+518)){{goto L41f137;}}
}
B41f0b2:L41f0b2:{c.instructions+=3;NFSU2_TR(0x41f0b2);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B41f0b6:{NFSU2_TR(0x41f0b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B41f0ba:{NFSU2_TR(0x41f0ba);
if(r1(R+518)){{goto L41f137;}}
}
B41f0bc:L41f0bc:{c.instructions+=3;NFSU2_TR(0x41f0bc);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B41f0bf:{NFSU2_TR(0x41f0bf);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B41f0c1:{NFSU2_TR(0x41f0c1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41f0cc;}}
}
B41f0c3:L41f0c3:{c.instructions+=2;NFSU2_TR(0x41f0c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B41f0ca:{NFSU2_TR(0x41f0ca);
{goto L41f0ce;}
}
B41f0cc:L41f0cc:{c.instructions+=1;NFSU2_TR(0x41f0cc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B41f0ce:L41f0ce:{c.instructions+=6;NFSU2_TR(0x41f0ce);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B41f0d1:{NFSU2_TR(0x41f0d1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B41f0d4:{NFSU2_TR(0x41f0d4);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B41f0db:{NFSU2_TR(0x41f0db);
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
B41f0dd:{NFSU2_TR(0x41f0dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f0e1:{NFSU2_TR(0x41f0e1);
if(r1(R+518)){{goto L41f137;}}
}
B41f0e3:L41f0e3:{c.instructions+=8;NFSU2_TR(0x41f0e3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41f0e7:{NFSU2_TR(0x41f0e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41f0e9:{NFSU2_TR(0x41f0e9);
{u32 ea_=u32(r4(R+28)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41f0ec:{NFSU2_TR(0x41f0ec);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f0ee:{NFSU2_TR(0x41f0ee);
__builtin_memmove((R+4),(R+28),4);
}
B41f0f0:{NFSU2_TR(0x41f0f0);
{u32 ea_=u32(r4(R+28)+u32(84u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41f0f3:{NFSU2_TR(0x41f0f3);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41f0f7:{NFSU2_TR(0x41f0f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41f0faull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41f0fa:L41f0fa:{c.instructions+=6;NFSU2_TR(0x41f0fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41f0fd:{NFSU2_TR(0x41f0fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+12),(U+0),4);
}
B41f0ff:{NFSU2_TR(0x41f0ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f103:{NFSU2_TR(0x41f103);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41f107:{NFSU2_TR(0x41f107);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f108:{NFSU2_TR(0x41f108);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41f10dull));
TAIL_STATIC(0x401c40u,401);
}
B41f10d:L41f10d:{c.instructions+=12;NFSU2_TR(0x41f10d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41f111:{NFSU2_TR(0x41f111);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41f115:{NFSU2_TR(0x41f115);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f116:{NFSU2_TR(0x41f116);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41f11a:{NFSU2_TR(0x41f11a);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41f11e:{NFSU2_TR(0x41f11e);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41f122:{NFSU2_TR(0x41f122);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41f125:{NFSU2_TR(0x41f125);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f126:{NFSU2_TR(0x41f126);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f127:{NFSU2_TR(0x41f127);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f128:{NFSU2_TR(0x41f128);
__builtin_memmove((R+4),(R+28),4);
}
B41f12a:{NFSU2_TR(0x41f12a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41f12dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41f12d:L41f12d:{c.instructions+=3;NFSU2_TR(0x41f12d);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41f131:{NFSU2_TR(0x41f131);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B41f135:{NFSU2_TR(0x41f135);
{goto L41f145;}
}
B41f137:L41f137:{c.instructions+=2;NFSU2_TR(0x41f137);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41f13d:{NFSU2_TR(0x41f13d);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41f145:L41f145:{c.instructions+=7;NFSU2_TR(0x41f145);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41f149:{NFSU2_TR(0x41f149);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41f14d:{NFSU2_TR(0x41f14d);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41f151:{NFSU2_TR(0x41f151);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f152:{NFSU2_TR(0x41f152);
__builtin_memmove((R+4),(R+28),4);
}
B41f154:{NFSU2_TR(0x41f154);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f158:{NFSU2_TR(0x41f158);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41f15dull));
TAIL_STATIC(0x40ae30u,40a);
}
B41f15d:L41f15d:{c.instructions+=5;NFSU2_TR(0x41f15d);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41f161:{NFSU2_TR(0x41f161);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41f165:{NFSU2_TR(0x41f165);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f166:{NFSU2_TR(0x41f166);
__builtin_memmove((R+4),(R+28),4);
}
B41f168:{NFSU2_TR(0x41f168);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41f16dull));
TAIL_STATIC(0x40ae30u,40a);
}
B41f16d:L41f16d:{c.instructions+=5;NFSU2_TR(0x41f16d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41f171:{NFSU2_TR(0x41f171);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B41f175:{NFSU2_TR(0x41f175);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f176:{NFSU2_TR(0x41f176);
__builtin_memmove((R+4),(R+24),4);
}
B41f178:{NFSU2_TR(0x41f178);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41f17dull));
TAIL_STATIC(0x40ae30u,40a);
}
B41f17d:L41f17d:{c.instructions+=5;NFSU2_TR(0x41f17d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41f181:{NFSU2_TR(0x41f181);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41f185:{NFSU2_TR(0x41f185);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f186:{NFSU2_TR(0x41f186);
__builtin_memmove((R+4),(R+24),4);
}
B41f188:{NFSU2_TR(0x41f188);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41f18dull));
TAIL_STATIC(0x40ae30u,40a);
}
B41f18d:L41f18d:{c.instructions+=5;NFSU2_TR(0x41f18d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41f191:{NFSU2_TR(0x41f191);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B41f193:{NFSU2_TR(0x41f193);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41f195:{NFSU2_TR(0x41f195);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41f198:{NFSU2_TR(0x41f198);
if(r1(R+514)){{goto L41f1a6;}}
}
B41f19a:L41f19a:{c.instructions+=4;NFSU2_TR(0x41f19a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41f19e:{NFSU2_TR(0x41f19e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41f1a0:{NFSU2_TR(0x41f1a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f1a4:{NFSU2_TR(0x41f1a4);
{goto L41f1aa;}
}
B41f1a6:L41f1a6:{c.instructions+=1;NFSU2_TR(0x41f1a6);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41f1aa:L41f1aa:{c.instructions+=12;NFSU2_TR(0x41f1aa);
{u32 ea_=u32(u32(7879808u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41f1b0:{NFSU2_TR(0x41f1b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x47c34f80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41f1b8:{NFSU2_TR(0x41f1b8);
{u32 ea_=u32(u32(7879808u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41f1be:{NFSU2_TR(0x41f1be);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41f1c4:{NFSU2_TR(0x41f1c4);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B41f1c6:{NFSU2_TR(0x41f1c6);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B41f1ca:{NFSU2_TR(0x41f1ca);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41f1ce:{NFSU2_TR(0x41f1ce);
{u32 ea_=u32(u32(7881568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41f1d4:{NFSU2_TR(0x41f1d4);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41f1d8:{NFSU2_TR(0x41f1d8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41f1da:{NFSU2_TR(0x41f1da);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41f1dd:{NFSU2_TR(0x41f1dd);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L41f1e7;}}
}
B41f1df:L41f1df:{c.instructions+=2;NFSU2_TR(0x41f1df);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41f1e3:{NFSU2_TR(0x41f1e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f1e7:L41f1e7:{c.instructions+=4;NFSU2_TR(0x41f1e7);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41f1ee:{NFSU2_TR(0x41f1ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41f1f6:{NFSU2_TR(0x41f1f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f1fa:{NFSU2_TR(0x41f1fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41f202:L41f202:{c.instructions+=9;NFSU2_TR(0x41f202);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41f206:{NFSU2_TR(0x41f206);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41f208:{NFSU2_TR(0x41f208);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41f20c:{NFSU2_TR(0x41f20c);
__builtin_memmove((R+4),(R+24),4);
}
B41f20e:{NFSU2_TR(0x41f20e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41f210:{NFSU2_TR(0x41f210);
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
B41f213:{NFSU2_TR(0x41f213);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41f217:{NFSU2_TR(0x41f217);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f218:{NFSU2_TR(0x41f218);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41f21f;}}
}
B41f21a:L41f21a:{c.instructions+=1;NFSU2_TR(0x41f21a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41f21dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41f21d:L41f21d:{c.instructions+=1;NFSU2_TR(0x41f21d);
{goto L41f222;}
}
B41f21f:L41f21f:{c.instructions+=1;NFSU2_TR(0x41f21f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41f222ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41f222:L41f222:{c.instructions+=15;NFSU2_TR(0x41f222);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B41f224:{NFSU2_TR(0x41f224);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B41f226:{NFSU2_TR(0x41f226);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B41f228:{NFSU2_TR(0x41f228);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41f22c:{NFSU2_TR(0x41f22c);
__builtin_memmove((R+8),(R+4),4);
}
B41f22e:{NFSU2_TR(0x41f22e);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41f234:{NFSU2_TR(0x41f234);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B41f236:{NFSU2_TR(0x41f236);
{u32 ea_=u32(u32(7879812u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41f23c:{NFSU2_TR(0x41f23c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41f23e:{NFSU2_TR(0x41f23e);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41f240:{NFSU2_TR(0x41f240);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41f244:{NFSU2_TR(0x41f244);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B41f246:{NFSU2_TR(0x41f246);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41f248:{NFSU2_TR(0x41f248);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41f24b:{NFSU2_TR(0x41f24b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L41f253;}}
}
B41f24d:L41f24d:{c.instructions+=2;NFSU2_TR(0x41f24d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41f251:{NFSU2_TR(0x41f251);
{goto L41f255;}
}
B41f253:L41f253:{c.instructions+=1;NFSU2_TR(0x41f253);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41f255:L41f255:{c.instructions+=10;NFSU2_TR(0x41f255);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41f259:{NFSU2_TR(0x41f259);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41f25d:{NFSU2_TR(0x41f25d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41f261:{NFSU2_TR(0x41f261);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B41f262:{NFSU2_TR(0x41f262);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B41f265:{NFSU2_TR(0x41f265);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B41f266:{NFSU2_TR(0x41f266);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f26a:{NFSU2_TR(0x41f26a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f26e:{NFSU2_TR(0x41f26e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f272:{NFSU2_TR(0x41f272);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41f202u);}goto L41f202;}}
}
B41f274:L41f274:{c.instructions+=3;NFSU2_TR(0x41f274);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41f278:{NFSU2_TR(0x41f278);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41f27c:{NFSU2_TR(0x41f27c);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41f280:L41f280:{c.instructions+=7;NFSU2_TR(0x41f280);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41f283:{NFSU2_TR(0x41f283);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41f287:{NFSU2_TR(0x41f287);
{u32 ea_=u32(u32(7879816u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41f28d:{NFSU2_TR(0x41f28d);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B41f28f:{NFSU2_TR(0x41f28f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41f291:{NFSU2_TR(0x41f291);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41f294:{NFSU2_TR(0x41f294);
if(r1(R+514)){{goto L41f2d0;}}
}
B41f296:L41f296:{c.instructions+=4;NFSU2_TR(0x41f296);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41f299:{NFSU2_TR(0x41f299);
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
B41f29b:{NFSU2_TR(0x41f29b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f29f:{NFSU2_TR(0x41f29f);
if(r1(R+518)){{goto L41f2a8;}}
}
B41f2a1:L41f2a1:{c.instructions+=1;NFSU2_TR(0x41f2a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41f2a8:L41f2a8:{c.instructions+=4;NFSU2_TR(0x41f2a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41f2aa:{NFSU2_TR(0x41f2aa);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f2ac:{NFSU2_TR(0x41f2ac);
__builtin_memmove((R+4),(R+24),4);
}
B41f2ae:{NFSU2_TR(0x41f2ae);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41f2b0ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B41f2b0:L41f2b0:{c.instructions+=8;NFSU2_TR(0x41f2b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41f2b3:{NFSU2_TR(0x41f2b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B41f2b7:{NFSU2_TR(0x41f2b7);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x0ull));
s4(u32(r4(U+8)),r4(U+12));
}
B41f2bf:{NFSU2_TR(0x41f2bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41f2c2:{NFSU2_TR(0x41f2c2);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B41f2c3:{NFSU2_TR(0x41f2c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41f2c5:{NFSU2_TR(0x41f2c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f2c8:{NFSU2_TR(0x41f2c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41f280u);}goto L41f280;}}
}
B41f2ca:L41f2ca:{c.instructions+=1;NFSU2_TR(0x41f2ca);
{goto L41f35e;}
}
B41f2d0:L41f2d0:{c.instructions+=7;NFSU2_TR(0x41f2d0);
{u32 ea_=u32(u32(7879816u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41f2d6:{NFSU2_TR(0x41f2d6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B41f2d8:{NFSU2_TR(0x41f2d8);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B41f2dc:{NFSU2_TR(0x41f2dc);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41f2df:{NFSU2_TR(0x41f2df);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41f2e1:{NFSU2_TR(0x41f2e1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41f2e4:{NFSU2_TR(0x41f2e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41f3a7;}}
}
B41f2ea:L41f2ea:{c.instructions+=2;NFSU2_TR(0x41f2ea);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x28ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x28ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B41f2ee:{NFSU2_TR(0x41f2ee);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41f3a7;}}
}
B41f2f4:L41f2f4:{c.instructions+=11;NFSU2_TR(0x41f2f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41f2f7:{NFSU2_TR(0x41f2f7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B41f2fb:{NFSU2_TR(0x41f2fb);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B41f2ff:{NFSU2_TR(0x41f2ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f303:{NFSU2_TR(0x41f303);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41f306:{NFSU2_TR(0x41f306);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f30a:{NFSU2_TR(0x41f30a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41f30c:{NFSU2_TR(0x41f30c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f310:{NFSU2_TR(0x41f310);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f311:{NFSU2_TR(0x41f311);
__builtin_memmove((R+4),(R+24),4);
}
B41f313:{NFSU2_TR(0x41f313);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41f316ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41f316:L41f316:{c.instructions+=19;NFSU2_TR(0x41f316);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41f31a:{NFSU2_TR(0x41f31a);
{u32 ea_=u32(u32(7879816u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41f320:{NFSU2_TR(0x41f320);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f321:{NFSU2_TR(0x41f321);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41f324:{NFSU2_TR(0x41f324);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41f328:{NFSU2_TR(0x41f328);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f32a:{NFSU2_TR(0x41f32a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B41f32d:{NFSU2_TR(0x41f32d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41f330:{NFSU2_TR(0x41f330);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41f334:{NFSU2_TR(0x41f334);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B41f337:{NFSU2_TR(0x41f337);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41f33b:{NFSU2_TR(0x41f33b);
{u32 ea_=u32(u32(7879816u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41f341:{NFSU2_TR(0x41f341);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41f344:{NFSU2_TR(0x41f344);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f345:{NFSU2_TR(0x41f345);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f346:{NFSU2_TR(0x41f346);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f347:{NFSU2_TR(0x41f347);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f348:{NFSU2_TR(0x41f348);
__builtin_memmove((R+4),(R+12),4);
}
B41f34a:{NFSU2_TR(0x41f34a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41f34full));
TAIL_STATIC(0x418a50u,418);
}
B41f34f:L41f34f:{c.instructions+=4;NFSU2_TR(0x41f34f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41f352:{NFSU2_TR(0x41f352);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B41f356:{NFSU2_TR(0x41f356);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41f358:{NFSU2_TR(0x41f358);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41f2d0u);}goto L41f2d0;}}
}
B41f35e:L41f35e:{c.instructions+=3;NFSU2_TR(0x41f35e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41f361:{NFSU2_TR(0x41f361);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x28ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x28ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B41f364:{NFSU2_TR(0x41f364);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41f396;}}
}
B41f366:L41f366:{c.instructions+=4;NFSU2_TR(0x41f366);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B41f36a:{NFSU2_TR(0x41f36a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41f36d:{NFSU2_TR(0x41f36d);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41f36f:{NFSU2_TR(0x41f36f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L41f38a;}}
}
B41f371:L41f371:{c.instructions+=7;NFSU2_TR(0x41f371);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B41f375:{NFSU2_TR(0x41f375);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B41f379:{NFSU2_TR(0x41f379);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f37c:{NFSU2_TR(0x41f37c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41f37f:{NFSU2_TR(0x41f37f);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B41f383:{NFSU2_TR(0x41f383);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B41f387:{NFSU2_TR(0x41f387);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f38a:L41f38a:{c.instructions+=7;NFSU2_TR(0x41f38a);
u8 U[14];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
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
B41f38d:{NFSU2_TR(0x41f38d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41f38e:{NFSU2_TR(0x41f38e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41f38f:{NFSU2_TR(0x41f38f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41f390:{NFSU2_TR(0x41f390);
__builtin_memmove((R+16),(R+20),4);
}
B41f392:{NFSU2_TR(0x41f392);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41f393:{NFSU2_TR(0x41f393);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41f396:L41f396:{c.instructions+=4;NFSU2_TR(0x41f396);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41f398:{NFSU2_TR(0x41f398);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f39a:{NFSU2_TR(0x41f39a);
__builtin_memmove((R+4),(R+28),4);
}
B41f39c:{NFSU2_TR(0x41f39c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41f39eull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B41f39e:L41f39e:{c.instructions+=6;NFSU2_TR(0x41f39e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41f39f:{NFSU2_TR(0x41f39f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41f3a0:{NFSU2_TR(0x41f3a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41f3a1:{NFSU2_TR(0x41f3a1);
__builtin_memmove((R+16),(R+20),4);
}
B41f3a3:{NFSU2_TR(0x41f3a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41f3a4:{NFSU2_TR(0x41f3a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41f3a7:L41f3a7:{c.instructions+=6;NFSU2_TR(0x41f3a7);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41f3ab:{NFSU2_TR(0x41f3ab);
u8 U[5];
w4(U+0,u32(u32(u32(0x23ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41f3b0:{NFSU2_TR(0x41f3b0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41f3b4:{NFSU2_TR(0x41f3b4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41f3b6:{NFSU2_TR(0x41f3b6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41f3b9:{NFSU2_TR(0x41f3b9);
if(r1(R+518)){{goto L41f3c0;}}
}
B41f3bb:L41f3bb:{c.instructions+=1;NFSU2_TR(0x41f3bb);
u8 U[5];
w4(U+0,u32(u32(u32(0x23ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41f3c0:L41f3c0:{c.instructions+=10;NFSU2_TR(0x41f3c0);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41f3c4:{NFSU2_TR(0x41f3c4);
u8 U[5];
w4(U+0,u32(u32(u32(0x23ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41f3c8:{NFSU2_TR(0x41f3c8);
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
B41f3ca:{NFSU2_TR(0x41f3ca);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41f3ce:{NFSU2_TR(0x41f3ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41f3d0:{NFSU2_TR(0x41f3d0);
__builtin_memmove((R+4),(R+24),4);
}
B41f3d2:{NFSU2_TR(0x41f3d2);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B41f3d6:{NFSU2_TR(0x41f3d6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f3d8:{NFSU2_TR(0x41f3d8);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41f3dc:{NFSU2_TR(0x41f3dc);
if(r1(R+518)){{goto L41f3e7;}}
}
B41f3de:L41f3de:{c.instructions+=1;NFSU2_TR(0x41f3de);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41f3e1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41f3e1:L41f3e1:{c.instructions+=2;NFSU2_TR(0x41f3e1);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41f3e5:{NFSU2_TR(0x41f3e5);
{goto L41f3ee;}
}
B41f3e7:L41f3e7:{c.instructions+=1;NFSU2_TR(0x41f3e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41f3eaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41f3ea:L41f3ea:{c.instructions+=1;NFSU2_TR(0x41f3ea);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41f3ee:L41f3ee:{c.instructions+=10;NFSU2_TR(0x41f3ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41f3f2:{NFSU2_TR(0x41f3f2);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41f3f6:{NFSU2_TR(0x41f3f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41f3fa:{NFSU2_TR(0x41f3fa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f3fc:{NFSU2_TR(0x41f3fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f3fd:{NFSU2_TR(0x41f3fd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f3fe:{NFSU2_TR(0x41f3fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B41f402:{NFSU2_TR(0x41f402);
__builtin_memmove((R+4),(R+24),4);
}
B41f404:{NFSU2_TR(0x41f404);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f405:{NFSU2_TR(0x41f405);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41f40aull));
TAIL_STATIC(0x4122c0u,412);
}
B41f40a:L41f40a:{c.instructions+=10;NFSU2_TR(0x41f40a);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41f40e:{NFSU2_TR(0x41f40e);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41f412:{NFSU2_TR(0x41f412);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f416:{NFSU2_TR(0x41f416);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B41f41d:{NFSU2_TR(0x41f41d);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41f424:{NFSU2_TR(0x41f424);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f428:{NFSU2_TR(0x41f428);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41f430:{NFSU2_TR(0x41f430);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f434:{NFSU2_TR(0x41f434);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f438:{NFSU2_TR(0x41f438);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41f440:L41f440:{c.instructions+=6;NFSU2_TR(0x41f440);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41f444:{NFSU2_TR(0x41f444);
u8 U[5];
w4(U+0,u32(u32(u32(0x23ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41f448:{NFSU2_TR(0x41f448);
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
B41f44a:{NFSU2_TR(0x41f44a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41f44c:{NFSU2_TR(0x41f44c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f450:{NFSU2_TR(0x41f450);
if(r1(R+518)){{goto L41f49b;}}
}
B41f452:L41f452:{c.instructions+=5;NFSU2_TR(0x41f452);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41f456:{NFSU2_TR(0x41f456);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41f458:{NFSU2_TR(0x41f458);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f459:{NFSU2_TR(0x41f459);
__builtin_memmove((R+4),(R+24),4);
}
B41f45b:{NFSU2_TR(0x41f45b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41f45eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41f45e:L41f45e:{c.instructions+=14;NFSU2_TR(0x41f45e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41f462:{NFSU2_TR(0x41f462);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41f466:{NFSU2_TR(0x41f466);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f467:{NFSU2_TR(0x41f467);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41f46b:{NFSU2_TR(0x41f46b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41f46f:{NFSU2_TR(0x41f46f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41f473:{NFSU2_TR(0x41f473);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f474:{NFSU2_TR(0x41f474);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41f478:{NFSU2_TR(0x41f478);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f479:{NFSU2_TR(0x41f479);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41f47d:{NFSU2_TR(0x41f47d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41f480:{NFSU2_TR(0x41f480);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f481:{NFSU2_TR(0x41f481);
__builtin_memmove((R+4),(R+24),4);
}
B41f483:{NFSU2_TR(0x41f483);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41f488ull));
TAIL_STATIC(0x4122c0u,412);
}
B41f488:L41f488:{c.instructions+=6;NFSU2_TR(0x41f488);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41f48c:{NFSU2_TR(0x41f48c);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41f490:{NFSU2_TR(0x41f490);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41f494:{NFSU2_TR(0x41f494);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B41f496:{NFSU2_TR(0x41f496);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f499:{NFSU2_TR(0x41f499);
{goto L41f4eb;}
}
B41f49b:L41f49b:{c.instructions+=5;NFSU2_TR(0x41f49b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41f49f:{NFSU2_TR(0x41f49f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41f4a1:{NFSU2_TR(0x41f4a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f4a2:{NFSU2_TR(0x41f4a2);
__builtin_memmove((R+4),(R+24),4);
}
B41f4a4:{NFSU2_TR(0x41f4a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41f4a7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41f4a7:L41f4a7:{c.instructions+=14;NFSU2_TR(0x41f4a7);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41f4ab:{NFSU2_TR(0x41f4ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41f4af:{NFSU2_TR(0x41f4af);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f4b0:{NFSU2_TR(0x41f4b0);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41f4b4:{NFSU2_TR(0x41f4b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41f4b8:{NFSU2_TR(0x41f4b8);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41f4bc:{NFSU2_TR(0x41f4bc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f4bd:{NFSU2_TR(0x41f4bd);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41f4c1:{NFSU2_TR(0x41f4c1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f4c2:{NFSU2_TR(0x41f4c2);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41f4c9:{NFSU2_TR(0x41f4c9);
__builtin_memmove((R+4),(R+24),4);
}
B41f4cb:{NFSU2_TR(0x41f4cb);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41f4ce:{NFSU2_TR(0x41f4ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f4cf:{NFSU2_TR(0x41f4cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41f4d4ull));
TAIL_STATIC(0x4122c0u,412);
}
B41f4d4:L41f4d4:{c.instructions+=5;NFSU2_TR(0x41f4d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41f4d8:{NFSU2_TR(0x41f4d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41f4df:{NFSU2_TR(0x41f4df);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41f4e6:{NFSU2_TR(0x41f4e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B41f4e8:{NFSU2_TR(0x41f4e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f4eb:L41f4eb:{c.instructions+=13;NFSU2_TR(0x41f4eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41f4ef:{NFSU2_TR(0x41f4ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41f4f3:{NFSU2_TR(0x41f4f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41f4f7:{NFSU2_TR(0x41f4f7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B41f4f8:{NFSU2_TR(0x41f4f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f4fc:{NFSU2_TR(0x41f4fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41f500:{NFSU2_TR(0x41f500);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B41f503:{NFSU2_TR(0x41f503);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B41f506:{NFSU2_TR(0x41f506);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B41f507:{NFSU2_TR(0x41f507);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f50b:{NFSU2_TR(0x41f50b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f50f:{NFSU2_TR(0x41f50f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f513:{NFSU2_TR(0x41f513);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41f440u);}goto L41f440;}}
}
B41f519:L41f519:{c.instructions+=5;NFSU2_TR(0x41f519);
u8 U[5];
w4(U+0,u32(u32(u32(0x23ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41f51d:{NFSU2_TR(0x41f51d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41f51f:{NFSU2_TR(0x41f51f);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B41f523:{NFSU2_TR(0x41f523);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f527:{NFSU2_TR(0x41f527);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41f540;}}
}
B41f529:L41f529:{c.instructions+=2;NFSU2_TR(0x41f529);
__builtin_memmove((R+4),(R+28),4);
}
B41f52b:{NFSU2_TR(0x41f52b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41f530ull));
TAIL_STATIC(0x40b0b0u,40b);
}
B41f530:L41f530:{c.instructions+=2;NFSU2_TR(0x41f530);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41f533:{NFSU2_TR(0x41f533);
if(r1(R+518)){{goto L41f540;}}
}
B41f535:L41f535:{c.instructions+=2;NFSU2_TR(0x41f535);
u8 U[12];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B41f53c:{NFSU2_TR(0x41f53c);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f540:L41f540:{c.instructions+=4;NFSU2_TR(0x41f540);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B41f544:{NFSU2_TR(0x41f544);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41f54a:{NFSU2_TR(0x41f54a);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B41f54e:{NFSU2_TR(0x41f54e);
if(r1(R+518)){{goto L41f590;}}
}
B41f550:L41f550:{c.instructions+=3;NFSU2_TR(0x41f550);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B41f554:{NFSU2_TR(0x41f554);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B41f558:{NFSU2_TR(0x41f558);
if(r1(R+518)){{goto L41f590;}}
}
B41f55a:L41f55a:{c.instructions+=3;NFSU2_TR(0x41f55a);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B41f55d:{NFSU2_TR(0x41f55d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B41f55f:{NFSU2_TR(0x41f55f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41f56a;}}
}
B41f561:L41f561:{c.instructions+=2;NFSU2_TR(0x41f561);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B41f568:{NFSU2_TR(0x41f568);
{goto L41f56c;}
}
B41f56a:L41f56a:{c.instructions+=1;NFSU2_TR(0x41f56a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B41f56c:L41f56c:{c.instructions+=5;NFSU2_TR(0x41f56c);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B41f56f:{NFSU2_TR(0x41f56f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B41f572:{NFSU2_TR(0x41f572);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B41f579:{NFSU2_TR(0x41f579);
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
B41f57b:{NFSU2_TR(0x41f57b);
if(r1(R+518)){{goto L41f590;}}
}
B41f57d:L41f57d:{c.instructions+=6;NFSU2_TR(0x41f57d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41f57f:{NFSU2_TR(0x41f57f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41f581:{NFSU2_TR(0x41f581);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f582:{NFSU2_TR(0x41f582);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f583:{NFSU2_TR(0x41f583);
__builtin_memmove((R+4),(R+28),4);
}
B41f585:{NFSU2_TR(0x41f585);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41f588ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41f588:L41f588:{c.instructions+=3;NFSU2_TR(0x41f588);
{u32 ea_=u32(r4(R+28)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41f58b:{NFSU2_TR(0x41f58b);
{u32 ea_=u32(r4(R+28)+u32(88u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41f58e:{NFSU2_TR(0x41f58e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B41f590:L41f590:{c.instructions+=6;NFSU2_TR(0x41f590);
{u32 ea_=u32(r4(R+28)+u32(84u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41f593:{NFSU2_TR(0x41f593);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B41f597:{NFSU2_TR(0x41f597);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B41f59b:{NFSU2_TR(0x41f59b);
{u32 ea_=u32(u32(7879816u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41f5a1:{NFSU2_TR(0x41f5a1);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41f5a5:{NFSU2_TR(0x41f5a5);
if(r1(R+518)){{goto L41f5df;}}
}
B41f5a7:L41f5a7:{c.instructions+=3;NFSU2_TR(0x41f5a7);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B41f5ab:{NFSU2_TR(0x41f5ab);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B41f5af:{NFSU2_TR(0x41f5af);
if(r1(R+518)){{goto L41f5df;}}
}
B41f5b1:L41f5b1:{c.instructions+=3;NFSU2_TR(0x41f5b1);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B41f5b4:{NFSU2_TR(0x41f5b4);
u8 U[10];
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B41f5b6:{NFSU2_TR(0x41f5b6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41f5ce;}}
}
B41f5b8:L41f5b8:{c.instructions+=5;NFSU2_TR(0x41f5b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B41f5bf:{NFSU2_TR(0x41f5bf);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B41f5c2:{NFSU2_TR(0x41f5c2);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(s64(s32(u32(0x38ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+4)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B41f5c5:{NFSU2_TR(0x41f5c5);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B41f5cc:{NFSU2_TR(0x41f5cc);
{goto L41f5e1;}
}
B41f5ce:L41f5ce:{c.instructions+=5;NFSU2_TR(0x41f5ce);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B41f5d1:{NFSU2_TR(0x41f5d1);
u8 U[6];
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B41f5d3:{NFSU2_TR(0x41f5d3);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(s64(s32(u32(0x38ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+4)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B41f5d6:{NFSU2_TR(0x41f5d6);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B41f5dd:{NFSU2_TR(0x41f5dd);
{goto L41f5e1;}
}
B41f5df:L41f5df:{c.instructions+=1;NFSU2_TR(0x41f5df);
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
B41f5e1:L41f5e1:{c.instructions+=4;NFSU2_TR(0x41f5e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41f5e3:{NFSU2_TR(0x41f5e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f5e4:{NFSU2_TR(0x41f5e4);
__builtin_memmove((R+4),(R+28),4);
}
B41f5e6:{NFSU2_TR(0x41f5e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41f5e9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41f5e9:L41f5e9:{c.instructions+=4;NFSU2_TR(0x41f5e9);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41f5ed:{NFSU2_TR(0x41f5ed);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41f5ef:{NFSU2_TR(0x41f5ef);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41f5f2:{NFSU2_TR(0x41f5f2);
if(r1(R+514)){{goto L41f7cf;}}
}
B41f5f8:L41f5f8:{c.instructions+=1;NFSU2_TR(0x41f5f8);
{goto L41f600;}
}
B41f600:L41f600:{c.instructions+=3;NFSU2_TR(0x41f600);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B41f604:{NFSU2_TR(0x41f604);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B41f608:{NFSU2_TR(0x41f608);
if(r1(R+518)){{goto L41f621;}}
}
B41f60a:L41f60a:{c.instructions+=2;NFSU2_TR(0x41f60a);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B41f60f:{NFSU2_TR(0x41f60f);
if(r1(R+518)){{goto L41f621;}}
}
B41f611:L41f611:{c.instructions+=3;NFSU2_TR(0x41f611);
w4(R+4,u32(s32(s16(r2(R+0)))));
}
B41f614:{NFSU2_TR(0x41f614);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B41f616:{NFSU2_TR(0x41f616);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41f621;}}
}
B41f618:L41f618:{c.instructions+=2;NFSU2_TR(0x41f618);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B41f61f:{NFSU2_TR(0x41f61f);
{goto L41f623;}
}
B41f621:L41f621:{c.instructions+=1;NFSU2_TR(0x41f621);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B41f623:L41f623:{c.instructions+=3;NFSU2_TR(0x41f623);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B41f627:{NFSU2_TR(0x41f627);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f62b:{NFSU2_TR(0x41f62b);
if(r1(R+518)){{goto L41f665;}}
}
B41f62d:L41f62d:{c.instructions+=3;NFSU2_TR(0x41f62d);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B41f631:{NFSU2_TR(0x41f631);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B41f635:{NFSU2_TR(0x41f635);
if(r1(R+518)){{goto L41f665;}}
}
B41f637:L41f637:{c.instructions+=3;NFSU2_TR(0x41f637);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B41f63a:{NFSU2_TR(0x41f63a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B41f63c:{NFSU2_TR(0x41f63c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41f654;}}
}
B41f63e:L41f63e:{c.instructions+=5;NFSU2_TR(0x41f63e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B41f645:{NFSU2_TR(0x41f645);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B41f648:{NFSU2_TR(0x41f648);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B41f64b:{NFSU2_TR(0x41f64b);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B41f652:{NFSU2_TR(0x41f652);
{goto L41f667;}
}
B41f654:L41f654:{c.instructions+=5;NFSU2_TR(0x41f654);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B41f657:{NFSU2_TR(0x41f657);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B41f659:{NFSU2_TR(0x41f659);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B41f65c:{NFSU2_TR(0x41f65c);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B41f663:{NFSU2_TR(0x41f663);
{goto L41f667;}
}
B41f665:L41f665:{c.instructions+=1;NFSU2_TR(0x41f665);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B41f667:L41f667:{c.instructions+=2;NFSU2_TR(0x41f667);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f66b:{NFSU2_TR(0x41f66b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41f670ull));
TAIL_STATIC(0x5d89b0u,5d8);
}
B41f670:L41f670:{c.instructions+=5;NFSU2_TR(0x41f670);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41f672:{NFSU2_TR(0x41f672);
__builtin_memmove((R+4),(R+28),4);
}
B41f674:{NFSU2_TR(0x41f674);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f678:{NFSU2_TR(0x41f678);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41f680:{NFSU2_TR(0x41f680);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41f683ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41f683:L41f683:{c.instructions+=19;NFSU2_TR(0x41f683);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B41f685:{NFSU2_TR(0x41f685);
u8 U[2];
__builtin_memmove((U+0),(R+512),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(R+0))));
w1(R+0,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B41f687:{NFSU2_TR(0x41f687);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B41f689:{NFSU2_TR(0x41f689);
u8 U[5];
w4(U+0,u32(u32(u32(0x37ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41f68d:{NFSU2_TR(0x41f68d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41f690:{NFSU2_TR(0x41f690);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41f693:{NFSU2_TR(0x41f693);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f694:{NFSU2_TR(0x41f694);
u8 U[4];
w4(U+0,u32(u32(u32(0x3bull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41f698:{NFSU2_TR(0x41f698);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f699:{NFSU2_TR(0x41f699);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B41f69d:{NFSU2_TR(0x41f69d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f69e:{NFSU2_TR(0x41f69e);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41f6a2:{NFSU2_TR(0x41f6a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f6a3:{NFSU2_TR(0x41f6a3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41f6a7:{NFSU2_TR(0x41f6a7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f6a8:{NFSU2_TR(0x41f6a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B41f6ac:{NFSU2_TR(0x41f6ac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f6ad:{NFSU2_TR(0x41f6ad);
__builtin_memmove((R+4),(R+12),4);
}
B41f6af:{NFSU2_TR(0x41f6af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41f6b4ull));
TAIL_STATIC(0x41ec20u,41e);
}
B41f6b4:L41f6b4:{c.instructions+=2;NFSU2_TR(0x41f6b4);
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
B41f6b6:{NFSU2_TR(0x41f6b6);
if(r1(R+518)){{goto L41f7cf;}}
}
B41f6bc:L41f6bc:{c.instructions+=3;NFSU2_TR(0x41f6bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41f6be:{NFSU2_TR(0x41f6be);
__builtin_memmove((R+4),(R+28),4);
}
B41f6c0:{NFSU2_TR(0x41f6c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41f6c3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41f6c3:L41f6c3:{c.instructions+=6;NFSU2_TR(0x41f6c3);
u8 U[5];
w4(U+0,u32(u32(u32(0x37ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B41f6c8:{NFSU2_TR(0x41f6c8);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B41f6ca:{NFSU2_TR(0x41f6ca);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B41f6cc:{NFSU2_TR(0x41f6cc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B41f6cd:{NFSU2_TR(0x41f6cd);
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
B41f6cf:{NFSU2_TR(0x41f6cf);
if(r1(R+518)){{goto L41f6f3;}}
}
B41f6d1:L41f6d1:{c.instructions+=4;NFSU2_TR(0x41f6d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41f6d3:{NFSU2_TR(0x41f6d3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f6d5:{NFSU2_TR(0x41f6d5);
__builtin_memmove((R+4),(R+28),4);
}
B41f6d7:{NFSU2_TR(0x41f6d7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41f6d9ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B41f6d9:L41f6d9:{c.instructions+=9;NFSU2_TR(0x41f6d9);
u8 U[5];
w4(U+0,u32(u32(u32(0x37ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B41f6dd:{NFSU2_TR(0x41f6dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41f6e1:{NFSU2_TR(0x41f6e1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B41f6e3:{NFSU2_TR(0x41f6e3);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41f6e5:{NFSU2_TR(0x41f6e5);
__builtin_memmove((R+0),(R+518),1);
}
B41f6e8:{NFSU2_TR(0x41f6e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f6e9:{NFSU2_TR(0x41f6e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f6ea:{NFSU2_TR(0x41f6ea);
__builtin_memmove((R+4),(R+12),4);
}
B41f6ec:{NFSU2_TR(0x41f6ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41f6f1ull));
TAIL_STATIC(0x411b50u,411);
}
B41f6f1:L41f6f1:{c.instructions+=1;NFSU2_TR(0x41f6f1);
__builtin_memmove((R+28),(R+0),4);
}
B41f6f3:L41f6f3:{c.instructions+=4;NFSU2_TR(0x41f6f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41f6f7:{NFSU2_TR(0x41f6f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41f6fb:{NFSU2_TR(0x41f6fb);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B41f6ff:{NFSU2_TR(0x41f6ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41f704ull));
TAIL_STATIC(0x5d89b0u,5d8);
}
B41f704:L41f704:{c.instructions+=10;NFSU2_TR(0x41f704);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B41f706:{NFSU2_TR(0x41f706);
u8 U[4];
__builtin_memmove((U+0),(R+24),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B41f70a:{NFSU2_TR(0x41f70a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41f710:{NFSU2_TR(0x41f710);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f713:{NFSU2_TR(0x41f713);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f716:{NFSU2_TR(0x41f716);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41f71a:{NFSU2_TR(0x41f71a);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B41f71e:{NFSU2_TR(0x41f71e);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5eull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B41f722:{NFSU2_TR(0x41f722);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f725:{NFSU2_TR(0x41f725);
if(r1(R+518)){{goto L41f767;}}
}
B41f727:L41f727:{c.instructions+=2;NFSU2_TR(0x41f727);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B41f72b:{NFSU2_TR(0x41f72b);
if(r1(R+518)){{goto L41f767;}}
}
B41f72d:L41f72d:{c.instructions+=3;NFSU2_TR(0x41f72d);
w4(R+4,u32(s32(s16(r2(R+24)))));
}
B41f730:{NFSU2_TR(0x41f730);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B41f732:{NFSU2_TR(0x41f732);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41f73d;}}
}
B41f734:L41f734:{c.instructions+=2;NFSU2_TR(0x41f734);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B41f73b:{NFSU2_TR(0x41f73b);
{goto L41f73f;}
}
B41f73d:L41f73d:{c.instructions+=1;NFSU2_TR(0x41f73d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B41f73f:L41f73f:{c.instructions+=5;NFSU2_TR(0x41f73f);
w4(R+8,u32(s32(s16(r2(R+0)))));
}
B41f742:{NFSU2_TR(0x41f742);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B41f745:{NFSU2_TR(0x41f745);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B41f74c:{NFSU2_TR(0x41f74c);
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
B41f74e:{NFSU2_TR(0x41f74e);
if(r1(R+518)){{goto L41f767;}}
}
B41f750:L41f750:{c.instructions+=7;NFSU2_TR(0x41f750);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41f754:{NFSU2_TR(0x41f754);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41f756:{NFSU2_TR(0x41f756);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41f758:{NFSU2_TR(0x41f758);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f759:{NFSU2_TR(0x41f759);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f75a:{NFSU2_TR(0x41f75a);
__builtin_memmove((R+4),(R+28),4);
}
B41f75c:{NFSU2_TR(0x41f75c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41f75full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41f75f:L41f75f:{c.instructions+=3;NFSU2_TR(0x41f75f);
{u32 ea_=u32(r4(R+28)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41f762:{NFSU2_TR(0x41f762);
{u32 ea_=u32(r4(R+28)+u32(88u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41f765:{NFSU2_TR(0x41f765);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B41f767:L41f767:{c.instructions+=6;NFSU2_TR(0x41f767);
{u32 ea_=u32(r4(R+28)+u32(84u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41f76a:{NFSU2_TR(0x41f76a);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B41f76e:{NFSU2_TR(0x41f76e);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B41f772:{NFSU2_TR(0x41f772);
{u32 ea_=u32(u32(7879816u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41f778:{NFSU2_TR(0x41f778);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41f77c:{NFSU2_TR(0x41f77c);
if(r1(R+518)){{goto L41f7b6;}}
}
B41f77e:L41f77e:{c.instructions+=3;NFSU2_TR(0x41f77e);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B41f782:{NFSU2_TR(0x41f782);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B41f786:{NFSU2_TR(0x41f786);
if(r1(R+518)){{goto L41f7b6;}}
}
B41f788:L41f788:{c.instructions+=3;NFSU2_TR(0x41f788);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B41f78b:{NFSU2_TR(0x41f78b);
u8 U[10];
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B41f78d:{NFSU2_TR(0x41f78d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41f7a5;}}
}
B41f78f:L41f78f:{c.instructions+=5;NFSU2_TR(0x41f78f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B41f796:{NFSU2_TR(0x41f796);
w4(R+8,u32(s32(s16(r2(R+4)))));
}
B41f799:{NFSU2_TR(0x41f799);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(s64(s32(u32(0x38ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+8)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B41f79c:{NFSU2_TR(0x41f79c);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B41f7a3:{NFSU2_TR(0x41f7a3);
{goto L41f7b8;}
}
B41f7a5:L41f7a5:{c.instructions+=5;NFSU2_TR(0x41f7a5);
w4(R+8,u32(s32(s16(r2(R+4)))));
}
B41f7a8:{NFSU2_TR(0x41f7a8);
u8 U[6];
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B41f7aa:{NFSU2_TR(0x41f7aa);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(s64(s32(u32(0x38ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+8)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B41f7ad:{NFSU2_TR(0x41f7ad);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B41f7b4:{NFSU2_TR(0x41f7b4);
{goto L41f7b8;}
}
B41f7b6:L41f7b6:{c.instructions+=1;NFSU2_TR(0x41f7b6);
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
B41f7b8:L41f7b8:{c.instructions+=4;NFSU2_TR(0x41f7b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41f7ba:{NFSU2_TR(0x41f7ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f7bb:{NFSU2_TR(0x41f7bb);
__builtin_memmove((R+4),(R+28),4);
}
B41f7bd:{NFSU2_TR(0x41f7bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41f7c0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41f7c0:L41f7c0:{c.instructions+=4;NFSU2_TR(0x41f7c0);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41f7c4:{NFSU2_TR(0x41f7c4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41f7c6:{NFSU2_TR(0x41f7c6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41f7c9:{NFSU2_TR(0x41f7c9);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41f600u);}goto L41f600;}}
}
B41f7cf:L41f7cf:{c.instructions+=8;NFSU2_TR(0x41f7cf);
{u32 ea_=u32(u32(7879816u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41f7d5:{NFSU2_TR(0x41f7d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41f7d9:{NFSU2_TR(0x41f7d9);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41f7dd:{NFSU2_TR(0x41f7dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f7e0:{NFSU2_TR(0x41f7e0);
{u32 ea_=u32(r4(R+28)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41f7e3:{NFSU2_TR(0x41f7e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41f7e6:{NFSU2_TR(0x41f7e6);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x28ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x28ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B41f7e9:{NFSU2_TR(0x41f7e9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41f814;}}
}
B41f7eb:L41f7eb:{c.instructions+=4;NFSU2_TR(0x41f7eb);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B41f7ef:{NFSU2_TR(0x41f7ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41f7f2:{NFSU2_TR(0x41f7f2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41f7f4:{NFSU2_TR(0x41f7f4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L41f80f;}}
}
B41f7f6:L41f7f6:{c.instructions+=7;NFSU2_TR(0x41f7f6);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B41f7fa:{NFSU2_TR(0x41f7fa);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B41f7fe:{NFSU2_TR(0x41f7fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f801:{NFSU2_TR(0x41f801);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41f804:{NFSU2_TR(0x41f804);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B41f808:{NFSU2_TR(0x41f808);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B41f80c:{NFSU2_TR(0x41f80c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f80f:L41f80f:{c.instructions+=2;NFSU2_TR(0x41f80f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B41f812:{NFSU2_TR(0x41f812);
{goto L41f81c;}
}
B41f814:L41f814:{c.instructions+=4;NFSU2_TR(0x41f814);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41f816:{NFSU2_TR(0x41f816);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f818:{NFSU2_TR(0x41f818);
__builtin_memmove((R+4),(R+28),4);
}
B41f81a:{NFSU2_TR(0x41f81a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41f81cull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B41f81c:L41f81c:{c.instructions+=3;NFSU2_TR(0x41f81c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41f822:{NFSU2_TR(0x41f822);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41f825:{NFSU2_TR(0x41f825);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41f8c3;}}
}
B41f82b:L41f82b:{c.instructions+=27;NFSU2_TR(0x41f82b);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B41f82e:{NFSU2_TR(0x41f82e);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41f832:{NFSU2_TR(0x41f832);
w1(R+512,u8((r1(R+4))<(u8(0x2ull))));
w1(R+4,u8(u32(r1(R+4))-u32(u8(0x2ull))));
}
B41f835:{NFSU2_TR(0x41f835);
u8 U[23];
w4(U+15,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
__builtin_memmove((U+19),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+15))));
w1(U+5,u8((r4(U+15))==(u32(0x0ull))));
w4(U+6,u32(u32(r4(U+15))-u32(u32(0x1ull))));
w4(U+10,shl<u32>(r4(U+19),u64(r4(U+6))));
w1(U+14,u8(s32(r4(U+10))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+5),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+5))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+14))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B41f838:{NFSU2_TR(0x41f838);
u8 U[13];
w4(U+0,u32(u32(u32(0x148ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B41f83f:{NFSU2_TR(0x41f83f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41f845:{NFSU2_TR(0x41f845);
u8 U[5];
w4(U+0,u32(u32(u32(0x23ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B41f849:{NFSU2_TR(0x41f849);
u8 U[23];
w4(U+15,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
__builtin_memmove((U+19),(R+8),4);
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+15))));
w1(U+5,u8((r4(U+15))==(u32(0x0ull))));
w4(U+6,u32(u32(r4(U+15))-u32(u32(0x1ull))));
w4(U+10,shl<u32>(r4(U+19),u64(r4(U+6))));
w1(U+14,u8(s32(r4(U+10))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+5),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+5))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+14))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B41f84c:{NFSU2_TR(0x41f84c);
{u32 ea_=u32(r4(R+12)+r4(R+8)+u32(304u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41f853:{NFSU2_TR(0x41f853);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41f859:{NFSU2_TR(0x41f859);
u8 U[23];
w4(U+15,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
__builtin_memmove((U+19),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+15))));
w1(U+5,u8((r4(U+15))==(u32(0x0ull))));
w4(U+6,u32(u32(r4(U+15))-u32(u32(0x1ull))));
w4(U+10,shl<u32>(r4(U+19),u64(r4(U+6))));
w1(U+14,u8(s32(r4(U+10))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+5),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+5))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+14))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B41f85c:{NFSU2_TR(0x41f85c);
u8 U[13];
w4(U+0,u32(u32(u32(0x151ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B41f863:{NFSU2_TR(0x41f863);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41f869:{NFSU2_TR(0x41f869);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41f86d:{NFSU2_TR(0x41f86d);
u8 U[23];
w4(U+15,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
__builtin_memmove((U+19),(R+8),4);
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+15))));
w1(U+5,u8((r4(U+15))==(u32(0x0ull))));
w4(U+6,u32(u32(r4(U+15))-u32(u32(0x1ull))));
w4(U+10,shl<u32>(r4(U+19),u64(r4(U+6))));
w1(U+14,u8(s32(r4(U+10))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+5),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+5))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+14))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B41f870:{NFSU2_TR(0x41f870);
u8 U[16];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B41f877:{NFSU2_TR(0x41f877);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41f87b:{NFSU2_TR(0x41f87b);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41f87f:{NFSU2_TR(0x41f87f);
u8 U[16];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B41f886:{NFSU2_TR(0x41f886);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41f88c:{NFSU2_TR(0x41f88c);
u8 U[23];
w4(U+15,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
__builtin_memmove((U+19),(R+8),4);
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+15))));
w1(U+5,u8((r4(U+15))==(u32(0x0ull))));
w4(U+6,u32(u32(r4(U+15))-u32(u32(0x1ull))));
w4(U+10,shl<u32>(r4(U+19),u64(r4(U+6))));
w1(U+14,u8(s32(r4(U+10))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+5),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+5))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+14))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B41f88f:{NFSU2_TR(0x41f88f);
u8 U[16];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B41f896:{NFSU2_TR(0x41f896);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41f89c:{NFSU2_TR(0x41f89c);
u8 U[23];
w4(U+15,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
__builtin_memmove((U+19),(R+4),4);
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+15))));
w1(U+5,u8((r4(U+15))==(u32(0x0ull))));
w4(U+6,u32(u32(r4(U+15))-u32(u32(0x1ull))));
w4(U+10,shl<u32>(r4(U+19),u64(r4(U+6))));
w1(U+14,u8(s32(r4(U+10))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+5),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+5))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+14))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B41f89f:{NFSU2_TR(0x41f89f);
u8 U[12];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B41f8a6:{NFSU2_TR(0x41f8a6);
w4(R+4,u32(0x8ull));
}
B41f8ab:{NFSU2_TR(0x41f8ab);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B41f8b2:L41f8b2:{c.instructions+=1;NFSU2_TR(0x41f8b2);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L41f8b4;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41f8b2u);}goto L41f8b2;}
}
B41f8b4:L41f8b4:{c.instructions+=7;NFSU2_TR(0x41f8b4);
u8 U[14];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
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
B41f8ba:{NFSU2_TR(0x41f8ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41f8bb:{NFSU2_TR(0x41f8bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41f8bc:{NFSU2_TR(0x41f8bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41f8bd:{NFSU2_TR(0x41f8bd);
__builtin_memmove((R+16),(R+20),4);
}
B41f8bf:{NFSU2_TR(0x41f8bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41f8c0:{NFSU2_TR(0x41f8c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41f8c3:L41f8c3:{c.instructions+=5;NFSU2_TR(0x41f8c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41f8c6:{NFSU2_TR(0x41f8c6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f8c8:{NFSU2_TR(0x41f8c8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f8c9:{NFSU2_TR(0x41f8c9);
__builtin_memmove((R+4),(R+12),4);
}
B41f8cb:{NFSU2_TR(0x41f8cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41f8d0ull));
TAIL_STATIC(0x41a090u,41a);
}
B41f8d0:L41f8d0:{c.instructions+=6;NFSU2_TR(0x41f8d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41f8d1:{NFSU2_TR(0x41f8d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41f8d2:{NFSU2_TR(0x41f8d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41f8d3:{NFSU2_TR(0x41f8d3);
__builtin_memmove((R+16),(R+20),4);
}
B41f8d5:{NFSU2_TR(0x41f8d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41f8d6:{NFSU2_TR(0x41f8d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41f8e0:L41f8e0:{c.instructions+=14;NFSU2_TR(0x41f8e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f8e1:{NFSU2_TR(0x41f8e1);
__builtin_memmove((R+20),(R+16),4);
}
B41f8e3:{NFSU2_TR(0x41f8e3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B41f8e6:{NFSU2_TR(0x41f8e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x64ull))));
}
B41f8e9:{NFSU2_TR(0x41f8e9);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41f8ec:{NFSU2_TR(0x41f8ec);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f8ed:{NFSU2_TR(0x41f8ed);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41f8f3:{NFSU2_TR(0x41f8f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f8f4:{NFSU2_TR(0x41f8f4);
__builtin_memmove((R+8),(R+4),4);
}
B41f8f6:{NFSU2_TR(0x41f8f6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41f8f7:{NFSU2_TR(0x41f8f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f8fb:{NFSU2_TR(0x41f8fb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41f8fd:{NFSU2_TR(0x41f8fd);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41f900:{NFSU2_TR(0x41f900);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41f90a;}}
}
B41f902:L41f902:{c.instructions+=3;NFSU2_TR(0x41f902);
w1(R+0,u8(0x1ull));
}
B41f904:{NFSU2_TR(0x41f904);
u8 U[5];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41f908:{NFSU2_TR(0x41f908);
{goto L41f913;}
}
B41f90a:L41f90a:{c.instructions+=2;NFSU2_TR(0x41f90a);
u8 U[5];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41f90f:{NFSU2_TR(0x41f90f);
u8 U[5];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41f913:L41f913:{c.instructions+=10;NFSU2_TR(0x41f913);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41f916:{NFSU2_TR(0x41f916);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B41f919:{NFSU2_TR(0x41f919);
{u32 ea_=u32(r4(R+8)+r4(R+4)+u32(304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41f920:{NFSU2_TR(0x41f920);
u8 U[13];
w4(U+0,u32(u32(u32(0x148ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+12,u32(s32(s8(r1(U+12)))));
}
B41f928:{NFSU2_TR(0x41f928);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B41f92b:{NFSU2_TR(0x41f92b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x151ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B41f931:{NFSU2_TR(0x41f931);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41f933:{NFSU2_TR(0x41f933);
u8 U[6];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+5,u8(!(r1(R+518))));
__builtin_memmove((U+4),(U+5),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41f938:{NFSU2_TR(0x41f938);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41f93a:{NFSU2_TR(0x41f93a);
if(r1(R+518)){{goto L41f943;}}
}
B41f93c:L41f93c:{c.instructions+=3;NFSU2_TR(0x41f93c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B41f93d:{NFSU2_TR(0x41f93d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f941:{NFSU2_TR(0x41f941);
{goto L41f947;}
}
B41f943:L41f943:{c.instructions+=1;NFSU2_TR(0x41f943);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f947:L41f947:{c.instructions+=10;NFSU2_TR(0x41f947);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41f94a:{NFSU2_TR(0x41f94a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+28),(U+0),4);
}
B41f94d:{NFSU2_TR(0x41f94d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B41f94f:{NFSU2_TR(0x41f94f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41f951:{NFSU2_TR(0x41f951);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+4),(U+1),1);
}
B41f954:{NFSU2_TR(0x41f954);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f958:{NFSU2_TR(0x41f958);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B41f959:{NFSU2_TR(0x41f959);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+12))));
}
B41f95b:{NFSU2_TR(0x41f95b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41f95d:{NFSU2_TR(0x41f95d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41f961;}}
}
B41f95f:L41f95f:{c.instructions+=1;NFSU2_TR(0x41f95f);
__builtin_memmove((R+4),(R+28),4);
}
B41f961:L41f961:{c.instructions+=2;NFSU2_TR(0x41f961);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B41f963:{NFSU2_TR(0x41f963);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41fd44;}}
}
B41f969:L41f969:{c.instructions+=16;NFSU2_TR(0x41f969);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41f96c:{NFSU2_TR(0x41f96c);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B41f970:{NFSU2_TR(0x41f970);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B41f972:{NFSU2_TR(0x41f972);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B41f976:{NFSU2_TR(0x41f976);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41f978:{NFSU2_TR(0x41f978);
__builtin_memmove((R+4),(R+12),4);
}
B41f97a:{NFSU2_TR(0x41f97a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41f97e:{NFSU2_TR(0x41f97e);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41f981:{NFSU2_TR(0x41f981);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41f987:{NFSU2_TR(0x41f987);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B41f989:{NFSU2_TR(0x41f989);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41f98d:{NFSU2_TR(0x41f98d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41f98f:{NFSU2_TR(0x41f98f);
{u32 ea_=u32(r4(R+28)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41f992:{NFSU2_TR(0x41f992);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41f996:{NFSU2_TR(0x41f996);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41f998:{NFSU2_TR(0x41f998);
if(r1(R+518)){{goto L41fa3b;}}
}
B41f99e:L41f99e:{c.instructions+=2;NFSU2_TR(0x41f99e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41f9a1:{NFSU2_TR(0x41f9a1);
if(r1(R+514)){{goto L41f9be;}}
}
B41f9a3:L41f9a3:{c.instructions+=2;NFSU2_TR(0x41f9a3);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B41f9a7:{NFSU2_TR(0x41f9a7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41f9be;}}
}
B41f9a9:L41f9a9:{c.instructions+=8;NFSU2_TR(0x41f9a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41f9ac:{NFSU2_TR(0x41f9ac);
{u32 ea_=u32(r4(R+28)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41f9af:{NFSU2_TR(0x41f9af);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B41f9b2:{NFSU2_TR(0x41f9b2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41f9b6:{NFSU2_TR(0x41f9b6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B41f9b7:{NFSU2_TR(0x41f9b7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41f9b9:{NFSU2_TR(0x41f9b9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41f9bc:{NFSU2_TR(0x41f9bc);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41f9a3u);}goto L41f9a3;}}
}
B41f9be:L41f9be:{c.instructions+=7;NFSU2_TR(0x41f9be);
{u32 ea_=u32(r4(R+28)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41f9c1:{NFSU2_TR(0x41f9c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f9c5:{NFSU2_TR(0x41f9c5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41f9c9:{NFSU2_TR(0x41f9c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f9cd:{NFSU2_TR(0x41f9cd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41f9cf:{NFSU2_TR(0x41f9cf);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41f9d2:{NFSU2_TR(0x41f9d2);
if(r1(R+514)){{goto L41fa0a;}}
}
B41f9d4:L41f9d4:{c.instructions+=3;NFSU2_TR(0x41f9d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41f9d8:{NFSU2_TR(0x41f9d8);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B41f9dc:{NFSU2_TR(0x41f9dc);
__builtin_memmove((R+16),(R+16),4);
}
B41f9e0:L41f9e0:{c.instructions+=3;NFSU2_TR(0x41f9e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41f9e4:{NFSU2_TR(0x41f9e4);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B41f9e8:{NFSU2_TR(0x41f9e8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41fa0e;}}
}
B41f9ea:L41f9ea:{c.instructions+=11;NFSU2_TR(0x41f9ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41f9ee:{NFSU2_TR(0x41f9ee);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B41f9ef:{NFSU2_TR(0x41f9ef);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B41f9f2:{NFSU2_TR(0x41f9f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f9f6:{NFSU2_TR(0x41f9f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41f9f8:{NFSU2_TR(0x41f9f8);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41f9fb:{NFSU2_TR(0x41f9fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41f9ff:{NFSU2_TR(0x41f9ff);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41fa03:{NFSU2_TR(0x41fa03);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41fa05:{NFSU2_TR(0x41fa05);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41fa08:{NFSU2_TR(0x41fa08);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41f9e0u);}goto L41f9e0;}}
}
B41fa0a:L41fa0a:{c.instructions+=1;NFSU2_TR(0x41fa0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41fa0e:L41fa0e:{c.instructions+=5;NFSU2_TR(0x41fa0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B41fa11:{NFSU2_TR(0x41fa11);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41fa13:{NFSU2_TR(0x41fa13);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41fa17:{NFSU2_TR(0x41fa17);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41fa1b:{NFSU2_TR(0x41fa1b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L41fa21;}}
}
B41fa1d:L41fa1d:{c.instructions+=1;NFSU2_TR(0x41fa1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41fa21:L41fa21:{c.instructions+=5;NFSU2_TR(0x41fa21);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B41fa25:{NFSU2_TR(0x41fa25);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41fa29:{NFSU2_TR(0x41fa29);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B41fa2a:{NFSU2_TR(0x41fa2a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41fa2c:{NFSU2_TR(0x41fa2c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L41faac;}}
}
B41fa32:L41fa32:{c.instructions+=2;NFSU2_TR(0x41fa32);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41fa36:{NFSU2_TR(0x41fa36);
{goto L41fab0;}
}
B41fa3b:L41fa3b:{c.instructions+=2;NFSU2_TR(0x41fa3b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41fa3e:{NFSU2_TR(0x41fa3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41fa59;}}
}
B41fa40:L41fa40:{c.instructions+=2;NFSU2_TR(0x41fa40);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41fa42:{NFSU2_TR(0x41fa42);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L41fa59;}}
}
B41fa44:L41fa44:{c.instructions+=8;NFSU2_TR(0x41fa44);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41fa47:{NFSU2_TR(0x41fa47);
{u32 ea_=u32(r4(R+28)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41fa4a:{NFSU2_TR(0x41fa4a);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x4ull))));
}
B41fa4d:{NFSU2_TR(0x41fa4d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41fa51:{NFSU2_TR(0x41fa51);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B41fa52:{NFSU2_TR(0x41fa52);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41fa54:{NFSU2_TR(0x41fa54);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41fa57:{NFSU2_TR(0x41fa57);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41fa40u);}goto L41fa40;}}
}
B41fa59:L41fa59:{c.instructions+=7;NFSU2_TR(0x41fa59);
{u32 ea_=u32(r4(R+28)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41fa5c:{NFSU2_TR(0x41fa5c);
__builtin_memmove((R+8),(R+4),4);
}
B41fa5e:{NFSU2_TR(0x41fa5e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41fa62:{NFSU2_TR(0x41fa62);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41fa66:{NFSU2_TR(0x41fa66);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41fa68:{NFSU2_TR(0x41fa68);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41fa6b:{NFSU2_TR(0x41fa6b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41fa96;}}
}
B41fa6d:L41fa6d:{c.instructions+=2;NFSU2_TR(0x41fa6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41fa71:{NFSU2_TR(0x41fa71);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B41fa75:L41fa75:{c.instructions+=2;NFSU2_TR(0x41fa75);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41fa77:{NFSU2_TR(0x41fa77);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L41fa92;}}
}
B41fa79:L41fa79:{c.instructions+=9;NFSU2_TR(0x41fa79);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41fa7c:{NFSU2_TR(0x41fa7c);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41fa7f:{NFSU2_TR(0x41fa7f);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x4ull))));
}
B41fa82:{NFSU2_TR(0x41fa82);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41fa86:{NFSU2_TR(0x41fa86);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41fa8a:{NFSU2_TR(0x41fa8a);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B41fa8b:{NFSU2_TR(0x41fa8b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41fa8d:{NFSU2_TR(0x41fa8d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41fa90:{NFSU2_TR(0x41fa90);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41fa75u);}goto L41fa75;}}
}
B41fa92:L41fa92:{c.instructions+=1;NFSU2_TR(0x41fa92);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B41fa96:L41fa96:{c.instructions+=3;NFSU2_TR(0x41fa96);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B41fa97:{NFSU2_TR(0x41fa97);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41fa99:{NFSU2_TR(0x41fa99);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41fa9d;}}
}
B41fa9b:L41fa9b:{c.instructions+=1;NFSU2_TR(0x41fa9b);
__builtin_memmove((R+8),(R+4),4);
}
B41fa9d:L41fa9d:{c.instructions+=4;NFSU2_TR(0x41fa9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41faa1:{NFSU2_TR(0x41faa1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B41faa2:{NFSU2_TR(0x41faa2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41faa4:{NFSU2_TR(0x41faa4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41faa8;}}
}
B41faa6:L41faa6:{c.instructions+=1;NFSU2_TR(0x41faa6);
__builtin_memmove((R+4),(R+12),4);
}
B41faa8:L41faa8:{c.instructions+=1;NFSU2_TR(0x41faa8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41faac:L41faac:{c.instructions+=1;NFSU2_TR(0x41faac);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41fab0:L41fab0:{c.instructions+=8;NFSU2_TR(0x41fab0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B41fab2:{NFSU2_TR(0x41fab2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41fab4:{NFSU2_TR(0x41fab4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+12),(U+1),1);
}
B41fab7:{NFSU2_TR(0x41fab7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41fabb:{NFSU2_TR(0x41fabb);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B41fabc:{NFSU2_TR(0x41fabc);
w4(R+12,u32(u32(r4(R+12))&u32(r4(R+8))));
}
B41fabe:{NFSU2_TR(0x41fabe);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41fac0:{NFSU2_TR(0x41fac0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41fac6;}}
}
B41fac2:L41fac2:{c.instructions+=1;NFSU2_TR(0x41fac2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41fac6:L41fac6:{c.instructions+=9;NFSU2_TR(0x41fac6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41faca:{NFSU2_TR(0x41faca);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B41facc:{NFSU2_TR(0x41facc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41face:{NFSU2_TR(0x41face);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+12),(U+1),1);
}
B41fad1:{NFSU2_TR(0x41fad1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41fad5:{NFSU2_TR(0x41fad5);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B41fad6:{NFSU2_TR(0x41fad6);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+12))));
}
B41fad8:{NFSU2_TR(0x41fad8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41fada:{NFSU2_TR(0x41fada);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41fae0;}}
}
B41fadc:L41fadc:{c.instructions+=1;NFSU2_TR(0x41fadc);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41fae0:L41fae0:{c.instructions+=8;NFSU2_TR(0x41fae0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B41fae2:{NFSU2_TR(0x41fae2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41fae4:{NFSU2_TR(0x41fae4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+8),(U+1),1);
}
B41fae7:{NFSU2_TR(0x41fae7);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41faeb:{NFSU2_TR(0x41faeb);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B41faec:{NFSU2_TR(0x41faec);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+4))));
}
B41faee:{NFSU2_TR(0x41faee);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41faf0:{NFSU2_TR(0x41faf0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41faf6;}}
}
B41faf2:L41faf2:{c.instructions+=1;NFSU2_TR(0x41faf2);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41faf6:L41faf6:{c.instructions+=8;NFSU2_TR(0x41faf6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41fafa:{NFSU2_TR(0x41fafa);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B41fafc:{NFSU2_TR(0x41fafc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41fafe:{NFSU2_TR(0x41fafe);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+12),(U+1),1);
}
B41fb01:{NFSU2_TR(0x41fb01);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B41fb02:{NFSU2_TR(0x41fb02);
w4(R+12,u32(u32(r4(R+12))&u32(r4(R+4))));
}
B41fb04:{NFSU2_TR(0x41fb04);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41fb06:{NFSU2_TR(0x41fb06);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41fb0a;}}
}
B41fb08:L41fb08:{c.instructions+=1;NFSU2_TR(0x41fb08);
__builtin_memmove((R+12),(R+0),4);
}
B41fb0a:L41fb0a:{c.instructions+=3;NFSU2_TR(0x41fb0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41fb0d:{NFSU2_TR(0x41fb0d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41fb10:{NFSU2_TR(0x41fb10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41fcf2;}}
}
B41fb16:L41fb16:{c.instructions+=6;NFSU2_TR(0x41fb16);
u8 U[4];
w4(U+0,u32(0x502fd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fb1b:{NFSU2_TR(0x41fb1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fb1c:{NFSU2_TR(0x41fb1c);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fb1e:{NFSU2_TR(0x41fb1e);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41fb22:{NFSU2_TR(0x41fb22);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fb23:{NFSU2_TR(0x41fb23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41fb28ull));
TAIL_STATIC(0x401650u,401);
}
B41fb28:L41fb28:{c.instructions+=6;NFSU2_TR(0x41fb28);
u8 U[4];
w4(U+0,u32(0x502fd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fb2d:{NFSU2_TR(0x41fb2d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fb2f:{NFSU2_TR(0x41fb2f);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fb31:{NFSU2_TR(0x41fb31);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B41fb35:{NFSU2_TR(0x41fb35);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fb36:{NFSU2_TR(0x41fb36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41fb3bull));
TAIL_STATIC(0x401650u,401);
}
B41fb3b:L41fb3b:{c.instructions+=4;NFSU2_TR(0x41fb3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41fb3e:{NFSU2_TR(0x41fb3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41fb41:{NFSU2_TR(0x41fb41);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B41fb44:{NFSU2_TR(0x41fb44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41fb49ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B41fb49:L41fb49:{c.instructions+=7;NFSU2_TR(0x41fb49);
{u32 ea_=u32(u32(7879836u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41fb4f:{NFSU2_TR(0x41fb4f);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41fb53:{NFSU2_TR(0x41fb53);
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
B41fb55:{NFSU2_TR(0x41fb55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41fb57:{NFSU2_TR(0x41fb57);
__builtin_memmove((R+4),(R+28),4);
}
B41fb59:{NFSU2_TR(0x41fb59);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fb5b:{NFSU2_TR(0x41fb5b);
if(r1(R+518)){{goto L41fc61;}}
}
B41fb61:L41fb61:{c.instructions+=3;NFSU2_TR(0x41fb61);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41fb64:{NFSU2_TR(0x41fb64);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41fb68:{NFSU2_TR(0x41fb68);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41fb6bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41fb6b:L41fb6b:{c.instructions+=5;NFSU2_TR(0x41fb6b);
{u32 ea_=u32(u32(7879832u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41fb71:{NFSU2_TR(0x41fb71);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B41fb75:{NFSU2_TR(0x41fb75);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41fb77:{NFSU2_TR(0x41fb77);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41fb7a:{NFSU2_TR(0x41fb7a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L41fc82;}}
}
B41fb80:L41fb80:{c.instructions+=3;NFSU2_TR(0x41fb80);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41fb84:{NFSU2_TR(0x41fb84);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41fb86:{NFSU2_TR(0x41fb86);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41fb8a:L41fb8a:{c.instructions+=9;NFSU2_TR(0x41fb8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41fb8e:{NFSU2_TR(0x41fb8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41fb92:{NFSU2_TR(0x41fb92);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fb94:{NFSU2_TR(0x41fb94);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fb95:{NFSU2_TR(0x41fb95);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fb96:{NFSU2_TR(0x41fb96);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41fb9a:{NFSU2_TR(0x41fb9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fb9b:{NFSU2_TR(0x41fb9b);
__builtin_memmove((R+4),(R+28),4);
}
B41fb9d:{NFSU2_TR(0x41fb9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41fba2ull));
TAIL_STATIC(0x4122c0u,412);
}
B41fba2:L41fba2:{c.instructions+=15;NFSU2_TR(0x41fba2);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41fba6:{NFSU2_TR(0x41fba6);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41fbaa:{NFSU2_TR(0x41fbaa);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41fbae:{NFSU2_TR(0x41fbae);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41fbb2:{NFSU2_TR(0x41fbb2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41fbb6:{NFSU2_TR(0x41fbb6);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41fbb9:{NFSU2_TR(0x41fbb9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fbbb:{NFSU2_TR(0x41fbbb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fbbc:{NFSU2_TR(0x41fbbc);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B41fbbe:{NFSU2_TR(0x41fbbe);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41fbc2:{NFSU2_TR(0x41fbc2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41fbc5:{NFSU2_TR(0x41fbc5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fbc6:{NFSU2_TR(0x41fbc6);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B41fbca:{NFSU2_TR(0x41fbca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fbcb:{NFSU2_TR(0x41fbcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41fbd0ull));
TAIL_STATIC(0x4122c0u,412);
}
B41fbd0:L41fbd0:{c.instructions+=11;NFSU2_TR(0x41fbd0);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41fbd4:{NFSU2_TR(0x41fbd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41fbd8:{NFSU2_TR(0x41fbd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41fbdc:{NFSU2_TR(0x41fbdc);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41fbe0:{NFSU2_TR(0x41fbe0);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41fbe4:{NFSU2_TR(0x41fbe4);
u8 U[5];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41fbe8:{NFSU2_TR(0x41fbe8);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41fbec:{NFSU2_TR(0x41fbec);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41fbf0:{NFSU2_TR(0x41fbf0);
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
B41fbf2:{NFSU2_TR(0x41fbf2);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41fbf6:{NFSU2_TR(0x41fbf6);
if(r1(R+518)){{goto L41fc8b;}}
}
B41fbfc:L41fbfc:{c.instructions+=24;NFSU2_TR(0x41fbfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41fc02:{NFSU2_TR(0x41fc02);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41fc06:{NFSU2_TR(0x41fc06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41fc0c:{NFSU2_TR(0x41fc0c);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B41fc10:{NFSU2_TR(0x41fc10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41fc16:{NFSU2_TR(0x41fc16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41fc19:{NFSU2_TR(0x41fc19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41fc1f:{NFSU2_TR(0x41fc1f);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B41fc23:{NFSU2_TR(0x41fc23);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14bull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41fc29:{NFSU2_TR(0x41fc29);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B41fc2d:{NFSU2_TR(0x41fc2d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41fc33:{NFSU2_TR(0x41fc33);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41fc37:{NFSU2_TR(0x41fc37);
u8 U[45];
w4(U+37,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
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
B41fc3a:{NFSU2_TR(0x41fc3a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14full))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41fc40:{NFSU2_TR(0x41fc40);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41fc46:{NFSU2_TR(0x41fc46);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41fc4d:{NFSU2_TR(0x41fc4d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41fc51:{NFSU2_TR(0x41fc51);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41fc58:{NFSU2_TR(0x41fc58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41fc59:{NFSU2_TR(0x41fc59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41fc5a:{NFSU2_TR(0x41fc5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41fc5b:{NFSU2_TR(0x41fc5b);
__builtin_memmove((R+16),(R+20),4);
}
B41fc5d:{NFSU2_TR(0x41fc5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41fc5e:{NFSU2_TR(0x41fc5e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41fc61:L41fc61:{c.instructions+=4;NFSU2_TR(0x41fc61);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B41fc63:{NFSU2_TR(0x41fc63);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41fc66:{NFSU2_TR(0x41fc66);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41fc6a:{NFSU2_TR(0x41fc6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41fc6dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41fc6d:L41fc6d:{c.instructions+=5;NFSU2_TR(0x41fc6d);
{u32 ea_=u32(u32(7879832u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41fc73:{NFSU2_TR(0x41fc73);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B41fc77:{NFSU2_TR(0x41fc77);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41fc79:{NFSU2_TR(0x41fc79);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41fc7c:{NFSU2_TR(0x41fc7c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41fb80u);}goto L41fb80;}}
}
B41fc82:L41fc82:{c.instructions+=2;NFSU2_TR(0x41fc82);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41fc86:{NFSU2_TR(0x41fc86);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41fb8au);}goto L41fb8a;}
}
B41fc8b:L41fc8b:{c.instructions+=26;NFSU2_TR(0x41fc8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41fc91:{NFSU2_TR(0x41fc91);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41fc95:{NFSU2_TR(0x41fc95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41fc9b:{NFSU2_TR(0x41fc9b);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41fc9f:{NFSU2_TR(0x41fc9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41fca5:{NFSU2_TR(0x41fca5);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B41fca9:{NFSU2_TR(0x41fca9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41fcaf:{NFSU2_TR(0x41fcaf);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B41fcb3:{NFSU2_TR(0x41fcb3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x149ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41fcb9:{NFSU2_TR(0x41fcb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41fcbc:{NFSU2_TR(0x41fcbc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14aull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41fcc2:{NFSU2_TR(0x41fcc2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14dull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41fcc8:{NFSU2_TR(0x41fcc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41fccc:{NFSU2_TR(0x41fccc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((R+8),(U+0),4);
}
B41fccf:{NFSU2_TR(0x41fccf);
u8 U[45];
w4(U+37,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
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
B41fcd2:{NFSU2_TR(0x41fcd2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14eull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41fcd8:{NFSU2_TR(0x41fcd8);
{u32 ea_=u32(r4(R+4)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41fcdb:{NFSU2_TR(0x41fcdb);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41fcdf:{NFSU2_TR(0x41fcdf);
u8 U[45];
w4(U+37,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
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
B41fce2:{NFSU2_TR(0x41fce2);
{u32 ea_=u32(r4(R+4)+r4(R+0)+u32(252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41fce9:{NFSU2_TR(0x41fce9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41fcea:{NFSU2_TR(0x41fcea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41fceb:{NFSU2_TR(0x41fceb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41fcec:{NFSU2_TR(0x41fcec);
__builtin_memmove((R+16),(R+20),4);
}
B41fcee:{NFSU2_TR(0x41fcee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41fcef:{NFSU2_TR(0x41fcef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41fcf2:L41fcf2:{c.instructions+=2;NFSU2_TR(0x41fcf2);
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
B41fcf5:{NFSU2_TR(0x41fcf5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41fd46;}}
}
B41fcf7:L41fcf7:{c.instructions+=6;NFSU2_TR(0x41fcf7);
u8 U[4];
w4(U+0,u32(0x502fd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fcfc:{NFSU2_TR(0x41fcfc);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fcfe:{NFSU2_TR(0x41fcfe);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fd00:{NFSU2_TR(0x41fd00);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41fd04:{NFSU2_TR(0x41fd04);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fd05:{NFSU2_TR(0x41fd05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41fd0aull));
TAIL_STATIC(0x401650u,401);
}
B41fd0a:L41fd0a:{c.instructions+=2;NFSU2_TR(0x41fd0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41fd0e:{NFSU2_TR(0x41fd0e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B41fd10:L41fd10:{c.instructions+=8;NFSU2_TR(0x41fd10);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41fd13:{NFSU2_TR(0x41fd13);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fd14:{NFSU2_TR(0x41fd14);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41fd18:{NFSU2_TR(0x41fd18);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fd1a:{NFSU2_TR(0x41fd1a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fd1b:{NFSU2_TR(0x41fd1b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B41fd1f:{NFSU2_TR(0x41fd1f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fd20:{NFSU2_TR(0x41fd20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41fd25ull));
TAIL_STATIC(0x4122c0u,412);
}
B41fd25:L41fd25:{c.instructions+=7;NFSU2_TR(0x41fd25);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41fd29:{NFSU2_TR(0x41fd29);
{u32 ea_=u32((r4(R+24)*8u)+r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41fd2d:{NFSU2_TR(0x41fd2d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B41fd2e:{NFSU2_TR(0x41fd2e);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B41fd31:{NFSU2_TR(0x41fd31);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41fd35:{NFSU2_TR(0x41fd35);
{u32 ea_=u32((r4(R+24)*8u)+r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41fd39:{NFSU2_TR(0x41fd39);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41fd10u);}goto L41fd10;}}
}
B41fd3b:L41fd3b:{c.instructions+=6;NFSU2_TR(0x41fd3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41fd3c:{NFSU2_TR(0x41fd3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41fd3d:{NFSU2_TR(0x41fd3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41fd3e:{NFSU2_TR(0x41fd3e);
__builtin_memmove((R+16),(R+20),4);
}
B41fd40:{NFSU2_TR(0x41fd40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41fd41:{NFSU2_TR(0x41fd41);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41fd44:L41fd44:{c.instructions+=1;NFSU2_TR(0x41fd44);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41fd46:L41fd46:{c.instructions+=6;NFSU2_TR(0x41fd46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41fd47:{NFSU2_TR(0x41fd47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41fd48:{NFSU2_TR(0x41fd48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41fd49:{NFSU2_TR(0x41fd49);
__builtin_memmove((R+16),(R+20),4);
}
B41fd4b:{NFSU2_TR(0x41fd4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41fd4c:{NFSU2_TR(0x41fd4c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41fd50:L41fd50:{c.instructions+=6;NFSU2_TR(0x41fd50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B41fd53:{NFSU2_TR(0x41fd53);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fd54:{NFSU2_TR(0x41fd54);
__builtin_memmove((R+20),(R+4),4);
}
B41fd56:{NFSU2_TR(0x41fd56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41fd59:{NFSU2_TR(0x41fd59);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41fd5b:{NFSU2_TR(0x41fd5b);
if(r1(R+518)){TAIL_STATIC(0x420025u,420);}
}
B41fd61:L41fd61:{c.instructions+=7;NFSU2_TR(0x41fd61);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fd62:{NFSU2_TR(0x41fd62);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fd63:{NFSU2_TR(0x41fd63);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B41fd67:{NFSU2_TR(0x41fd67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41fd6a:{NFSU2_TR(0x41fd6a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fd6b:{NFSU2_TR(0x41fd6b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B41fd6e:{NFSU2_TR(0x41fd6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41fd73ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B41fd73:L41fd73:{c.instructions+=2;NFSU2_TR(0x41fd73);
__builtin_memmove((R+4),(R+24),4);
}
B41fd75:{NFSU2_TR(0x41fd75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41fd7aull));
TAIL_STATIC(0x401890u,401);
}
B41fd7a:L41fd7a:{c.instructions+=8;NFSU2_TR(0x41fd7a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fd7c:{NFSU2_TR(0x41fd7c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fd7e:{NFSU2_TR(0x41fd7e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fd80:{NFSU2_TR(0x41fd80);
__builtin_memmove((R+24),(R+0),4);
}
B41fd82:{NFSU2_TR(0x41fd82);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fd84:{NFSU2_TR(0x41fd84);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fd85:{NFSU2_TR(0x41fd85);
__builtin_memmove((R+4),(R+20),4);
}
B41fd87:{NFSU2_TR(0x41fd87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41fd8cull));
TAIL_STATIC(0x4198c0u,419);
}
B41fd8c:L41fd8c:{c.instructions+=2;NFSU2_TR(0x41fd8c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41fd8f:{NFSU2_TR(0x41fd8f);
if(r1(R+518)){{goto L41fda6;}}
}
B41fd91:L41fd91:{c.instructions+=5;NFSU2_TR(0x41fd91);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fd96:{NFSU2_TR(0x41fd96);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fd97:{NFSU2_TR(0x41fd97);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fd99:{NFSU2_TR(0x41fd99);
__builtin_memmove((R+4),(R+20),4);
}
B41fd9b:{NFSU2_TR(0x41fd9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41fda0ull));
TAIL_STATIC(0x419e10u,419);
}
B41fda0:L41fda0:{c.instructions+=2;NFSU2_TR(0x41fda0);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41fda4:{NFSU2_TR(0x41fda4);
{goto L41fdce;}
}
B41fda6:L41fda6:{c.instructions+=3;NFSU2_TR(0x41fda6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41fda9:{NFSU2_TR(0x41fda9);
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
B41fdab:{NFSU2_TR(0x41fdab);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L41fdc6;}}
}
B41fdad:L41fdad:{c.instructions+=8;NFSU2_TR(0x41fdad);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fdaf:{NFSU2_TR(0x41fdaf);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41fdb3:{NFSU2_TR(0x41fdb3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fdb4:{NFSU2_TR(0x41fdb4);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41fdb8:{NFSU2_TR(0x41fdb8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fdb9:{NFSU2_TR(0x41fdb9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fdba:{NFSU2_TR(0x41fdba);
__builtin_memmove((R+4),(R+20),4);
}
B41fdbc:{NFSU2_TR(0x41fdbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41fdc1ull));
TAIL_STATIC(0x419b20u,419);
}
B41fdc1:L41fdc1:{c.instructions+=1;NFSU2_TR(0x41fdc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41fdc6ull));
TAIL_STATIC(0x43bd50u,43b);
}
B41fdc6:L41fdc6:{c.instructions+=1;NFSU2_TR(0x41fdc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41fdce:L41fdce:{c.instructions+=6;NFSU2_TR(0x41fdce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41fdd1:{NFSU2_TR(0x41fdd1);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B41fdd5:{NFSU2_TR(0x41fdd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41fdd7:{NFSU2_TR(0x41fdd7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fdd9:{NFSU2_TR(0x41fdd9);
__builtin_memmove((R+4),(R+24),4);
}
B41fddb:{NFSU2_TR(0x41fddb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41fddeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41fdde:L41fdde:{c.instructions+=5;NFSU2_TR(0x41fdde);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41fde2:{NFSU2_TR(0x41fde2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41fde4:{NFSU2_TR(0x41fde4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fde6:{NFSU2_TR(0x41fde6);
__builtin_memmove((R+4),(R+24),4);
}
B41fde8:{NFSU2_TR(0x41fde8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41fdebull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41fdeb:L41fdeb:{c.instructions+=6;NFSU2_TR(0x41fdeb);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41fdee:{NFSU2_TR(0x41fdee);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41fdf2:{NFSU2_TR(0x41fdf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41fdf5:{NFSU2_TR(0x41fdf5);
w4(R+12,u32(0x2ull));
}
B41fdfa:{NFSU2_TR(0x41fdfa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41fdfd:{NFSU2_TR(0x41fdfd);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41fe05:L41fe05:{c.instructions+=4;NFSU2_TR(0x41fe05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41fe07:{NFSU2_TR(0x41fe07);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fe08:{NFSU2_TR(0x41fe08);
__builtin_memmove((R+4),(R+24),4);
}
B41fe0a:{NFSU2_TR(0x41fe0a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41fe0dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41fe0d:L41fe0d:{c.instructions+=5;NFSU2_TR(0x41fe0d);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41fe11:{NFSU2_TR(0x41fe11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41fe13:{NFSU2_TR(0x41fe13);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fe14:{NFSU2_TR(0x41fe14);
__builtin_memmove((R+4),(R+24),4);
}
B41fe16:{NFSU2_TR(0x41fe16);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41fe19ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41fe19:L41fe19:{c.instructions+=9;NFSU2_TR(0x41fe19);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41fe1b:{NFSU2_TR(0x41fe1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41fe1f:{NFSU2_TR(0x41fe1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41fe23:{NFSU2_TR(0x41fe23);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41fe26:{NFSU2_TR(0x41fe26);
w1(R+512,carry<u32>(r4(R+28),u32(0x4ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B41fe29:{NFSU2_TR(0x41fe29);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B41fe2a:{NFSU2_TR(0x41fe2a);
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
B41fe2b:{NFSU2_TR(0x41fe2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41fe2f:{NFSU2_TR(0x41fe2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41fe05u);}goto L41fe05;}}
}
B41fe31:L41fe31:{c.instructions+=3;NFSU2_TR(0x41fe31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41fe34:{NFSU2_TR(0x41fe34);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B41fe37:{NFSU2_TR(0x41fe37);
if(r1(R+519)){TAIL_STATIC(0x420022u,420);}
}
B41fe3d:L41fe3d:{c.instructions+=5;NFSU2_TR(0x41fe3d);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B41fe41:{NFSU2_TR(0x41fe41);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B41fe42:{NFSU2_TR(0x41fe42);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41fe46:{NFSU2_TR(0x41fe46);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41fe4a:{NFSU2_TR(0x41fe4a);
{goto L41fe50;}
}
B41fe4c:L41fe4c:{c.instructions+=1;NFSU2_TR(0x41fe4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B41fe50:L41fe50:{c.instructions+=13;NFSU2_TR(0x41fe50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+28),(U+0),4);
}
B41fe53:{NFSU2_TR(0x41fe53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B41fe56:{NFSU2_TR(0x41fe56);
{u32 ea_=u32(r4(R+28)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41fe59:{NFSU2_TR(0x41fe59);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41fe5c:{NFSU2_TR(0x41fe5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41fe60:{NFSU2_TR(0x41fe60);
u8 U[5];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41fe65:{NFSU2_TR(0x41fe65);
{u32 ea_=u32(u32(7881568u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41fe6b:{NFSU2_TR(0x41fe6b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41fe6f:{NFSU2_TR(0x41fe6f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41fe73:{NFSU2_TR(0x41fe73);
{u32 ea_=u32(u32(7886048u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41fe79:{NFSU2_TR(0x41fe79);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41fe7b:{NFSU2_TR(0x41fe7b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41fe7e:{NFSU2_TR(0x41fe7e);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L41fe85;}}
}
B41fe80:L41fe80:{c.instructions+=1;NFSU2_TR(0x41fe80);
u8 U[5];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41fe85:L41fe85:{c.instructions+=5;NFSU2_TR(0x41fe85);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41fe89:{NFSU2_TR(0x41fe89);
{u32 ea_=u32(u32(7885672u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41fe8f:{NFSU2_TR(0x41fe8f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41fe91:{NFSU2_TR(0x41fe91);
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
B41fe94:{NFSU2_TR(0x41fe94);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41fe9a;}}
}
B41fe96:L41fe96:{c.instructions+=2;NFSU2_TR(0x41fe96);
w1(R+12,u8(0x1ull));
}
B41fe98:{NFSU2_TR(0x41fe98);
{goto L41fe9c;}
}
B41fe9a:L41fe9a:{c.instructions+=1;NFSU2_TR(0x41fe9a);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
w1(R+519,u8(s8(r1(R+12))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+12))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+12))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41fe9c:L41fe9c:{c.instructions+=4;NFSU2_TR(0x41fe9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41fe9e:{NFSU2_TR(0x41fe9e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fea0:{NFSU2_TR(0x41fea0);
__builtin_memmove((R+4),(R+24),4);
}
B41fea2:{NFSU2_TR(0x41fea2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41fea5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41fea5:L41fea5:{c.instructions+=5;NFSU2_TR(0x41fea5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41fea9:{NFSU2_TR(0x41fea9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41feab:{NFSU2_TR(0x41feab);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41fead:{NFSU2_TR(0x41fead);
__builtin_memmove((R+4),(R+24),4);
}
B41feaf:{NFSU2_TR(0x41feaf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41feb2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41feb2:L41feb2:{c.instructions+=11;NFSU2_TR(0x41feb2);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B41feb6:{NFSU2_TR(0x41feb6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41feba:{NFSU2_TR(0x41feba);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41febe:{NFSU2_TR(0x41febe);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41fec2:{NFSU2_TR(0x41fec2);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41fec6:{NFSU2_TR(0x41fec6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41feca:{NFSU2_TR(0x41feca);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41fece:{NFSU2_TR(0x41fece);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41fed4:{NFSU2_TR(0x41fed4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41fed6:{NFSU2_TR(0x41fed6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41fed9:{NFSU2_TR(0x41fed9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41fef4;}}
}
B41fedb:L41fedb:{c.instructions+=5;NFSU2_TR(0x41fedb);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41fedf:{NFSU2_TR(0x41fedf);
{u32 ea_=u32(u32(7881568u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41fee5:{NFSU2_TR(0x41fee5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41fee7:{NFSU2_TR(0x41fee7);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41feea:{NFSU2_TR(0x41feea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41fef4;}}
}
B41feec:L41feec:{c.instructions+=1;NFSU2_TR(0x41feec);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41fef4:L41fef4:{c.instructions+=5;NFSU2_TR(0x41fef4);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41fef8:{NFSU2_TR(0x41fef8);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41fefe:{NFSU2_TR(0x41fefe);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41ff00:{NFSU2_TR(0x41ff00);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41ff03:{NFSU2_TR(0x41ff03);
if(r1(R+514)){{goto L41ff1e;}}
}
B41ff05:L41ff05:{c.instructions+=5;NFSU2_TR(0x41ff05);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41ff09:{NFSU2_TR(0x41ff09);
{u32 ea_=u32(u32(7881568u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41ff0f:{NFSU2_TR(0x41ff0f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41ff11:{NFSU2_TR(0x41ff11);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41ff14:{NFSU2_TR(0x41ff14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41ff1e;}}
}
B41ff16:L41ff16:{c.instructions+=1;NFSU2_TR(0x41ff16);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41ff1e:L41ff1e:{c.instructions+=3;NFSU2_TR(0x41ff1e);
u8 U[5];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41ff22:{NFSU2_TR(0x41ff22);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41ff24:{NFSU2_TR(0x41ff24);
if(r1(R+518)){{goto L41ff34;}}
}
B41ff26:L41ff26:{c.instructions+=3;NFSU2_TR(0x41ff26);
{u32 ea_=u32(u32(7879848u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41ff2c:{NFSU2_TR(0x41ff2c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41ff30:{NFSU2_TR(0x41ff30);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41ff34:L41ff34:{c.instructions+=2;NFSU2_TR(0x41ff34);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41ff36:{NFSU2_TR(0x41ff36);
if(r1(R+518)){{goto L41ff44;}}
}
B41ff38:L41ff38:{c.instructions+=3;NFSU2_TR(0x41ff38);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41ff3a:{NFSU2_TR(0x41ff3a);
{u32 ea_=u32(u32(7879848u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41ff40:{NFSU2_TR(0x41ff40);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41ff44:L41ff44:{c.instructions+=8;NFSU2_TR(0x41ff44);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B41ff47:{NFSU2_TR(0x41ff47);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41ff4a:{NFSU2_TR(0x41ff4a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41ff4e:{NFSU2_TR(0x41ff4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ff52:{NFSU2_TR(0x41ff52);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B41ff54:{NFSU2_TR(0x41ff54);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41ff56:{NFSU2_TR(0x41ff56);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41ff59:{NFSU2_TR(0x41ff59);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41ff61;}}
}
B41ff5b:L41ff5b:{c.instructions+=2;NFSU2_TR(0x41ff5b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41ff5d:{NFSU2_TR(0x41ff5d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41ff61:L41ff61:{c.instructions+=8;NFSU2_TR(0x41ff61);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41ff64:{NFSU2_TR(0x41ff64);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41ff68:{NFSU2_TR(0x41ff68);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41ff6c:{NFSU2_TR(0x41ff6c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41ff70:{NFSU2_TR(0x41ff70);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B41ff72:{NFSU2_TR(0x41ff72);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41ff74:{NFSU2_TR(0x41ff74);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41ff77:{NFSU2_TR(0x41ff77);
if(r1(R+514)){{goto L41ff7f;}}
}
B41ff79:L41ff79:{c.instructions+=2;NFSU2_TR(0x41ff79);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41ff7b:{NFSU2_TR(0x41ff7b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41ff7f:L41ff7f:{c.instructions+=13;NFSU2_TR(0x41ff7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41ff83:{NFSU2_TR(0x41ff83);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41ff86:{NFSU2_TR(0x41ff86);
__builtin_memmove((R+0),(R+24),4);
}
B41ff88:{NFSU2_TR(0x41ff88);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1cull))));
}
B41ff8b:{NFSU2_TR(0x41ff8b);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B41ff8d:{NFSU2_TR(0x41ff8d);
w4(R+12,u32(0x2ull));
}
B41ff92:{NFSU2_TR(0x41ff92);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41ff95:{NFSU2_TR(0x41ff95);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ff99:{NFSU2_TR(0x41ff99);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41ffa1:{NFSU2_TR(0x41ffa1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41ffa3:{NFSU2_TR(0x41ffa3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ffa4:{NFSU2_TR(0x41ffa4);
__builtin_memmove((R+4),(R+24),4);
}
B41ffa6:{NFSU2_TR(0x41ffa6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ffa9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41ffa9:L41ffa9:{c.instructions+=5;NFSU2_TR(0x41ffa9);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41ffad:{NFSU2_TR(0x41ffad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41ffaf:{NFSU2_TR(0x41ffaf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ffb0:{NFSU2_TR(0x41ffb0);
__builtin_memmove((R+4),(R+24),4);
}
B41ffb2:{NFSU2_TR(0x41ffb2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ffb5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41ffb5:L41ffb5:{c.instructions+=9;NFSU2_TR(0x41ffb5);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41ffb9:{NFSU2_TR(0x41ffb9);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41ffbc:{NFSU2_TR(0x41ffbc);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41ffbe:{NFSU2_TR(0x41ffbe);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41ffc2:{NFSU2_TR(0x41ffc2);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41ffc6:{NFSU2_TR(0x41ffc6);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B41ffc8:{NFSU2_TR(0x41ffc8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41ffca:{NFSU2_TR(0x41ffca);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41ffcd:{NFSU2_TR(0x41ffcd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41ffd5;}}
}
B41ffcf:L41ffcf:{c.instructions+=2;NFSU2_TR(0x41ffcf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41ffd1:{NFSU2_TR(0x41ffd1);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41ffd5:L41ffd5:{c.instructions+=8;NFSU2_TR(0x41ffd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41ffd9:{NFSU2_TR(0x41ffd9);
{u32 ea_=u32(r4(R+28)+r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41ffdc:{NFSU2_TR(0x41ffdc);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41ffe0:{NFSU2_TR(0x41ffe0);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41ffe4:{NFSU2_TR(0x41ffe4);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B41ffe6:{NFSU2_TR(0x41ffe6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41ffe8:{NFSU2_TR(0x41ffe8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41ffeb:{NFSU2_TR(0x41ffeb);
if(r1(R+514)){{goto L41fff3;}}
}
B41ffed:L41ffed:{c.instructions+=2;NFSU2_TR(0x41ffed);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41ffef:{NFSU2_TR(0x41ffef);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41fff3:L41fff3:{c.instructions+=4;NFSU2_TR(0x41fff3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41fff7:{NFSU2_TR(0x41fff7);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41fffa:{NFSU2_TR(0x41fffa);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B41fffd:{NFSU2_TR(0x41fffd);
w1(R+512,carry<u32>(r4(R+20),u32(0x4ull)));
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
TAIL_STATIC(0x420000u,420);
}
XIT:NFSU2_TR_EXIT(0x41f,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
