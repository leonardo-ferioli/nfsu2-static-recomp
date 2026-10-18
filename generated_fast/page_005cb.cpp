#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_48a(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_491(u8* __restrict R,Cpu& c);
u32 body_494(u8* __restrict R,Cpu& c);
u32 body_566(u8* __restrict R,Cpu& c);
u32 body_5bb(u8* __restrict R,Cpu& c);
u32 body_5c2(u8* __restrict R,Cpu& c);
u32 body_5c5(u8* __restrict R,Cpu& c);
u32 body_5c6(u8* __restrict R,Cpu& c);
u32 body_5c7(u8* __restrict R,Cpu& c);
u32 body_5cc(u8* __restrict R,Cpu& c);
u32 body_5cf(u8* __restrict R,Cpu& c);
u32 body_5d6(u8* __restrict R,Cpu& c);
u32 body_5d7(u8* __restrict R,Cpu& c);
u32 body_5db(u8* __restrict R,Cpu& c);
u32 body_5dc(u8* __restrict R,Cpu& c);
u32 body_60f(u8* __restrict R,Cpu& c);
u32 body_611(u8* __restrict R,Cpu& c);
u32 body_614(u8* __restrict R,Cpu& c);
u32 body_61a(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_61d(u8* __restrict R,Cpu& c);
u32 body_61f(u8* __restrict R,Cpu& c);
u32 body_630(u8* __restrict R,Cpu& c);
u32 body_631(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5cb,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5cb,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5cb(u8* __restrict R,Cpu& c);
u32 page_5cb(Cpu& c){return body_5cb(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5cb(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5cb000:goto L5cb000;
case 0x5cb004:c.instructions+=2;goto B5cb004;
case 0x5cb005:c.instructions+=1;goto B5cb005;
case 0x5cb00a:goto L5cb00a;
case 0x5cb00c:c.instructions+=4;goto B5cb00c;
case 0x5cb00f:c.instructions+=3;goto B5cb00f;
case 0x5cb012:c.instructions+=2;goto B5cb012;
case 0x5cb014:c.instructions+=1;goto B5cb014;
case 0x5cb01a:goto L5cb01a;
case 0x5cb01d:c.instructions+=2;goto B5cb01d;
case 0x5cb020:c.instructions+=1;goto B5cb020;
case 0x5cb026:goto L5cb026;
case 0x5cb027:c.instructions+=3;goto B5cb027;
case 0x5cb028:c.instructions+=2;goto B5cb028;
case 0x5cb02d:c.instructions+=1;goto B5cb02d;
case 0x5cb032:goto L5cb032;
case 0x5cb038:c.instructions+=12;goto B5cb038;
case 0x5cb03e:c.instructions+=11;goto B5cb03e;
case 0x5cb044:c.instructions+=10;goto B5cb044;
case 0x5cb048:c.instructions+=9;goto B5cb048;
case 0x5cb04e:c.instructions+=8;goto B5cb04e;
case 0x5cb052:c.instructions+=7;goto B5cb052;
case 0x5cb058:c.instructions+=6;goto B5cb058;
case 0x5cb05e:c.instructions+=5;goto B5cb05e;
case 0x5cb062:c.instructions+=4;goto B5cb062;
case 0x5cb068:c.instructions+=3;goto B5cb068;
case 0x5cb06a:c.instructions+=2;goto B5cb06a;
case 0x5cb06d:c.instructions+=1;goto B5cb06d;
case 0x5cb06f:goto L5cb06f;
case 0x5cb077:goto L5cb077;
case 0x5cb07d:c.instructions+=9;goto B5cb07d;
case 0x5cb080:c.instructions+=8;goto B5cb080;
case 0x5cb083:c.instructions+=7;goto B5cb083;
case 0x5cb089:c.instructions+=6;goto B5cb089;
case 0x5cb08b:c.instructions+=5;goto B5cb08b;
case 0x5cb08f:c.instructions+=4;goto B5cb08f;
case 0x5cb090:c.instructions+=3;goto B5cb090;
case 0x5cb091:c.instructions+=2;goto B5cb091;
case 0x5cb092:c.instructions+=1;goto B5cb092;
case 0x5cb098:goto L5cb098;
case 0x5cb09e:c.instructions+=9;goto B5cb09e;
case 0x5cb0a1:c.instructions+=8;goto B5cb0a1;
case 0x5cb0a7:c.instructions+=7;goto B5cb0a7;
case 0x5cb0aa:c.instructions+=6;goto B5cb0aa;
case 0x5cb0b0:c.instructions+=5;goto B5cb0b0;
case 0x5cb0b2:c.instructions+=4;goto B5cb0b2;
case 0x5cb0b3:c.instructions+=3;goto B5cb0b3;
case 0x5cb0b4:c.instructions+=2;goto B5cb0b4;
case 0x5cb0b5:c.instructions+=1;goto B5cb0b5;
case 0x5cb0b8:goto L5cb0b8;
case 0x5cb0be:c.instructions+=13;goto B5cb0be;
case 0x5cb0c1:c.instructions+=12;goto B5cb0c1;
case 0x5cb0c7:c.instructions+=11;goto B5cb0c7;
case 0x5cb0c9:c.instructions+=10;goto B5cb0c9;
case 0x5cb0cf:c.instructions+=9;goto B5cb0cf;
case 0x5cb0d3:c.instructions+=8;goto B5cb0d3;
case 0x5cb0d5:c.instructions+=7;goto B5cb0d5;
case 0x5cb0d8:c.instructions+=6;goto B5cb0d8;
case 0x5cb0dd:c.instructions+=5;goto B5cb0dd;
case 0x5cb0df:c.instructions+=4;goto B5cb0df;
case 0x5cb0e3:c.instructions+=3;goto B5cb0e3;
case 0x5cb0e7:c.instructions+=2;goto B5cb0e7;
case 0x5cb0eb:c.instructions+=1;goto B5cb0eb;
case 0x5cb0ed:goto L5cb0ed;
case 0x5cb0f3:goto L5cb0f3;
case 0x5cb0f9:c.instructions+=1;goto B5cb0f9;
case 0x5cb0fe:goto L5cb0fe;
case 0x5cb101:c.instructions+=7;goto B5cb101;
case 0x5cb106:c.instructions+=6;goto B5cb106;
case 0x5cb10c:c.instructions+=5;goto B5cb10c;
case 0x5cb10f:c.instructions+=4;goto B5cb10f;
case 0x5cb111:c.instructions+=3;goto B5cb111;
case 0x5cb115:c.instructions+=2;goto B5cb115;
case 0x5cb119:c.instructions+=1;goto B5cb119;
case 0x5cb11b:goto L5cb11b;
case 0x5cb121:goto L5cb121;
case 0x5cb127:c.instructions+=2;goto B5cb127;
case 0x5cb12b:c.instructions+=1;goto B5cb12b;
case 0x5cb130:goto L5cb130;
case 0x5cb134:c.instructions+=9;goto B5cb134;
case 0x5cb139:c.instructions+=8;goto B5cb139;
case 0x5cb13b:c.instructions+=7;goto B5cb13b;
case 0x5cb13f:c.instructions+=6;goto B5cb13f;
case 0x5cb144:c.instructions+=5;goto B5cb144;
case 0x5cb147:c.instructions+=4;goto B5cb147;
case 0x5cb149:c.instructions+=3;goto B5cb149;
case 0x5cb14d:c.instructions+=2;goto B5cb14d;
case 0x5cb151:c.instructions+=1;goto B5cb151;
case 0x5cb153:goto L5cb153;
case 0x5cb159:goto L5cb159;
case 0x5cb15f:c.instructions+=2;goto B5cb15f;
case 0x5cb163:c.instructions+=1;goto B5cb163;
case 0x5cb168:goto L5cb168;
case 0x5cb16c:c.instructions+=10;goto B5cb16c;
case 0x5cb171:c.instructions+=9;goto B5cb171;
case 0x5cb173:c.instructions+=8;goto B5cb173;
case 0x5cb174:c.instructions+=7;goto B5cb174;
case 0x5cb17a:c.instructions+=6;goto B5cb17a;
case 0x5cb17d:c.instructions+=5;goto B5cb17d;
case 0x5cb183:c.instructions+=4;goto B5cb183;
case 0x5cb187:c.instructions+=3;goto B5cb187;
case 0x5cb188:c.instructions+=2;goto B5cb188;
case 0x5cb189:c.instructions+=1;goto B5cb189;
case 0x5cb18c:goto L5cb18c;
case 0x5cb18f:c.instructions+=1;goto B5cb18f;
case 0x5cb194:goto L5cb194;
case 0x5cb197:c.instructions+=7;goto B5cb197;
case 0x5cb19c:c.instructions+=6;goto B5cb19c;
case 0x5cb19e:c.instructions+=5;goto B5cb19e;
case 0x5cb19f:c.instructions+=4;goto B5cb19f;
case 0x5cb1a1:c.instructions+=3;goto B5cb1a1;
case 0x5cb1a2:c.instructions+=2;goto B5cb1a2;
case 0x5cb1a3:c.instructions+=1;goto B5cb1a3;
case 0x5cb1a9:goto L5cb1a9;
case 0x5cb1ac:c.instructions+=5;goto B5cb1ac;
case 0x5cb1b1:c.instructions+=4;goto B5cb1b1;
case 0x5cb1b3:c.instructions+=3;goto B5cb1b3;
case 0x5cb1b4:c.instructions+=2;goto B5cb1b4;
case 0x5cb1b5:c.instructions+=1;goto B5cb1b5;
case 0x5cb1bb:goto L5cb1bb;
case 0x5cb1be:c.instructions+=13;goto B5cb1be;
case 0x5cb1c1:c.instructions+=12;goto B5cb1c1;
case 0x5cb1c5:c.instructions+=11;goto B5cb1c5;
case 0x5cb1c9:c.instructions+=10;goto B5cb1c9;
case 0x5cb1ce:c.instructions+=9;goto B5cb1ce;
case 0x5cb1d2:c.instructions+=8;goto B5cb1d2;
case 0x5cb1d3:c.instructions+=7;goto B5cb1d3;
case 0x5cb1d7:c.instructions+=6;goto B5cb1d7;
case 0x5cb1db:c.instructions+=5;goto B5cb1db;
case 0x5cb1df:c.instructions+=4;goto B5cb1df;
case 0x5cb1e7:c.instructions+=3;goto B5cb1e7;
case 0x5cb1e9:c.instructions+=2;goto B5cb1e9;
case 0x5cb1ea:c.instructions+=1;goto B5cb1ea;
case 0x5cb1f0:goto L5cb1f0;
case 0x5cb1f6:c.instructions+=3;goto B5cb1f6;
case 0x5cb1fc:c.instructions+=2;goto B5cb1fc;
case 0x5cb202:c.instructions+=1;goto B5cb202;
case 0x5cb204:goto L5cb204;
case 0x5cb206:c.instructions+=1;goto B5cb206;
case 0x5cb20b:goto L5cb20b;
case 0x5cb20e:c.instructions+=4;goto B5cb20e;
case 0x5cb213:c.instructions+=3;goto B5cb213;
case 0x5cb214:c.instructions+=2;goto B5cb214;
case 0x5cb218:c.instructions+=1;goto B5cb218;
case 0x5cb21d:goto L5cb21d;
case 0x5cb224:c.instructions+=1;goto B5cb224;
case 0x5cb226:goto L5cb226;
case 0x5cb227:c.instructions+=1;goto B5cb227;
case 0x5cb22c:goto L5cb22c;
case 0x5cb22f:goto L5cb22f;
case 0x5cb234:goto L5cb234;
case 0x5cb236:c.instructions+=3;goto B5cb236;
case 0x5cb237:c.instructions+=2;goto B5cb237;
case 0x5cb23b:c.instructions+=1;goto B5cb23b;
case 0x5cb240:goto L5cb240;
case 0x5cb246:c.instructions+=4;goto B5cb246;
case 0x5cb24c:c.instructions+=3;goto B5cb24c;
case 0x5cb24e:c.instructions+=2;goto B5cb24e;
case 0x5cb250:c.instructions+=1;goto B5cb250;
case 0x5cb253:goto L5cb253;
case 0x5cb256:c.instructions+=5;goto B5cb256;
case 0x5cb25b:c.instructions+=4;goto B5cb25b;
case 0x5cb25d:c.instructions+=3;goto B5cb25d;
case 0x5cb25e:c.instructions+=2;goto B5cb25e;
case 0x5cb25f:c.instructions+=1;goto B5cb25f;
case 0x5cb265:goto L5cb265;
case 0x5cb268:c.instructions+=6;goto B5cb268;
case 0x5cb26a:c.instructions+=5;goto B5cb26a;
case 0x5cb26b:c.instructions+=4;goto B5cb26b;
case 0x5cb26f:c.instructions+=3;goto B5cb26f;
case 0x5cb270:c.instructions+=2;goto B5cb270;
case 0x5cb271:c.instructions+=1;goto B5cb271;
case 0x5cb277:goto L5cb277;
case 0x5cb278:c.instructions+=2;goto B5cb278;
case 0x5cb279:c.instructions+=1;goto B5cb279;
case 0x5cb27e:goto L5cb27e;
case 0x5cb284:c.instructions+=4;goto B5cb284;
case 0x5cb286:c.instructions+=3;goto B5cb286;
case 0x5cb289:c.instructions+=2;goto B5cb289;
case 0x5cb28b:c.instructions+=1;goto B5cb28b;
case 0x5cb28e:goto L5cb28e;
case 0x5cb291:c.instructions+=3;goto B5cb291;
case 0x5cb293:c.instructions+=2;goto B5cb293;
case 0x5cb294:c.instructions+=1;goto B5cb294;
case 0x5cb29a:goto L5cb29a;
case 0x5cb2a0:c.instructions+=1;goto B5cb2a0;
case 0x5cb2a5:goto L5cb2a5;
case 0x5cb2ab:c.instructions+=4;goto B5cb2ab;
case 0x5cb2b1:c.instructions+=3;goto B5cb2b1;
case 0x5cb2b3:c.instructions+=2;goto B5cb2b3;
case 0x5cb2b5:c.instructions+=1;goto B5cb2b5;
case 0x5cb2b8:goto L5cb2b8;
case 0x5cb2bb:c.instructions+=5;goto B5cb2bb;
case 0x5cb2c0:c.instructions+=4;goto B5cb2c0;
case 0x5cb2c2:c.instructions+=3;goto B5cb2c2;
case 0x5cb2c3:c.instructions+=2;goto B5cb2c3;
case 0x5cb2c4:c.instructions+=1;goto B5cb2c4;
case 0x5cb2ca:goto L5cb2ca;
case 0x5cb2cd:c.instructions+=6;goto B5cb2cd;
case 0x5cb2cf:c.instructions+=5;goto B5cb2cf;
case 0x5cb2d0:c.instructions+=4;goto B5cb2d0;
case 0x5cb2d4:c.instructions+=3;goto B5cb2d4;
case 0x5cb2d5:c.instructions+=2;goto B5cb2d5;
case 0x5cb2d6:c.instructions+=1;goto B5cb2d6;
case 0x5cb2dc:goto L5cb2dc;
case 0x5cb2dd:c.instructions+=1;goto B5cb2dd;
case 0x5cb2e2:goto L5cb2e2;
case 0x5cb2e3:c.instructions+=1;goto B5cb2e3;
case 0x5cb2e8:goto L5cb2e8;
case 0x5cb2ee:c.instructions+=4;goto B5cb2ee;
case 0x5cb2f0:c.instructions+=3;goto B5cb2f0;
case 0x5cb2f3:c.instructions+=2;goto B5cb2f3;
case 0x5cb2f5:c.instructions+=1;goto B5cb2f5;
case 0x5cb2f8:goto L5cb2f8;
case 0x5cb2fb:c.instructions+=3;goto B5cb2fb;
case 0x5cb2fd:c.instructions+=2;goto B5cb2fd;
case 0x5cb2fe:c.instructions+=1;goto B5cb2fe;
case 0x5cb304:goto L5cb304;
case 0x5cb30a:c.instructions+=1;goto B5cb30a;
case 0x5cb30f:goto L5cb30f;
case 0x5cb315:c.instructions+=1;goto B5cb315;
case 0x5cb317:goto L5cb317;
case 0x5cb31d:c.instructions+=1;goto B5cb31d;
case 0x5cb31f:goto L5cb31f;
case 0x5cb324:goto L5cb324;
case 0x5cb329:goto L5cb329;
case 0x5cb32a:c.instructions+=1;goto B5cb32a;
case 0x5cb32f:goto L5cb32f;
case 0x5cb335:c.instructions+=5;goto B5cb335;
case 0x5cb33b:c.instructions+=4;goto B5cb33b;
case 0x5cb33d:c.instructions+=3;goto B5cb33d;
case 0x5cb340:c.instructions+=2;goto B5cb340;
case 0x5cb342:c.instructions+=1;goto B5cb342;
case 0x5cb345:goto L5cb345;
case 0x5cb348:c.instructions+=5;goto B5cb348;
case 0x5cb34d:c.instructions+=4;goto B5cb34d;
case 0x5cb34f:c.instructions+=3;goto B5cb34f;
case 0x5cb350:c.instructions+=2;goto B5cb350;
case 0x5cb351:c.instructions+=1;goto B5cb351;
case 0x5cb357:goto L5cb357;
case 0x5cb35a:c.instructions+=6;goto B5cb35a;
case 0x5cb35c:c.instructions+=5;goto B5cb35c;
case 0x5cb35d:c.instructions+=4;goto B5cb35d;
case 0x5cb361:c.instructions+=3;goto B5cb361;
case 0x5cb362:c.instructions+=2;goto B5cb362;
case 0x5cb363:c.instructions+=1;goto B5cb363;
case 0x5cb369:goto L5cb369;
case 0x5cb36a:c.instructions+=2;goto B5cb36a;
case 0x5cb36b:c.instructions+=1;goto B5cb36b;
case 0x5cb370:goto L5cb370;
case 0x5cb376:c.instructions+=4;goto B5cb376;
case 0x5cb378:c.instructions+=3;goto B5cb378;
case 0x5cb37b:c.instructions+=2;goto B5cb37b;
case 0x5cb37d:c.instructions+=1;goto B5cb37d;
case 0x5cb380:goto L5cb380;
case 0x5cb383:c.instructions+=3;goto B5cb383;
case 0x5cb385:c.instructions+=2;goto B5cb385;
case 0x5cb386:c.instructions+=1;goto B5cb386;
case 0x5cb38c:goto L5cb38c;
case 0x5cb391:c.instructions+=2;goto B5cb391;
case 0x5cb397:c.instructions+=1;goto B5cb397;
case 0x5cb399:goto L5cb399;
case 0x5cb39f:c.instructions+=4;goto B5cb39f;
case 0x5cb3a5:c.instructions+=3;goto B5cb3a5;
case 0x5cb3a7:c.instructions+=2;goto B5cb3a7;
case 0x5cb3a9:c.instructions+=1;goto B5cb3a9;
case 0x5cb3ac:goto L5cb3ac;
case 0x5cb3af:c.instructions+=5;goto B5cb3af;
case 0x5cb3b4:c.instructions+=4;goto B5cb3b4;
case 0x5cb3b6:c.instructions+=3;goto B5cb3b6;
case 0x5cb3b7:c.instructions+=2;goto B5cb3b7;
case 0x5cb3b8:c.instructions+=1;goto B5cb3b8;
case 0x5cb3be:goto L5cb3be;
case 0x5cb3c1:c.instructions+=6;goto B5cb3c1;
case 0x5cb3c3:c.instructions+=5;goto B5cb3c3;
case 0x5cb3c4:c.instructions+=4;goto B5cb3c4;
case 0x5cb3c8:c.instructions+=3;goto B5cb3c8;
case 0x5cb3c9:c.instructions+=2;goto B5cb3c9;
case 0x5cb3ca:c.instructions+=1;goto B5cb3ca;
case 0x5cb3d0:goto L5cb3d0;
case 0x5cb3d1:c.instructions+=1;goto B5cb3d1;
case 0x5cb3d6:goto L5cb3d6;
case 0x5cb3dc:c.instructions+=4;goto B5cb3dc;
case 0x5cb3de:c.instructions+=3;goto B5cb3de;
case 0x5cb3e1:c.instructions+=2;goto B5cb3e1;
case 0x5cb3e3:c.instructions+=1;goto B5cb3e3;
case 0x5cb3e6:goto L5cb3e6;
case 0x5cb3e9:c.instructions+=3;goto B5cb3e9;
case 0x5cb3eb:c.instructions+=2;goto B5cb3eb;
case 0x5cb3ec:c.instructions+=1;goto B5cb3ec;
case 0x5cb3f2:goto L5cb3f2;
case 0x5cb3f8:goto L5cb3f8;
case 0x5cb3fd:goto L5cb3fd;
case 0x5cb404:c.instructions+=1;goto B5cb404;
case 0x5cb40a:goto L5cb40a;
case 0x5cb410:c.instructions+=1;goto B5cb410;
case 0x5cb416:goto L5cb416;
case 0x5cb41c:c.instructions+=4;goto B5cb41c;
case 0x5cb422:c.instructions+=3;goto B5cb422;
case 0x5cb424:c.instructions+=2;goto B5cb424;
case 0x5cb426:c.instructions+=1;goto B5cb426;
case 0x5cb429:goto L5cb429;
case 0x5cb42c:c.instructions+=5;goto B5cb42c;
case 0x5cb431:c.instructions+=4;goto B5cb431;
case 0x5cb433:c.instructions+=3;goto B5cb433;
case 0x5cb434:c.instructions+=2;goto B5cb434;
case 0x5cb435:c.instructions+=1;goto B5cb435;
case 0x5cb43b:goto L5cb43b;
case 0x5cb43e:c.instructions+=6;goto B5cb43e;
case 0x5cb440:c.instructions+=5;goto B5cb440;
case 0x5cb441:c.instructions+=4;goto B5cb441;
case 0x5cb445:c.instructions+=3;goto B5cb445;
case 0x5cb446:c.instructions+=2;goto B5cb446;
case 0x5cb447:c.instructions+=1;goto B5cb447;
case 0x5cb44d:goto L5cb44d;
case 0x5cb452:c.instructions+=5;goto B5cb452;
case 0x5cb454:c.instructions+=4;goto B5cb454;
case 0x5cb455:c.instructions+=3;goto B5cb455;
case 0x5cb457:c.instructions+=2;goto B5cb457;
case 0x5cb458:c.instructions+=1;goto B5cb458;
case 0x5cb45e:goto L5cb45e;
case 0x5cb460:c.instructions+=1;goto B5cb460;
case 0x5cb465:goto L5cb465;
case 0x5cb468:c.instructions+=2;goto B5cb468;
case 0x5cb46b:c.instructions+=1;goto B5cb46b;
case 0x5cb470:goto L5cb470;
case 0x5cb475:c.instructions+=5;goto B5cb475;
case 0x5cb477:c.instructions+=4;goto B5cb477;
case 0x5cb479:c.instructions+=3;goto B5cb479;
case 0x5cb47b:c.instructions+=2;goto B5cb47b;
case 0x5cb47c:c.instructions+=1;goto B5cb47c;
case 0x5cb482:goto L5cb482;
case 0x5cb488:c.instructions+=3;goto B5cb488;
case 0x5cb48a:c.instructions+=2;goto B5cb48a;
case 0x5cb48c:c.instructions+=1;goto B5cb48c;
case 0x5cb48f:goto L5cb48f;
case 0x5cb492:c.instructions+=3;goto B5cb492;
case 0x5cb494:c.instructions+=2;goto B5cb494;
case 0x5cb495:c.instructions+=1;goto B5cb495;
case 0x5cb49b:goto L5cb49b;
case 0x5cb4a1:c.instructions+=4;goto B5cb4a1;
case 0x5cb4a7:c.instructions+=3;goto B5cb4a7;
case 0x5cb4a9:c.instructions+=2;goto B5cb4a9;
case 0x5cb4ab:c.instructions+=1;goto B5cb4ab;
case 0x5cb4ae:goto L5cb4ae;
case 0x5cb4b1:c.instructions+=5;goto B5cb4b1;
case 0x5cb4b6:c.instructions+=4;goto B5cb4b6;
case 0x5cb4b8:c.instructions+=3;goto B5cb4b8;
case 0x5cb4b9:c.instructions+=2;goto B5cb4b9;
case 0x5cb4ba:c.instructions+=1;goto B5cb4ba;
case 0x5cb4c0:goto L5cb4c0;
case 0x5cb4c3:c.instructions+=6;goto B5cb4c3;
case 0x5cb4c5:c.instructions+=5;goto B5cb4c5;
case 0x5cb4c6:c.instructions+=4;goto B5cb4c6;
case 0x5cb4ca:c.instructions+=3;goto B5cb4ca;
case 0x5cb4cb:c.instructions+=2;goto B5cb4cb;
case 0x5cb4cc:c.instructions+=1;goto B5cb4cc;
case 0x5cb4d2:goto L5cb4d2;
case 0x5cb4d3:c.instructions+=1;goto B5cb4d3;
case 0x5cb4d8:goto L5cb4d8;
case 0x5cb4de:c.instructions+=4;goto B5cb4de;
case 0x5cb4e0:c.instructions+=3;goto B5cb4e0;
case 0x5cb4e3:c.instructions+=2;goto B5cb4e3;
case 0x5cb4e5:c.instructions+=1;goto B5cb4e5;
case 0x5cb4e8:goto L5cb4e8;
case 0x5cb4eb:c.instructions+=3;goto B5cb4eb;
case 0x5cb4ed:c.instructions+=2;goto B5cb4ed;
case 0x5cb4ee:c.instructions+=1;goto B5cb4ee;
case 0x5cb4f4:goto L5cb4f4;
case 0x5cb4fa:c.instructions+=4;goto B5cb4fa;
case 0x5cb500:c.instructions+=3;goto B5cb500;
case 0x5cb502:c.instructions+=2;goto B5cb502;
case 0x5cb504:c.instructions+=1;goto B5cb504;
case 0x5cb507:goto L5cb507;
case 0x5cb50a:c.instructions+=5;goto B5cb50a;
case 0x5cb50f:c.instructions+=4;goto B5cb50f;
case 0x5cb511:c.instructions+=3;goto B5cb511;
case 0x5cb512:c.instructions+=2;goto B5cb512;
case 0x5cb513:c.instructions+=1;goto B5cb513;
case 0x5cb519:goto L5cb519;
case 0x5cb51c:c.instructions+=6;goto B5cb51c;
case 0x5cb51e:c.instructions+=5;goto B5cb51e;
case 0x5cb51f:c.instructions+=4;goto B5cb51f;
case 0x5cb523:c.instructions+=3;goto B5cb523;
case 0x5cb524:c.instructions+=2;goto B5cb524;
case 0x5cb525:c.instructions+=1;goto B5cb525;
case 0x5cb52b:goto L5cb52b;
case 0x5cb52c:c.instructions+=2;goto B5cb52c;
case 0x5cb531:c.instructions+=1;goto B5cb531;
case 0x5cb536:goto L5cb536;
case 0x5cb537:c.instructions+=2;goto B5cb537;
case 0x5cb53c:c.instructions+=1;goto B5cb53c;
case 0x5cb541:goto L5cb541;
case 0x5cb542:c.instructions+=2;goto B5cb542;
case 0x5cb547:c.instructions+=1;goto B5cb547;
case 0x5cb54c:goto L5cb54c;
case 0x5cb552:c.instructions+=3;goto B5cb552;
case 0x5cb554:c.instructions+=2;goto B5cb554;
case 0x5cb556:c.instructions+=1;goto B5cb556;
case 0x5cb559:goto L5cb559;
case 0x5cb55c:c.instructions+=3;goto B5cb55c;
case 0x5cb55e:c.instructions+=2;goto B5cb55e;
case 0x5cb55f:c.instructions+=1;goto B5cb55f;
case 0x5cb565:goto L5cb565;
case 0x5cb56b:c.instructions+=2;goto B5cb56b;
case 0x5cb571:c.instructions+=1;goto B5cb571;
case 0x5cb577:goto L5cb577;
case 0x5cb57d:c.instructions+=1;goto B5cb57d;
case 0x5cb57f:goto L5cb57f;
case 0x5cb584:c.instructions+=5;goto B5cb584;
case 0x5cb586:c.instructions+=4;goto B5cb586;
case 0x5cb587:c.instructions+=3;goto B5cb587;
case 0x5cb589:c.instructions+=2;goto B5cb589;
case 0x5cb58a:c.instructions+=1;goto B5cb58a;
case 0x5cb590:goto L5cb590;
case 0x5cb595:goto L5cb595;
case 0x5cb59a:c.instructions+=5;goto B5cb59a;
case 0x5cb59c:c.instructions+=4;goto B5cb59c;
case 0x5cb59e:c.instructions+=3;goto B5cb59e;
case 0x5cb5a0:c.instructions+=2;goto B5cb5a0;
case 0x5cb5a1:c.instructions+=1;goto B5cb5a1;
case 0x5cb5a7:goto L5cb5a7;
case 0x5cb5ac:goto L5cb5ac;
case 0x5cb5b2:c.instructions+=4;goto B5cb5b2;
case 0x5cb5b8:c.instructions+=3;goto B5cb5b8;
case 0x5cb5ba:c.instructions+=2;goto B5cb5ba;
case 0x5cb5bc:c.instructions+=1;goto B5cb5bc;
case 0x5cb5bf:goto L5cb5bf;
case 0x5cb5c2:c.instructions+=5;goto B5cb5c2;
case 0x5cb5c7:c.instructions+=4;goto B5cb5c7;
case 0x5cb5c9:c.instructions+=3;goto B5cb5c9;
case 0x5cb5ca:c.instructions+=2;goto B5cb5ca;
case 0x5cb5cb:c.instructions+=1;goto B5cb5cb;
case 0x5cb5d1:goto L5cb5d1;
case 0x5cb5d4:c.instructions+=6;goto B5cb5d4;
case 0x5cb5d6:c.instructions+=5;goto B5cb5d6;
case 0x5cb5d7:c.instructions+=4;goto B5cb5d7;
case 0x5cb5db:c.instructions+=3;goto B5cb5db;
case 0x5cb5dc:c.instructions+=2;goto B5cb5dc;
case 0x5cb5dd:c.instructions+=1;goto B5cb5dd;
case 0x5cb5e3:goto L5cb5e3;
case 0x5cb5e8:c.instructions+=5;goto B5cb5e8;
case 0x5cb5ea:c.instructions+=4;goto B5cb5ea;
case 0x5cb5eb:c.instructions+=3;goto B5cb5eb;
case 0x5cb5ed:c.instructions+=2;goto B5cb5ed;
case 0x5cb5ee:c.instructions+=1;goto B5cb5ee;
case 0x5cb5f4:goto L5cb5f4;
case 0x5cb5f5:c.instructions+=2;goto B5cb5f5;
case 0x5cb5f6:c.instructions+=1;goto B5cb5f6;
case 0x5cb5fb:goto L5cb5fb;
case 0x5cb5fc:c.instructions+=2;goto B5cb5fc;
case 0x5cb5fd:c.instructions+=1;goto B5cb5fd;
case 0x5cb602:goto L5cb602;
case 0x5cb603:c.instructions+=2;goto B5cb603;
case 0x5cb604:c.instructions+=1;goto B5cb604;
case 0x5cb609:goto L5cb609;
case 0x5cb60a:c.instructions+=3;goto B5cb60a;
case 0x5cb60b:c.instructions+=2;goto B5cb60b;
case 0x5cb60c:c.instructions+=1;goto B5cb60c;
case 0x5cb611:goto L5cb611;
case 0x5cb612:c.instructions+=1;goto B5cb612;
case 0x5cb617:goto L5cb617;
case 0x5cb618:c.instructions+=2;goto B5cb618;
case 0x5cb619:c.instructions+=1;goto B5cb619;
case 0x5cb61e:goto L5cb61e;
case 0x5cb621:c.instructions+=1;goto B5cb621;
case 0x5cb623:goto L5cb623;
case 0x5cb62a:c.instructions+=1;goto B5cb62a;
case 0x5cb630:goto L5cb630;
case 0x5cb636:c.instructions+=4;goto B5cb636;
case 0x5cb63c:c.instructions+=3;goto B5cb63c;
case 0x5cb63e:c.instructions+=2;goto B5cb63e;
case 0x5cb640:c.instructions+=1;goto B5cb640;
case 0x5cb643:goto L5cb643;
case 0x5cb646:c.instructions+=5;goto B5cb646;
case 0x5cb64b:c.instructions+=4;goto B5cb64b;
case 0x5cb64d:c.instructions+=3;goto B5cb64d;
case 0x5cb64e:c.instructions+=2;goto B5cb64e;
case 0x5cb64f:c.instructions+=1;goto B5cb64f;
case 0x5cb655:goto L5cb655;
case 0x5cb658:c.instructions+=6;goto B5cb658;
case 0x5cb65a:c.instructions+=5;goto B5cb65a;
case 0x5cb65b:c.instructions+=4;goto B5cb65b;
case 0x5cb65f:c.instructions+=3;goto B5cb65f;
case 0x5cb660:c.instructions+=2;goto B5cb660;
case 0x5cb661:c.instructions+=1;goto B5cb661;
case 0x5cb667:goto L5cb667;
case 0x5cb66c:c.instructions+=5;goto B5cb66c;
case 0x5cb66e:c.instructions+=4;goto B5cb66e;
case 0x5cb66f:c.instructions+=3;goto B5cb66f;
case 0x5cb671:c.instructions+=2;goto B5cb671;
case 0x5cb672:c.instructions+=1;goto B5cb672;
case 0x5cb678:goto L5cb678;
case 0x5cb679:c.instructions+=2;goto B5cb679;
case 0x5cb67a:c.instructions+=1;goto B5cb67a;
case 0x5cb67f:goto L5cb67f;
case 0x5cb682:goto L5cb682;
case 0x5cb687:c.instructions+=5;goto B5cb687;
case 0x5cb689:c.instructions+=4;goto B5cb689;
case 0x5cb68b:c.instructions+=3;goto B5cb68b;
case 0x5cb68d:c.instructions+=2;goto B5cb68d;
case 0x5cb68e:c.instructions+=1;goto B5cb68e;
case 0x5cb694:goto L5cb694;
case 0x5cb69a:c.instructions+=3;goto B5cb69a;
case 0x5cb69c:c.instructions+=2;goto B5cb69c;
case 0x5cb69e:c.instructions+=1;goto B5cb69e;
case 0x5cb6a1:goto L5cb6a1;
case 0x5cb6a4:c.instructions+=3;goto B5cb6a4;
case 0x5cb6a6:c.instructions+=2;goto B5cb6a6;
case 0x5cb6a7:c.instructions+=1;goto B5cb6a7;
case 0x5cb6ad:goto L5cb6ad;
case 0x5cb6b3:goto L5cb6b3;
case 0x5cb6b9:c.instructions+=1;goto B5cb6b9;
case 0x5cb6bb:goto L5cb6bb;
case 0x5cb6c1:c.instructions+=4;goto B5cb6c1;
case 0x5cb6c7:c.instructions+=3;goto B5cb6c7;
case 0x5cb6c9:c.instructions+=2;goto B5cb6c9;
case 0x5cb6cb:c.instructions+=1;goto B5cb6cb;
case 0x5cb6ce:goto L5cb6ce;
case 0x5cb6d1:c.instructions+=5;goto B5cb6d1;
case 0x5cb6d6:c.instructions+=4;goto B5cb6d6;
case 0x5cb6d8:c.instructions+=3;goto B5cb6d8;
case 0x5cb6d9:c.instructions+=2;goto B5cb6d9;
case 0x5cb6da:c.instructions+=1;goto B5cb6da;
case 0x5cb6e0:goto L5cb6e0;
case 0x5cb6e3:c.instructions+=6;goto B5cb6e3;
case 0x5cb6e5:c.instructions+=5;goto B5cb6e5;
case 0x5cb6e6:c.instructions+=4;goto B5cb6e6;
case 0x5cb6ea:c.instructions+=3;goto B5cb6ea;
case 0x5cb6eb:c.instructions+=2;goto B5cb6eb;
case 0x5cb6ec:c.instructions+=1;goto B5cb6ec;
case 0x5cb6f2:goto L5cb6f2;
case 0x5cb6f3:c.instructions+=2;goto B5cb6f3;
case 0x5cb6f4:c.instructions+=1;goto B5cb6f4;
case 0x5cb6f9:goto L5cb6f9;
case 0x5cb6ff:c.instructions+=4;goto B5cb6ff;
case 0x5cb701:c.instructions+=3;goto B5cb701;
case 0x5cb704:c.instructions+=2;goto B5cb704;
case 0x5cb706:c.instructions+=1;goto B5cb706;
case 0x5cb709:goto L5cb709;
case 0x5cb70c:c.instructions+=3;goto B5cb70c;
case 0x5cb70e:c.instructions+=2;goto B5cb70e;
case 0x5cb70f:c.instructions+=1;goto B5cb70f;
case 0x5cb715:goto L5cb715;
case 0x5cb71b:goto L5cb71b;
case 0x5cb71f:c.instructions+=4;goto B5cb71f;
case 0x5cb720:c.instructions+=3;goto B5cb720;
case 0x5cb723:c.instructions+=2;goto B5cb723;
case 0x5cb727:c.instructions+=1;goto B5cb727;
case 0x5cb72d:goto L5cb72d;
case 0x5cb733:c.instructions+=2;goto B5cb733;
case 0x5cb739:c.instructions+=1;goto B5cb739;
case 0x5cb73b:goto L5cb73b;
case 0x5cb740:c.instructions+=5;goto B5cb740;
case 0x5cb742:c.instructions+=4;goto B5cb742;
case 0x5cb744:c.instructions+=3;goto B5cb744;
case 0x5cb749:c.instructions+=2;goto B5cb749;
case 0x5cb74a:c.instructions+=1;goto B5cb74a;
case 0x5cb750:goto L5cb750;
case 0x5cb755:c.instructions+=8;goto B5cb755;
case 0x5cb756:c.instructions+=7;goto B5cb756;
case 0x5cb758:c.instructions+=6;goto B5cb758;
case 0x5cb75a:c.instructions+=5;goto B5cb75a;
case 0x5cb75c:c.instructions+=4;goto B5cb75c;
case 0x5cb75e:c.instructions+=3;goto B5cb75e;
case 0x5cb75f:c.instructions+=2;goto B5cb75f;
case 0x5cb760:c.instructions+=1;goto B5cb760;
case 0x5cb765:goto L5cb765;
case 0x5cb768:goto L5cb768;
case 0x5cb76e:c.instructions+=1;goto B5cb76e;
case 0x5cb770:goto L5cb770;
case 0x5cb776:c.instructions+=1;goto B5cb776;
case 0x5cb778:goto L5cb778;
case 0x5cb77e:c.instructions+=2;goto B5cb77e;
case 0x5cb785:c.instructions+=1;goto B5cb785;
case 0x5cb787:goto L5cb787;
case 0x5cb78d:goto L5cb78d;
case 0x5cb792:c.instructions+=3;goto B5cb792;
case 0x5cb797:c.instructions+=2;goto B5cb797;
case 0x5cb799:c.instructions+=1;goto B5cb799;
case 0x5cb79b:goto L5cb79b;
case 0x5cb7a1:c.instructions+=2;goto B5cb7a1;
case 0x5cb7a8:c.instructions+=1;goto B5cb7a8;
case 0x5cb7aa:goto L5cb7aa;
case 0x5cb7b0:goto L5cb7b0;
case 0x5cb7b2:c.instructions+=1;goto B5cb7b2;
case 0x5cb7b7:goto L5cb7b7;
case 0x5cb7ba:c.instructions+=4;goto B5cb7ba;
case 0x5cb7bd:c.instructions+=3;goto B5cb7bd;
case 0x5cb7c0:c.instructions+=2;goto B5cb7c0;
case 0x5cb7c2:c.instructions+=1;goto B5cb7c2;
case 0x5cb7c4:goto L5cb7c4;
case 0x5cb7c7:c.instructions+=1;goto B5cb7c7;
case 0x5cb7c9:goto L5cb7c9;
case 0x5cb7cf:c.instructions+=2;goto B5cb7cf;
case 0x5cb7d6:c.instructions+=1;goto B5cb7d6;
case 0x5cb7d8:goto L5cb7d8;
case 0x5cb7de:goto L5cb7de;
case 0x5cb7e4:c.instructions+=1;goto B5cb7e4;
case 0x5cb7e6:goto L5cb7e6;
case 0x5cb7ec:c.instructions+=1;goto B5cb7ec;
case 0x5cb7ee:goto L5cb7ee;
case 0x5cb7f4:c.instructions+=2;goto B5cb7f4;
case 0x5cb7fb:c.instructions+=1;goto B5cb7fb;
case 0x5cb7fd:goto L5cb7fd;
case 0x5cb803:goto L5cb803;
case 0x5cb809:c.instructions+=1;goto B5cb809;
case 0x5cb80b:goto L5cb80b;
case 0x5cb80c:c.instructions+=1;goto B5cb80c;
case 0x5cb811:goto L5cb811;
case 0x5cb814:goto L5cb814;
case 0x5cb81a:c.instructions+=1;goto B5cb81a;
case 0x5cb81c:goto L5cb81c;
case 0x5cb822:c.instructions+=1;goto B5cb822;
case 0x5cb824:goto L5cb824;
case 0x5cb82a:c.instructions+=1;goto B5cb82a;
case 0x5cb82c:goto L5cb82c;
case 0x5cb832:c.instructions+=1;goto B5cb832;
case 0x5cb834:goto L5cb834;
case 0x5cb839:goto L5cb839;
case 0x5cb83f:c.instructions+=1;goto B5cb83f;
case 0x5cb841:goto L5cb841;
case 0x5cb847:c.instructions+=1;goto B5cb847;
case 0x5cb849:goto L5cb849;
case 0x5cb84e:goto L5cb84e;
case 0x5cb854:c.instructions+=6;goto B5cb854;
case 0x5cb858:c.instructions+=5;goto B5cb858;
case 0x5cb85c:c.instructions+=4;goto B5cb85c;
case 0x5cb860:c.instructions+=3;goto B5cb860;
case 0x5cb864:c.instructions+=2;goto B5cb864;
case 0x5cb868:c.instructions+=1;goto B5cb868;
case 0x5cb86a:goto L5cb86a;
case 0x5cb86f:c.instructions+=1;goto B5cb86f;
case 0x5cb871:goto L5cb871;
case 0x5cb877:c.instructions+=1;goto B5cb877;
case 0x5cb879:goto L5cb879;
case 0x5cb87e:c.instructions+=1;goto B5cb87e;
case 0x5cb880:goto L5cb880;
case 0x5cb886:c.instructions+=1;goto B5cb886;
case 0x5cb888:goto L5cb888;
case 0x5cb88d:c.instructions+=1;goto B5cb88d;
case 0x5cb88f:goto L5cb88f;
case 0x5cb894:c.instructions+=1;goto B5cb894;
case 0x5cb899:goto L5cb899;
case 0x5cb89f:c.instructions+=2;goto B5cb89f;
case 0x5cb8a7:c.instructions+=1;goto B5cb8a7;
case 0x5cb8a9:goto L5cb8a9;
case 0x5cb8af:c.instructions+=2;goto B5cb8af;
case 0x5cb8b3:c.instructions+=1;goto B5cb8b3;
case 0x5cb8b8:goto L5cb8b8;
case 0x5cb8be:c.instructions+=2;goto B5cb8be;
case 0x5cb8c3:c.instructions+=1;goto B5cb8c3;
case 0x5cb8c5:goto L5cb8c5;
case 0x5cb8ca:c.instructions+=7;goto B5cb8ca;
case 0x5cb8d0:c.instructions+=6;goto B5cb8d0;
case 0x5cb8d6:c.instructions+=5;goto B5cb8d6;
case 0x5cb8e0:c.instructions+=4;goto B5cb8e0;
case 0x5cb8e6:c.instructions+=3;goto B5cb8e6;
case 0x5cb8e9:c.instructions+=2;goto B5cb8e9;
case 0x5cb8f1:c.instructions+=1;goto B5cb8f1;
case 0x5cb8f7:goto L5cb8f7;
case 0x5cb8ff:c.instructions+=2;goto B5cb8ff;
case 0x5cb909:c.instructions+=1;goto B5cb909;
case 0x5cb90b:goto L5cb90b;
case 0x5cb90e:c.instructions+=1;goto B5cb90e;
case 0x5cb910:goto L5cb910;
case 0x5cb916:c.instructions+=16;goto B5cb916;
case 0x5cb91c:c.instructions+=15;goto B5cb91c;
case 0x5cb922:c.instructions+=14;goto B5cb922;
case 0x5cb926:c.instructions+=13;goto B5cb926;
case 0x5cb92c:c.instructions+=12;goto B5cb92c;
case 0x5cb932:c.instructions+=11;goto B5cb932;
case 0x5cb938:c.instructions+=10;goto B5cb938;
case 0x5cb93e:c.instructions+=9;goto B5cb93e;
case 0x5cb944:c.instructions+=8;goto B5cb944;
case 0x5cb94a:c.instructions+=7;goto B5cb94a;
case 0x5cb950:c.instructions+=6;goto B5cb950;
case 0x5cb956:c.instructions+=5;goto B5cb956;
case 0x5cb95c:c.instructions+=4;goto B5cb95c;
case 0x5cb962:c.instructions+=3;goto B5cb962;
case 0x5cb968:c.instructions+=2;goto B5cb968;
case 0x5cb96e:c.instructions+=1;goto B5cb96e;
case 0x5cb974:goto L5cb974;
case 0x5cb977:c.instructions+=1;goto B5cb977;
case 0x5cb979:goto L5cb979;
case 0x5cb97d:c.instructions+=5;goto B5cb97d;
case 0x5cb983:c.instructions+=4;goto B5cb983;
case 0x5cb987:c.instructions+=3;goto B5cb987;
case 0x5cb98d:c.instructions+=2;goto B5cb98d;
case 0x5cb993:c.instructions+=1;goto B5cb993;
case 0x5cb999:goto L5cb999;
case 0x5cb99f:c.instructions+=1;goto B5cb99f;
case 0x5cb9a1:goto L5cb9a1;
case 0x5cb9a5:c.instructions+=2;goto B5cb9a5;
case 0x5cb9a6:c.instructions+=1;goto B5cb9a6;
case 0x5cb9ab:goto L5cb9ab;
case 0x5cb9ae:goto L5cb9ae;
case 0x5cb9b4:c.instructions+=1;goto B5cb9b4;
case 0x5cb9b6:goto L5cb9b6;
case 0x5cb9ba:c.instructions+=2;goto B5cb9ba;
case 0x5cb9bb:c.instructions+=1;goto B5cb9bb;
case 0x5cb9c0:goto L5cb9c0;
case 0x5cb9c3:goto L5cb9c3;
case 0x5cb9c9:c.instructions+=1;goto B5cb9c9;
case 0x5cb9cb:goto L5cb9cb;
case 0x5cb9cf:c.instructions+=2;goto B5cb9cf;
case 0x5cb9d0:c.instructions+=1;goto B5cb9d0;
case 0x5cb9d5:goto L5cb9d5;
case 0x5cb9d8:goto L5cb9d8;
case 0x5cb9de:c.instructions+=1;goto B5cb9de;
case 0x5cb9e0:goto L5cb9e0;
case 0x5cb9e6:c.instructions+=8;goto B5cb9e6;
case 0x5cb9ea:c.instructions+=7;goto B5cb9ea;
case 0x5cb9f0:c.instructions+=6;goto B5cb9f0;
case 0x5cb9f1:c.instructions+=5;goto B5cb9f1;
case 0x5cb9f2:c.instructions+=4;goto B5cb9f2;
case 0x5cb9f6:c.instructions+=3;goto B5cb9f6;
case 0x5cb9fc:c.instructions+=2;goto B5cb9fc;
case 0x5cb9ff:c.instructions+=1;goto B5cb9ff;
case 0x5cba04:goto L5cba04;
case 0x5cba07:goto L5cba07;
case 0x5cba0d:c.instructions+=1;goto B5cba0d;
case 0x5cba0f:goto L5cba0f;
case 0x5cba13:c.instructions+=2;goto B5cba13;
case 0x5cba14:c.instructions+=1;goto B5cba14;
case 0x5cba19:goto L5cba19;
case 0x5cba1c:goto L5cba1c;
case 0x5cba21:goto L5cba21;
case 0x5cba27:c.instructions+=6;goto B5cba27;
case 0x5cba2c:c.instructions+=5;goto B5cba2c;
case 0x5cba2e:c.instructions+=4;goto B5cba2e;
case 0x5cba2f:c.instructions+=3;goto B5cba2f;
case 0x5cba30:c.instructions+=2;goto B5cba30;
case 0x5cba31:c.instructions+=1;goto B5cba31;
case 0x5cba37:goto L5cba37;
case 0x5cba3d:c.instructions+=5;goto B5cba3d;
case 0x5cba42:c.instructions+=4;goto B5cba42;
case 0x5cba44:c.instructions+=3;goto B5cba44;
case 0x5cba45:c.instructions+=2;goto B5cba45;
case 0x5cba46:c.instructions+=1;goto B5cba46;
case 0x5cba4c:goto L5cba4c;
case 0x5cba52:c.instructions+=13;goto B5cba52;
case 0x5cba57:c.instructions+=12;goto B5cba57;
case 0x5cba5b:c.instructions+=11;goto B5cba5b;
case 0x5cba5f:c.instructions+=10;goto B5cba5f;
case 0x5cba64:c.instructions+=9;goto B5cba64;
case 0x5cba68:c.instructions+=8;goto B5cba68;
case 0x5cba69:c.instructions+=7;goto B5cba69;
case 0x5cba6d:c.instructions+=6;goto B5cba6d;
case 0x5cba71:c.instructions+=5;goto B5cba71;
case 0x5cba79:c.instructions+=4;goto B5cba79;
case 0x5cba81:c.instructions+=3;goto B5cba81;
case 0x5cba83:c.instructions+=2;goto B5cba83;
case 0x5cba84:c.instructions+=1;goto B5cba84;
case 0x5cba8a:goto L5cba8a;
case 0x5cba8f:c.instructions+=7;goto B5cba8f;
case 0x5cba91:c.instructions+=6;goto B5cba91;
case 0x5cba96:c.instructions+=5;goto B5cba96;
case 0x5cbaa0:c.instructions+=4;goto B5cbaa0;
case 0x5cbaa6:c.instructions+=3;goto B5cbaa6;
case 0x5cbaa8:c.instructions+=2;goto B5cbaa8;
case 0x5cbaa9:c.instructions+=1;goto B5cbaa9;
case 0x5cbaaf:goto L5cbaaf;
case 0x5cbab5:c.instructions+=8;goto B5cbab5;
case 0x5cbab7:c.instructions+=7;goto B5cbab7;
case 0x5cbab9:c.instructions+=6;goto B5cbab9;
case 0x5cbabb:c.instructions+=5;goto B5cbabb;
case 0x5cbabc:c.instructions+=4;goto B5cbabc;
case 0x5cbabd:c.instructions+=3;goto B5cbabd;
case 0x5cbabe:c.instructions+=2;goto B5cbabe;
case 0x5cbabf:c.instructions+=1;goto B5cbabf;
case 0x5cbac4:goto L5cbac4;
case 0x5cbac9:c.instructions+=6;goto B5cbac9;
case 0x5cbacb:c.instructions+=5;goto B5cbacb;
case 0x5cbace:c.instructions+=4;goto B5cbace;
case 0x5cbad0:c.instructions+=3;goto B5cbad0;
case 0x5cbad5:c.instructions+=2;goto B5cbad5;
case 0x5cbad6:c.instructions+=1;goto B5cbad6;
case 0x5cbadc:goto L5cbadc;
case 0x5cbae1:goto L5cbae1;
case 0x5cbae6:goto L5cbae6;
case 0x5cbaeb:goto L5cbaeb;
case 0x5cbaec:c.instructions+=5;goto B5cbaec;
case 0x5cbaed:c.instructions+=4;goto B5cbaed;
case 0x5cbaee:c.instructions+=3;goto B5cbaee;
case 0x5cbaf0:c.instructions+=2;goto B5cbaf0;
case 0x5cbaf1:c.instructions+=1;goto B5cbaf1;
case 0x5cbb00:goto L5cbb00;
case 0x5cbb06:c.instructions+=9;goto B5cbb06;
case 0x5cbb0b:c.instructions+=8;goto B5cbb0b;
case 0x5cbb0d:c.instructions+=7;goto B5cbb0d;
case 0x5cbb10:c.instructions+=6;goto B5cbb10;
case 0x5cbb11:c.instructions+=5;goto B5cbb11;
case 0x5cbb12:c.instructions+=4;goto B5cbb12;
case 0x5cbb14:c.instructions+=3;goto B5cbb14;
case 0x5cbb15:c.instructions+=2;goto B5cbb15;
case 0x5cbb16:c.instructions+=1;goto B5cbb16;
case 0x5cbb1c:goto L5cbb1c;
case 0x5cbb22:c.instructions+=1;goto B5cbb22;
case 0x5cbb24:goto L5cbb24;
case 0x5cbb29:c.instructions+=4;goto B5cbb29;
case 0x5cbb2b:c.instructions+=3;goto B5cbb2b;
case 0x5cbb2c:c.instructions+=2;goto B5cbb2c;
case 0x5cbb2d:c.instructions+=1;goto B5cbb2d;
case 0x5cbb33:goto L5cbb33;
case 0x5cbb34:c.instructions+=5;goto B5cbb34;
case 0x5cbb35:c.instructions+=4;goto B5cbb35;
case 0x5cbb36:c.instructions+=3;goto B5cbb36;
case 0x5cbb38:c.instructions+=2;goto B5cbb38;
case 0x5cbb3d:c.instructions+=1;goto B5cbb3d;
case 0x5cbb42:goto L5cbb42;
case 0x5cbb45:c.instructions+=2;goto B5cbb45;
case 0x5cbb46:c.instructions+=1;goto B5cbb46;
case 0x5cbb4b:goto L5cbb4b;
case 0x5cbb4d:c.instructions+=7;goto B5cbb4d;
case 0x5cbb52:c.instructions+=6;goto B5cbb52;
case 0x5cbb54:c.instructions+=5;goto B5cbb54;
case 0x5cbb57:c.instructions+=4;goto B5cbb57;
case 0x5cbb5c:c.instructions+=3;goto B5cbb5c;
case 0x5cbb61:c.instructions+=2;goto B5cbb61;
case 0x5cbb62:c.instructions+=1;goto B5cbb62;
case 0x5cbb68:goto L5cbb68;
case 0x5cbb6b:c.instructions+=14;goto B5cbb6b;
case 0x5cbb6d:c.instructions+=13;goto B5cbb6d;
case 0x5cbb6f:c.instructions+=12;goto B5cbb6f;
case 0x5cbb71:c.instructions+=11;goto B5cbb71;
case 0x5cbb73:c.instructions+=10;goto B5cbb73;
case 0x5cbb77:c.instructions+=9;goto B5cbb77;
case 0x5cbb78:c.instructions+=8;goto B5cbb78;
case 0x5cbb7c:c.instructions+=7;goto B5cbb7c;
case 0x5cbb7d:c.instructions+=6;goto B5cbb7d;
case 0x5cbb81:c.instructions+=5;goto B5cbb81;
case 0x5cbb86:c.instructions+=4;goto B5cbb86;
case 0x5cbb88:c.instructions+=3;goto B5cbb88;
case 0x5cbb89:c.instructions+=2;goto B5cbb89;
case 0x5cbb91:c.instructions+=1;goto B5cbb91;
case 0x5cbb96:goto L5cbb96;
case 0x5cbb9b:c.instructions+=3;goto B5cbb9b;
case 0x5cbb9e:c.instructions+=2;goto B5cbb9e;
case 0x5cbba0:c.instructions+=1;goto B5cbba0;
case 0x5cbba2:goto L5cbba2;
case 0x5cbba8:c.instructions+=4;goto B5cbba8;
case 0x5cbbae:c.instructions+=3;goto B5cbbae;
case 0x5cbbaf:c.instructions+=2;goto B5cbbaf;
case 0x5cbbb0:c.instructions+=1;goto B5cbbb0;
case 0x5cbbb5:goto L5cbbb5;
case 0x5cbbbb:c.instructions+=2;goto B5cbbbb;
case 0x5cbbbe:c.instructions+=1;goto B5cbbbe;
case 0x5cbbc0:goto L5cbbc0;
case 0x5cbbc6:goto L5cbbc6;
case 0x5cbbcb:c.instructions+=5;goto B5cbbcb;
case 0x5cbbcd:c.instructions+=4;goto B5cbbcd;
case 0x5cbbce:c.instructions+=3;goto B5cbbce;
case 0x5cbbcf:c.instructions+=2;goto B5cbbcf;
case 0x5cbbd0:c.instructions+=1;goto B5cbbd0;
case 0x5cbbd6:goto L5cbbd6;
case 0x5cbbdc:c.instructions+=5;goto B5cbbdc;
case 0x5cbbe1:c.instructions+=4;goto B5cbbe1;
case 0x5cbbe3:c.instructions+=3;goto B5cbbe3;
case 0x5cbbe4:c.instructions+=2;goto B5cbbe4;
case 0x5cbbe5:c.instructions+=1;goto B5cbbe5;
case 0x5cbbeb:goto L5cbbeb;
case 0x5cbbf0:c.instructions+=5;goto B5cbbf0;
case 0x5cbbf2:c.instructions+=4;goto B5cbbf2;
case 0x5cbbf4:c.instructions+=3;goto B5cbbf4;
case 0x5cbbf9:c.instructions+=2;goto B5cbbf9;
case 0x5cbbfa:c.instructions+=1;goto B5cbbfa;
case 0x5cbc00:goto L5cbc00;
case 0x5cbc02:c.instructions+=1;goto B5cbc02;
case 0x5cbc07:goto L5cbc07;
case 0x5cbc0d:c.instructions+=6;goto B5cbc0d;
case 0x5cbc13:c.instructions+=5;goto B5cbc13;
case 0x5cbc15:c.instructions+=4;goto B5cbc15;
case 0x5cbc18:c.instructions+=3;goto B5cbc18;
case 0x5cbc1a:c.instructions+=2;goto B5cbc1a;
case 0x5cbc1c:c.instructions+=1;goto B5cbc1c;
case 0x5cbc1f:goto L5cbc1f;
case 0x5cbc22:c.instructions+=5;goto B5cbc22;
case 0x5cbc27:c.instructions+=4;goto B5cbc27;
case 0x5cbc29:c.instructions+=3;goto B5cbc29;
case 0x5cbc2a:c.instructions+=2;goto B5cbc2a;
case 0x5cbc2b:c.instructions+=1;goto B5cbc2b;
case 0x5cbc31:goto L5cbc31;
case 0x5cbc34:c.instructions+=6;goto B5cbc34;
case 0x5cbc36:c.instructions+=5;goto B5cbc36;
case 0x5cbc37:c.instructions+=4;goto B5cbc37;
case 0x5cbc3b:c.instructions+=3;goto B5cbc3b;
case 0x5cbc3c:c.instructions+=2;goto B5cbc3c;
case 0x5cbc3d:c.instructions+=1;goto B5cbc3d;
case 0x5cbc43:goto L5cbc43;
case 0x5cbc48:c.instructions+=5;goto B5cbc48;
case 0x5cbc4a:c.instructions+=4;goto B5cbc4a;
case 0x5cbc4c:c.instructions+=3;goto B5cbc4c;
case 0x5cbc4e:c.instructions+=2;goto B5cbc4e;
case 0x5cbc4f:c.instructions+=1;goto B5cbc4f;
case 0x5cbc55:goto L5cbc55;
case 0x5cbc5a:c.instructions+=5;goto B5cbc5a;
case 0x5cbc5c:c.instructions+=4;goto B5cbc5c;
case 0x5cbc5d:c.instructions+=3;goto B5cbc5d;
case 0x5cbc5f:c.instructions+=2;goto B5cbc5f;
case 0x5cbc60:c.instructions+=1;goto B5cbc60;
case 0x5cbc66:goto L5cbc66;
case 0x5cbc67:c.instructions+=2;goto B5cbc67;
case 0x5cbc68:c.instructions+=1;goto B5cbc68;
case 0x5cbc6d:goto L5cbc6d;
case 0x5cbc6e:c.instructions+=2;goto B5cbc6e;
case 0x5cbc6f:c.instructions+=1;goto B5cbc6f;
case 0x5cbc74:goto L5cbc74;
case 0x5cbc75:c.instructions+=2;goto B5cbc75;
case 0x5cbc76:c.instructions+=1;goto B5cbc76;
case 0x5cbc7b:goto L5cbc7b;
case 0x5cbc7c:c.instructions+=1;goto B5cbc7c;
case 0x5cbc81:goto L5cbc81;
case 0x5cbc82:c.instructions+=2;goto B5cbc82;
case 0x5cbc83:c.instructions+=1;goto B5cbc83;
case 0x5cbc88:goto L5cbc88;
case 0x5cbc89:c.instructions+=3;goto B5cbc89;
case 0x5cbc8a:c.instructions+=2;goto B5cbc8a;
case 0x5cbc8b:c.instructions+=1;goto B5cbc8b;
case 0x5cbc90:goto L5cbc90;
case 0x5cbc96:c.instructions+=4;goto B5cbc96;
case 0x5cbc98:c.instructions+=3;goto B5cbc98;
case 0x5cbc9b:c.instructions+=2;goto B5cbc9b;
case 0x5cbc9d:c.instructions+=1;goto B5cbc9d;
case 0x5cbca0:goto L5cbca0;
case 0x5cbca3:c.instructions+=3;goto B5cbca3;
case 0x5cbca5:c.instructions+=2;goto B5cbca5;
case 0x5cbca6:c.instructions+=1;goto B5cbca6;
case 0x5cbcac:goto L5cbcac;
case 0x5cbcb1:c.instructions+=5;goto B5cbcb1;
case 0x5cbcb7:c.instructions+=4;goto B5cbcb7;
case 0x5cbcb9:c.instructions+=3;goto B5cbcb9;
case 0x5cbcba:c.instructions+=2;goto B5cbcba;
case 0x5cbcbb:c.instructions+=1;goto B5cbcbb;
case 0x5cbcbd:goto L5cbcbd;
case 0x5cbcc3:c.instructions+=10;goto B5cbcc3;
case 0x5cbcc8:c.instructions+=9;goto B5cbcc8;
case 0x5cbcca:c.instructions+=8;goto B5cbcca;
case 0x5cbccb:c.instructions+=7;goto B5cbccb;
case 0x5cbccc:c.instructions+=6;goto B5cbccc;
case 0x5cbccd:c.instructions+=5;goto B5cbccd;
case 0x5cbcd3:c.instructions+=4;goto B5cbcd3;
case 0x5cbcd4:c.instructions+=3;goto B5cbcd4;
case 0x5cbcd5:c.instructions+=2;goto B5cbcd5;
case 0x5cbcd6:c.instructions+=1;goto B5cbcd6;
case 0x5cbcdc:goto L5cbcdc;
case 0x5cbce1:c.instructions+=5;goto B5cbce1;
case 0x5cbce3:c.instructions+=4;goto B5cbce3;
case 0x5cbce5:c.instructions+=3;goto B5cbce5;
case 0x5cbce7:c.instructions+=2;goto B5cbce7;
case 0x5cbce8:c.instructions+=1;goto B5cbce8;
case 0x5cbcee:goto L5cbcee;
case 0x5cbcf3:goto L5cbcf3;
case 0x5cbcf9:c.instructions+=6;goto B5cbcf9;
case 0x5cbcfe:c.instructions+=5;goto B5cbcfe;
case 0x5cbd00:c.instructions+=4;goto B5cbd00;
case 0x5cbd01:c.instructions+=3;goto B5cbd01;
case 0x5cbd02:c.instructions+=2;goto B5cbd02;
case 0x5cbd03:c.instructions+=1;goto B5cbd03;
case 0x5cbd09:goto L5cbd09;
case 0x5cbd0f:c.instructions+=5;goto B5cbd0f;
case 0x5cbd14:c.instructions+=4;goto B5cbd14;
case 0x5cbd16:c.instructions+=3;goto B5cbd16;
case 0x5cbd17:c.instructions+=2;goto B5cbd17;
case 0x5cbd18:c.instructions+=1;goto B5cbd18;
case 0x5cbd1e:goto L5cbd1e;
case 0x5cbd24:c.instructions+=13;goto B5cbd24;
case 0x5cbd29:c.instructions+=12;goto B5cbd29;
case 0x5cbd2d:c.instructions+=11;goto B5cbd2d;
case 0x5cbd31:c.instructions+=10;goto B5cbd31;
case 0x5cbd36:c.instructions+=9;goto B5cbd36;
case 0x5cbd3a:c.instructions+=8;goto B5cbd3a;
case 0x5cbd3b:c.instructions+=7;goto B5cbd3b;
case 0x5cbd3f:c.instructions+=6;goto B5cbd3f;
case 0x5cbd43:c.instructions+=5;goto B5cbd43;
case 0x5cbd4b:c.instructions+=4;goto B5cbd4b;
case 0x5cbd53:c.instructions+=3;goto B5cbd53;
case 0x5cbd55:c.instructions+=2;goto B5cbd55;
case 0x5cbd56:c.instructions+=1;goto B5cbd56;
case 0x5cbd5c:goto L5cbd5c;
case 0x5cbd61:c.instructions+=5;goto B5cbd61;
case 0x5cbd67:c.instructions+=4;goto B5cbd67;
case 0x5cbd69:c.instructions+=3;goto B5cbd69;
case 0x5cbd73:c.instructions+=2;goto B5cbd73;
case 0x5cbd74:c.instructions+=1;goto B5cbd74;
case 0x5cbd76:goto L5cbd76;
case 0x5cbd7b:c.instructions+=5;goto B5cbd7b;
case 0x5cbd7d:c.instructions+=4;goto B5cbd7d;
case 0x5cbd7f:c.instructions+=3;goto B5cbd7f;
case 0x5cbd84:c.instructions+=2;goto B5cbd84;
case 0x5cbd85:c.instructions+=1;goto B5cbd85;
case 0x5cbd8b:goto L5cbd8b;
case 0x5cbd91:c.instructions+=10;goto B5cbd91;
case 0x5cbd93:c.instructions+=9;goto B5cbd93;
case 0x5cbd95:c.instructions+=8;goto B5cbd95;
case 0x5cbd97:c.instructions+=7;goto B5cbd97;
case 0x5cbd99:c.instructions+=6;goto B5cbd99;
case 0x5cbd9d:c.instructions+=5;goto B5cbd9d;
case 0x5cbd9e:c.instructions+=4;goto B5cbd9e;
case 0x5cbda3:c.instructions+=3;goto B5cbda3;
case 0x5cbda5:c.instructions+=2;goto B5cbda5;
case 0x5cbda6:c.instructions+=1;goto B5cbda6;
case 0x5cbdab:goto L5cbdab;
case 0x5cbdae:goto L5cbdae;
case 0x5cbdb1:c.instructions+=1;goto B5cbdb1;
case 0x5cbdc0:goto L5cbdc0;
case 0x5cbdc1:c.instructions+=8;goto B5cbdc1;
case 0x5cbdc3:c.instructions+=7;goto B5cbdc3;
case 0x5cbdc6:c.instructions+=6;goto B5cbdc6;
case 0x5cbdcc:c.instructions+=5;goto B5cbdcc;
case 0x5cbdcd:c.instructions+=4;goto B5cbdcd;
case 0x5cbdd3:c.instructions+=3;goto B5cbdd3;
case 0x5cbdd5:c.instructions+=2;goto B5cbdd5;
case 0x5cbdd6:c.instructions+=1;goto B5cbdd6;
case 0x5cbddc:goto L5cbddc;
case 0x5cbde0:c.instructions+=1;goto B5cbde0;
case 0x5cbde5:goto L5cbde5;
case 0x5cbdea:c.instructions+=6;goto B5cbdea;
case 0x5cbdec:c.instructions+=5;goto B5cbdec;
case 0x5cbdf0:c.instructions+=4;goto B5cbdf0;
case 0x5cbdf4:c.instructions+=3;goto B5cbdf4;
case 0x5cbdf8:c.instructions+=2;goto B5cbdf8;
case 0x5cbdff:c.instructions+=1;goto B5cbdff;
case 0x5cbe04:goto L5cbe04;
case 0x5cbe06:c.instructions+=9;goto B5cbe06;
case 0x5cbe09:c.instructions+=8;goto B5cbe09;
case 0x5cbe0f:c.instructions+=7;goto B5cbe0f;
case 0x5cbe13:c.instructions+=6;goto B5cbe13;
case 0x5cbe17:c.instructions+=5;goto B5cbe17;
case 0x5cbe1a:c.instructions+=4;goto B5cbe1a;
case 0x5cbe20:c.instructions+=3;goto B5cbe20;
case 0x5cbe22:c.instructions+=2;goto B5cbe22;
case 0x5cbe25:c.instructions+=1;goto B5cbe25;
case 0x5cbe2b:goto L5cbe2b;
case 0x5cbe2e:c.instructions+=2;goto B5cbe2e;
case 0x5cbe30:c.instructions+=1;goto B5cbe30;
case 0x5cbe36:goto L5cbe36;
case 0x5cbe39:c.instructions+=3;goto B5cbe39;
case 0x5cbe3c:c.instructions+=2;goto B5cbe3c;
case 0x5cbe3e:c.instructions+=1;goto B5cbe3e;
case 0x5cbe44:goto L5cbe44;
case 0x5cbe48:c.instructions+=2;goto B5cbe48;
case 0x5cbe4e:c.instructions+=1;goto B5cbe4e;
case 0x5cbe53:goto L5cbe53;
case 0x5cbe55:c.instructions+=19;goto B5cbe55;
case 0x5cbe59:c.instructions+=18;goto B5cbe59;
case 0x5cbe5d:c.instructions+=17;goto B5cbe5d;
case 0x5cbe5f:c.instructions+=16;goto B5cbe5f;
case 0x5cbe63:c.instructions+=15;goto B5cbe63;
case 0x5cbe64:c.instructions+=14;goto B5cbe64;
case 0x5cbe68:c.instructions+=13;goto B5cbe68;
case 0x5cbe69:c.instructions+=12;goto B5cbe69;
case 0x5cbe6d:c.instructions+=11;goto B5cbe6d;
case 0x5cbe75:c.instructions+=10;goto B5cbe75;
case 0x5cbe7d:c.instructions+=9;goto B5cbe7d;
case 0x5cbe85:c.instructions+=8;goto B5cbe85;
case 0x5cbe8d:c.instructions+=7;goto B5cbe8d;
case 0x5cbe95:c.instructions+=6;goto B5cbe95;
case 0x5cbe9d:c.instructions+=5;goto B5cbe9d;
case 0x5cbea5:c.instructions+=4;goto B5cbea5;
case 0x5cbead:c.instructions+=3;goto B5cbead;
case 0x5cbeb5:c.instructions+=2;goto B5cbeb5;
case 0x5cbebd:c.instructions+=1;goto B5cbebd;
case 0x5cbec2:goto L5cbec2;
case 0x5cbec7:c.instructions+=20;goto B5cbec7;
case 0x5cbec9:c.instructions+=19;goto B5cbec9;
case 0x5cbecd:c.instructions+=18;goto B5cbecd;
case 0x5cbed1:c.instructions+=17;goto B5cbed1;
case 0x5cbed3:c.instructions+=16;goto B5cbed3;
case 0x5cbed7:c.instructions+=15;goto B5cbed7;
case 0x5cbed8:c.instructions+=14;goto B5cbed8;
case 0x5cbedc:c.instructions+=13;goto B5cbedc;
case 0x5cbedd:c.instructions+=12;goto B5cbedd;
case 0x5cbee1:c.instructions+=11;goto B5cbee1;
case 0x5cbee9:c.instructions+=10;goto B5cbee9;
case 0x5cbef1:c.instructions+=9;goto B5cbef1;
case 0x5cbef9:c.instructions+=8;goto B5cbef9;
case 0x5cbf01:c.instructions+=7;goto B5cbf01;
case 0x5cbf09:c.instructions+=6;goto B5cbf09;
case 0x5cbf11:c.instructions+=5;goto B5cbf11;
case 0x5cbf19:c.instructions+=4;goto B5cbf19;
case 0x5cbf21:c.instructions+=3;goto B5cbf21;
case 0x5cbf29:c.instructions+=2;goto B5cbf29;
case 0x5cbf31:c.instructions+=1;goto B5cbf31;
case 0x5cbf36:goto L5cbf36;
case 0x5cbf39:goto L5cbf39;
case 0x5cbf3a:c.instructions+=4;goto B5cbf3a;
case 0x5cbf3b:c.instructions+=3;goto B5cbf3b;
case 0x5cbf3d:c.instructions+=2;goto B5cbf3d;
case 0x5cbf3e:c.instructions+=1;goto B5cbf3e;
case 0x5cbf40:goto L5cbf40;
case 0x5cbf41:c.instructions+=7;goto B5cbf41;
case 0x5cbf43:c.instructions+=6;goto B5cbf43;
case 0x5cbf46:c.instructions+=5;goto B5cbf46;
case 0x5cbf4c:c.instructions+=4;goto B5cbf4c;
case 0x5cbf4d:c.instructions+=3;goto B5cbf4d;
case 0x5cbf4e:c.instructions+=2;goto B5cbf4e;
case 0x5cbf4f:c.instructions+=1;goto B5cbf4f;
case 0x5cbf54:goto L5cbf54;
case 0x5cbf59:goto L5cbf59;
case 0x5cbf5f:c.instructions+=7;goto B5cbf5f;
case 0x5cbf64:c.instructions+=6;goto B5cbf64;
case 0x5cbf66:c.instructions+=5;goto B5cbf66;
case 0x5cbf67:c.instructions+=4;goto B5cbf67;
case 0x5cbf69:c.instructions+=3;goto B5cbf69;
case 0x5cbf6a:c.instructions+=2;goto B5cbf6a;
case 0x5cbf6b:c.instructions+=1;goto B5cbf6b;
case 0x5cbf71:goto L5cbf71;
case 0x5cbf77:c.instructions+=5;goto B5cbf77;
case 0x5cbf7c:c.instructions+=4;goto B5cbf7c;
case 0x5cbf7e:c.instructions+=3;goto B5cbf7e;
case 0x5cbf7f:c.instructions+=2;goto B5cbf7f;
case 0x5cbf80:c.instructions+=1;goto B5cbf80;
case 0x5cbf86:goto L5cbf86;
case 0x5cbf8c:c.instructions+=13;goto B5cbf8c;
case 0x5cbf91:c.instructions+=12;goto B5cbf91;
case 0x5cbf95:c.instructions+=11;goto B5cbf95;
case 0x5cbf99:c.instructions+=10;goto B5cbf99;
case 0x5cbf9e:c.instructions+=9;goto B5cbf9e;
case 0x5cbfa2:c.instructions+=8;goto B5cbfa2;
case 0x5cbfa3:c.instructions+=7;goto B5cbfa3;
case 0x5cbfa7:c.instructions+=6;goto B5cbfa7;
case 0x5cbfab:c.instructions+=5;goto B5cbfab;
case 0x5cbfaf:c.instructions+=4;goto B5cbfaf;
case 0x5cbfb7:c.instructions+=3;goto B5cbfb7;
case 0x5cbfb9:c.instructions+=2;goto B5cbfb9;
case 0x5cbfba:c.instructions+=1;goto B5cbfba;
case 0x5cbfc0:goto L5cbfc0;
case 0x5cbfc1:c.instructions+=3;goto B5cbfc1;
case 0x5cbfcb:c.instructions+=2;goto B5cbfcb;
case 0x5cbfd1:c.instructions+=1;goto B5cbfd1;
case 0x5cbfd6:goto L5cbfd6;
case 0x5cbfdc:c.instructions+=11;goto B5cbfdc;
case 0x5cbfdf:c.instructions+=10;goto B5cbfdf;
case 0x5cbfe5:c.instructions+=9;goto B5cbfe5;
case 0x5cbfe8:c.instructions+=8;goto B5cbfe8;
case 0x5cbfea:c.instructions+=7;goto B5cbfea;
case 0x5cbfec:c.instructions+=6;goto B5cbfec;
case 0x5cbfef:c.instructions+=5;goto B5cbfef;
case 0x5cbff1:c.instructions+=4;goto B5cbff1;
case 0x5cbff2:c.instructions+=3;goto B5cbff2;
case 0x5cbff3:c.instructions+=2;goto B5cbff3;
case 0x5cbff7:c.instructions+=1;goto B5cbff7;
case 0x5cbffa:goto L5cbffa;
default:missing_instruction(c.pc);}
B5cb000:L5cb000:{c.instructions+=3;NFSU2_TR(0x5cb000);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cb004:{NFSU2_TR(0x5cb004);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb005:{NFSU2_TR(0x5cb005);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb00aull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5cb00a:L5cb00a:{c.instructions+=5;NFSU2_TR(0x5cb00a);
__builtin_memmove((R+24),(R+0),4);
}
B5cb00c:{NFSU2_TR(0x5cb00c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5cb00f:{NFSU2_TR(0x5cb00f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5cb012:{NFSU2_TR(0x5cb012);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5cb014:{NFSU2_TR(0x5cb014);
if(r1(R+518)){{goto L5cb71b;}}
}
B5cb01a:L5cb01a:{c.instructions+=3;NFSU2_TR(0x5cb01a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cb01d:{NFSU2_TR(0x5cb01d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5cb020:{NFSU2_TR(0x5cb020);
if(r1(R+518)){{goto L5cb71b;}}
}
B5cb026:L5cb026:{c.instructions+=4;NFSU2_TR(0x5cb026);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb027:{NFSU2_TR(0x5cb027);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb028:{NFSU2_TR(0x5cb028);
w4(R+4,u32(0x89e850ull));
}
B5cb02d:{NFSU2_TR(0x5cb02d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb032ull));
TAIL_STATIC(0x614300u,614);
}
B5cb032:L5cb032:{c.instructions+=13;NFSU2_TR(0x5cb032);
{u32 ea_=u32(u32(8005536u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cb038:{NFSU2_TR(0x5cb038);
{u32 ea_=u32(u32(9037916u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5cb03e:{NFSU2_TR(0x5cb03e);
__builtin_memmove((R+4),gp(0x7a27a0),4);
}
B5cb044:{NFSU2_TR(0x5cb044);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cb048:{NFSU2_TR(0x5cb048);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5cb04e:{NFSU2_TR(0x5cb04e);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5cb052:{NFSU2_TR(0x5cb052);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cb058:{NFSU2_TR(0x5cb058);
{u32 ea_=u32(u32(9037920u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5cb05e:{NFSU2_TR(0x5cb05e);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5cb062:{NFSU2_TR(0x5cb062);
{u32 ea_=u32(u32(7882084u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5cb068:{NFSU2_TR(0x5cb068);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5cb06a:{NFSU2_TR(0x5cb06a);
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
B5cb06d:{NFSU2_TR(0x5cb06d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cb077;}}
}
B5cb06f:L5cb06f:{c.instructions+=1;NFSU2_TR(0x5cb06f);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f19999aull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cb077:L5cb077:{c.instructions+=10;NFSU2_TR(0x5cb077);
__builtin_memmove((R+4),gp(0x86eb28),4);
}
B5cb07d:{NFSU2_TR(0x5cb07d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cb080:{NFSU2_TR(0x5cb080);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cb083:{NFSU2_TR(0x5cb083);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cb089:{NFSU2_TR(0x5cb089);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cb08b:{NFSU2_TR(0x5cb08b);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5cb08f:{NFSU2_TR(0x5cb08f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb090:{NFSU2_TR(0x5cb090);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb091:{NFSU2_TR(0x5cb091);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb092:{NFSU2_TR(0x5cb092);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb098ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb098:L5cb098:{c.instructions+=10;NFSU2_TR(0x5cb098);
__builtin_memmove((R+4),gp(0x86eb28),4);
}
B5cb09e:{NFSU2_TR(0x5cb09e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cb0a1:{NFSU2_TR(0x5cb0a1);
__builtin_memmove((R+28),gp(0x870cd8),4);
}
B5cb0a7:{NFSU2_TR(0x5cb0a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cb0aa:{NFSU2_TR(0x5cb0aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x484ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cb0b0:{NFSU2_TR(0x5cb0b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cb0b2:{NFSU2_TR(0x5cb0b2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb0b3:{NFSU2_TR(0x5cb0b3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb0b4:{NFSU2_TR(0x5cb0b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb0b5:{NFSU2_TR(0x5cb0b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb0b8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb0b8:L5cb0b8:{c.instructions+=14;NFSU2_TR(0x5cb0b8);
__builtin_memmove((R+8),gp(0x86eb28),4);
}
B5cb0be:{NFSU2_TR(0x5cb0be);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cb0c1:{NFSU2_TR(0x5cb0c1);
__builtin_memmove((R+28),gp(0x89e864),4);
}
B5cb0c7:{NFSU2_TR(0x5cb0c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B5cb0c9:{NFSU2_TR(0x5cb0c9);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffffffull))));
}
B5cb0cf:{NFSU2_TR(0x5cb0cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cb0d3:{NFSU2_TR(0x5cb0d3);
__builtin_memmove((R+0),(R+28),4);
}
B5cb0d5:{NFSU2_TR(0x5cb0d5);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5cb0d8:{NFSU2_TR(0x5cb0d8);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B5cb0dd:{NFSU2_TR(0x5cb0dd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5cb0df:{NFSU2_TR(0x5cb0df);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cb0e3:{NFSU2_TR(0x5cb0e3);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5cb0e7:{NFSU2_TR(0x5cb0e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cb0eb:{NFSU2_TR(0x5cb0eb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5cb0f3;}}
}
B5cb0ed:L5cb0ed:{c.instructions+=1;NFSU2_TR(0x5cb0ed);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5cb0f3:L5cb0f3:{c.instructions+=2;NFSU2_TR(0x5cb0f3);
{u32 ea_=u32(u32(7886096u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cb0f9:{NFSU2_TR(0x5cb0f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb0feull));
TAIL_STATIC(0x75bed4u,75b);
}
B5cb0fe:L5cb0fe:{c.instructions+=8;NFSU2_TR(0x5cb0fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B5cb101:{NFSU2_TR(0x5cb101);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffff00ull))));
}
B5cb106:{NFSU2_TR(0x5cb106);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffull))));
}
B5cb10c:{NFSU2_TR(0x5cb10c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5cb10f:{NFSU2_TR(0x5cb10f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5cb111:{NFSU2_TR(0x5cb111);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cb115:{NFSU2_TR(0x5cb115);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5cb119:{NFSU2_TR(0x5cb119);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5cb121;}}
}
B5cb11b:L5cb11b:{c.instructions+=1;NFSU2_TR(0x5cb11b);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5cb121:L5cb121:{c.instructions+=3;NFSU2_TR(0x5cb121);
{u32 ea_=u32(u32(7886096u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cb127:{NFSU2_TR(0x5cb127);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cb12b:{NFSU2_TR(0x5cb12b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb130ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5cb130:L5cb130:{c.instructions+=10;NFSU2_TR(0x5cb130);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cb134:{NFSU2_TR(0x5cb134);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B5cb139:{NFSU2_TR(0x5cb139);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B5cb13b:{NFSU2_TR(0x5cb13b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cb13f:{NFSU2_TR(0x5cb13f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B5cb144:{NFSU2_TR(0x5cb144);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5cb147:{NFSU2_TR(0x5cb147);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5cb149:{NFSU2_TR(0x5cb149);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cb14d:{NFSU2_TR(0x5cb14d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5cb151:{NFSU2_TR(0x5cb151);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5cb159;}}
}
B5cb153:L5cb153:{c.instructions+=1;NFSU2_TR(0x5cb153);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5cb159:L5cb159:{c.instructions+=3;NFSU2_TR(0x5cb159);
{u32 ea_=u32(u32(7886096u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cb15f:{NFSU2_TR(0x5cb15f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cb163:{NFSU2_TR(0x5cb163);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb168ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5cb168:L5cb168:{c.instructions+=11;NFSU2_TR(0x5cb168);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cb16c:{NFSU2_TR(0x5cb16c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B5cb171:{NFSU2_TR(0x5cb171);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cb173:{NFSU2_TR(0x5cb173);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb174:{NFSU2_TR(0x5cb174);
__builtin_memmove((R+4),gp(0x86eb28),4);
}
B5cb17a:{NFSU2_TR(0x5cb17a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cb17d:{NFSU2_TR(0x5cb17d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x45cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cb183:{NFSU2_TR(0x5cb183);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cb187:{NFSU2_TR(0x5cb187);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb188:{NFSU2_TR(0x5cb188);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb189:{NFSU2_TR(0x5cb189);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb18cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb18c:L5cb18c:{c.instructions+=2;NFSU2_TR(0x5cb18c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cb18f:{NFSU2_TR(0x5cb18f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb194ull));
TAIL_STATIC(0x5cf420u,5cf);
}
B5cb194:L5cb194:{c.instructions+=8;NFSU2_TR(0x5cb194);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cb197:{NFSU2_TR(0x5cb197);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cb19c:{NFSU2_TR(0x5cb19c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cb19e:{NFSU2_TR(0x5cb19e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb19f:{NFSU2_TR(0x5cb19f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cb1a1:{NFSU2_TR(0x5cb1a1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb1a2:{NFSU2_TR(0x5cb1a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb1a3:{NFSU2_TR(0x5cb1a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb1a9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb1a9:L5cb1a9:{c.instructions+=6;NFSU2_TR(0x5cb1a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cb1ac:{NFSU2_TR(0x5cb1ac);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cb1b1:{NFSU2_TR(0x5cb1b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cb1b3:{NFSU2_TR(0x5cb1b3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb1b4:{NFSU2_TR(0x5cb1b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb1b5:{NFSU2_TR(0x5cb1b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb1bbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb1bb:L5cb1bb:{c.instructions+=14;NFSU2_TR(0x5cb1bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cb1be:{NFSU2_TR(0x5cb1be);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cb1c1:{NFSU2_TR(0x5cb1c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cb1c5:{NFSU2_TR(0x5cb1c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cb1c9:{NFSU2_TR(0x5cb1c9);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cb1ce:{NFSU2_TR(0x5cb1ce);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5cb1d2:{NFSU2_TR(0x5cb1d2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb1d3:{NFSU2_TR(0x5cb1d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cb1d7:{NFSU2_TR(0x5cb1d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cb1db:{NFSU2_TR(0x5cb1db);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cb1df:{NFSU2_TR(0x5cb1df);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cb1e7:{NFSU2_TR(0x5cb1e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cb1e9:{NFSU2_TR(0x5cb1e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb1ea:{NFSU2_TR(0x5cb1ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb1f0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb1f0:L5cb1f0:{c.instructions+=4;NFSU2_TR(0x5cb1f0);
u8 U[8];
__builtin_memmove((U+0),gp(0x870cc4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cb1f6:{NFSU2_TR(0x5cb1f6);
__builtin_memmove(gp(0x870848),(R+28),4);
}
B5cb1fc:{NFSU2_TR(0x5cb1fc);
__builtin_memmove(gp(0x870910),(R+12),4);
}
B5cb202:{NFSU2_TR(0x5cb202);
if(r1(R+518)){{goto L5cb21d;}}
}
B5cb204:L5cb204:{c.instructions+=2;NFSU2_TR(0x5cb204);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb206:{NFSU2_TR(0x5cb206);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb20bull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5cb20b:L5cb20b:{c.instructions+=5;NFSU2_TR(0x5cb20b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5cb20e:{NFSU2_TR(0x5cb20e);
u8 U[4];
w4(U+0,u32(0x488b90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb213:{NFSU2_TR(0x5cb213);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb214:{NFSU2_TR(0x5cb214);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5cb218:{NFSU2_TR(0x5cb218);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb21dull));
TAIL_STATIC(0x5d6d20u,5d6);
}
B5cb21d:L5cb21d:{c.instructions+=2;NFSU2_TR(0x5cb21d);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cb224:{NFSU2_TR(0x5cb224);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cb22f;}}
}
B5cb226:L5cb226:{c.instructions+=2;NFSU2_TR(0x5cb226);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb227:{NFSU2_TR(0x5cb227);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb22cull));
TAIL_STATIC(0x60f880u,60f);
}
B5cb22c:L5cb22c:{c.instructions+=1;NFSU2_TR(0x5cb22c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5cb22f:L5cb22f:{c.instructions+=1;NFSU2_TR(0x5cb22f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb234ull));
TAIL_STATIC(0x5cf420u,5cf);
}
B5cb234:L5cb234:{c.instructions+=4;NFSU2_TR(0x5cb234);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb236:{NFSU2_TR(0x5cb236);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb237:{NFSU2_TR(0x5cb237);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5cb23b:{NFSU2_TR(0x5cb23b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb240ull));
TAIL_STATIC(0x5d6ad0u,5d6);
}
B5cb240:L5cb240:{c.instructions+=5;NFSU2_TR(0x5cb240);
__builtin_memmove((R+4),gp(0x86eb28),4);
}
B5cb246:{NFSU2_TR(0x5cb246);
__builtin_memmove(gp(0x870910),(R+4),4);
}
B5cb24c:{NFSU2_TR(0x5cb24c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5cb24e:{NFSU2_TR(0x5cb24e);
__builtin_memmove((R+28),(R+4),4);
}
B5cb250:{NFSU2_TR(0x5cb250);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb253ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb253:L5cb253:{c.instructions+=6;NFSU2_TR(0x5cb253);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cb256:{NFSU2_TR(0x5cb256);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cb25b:{NFSU2_TR(0x5cb25b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cb25d:{NFSU2_TR(0x5cb25d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb25e:{NFSU2_TR(0x5cb25e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb25f:{NFSU2_TR(0x5cb25f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb265ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb265:L5cb265:{c.instructions+=7;NFSU2_TR(0x5cb265);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cb268:{NFSU2_TR(0x5cb268);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5cb26a:{NFSU2_TR(0x5cb26a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb26b:{NFSU2_TR(0x5cb26b);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5cb26f:{NFSU2_TR(0x5cb26f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb270:{NFSU2_TR(0x5cb270);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb271:{NFSU2_TR(0x5cb271);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb277ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb277:L5cb277:{c.instructions+=3;NFSU2_TR(0x5cb277);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb278:{NFSU2_TR(0x5cb278);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb279:{NFSU2_TR(0x5cb279);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb27eull));
TAIL_STATIC(0x61d4b0u,61d);
}
B5cb27e:L5cb27e:{c.instructions+=5;NFSU2_TR(0x5cb27e);
__builtin_memmove((R+4),gp(0x86eb28),4);
}
B5cb284:{NFSU2_TR(0x5cb284);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cb286:{NFSU2_TR(0x5cb286);
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
B5cb289:{NFSU2_TR(0x5cb289);
__builtin_memmove((R+28),(R+4),4);
}
B5cb28b:{NFSU2_TR(0x5cb28b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb28eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb28e:L5cb28e:{c.instructions+=4;NFSU2_TR(0x5cb28e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cb291:{NFSU2_TR(0x5cb291);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cb293:{NFSU2_TR(0x5cb293);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb294:{NFSU2_TR(0x5cb294);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb29aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb29a:L5cb29a:{c.instructions+=2;NFSU2_TR(0x5cb29a);
__builtin_memmove(gp(0x870910),(R+12),4);
}
B5cb2a0:{NFSU2_TR(0x5cb2a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb2a5ull));
TAIL_STATIC(0x5cf420u,5cf);
}
B5cb2a5:L5cb2a5:{c.instructions+=5;NFSU2_TR(0x5cb2a5);
__builtin_memmove((R+4),gp(0x86eb28),4);
}
B5cb2ab:{NFSU2_TR(0x5cb2ab);
__builtin_memmove(gp(0x870910),(R+4),4);
}
B5cb2b1:{NFSU2_TR(0x5cb2b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cb2b3:{NFSU2_TR(0x5cb2b3);
__builtin_memmove((R+28),(R+4),4);
}
B5cb2b5:{NFSU2_TR(0x5cb2b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb2b8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb2b8:L5cb2b8:{c.instructions+=6;NFSU2_TR(0x5cb2b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cb2bb:{NFSU2_TR(0x5cb2bb);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cb2c0:{NFSU2_TR(0x5cb2c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cb2c2:{NFSU2_TR(0x5cb2c2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb2c3:{NFSU2_TR(0x5cb2c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb2c4:{NFSU2_TR(0x5cb2c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb2caull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb2ca:L5cb2ca:{c.instructions+=7;NFSU2_TR(0x5cb2ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cb2cd:{NFSU2_TR(0x5cb2cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5cb2cf:{NFSU2_TR(0x5cb2cf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb2d0:{NFSU2_TR(0x5cb2d0);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5cb2d4:{NFSU2_TR(0x5cb2d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb2d5:{NFSU2_TR(0x5cb2d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb2d6:{NFSU2_TR(0x5cb2d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb2dcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb2dc:L5cb2dc:{c.instructions+=2;NFSU2_TR(0x5cb2dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb2dd:{NFSU2_TR(0x5cb2dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb2e2ull));
TAIL_STATIC(0x5d7e70u,5d7);
}
B5cb2e2:L5cb2e2:{c.instructions+=2;NFSU2_TR(0x5cb2e2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb2e3:{NFSU2_TR(0x5cb2e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb2e8ull));
TAIL_STATIC(0x566400u,566);
}
B5cb2e8:L5cb2e8:{c.instructions+=5;NFSU2_TR(0x5cb2e8);
__builtin_memmove((R+4),gp(0x86eb28),4);
}
B5cb2ee:{NFSU2_TR(0x5cb2ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cb2f0:{NFSU2_TR(0x5cb2f0);
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
B5cb2f3:{NFSU2_TR(0x5cb2f3);
__builtin_memmove((R+28),(R+4),4);
}
B5cb2f5:{NFSU2_TR(0x5cb2f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb2f8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb2f8:L5cb2f8:{c.instructions+=4;NFSU2_TR(0x5cb2f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cb2fb:{NFSU2_TR(0x5cb2fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cb2fd:{NFSU2_TR(0x5cb2fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb2fe:{NFSU2_TR(0x5cb2fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb304ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb304:L5cb304:{c.instructions+=2;NFSU2_TR(0x5cb304);
__builtin_memmove(gp(0x870910),(R+12),4);
}
B5cb30a:{NFSU2_TR(0x5cb30a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb30full));
TAIL_STATIC(0x5cf420u,5cf);
}
B5cb30f:L5cb30f:{c.instructions+=2;NFSU2_TR(0x5cb30f);
u8 U[14];
__builtin_memmove((U+6),gp(0x870cdc),4);
w1(R+512,u8((r4(U+6))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+12)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cb315:{NFSU2_TR(0x5cb315);
if(r1(R+518)){{goto L5cb324;}}
}
B5cb317:L5cb317:{c.instructions+=2;NFSU2_TR(0x5cb317);
u8 U[14];
__builtin_memmove((U+6),gp(0x7fee38),4);
w1(R+512,u8((r4(U+6))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+12)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cb31d:{NFSU2_TR(0x5cb31d);
if(r1(R+518)){{goto L5cb324;}}
}
B5cb31f:L5cb31f:{c.instructions+=1;NFSU2_TR(0x5cb31f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb324ull));
TAIL_STATIC(0x5cc460u,5cc);
}
B5cb324:L5cb324:{c.instructions+=1;NFSU2_TR(0x5cb324);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb329ull));
TAIL_STATIC(0x5c2430u,5c2);
}
B5cb329:L5cb329:{c.instructions+=2;NFSU2_TR(0x5cb329);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb32a:{NFSU2_TR(0x5cb32a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb32full));
TAIL_STATIC(0x6316d0u,631);
}
B5cb32f:L5cb32f:{c.instructions+=6;NFSU2_TR(0x5cb32f);
__builtin_memmove((R+4),gp(0x86eb28),4);
}
B5cb335:{NFSU2_TR(0x5cb335);
__builtin_memmove(gp(0x870910),(R+4),4);
}
B5cb33b:{NFSU2_TR(0x5cb33b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cb33d:{NFSU2_TR(0x5cb33d);
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
B5cb340:{NFSU2_TR(0x5cb340);
__builtin_memmove((R+28),(R+4),4);
}
B5cb342:{NFSU2_TR(0x5cb342);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb345ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb345:L5cb345:{c.instructions+=6;NFSU2_TR(0x5cb345);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cb348:{NFSU2_TR(0x5cb348);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cb34d:{NFSU2_TR(0x5cb34d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cb34f:{NFSU2_TR(0x5cb34f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb350:{NFSU2_TR(0x5cb350);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb351:{NFSU2_TR(0x5cb351);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb357ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb357:L5cb357:{c.instructions+=7;NFSU2_TR(0x5cb357);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cb35a:{NFSU2_TR(0x5cb35a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5cb35c:{NFSU2_TR(0x5cb35c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb35d:{NFSU2_TR(0x5cb35d);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5cb361:{NFSU2_TR(0x5cb361);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb362:{NFSU2_TR(0x5cb362);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb363:{NFSU2_TR(0x5cb363);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb369ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb369:L5cb369:{c.instructions+=3;NFSU2_TR(0x5cb369);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb36a:{NFSU2_TR(0x5cb36a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb36b:{NFSU2_TR(0x5cb36b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb370ull));
TAIL_STATIC(0x630de0u,630);
}
B5cb370:L5cb370:{c.instructions+=5;NFSU2_TR(0x5cb370);
__builtin_memmove((R+4),gp(0x86eb28),4);
}
B5cb376:{NFSU2_TR(0x5cb376);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cb378:{NFSU2_TR(0x5cb378);
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
B5cb37b:{NFSU2_TR(0x5cb37b);
__builtin_memmove((R+28),(R+4),4);
}
B5cb37d:{NFSU2_TR(0x5cb37d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb380ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb380:L5cb380:{c.instructions+=4;NFSU2_TR(0x5cb380);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cb383:{NFSU2_TR(0x5cb383);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cb385:{NFSU2_TR(0x5cb385);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb386:{NFSU2_TR(0x5cb386);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb38cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb38c:L5cb38c:{c.instructions+=3;NFSU2_TR(0x5cb38c);
u8 U[22];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5cb391:{NFSU2_TR(0x5cb391);
__builtin_memmove(gp(0x870910),(R+12),4);
}
B5cb397:{NFSU2_TR(0x5cb397);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cb3f8;}}
}
B5cb399:L5cb399:{c.instructions+=5;NFSU2_TR(0x5cb399);
__builtin_memmove((R+4),gp(0x86eb28),4);
}
B5cb39f:{NFSU2_TR(0x5cb39f);
__builtin_memmove(gp(0x870910),(R+4),4);
}
B5cb3a5:{NFSU2_TR(0x5cb3a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cb3a7:{NFSU2_TR(0x5cb3a7);
__builtin_memmove((R+28),(R+4),4);
}
B5cb3a9:{NFSU2_TR(0x5cb3a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb3acull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb3ac:L5cb3ac:{c.instructions+=6;NFSU2_TR(0x5cb3ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cb3af:{NFSU2_TR(0x5cb3af);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cb3b4:{NFSU2_TR(0x5cb3b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cb3b6:{NFSU2_TR(0x5cb3b6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb3b7:{NFSU2_TR(0x5cb3b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb3b8:{NFSU2_TR(0x5cb3b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb3beull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb3be:L5cb3be:{c.instructions+=7;NFSU2_TR(0x5cb3be);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cb3c1:{NFSU2_TR(0x5cb3c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5cb3c3:{NFSU2_TR(0x5cb3c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb3c4:{NFSU2_TR(0x5cb3c4);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5cb3c8:{NFSU2_TR(0x5cb3c8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb3c9:{NFSU2_TR(0x5cb3c9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb3ca:{NFSU2_TR(0x5cb3ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb3d0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb3d0:L5cb3d0:{c.instructions+=2;NFSU2_TR(0x5cb3d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb3d1:{NFSU2_TR(0x5cb3d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb3d6ull));
TAIL_STATIC(0x4022c0u,402);
}
B5cb3d6:L5cb3d6:{c.instructions+=5;NFSU2_TR(0x5cb3d6);
__builtin_memmove((R+4),gp(0x86eb28),4);
}
B5cb3dc:{NFSU2_TR(0x5cb3dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cb3de:{NFSU2_TR(0x5cb3de);
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
B5cb3e1:{NFSU2_TR(0x5cb3e1);
__builtin_memmove((R+28),(R+4),4);
}
B5cb3e3:{NFSU2_TR(0x5cb3e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb3e6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb3e6:L5cb3e6:{c.instructions+=4;NFSU2_TR(0x5cb3e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cb3e9:{NFSU2_TR(0x5cb3e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cb3eb:{NFSU2_TR(0x5cb3eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb3ec:{NFSU2_TR(0x5cb3ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb3f2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb3f2:L5cb3f2:{c.instructions+=1;NFSU2_TR(0x5cb3f2);
__builtin_memmove(gp(0x870910),(R+12),4);
}
B5cb3f8:L5cb3f8:{c.instructions+=1;NFSU2_TR(0x5cb3f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb3fdull));
TAIL_STATIC(0x5cf420u,5cf);
}
B5cb3fd:L5cb3fd:{c.instructions+=2;NFSU2_TR(0x5cb3fd);
u8 U[14];
__builtin_memmove((U+6),gp(0x8654a4),4);
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
B5cb404:{NFSU2_TR(0x5cb404);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cb49b;}}
}
B5cb40a:L5cb40a:{c.instructions+=2;NFSU2_TR(0x5cb40a);
u8 U[14];
__builtin_memmove((U+6),gp(0x870cec),4);
w1(R+512,u8((r4(U+6))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+12)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cb410:{NFSU2_TR(0x5cb410);
if(r1(R+518)){{goto L5cb49b;}}
}
B5cb416:L5cb416:{c.instructions+=5;NFSU2_TR(0x5cb416);
__builtin_memmove((R+4),gp(0x86eb28),4);
}
B5cb41c:{NFSU2_TR(0x5cb41c);
__builtin_memmove(gp(0x870910),(R+4),4);
}
B5cb422:{NFSU2_TR(0x5cb422);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cb424:{NFSU2_TR(0x5cb424);
__builtin_memmove((R+28),(R+4),4);
}
B5cb426:{NFSU2_TR(0x5cb426);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb429ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb429:L5cb429:{c.instructions+=6;NFSU2_TR(0x5cb429);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cb42c:{NFSU2_TR(0x5cb42c);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cb431:{NFSU2_TR(0x5cb431);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cb433:{NFSU2_TR(0x5cb433);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb434:{NFSU2_TR(0x5cb434);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb435:{NFSU2_TR(0x5cb435);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb43bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb43b:L5cb43b:{c.instructions+=7;NFSU2_TR(0x5cb43b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cb43e:{NFSU2_TR(0x5cb43e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5cb440:{NFSU2_TR(0x5cb440);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb441:{NFSU2_TR(0x5cb441);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5cb445:{NFSU2_TR(0x5cb445);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb446:{NFSU2_TR(0x5cb446);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb447:{NFSU2_TR(0x5cb447);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb44dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb44d:L5cb44d:{c.instructions+=6;NFSU2_TR(0x5cb44d);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cb452:{NFSU2_TR(0x5cb452);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cb454:{NFSU2_TR(0x5cb454);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb455:{NFSU2_TR(0x5cb455);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb457:{NFSU2_TR(0x5cb457);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb458:{NFSU2_TR(0x5cb458);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb45eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb45e:L5cb45e:{c.instructions+=2;NFSU2_TR(0x5cb45e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb460:{NFSU2_TR(0x5cb460);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb465ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5cb465:L5cb465:{c.instructions+=3;NFSU2_TR(0x5cb465);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cb468:{NFSU2_TR(0x5cb468);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5cb46b:{NFSU2_TR(0x5cb46b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb470ull));
TAIL_STATIC(0x61f120u,61f);
}
B5cb470:L5cb470:{c.instructions+=6;NFSU2_TR(0x5cb470);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cb475:{NFSU2_TR(0x5cb475);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cb477:{NFSU2_TR(0x5cb477);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb479:{NFSU2_TR(0x5cb479);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb47b:{NFSU2_TR(0x5cb47b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb47c:{NFSU2_TR(0x5cb47c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb482ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb482:L5cb482:{c.instructions+=4;NFSU2_TR(0x5cb482);
__builtin_memmove((R+4),gp(0x86eb28),4);
}
B5cb488:{NFSU2_TR(0x5cb488);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cb48a:{NFSU2_TR(0x5cb48a);
__builtin_memmove((R+28),(R+4),4);
}
B5cb48c:{NFSU2_TR(0x5cb48c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb48full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb48f:L5cb48f:{c.instructions+=4;NFSU2_TR(0x5cb48f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cb492:{NFSU2_TR(0x5cb492);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cb494:{NFSU2_TR(0x5cb494);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb495:{NFSU2_TR(0x5cb495);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb49bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb49b:L5cb49b:{c.instructions+=5;NFSU2_TR(0x5cb49b);
__builtin_memmove((R+4),gp(0x86eb44),4);
}
B5cb4a1:{NFSU2_TR(0x5cb4a1);
__builtin_memmove(gp(0x870910),(R+4),4);
}
B5cb4a7:{NFSU2_TR(0x5cb4a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cb4a9:{NFSU2_TR(0x5cb4a9);
__builtin_memmove((R+28),(R+4),4);
}
B5cb4ab:{NFSU2_TR(0x5cb4ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb4aeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb4ae:L5cb4ae:{c.instructions+=6;NFSU2_TR(0x5cb4ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cb4b1:{NFSU2_TR(0x5cb4b1);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cb4b6:{NFSU2_TR(0x5cb4b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cb4b8:{NFSU2_TR(0x5cb4b8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb4b9:{NFSU2_TR(0x5cb4b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb4ba:{NFSU2_TR(0x5cb4ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb4c0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb4c0:L5cb4c0:{c.instructions+=7;NFSU2_TR(0x5cb4c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cb4c3:{NFSU2_TR(0x5cb4c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5cb4c5:{NFSU2_TR(0x5cb4c5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb4c6:{NFSU2_TR(0x5cb4c6);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5cb4ca:{NFSU2_TR(0x5cb4ca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb4cb:{NFSU2_TR(0x5cb4cb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb4cc:{NFSU2_TR(0x5cb4cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb4d2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb4d2:L5cb4d2:{c.instructions+=2;NFSU2_TR(0x5cb4d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb4d3:{NFSU2_TR(0x5cb4d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb4d8ull));
TAIL_STATIC(0x5dc460u,5dc);
}
B5cb4d8:L5cb4d8:{c.instructions+=5;NFSU2_TR(0x5cb4d8);
__builtin_memmove((R+4),gp(0x86eb44),4);
}
B5cb4de:{NFSU2_TR(0x5cb4de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cb4e0:{NFSU2_TR(0x5cb4e0);
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
B5cb4e3:{NFSU2_TR(0x5cb4e3);
__builtin_memmove((R+28),(R+4),4);
}
B5cb4e5:{NFSU2_TR(0x5cb4e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb4e8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb4e8:L5cb4e8:{c.instructions+=4;NFSU2_TR(0x5cb4e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cb4eb:{NFSU2_TR(0x5cb4eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cb4ed:{NFSU2_TR(0x5cb4ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb4ee:{NFSU2_TR(0x5cb4ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb4f4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb4f4:L5cb4f4:{c.instructions+=5;NFSU2_TR(0x5cb4f4);
__builtin_memmove((R+4),gp(0x86eb5c),4);
}
B5cb4fa:{NFSU2_TR(0x5cb4fa);
__builtin_memmove(gp(0x870910),(R+4),4);
}
B5cb500:{NFSU2_TR(0x5cb500);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cb502:{NFSU2_TR(0x5cb502);
__builtin_memmove((R+28),(R+4),4);
}
B5cb504:{NFSU2_TR(0x5cb504);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb507ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb507:L5cb507:{c.instructions+=6;NFSU2_TR(0x5cb507);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cb50a:{NFSU2_TR(0x5cb50a);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cb50f:{NFSU2_TR(0x5cb50f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cb511:{NFSU2_TR(0x5cb511);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb512:{NFSU2_TR(0x5cb512);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb513:{NFSU2_TR(0x5cb513);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb519ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb519:L5cb519:{c.instructions+=7;NFSU2_TR(0x5cb519);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cb51c:{NFSU2_TR(0x5cb51c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5cb51e:{NFSU2_TR(0x5cb51e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb51f:{NFSU2_TR(0x5cb51f);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5cb523:{NFSU2_TR(0x5cb523);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb524:{NFSU2_TR(0x5cb524);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb525:{NFSU2_TR(0x5cb525);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb52bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb52b:L5cb52b:{c.instructions+=3;NFSU2_TR(0x5cb52b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb52c:{NFSU2_TR(0x5cb52c);
w4(R+4,u32(0x835860ull));
}
B5cb531:{NFSU2_TR(0x5cb531);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb536ull));
TAIL_STATIC(0x48bdf0u,48b);
}
B5cb536:L5cb536:{c.instructions+=3;NFSU2_TR(0x5cb536);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb537:{NFSU2_TR(0x5cb537);
w4(R+4,u32(0x8357e0ull));
}
B5cb53c:{NFSU2_TR(0x5cb53c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb541ull));
TAIL_STATIC(0x48bdf0u,48b);
}
B5cb541:L5cb541:{c.instructions+=3;NFSU2_TR(0x5cb541);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb542:{NFSU2_TR(0x5cb542);
w4(R+4,u32(0x8357e0ull));
}
B5cb547:{NFSU2_TR(0x5cb547);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb54cull));
TAIL_STATIC(0x4031c0u,403);
}
B5cb54c:L5cb54c:{c.instructions+=4;NFSU2_TR(0x5cb54c);
__builtin_memmove((R+4),gp(0x86eb5c),4);
}
B5cb552:{NFSU2_TR(0x5cb552);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cb554:{NFSU2_TR(0x5cb554);
__builtin_memmove((R+28),(R+4),4);
}
B5cb556:{NFSU2_TR(0x5cb556);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb559ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb559:L5cb559:{c.instructions+=4;NFSU2_TR(0x5cb559);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cb55c:{NFSU2_TR(0x5cb55c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cb55e:{NFSU2_TR(0x5cb55e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb55f:{NFSU2_TR(0x5cb55f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb565ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb565:L5cb565:{c.instructions+=3;NFSU2_TR(0x5cb565);
u8 U[8];
__builtin_memmove((U+0),gp(0x870ce4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cb56b:{NFSU2_TR(0x5cb56b);
__builtin_memmove(gp(0x870910),(R+12),4);
}
B5cb571:{NFSU2_TR(0x5cb571);
if(r1(R+518)){{goto L5cb623;}}
}
B5cb577:L5cb577:{c.instructions+=2;NFSU2_TR(0x5cb577);
u8 U[14];
__builtin_memmove((U+6),gp(0x870ce0),4);
w1(R+512,u8((r4(U+6))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+12)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cb57d:{NFSU2_TR(0x5cb57d);
if(r1(R+518)){{goto L5cb5ac;}}
}
B5cb57f:L5cb57f:{c.instructions+=6;NFSU2_TR(0x5cb57f);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cb584:{NFSU2_TR(0x5cb584);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cb586:{NFSU2_TR(0x5cb586);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb587:{NFSU2_TR(0x5cb587);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb589:{NFSU2_TR(0x5cb589);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb58a:{NFSU2_TR(0x5cb58a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb590ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb590:L5cb590:{c.instructions+=1;NFSU2_TR(0x5cb590);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb595ull));
{goto L5cbb00;}
}
B5cb595:L5cb595:{c.instructions+=6;NFSU2_TR(0x5cb595);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cb59a:{NFSU2_TR(0x5cb59a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cb59c:{NFSU2_TR(0x5cb59c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb59e:{NFSU2_TR(0x5cb59e);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb5a0:{NFSU2_TR(0x5cb5a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb5a1:{NFSU2_TR(0x5cb5a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb5a7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb5a7:L5cb5a7:{c.instructions+=1;NFSU2_TR(0x5cb5a7);
{goto L5cb6b3;}
}
B5cb5ac:L5cb5ac:{c.instructions+=5;NFSU2_TR(0x5cb5ac);
__builtin_memmove((R+4),gp(0x86eb5c),4);
}
B5cb5b2:{NFSU2_TR(0x5cb5b2);
__builtin_memmove(gp(0x870910),(R+4),4);
}
B5cb5b8:{NFSU2_TR(0x5cb5b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cb5ba:{NFSU2_TR(0x5cb5ba);
__builtin_memmove((R+28),(R+4),4);
}
B5cb5bc:{NFSU2_TR(0x5cb5bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb5bfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb5bf:L5cb5bf:{c.instructions+=6;NFSU2_TR(0x5cb5bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cb5c2:{NFSU2_TR(0x5cb5c2);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cb5c7:{NFSU2_TR(0x5cb5c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cb5c9:{NFSU2_TR(0x5cb5c9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb5ca:{NFSU2_TR(0x5cb5ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb5cb:{NFSU2_TR(0x5cb5cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb5d1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb5d1:L5cb5d1:{c.instructions+=7;NFSU2_TR(0x5cb5d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cb5d4:{NFSU2_TR(0x5cb5d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5cb5d6:{NFSU2_TR(0x5cb5d6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb5d7:{NFSU2_TR(0x5cb5d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5cb5db:{NFSU2_TR(0x5cb5db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb5dc:{NFSU2_TR(0x5cb5dc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb5dd:{NFSU2_TR(0x5cb5dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb5e3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb5e3:L5cb5e3:{c.instructions+=6;NFSU2_TR(0x5cb5e3);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cb5e8:{NFSU2_TR(0x5cb5e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cb5ea:{NFSU2_TR(0x5cb5ea);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb5eb:{NFSU2_TR(0x5cb5eb);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb5ed:{NFSU2_TR(0x5cb5ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb5ee:{NFSU2_TR(0x5cb5ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb5f4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb5f4:L5cb5f4:{c.instructions+=3;NFSU2_TR(0x5cb5f4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb5f5:{NFSU2_TR(0x5cb5f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb5f6:{NFSU2_TR(0x5cb5f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb5fbull));
TAIL_STATIC(0x491860u,491);
}
B5cb5fb:L5cb5fb:{c.instructions+=3;NFSU2_TR(0x5cb5fb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb5fc:{NFSU2_TR(0x5cb5fc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb5fd:{NFSU2_TR(0x5cb5fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb602ull));
TAIL_STATIC(0x61ae90u,61a);
}
B5cb602:L5cb602:{c.instructions+=3;NFSU2_TR(0x5cb602);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb603:{NFSU2_TR(0x5cb603);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb604:{NFSU2_TR(0x5cb604);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb609ull));
TAIL_STATIC(0x61ace0u,61a);
}
B5cb609:L5cb609:{c.instructions+=4;NFSU2_TR(0x5cb609);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb60a:{NFSU2_TR(0x5cb60a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb60b:{NFSU2_TR(0x5cb60b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb60c:{NFSU2_TR(0x5cb60c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb611ull));
TAIL_STATIC(0x494270u,494);
}
B5cb611:L5cb611:{c.instructions+=2;NFSU2_TR(0x5cb611);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb612:{NFSU2_TR(0x5cb612);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb617ull));
TAIL_STATIC(0x61b1f0u,61b);
}
B5cb617:L5cb617:{c.instructions+=3;NFSU2_TR(0x5cb617);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb618:{NFSU2_TR(0x5cb618);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb619:{NFSU2_TR(0x5cb619);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb61eull));
TAIL_STATIC(0x61ac90u,61a);
}
B5cb61e:L5cb61e:{c.instructions+=2;NFSU2_TR(0x5cb61e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cb621:{NFSU2_TR(0x5cb621);
{goto L5cb682;}
}
B5cb623:L5cb623:{c.instructions+=2;NFSU2_TR(0x5cb623);
u8 U[14];
__builtin_memmove((U+6),gp(0x8654a4),4);
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
B5cb62a:{NFSU2_TR(0x5cb62a);
if(r1(R+518)){{goto L5cb6b3;}}
}
B5cb630:L5cb630:{c.instructions+=5;NFSU2_TR(0x5cb630);
__builtin_memmove((R+4),gp(0x86eb5c),4);
}
B5cb636:{NFSU2_TR(0x5cb636);
__builtin_memmove(gp(0x870910),(R+4),4);
}
B5cb63c:{NFSU2_TR(0x5cb63c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cb63e:{NFSU2_TR(0x5cb63e);
__builtin_memmove((R+28),(R+4),4);
}
B5cb640:{NFSU2_TR(0x5cb640);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb643ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb643:L5cb643:{c.instructions+=6;NFSU2_TR(0x5cb643);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cb646:{NFSU2_TR(0x5cb646);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cb64b:{NFSU2_TR(0x5cb64b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cb64d:{NFSU2_TR(0x5cb64d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb64e:{NFSU2_TR(0x5cb64e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb64f:{NFSU2_TR(0x5cb64f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb655ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb655:L5cb655:{c.instructions+=7;NFSU2_TR(0x5cb655);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cb658:{NFSU2_TR(0x5cb658);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5cb65a:{NFSU2_TR(0x5cb65a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb65b:{NFSU2_TR(0x5cb65b);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5cb65f:{NFSU2_TR(0x5cb65f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb660:{NFSU2_TR(0x5cb660);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb661:{NFSU2_TR(0x5cb661);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb667ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb667:L5cb667:{c.instructions+=6;NFSU2_TR(0x5cb667);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cb66c:{NFSU2_TR(0x5cb66c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cb66e:{NFSU2_TR(0x5cb66e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb66f:{NFSU2_TR(0x5cb66f);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb671:{NFSU2_TR(0x5cb671);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb672:{NFSU2_TR(0x5cb672);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb678ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb678:L5cb678:{c.instructions+=3;NFSU2_TR(0x5cb678);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb679:{NFSU2_TR(0x5cb679);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb67a:{NFSU2_TR(0x5cb67a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb67full));
TAIL_STATIC(0x61ac90u,61a);
}
B5cb67f:L5cb67f:{c.instructions+=1;NFSU2_TR(0x5cb67f);
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
B5cb682:L5cb682:{c.instructions+=6;NFSU2_TR(0x5cb682);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cb687:{NFSU2_TR(0x5cb687);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cb689:{NFSU2_TR(0x5cb689);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb68b:{NFSU2_TR(0x5cb68b);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb68d:{NFSU2_TR(0x5cb68d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb68e:{NFSU2_TR(0x5cb68e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb694ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb694:L5cb694:{c.instructions+=4;NFSU2_TR(0x5cb694);
__builtin_memmove((R+4),gp(0x86eb5c),4);
}
B5cb69a:{NFSU2_TR(0x5cb69a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cb69c:{NFSU2_TR(0x5cb69c);
__builtin_memmove((R+28),(R+4),4);
}
B5cb69e:{NFSU2_TR(0x5cb69e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb6a1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb6a1:L5cb6a1:{c.instructions+=4;NFSU2_TR(0x5cb6a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cb6a4:{NFSU2_TR(0x5cb6a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cb6a6:{NFSU2_TR(0x5cb6a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb6a7:{NFSU2_TR(0x5cb6a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb6adull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb6ad:L5cb6ad:{c.instructions+=1;NFSU2_TR(0x5cb6ad);
__builtin_memmove(gp(0x870910),(R+12),4);
}
B5cb6b3:L5cb6b3:{c.instructions+=2;NFSU2_TR(0x5cb6b3);
u8 U[14];
__builtin_memmove((U+6),gp(0x870cd0),4);
w1(R+512,u8((r4(U+6))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+12)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cb6b9:{NFSU2_TR(0x5cb6b9);
if(r1(R+518)){{goto L5cb71b;}}
}
B5cb6bb:L5cb6bb:{c.instructions+=5;NFSU2_TR(0x5cb6bb);
__builtin_memmove((R+4),gp(0x86eb28),4);
}
B5cb6c1:{NFSU2_TR(0x5cb6c1);
__builtin_memmove(gp(0x870910),(R+4),4);
}
B5cb6c7:{NFSU2_TR(0x5cb6c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cb6c9:{NFSU2_TR(0x5cb6c9);
__builtin_memmove((R+28),(R+4),4);
}
B5cb6cb:{NFSU2_TR(0x5cb6cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb6ceull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb6ce:L5cb6ce:{c.instructions+=6;NFSU2_TR(0x5cb6ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cb6d1:{NFSU2_TR(0x5cb6d1);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cb6d6:{NFSU2_TR(0x5cb6d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cb6d8:{NFSU2_TR(0x5cb6d8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb6d9:{NFSU2_TR(0x5cb6d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb6da:{NFSU2_TR(0x5cb6da);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb6e0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb6e0:L5cb6e0:{c.instructions+=7;NFSU2_TR(0x5cb6e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cb6e3:{NFSU2_TR(0x5cb6e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5cb6e5:{NFSU2_TR(0x5cb6e5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb6e6:{NFSU2_TR(0x5cb6e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5cb6ea:{NFSU2_TR(0x5cb6ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb6eb:{NFSU2_TR(0x5cb6eb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb6ec:{NFSU2_TR(0x5cb6ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb6f2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb6f2:L5cb6f2:{c.instructions+=3;NFSU2_TR(0x5cb6f2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb6f3:{NFSU2_TR(0x5cb6f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb6f4:{NFSU2_TR(0x5cb6f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb6f9ull));
TAIL_STATIC(0x611060u,611);
}
B5cb6f9:L5cb6f9:{c.instructions+=5;NFSU2_TR(0x5cb6f9);
__builtin_memmove((R+4),gp(0x86eb28),4);
}
B5cb6ff:{NFSU2_TR(0x5cb6ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cb701:{NFSU2_TR(0x5cb701);
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
B5cb704:{NFSU2_TR(0x5cb704);
__builtin_memmove((R+24),(R+4),4);
}
B5cb706:{NFSU2_TR(0x5cb706);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb709ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb709:L5cb709:{c.instructions+=4;NFSU2_TR(0x5cb709);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cb70c:{NFSU2_TR(0x5cb70c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cb70e:{NFSU2_TR(0x5cb70e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb70f:{NFSU2_TR(0x5cb70f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb715ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb715:L5cb715:{c.instructions+=1;NFSU2_TR(0x5cb715);
__builtin_memmove(gp(0x870910),(R+12),4);
}
B5cb71b:L5cb71b:{c.instructions+=5;NFSU2_TR(0x5cb71b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cb71f:{NFSU2_TR(0x5cb71f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5cb720:{NFSU2_TR(0x5cb720);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cb723:{NFSU2_TR(0x5cb723);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cb727:{NFSU2_TR(0x5cb727);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cb000u);}goto L5cb000;}}
}
B5cb72d:L5cb72d:{c.instructions+=3;NFSU2_TR(0x5cb72d);
u8 U[5];
__builtin_memmove((U+3),gp(0x8709d0),1);
w1(R+512,u8((r1(U+3))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+12)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5cb733:{NFSU2_TR(0x5cb733);
__builtin_memmove(gp(0x87082c),(R+12),1);
}
B5cb739:{NFSU2_TR(0x5cb739);
if(r1(R+518)){{goto L5cb768;}}
}
B5cb73b:L5cb73b:{c.instructions+=6;NFSU2_TR(0x5cb73b);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cb740:{NFSU2_TR(0x5cb740);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cb742:{NFSU2_TR(0x5cb742);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb744:{NFSU2_TR(0x5cb744);
u8 U[4];
w4(U+0,u32(0xa8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb749:{NFSU2_TR(0x5cb749);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb74a:{NFSU2_TR(0x5cb74a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb750ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cb750:L5cb750:{c.instructions+=9;NFSU2_TR(0x5cb750);
__builtin_memmove((R+0),gp(0x870850),4);
}
B5cb755:{NFSU2_TR(0x5cb755);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb756:{NFSU2_TR(0x5cb756);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb758:{NFSU2_TR(0x5cb758);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb75a:{NFSU2_TR(0x5cb75a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb75c:{NFSU2_TR(0x5cb75c);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb75e:{NFSU2_TR(0x5cb75e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb75f:{NFSU2_TR(0x5cb75f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb760:{NFSU2_TR(0x5cb760);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb765ull));
TAIL_STATIC(0x5c7140u,5c7);
}
B5cb765:L5cb765:{c.instructions+=1;NFSU2_TR(0x5cb765);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B5cb768:L5cb768:{c.instructions+=2;NFSU2_TR(0x5cb768);
u8 U[8];
__builtin_memmove((U+0),gp(0x870cfc),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cb76e:{NFSU2_TR(0x5cb76e);
if(r1(R+518)){{goto L5cb787;}}
}
B5cb770:L5cb770:{c.instructions+=2;NFSU2_TR(0x5cb770);
u8 U[8];
__builtin_memmove((U+0),gp(0x870ce4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cb776:{NFSU2_TR(0x5cb776);
if(r1(R+518)){{goto L5cb787;}}
}
B5cb778:L5cb778:{c.instructions+=3;NFSU2_TR(0x5cb778);
u8 U[8];
__builtin_memmove((U+0),gp(0x870ce0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cb77e:{NFSU2_TR(0x5cb77e);
s1(0x8707ce,u8(0x1ull));
}
B5cb785:{NFSU2_TR(0x5cb785);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cb78d;}}
}
B5cb787:L5cb787:{c.instructions+=1;NFSU2_TR(0x5cb787);
__builtin_memmove(gp(0x8707ce),(R+12),1);
}
B5cb78d:L5cb78d:{c.instructions+=4;NFSU2_TR(0x5cb78d);
__builtin_memmove((R+0),gp(0x8654a4),4);
}
B5cb792:{NFSU2_TR(0x5cb792);
w4(R+28,u32(0x6ull));
}
B5cb797:{NFSU2_TR(0x5cb797);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cb799:{NFSU2_TR(0x5cb799);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cb7aa;}}
}
B5cb79b:L5cb79b:{c.instructions+=3;NFSU2_TR(0x5cb79b);
u8 U[8];
__builtin_memmove((U+0),gp(0x870d0c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cb7a1:{NFSU2_TR(0x5cb7a1);
s1(0x8707cf,u8(0x1ull));
}
B5cb7a8:{NFSU2_TR(0x5cb7a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cb7b0;}}
}
B5cb7aa:L5cb7aa:{c.instructions+=1;NFSU2_TR(0x5cb7aa);
__builtin_memmove(gp(0x8707cf),(R+12),1);
}
B5cb7b0:L5cb7b0:{c.instructions+=2;NFSU2_TR(0x5cb7b0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb7b2:{NFSU2_TR(0x5cb7b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb7b7ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5cb7b7:L5cb7b7:{c.instructions+=5;NFSU2_TR(0x5cb7b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5cb7ba:{NFSU2_TR(0x5cb7ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cb7bd:{NFSU2_TR(0x5cb7bd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5cb7c0:{NFSU2_TR(0x5cb7c0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cb7c2:{NFSU2_TR(0x5cb7c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cb7c9;}}
}
B5cb7c4:L5cb7c4:{c.instructions+=2;NFSU2_TR(0x5cb7c4);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5cb7c7:{NFSU2_TR(0x5cb7c7);
if(r1(R+518)){{goto L5cb7d8;}}
}
B5cb7c9:L5cb7c9:{c.instructions+=3;NFSU2_TR(0x5cb7c9);
u8 U[8];
__builtin_memmove((U+0),gp(0x870d04),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cb7cf:{NFSU2_TR(0x5cb7cf);
s1(0x8707d1,u8(0x1ull));
}
B5cb7d6:{NFSU2_TR(0x5cb7d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cb7de;}}
}
B5cb7d8:L5cb7d8:{c.instructions+=1;NFSU2_TR(0x5cb7d8);
__builtin_memmove(gp(0x8707d1),(R+12),1);
}
B5cb7de:L5cb7de:{c.instructions+=2;NFSU2_TR(0x5cb7de);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cb7e4:{NFSU2_TR(0x5cb7e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cb7fd;}}
}
B5cb7e6:L5cb7e6:{c.instructions+=2;NFSU2_TR(0x5cb7e6);
u8 U[8];
__builtin_memmove((U+0),gp(0x870d10),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cb7ec:{NFSU2_TR(0x5cb7ec);
if(r1(R+518)){{goto L5cb7fd;}}
}
B5cb7ee:L5cb7ee:{c.instructions+=3;NFSU2_TR(0x5cb7ee);
u8 U[8];
__builtin_memmove((U+0),gp(0x870cec),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cb7f4:{NFSU2_TR(0x5cb7f4);
s1(0x8707d2,u8(0x1ull));
}
B5cb7fb:{NFSU2_TR(0x5cb7fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cb803;}}
}
B5cb7fd:L5cb7fd:{c.instructions+=1;NFSU2_TR(0x5cb7fd);
__builtin_memmove(gp(0x8707d2),(R+12),1);
}
B5cb803:L5cb803:{c.instructions+=2;NFSU2_TR(0x5cb803);
u8 U[2];
__builtin_memmove((U+0),gp(0x8707cf),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5cb809:{NFSU2_TR(0x5cb809);
if(r1(R+518)){{goto L5cb814;}}
}
B5cb80b:L5cb80b:{c.instructions+=2;NFSU2_TR(0x5cb80b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb80c:{NFSU2_TR(0x5cb80c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb811ull));
TAIL_STATIC(0x5c7470u,5c7);
}
B5cb811:L5cb811:{c.instructions+=1;NFSU2_TR(0x5cb811);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5cb814:L5cb814:{c.instructions+=2;NFSU2_TR(0x5cb814);
u8 U[2];
__builtin_memmove((U+0),gp(0x8707ce),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5cb81a:{NFSU2_TR(0x5cb81a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cb834;}}
}
B5cb81c:L5cb81c:{c.instructions+=2;NFSU2_TR(0x5cb81c);
u8 U[2];
__builtin_memmove((U+0),gp(0x8707cc),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5cb822:{NFSU2_TR(0x5cb822);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cb834;}}
}
B5cb824:L5cb824:{c.instructions+=2;NFSU2_TR(0x5cb824);
u8 U[8];
__builtin_memmove((U+0),gp(0x870d00),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cb82a:{NFSU2_TR(0x5cb82a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cb834;}}
}
B5cb82c:L5cb82c:{c.instructions+=2;NFSU2_TR(0x5cb82c);
u8 U[2];
__builtin_memmove((U+0),gp(0x8707d2),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5cb832:{NFSU2_TR(0x5cb832);
if(r1(R+518)){{goto L5cb84e;}}
}
B5cb834:L5cb834:{c.instructions+=1;NFSU2_TR(0x5cb834);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb839ull));
TAIL_STATIC(0x5cc8b0u,5cc);
}
B5cb839:L5cb839:{c.instructions+=2;NFSU2_TR(0x5cb839);
u8 U[2];
__builtin_memmove((U+0),gp(0x8707ce),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5cb83f:{NFSU2_TR(0x5cb83f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cb849;}}
}
B5cb841:L5cb841:{c.instructions+=2;NFSU2_TR(0x5cb841);
u8 U[2];
__builtin_memmove((U+0),gp(0x8707cc),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5cb847:{NFSU2_TR(0x5cb847);
if(r1(R+518)){{goto L5cb84e;}}
}
B5cb849:L5cb849:{c.instructions+=1;NFSU2_TR(0x5cb849);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb84eull));
TAIL_STATIC(0x5cc9a0u,5cc);
}
B5cb84e:L5cb84e:{c.instructions+=7;NFSU2_TR(0x5cb84e);
u8 U[2];
__builtin_memmove((U+0),gp(0x8707ce),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5cb854:{NFSU2_TR(0x5cb854);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5cb858:{NFSU2_TR(0x5cb858);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5cb85c:{NFSU2_TR(0x5cb85c);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5cb860:{NFSU2_TR(0x5cb860);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5cb864:{NFSU2_TR(0x5cb864);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5cb868:{NFSU2_TR(0x5cb868);
if(r1(R+518)){{goto L5cb871;}}
}
B5cb86a:L5cb86a:{c.instructions+=2;NFSU2_TR(0x5cb86a);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5cb86f:{NFSU2_TR(0x5cb86f);
{goto L5cb899;}
}
B5cb871:L5cb871:{c.instructions+=2;NFSU2_TR(0x5cb871);
u8 U[8];
__builtin_memmove((U+0),gp(0x870d00),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cb877:{NFSU2_TR(0x5cb877);
if(r1(R+518)){{goto L5cb880;}}
}
B5cb879:L5cb879:{c.instructions+=2;NFSU2_TR(0x5cb879);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5cb87e:{NFSU2_TR(0x5cb87e);
{goto L5cb899;}
}
B5cb880:L5cb880:{c.instructions+=2;NFSU2_TR(0x5cb880);
u8 U[2];
__builtin_memmove((U+0),gp(0x8707cc),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5cb886:{NFSU2_TR(0x5cb886);
if(r1(R+518)){{goto L5cb88f;}}
}
B5cb888:L5cb888:{c.instructions+=2;NFSU2_TR(0x5cb888);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5cb88d:{NFSU2_TR(0x5cb88d);
{goto L5cb899;}
}
B5cb88f:L5cb88f:{c.instructions+=2;NFSU2_TR(0x5cb88f);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5cb894:{NFSU2_TR(0x5cb894);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5cb899:L5cb899:{c.instructions+=3;NFSU2_TR(0x5cb899);
u8 U[2];
__builtin_memmove((U+0),gp(0x8707d8),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5cb89f:{NFSU2_TR(0x5cb89f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cb8a7:{NFSU2_TR(0x5cb8a7);
if(r1(R+518)){{goto L5cb8b8;}}
}
B5cb8a9:L5cb8a9:{c.instructions+=3;NFSU2_TR(0x5cb8a9);
__builtin_memmove((R+4),gp(0x8707d4),4);
}
B5cb8af:{NFSU2_TR(0x5cb8af);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cb8b3:{NFSU2_TR(0x5cb8b3);
{goto L5cb999;}
}
B5cb8b8:L5cb8b8:{c.instructions+=3;NFSU2_TR(0x5cb8b8);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cb8be:{NFSU2_TR(0x5cb8be);
__builtin_memmove((R+0),gp(0x86eb6c),4);
}
B5cb8c3:{NFSU2_TR(0x5cb8c3);
if(r1(R+518)){{goto L5cb90b;}}
}
B5cb8c5:L5cb8c5:{c.instructions+=8;NFSU2_TR(0x5cb8c5);
w4(R+8,u32(0x3f000000ull));
}
B5cb8ca:{NFSU2_TR(0x5cb8ca);
__builtin_memmove(gp(0x7ff15c),(R+8),4);
}
B5cb8d0:{NFSU2_TR(0x5cb8d0);
__builtin_memmove(gp(0x7ff160),(R+8),4);
}
B5cb8d6:{NFSU2_TR(0x5cb8d6);
s4(0x7ff188,u32(0x3e4ccccdull));
}
B5cb8e0:{NFSU2_TR(0x5cb8e0);
__builtin_memmove(gp(0x7ff164),(R+8),4);
}
B5cb8e6:{NFSU2_TR(0x5cb8e6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5cb8e9:{NFSU2_TR(0x5cb8e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f4ccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cb8f1:{NFSU2_TR(0x5cb8f1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5cb999;}}
}
B5cb8f7:L5cb8f7:{c.instructions+=3;NFSU2_TR(0x5cb8f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ecccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cb8ff:{NFSU2_TR(0x5cb8ff);
s4(0x7ff188,u32(0x3e0f5c29ull));
}
B5cb909:{NFSU2_TR(0x5cb909);
{goto L5cb974;}
}
B5cb90b:L5cb90b:{c.instructions+=2;NFSU2_TR(0x5cb90b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5cb90e:{NFSU2_TR(0x5cb90e);
if(r1(R+518)){{goto L5cb974;}}
}
B5cb910:L5cb910:{c.instructions+=17;NFSU2_TR(0x5cb910);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cb916:{NFSU2_TR(0x5cb916);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cb91c:{NFSU2_TR(0x5cb91c);
__builtin_memmove(gp(0x7ff188),(R+8),4);
}
B5cb922:{NFSU2_TR(0x5cb922);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cb926:{NFSU2_TR(0x5cb926);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cb92c:{NFSU2_TR(0x5cb92c);
__builtin_memmove(gp(0x7ff15c),(R+4),4);
}
B5cb932:{NFSU2_TR(0x5cb932);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cb938:{NFSU2_TR(0x5cb938);
__builtin_memmove(gp(0x7ff160),(R+8),4);
}
B5cb93e:{NFSU2_TR(0x5cb93e);
{u32 ea_=u32(r4(R+24)+u32(384u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cb944:{NFSU2_TR(0x5cb944);
{u32 ea_=u32(u32(8384860u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cb94a:{NFSU2_TR(0x5cb94a);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cb950:{NFSU2_TR(0x5cb950);
{u32 ea_=u32(u32(8384860u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5cb956:{NFSU2_TR(0x5cb956);
{u32 ea_=u32(u32(8384864u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cb95c:{NFSU2_TR(0x5cb95c);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cb962:{NFSU2_TR(0x5cb962);
{u32 ea_=u32(u32(8384864u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5cb968:{NFSU2_TR(0x5cb968);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cb96e:{NFSU2_TR(0x5cb96e);
{u32 ea_=u32(u32(8384868u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5cb974:L5cb974:{c.instructions+=2;NFSU2_TR(0x5cb974);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5cb977:{NFSU2_TR(0x5cb977);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5cb999;}}
}
B5cb979:L5cb979:{c.instructions+=6;NFSU2_TR(0x5cb979);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cb97d:{NFSU2_TR(0x5cb97d);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cb983:{NFSU2_TR(0x5cb983);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5cb987:{NFSU2_TR(0x5cb987);
{u32 ea_=u32(u32(8384904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cb98d:{NFSU2_TR(0x5cb98d);
{u32 ea_=u32(u32(7881944u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cb993:{NFSU2_TR(0x5cb993);
{u32 ea_=u32(u32(8384904u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5cb999:L5cb999:{c.instructions+=2;NFSU2_TR(0x5cb999);
u8 U[2];
__builtin_memmove((U+0),gp(0x8707d2),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5cb99f:{NFSU2_TR(0x5cb99f);
if(r1(R+518)){{goto L5cb9ae;}}
}
B5cb9a1:L5cb9a1:{c.instructions+=3;NFSU2_TR(0x5cb9a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cb9a5:{NFSU2_TR(0x5cb9a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb9a6:{NFSU2_TR(0x5cb9a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb9abull));
TAIL_STATIC(0x5c7ab0u,5c7);
}
B5cb9ab:L5cb9ab:{c.instructions+=1;NFSU2_TR(0x5cb9ab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5cb9ae:L5cb9ae:{c.instructions+=2;NFSU2_TR(0x5cb9ae);
u8 U[2];
__builtin_memmove((U+0),gp(0x8707d1),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5cb9b4:{NFSU2_TR(0x5cb9b4);
if(r1(R+518)){{goto L5cb9c3;}}
}
B5cb9b6:L5cb9b6:{c.instructions+=3;NFSU2_TR(0x5cb9b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cb9ba:{NFSU2_TR(0x5cb9ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb9bb:{NFSU2_TR(0x5cb9bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb9c0ull));
TAIL_STATIC(0x5c7860u,5c7);
}
B5cb9c0:L5cb9c0:{c.instructions+=1;NFSU2_TR(0x5cb9c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5cb9c3:L5cb9c3:{c.instructions+=2;NFSU2_TR(0x5cb9c3);
u8 U[2];
__builtin_memmove((U+0),gp(0x8707cc),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5cb9c9:{NFSU2_TR(0x5cb9c9);
if(r1(R+518)){{goto L5cb9d8;}}
}
B5cb9cb:L5cb9cb:{c.instructions+=3;NFSU2_TR(0x5cb9cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cb9cf:{NFSU2_TR(0x5cb9cf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb9d0:{NFSU2_TR(0x5cb9d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cb9d5ull));
TAIL_STATIC(0x5cccd0u,5cc);
}
B5cb9d5:L5cb9d5:{c.instructions+=1;NFSU2_TR(0x5cb9d5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5cb9d8:L5cb9d8:{c.instructions+=2;NFSU2_TR(0x5cb9d8);
u8 U[8];
__builtin_memmove((U+0),gp(0x870d00),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cb9de:{NFSU2_TR(0x5cb9de);
if(r1(R+518)){{goto L5cba07;}}
}
B5cb9e0:L5cb9e0:{c.instructions+=9;NFSU2_TR(0x5cb9e0);
{u32 ea_=u32(u32(8384900u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cb9e6:{NFSU2_TR(0x5cb9e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cb9ea:{NFSU2_TR(0x5cb9ea);
{u32 ea_=u32(u32(8384896u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5cb9f0:{NFSU2_TR(0x5cb9f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb9f1:{NFSU2_TR(0x5cb9f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cb9f2:{NFSU2_TR(0x5cb9f2);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cb9f6:{NFSU2_TR(0x5cb9f6);
{u32 ea_=u32(u32(8384896u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5cb9fc:{NFSU2_TR(0x5cb9fc);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5cb9ff:{NFSU2_TR(0x5cb9ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cba04ull));
TAIL_STATIC(0x5c68d0u,5c6);
}
B5cba04:L5cba04:{c.instructions+=1;NFSU2_TR(0x5cba04);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5cba07:L5cba07:{c.instructions+=2;NFSU2_TR(0x5cba07);
u8 U[2];
__builtin_memmove((U+0),gp(0x8707ce),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5cba0d:{NFSU2_TR(0x5cba0d);
if(r1(R+518)){{goto L5cba1c;}}
}
B5cba0f:L5cba0f:{c.instructions+=3;NFSU2_TR(0x5cba0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cba13:{NFSU2_TR(0x5cba13);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cba14:{NFSU2_TR(0x5cba14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cba19ull));
TAIL_STATIC(0x5cca00u,5cc);
}
B5cba19:L5cba19:{c.instructions+=1;NFSU2_TR(0x5cba19);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5cba1c:L5cba1c:{c.instructions+=1;NFSU2_TR(0x5cba1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cba21ull));
TAIL_STATIC(0x5cf420u,5cf);
}
B5cba21:L5cba21:{c.instructions+=7;NFSU2_TR(0x5cba21);
__builtin_memmove((R+4),gp(0x86e770),4);
}
B5cba27:{NFSU2_TR(0x5cba27);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cba2c:{NFSU2_TR(0x5cba2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cba2e:{NFSU2_TR(0x5cba2e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cba2f:{NFSU2_TR(0x5cba2f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cba30:{NFSU2_TR(0x5cba30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cba31:{NFSU2_TR(0x5cba31);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cba37ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cba37:L5cba37:{c.instructions+=6;NFSU2_TR(0x5cba37);
__builtin_memmove((R+4),gp(0x86e774),4);
}
B5cba3d:{NFSU2_TR(0x5cba3d);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cba42:{NFSU2_TR(0x5cba42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cba44:{NFSU2_TR(0x5cba44);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cba45:{NFSU2_TR(0x5cba45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cba46:{NFSU2_TR(0x5cba46);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cba4cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cba4c:L5cba4c:{c.instructions+=14;NFSU2_TR(0x5cba4c);
__builtin_memmove((R+8),gp(0x86e77c),4);
}
B5cba52:{NFSU2_TR(0x5cba52);
__builtin_memmove((R+0),gp(0x86e780),4);
}
B5cba57:{NFSU2_TR(0x5cba57);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cba5b:{NFSU2_TR(0x5cba5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cba5f:{NFSU2_TR(0x5cba5f);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cba64:{NFSU2_TR(0x5cba64);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5cba68:{NFSU2_TR(0x5cba68);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cba69:{NFSU2_TR(0x5cba69);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cba6d:{NFSU2_TR(0x5cba6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cba71:{NFSU2_TR(0x5cba71);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cba79:{NFSU2_TR(0x5cba79);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cba81:{NFSU2_TR(0x5cba81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cba83:{NFSU2_TR(0x5cba83);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cba84:{NFSU2_TR(0x5cba84);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cba8aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cba8a:L5cba8a:{c.instructions+=8;NFSU2_TR(0x5cba8a);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cba8f:{NFSU2_TR(0x5cba8f);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cba91:{NFSU2_TR(0x5cba91);
u8 U[4];
w4(U+0,u32(0xa8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cba96:{NFSU2_TR(0x5cba96);
s4(0x870848,u32(0x86e768ull));
}
B5cbaa0:{NFSU2_TR(0x5cbaa0);
__builtin_memmove(gp(0x870910),(R+12),4);
}
B5cbaa6:{NFSU2_TR(0x5cbaa6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cbaa8:{NFSU2_TR(0x5cbaa8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbaa9:{NFSU2_TR(0x5cbaa9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbaafull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cbaaf:L5cbaaf:{c.instructions+=9;NFSU2_TR(0x5cbaaf);
__builtin_memmove((R+8),gp(0x870850),4);
}
B5cbab5:{NFSU2_TR(0x5cbab5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbab7:{NFSU2_TR(0x5cbab7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbab9:{NFSU2_TR(0x5cbab9);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbabb:{NFSU2_TR(0x5cbabb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbabc:{NFSU2_TR(0x5cbabc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbabd:{NFSU2_TR(0x5cbabd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbabe:{NFSU2_TR(0x5cbabe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbabf:{NFSU2_TR(0x5cbabf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbac4ull));
TAIL_STATIC(0x5c7140u,5c7);
}
B5cbac4:L5cbac4:{c.instructions+=7;NFSU2_TR(0x5cbac4);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cbac9:{NFSU2_TR(0x5cbac9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cbacb:{NFSU2_TR(0x5cbacb);
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
B5cbace:{NFSU2_TR(0x5cbace);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbad0:{NFSU2_TR(0x5cbad0);
u8 U[4];
w4(U+0,u32(0xa8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbad5:{NFSU2_TR(0x5cbad5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbad6:{NFSU2_TR(0x5cbad6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbadcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cbadc:L5cbadc:{c.instructions+=1;NFSU2_TR(0x5cbadc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbae1ull));
TAIL_STATIC(0x5dbe80u,5db);
}
B5cbae1:L5cbae1:{c.instructions+=1;NFSU2_TR(0x5cbae1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbae6ull));
TAIL_STATIC(0x48ac00u,48a);
}
B5cbae6:L5cbae6:{c.instructions+=1;NFSU2_TR(0x5cbae6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbaebull));
TAIL_STATIC(0x60faa0u,60f);
}
B5cbaeb:L5cbaeb:{c.instructions+=6;NFSU2_TR(0x5cbaeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cbaec:{NFSU2_TR(0x5cbaec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cbaed:{NFSU2_TR(0x5cbaed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cbaee:{NFSU2_TR(0x5cbaee);
__builtin_memmove((R+16),(R+20),4);
}
B5cbaf0:{NFSU2_TR(0x5cbaf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5cbaf1:{NFSU2_TR(0x5cbaf1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cbb00:L5cbb00:{c.instructions+=10;NFSU2_TR(0x5cbb00);
__builtin_memmove((R+8),gp(0x86ff70),4);
}
B5cbb06:{NFSU2_TR(0x5cbb06);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cbb0b:{NFSU2_TR(0x5cbb0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cbb0d:{NFSU2_TR(0x5cbb0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B5cbb10:{NFSU2_TR(0x5cbb10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbb11:{NFSU2_TR(0x5cbb11);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbb12:{NFSU2_TR(0x5cbb12);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cbb14:{NFSU2_TR(0x5cbb14);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbb15:{NFSU2_TR(0x5cbb15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbb16:{NFSU2_TR(0x5cbb16);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbb1cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cbb1c:L5cbb1c:{c.instructions+=2;NFSU2_TR(0x5cbb1c);
u8 U[14];
__builtin_memmove((U+6),gp(0x870d08),4);
w1(R+512,u8((r4(U+6))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+12)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cbb22:{NFSU2_TR(0x5cbb22);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5cbb33;}}
}
B5cbb24:L5cbb24:{c.instructions+=5;NFSU2_TR(0x5cbb24);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cbb29:{NFSU2_TR(0x5cbb29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cbb2b:{NFSU2_TR(0x5cbb2b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbb2c:{NFSU2_TR(0x5cbb2c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbb2d:{NFSU2_TR(0x5cbb2d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbb33ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cbb33:L5cbb33:{c.instructions+=6;NFSU2_TR(0x5cbb33);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbb34:{NFSU2_TR(0x5cbb34);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbb35:{NFSU2_TR(0x5cbb35);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbb36:{NFSU2_TR(0x5cbb36);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbb38:{NFSU2_TR(0x5cbb38);
u8 U[4];
w4(U+0,u32(0x7a3590ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbb3d:{NFSU2_TR(0x5cbb3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbb42ull));
TAIL_STATIC(0x43db50u,43d);
}
B5cbb42:L5cbb42:{c.instructions+=3;NFSU2_TR(0x5cbb42);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5cbb45:{NFSU2_TR(0x5cbb45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbb46:{NFSU2_TR(0x5cbb46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbb4bull));
TAIL_STATIC(0x4901d0u,490);
}
B5cbb4b:L5cbb4b:{c.instructions+=8;NFSU2_TR(0x5cbb4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5cbb4d:{NFSU2_TR(0x5cbb4d);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cbb52:{NFSU2_TR(0x5cbb52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cbb54:{NFSU2_TR(0x5cbb54);
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
B5cbb57:{NFSU2_TR(0x5cbb57);
u8 U[4];
w4(U+0,u32(0xff785aaaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbb5c:{NFSU2_TR(0x5cbb5c);
u8 U[4];
w4(U+0,u32(0xc1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbb61:{NFSU2_TR(0x5cbb61);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbb62:{NFSU2_TR(0x5cbb62);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbb68ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cbb68:L5cbb68:{c.instructions+=15;NFSU2_TR(0x5cbb68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cbb6b:{NFSU2_TR(0x5cbb6b);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbb6d:{NFSU2_TR(0x5cbb6d);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbb6f:{NFSU2_TR(0x5cbb6f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbb71:{NFSU2_TR(0x5cbb71);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbb73:{NFSU2_TR(0x5cbb73);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5cbb77:{NFSU2_TR(0x5cbb77);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbb78:{NFSU2_TR(0x5cbb78);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5cbb7c:{NFSU2_TR(0x5cbb7c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbb7d:{NFSU2_TR(0x5cbb7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cbb81:{NFSU2_TR(0x5cbb81);
__builtin_memmove((R+0),gp(0x86ff70),4);
}
B5cbb86:{NFSU2_TR(0x5cbb86);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbb88:{NFSU2_TR(0x5cbb88);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbb89:{NFSU2_TR(0x5cbb89);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cbb91:{NFSU2_TR(0x5cbb91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbb96ull));
TAIL_STATIC(0x5c6be0u,5c6);
}
B5cbb96:L5cbb96:{c.instructions+=4;NFSU2_TR(0x5cbb96);
__builtin_memmove((R+0),gp(0x870d08),4);
}
B5cbb9b:{NFSU2_TR(0x5cbb9b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B5cbb9e:{NFSU2_TR(0x5cbb9e);
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
B5cbba0:{NFSU2_TR(0x5cbba0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5cbbc0;}}
}
B5cbba2:L5cbba2:{c.instructions+=5;NFSU2_TR(0x5cbba2);
__builtin_memmove((R+4),gp(0x86f2e4),4);
}
B5cbba8:{NFSU2_TR(0x5cbba8);
__builtin_memmove((R+8),gp(0x86f2e0),4);
}
B5cbbae:{NFSU2_TR(0x5cbbae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbbaf:{NFSU2_TR(0x5cbbaf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbbb0:{NFSU2_TR(0x5cbbb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbbb5ull));
TAIL_STATIC(0x5c7120u,5c7);
}
B5cbbb5:L5cbbb5:{c.instructions+=3;NFSU2_TR(0x5cbbb5);
__builtin_memmove((R+8),gp(0x86f2e0),4);
}
B5cbbbb:{NFSU2_TR(0x5cbbbb);
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
B5cbbbe:{NFSU2_TR(0x5cbbbe);
{goto L5cbbc6;}
}
B5cbbc0:L5cbbc0:{c.instructions+=1;NFSU2_TR(0x5cbbc0);
__builtin_memmove((R+8),gp(0x86ff70),4);
}
B5cbbc6:L5cbbc6:{c.instructions+=6;NFSU2_TR(0x5cbbc6);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cbbcb:{NFSU2_TR(0x5cbbcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cbbcd:{NFSU2_TR(0x5cbbcd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbbce:{NFSU2_TR(0x5cbbce);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbbcf:{NFSU2_TR(0x5cbbcf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbbd0:{NFSU2_TR(0x5cbbd0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbbd6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cbbd6:L5cbbd6:{c.instructions+=6;NFSU2_TR(0x5cbbd6);
__builtin_memmove((R+8),gp(0x870854),4);
}
B5cbbdc:{NFSU2_TR(0x5cbbdc);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cbbe1:{NFSU2_TR(0x5cbbe1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cbbe3:{NFSU2_TR(0x5cbbe3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbbe4:{NFSU2_TR(0x5cbbe4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbbe5:{NFSU2_TR(0x5cbbe5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbbebull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cbbeb:L5cbbeb:{c.instructions+=6;NFSU2_TR(0x5cbbeb);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cbbf0:{NFSU2_TR(0x5cbbf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cbbf2:{NFSU2_TR(0x5cbbf2);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbbf4:{NFSU2_TR(0x5cbbf4);
u8 U[4];
w4(U+0,u32(0xa8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbbf9:{NFSU2_TR(0x5cbbf9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbbfa:{NFSU2_TR(0x5cbbfa);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbc00ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cbc00:L5cbc00:{c.instructions+=2;NFSU2_TR(0x5cbc00);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbc02:{NFSU2_TR(0x5cbc02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbc07ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5cbc07:L5cbc07:{c.instructions+=7;NFSU2_TR(0x5cbc07);
__builtin_memmove((R+4),gp(0x86eb5c),4);
}
B5cbc0d:{NFSU2_TR(0x5cbc0d);
__builtin_memmove(gp(0x870910),(R+4),4);
}
B5cbc13:{NFSU2_TR(0x5cbc13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cbc15:{NFSU2_TR(0x5cbc15);
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
B5cbc18:{NFSU2_TR(0x5cbc18);
__builtin_memmove((R+24),(R+0),4);
}
B5cbc1a:{NFSU2_TR(0x5cbc1a);
__builtin_memmove((R+28),(R+4),4);
}
B5cbc1c:{NFSU2_TR(0x5cbc1c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbc1full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cbc1f:L5cbc1f:{c.instructions+=6;NFSU2_TR(0x5cbc1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cbc22:{NFSU2_TR(0x5cbc22);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cbc27:{NFSU2_TR(0x5cbc27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cbc29:{NFSU2_TR(0x5cbc29);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbc2a:{NFSU2_TR(0x5cbc2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbc2b:{NFSU2_TR(0x5cbc2b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbc31ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cbc31:L5cbc31:{c.instructions+=7;NFSU2_TR(0x5cbc31);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cbc34:{NFSU2_TR(0x5cbc34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5cbc36:{NFSU2_TR(0x5cbc36);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbc37:{NFSU2_TR(0x5cbc37);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5cbc3b:{NFSU2_TR(0x5cbc3b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbc3c:{NFSU2_TR(0x5cbc3c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbc3d:{NFSU2_TR(0x5cbc3d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbc43ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cbc43:L5cbc43:{c.instructions+=6;NFSU2_TR(0x5cbc43);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cbc48:{NFSU2_TR(0x5cbc48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cbc4a:{NFSU2_TR(0x5cbc4a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbc4c:{NFSU2_TR(0x5cbc4c);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbc4e:{NFSU2_TR(0x5cbc4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbc4f:{NFSU2_TR(0x5cbc4f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbc55ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cbc55:L5cbc55:{c.instructions+=6;NFSU2_TR(0x5cbc55);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cbc5a:{NFSU2_TR(0x5cbc5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cbc5c:{NFSU2_TR(0x5cbc5c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbc5d:{NFSU2_TR(0x5cbc5d);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbc5f:{NFSU2_TR(0x5cbc5f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbc60:{NFSU2_TR(0x5cbc60);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbc66ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cbc66:L5cbc66:{c.instructions+=3;NFSU2_TR(0x5cbc66);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbc67:{NFSU2_TR(0x5cbc67);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbc68:{NFSU2_TR(0x5cbc68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbc6dull));
TAIL_STATIC(0x491860u,491);
}
B5cbc6d:L5cbc6d:{c.instructions+=3;NFSU2_TR(0x5cbc6d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbc6e:{NFSU2_TR(0x5cbc6e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbc6f:{NFSU2_TR(0x5cbc6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbc74ull));
TAIL_STATIC(0x61ae90u,61a);
}
B5cbc74:L5cbc74:{c.instructions+=3;NFSU2_TR(0x5cbc74);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbc75:{NFSU2_TR(0x5cbc75);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbc76:{NFSU2_TR(0x5cbc76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbc7bull));
TAIL_STATIC(0x61ace0u,61a);
}
B5cbc7b:L5cbc7b:{c.instructions+=2;NFSU2_TR(0x5cbc7b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbc7c:{NFSU2_TR(0x5cbc7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbc81ull));
TAIL_STATIC(0x61b1f0u,61b);
}
B5cbc81:L5cbc81:{c.instructions+=3;NFSU2_TR(0x5cbc81);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbc82:{NFSU2_TR(0x5cbc82);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbc83:{NFSU2_TR(0x5cbc83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbc88ull));
TAIL_STATIC(0x61ac90u,61a);
}
B5cbc88:L5cbc88:{c.instructions+=4;NFSU2_TR(0x5cbc88);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbc89:{NFSU2_TR(0x5cbc89);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbc8a:{NFSU2_TR(0x5cbc8a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbc8b:{NFSU2_TR(0x5cbc8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbc90ull));
TAIL_STATIC(0x494270u,494);
}
B5cbc90:L5cbc90:{c.instructions+=5;NFSU2_TR(0x5cbc90);
__builtin_memmove((R+4),gp(0x86eb5c),4);
}
B5cbc96:{NFSU2_TR(0x5cbc96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cbc98:{NFSU2_TR(0x5cbc98);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cbc9b:{NFSU2_TR(0x5cbc9b);
__builtin_memmove((R+24),(R+4),4);
}
B5cbc9d:{NFSU2_TR(0x5cbc9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbca0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cbca0:L5cbca0:{c.instructions+=4;NFSU2_TR(0x5cbca0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cbca3:{NFSU2_TR(0x5cbca3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cbca5:{NFSU2_TR(0x5cbca5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbca6:{NFSU2_TR(0x5cbca6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbcacull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cbcac:L5cbcac:{c.instructions+=6;NFSU2_TR(0x5cbcac);
__builtin_memmove((R+0),gp(0x870d08),4);
}
B5cbcb1:{NFSU2_TR(0x5cbcb1);
__builtin_memmove(gp(0x870910),(R+12),4);
}
B5cbcb7:{NFSU2_TR(0x5cbcb7);
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
B5cbcb9:{NFSU2_TR(0x5cbcb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cbcba:{NFSU2_TR(0x5cbcba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cbcbb:{NFSU2_TR(0x5cbcbb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5cbcdc;}}
}
B5cbcbd:L5cbcbd:{c.instructions+=11;NFSU2_TR(0x5cbcbd);
__builtin_memmove((R+4),gp(0x86ff70),4);
}
B5cbcc3:{NFSU2_TR(0x5cbcc3);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cbcc8:{NFSU2_TR(0x5cbcc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cbcca:{NFSU2_TR(0x5cbcca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbccb:{NFSU2_TR(0x5cbccb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbccc:{NFSU2_TR(0x5cbccc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbccd:{NFSU2_TR(0x5cbccd);
__builtin_memmove((R+4),gp(0x86f2e0),4);
}
B5cbcd3:{NFSU2_TR(0x5cbcd3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbcd4:{NFSU2_TR(0x5cbcd4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbcd5:{NFSU2_TR(0x5cbcd5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbcd6:{NFSU2_TR(0x5cbcd6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbcdcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cbcdc:L5cbcdc:{c.instructions+=6;NFSU2_TR(0x5cbcdc);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cbce1:{NFSU2_TR(0x5cbce1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cbce3:{NFSU2_TR(0x5cbce3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbce5:{NFSU2_TR(0x5cbce5);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbce7:{NFSU2_TR(0x5cbce7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbce8:{NFSU2_TR(0x5cbce8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbceeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cbcee:L5cbcee:{c.instructions+=1;NFSU2_TR(0x5cbcee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbcf3ull));
TAIL_STATIC(0x5cf420u,5cf);
}
B5cbcf3:L5cbcf3:{c.instructions+=7;NFSU2_TR(0x5cbcf3);
__builtin_memmove((R+8),gp(0x86e770),4);
}
B5cbcf9:{NFSU2_TR(0x5cbcf9);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cbcfe:{NFSU2_TR(0x5cbcfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cbd00:{NFSU2_TR(0x5cbd00);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbd01:{NFSU2_TR(0x5cbd01);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbd02:{NFSU2_TR(0x5cbd02);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbd03:{NFSU2_TR(0x5cbd03);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbd09ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cbd09:L5cbd09:{c.instructions+=6;NFSU2_TR(0x5cbd09);
__builtin_memmove((R+8),gp(0x86e774),4);
}
B5cbd0f:{NFSU2_TR(0x5cbd0f);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cbd14:{NFSU2_TR(0x5cbd14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cbd16:{NFSU2_TR(0x5cbd16);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbd17:{NFSU2_TR(0x5cbd17);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbd18:{NFSU2_TR(0x5cbd18);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbd1eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cbd1e:L5cbd1e:{c.instructions+=14;NFSU2_TR(0x5cbd1e);
__builtin_memmove((R+4),gp(0x86e780),4);
}
B5cbd24:{NFSU2_TR(0x5cbd24);
__builtin_memmove((R+0),gp(0x86e77c),4);
}
B5cbd29:{NFSU2_TR(0x5cbd29);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cbd2d:{NFSU2_TR(0x5cbd2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cbd31:{NFSU2_TR(0x5cbd31);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cbd36:{NFSU2_TR(0x5cbd36);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5cbd3a:{NFSU2_TR(0x5cbd3a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbd3b:{NFSU2_TR(0x5cbd3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cbd3f:{NFSU2_TR(0x5cbd3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cbd43:{NFSU2_TR(0x5cbd43);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cbd4b:{NFSU2_TR(0x5cbd4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cbd53:{NFSU2_TR(0x5cbd53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cbd55:{NFSU2_TR(0x5cbd55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbd56:{NFSU2_TR(0x5cbd56);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbd5cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cbd5c:L5cbd5c:{c.instructions+=6;NFSU2_TR(0x5cbd5c);
__builtin_memmove((R+0),gp(0x870cfc),4);
}
B5cbd61:{NFSU2_TR(0x5cbd61);
__builtin_memmove(gp(0x870910),(R+12),4);
}
B5cbd67:{NFSU2_TR(0x5cbd67);
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
B5cbd69:{NFSU2_TR(0x5cbd69);
s4(0x870848,u32(0x86e768ull));
}
B5cbd73:{NFSU2_TR(0x5cbd73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5cbd74:{NFSU2_TR(0x5cbd74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cbdae;}}
}
B5cbd76:L5cbd76:{c.instructions+=6;NFSU2_TR(0x5cbd76);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cbd7b:{NFSU2_TR(0x5cbd7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cbd7d:{NFSU2_TR(0x5cbd7d);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbd7f:{NFSU2_TR(0x5cbd7f);
u8 U[4];
w4(U+0,u32(0xa8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbd84:{NFSU2_TR(0x5cbd84);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbd85:{NFSU2_TR(0x5cbd85);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbd8bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cbd8b:L5cbd8b:{c.instructions+=11;NFSU2_TR(0x5cbd8b);
__builtin_memmove((R+4),gp(0x870850),4);
}
B5cbd91:{NFSU2_TR(0x5cbd91);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbd93:{NFSU2_TR(0x5cbd93);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbd95:{NFSU2_TR(0x5cbd95);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbd97:{NFSU2_TR(0x5cbd97);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbd99:{NFSU2_TR(0x5cbd99);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5cbd9d:{NFSU2_TR(0x5cbd9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbd9e:{NFSU2_TR(0x5cbd9e);
u8 U[4];
w4(U+0,u32(0x86f2e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbda3:{NFSU2_TR(0x5cbda3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbda5:{NFSU2_TR(0x5cbda5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbda6:{NFSU2_TR(0x5cbda6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbdabull));
TAIL_STATIC(0x5c6be0u,5c6);
}
B5cbdab:L5cbdab:{c.instructions+=1;NFSU2_TR(0x5cbdab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B5cbdae:L5cbdae:{c.instructions+=2;NFSU2_TR(0x5cbdae);
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
B5cbdb1:{NFSU2_TR(0x5cbdb1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cbdc0:L5cbdc0:{c.instructions+=9;NFSU2_TR(0x5cbdc0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbdc1:{NFSU2_TR(0x5cbdc1);
__builtin_memmove((R+20),(R+16),4);
}
B5cbdc3:{NFSU2_TR(0x5cbdc3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5cbdc6:{NFSU2_TR(0x5cbdc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x88ull))));
}
B5cbdcc:{NFSU2_TR(0x5cbdcc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbdcd:{NFSU2_TR(0x5cbdcd);
__builtin_memmove((R+24),gp(0x8707f0),4);
}
B5cbdd3:{NFSU2_TR(0x5cbdd3);
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
B5cbdd5:{NFSU2_TR(0x5cbdd5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbdd6:{NFSU2_TR(0x5cbdd6);
if(r1(R+518)){{goto L5cbf39;}}
}
B5cbddc:L5cbddc:{c.instructions+=2;NFSU2_TR(0x5cbddc);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5cbde0:{NFSU2_TR(0x5cbde0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbde5ull));
TAIL_STATIC(0x5bb1c0u,5bb);
}
B5cbde5:L5cbde5:{c.instructions+=7;NFSU2_TR(0x5cbde5);
w4(R+0,u32(0x80000000ull));
}
B5cbdea:{NFSU2_TR(0x5cbdea);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbdec:{NFSU2_TR(0x5cbdec);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cbdf0:{NFSU2_TR(0x5cbdf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cbdf4:{NFSU2_TR(0x5cbdf4);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cbdf8:{NFSU2_TR(0x5cbdf8);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cbdff:{NFSU2_TR(0x5cbdff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbe04ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5cbe04:L5cbe04:{c.instructions+=10;NFSU2_TR(0x5cbe04);
__builtin_memmove((R+4),(R+0),4);
}
B5cbe06:{NFSU2_TR(0x5cbe06);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cbe09:{NFSU2_TR(0x5cbe09);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cbe0f:{NFSU2_TR(0x5cbe0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cbe13:{NFSU2_TR(0x5cbe13);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cbe17:{NFSU2_TR(0x5cbe17);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5cbe1a:{NFSU2_TR(0x5cbe1a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5cbe20:{NFSU2_TR(0x5cbe20);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5cbe22:{NFSU2_TR(0x5cbe22);
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
B5cbe25:{NFSU2_TR(0x5cbe25);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cbf39;}}
}
B5cbe2b:L5cbe2b:{c.instructions+=3;NFSU2_TR(0x5cbe2b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5cbe2e:{NFSU2_TR(0x5cbe2e);
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
B5cbe30:{NFSU2_TR(0x5cbe30);
if(r1(R+518)){{goto L5cbf39;}}
}
B5cbe36:L5cbe36:{c.instructions+=4;NFSU2_TR(0x5cbe36);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cbe39:{NFSU2_TR(0x5cbe39);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cbe3c:{NFSU2_TR(0x5cbe3c);
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
B5cbe3e:{NFSU2_TR(0x5cbe3e);
if(r1(R+518)){{goto L5cbf39;}}
}
B5cbe44:L5cbe44:{c.instructions+=3;NFSU2_TR(0x5cbe44);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5cbe48:{NFSU2_TR(0x5cbe48);
{u32 ea_=u32(u32(7961940u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5cbe4e:{NFSU2_TR(0x5cbe4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbe53ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5cbe53:L5cbe53:{c.instructions+=20;NFSU2_TR(0x5cbe53);
__builtin_memmove((R+28),(R+0),4);
}
B5cbe55:{NFSU2_TR(0x5cbe55);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cbe59:{NFSU2_TR(0x5cbe59);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5cbe5d:{NFSU2_TR(0x5cbe5d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbe5f:{NFSU2_TR(0x5cbe5f);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5cbe63:{NFSU2_TR(0x5cbe63);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbe64:{NFSU2_TR(0x5cbe64);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5cbe68:{NFSU2_TR(0x5cbe68);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbe69:{NFSU2_TR(0x5cbe69);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5cbe6d:{NFSU2_TR(0x5cbe6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cbe75:{NFSU2_TR(0x5cbe75);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cbe7d:{NFSU2_TR(0x5cbe7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cbe85:{NFSU2_TR(0x5cbe85);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(MODV+256),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cbe8d:{NFSU2_TR(0x5cbe8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cbe95:{NFSU2_TR(0x5cbe95);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cbe9d:{NFSU2_TR(0x5cbe9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(MODV+260),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cbea5:{NFSU2_TR(0x5cbea5);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cbead:{NFSU2_TR(0x5cbead);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cbeb5:{NFSU2_TR(0x5cbeb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cbebd:{NFSU2_TR(0x5cbebd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbec2ull));
TAIL_STATIC(0x5c5020u,5c5);
}
B5cbec2:L5cbec2:{c.instructions+=21;NFSU2_TR(0x5cbec2);
w4(R+8,u32(0x1e0ull));
}
B5cbec7:{NFSU2_TR(0x5cbec7);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B5cbec9:{NFSU2_TR(0x5cbec9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cbecd:{NFSU2_TR(0x5cbecd);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5cbed1:{NFSU2_TR(0x5cbed1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbed3:{NFSU2_TR(0x5cbed3);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5cbed7:{NFSU2_TR(0x5cbed7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbed8:{NFSU2_TR(0x5cbed8);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5cbedc:{NFSU2_TR(0x5cbedc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbedd:{NFSU2_TR(0x5cbedd);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5cbee1:{NFSU2_TR(0x5cbee1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cbee9:{NFSU2_TR(0x5cbee9);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cbef1:{NFSU2_TR(0x5cbef1);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(MODV+248),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cbef9:{NFSU2_TR(0x5cbef9);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cbf01:{NFSU2_TR(0x5cbf01);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(MODV+252),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cbf09:{NFSU2_TR(0x5cbf09);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x43f00000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cbf11:{NFSU2_TR(0x5cbf11);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cbf19:{NFSU2_TR(0x5cbf19);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cbf21:{NFSU2_TR(0x5cbf21);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
w4(U+4,u32(0x43f00000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cbf29:{NFSU2_TR(0x5cbf29);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cbf31:{NFSU2_TR(0x5cbf31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbf36ull));
TAIL_STATIC(0x5c5020u,5c5);
}
B5cbf36:L5cbf36:{c.instructions+=1;NFSU2_TR(0x5cbf36);
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
B5cbf39:L5cbf39:{c.instructions+=5;NFSU2_TR(0x5cbf39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5cbf3a:{NFSU2_TR(0x5cbf3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5cbf3b:{NFSU2_TR(0x5cbf3b);
__builtin_memmove((R+16),(R+20),4);
}
B5cbf3d:{NFSU2_TR(0x5cbf3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5cbf3e:{NFSU2_TR(0x5cbf3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5cbf40:L5cbf40:{c.instructions+=8;NFSU2_TR(0x5cbf40);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbf41:{NFSU2_TR(0x5cbf41);
__builtin_memmove((R+20),(R+16),4);
}
B5cbf43:{NFSU2_TR(0x5cbf43);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5cbf46:{NFSU2_TR(0x5cbf46);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0xe4ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0xe4ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xe4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cbf4c:{NFSU2_TR(0x5cbf4c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbf4d:{NFSU2_TR(0x5cbf4d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbf4e:{NFSU2_TR(0x5cbf4e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbf4f:{NFSU2_TR(0x5cbf4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbf54ull));
TAIL_STATIC(0x5c2430u,5c2);
}
B5cbf54:L5cbf54:{c.instructions+=1;NFSU2_TR(0x5cbf54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbf59ull));
TAIL_STATIC(0x5cf420u,5cf);
}
B5cbf59:L5cbf59:{c.instructions+=8;NFSU2_TR(0x5cbf59);
__builtin_memmove((R+8),gp(0x86e770),4);
}
B5cbf5f:{NFSU2_TR(0x5cbf5f);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cbf64:{NFSU2_TR(0x5cbf64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cbf66:{NFSU2_TR(0x5cbf66);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbf67:{NFSU2_TR(0x5cbf67);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cbf69:{NFSU2_TR(0x5cbf69);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbf6a:{NFSU2_TR(0x5cbf6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbf6b:{NFSU2_TR(0x5cbf6b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbf71ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cbf71:L5cbf71:{c.instructions+=6;NFSU2_TR(0x5cbf71);
__builtin_memmove((R+8),gp(0x86e774),4);
}
B5cbf77:{NFSU2_TR(0x5cbf77);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cbf7c:{NFSU2_TR(0x5cbf7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cbf7e:{NFSU2_TR(0x5cbf7e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbf7f:{NFSU2_TR(0x5cbf7f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbf80:{NFSU2_TR(0x5cbf80);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbf86ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cbf86:L5cbf86:{c.instructions+=14;NFSU2_TR(0x5cbf86);
__builtin_memmove((R+4),gp(0x86e780),4);
}
B5cbf8c:{NFSU2_TR(0x5cbf8c);
__builtin_memmove((R+0),gp(0x86e77c),4);
}
B5cbf91:{NFSU2_TR(0x5cbf91);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cbf95:{NFSU2_TR(0x5cbf95);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cbf99:{NFSU2_TR(0x5cbf99);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cbf9e:{NFSU2_TR(0x5cbf9e);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5cbfa2:{NFSU2_TR(0x5cbfa2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbfa3:{NFSU2_TR(0x5cbfa3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cbfa7:{NFSU2_TR(0x5cbfa7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cbfab:{NFSU2_TR(0x5cbfab);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cbfaf:{NFSU2_TR(0x5cbfaf);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5cbfb7:{NFSU2_TR(0x5cbfb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cbfb9:{NFSU2_TR(0x5cbfb9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbfba:{NFSU2_TR(0x5cbfba);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbfc0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cbfc0:L5cbfc0:{c.instructions+=4;NFSU2_TR(0x5cbfc0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbfc1:{NFSU2_TR(0x5cbfc1);
s4(0x870848,u32(0x86e768ull));
}
B5cbfcb:{NFSU2_TR(0x5cbfcb);
__builtin_memmove(gp(0x870910),(R+28),4);
}
B5cbfd1:{NFSU2_TR(0x5cbfd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbfd6ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5cbfd6:L5cbfd6:{c.instructions+=12;NFSU2_TR(0x5cbfd6);
__builtin_memmove((R+12),gp(0x86eb48),4);
}
B5cbfdc:{NFSU2_TR(0x5cbfdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cbfdf:{NFSU2_TR(0x5cbfdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x31cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cbfe5:{NFSU2_TR(0x5cbfe5);
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
B5cbfe8:{NFSU2_TR(0x5cbfe8);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbfea:{NFSU2_TR(0x5cbfea);
__builtin_memmove((R+24),(R+0),4);
}
B5cbfec:{NFSU2_TR(0x5cbfec);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cbfef:{NFSU2_TR(0x5cbfef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cbff1:{NFSU2_TR(0x5cbff1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbff2:{NFSU2_TR(0x5cbff2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cbff3:{NFSU2_TR(0x5cbff3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cbff7:{NFSU2_TR(0x5cbff7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cbffaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cbffa:L5cbffa:{c.instructions+=1;NFSU2_TR(0x5cbffa);
__builtin_memmove(gp(0x870910),(R+12),4);
TAIL_STATIC(0x5cc000u,5cc);
}
XIT:NFSU2_TR_EXIT(0x5cb,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
