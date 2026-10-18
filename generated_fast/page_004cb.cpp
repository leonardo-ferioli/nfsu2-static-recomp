#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_435(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_496(u8* __restrict R,Cpu& c);
u32 body_4ac(u8* __restrict R,Cpu& c);
u32 body_4b0(u8* __restrict R,Cpu& c);
u32 body_4b1(u8* __restrict R,Cpu& c);
u32 body_4ca(u8* __restrict R,Cpu& c);
u32 body_4cc(u8* __restrict R,Cpu& c);
u32 body_501(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_52b(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52d(u8* __restrict R,Cpu& c);
u32 body_531(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_53d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5b8(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4cb,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4cb,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4cb(u8* __restrict R,Cpu& c);
u32 page_4cb(Cpu& c){return body_4cb(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4cb(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4cb003:goto L4cb003;
case 0x4cb006:c.instructions+=19;goto B4cb006;
case 0x4cb009:c.instructions+=18;goto B4cb009;
case 0x4cb00b:c.instructions+=17;goto B4cb00b;
case 0x4cb010:c.instructions+=16;goto B4cb010;
case 0x4cb013:c.instructions+=15;goto B4cb013;
case 0x4cb016:c.instructions+=14;goto B4cb016;
case 0x4cb018:c.instructions+=13;goto B4cb018;
case 0x4cb01b:c.instructions+=12;goto B4cb01b;
case 0x4cb01e:c.instructions+=11;goto B4cb01e;
case 0x4cb021:c.instructions+=10;goto B4cb021;
case 0x4cb024:c.instructions+=9;goto B4cb024;
case 0x4cb026:c.instructions+=8;goto B4cb026;
case 0x4cb029:c.instructions+=7;goto B4cb029;
case 0x4cb02c:c.instructions+=6;goto B4cb02c;
case 0x4cb02f:c.instructions+=5;goto B4cb02f;
case 0x4cb032:c.instructions+=4;goto B4cb032;
case 0x4cb034:c.instructions+=3;goto B4cb034;
case 0x4cb036:c.instructions+=2;goto B4cb036;
case 0x4cb039:c.instructions+=1;goto B4cb039;
case 0x4cb03e:goto L4cb03e;
case 0x4cb041:c.instructions+=1;goto B4cb041;
case 0x4cb043:goto L4cb043;
case 0x4cb048:c.instructions+=1;goto B4cb048;
case 0x4cb04d:goto L4cb04d;
case 0x4cb04f:c.instructions+=1;goto B4cb04f;
case 0x4cb051:goto L4cb051;
case 0x4cb056:c.instructions+=1;goto B4cb056;
case 0x4cb05b:goto L4cb05b;
case 0x4cb05e:c.instructions+=1;goto B4cb05e;
case 0x4cb060:goto L4cb060;
case 0x4cb065:c.instructions+=1;goto B4cb065;
case 0x4cb06a:goto L4cb06a;
case 0x4cb06d:c.instructions+=1;goto B4cb06d;
case 0x4cb06f:goto L4cb06f;
case 0x4cb074:c.instructions+=2;goto B4cb074;
case 0x4cb076:c.instructions+=1;goto B4cb076;
case 0x4cb078:goto L4cb078;
case 0x4cb07e:c.instructions+=1;goto B4cb07e;
case 0x4cb080:goto L4cb080;
case 0x4cb083:goto L4cb083;
case 0x4cb086:c.instructions+=5;goto B4cb086;
case 0x4cb088:c.instructions+=4;goto B4cb088;
case 0x4cb08a:c.instructions+=3;goto B4cb08a;
case 0x4cb08c:c.instructions+=2;goto B4cb08c;
case 0x4cb08f:c.instructions+=1;goto B4cb08f;
case 0x4cb091:goto L4cb091;
case 0x4cb094:c.instructions+=4;goto B4cb094;
case 0x4cb09a:c.instructions+=3;goto B4cb09a;
case 0x4cb09c:c.instructions+=2;goto B4cb09c;
case 0x4cb09f:c.instructions+=1;goto B4cb09f;
case 0x4cb0a1:goto L4cb0a1;
case 0x4cb0a7:c.instructions+=8;goto B4cb0a7;
case 0x4cb0aa:c.instructions+=7;goto B4cb0aa;
case 0x4cb0ad:c.instructions+=6;goto B4cb0ad;
case 0x4cb0af:c.instructions+=5;goto B4cb0af;
case 0x4cb0b5:c.instructions+=4;goto B4cb0b5;
case 0x4cb0b8:c.instructions+=3;goto B4cb0b8;
case 0x4cb0bb:c.instructions+=2;goto B4cb0bb;
case 0x4cb0c1:c.instructions+=1;goto B4cb0c1;
case 0x4cb0c4:goto L4cb0c4;
case 0x4cb0c6:c.instructions+=2;goto B4cb0c6;
case 0x4cb0cb:c.instructions+=1;goto B4cb0cb;
case 0x4cb0d0:goto L4cb0d0;
case 0x4cb0d3:c.instructions+=14;goto B4cb0d3;
case 0x4cb0d6:c.instructions+=13;goto B4cb0d6;
case 0x4cb0d9:c.instructions+=12;goto B4cb0d9;
case 0x4cb0dc:c.instructions+=11;goto B4cb0dc;
case 0x4cb0df:c.instructions+=10;goto B4cb0df;
case 0x4cb0e2:c.instructions+=9;goto B4cb0e2;
case 0x4cb0e4:c.instructions+=8;goto B4cb0e4;
case 0x4cb0e6:c.instructions+=7;goto B4cb0e6;
case 0x4cb0e9:c.instructions+=6;goto B4cb0e9;
case 0x4cb0ec:c.instructions+=5;goto B4cb0ec;
case 0x4cb0ef:c.instructions+=4;goto B4cb0ef;
case 0x4cb0f1:c.instructions+=3;goto B4cb0f1;
case 0x4cb0f3:c.instructions+=2;goto B4cb0f3;
case 0x4cb0f4:c.instructions+=1;goto B4cb0f4;
case 0x4cb0f7:goto L4cb0f7;
case 0x4cb0fa:c.instructions+=5;goto B4cb0fa;
case 0x4cb100:c.instructions+=4;goto B4cb100;
case 0x4cb102:c.instructions+=3;goto B4cb102;
case 0x4cb104:c.instructions+=2;goto B4cb104;
case 0x4cb105:c.instructions+=1;goto B4cb105;
case 0x4cb110:goto L4cb110;
case 0x4cb116:c.instructions+=2;goto B4cb116;
case 0x4cb118:c.instructions+=1;goto B4cb118;
case 0x4cb11a:goto L4cb11a;
case 0x4cb11b:c.instructions+=2;goto B4cb11b;
case 0x4cb11d:c.instructions+=1;goto B4cb11d;
case 0x4cb122:goto L4cb122;
case 0x4cb124:c.instructions+=1;goto B4cb124;
case 0x4cb126:goto L4cb126;
case 0x4cb12a:c.instructions+=1;goto B4cb12a;
case 0x4cb130:goto L4cb130;
case 0x4cb133:c.instructions+=1;goto B4cb133;
case 0x4cb135:goto L4cb135;
case 0x4cb137:c.instructions+=2;goto B4cb137;
case 0x4cb139:c.instructions+=1;goto B4cb139;
case 0x4cb13b:goto L4cb13b;
case 0x4cb13c:c.instructions+=1;goto B4cb13c;
case 0x4cb13d:goto L4cb13d;
case 0x4cb13e:c.instructions+=2;goto B4cb13e;
case 0x4cb140:c.instructions+=1;goto B4cb140;
case 0x4cb145:goto L4cb145;
case 0x4cb146:goto L4cb146;
case 0x4cb150:goto L4cb150;
case 0x4cb156:c.instructions+=2;goto B4cb156;
case 0x4cb158:c.instructions+=1;goto B4cb158;
case 0x4cb15a:goto L4cb15a;
case 0x4cb15e:c.instructions+=8;goto B4cb15e;
case 0x4cb162:c.instructions+=7;goto B4cb162;
case 0x4cb163:c.instructions+=6;goto B4cb163;
case 0x4cb167:c.instructions+=5;goto B4cb167;
case 0x4cb168:c.instructions+=4;goto B4cb168;
case 0x4cb16c:c.instructions+=3;goto B4cb16c;
case 0x4cb16d:c.instructions+=2;goto B4cb16d;
case 0x4cb16e:c.instructions+=1;goto B4cb16e;
case 0x4cb173:goto L4cb173;
case 0x4cb174:goto L4cb174;
case 0x4cb176:c.instructions+=1;goto B4cb176;
case 0x4cb180:goto L4cb180;
case 0x4cb182:c.instructions+=11;goto B4cb182;
case 0x4cb187:c.instructions+=10;goto B4cb187;
case 0x4cb18d:c.instructions+=9;goto B4cb18d;
case 0x4cb18e:c.instructions+=8;goto B4cb18e;
case 0x4cb195:c.instructions+=7;goto B4cb195;
case 0x4cb196:c.instructions+=6;goto B4cb196;
case 0x4cb19c:c.instructions+=5;goto B4cb19c;
case 0x4cb1a0:c.instructions+=4;goto B4cb1a0;
case 0x4cb1a2:c.instructions+=3;goto B4cb1a2;
case 0x4cb1a4:c.instructions+=2;goto B4cb1a4;
case 0x4cb1a8:c.instructions+=1;goto B4cb1a8;
case 0x4cb1aa:goto L4cb1aa;
case 0x4cb1ae:c.instructions+=2;goto B4cb1ae;
case 0x4cb1af:c.instructions+=1;goto B4cb1af;
case 0x4cb1b4:goto L4cb1b4;
case 0x4cb1b8:c.instructions+=3;goto B4cb1b8;
case 0x4cb1bf:c.instructions+=2;goto B4cb1bf;
case 0x4cb1c2:c.instructions+=1;goto B4cb1c2;
case 0x4cb1d0:goto L4cb1d0;
case 0x4cb1d1:c.instructions+=9;goto B4cb1d1;
case 0x4cb1d6:c.instructions+=8;goto B4cb1d6;
case 0x4cb1d7:c.instructions+=7;goto B4cb1d7;
case 0x4cb1d9:c.instructions+=6;goto B4cb1d9;
case 0x4cb1dc:c.instructions+=5;goto B4cb1dc;
case 0x4cb1e0:c.instructions+=4;goto B4cb1e0;
case 0x4cb1e3:c.instructions+=3;goto B4cb1e3;
case 0x4cb1e5:c.instructions+=2;goto B4cb1e5;
case 0x4cb1e7:c.instructions+=1;goto B4cb1e7;
case 0x4cb1e9:goto L4cb1e9;
case 0x4cb1ec:c.instructions+=6;goto B4cb1ec;
case 0x4cb1ef:c.instructions+=5;goto B4cb1ef;
case 0x4cb1f1:c.instructions+=4;goto B4cb1f1;
case 0x4cb1f2:c.instructions+=3;goto B4cb1f2;
case 0x4cb1f7:c.instructions+=2;goto B4cb1f7;
case 0x4cb1f8:c.instructions+=1;goto B4cb1f8;
case 0x4cb1fd:goto L4cb1fd;
case 0x4cb200:c.instructions+=4;goto B4cb200;
case 0x4cb204:c.instructions+=3;goto B4cb204;
case 0x4cb205:c.instructions+=2;goto B4cb205;
case 0x4cb206:c.instructions+=1;goto B4cb206;
case 0x4cb207:goto L4cb207;
case 0x4cb20b:c.instructions+=7;goto B4cb20b;
case 0x4cb211:c.instructions+=6;goto B4cb211;
case 0x4cb217:c.instructions+=5;goto B4cb217;
case 0x4cb21d:c.instructions+=4;goto B4cb21d;
case 0x4cb21f:c.instructions+=3;goto B4cb21f;
case 0x4cb221:c.instructions+=2;goto B4cb221;
case 0x4cb224:c.instructions+=1;goto B4cb224;
case 0x4cb226:goto L4cb226;
case 0x4cb229:c.instructions+=5;goto B4cb229;
case 0x4cb22f:c.instructions+=4;goto B4cb22f;
case 0x4cb232:c.instructions+=3;goto B4cb232;
case 0x4cb233:c.instructions+=2;goto B4cb233;
case 0x4cb236:c.instructions+=1;goto B4cb236;
case 0x4cb23b:goto L4cb23b;
case 0x4cb23e:goto L4cb23e;
case 0x4cb23f:c.instructions+=2;goto B4cb23f;
case 0x4cb240:c.instructions+=1;goto B4cb240;
case 0x4cb250:goto L4cb250;
case 0x4cb251:c.instructions+=12;goto B4cb251;
case 0x4cb252:c.instructions+=11;goto B4cb252;
case 0x4cb253:c.instructions+=10;goto B4cb253;
case 0x4cb254:c.instructions+=9;goto B4cb254;
case 0x4cb255:c.instructions+=8;goto B4cb255;
case 0x4cb257:c.instructions+=7;goto B4cb257;
case 0x4cb25d:c.instructions+=6;goto B4cb25d;
case 0x4cb25f:c.instructions+=5;goto B4cb25f;
case 0x4cb261:c.instructions+=4;goto B4cb261;
case 0x4cb267:c.instructions+=3;goto B4cb267;
case 0x4cb26d:c.instructions+=2;goto B4cb26d;
case 0x4cb273:c.instructions+=1;goto B4cb273;
case 0x4cb275:goto L4cb275;
case 0x4cb27a:c.instructions+=9;goto B4cb27a;
case 0x4cb27d:c.instructions+=8;goto B4cb27d;
case 0x4cb284:c.instructions+=7;goto B4cb284;
case 0x4cb28a:c.instructions+=6;goto B4cb28a;
case 0x4cb290:c.instructions+=5;goto B4cb290;
case 0x4cb296:c.instructions+=4;goto B4cb296;
case 0x4cb299:c.instructions+=3;goto B4cb299;
case 0x4cb29e:c.instructions+=2;goto B4cb29e;
case 0x4cb29f:c.instructions+=1;goto B4cb29f;
case 0x4cb2a4:goto L4cb2a4;
case 0x4cb2a7:c.instructions+=1;goto B4cb2a7;
case 0x4cb2ad:goto L4cb2ad;
case 0x4cb2b2:c.instructions+=4;goto B4cb2b2;
case 0x4cb2b4:c.instructions+=3;goto B4cb2b4;
case 0x4cb2b9:c.instructions+=2;goto B4cb2b9;
case 0x4cb2bd:c.instructions+=1;goto B4cb2bd;
case 0x4cb2c0:goto L4cb2c0;
case 0x4cb2c7:c.instructions+=1;goto B4cb2c7;
case 0x4cb2c9:goto L4cb2c9;
case 0x4cb2ce:goto L4cb2ce;
case 0x4cb2d1:c.instructions+=1;goto B4cb2d1;
case 0x4cb2d3:goto L4cb2d3;
case 0x4cb2d4:c.instructions+=1;goto B4cb2d4;
case 0x4cb2d6:goto L4cb2d6;
case 0x4cb2d8:c.instructions+=1;goto B4cb2d8;
case 0x4cb2da:goto L4cb2da;
case 0x4cb2e0:c.instructions+=4;goto B4cb2e0;
case 0x4cb2e1:c.instructions+=3;goto B4cb2e1;
case 0x4cb2e6:c.instructions+=2;goto B4cb2e6;
case 0x4cb2ec:c.instructions+=1;goto B4cb2ec;
case 0x4cb2ee:goto L4cb2ee;
case 0x4cb2f3:goto L4cb2f3;
case 0x4cb2fa:c.instructions+=9;goto B4cb2fa;
case 0x4cb2fc:c.instructions+=8;goto B4cb2fc;
case 0x4cb303:c.instructions+=7;goto B4cb303;
case 0x4cb306:c.instructions+=6;goto B4cb306;
case 0x4cb309:c.instructions+=5;goto B4cb309;
case 0x4cb30c:c.instructions+=4;goto B4cb30c;
case 0x4cb30f:c.instructions+=3;goto B4cb30f;
case 0x4cb310:c.instructions+=2;goto B4cb310;
case 0x4cb311:c.instructions+=1;goto B4cb311;
case 0x4cb316:goto L4cb316;
case 0x4cb318:c.instructions+=2;goto B4cb318;
case 0x4cb319:c.instructions+=1;goto B4cb319;
case 0x4cb31e:goto L4cb31e;
case 0x4cb322:c.instructions+=3;goto B4cb322;
case 0x4cb325:c.instructions+=2;goto B4cb325;
case 0x4cb326:c.instructions+=1;goto B4cb326;
case 0x4cb329:goto L4cb329;
case 0x4cb32f:c.instructions+=4;goto B4cb32f;
case 0x4cb330:c.instructions+=3;goto B4cb330;
case 0x4cb336:c.instructions+=2;goto B4cb336;
case 0x4cb33a:c.instructions+=1;goto B4cb33a;
case 0x4cb33c:goto L4cb33c;
case 0x4cb340:c.instructions+=3;goto B4cb340;
case 0x4cb342:c.instructions+=2;goto B4cb342;
case 0x4cb348:c.instructions+=1;goto B4cb348;
case 0x4cb34a:goto L4cb34a;
case 0x4cb350:c.instructions+=1;goto B4cb350;
case 0x4cb352:goto L4cb352;
case 0x4cb35c:c.instructions+=3;goto B4cb35c;
case 0x4cb362:c.instructions+=2;goto B4cb362;
case 0x4cb364:c.instructions+=1;goto B4cb364;
case 0x4cb366:goto L4cb366;
case 0x4cb36b:c.instructions+=6;goto B4cb36b;
case 0x4cb36d:c.instructions+=5;goto B4cb36d;
case 0x4cb377:c.instructions+=4;goto B4cb377;
case 0x4cb37a:c.instructions+=3;goto B4cb37a;
case 0x4cb37b:c.instructions+=2;goto B4cb37b;
case 0x4cb37c:c.instructions+=1;goto B4cb37c;
case 0x4cb381:goto L4cb381;
case 0x4cb384:goto L4cb384;
case 0x4cb38a:c.instructions+=6;goto B4cb38a;
case 0x4cb391:c.instructions+=5;goto B4cb391;
case 0x4cb394:c.instructions+=4;goto B4cb394;
case 0x4cb397:c.instructions+=3;goto B4cb397;
case 0x4cb398:c.instructions+=2;goto B4cb398;
case 0x4cb399:c.instructions+=1;goto B4cb399;
case 0x4cb39e:goto L4cb39e;
case 0x4cb3a1:c.instructions+=2;goto B4cb3a1;
case 0x4cb3a6:c.instructions+=1;goto B4cb3a6;
case 0x4cb3ab:goto L4cb3ab;
case 0x4cb3ac:c.instructions+=2;goto B4cb3ac;
case 0x4cb3ad:c.instructions+=1;goto B4cb3ad;
case 0x4cb3b2:goto L4cb3b2;
case 0x4cb3b8:c.instructions+=6;goto B4cb3b8;
case 0x4cb3bb:c.instructions+=5;goto B4cb3bb;
case 0x4cb3c2:c.instructions+=4;goto B4cb3c2;
case 0x4cb3c9:c.instructions+=3;goto B4cb3c9;
case 0x4cb3ca:c.instructions+=2;goto B4cb3ca;
case 0x4cb3cb:c.instructions+=1;goto B4cb3cb;
case 0x4cb3d0:goto L4cb3d0;
case 0x4cb3d5:c.instructions+=3;goto B4cb3d5;
case 0x4cb3d8:c.instructions+=2;goto B4cb3d8;
case 0x4cb3db:c.instructions+=1;goto B4cb3db;
case 0x4cb3e1:goto L4cb3e1;
case 0x4cb3e8:c.instructions+=1;goto B4cb3e8;
case 0x4cb3f0:goto L4cb3f0;
case 0x4cb3f6:c.instructions+=5;goto B4cb3f6;
case 0x4cb3f9:c.instructions+=4;goto B4cb3f9;
case 0x4cb3fc:c.instructions+=3;goto B4cb3fc;
case 0x4cb3fe:c.instructions+=2;goto B4cb3fe;
case 0x4cb3ff:c.instructions+=1;goto B4cb3ff;
case 0x4cb404:goto L4cb404;
case 0x4cb407:c.instructions+=3;goto B4cb407;
case 0x4cb408:c.instructions+=2;goto B4cb408;
case 0x4cb409:c.instructions+=1;goto B4cb409;
case 0x4cb40e:goto L4cb40e;
case 0x4cb414:c.instructions+=5;goto B4cb414;
case 0x4cb417:c.instructions+=4;goto B4cb417;
case 0x4cb41a:c.instructions+=3;goto B4cb41a;
case 0x4cb41b:c.instructions+=2;goto B4cb41b;
case 0x4cb41c:c.instructions+=1;goto B4cb41c;
case 0x4cb421:goto L4cb421;
case 0x4cb426:c.instructions+=2;goto B4cb426;
case 0x4cb427:c.instructions+=1;goto B4cb427;
case 0x4cb42c:goto L4cb42c;
case 0x4cb42f:c.instructions+=3;goto B4cb42f;
case 0x4cb431:c.instructions+=2;goto B4cb431;
case 0x4cb436:c.instructions+=1;goto B4cb436;
case 0x4cb43b:goto L4cb43b;
case 0x4cb441:c.instructions+=3;goto B4cb441;
case 0x4cb444:c.instructions+=2;goto B4cb444;
case 0x4cb445:c.instructions+=1;goto B4cb445;
case 0x4cb44a:goto L4cb44a;
case 0x4cb44c:c.instructions+=2;goto B4cb44c;
case 0x4cb451:c.instructions+=1;goto B4cb451;
case 0x4cb456:goto L4cb456;
case 0x4cb45c:c.instructions+=3;goto B4cb45c;
case 0x4cb45f:c.instructions+=2;goto B4cb45f;
case 0x4cb460:c.instructions+=1;goto B4cb460;
case 0x4cb465:goto L4cb465;
case 0x4cb468:c.instructions+=2;goto B4cb468;
case 0x4cb46b:c.instructions+=1;goto B4cb46b;
case 0x4cb46d:goto L4cb46d;
case 0x4cb46e:c.instructions+=5;goto B4cb46e;
case 0x4cb46f:c.instructions+=4;goto B4cb46f;
case 0x4cb470:c.instructions+=3;goto B4cb470;
case 0x4cb471:c.instructions+=2;goto B4cb471;
case 0x4cb472:c.instructions+=1;goto B4cb472;
case 0x4cb480:goto L4cb480;
case 0x4cb481:c.instructions+=1;goto B4cb481;
case 0x4cb486:goto L4cb486;
case 0x4cb488:c.instructions+=2;goto B4cb488;
case 0x4cb489:c.instructions+=1;goto B4cb489;
case 0x4cb48e:goto L4cb48e;
case 0x4cb491:c.instructions+=2;goto B4cb491;
case 0x4cb493:c.instructions+=1;goto B4cb493;
case 0x4cb495:goto L4cb495;
case 0x4cb498:c.instructions+=2;goto B4cb498;
case 0x4cb49e:c.instructions+=1;goto B4cb49e;
case 0x4cb4a0:goto L4cb4a0;
case 0x4cb4a1:c.instructions+=1;goto B4cb4a1;
case 0x4cb4a2:goto L4cb4a2;
case 0x4cb4a4:c.instructions+=2;goto B4cb4a4;
case 0x4cb4a6:c.instructions+=1;goto B4cb4a6;
case 0x4cb4ab:goto L4cb4ab;
case 0x4cb4ac:c.instructions+=1;goto B4cb4ac;
case 0x4cb4b0:goto L4cb4b0;
case 0x4cb4b3:c.instructions+=8;goto B4cb4b3;
case 0x4cb4b4:c.instructions+=7;goto B4cb4b4;
case 0x4cb4b5:c.instructions+=6;goto B4cb4b5;
case 0x4cb4b6:c.instructions+=5;goto B4cb4b6;
case 0x4cb4b8:c.instructions+=4;goto B4cb4b8;
case 0x4cb4be:c.instructions+=3;goto B4cb4be;
case 0x4cb4bf:c.instructions+=2;goto B4cb4bf;
case 0x4cb4c0:c.instructions+=1;goto B4cb4c0;
case 0x4cb4c5:goto L4cb4c5;
case 0x4cb4c9:c.instructions+=6;goto B4cb4c9;
case 0x4cb4ce:c.instructions+=5;goto B4cb4ce;
case 0x4cb4d2:c.instructions+=4;goto B4cb4d2;
case 0x4cb4d7:c.instructions+=3;goto B4cb4d7;
case 0x4cb4d8:c.instructions+=2;goto B4cb4d8;
case 0x4cb4db:c.instructions+=1;goto B4cb4db;
case 0x4cb4e0:goto L4cb4e0;
case 0x4cb4e6:c.instructions+=7;goto B4cb4e6;
case 0x4cb4e7:c.instructions+=6;goto B4cb4e7;
case 0x4cb4eb:c.instructions+=5;goto B4cb4eb;
case 0x4cb4ec:c.instructions+=4;goto B4cb4ec;
case 0x4cb4f0:c.instructions+=3;goto B4cb4f0;
case 0x4cb4f2:c.instructions+=2;goto B4cb4f2;
case 0x4cb4f3:c.instructions+=1;goto B4cb4f3;
case 0x4cb4f8:goto L4cb4f8;
case 0x4cb4fb:c.instructions+=3;goto B4cb4fb;
case 0x4cb4ff:c.instructions+=2;goto B4cb4ff;
case 0x4cb500:c.instructions+=1;goto B4cb500;
case 0x4cb505:goto L4cb505;
case 0x4cb506:c.instructions+=2;goto B4cb506;
case 0x4cb507:c.instructions+=1;goto B4cb507;
case 0x4cb50c:goto L4cb50c;
case 0x4cb50f:c.instructions+=6;goto B4cb50f;
case 0x4cb516:c.instructions+=5;goto B4cb516;
case 0x4cb51c:c.instructions+=4;goto B4cb51c;
case 0x4cb51f:c.instructions+=3;goto B4cb51f;
case 0x4cb520:c.instructions+=2;goto B4cb520;
case 0x4cb522:c.instructions+=1;goto B4cb522;
case 0x4cb527:goto L4cb527;
case 0x4cb52b:c.instructions+=5;goto B4cb52b;
case 0x4cb52e:c.instructions+=4;goto B4cb52e;
case 0x4cb534:c.instructions+=3;goto B4cb534;
case 0x4cb535:c.instructions+=2;goto B4cb535;
case 0x4cb537:c.instructions+=1;goto B4cb537;
case 0x4cb53c:goto L4cb53c;
case 0x4cb540:c.instructions+=31;goto B4cb540;
case 0x4cb543:c.instructions+=30;goto B4cb543;
case 0x4cb546:c.instructions+=29;goto B4cb546;
case 0x4cb549:c.instructions+=28;goto B4cb549;
case 0x4cb54c:c.instructions+=27;goto B4cb54c;
case 0x4cb54e:c.instructions+=26;goto B4cb54e;
case 0x4cb551:c.instructions+=25;goto B4cb551;
case 0x4cb553:c.instructions+=24;goto B4cb553;
case 0x4cb556:c.instructions+=23;goto B4cb556;
case 0x4cb559:c.instructions+=22;goto B4cb559;
case 0x4cb55c:c.instructions+=21;goto B4cb55c;
case 0x4cb55f:c.instructions+=20;goto B4cb55f;
case 0x4cb561:c.instructions+=19;goto B4cb561;
case 0x4cb564:c.instructions+=18;goto B4cb564;
case 0x4cb566:c.instructions+=17;goto B4cb566;
case 0x4cb569:c.instructions+=16;goto B4cb569;
case 0x4cb56c:c.instructions+=15;goto B4cb56c;
case 0x4cb56f:c.instructions+=14;goto B4cb56f;
case 0x4cb572:c.instructions+=13;goto B4cb572;
case 0x4cb574:c.instructions+=12;goto B4cb574;
case 0x4cb577:c.instructions+=11;goto B4cb577;
case 0x4cb579:c.instructions+=10;goto B4cb579;
case 0x4cb57c:c.instructions+=9;goto B4cb57c;
case 0x4cb582:c.instructions+=8;goto B4cb582;
case 0x4cb588:c.instructions+=7;goto B4cb588;
case 0x4cb58a:c.instructions+=6;goto B4cb58a;
case 0x4cb590:c.instructions+=5;goto B4cb590;
case 0x4cb596:c.instructions+=4;goto B4cb596;
case 0x4cb59c:c.instructions+=3;goto B4cb59c;
case 0x4cb5a2:c.instructions+=2;goto B4cb5a2;
case 0x4cb5a4:c.instructions+=1;goto B4cb5a4;
case 0x4cb5a7:goto L4cb5a7;
case 0x4cb5aa:c.instructions+=2;goto B4cb5aa;
case 0x4cb5ac:c.instructions+=1;goto B4cb5ac;
case 0x4cb5ae:goto L4cb5ae;
case 0x4cb5b0:c.instructions+=2;goto B4cb5b0;
case 0x4cb5b2:c.instructions+=1;goto B4cb5b2;
case 0x4cb5b5:goto L4cb5b5;
case 0x4cb5b8:c.instructions+=2;goto B4cb5b8;
case 0x4cb5ba:c.instructions+=1;goto B4cb5ba;
case 0x4cb5bc:goto L4cb5bc;
case 0x4cb5bf:c.instructions+=2;goto B4cb5bf;
case 0x4cb5c1:c.instructions+=1;goto B4cb5c1;
case 0x4cb5c4:goto L4cb5c4;
case 0x4cb5ca:c.instructions+=2;goto B4cb5ca;
case 0x4cb5d0:c.instructions+=1;goto B4cb5d0;
case 0x4cb5d2:goto L4cb5d2;
case 0x4cb5d4:c.instructions+=2;goto B4cb5d4;
case 0x4cb5d6:c.instructions+=1;goto B4cb5d6;
case 0x4cb5d9:goto L4cb5d9;
case 0x4cb5db:c.instructions+=2;goto B4cb5db;
case 0x4cb5dd:c.instructions+=1;goto B4cb5dd;
case 0x4cb5e0:goto L4cb5e0;
case 0x4cb5e2:c.instructions+=2;goto B4cb5e2;
case 0x4cb5e4:c.instructions+=1;goto B4cb5e4;
case 0x4cb5e7:goto L4cb5e7;
case 0x4cb5e9:c.instructions+=2;goto B4cb5e9;
case 0x4cb5eb:c.instructions+=1;goto B4cb5eb;
case 0x4cb5ee:goto L4cb5ee;
case 0x4cb5f1:c.instructions+=2;goto B4cb5f1;
case 0x4cb5f3:c.instructions+=1;goto B4cb5f3;
case 0x4cb5f6:goto L4cb5f6;
case 0x4cb5f9:c.instructions+=2;goto B4cb5f9;
case 0x4cb5fb:c.instructions+=1;goto B4cb5fb;
case 0x4cb5fe:goto L4cb5fe;
case 0x4cb600:c.instructions+=2;goto B4cb600;
case 0x4cb602:c.instructions+=1;goto B4cb602;
case 0x4cb605:goto L4cb605;
case 0x4cb608:c.instructions+=4;goto B4cb608;
case 0x4cb60a:c.instructions+=3;goto B4cb60a;
case 0x4cb60f:c.instructions+=2;goto B4cb60f;
case 0x4cb610:c.instructions+=1;goto B4cb610;
case 0x4cb615:goto L4cb615;
case 0x4cb617:c.instructions+=3;goto B4cb617;
case 0x4cb61a:c.instructions+=2;goto B4cb61a;
case 0x4cb61c:c.instructions+=1;goto B4cb61c;
case 0x4cb61f:goto L4cb61f;
case 0x4cb622:c.instructions+=2;goto B4cb622;
case 0x4cb624:c.instructions+=1;goto B4cb624;
case 0x4cb627:goto L4cb627;
case 0x4cb62d:c.instructions+=14;goto B4cb62d;
case 0x4cb633:c.instructions+=13;goto B4cb633;
case 0x4cb634:c.instructions+=12;goto B4cb634;
case 0x4cb63a:c.instructions+=11;goto B4cb63a;
case 0x4cb63d:c.instructions+=10;goto B4cb63d;
case 0x4cb643:c.instructions+=9;goto B4cb643;
case 0x4cb644:c.instructions+=8;goto B4cb644;
case 0x4cb647:c.instructions+=7;goto B4cb647;
case 0x4cb64d:c.instructions+=6;goto B4cb64d;
case 0x4cb64e:c.instructions+=5;goto B4cb64e;
case 0x4cb64f:c.instructions+=4;goto B4cb64f;
case 0x4cb650:c.instructions+=3;goto B4cb650;
case 0x4cb651:c.instructions+=2;goto B4cb651;
case 0x4cb654:c.instructions+=1;goto B4cb654;
case 0x4cb660:goto L4cb660;
case 0x4cb663:c.instructions+=2;goto B4cb663;
case 0x4cb665:c.instructions+=1;goto B4cb665;
case 0x4cb667:goto L4cb667;
case 0x4cb66a:c.instructions+=1;goto B4cb66a;
case 0x4cb66c:goto L4cb66c;
case 0x4cb66e:goto L4cb66e;
case 0x4cb66f:c.instructions+=5;goto B4cb66f;
case 0x4cb670:c.instructions+=4;goto B4cb670;
case 0x4cb674:c.instructions+=3;goto B4cb674;
case 0x4cb679:c.instructions+=2;goto B4cb679;
case 0x4cb67b:c.instructions+=1;goto B4cb67b;
case 0x4cb67d:goto L4cb67d;
case 0x4cb680:goto L4cb680;
case 0x4cb682:c.instructions+=1;goto B4cb682;
case 0x4cb684:goto L4cb684;
case 0x4cb687:c.instructions+=1;goto B4cb687;
case 0x4cb689:goto L4cb689;
case 0x4cb68b:goto L4cb68b;
case 0x4cb68d:c.instructions+=1;goto B4cb68d;
case 0x4cb68f:goto L4cb68f;
case 0x4cb692:c.instructions+=2;goto B4cb692;
case 0x4cb694:c.instructions+=1;goto B4cb694;
case 0x4cb696:goto L4cb696;
case 0x4cb699:c.instructions+=1;goto B4cb699;
case 0x4cb69b:goto L4cb69b;
case 0x4cb69d:goto L4cb69d;
case 0x4cb69e:c.instructions+=2;goto B4cb69e;
case 0x4cb6a0:c.instructions+=1;goto B4cb6a0;
case 0x4cb6a2:goto L4cb6a2;
case 0x4cb6a3:c.instructions+=2;goto B4cb6a3;
case 0x4cb6a4:c.instructions+=1;goto B4cb6a4;
case 0x4cb6a7:goto L4cb6a7;
case 0x4cb6a9:goto L4cb6a9;
case 0x4cb6aa:c.instructions+=2;goto B4cb6aa;
case 0x4cb6ab:c.instructions+=1;goto B4cb6ab;
case 0x4cb6b0:goto L4cb6b0;
case 0x4cb6b1:c.instructions+=11;goto B4cb6b1;
case 0x4cb6b3:c.instructions+=10;goto B4cb6b3;
case 0x4cb6b6:c.instructions+=9;goto B4cb6b6;
case 0x4cb6b9:c.instructions+=8;goto B4cb6b9;
case 0x4cb6bc:c.instructions+=7;goto B4cb6bc;
case 0x4cb6be:c.instructions+=6;goto B4cb6be;
case 0x4cb6c1:c.instructions+=5;goto B4cb6c1;
case 0x4cb6c2:c.instructions+=4;goto B4cb6c2;
case 0x4cb6c3:c.instructions+=3;goto B4cb6c3;
case 0x4cb6c4:c.instructions+=2;goto B4cb6c4;
case 0x4cb6c8:c.instructions+=1;goto B4cb6c8;
case 0x4cb6ca:goto L4cb6ca;
case 0x4cb6cd:c.instructions+=1;goto B4cb6cd;
case 0x4cb6cf:goto L4cb6cf;
case 0x4cb6d1:goto L4cb6d1;
case 0x4cb6d4:c.instructions+=2;goto B4cb6d4;
case 0x4cb6d6:c.instructions+=1;goto B4cb6d6;
case 0x4cb6d8:goto L4cb6d8;
case 0x4cb6db:c.instructions+=1;goto B4cb6db;
case 0x4cb6dd:goto L4cb6dd;
case 0x4cb6df:goto L4cb6df;
case 0x4cb6e2:goto L4cb6e2;
case 0x4cb6e4:c.instructions+=1;goto B4cb6e4;
case 0x4cb6e6:goto L4cb6e6;
case 0x4cb6e9:c.instructions+=1;goto B4cb6e9;
case 0x4cb6eb:goto L4cb6eb;
case 0x4cb6ed:goto L4cb6ed;
case 0x4cb6ef:c.instructions+=1;goto B4cb6ef;
case 0x4cb6f5:goto L4cb6f5;
case 0x4cb6f8:c.instructions+=2;goto B4cb6f8;
case 0x4cb6fa:c.instructions+=1;goto B4cb6fa;
case 0x4cb6fc:goto L4cb6fc;
case 0x4cb6ff:c.instructions+=15;goto B4cb6ff;
case 0x4cb702:c.instructions+=14;goto B4cb702;
case 0x4cb705:c.instructions+=13;goto B4cb705;
case 0x4cb709:c.instructions+=12;goto B4cb709;
case 0x4cb70d:c.instructions+=11;goto B4cb70d;
case 0x4cb70e:c.instructions+=10;goto B4cb70e;
case 0x4cb712:c.instructions+=9;goto B4cb712;
case 0x4cb715:c.instructions+=8;goto B4cb715;
case 0x4cb719:c.instructions+=7;goto B4cb719;
case 0x4cb71d:c.instructions+=6;goto B4cb71d;
case 0x4cb71e:c.instructions+=5;goto B4cb71e;
case 0x4cb722:c.instructions+=4;goto B4cb722;
case 0x4cb725:c.instructions+=3;goto B4cb725;
case 0x4cb726:c.instructions+=2;goto B4cb726;
case 0x4cb727:c.instructions+=1;goto B4cb727;
case 0x4cb72c:goto L4cb72c;
case 0x4cb72f:c.instructions+=2;goto B4cb72f;
case 0x4cb731:c.instructions+=1;goto B4cb731;
case 0x4cb733:goto L4cb733;
case 0x4cb737:goto L4cb737;
case 0x4cb73a:c.instructions+=2;goto B4cb73a;
case 0x4cb73c:c.instructions+=1;goto B4cb73c;
case 0x4cb73e:goto L4cb73e;
case 0x4cb741:c.instructions+=15;goto B4cb741;
case 0x4cb744:c.instructions+=14;goto B4cb744;
case 0x4cb747:c.instructions+=13;goto B4cb747;
case 0x4cb74b:c.instructions+=12;goto B4cb74b;
case 0x4cb74f:c.instructions+=11;goto B4cb74f;
case 0x4cb750:c.instructions+=10;goto B4cb750;
case 0x4cb754:c.instructions+=9;goto B4cb754;
case 0x4cb757:c.instructions+=8;goto B4cb757;
case 0x4cb75b:c.instructions+=7;goto B4cb75b;
case 0x4cb75f:c.instructions+=6;goto B4cb75f;
case 0x4cb760:c.instructions+=5;goto B4cb760;
case 0x4cb764:c.instructions+=4;goto B4cb764;
case 0x4cb767:c.instructions+=3;goto B4cb767;
case 0x4cb768:c.instructions+=2;goto B4cb768;
case 0x4cb769:c.instructions+=1;goto B4cb769;
case 0x4cb76e:goto L4cb76e;
case 0x4cb771:c.instructions+=2;goto B4cb771;
case 0x4cb773:c.instructions+=1;goto B4cb773;
case 0x4cb775:goto L4cb775;
case 0x4cb779:goto L4cb779;
case 0x4cb77c:c.instructions+=2;goto B4cb77c;
case 0x4cb77e:c.instructions+=1;goto B4cb77e;
case 0x4cb780:goto L4cb780;
case 0x4cb783:c.instructions+=1;goto B4cb783;
case 0x4cb785:goto L4cb785;
case 0x4cb787:goto L4cb787;
case 0x4cb78a:c.instructions+=2;goto B4cb78a;
case 0x4cb78c:c.instructions+=1;goto B4cb78c;
case 0x4cb78e:goto L4cb78e;
case 0x4cb791:c.instructions+=1;goto B4cb791;
case 0x4cb796:goto L4cb796;
case 0x4cb798:c.instructions+=1;goto B4cb798;
case 0x4cb79d:goto L4cb79d;
case 0x4cb79f:c.instructions+=6;goto B4cb79f;
case 0x4cb7a0:c.instructions+=5;goto B4cb7a0;
case 0x4cb7a1:c.instructions+=4;goto B4cb7a1;
case 0x4cb7a2:c.instructions+=3;goto B4cb7a2;
case 0x4cb7a4:c.instructions+=2;goto B4cb7a4;
case 0x4cb7a5:c.instructions+=1;goto B4cb7a5;
case 0x4cb7a8:goto L4cb7a8;
case 0x4cb7aa:c.instructions+=6;goto B4cb7aa;
case 0x4cb7ab:c.instructions+=5;goto B4cb7ab;
case 0x4cb7ac:c.instructions+=4;goto B4cb7ac;
case 0x4cb7ad:c.instructions+=3;goto B4cb7ad;
case 0x4cb7af:c.instructions+=2;goto B4cb7af;
case 0x4cb7b0:c.instructions+=1;goto B4cb7b0;
case 0x4cb7b3:goto L4cb7b3;
case 0x4cb7b4:c.instructions+=6;goto B4cb7b4;
case 0x4cb7b5:c.instructions+=5;goto B4cb7b5;
case 0x4cb7b7:c.instructions+=4;goto B4cb7b7;
case 0x4cb7b8:c.instructions+=3;goto B4cb7b8;
case 0x4cb7ba:c.instructions+=2;goto B4cb7ba;
case 0x4cb7bb:c.instructions+=1;goto B4cb7bb;
case 0x4cb7c0:goto L4cb7c0;
case 0x4cb7c1:c.instructions+=8;goto B4cb7c1;
case 0x4cb7c2:c.instructions+=7;goto B4cb7c2;
case 0x4cb7c5:c.instructions+=6;goto B4cb7c5;
case 0x4cb7c7:c.instructions+=5;goto B4cb7c7;
case 0x4cb7c8:c.instructions+=4;goto B4cb7c8;
case 0x4cb7c9:c.instructions+=3;goto B4cb7c9;
case 0x4cb7ca:c.instructions+=2;goto B4cb7ca;
case 0x4cb7ce:c.instructions+=1;goto B4cb7ce;
case 0x4cb7d0:goto L4cb7d0;
case 0x4cb7d3:c.instructions+=1;goto B4cb7d3;
case 0x4cb7d5:goto L4cb7d5;
case 0x4cb7d7:goto L4cb7d7;
case 0x4cb7da:c.instructions+=2;goto B4cb7da;
case 0x4cb7dc:c.instructions+=1;goto B4cb7dc;
case 0x4cb7de:goto L4cb7de;
case 0x4cb7e1:c.instructions+=1;goto B4cb7e1;
case 0x4cb7e3:goto L4cb7e3;
case 0x4cb7e5:goto L4cb7e5;
case 0x4cb7e8:c.instructions+=1;goto B4cb7e8;
case 0x4cb7eb:goto L4cb7eb;
case 0x4cb7ed:c.instructions+=1;goto B4cb7ed;
case 0x4cb7ef:goto L4cb7ef;
case 0x4cb7f2:c.instructions+=1;goto B4cb7f2;
case 0x4cb7f4:goto L4cb7f4;
case 0x4cb7f6:goto L4cb7f6;
case 0x4cb7f8:c.instructions+=1;goto B4cb7f8;
case 0x4cb7fa:goto L4cb7fa;
case 0x4cb7fd:c.instructions+=1;goto B4cb7fd;
case 0x4cb7ff:goto L4cb7ff;
case 0x4cb801:goto L4cb801;
case 0x4cb803:c.instructions+=1;goto B4cb803;
case 0x4cb805:goto L4cb805;
case 0x4cb807:c.instructions+=3;goto B4cb807;
case 0x4cb80c:c.instructions+=2;goto B4cb80c;
case 0x4cb80e:c.instructions+=1;goto B4cb80e;
case 0x4cb811:goto L4cb811;
case 0x4cb813:c.instructions+=2;goto B4cb813;
case 0x4cb815:c.instructions+=1;goto B4cb815;
case 0x4cb818:goto L4cb818;
case 0x4cb81a:c.instructions+=2;goto B4cb81a;
case 0x4cb81c:c.instructions+=1;goto B4cb81c;
case 0x4cb81f:goto L4cb81f;
case 0x4cb821:c.instructions+=3;goto B4cb821;
case 0x4cb826:c.instructions+=2;goto B4cb826;
case 0x4cb828:c.instructions+=1;goto B4cb828;
case 0x4cb82b:goto L4cb82b;
case 0x4cb82d:c.instructions+=2;goto B4cb82d;
case 0x4cb82f:c.instructions+=1;goto B4cb82f;
case 0x4cb832:goto L4cb832;
case 0x4cb834:c.instructions+=2;goto B4cb834;
case 0x4cb836:c.instructions+=1;goto B4cb836;
case 0x4cb839:goto L4cb839;
case 0x4cb83b:c.instructions+=3;goto B4cb83b;
case 0x4cb840:c.instructions+=2;goto B4cb840;
case 0x4cb842:c.instructions+=1;goto B4cb842;
case 0x4cb845:goto L4cb845;
case 0x4cb847:c.instructions+=2;goto B4cb847;
case 0x4cb849:c.instructions+=1;goto B4cb849;
case 0x4cb84c:goto L4cb84c;
case 0x4cb84e:c.instructions+=2;goto B4cb84e;
case 0x4cb850:c.instructions+=1;goto B4cb850;
case 0x4cb853:goto L4cb853;
case 0x4cb856:c.instructions+=1;goto B4cb856;
case 0x4cb858:goto L4cb858;
case 0x4cb85b:c.instructions+=1;goto B4cb85b;
case 0x4cb85d:goto L4cb85d;
case 0x4cb860:goto L4cb860;
case 0x4cb863:c.instructions+=7;goto B4cb863;
case 0x4cb865:c.instructions+=6;goto B4cb865;
case 0x4cb868:c.instructions+=5;goto B4cb868;
case 0x4cb86a:c.instructions+=4;goto B4cb86a;
case 0x4cb86d:c.instructions+=3;goto B4cb86d;
case 0x4cb870:c.instructions+=2;goto B4cb870;
case 0x4cb872:c.instructions+=1;goto B4cb872;
case 0x4cb874:goto L4cb874;
case 0x4cb876:c.instructions+=2;goto B4cb876;
case 0x4cb878:c.instructions+=1;goto B4cb878;
case 0x4cb87a:goto L4cb87a;
case 0x4cb87d:c.instructions+=1;goto B4cb87d;
case 0x4cb87f:goto L4cb87f;
case 0x4cb883:c.instructions+=8;goto B4cb883;
case 0x4cb886:c.instructions+=7;goto B4cb886;
case 0x4cb887:c.instructions+=6;goto B4cb887;
case 0x4cb88a:c.instructions+=5;goto B4cb88a;
case 0x4cb88c:c.instructions+=4;goto B4cb88c;
case 0x4cb88d:c.instructions+=3;goto B4cb88d;
case 0x4cb88e:c.instructions+=2;goto B4cb88e;
case 0x4cb88f:c.instructions+=1;goto B4cb88f;
case 0x4cb891:goto L4cb891;
case 0x4cb895:c.instructions+=9;goto B4cb895;
case 0x4cb898:c.instructions+=8;goto B4cb898;
case 0x4cb89a:c.instructions+=7;goto B4cb89a;
case 0x4cb89c:c.instructions+=6;goto B4cb89c;
case 0x4cb89f:c.instructions+=5;goto B4cb89f;
case 0x4cb8a1:c.instructions+=4;goto B4cb8a1;
case 0x4cb8a4:c.instructions+=3;goto B4cb8a4;
case 0x4cb8a7:c.instructions+=2;goto B4cb8a7;
case 0x4cb8a9:c.instructions+=1;goto B4cb8a9;
case 0x4cb8ab:goto L4cb8ab;
case 0x4cb8ad:c.instructions+=2;goto B4cb8ad;
case 0x4cb8af:c.instructions+=1;goto B4cb8af;
case 0x4cb8b1:goto L4cb8b1;
case 0x4cb8b5:c.instructions+=4;goto B4cb8b5;
case 0x4cb8b8:c.instructions+=3;goto B4cb8b8;
case 0x4cb8bb:c.instructions+=2;goto B4cb8bb;
case 0x4cb8bd:c.instructions+=1;goto B4cb8bd;
case 0x4cb8bf:goto L4cb8bf;
case 0x4cb8c3:c.instructions+=4;goto B4cb8c3;
case 0x4cb8c6:c.instructions+=3;goto B4cb8c6;
case 0x4cb8c9:c.instructions+=2;goto B4cb8c9;
case 0x4cb8cb:c.instructions+=1;goto B4cb8cb;
case 0x4cb8cd:goto L4cb8cd;
case 0x4cb8d0:goto L4cb8d0;
case 0x4cb8d4:c.instructions+=9;goto B4cb8d4;
case 0x4cb8d7:c.instructions+=8;goto B4cb8d7;
case 0x4cb8d9:c.instructions+=7;goto B4cb8d9;
case 0x4cb8db:c.instructions+=6;goto B4cb8db;
case 0x4cb8de:c.instructions+=5;goto B4cb8de;
case 0x4cb8e0:c.instructions+=4;goto B4cb8e0;
case 0x4cb8e3:c.instructions+=3;goto B4cb8e3;
case 0x4cb8e6:c.instructions+=2;goto B4cb8e6;
case 0x4cb8e8:c.instructions+=1;goto B4cb8e8;
case 0x4cb8ea:goto L4cb8ea;
case 0x4cb8ec:c.instructions+=2;goto B4cb8ec;
case 0x4cb8ee:c.instructions+=1;goto B4cb8ee;
case 0x4cb8f0:goto L4cb8f0;
case 0x4cb8f4:c.instructions+=4;goto B4cb8f4;
case 0x4cb8f7:c.instructions+=3;goto B4cb8f7;
case 0x4cb8fa:c.instructions+=2;goto B4cb8fa;
case 0x4cb8fc:c.instructions+=1;goto B4cb8fc;
case 0x4cb8fe:goto L4cb8fe;
case 0x4cb902:c.instructions+=2;goto B4cb902;
case 0x4cb905:c.instructions+=1;goto B4cb905;
case 0x4cb910:goto L4cb910;
case 0x4cb913:c.instructions+=5;goto B4cb913;
case 0x4cb915:c.instructions+=4;goto B4cb915;
case 0x4cb916:c.instructions+=3;goto B4cb916;
case 0x4cb917:c.instructions+=2;goto B4cb917;
case 0x4cb918:c.instructions+=1;goto B4cb918;
case 0x4cb91a:goto L4cb91a;
case 0x4cb91d:c.instructions+=1;goto B4cb91d;
case 0x4cb91f:goto L4cb91f;
case 0x4cb921:goto L4cb921;
case 0x4cb924:c.instructions+=3;goto B4cb924;
case 0x4cb926:c.instructions+=2;goto B4cb926;
case 0x4cb929:c.instructions+=1;goto B4cb929;
case 0x4cb92b:goto L4cb92b;
case 0x4cb92e:c.instructions+=1;goto B4cb92e;
case 0x4cb930:goto L4cb930;
case 0x4cb932:goto L4cb932;
case 0x4cb934:c.instructions+=1;goto B4cb934;
case 0x4cb936:goto L4cb936;
case 0x4cb939:c.instructions+=1;goto B4cb939;
case 0x4cb93b:goto L4cb93b;
case 0x4cb93d:goto L4cb93d;
case 0x4cb93f:c.instructions+=1;goto B4cb93f;
case 0x4cb941:goto L4cb941;
case 0x4cb943:c.instructions+=2;goto B4cb943;
case 0x4cb945:c.instructions+=1;goto B4cb945;
case 0x4cb948:goto L4cb948;
case 0x4cb94a:c.instructions+=2;goto B4cb94a;
case 0x4cb94c:c.instructions+=1;goto B4cb94c;
case 0x4cb94f:goto L4cb94f;
case 0x4cb952:c.instructions+=2;goto B4cb952;
case 0x4cb954:c.instructions+=1;goto B4cb954;
case 0x4cb956:goto L4cb956;
case 0x4cb959:c.instructions+=1;goto B4cb959;
case 0x4cb95b:goto L4cb95b;
case 0x4cb95d:goto L4cb95d;
case 0x4cb960:c.instructions+=2;goto B4cb960;
case 0x4cb962:c.instructions+=1;goto B4cb962;
case 0x4cb964:goto L4cb964;
case 0x4cb967:c.instructions+=1;goto B4cb967;
case 0x4cb969:goto L4cb969;
case 0x4cb96a:c.instructions+=3;goto B4cb96a;
case 0x4cb96b:c.instructions+=2;goto B4cb96b;
case 0x4cb96c:c.instructions+=1;goto B4cb96c;
case 0x4cb970:goto L4cb970;
case 0x4cb973:c.instructions+=6;goto B4cb973;
case 0x4cb975:c.instructions+=5;goto B4cb975;
case 0x4cb976:c.instructions+=4;goto B4cb976;
case 0x4cb977:c.instructions+=3;goto B4cb977;
case 0x4cb978:c.instructions+=2;goto B4cb978;
case 0x4cb97d:c.instructions+=1;goto B4cb97d;
case 0x4cb97f:goto L4cb97f;
case 0x4cb982:c.instructions+=1;goto B4cb982;
case 0x4cb984:goto L4cb984;
case 0x4cb986:goto L4cb986;
case 0x4cb989:c.instructions+=3;goto B4cb989;
case 0x4cb98b:c.instructions+=2;goto B4cb98b;
case 0x4cb98d:c.instructions+=1;goto B4cb98d;
case 0x4cb98f:goto L4cb98f;
case 0x4cb992:c.instructions+=1;goto B4cb992;
case 0x4cb994:goto L4cb994;
case 0x4cb996:goto L4cb996;
case 0x4cb99a:c.instructions+=1;goto B4cb99a;
case 0x4cb9a0:goto L4cb9a0;
case 0x4cb9a2:c.instructions+=1;goto B4cb9a2;
case 0x4cb9a4:goto L4cb9a4;
case 0x4cb9a7:c.instructions+=1;goto B4cb9a7;
case 0x4cb9a9:goto L4cb9a9;
case 0x4cb9ab:goto L4cb9ab;
case 0x4cb9ad:c.instructions+=1;goto B4cb9ad;
case 0x4cb9af:goto L4cb9af;
case 0x4cb9b1:c.instructions+=1;goto B4cb9b1;
case 0x4cb9b3:goto L4cb9b3;
case 0x4cb9b5:c.instructions+=1;goto B4cb9b5;
case 0x4cb9b7:goto L4cb9b7;
case 0x4cb9ba:c.instructions+=2;goto B4cb9ba;
case 0x4cb9bc:c.instructions+=1;goto B4cb9bc;
case 0x4cb9be:goto L4cb9be;
case 0x4cb9c1:c.instructions+=1;goto B4cb9c1;
case 0x4cb9c3:goto L4cb9c3;
case 0x4cb9c5:goto L4cb9c5;
case 0x4cb9c8:c.instructions+=3;goto B4cb9c8;
case 0x4cb9c9:c.instructions+=2;goto B4cb9c9;
case 0x4cb9cb:c.instructions+=1;goto B4cb9cb;
case 0x4cb9cd:goto L4cb9cd;
case 0x4cb9d0:c.instructions+=1;goto B4cb9d0;
case 0x4cb9d2:goto L4cb9d2;
case 0x4cb9d4:c.instructions+=1;goto B4cb9d4;
case 0x4cb9d6:goto L4cb9d6;
case 0x4cb9d8:goto L4cb9d8;
case 0x4cb9d9:c.instructions+=3;goto B4cb9d9;
case 0x4cb9da:c.instructions+=2;goto B4cb9da;
case 0x4cb9db:c.instructions+=1;goto B4cb9db;
case 0x4cb9e0:goto L4cb9e0;
case 0x4cb9e4:c.instructions+=6;goto B4cb9e4;
case 0x4cb9e9:c.instructions+=5;goto B4cb9e9;
case 0x4cb9ea:c.instructions+=4;goto B4cb9ea;
case 0x4cb9eb:c.instructions+=3;goto B4cb9eb;
case 0x4cb9ec:c.instructions+=2;goto B4cb9ec;
case 0x4cb9ee:c.instructions+=1;goto B4cb9ee;
case 0x4cb9f0:goto L4cb9f0;
case 0x4cb9f3:c.instructions+=3;goto B4cb9f3;
case 0x4cb9f5:c.instructions+=2;goto B4cb9f5;
case 0x4cb9f8:c.instructions+=1;goto B4cb9f8;
case 0x4cb9fa:goto L4cb9fa;
case 0x4cb9fd:c.instructions+=1;goto B4cb9fd;
case 0x4cb9ff:goto L4cb9ff;
case 0x4cba01:goto L4cba01;
case 0x4cba03:c.instructions+=1;goto B4cba03;
case 0x4cba05:goto L4cba05;
case 0x4cba08:c.instructions+=1;goto B4cba08;
case 0x4cba0a:goto L4cba0a;
case 0x4cba0c:goto L4cba0c;
case 0x4cba0e:c.instructions+=1;goto B4cba0e;
case 0x4cba14:goto L4cba14;
case 0x4cba17:c.instructions+=1;goto B4cba17;
case 0x4cba19:goto L4cba19;
case 0x4cba1c:c.instructions+=2;goto B4cba1c;
case 0x4cba1e:c.instructions+=1;goto B4cba1e;
case 0x4cba20:goto L4cba20;
case 0x4cba23:c.instructions+=1;goto B4cba23;
case 0x4cba25:goto L4cba25;
case 0x4cba26:c.instructions+=2;goto B4cba26;
case 0x4cba28:c.instructions+=1;goto B4cba28;
case 0x4cba2d:goto L4cba2d;
case 0x4cba30:goto L4cba30;
case 0x4cba31:c.instructions+=2;goto B4cba31;
case 0x4cba32:c.instructions+=1;goto B4cba32;
case 0x4cba37:goto L4cba37;
case 0x4cba39:c.instructions+=1;goto B4cba39;
case 0x4cba3b:goto L4cba3b;
case 0x4cba3e:c.instructions+=1;goto B4cba3e;
case 0x4cba40:goto L4cba40;
case 0x4cba45:c.instructions+=1;goto B4cba45;
case 0x4cba47:goto L4cba47;
case 0x4cba4a:c.instructions+=3;goto B4cba4a;
case 0x4cba4c:c.instructions+=2;goto B4cba4c;
case 0x4cba4f:c.instructions+=1;goto B4cba4f;
case 0x4cba51:goto L4cba51;
case 0x4cba54:c.instructions+=1;goto B4cba54;
case 0x4cba56:goto L4cba56;
case 0x4cba58:goto L4cba58;
case 0x4cba5a:c.instructions+=1;goto B4cba5a;
case 0x4cba5c:goto L4cba5c;
case 0x4cba5f:c.instructions+=1;goto B4cba5f;
case 0x4cba61:goto L4cba61;
case 0x4cba63:goto L4cba63;
case 0x4cba65:c.instructions+=1;goto B4cba65;
case 0x4cba67:goto L4cba67;
case 0x4cba6a:c.instructions+=1;goto B4cba6a;
case 0x4cba6c:goto L4cba6c;
case 0x4cba6f:c.instructions+=2;goto B4cba6f;
case 0x4cba71:c.instructions+=1;goto B4cba71;
case 0x4cba73:goto L4cba73;
case 0x4cba76:c.instructions+=1;goto B4cba76;
case 0x4cba78:goto L4cba78;
case 0x4cba79:c.instructions+=2;goto B4cba79;
case 0x4cba7b:c.instructions+=1;goto B4cba7b;
case 0x4cba80:goto L4cba80;
case 0x4cba83:c.instructions+=1;goto B4cba83;
case 0x4cba85:goto L4cba85;
case 0x4cba87:goto L4cba87;
case 0x4cba8a:c.instructions+=2;goto B4cba8a;
case 0x4cba8c:c.instructions+=1;goto B4cba8c;
case 0x4cba8e:goto L4cba8e;
case 0x4cba91:c.instructions+=4;goto B4cba91;
case 0x4cba93:c.instructions+=3;goto B4cba93;
case 0x4cba94:c.instructions+=2;goto B4cba94;
case 0x4cba96:c.instructions+=1;goto B4cba96;
case 0x4cba99:goto L4cba99;
case 0x4cba9c:c.instructions+=3;goto B4cba9c;
case 0x4cba9e:c.instructions+=2;goto B4cba9e;
case 0x4cbaa0:c.instructions+=1;goto B4cbaa0;
case 0x4cbaa3:goto L4cbaa3;
case 0x4cbaa4:c.instructions+=3;goto B4cbaa4;
case 0x4cbaa5:c.instructions+=2;goto B4cbaa5;
case 0x4cbaa6:c.instructions+=1;goto B4cbaa6;
case 0x4cbab0:goto L4cbab0;
case 0x4cbab1:c.instructions+=2;goto B4cbab1;
case 0x4cbab3:c.instructions+=1;goto B4cbab3;
case 0x4cbab8:goto L4cbab8;
case 0x4cbaba:c.instructions+=1;goto B4cbaba;
case 0x4cbabc:goto L4cbabc;
case 0x4cbac0:c.instructions+=8;goto B4cbac0;
case 0x4cbac3:c.instructions+=7;goto B4cbac3;
case 0x4cbac5:c.instructions+=6;goto B4cbac5;
case 0x4cbac7:c.instructions+=5;goto B4cbac7;
case 0x4cbaca:c.instructions+=4;goto B4cbaca;
case 0x4cbacd:c.instructions+=3;goto B4cbacd;
case 0x4cbacf:c.instructions+=2;goto B4cbacf;
case 0x4cbad0:c.instructions+=1;goto B4cbad0;
case 0x4cbad3:goto L4cbad3;
case 0x4cbad5:c.instructions+=7;goto B4cbad5;
case 0x4cbad7:c.instructions+=6;goto B4cbad7;
case 0x4cbad9:c.instructions+=5;goto B4cbad9;
case 0x4cbadc:c.instructions+=4;goto B4cbadc;
case 0x4cbadf:c.instructions+=3;goto B4cbadf;
case 0x4cbae1:c.instructions+=2;goto B4cbae1;
case 0x4cbae2:c.instructions+=1;goto B4cbae2;
case 0x4cbaf0:goto L4cbaf0;
case 0x4cbaf2:c.instructions+=15;goto B4cbaf2;
case 0x4cbaf7:c.instructions+=14;goto B4cbaf7;
case 0x4cbafd:c.instructions+=13;goto B4cbafd;
case 0x4cbafe:c.instructions+=12;goto B4cbafe;
case 0x4cbb05:c.instructions+=11;goto B4cbb05;
case 0x4cbb06:c.instructions+=10;goto B4cbb06;
case 0x4cbb07:c.instructions+=9;goto B4cbb07;
case 0x4cbb09:c.instructions+=8;goto B4cbb09;
case 0x4cbb0d:c.instructions+=7;goto B4cbb0d;
case 0x4cbb12:c.instructions+=6;goto B4cbb12;
case 0x4cbb14:c.instructions+=5;goto B4cbb14;
case 0x4cbb16:c.instructions+=4;goto B4cbb16;
case 0x4cbb1c:c.instructions+=3;goto B4cbb1c;
case 0x4cbb1d:c.instructions+=2;goto B4cbb1d;
case 0x4cbb25:c.instructions+=1;goto B4cbb25;
case 0x4cbb2a:goto L4cbb2a;
case 0x4cbb2f:c.instructions+=6;goto B4cbb2f;
case 0x4cbb31:c.instructions+=5;goto B4cbb31;
case 0x4cbb33:c.instructions+=4;goto B4cbb33;
case 0x4cbb36:c.instructions+=3;goto B4cbb36;
case 0x4cbb37:c.instructions+=2;goto B4cbb37;
case 0x4cbb3f:c.instructions+=1;goto B4cbb3f;
case 0x4cbb44:goto L4cbb44;
case 0x4cbb48:c.instructions+=4;goto B4cbb48;
case 0x4cbb49:c.instructions+=3;goto B4cbb49;
case 0x4cbb50:c.instructions+=2;goto B4cbb50;
case 0x4cbb53:c.instructions+=1;goto B4cbb53;
case 0x4cbb60:goto L4cbb60;
case 0x4cbb61:c.instructions+=2;goto B4cbb61;
case 0x4cbb63:c.instructions+=1;goto B4cbb63;
case 0x4cbb68:goto L4cbb68;
case 0x4cbb6d:c.instructions+=1;goto B4cbb6d;
case 0x4cbb6f:goto L4cbb6f;
case 0x4cbb70:c.instructions+=1;goto B4cbb70;
case 0x4cbb75:goto L4cbb75;
case 0x4cbb78:goto L4cbb78;
case 0x4cbb7a:c.instructions+=2;goto B4cbb7a;
case 0x4cbb7b:c.instructions+=1;goto B4cbb7b;
case 0x4cbb80:goto L4cbb80;
case 0x4cbb81:c.instructions+=2;goto B4cbb81;
case 0x4cbb83:c.instructions+=1;goto B4cbb83;
case 0x4cbb88:goto L4cbb88;
case 0x4cbb8d:c.instructions+=1;goto B4cbb8d;
case 0x4cbb8f:goto L4cbb8f;
case 0x4cbb90:c.instructions+=1;goto B4cbb90;
case 0x4cbb95:goto L4cbb95;
case 0x4cbb98:goto L4cbb98;
case 0x4cbb9a:c.instructions+=2;goto B4cbb9a;
case 0x4cbb9b:c.instructions+=1;goto B4cbb9b;
case 0x4cbba0:goto L4cbba0;
case 0x4cbba2:c.instructions+=12;goto B4cbba2;
case 0x4cbba7:c.instructions+=11;goto B4cbba7;
case 0x4cbbad:c.instructions+=10;goto B4cbbad;
case 0x4cbbae:c.instructions+=9;goto B4cbbae;
case 0x4cbbb5:c.instructions+=8;goto B4cbbb5;
case 0x4cbbb6:c.instructions+=7;goto B4cbbb6;
case 0x4cbbb7:c.instructions+=6;goto B4cbbb7;
case 0x4cbbb9:c.instructions+=5;goto B4cbbb9;
case 0x4cbbbd:c.instructions+=4;goto B4cbbbd;
case 0x4cbbc3:c.instructions+=3;goto B4cbbc3;
case 0x4cbbc6:c.instructions+=2;goto B4cbbc6;
case 0x4cbbce:c.instructions+=1;goto B4cbbce;
case 0x4cbbd3:goto L4cbbd3;
case 0x4cbbd6:c.instructions+=2;goto B4cbbd6;
case 0x4cbbde:c.instructions+=1;goto B4cbbde;
case 0x4cbbe3:goto L4cbbe3;
case 0x4cbbe7:c.instructions+=4;goto B4cbbe7;
case 0x4cbbe8:c.instructions+=3;goto B4cbbe8;
case 0x4cbbef:c.instructions+=2;goto B4cbbef;
case 0x4cbbf2:c.instructions+=1;goto B4cbbf2;
case 0x4cbc00:goto L4cbc00;
case 0x4cbc01:c.instructions+=2;goto B4cbc01;
case 0x4cbc03:c.instructions+=1;goto B4cbc03;
case 0x4cbc08:goto L4cbc08;
case 0x4cbc0d:c.instructions+=1;goto B4cbc0d;
case 0x4cbc0f:goto L4cbc0f;
case 0x4cbc10:c.instructions+=1;goto B4cbc10;
case 0x4cbc15:goto L4cbc15;
case 0x4cbc18:goto L4cbc18;
case 0x4cbc1a:c.instructions+=2;goto B4cbc1a;
case 0x4cbc1b:c.instructions+=1;goto B4cbc1b;
case 0x4cbc20:goto L4cbc20;
case 0x4cbc26:c.instructions+=2;goto B4cbc26;
case 0x4cbc29:c.instructions+=1;goto B4cbc29;
case 0x4cbc30:goto L4cbc30;
case 0x4cbc32:c.instructions+=12;goto B4cbc32;
case 0x4cbc37:c.instructions+=11;goto B4cbc37;
case 0x4cbc3d:c.instructions+=10;goto B4cbc3d;
case 0x4cbc3e:c.instructions+=9;goto B4cbc3e;
case 0x4cbc45:c.instructions+=8;goto B4cbc45;
case 0x4cbc46:c.instructions+=7;goto B4cbc46;
case 0x4cbc47:c.instructions+=6;goto B4cbc47;
case 0x4cbc49:c.instructions+=5;goto B4cbc49;
case 0x4cbc4d:c.instructions+=4;goto B4cbc4d;
case 0x4cbc53:c.instructions+=3;goto B4cbc53;
case 0x4cbc56:c.instructions+=2;goto B4cbc56;
case 0x4cbc5e:c.instructions+=1;goto B4cbc5e;
case 0x4cbc63:goto L4cbc63;
case 0x4cbc65:c.instructions+=2;goto B4cbc65;
case 0x4cbc6d:c.instructions+=1;goto B4cbc6d;
case 0x4cbc72:goto L4cbc72;
case 0x4cbc76:c.instructions+=4;goto B4cbc76;
case 0x4cbc77:c.instructions+=3;goto B4cbc77;
case 0x4cbc7e:c.instructions+=2;goto B4cbc7e;
case 0x4cbc81:c.instructions+=1;goto B4cbc81;
case 0x4cbc90:goto L4cbc90;
case 0x4cbc91:c.instructions+=2;goto B4cbc91;
case 0x4cbc93:c.instructions+=1;goto B4cbc93;
case 0x4cbc98:goto L4cbc98;
case 0x4cbc9d:c.instructions+=1;goto B4cbc9d;
case 0x4cbc9f:goto L4cbc9f;
case 0x4cbca0:c.instructions+=1;goto B4cbca0;
case 0x4cbca5:goto L4cbca5;
case 0x4cbca8:goto L4cbca8;
case 0x4cbcaa:c.instructions+=2;goto B4cbcaa;
case 0x4cbcab:c.instructions+=1;goto B4cbcab;
case 0x4cbcb0:goto L4cbcb0;
case 0x4cbcb2:c.instructions+=16;goto B4cbcb2;
case 0x4cbcb7:c.instructions+=15;goto B4cbcb7;
case 0x4cbcbd:c.instructions+=14;goto B4cbcbd;
case 0x4cbcbe:c.instructions+=13;goto B4cbcbe;
case 0x4cbcc5:c.instructions+=12;goto B4cbcc5;
case 0x4cbcc6:c.instructions+=11;goto B4cbcc6;
case 0x4cbcc7:c.instructions+=10;goto B4cbcc7;
case 0x4cbcc9:c.instructions+=9;goto B4cbcc9;
case 0x4cbccd:c.instructions+=8;goto B4cbccd;
case 0x4cbcd3:c.instructions+=7;goto B4cbcd3;
case 0x4cbcd8:c.instructions+=6;goto B4cbcd8;
case 0x4cbcdb:c.instructions+=5;goto B4cbcdb;
case 0x4cbce3:c.instructions+=4;goto B4cbce3;
case 0x4cbce9:c.instructions+=3;goto B4cbce9;
case 0x4cbcef:c.instructions+=2;goto B4cbcef;
case 0x4cbcf5:c.instructions+=1;goto B4cbcf5;
case 0x4cbcfa:goto L4cbcfa;
case 0x4cbcfc:c.instructions+=2;goto B4cbcfc;
case 0x4cbd04:c.instructions+=1;goto B4cbd04;
case 0x4cbd09:goto L4cbd09;
case 0x4cbd0d:c.instructions+=4;goto B4cbd0d;
case 0x4cbd0e:c.instructions+=3;goto B4cbd0e;
case 0x4cbd15:c.instructions+=2;goto B4cbd15;
case 0x4cbd18:c.instructions+=1;goto B4cbd18;
case 0x4cbd20:goto L4cbd20;
case 0x4cbd22:c.instructions+=12;goto B4cbd22;
case 0x4cbd27:c.instructions+=11;goto B4cbd27;
case 0x4cbd2d:c.instructions+=10;goto B4cbd2d;
case 0x4cbd2e:c.instructions+=9;goto B4cbd2e;
case 0x4cbd35:c.instructions+=8;goto B4cbd35;
case 0x4cbd36:c.instructions+=7;goto B4cbd36;
case 0x4cbd37:c.instructions+=6;goto B4cbd37;
case 0x4cbd39:c.instructions+=5;goto B4cbd39;
case 0x4cbd3d:c.instructions+=4;goto B4cbd3d;
case 0x4cbd43:c.instructions+=3;goto B4cbd43;
case 0x4cbd48:c.instructions+=2;goto B4cbd48;
case 0x4cbd50:c.instructions+=1;goto B4cbd50;
case 0x4cbd55:goto L4cbd55;
case 0x4cbd5a:c.instructions+=6;goto B4cbd5a;
case 0x4cbd5d:c.instructions+=5;goto B4cbd5d;
case 0x4cbd63:c.instructions+=4;goto B4cbd63;
case 0x4cbd69:c.instructions+=3;goto B4cbd69;
case 0x4cbd6f:c.instructions+=2;goto B4cbd6f;
case 0x4cbd74:c.instructions+=1;goto B4cbd74;
case 0x4cbd79:goto L4cbd79;
case 0x4cbd7b:c.instructions+=2;goto B4cbd7b;
case 0x4cbd83:c.instructions+=1;goto B4cbd83;
case 0x4cbd88:goto L4cbd88;
case 0x4cbd8c:c.instructions+=4;goto B4cbd8c;
case 0x4cbd8d:c.instructions+=3;goto B4cbd8d;
case 0x4cbd94:c.instructions+=2;goto B4cbd94;
case 0x4cbd97:c.instructions+=1;goto B4cbd97;
case 0x4cbda0:goto L4cbda0;
case 0x4cbda1:c.instructions+=9;goto B4cbda1;
case 0x4cbda3:c.instructions+=8;goto B4cbda3;
case 0x4cbda8:c.instructions+=7;goto B4cbda8;
case 0x4cbdaf:c.instructions+=6;goto B4cbdaf;
case 0x4cbdb0:c.instructions+=5;goto B4cbdb0;
case 0x4cbdb2:c.instructions+=4;goto B4cbdb2;
case 0x4cbdb4:c.instructions+=3;goto B4cbdb4;
case 0x4cbdb9:c.instructions+=2;goto B4cbdb9;
case 0x4cbdba:c.instructions+=1;goto B4cbdba;
case 0x4cbdc0:goto L4cbdc0;
case 0x4cbdc2:c.instructions+=1;goto B4cbdc2;
case 0x4cbdc4:goto L4cbdc4;
case 0x4cbdc5:c.instructions+=3;goto B4cbdc5;
case 0x4cbdc8:c.instructions+=2;goto B4cbdc8;
case 0x4cbdcb:c.instructions+=1;goto B4cbdcb;
case 0x4cbdcd:goto L4cbdcd;
case 0x4cbdd0:goto L4cbdd0;
case 0x4cbdd3:c.instructions+=2;goto B4cbdd3;
case 0x4cbdd6:c.instructions+=1;goto B4cbdd6;
case 0x4cbdd8:goto L4cbdd8;
case 0x4cbddb:c.instructions+=1;goto B4cbddb;
case 0x4cbddd:goto L4cbddd;
case 0x4cbde0:goto L4cbde0;
case 0x4cbde2:c.instructions+=1;goto B4cbde2;
case 0x4cbde4:goto L4cbde4;
case 0x4cbde6:c.instructions+=1;goto B4cbde6;
case 0x4cbde8:goto L4cbde8;
case 0x4cbdeb:c.instructions+=1;goto B4cbdeb;
case 0x4cbded:goto L4cbded;
case 0x4cbdf0:c.instructions+=1;goto B4cbdf0;
case 0x4cbdf2:goto L4cbdf2;
case 0x4cbdf7:goto L4cbdf7;
case 0x4cbdfa:goto L4cbdfa;
case 0x4cbdfd:c.instructions+=6;goto B4cbdfd;
case 0x4cbdfe:c.instructions+=5;goto B4cbdfe;
case 0x4cbdff:c.instructions+=4;goto B4cbdff;
case 0x4cbe01:c.instructions+=3;goto B4cbe01;
case 0x4cbe03:c.instructions+=2;goto B4cbe03;
case 0x4cbe06:c.instructions+=1;goto B4cbe06;
case 0x4cbe0b:goto L4cbe0b;
case 0x4cbe0e:c.instructions+=7;goto B4cbe0e;
case 0x4cbe11:c.instructions+=6;goto B4cbe11;
case 0x4cbe17:c.instructions+=5;goto B4cbe17;
case 0x4cbe1a:c.instructions+=4;goto B4cbe1a;
case 0x4cbe1b:c.instructions+=3;goto B4cbe1b;
case 0x4cbe20:c.instructions+=2;goto B4cbe20;
case 0x4cbe21:c.instructions+=1;goto B4cbe21;
case 0x4cbe26:goto L4cbe26;
case 0x4cbe29:c.instructions+=2;goto B4cbe29;
case 0x4cbe2a:c.instructions+=1;goto B4cbe2a;
case 0x4cbe2f:goto L4cbe2f;
case 0x4cbe32:c.instructions+=2;goto B4cbe32;
case 0x4cbe33:c.instructions+=1;goto B4cbe33;
case 0x4cbe38:goto L4cbe38;
case 0x4cbe3b:c.instructions+=4;goto B4cbe3b;
case 0x4cbe3e:c.instructions+=3;goto B4cbe3e;
case 0x4cbe40:c.instructions+=2;goto B4cbe40;
case 0x4cbe41:c.instructions+=1;goto B4cbe41;
case 0x4cbe43:goto L4cbe43;
case 0x4cbe44:c.instructions+=2;goto B4cbe44;
case 0x4cbe46:c.instructions+=1;goto B4cbe46;
case 0x4cbe4b:goto L4cbe4b;
case 0x4cbe4e:c.instructions+=4;goto B4cbe4e;
case 0x4cbe51:c.instructions+=3;goto B4cbe51;
case 0x4cbe54:c.instructions+=2;goto B4cbe54;
case 0x4cbe55:c.instructions+=1;goto B4cbe55;
case 0x4cbe5a:goto L4cbe5a;
case 0x4cbe5c:c.instructions+=1;goto B4cbe5c;
case 0x4cbe5e:goto L4cbe5e;
case 0x4cbe61:c.instructions+=2;goto B4cbe61;
case 0x4cbe62:c.instructions+=1;goto B4cbe62;
case 0x4cbe67:goto L4cbe67;
case 0x4cbe6a:goto L4cbe6a;
case 0x4cbe6b:c.instructions+=2;goto B4cbe6b;
case 0x4cbe6c:c.instructions+=1;goto B4cbe6c;
case 0x4cbe70:goto L4cbe70;
case 0x4cbe71:c.instructions+=5;goto B4cbe71;
case 0x4cbe73:c.instructions+=4;goto B4cbe73;
case 0x4cbe77:c.instructions+=3;goto B4cbe77;
case 0x4cbe7a:c.instructions+=2;goto B4cbe7a;
case 0x4cbe7d:c.instructions+=1;goto B4cbe7d;
case 0x4cbe7f:goto L4cbe7f;
case 0x4cbe80:c.instructions+=1;goto B4cbe80;
case 0x4cbe82:goto L4cbe82;
case 0x4cbe83:c.instructions+=1;goto B4cbe83;
case 0x4cbe85:goto L4cbe85;
case 0x4cbe88:c.instructions+=3;goto B4cbe88;
case 0x4cbe8b:c.instructions+=2;goto B4cbe8b;
case 0x4cbe8c:c.instructions+=1;goto B4cbe8c;
case 0x4cbe91:goto L4cbe91;
case 0x4cbe92:c.instructions+=1;goto B4cbe92;
case 0x4cbe95:goto L4cbe95;
case 0x4cbe98:c.instructions+=3;goto B4cbe98;
case 0x4cbe99:c.instructions+=2;goto B4cbe99;
case 0x4cbe9b:c.instructions+=1;goto B4cbe9b;
case 0x4cbea0:goto L4cbea0;
case 0x4cbea2:c.instructions+=1;goto B4cbea2;
case 0x4cbea7:goto L4cbea7;
case 0x4cbea8:c.instructions+=1;goto B4cbea8;
case 0x4cbeab:goto L4cbeab;
case 0x4cbeae:c.instructions+=4;goto B4cbeae;
case 0x4cbeb1:c.instructions+=3;goto B4cbeb1;
case 0x4cbeb4:c.instructions+=2;goto B4cbeb4;
case 0x4cbeb5:c.instructions+=1;goto B4cbeb5;
case 0x4cbeba:goto L4cbeba;
case 0x4cbebd:c.instructions+=2;goto B4cbebd;
case 0x4cbebf:c.instructions+=1;goto B4cbebf;
case 0x4cbec1:goto L4cbec1;
case 0x4cbec4:c.instructions+=2;goto B4cbec4;
case 0x4cbec5:c.instructions+=1;goto B4cbec5;
case 0x4cbeca:goto L4cbeca;
case 0x4cbecc:c.instructions+=1;goto B4cbecc;
case 0x4cbed1:goto L4cbed1;
case 0x4cbed2:c.instructions+=1;goto B4cbed2;
case 0x4cbee0:goto L4cbee0;
case 0x4cbee1:c.instructions+=11;goto B4cbee1;
case 0x4cbee3:c.instructions+=10;goto B4cbee3;
case 0x4cbee6:c.instructions+=9;goto B4cbee6;
case 0x4cbee7:c.instructions+=8;goto B4cbee7;
case 0x4cbee8:c.instructions+=7;goto B4cbee8;
case 0x4cbee9:c.instructions+=6;goto B4cbee9;
case 0x4cbeec:c.instructions+=5;goto B4cbeec;
case 0x4cbeee:c.instructions+=4;goto B4cbeee;
case 0x4cbeef:c.instructions+=3;goto B4cbeef;
case 0x4cbef2:c.instructions+=2;goto B4cbef2;
case 0x4cbef3:c.instructions+=1;goto B4cbef3;
case 0x4cbef8:goto L4cbef8;
case 0x4cbefb:c.instructions+=5;goto B4cbefb;
case 0x4cbefe:c.instructions+=4;goto B4cbefe;
case 0x4cbf01:c.instructions+=3;goto B4cbf01;
case 0x4cbf03:c.instructions+=2;goto B4cbf03;
case 0x4cbf07:c.instructions+=1;goto B4cbf07;
case 0x4cbf09:goto L4cbf09;
case 0x4cbf10:goto L4cbf10;
case 0x4cbf13:c.instructions+=2;goto B4cbf13;
case 0x4cbf14:c.instructions+=1;goto B4cbf14;
case 0x4cbf19:goto L4cbf19;
case 0x4cbf1c:c.instructions+=2;goto B4cbf1c;
case 0x4cbf1e:c.instructions+=1;goto B4cbf1e;
case 0x4cbf20:goto L4cbf20;
case 0x4cbf23:c.instructions+=2;goto B4cbf23;
case 0x4cbf24:c.instructions+=1;goto B4cbf24;
case 0x4cbf29:goto L4cbf29;
case 0x4cbf2c:c.instructions+=6;goto B4cbf2c;
case 0x4cbf2f:c.instructions+=5;goto B4cbf2f;
case 0x4cbf32:c.instructions+=4;goto B4cbf32;
case 0x4cbf33:c.instructions+=3;goto B4cbf33;
case 0x4cbf34:c.instructions+=2;goto B4cbf34;
case 0x4cbf35:c.instructions+=1;goto B4cbf35;
case 0x4cbf3a:goto L4cbf3a;
case 0x4cbf3d:c.instructions+=2;goto B4cbf3d;
case 0x4cbf3f:c.instructions+=1;goto B4cbf3f;
case 0x4cbf41:goto L4cbf41;
case 0x4cbf43:c.instructions+=1;goto B4cbf43;
case 0x4cbf45:goto L4cbf45;
case 0x4cbf48:c.instructions+=3;goto B4cbf48;
case 0x4cbf49:c.instructions+=2;goto B4cbf49;
case 0x4cbf4b:c.instructions+=1;goto B4cbf4b;
case 0x4cbf50:goto L4cbf50;
case 0x4cbf54:goto L4cbf54;
case 0x4cbf56:c.instructions+=2;goto B4cbf56;
case 0x4cbf58:c.instructions+=1;goto B4cbf58;
case 0x4cbf5a:goto L4cbf5a;
case 0x4cbf5d:c.instructions+=2;goto B4cbf5d;
case 0x4cbf5f:c.instructions+=1;goto B4cbf5f;
case 0x4cbf61:goto L4cbf61;
case 0x4cbf64:c.instructions+=3;goto B4cbf64;
case 0x4cbf67:c.instructions+=2;goto B4cbf67;
case 0x4cbf69:c.instructions+=1;goto B4cbf69;
case 0x4cbf6b:goto L4cbf6b;
case 0x4cbf70:goto L4cbf70;
case 0x4cbf77:goto L4cbf77;
case 0x4cbf78:c.instructions+=5;goto B4cbf78;
case 0x4cbf79:c.instructions+=4;goto B4cbf79;
case 0x4cbf7a:c.instructions+=3;goto B4cbf7a;
case 0x4cbf7c:c.instructions+=2;goto B4cbf7c;
case 0x4cbf7d:c.instructions+=1;goto B4cbf7d;
case 0x4cbf80:goto L4cbf80;
case 0x4cbf83:c.instructions+=7;goto B4cbf83;
case 0x4cbf84:c.instructions+=6;goto B4cbf84;
case 0x4cbf85:c.instructions+=5;goto B4cbf85;
case 0x4cbf86:c.instructions+=4;goto B4cbf86;
case 0x4cbf88:c.instructions+=3;goto B4cbf88;
case 0x4cbf8a:c.instructions+=2;goto B4cbf8a;
case 0x4cbf8e:c.instructions+=1;goto B4cbf8e;
case 0x4cbf93:goto L4cbf93;
case 0x4cbf95:c.instructions+=3;goto B4cbf95;
case 0x4cbf98:c.instructions+=2;goto B4cbf98;
case 0x4cbf9a:c.instructions+=1;goto B4cbf9a;
case 0x4cbf9c:goto L4cbf9c;
case 0x4cbf9f:c.instructions+=13;goto B4cbf9f;
case 0x4cbfa5:c.instructions+=12;goto B4cbfa5;
case 0x4cbfa7:c.instructions+=11;goto B4cbfa7;
case 0x4cbfaa:c.instructions+=10;goto B4cbfaa;
case 0x4cbfad:c.instructions+=9;goto B4cbfad;
case 0x4cbfb0:c.instructions+=8;goto B4cbfb0;
case 0x4cbfb3:c.instructions+=7;goto B4cbfb3;
case 0x4cbfb6:c.instructions+=6;goto B4cbfb6;
case 0x4cbfb9:c.instructions+=5;goto B4cbfb9;
case 0x4cbfbd:c.instructions+=4;goto B4cbfbd;
case 0x4cbfc4:c.instructions+=3;goto B4cbfc4;
case 0x4cbfcb:c.instructions+=2;goto B4cbfcb;
case 0x4cbfcd:c.instructions+=1;goto B4cbfcd;
case 0x4cbfcf:goto L4cbfcf;
case 0x4cbfd1:goto L4cbfd1;
case 0x4cbfd4:c.instructions+=3;goto B4cbfd4;
case 0x4cbfd9:c.instructions+=2;goto B4cbfd9;
case 0x4cbfda:c.instructions+=1;goto B4cbfda;
case 0x4cbfdf:goto L4cbfdf;
case 0x4cbfe1:c.instructions+=2;goto B4cbfe1;
case 0x4cbfe5:c.instructions+=1;goto B4cbfe5;
case 0x4cbfea:goto L4cbfea;
case 0x4cbfed:c.instructions+=2;goto B4cbfed;
case 0x4cbfef:c.instructions+=1;goto B4cbfef;
case 0x4cbff1:goto L4cbff1;
case 0x4cbff5:c.instructions+=3;goto B4cbff5;
case 0x4cbffb:c.instructions+=2;goto B4cbffb;
case 0x4cbffe:c.instructions+=1;goto B4cbffe;
default:missing_instruction(c.pc);}
B4cb003:L4cb003:{c.instructions+=20;NFSU2_TR(0x4cb003);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4cb006:{NFSU2_TR(0x4cb006);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cb009:{NFSU2_TR(0x4cb009);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B4cb00b:{NFSU2_TR(0x4cb00b);
w4(R+4,u32(0x838590ull));
}
B4cb010:{NFSU2_TR(0x4cb010);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4cb013:{NFSU2_TR(0x4cb013);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb016:{NFSU2_TR(0x4cb016);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4cb018:{NFSU2_TR(0x4cb018);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4cb01b:{NFSU2_TR(0x4cb01b);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4cb01e:{NFSU2_TR(0x4cb01e);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4cb021:{NFSU2_TR(0x4cb021);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4cb024:{NFSU2_TR(0x4cb024);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4cb026:{NFSU2_TR(0x4cb026);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4cb029:{NFSU2_TR(0x4cb029);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4cb02c:{NFSU2_TR(0x4cb02c);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4cb02f:{NFSU2_TR(0x4cb02f);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4cb032:{NFSU2_TR(0x4cb032);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4cb034:{NFSU2_TR(0x4cb034);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B4cb036:{NFSU2_TR(0x4cb036);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4cb039:{NFSU2_TR(0x4cb039);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb03eull));
TAIL_STATIC(0x501100u,501);
}
B4cb03e:L4cb03e:{c.instructions+=2;NFSU2_TR(0x4cb03e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cb041:{NFSU2_TR(0x4cb041);
if(r1(R+518)){{goto L4cb078;}}
}
B4cb043:L4cb043:{c.instructions+=2;NFSU2_TR(0x4cb043);
w4(R+4,u32(0x838590ull));
}
B4cb048:{NFSU2_TR(0x4cb048);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb04dull));
TAIL_STATIC(0x501100u,501);
}
B4cb04d:L4cb04d:{c.instructions+=2;NFSU2_TR(0x4cb04d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cb04f:{NFSU2_TR(0x4cb04f);
if(r1(R+518)){{goto L4cb078;}}
}
B4cb051:L4cb051:{c.instructions+=2;NFSU2_TR(0x4cb051);
w4(R+4,u32(0x838590ull));
}
B4cb056:{NFSU2_TR(0x4cb056);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb05bull));
TAIL_STATIC(0x501100u,501);
}
B4cb05b:L4cb05b:{c.instructions+=2;NFSU2_TR(0x4cb05b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cb05e:{NFSU2_TR(0x4cb05e);
if(r1(R+518)){{goto L4cb078;}}
}
B4cb060:L4cb060:{c.instructions+=2;NFSU2_TR(0x4cb060);
w4(R+4,u32(0x838590ull));
}
B4cb065:{NFSU2_TR(0x4cb065);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb06aull));
TAIL_STATIC(0x501100u,501);
}
B4cb06a:L4cb06a:{c.instructions+=2;NFSU2_TR(0x4cb06a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cb06d:{NFSU2_TR(0x4cb06d);
if(r1(R+518)){{goto L4cb078;}}
}
B4cb06f:L4cb06f:{c.instructions+=3;NFSU2_TR(0x4cb06f);
__builtin_memmove((R+0),gp(0x862838),4);
}
B4cb074:{NFSU2_TR(0x4cb074);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cb076:{NFSU2_TR(0x4cb076);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cb080;}}
}
B4cb078:L4cb078:{c.instructions+=2;NFSU2_TR(0x4cb078);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4cb07e:{NFSU2_TR(0x4cb07e);
{goto L4cb083;}
}
B4cb080:L4cb080:{c.instructions+=1;NFSU2_TR(0x4cb080);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4cb083:L4cb083:{c.instructions+=6;NFSU2_TR(0x4cb083);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4cb086:{NFSU2_TR(0x4cb086);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4cb088:{NFSU2_TR(0x4cb088);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4cb08a:{NFSU2_TR(0x4cb08a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4cb08c:{NFSU2_TR(0x4cb08c);
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
B4cb08f:{NFSU2_TR(0x4cb08f);
if(r1(R+514)){{goto L4cb0f7;}}
}
B4cb091:L4cb091:{c.instructions+=5;NFSU2_TR(0x4cb091);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4cb094:{NFSU2_TR(0x4cb094);
{u32 ea_=u32(u32(7921804u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4cb09a:{NFSU2_TR(0x4cb09a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4cb09c:{NFSU2_TR(0x4cb09c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cb09f:{NFSU2_TR(0x4cb09f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cb0c4;}}
}
B4cb0a1:L4cb0a1:{c.instructions+=9;NFSU2_TR(0x4cb0a1);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4cb0a7:{NFSU2_TR(0x4cb0a7);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4cb0aa:{NFSU2_TR(0x4cb0aa);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4cb0ad:{NFSU2_TR(0x4cb0ad);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4cb0af:{NFSU2_TR(0x4cb0af);
{u32 ea_=u32(u32(7921804u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4cb0b5:{NFSU2_TR(0x4cb0b5);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4cb0b8:{NFSU2_TR(0x4cb0b8);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4cb0bb:{NFSU2_TR(0x4cb0bb);
{u32 ea_=u32(u32(7921804u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4cb0c1:{NFSU2_TR(0x4cb0c1);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4cb0c4:L4cb0c4:{c.instructions+=3;NFSU2_TR(0x4cb0c4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb0c6:{NFSU2_TR(0x4cb0c6);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb0cb:{NFSU2_TR(0x4cb0cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb0d0ull));
TAIL_STATIC(0x43e6d0u,43e);
}
B4cb0d0:L4cb0d0:{c.instructions+=15;NFSU2_TR(0x4cb0d0);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4cb0d3:{NFSU2_TR(0x4cb0d3);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4cb0d6:{NFSU2_TR(0x4cb0d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cb0d9:{NFSU2_TR(0x4cb0d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cb0dc:{NFSU2_TR(0x4cb0dc);
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
B4cb0df:{NFSU2_TR(0x4cb0df);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4cb0e2:{NFSU2_TR(0x4cb0e2);
w1(R+0,u8(0x1ull));
}
B4cb0e4:{NFSU2_TR(0x4cb0e4);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4cb0e6:{NFSU2_TR(0x4cb0e6);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4cb0e9:{NFSU2_TR(0x4cb0e9);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4cb0ec:{NFSU2_TR(0x4cb0ec);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4cb0ef:{NFSU2_TR(0x4cb0ef);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4cb0f1:{NFSU2_TR(0x4cb0f1);
__builtin_memmove((R+16),(R+20),4);
}
B4cb0f3:{NFSU2_TR(0x4cb0f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4cb0f4:{NFSU2_TR(0x4cb0f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cb0f7:L4cb0f7:{c.instructions+=6;NFSU2_TR(0x4cb0f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cb0fa:{NFSU2_TR(0x4cb0fa);
u8 U[4];
w4(U+0,u32(0x44000000ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4cb100:{NFSU2_TR(0x4cb100);
w1(R+0,u8(0x1ull));
}
B4cb102:{NFSU2_TR(0x4cb102);
__builtin_memmove((R+16),(R+20),4);
}
B4cb104:{NFSU2_TR(0x4cb104);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4cb105:{NFSU2_TR(0x4cb105);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cb110:L4cb110:{c.instructions+=3;NFSU2_TR(0x4cb110);
__builtin_memmove((R+4),gp(0x8364d4),4);
}
B4cb116:{NFSU2_TR(0x4cb116);
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
B4cb118:{NFSU2_TR(0x4cb118);
if(r1(R+518)){{goto L4cb146;}}
}
B4cb11a:L4cb11a:{c.instructions+=3;NFSU2_TR(0x4cb11a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb11b:{NFSU2_TR(0x4cb11b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4cb11d:{NFSU2_TR(0x4cb11d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb122ull));
TAIL_STATIC(0x502fd0u,502);
}
B4cb122:L4cb122:{c.instructions+=2;NFSU2_TR(0x4cb122);
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
B4cb124:{NFSU2_TR(0x4cb124);
if(r1(R+518)){{goto L4cb145;}}
}
B4cb126:L4cb126:{c.instructions+=2;NFSU2_TR(0x4cb126);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cb12a:{NFSU2_TR(0x4cb12a);
__builtin_memmove((R+12),(R+12),4);
}
B4cb130:L4cb130:{c.instructions+=2;NFSU2_TR(0x4cb130);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4cb133:{NFSU2_TR(0x4cb133);
if(r1(R+518)){{goto L4cb13d;}}
}
B4cb135:L4cb135:{c.instructions+=3;NFSU2_TR(0x4cb135);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4cb137:{NFSU2_TR(0x4cb137);
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
B4cb139:{NFSU2_TR(0x4cb139);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cb130u);}goto L4cb130;}}
}
B4cb13b:L4cb13b:{c.instructions+=2;NFSU2_TR(0x4cb13b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cb13c:{NFSU2_TR(0x4cb13c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cb13d:L4cb13d:{c.instructions+=3;NFSU2_TR(0x4cb13d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb13e:{NFSU2_TR(0x4cb13e);
__builtin_memmove((R+4),(R+24),4);
}
B4cb140:{NFSU2_TR(0x4cb140);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb145ull));
TAIL_STATIC(0x4ac620u,4ac);
}
B4cb145:L4cb145:{c.instructions+=1;NFSU2_TR(0x4cb145);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cb146:L4cb146:{c.instructions+=1;NFSU2_TR(0x4cb146);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cb150:L4cb150:{c.instructions+=3;NFSU2_TR(0x4cb150);
__builtin_memmove((R+4),gp(0x8364d4),4);
}
B4cb156:{NFSU2_TR(0x4cb156);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cb158:{NFSU2_TR(0x4cb158);
if(r1(R+518)){{goto L4cb174;}}
}
B4cb15a:L4cb15a:{c.instructions+=9;NFSU2_TR(0x4cb15a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cb15e:{NFSU2_TR(0x4cb15e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cb162:{NFSU2_TR(0x4cb162);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb163:{NFSU2_TR(0x4cb163);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cb167:{NFSU2_TR(0x4cb167);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb168:{NFSU2_TR(0x4cb168);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cb16c:{NFSU2_TR(0x4cb16c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb16d:{NFSU2_TR(0x4cb16d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb16e:{NFSU2_TR(0x4cb16e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb173ull));
TAIL_STATIC(0x4cae60u,4ca);
}
B4cb173:L4cb173:{c.instructions+=1;NFSU2_TR(0x4cb173);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cb174:L4cb174:{c.instructions+=2;NFSU2_TR(0x4cb174);
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
B4cb176:{NFSU2_TR(0x4cb176);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cb180:L4cb180:{c.instructions+=12;NFSU2_TR(0x4cb180);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb182:{NFSU2_TR(0x4cb182);
u8 U[4];
w4(U+0,u32(0x77412bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb187:{NFSU2_TR(0x4cb187);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cb18d:{NFSU2_TR(0x4cb18d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb18e:{NFSU2_TR(0x4cb18e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb195:{NFSU2_TR(0x4cb195);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb196:{NFSU2_TR(0x4cb196);
__builtin_memmove((R+4),gp(0x8364d8),4);
}
B4cb19c:{NFSU2_TR(0x4cb19c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4cb1a0:{NFSU2_TR(0x4cb1a0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cb1a2:{NFSU2_TR(0x4cb1a2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cb1a4:{NFSU2_TR(0x4cb1a4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb1a8:{NFSU2_TR(0x4cb1a8);
if(r1(R+518)){{goto L4cb1b4;}}
}
B4cb1aa:L4cb1aa:{c.instructions+=3;NFSU2_TR(0x4cb1aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cb1ae:{NFSU2_TR(0x4cb1ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb1af:{NFSU2_TR(0x4cb1af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb1b4ull));
TAIL_STATIC(0x4ac730u,4ac);
}
B4cb1b4:L4cb1b4:{c.instructions+=4;NFSU2_TR(0x4cb1b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cb1b8:{NFSU2_TR(0x4cb1b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb1bf:{NFSU2_TR(0x4cb1bf);
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
B4cb1c2:{NFSU2_TR(0x4cb1c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cb1d0:L4cb1d0:{c.instructions+=10;NFSU2_TR(0x4cb1d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb1d1:{NFSU2_TR(0x4cb1d1);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B4cb1d6:{NFSU2_TR(0x4cb1d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb1d7:{NFSU2_TR(0x4cb1d7);
__builtin_memmove((R+24),(R+4),4);
}
B4cb1d9:{NFSU2_TR(0x4cb1d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B4cb1dc:{NFSU2_TR(0x4cb1dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb1e0:{NFSU2_TR(0x4cb1e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x55ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4cb1e3:{NFSU2_TR(0x4cb1e3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4cb1e5:{NFSU2_TR(0x4cb1e5);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4cb1e7:{NFSU2_TR(0x4cb1e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cb207;}}
}
B4cb1e9:L4cb1e9:{c.instructions+=7;NFSU2_TR(0x4cb1e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cb1ec:{NFSU2_TR(0x4cb1ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cb1ef:{NFSU2_TR(0x4cb1ef);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb1f1:{NFSU2_TR(0x4cb1f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb1f2:{NFSU2_TR(0x4cb1f2);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb1f7:{NFSU2_TR(0x4cb1f7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb1f8:{NFSU2_TR(0x4cb1f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb1fdull));
TAIL_STATIC(0x537c00u,537);
}
B4cb1fd:L4cb1fd:{c.instructions+=5;NFSU2_TR(0x4cb1fd);
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
B4cb200:{NFSU2_TR(0x4cb200);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x55ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cb204:{NFSU2_TR(0x4cb204);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cb205:{NFSU2_TR(0x4cb205);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cb206:{NFSU2_TR(0x4cb206);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cb207:L4cb207:{c.instructions+=8;NFSU2_TR(0x4cb207);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4cb20b:{NFSU2_TR(0x4cb20b);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4cb211:{NFSU2_TR(0x4cb211);
{u32 ea_=u32(u32(7921824u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4cb217:{NFSU2_TR(0x4cb217);
{u32 ea_=u32(u32(7921820u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4cb21d:{NFSU2_TR(0x4cb21d);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B4cb21f:{NFSU2_TR(0x4cb21f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4cb221:{NFSU2_TR(0x4cb221);
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
B4cb224:{NFSU2_TR(0x4cb224);
if(r1(R+514)){{goto L4cb23e;}}
}
B4cb226:L4cb226:{c.instructions+=6;NFSU2_TR(0x4cb226);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4cb229:{NFSU2_TR(0x4cb229);
__builtin_memmove(gp(0x8364e0),(R+4),4);
}
B4cb22f:{NFSU2_TR(0x4cb22f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cb232:{NFSU2_TR(0x4cb232);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb233:{NFSU2_TR(0x4cb233);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x55ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4cb236:{NFSU2_TR(0x4cb236);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb23bull));
TAIL_STATIC(0x5379a0u,537);
}
B4cb23b:L4cb23b:{c.instructions+=1;NFSU2_TR(0x4cb23b);
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
B4cb23e:L4cb23e:{c.instructions+=3;NFSU2_TR(0x4cb23e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cb23f:{NFSU2_TR(0x4cb23f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cb240:{NFSU2_TR(0x4cb240);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cb250:L4cb250:{c.instructions+=13;NFSU2_TR(0x4cb250);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb251:{NFSU2_TR(0x4cb251);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb252:{NFSU2_TR(0x4cb252);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb253:{NFSU2_TR(0x4cb253);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb254:{NFSU2_TR(0x4cb254);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb255:{NFSU2_TR(0x4cb255);
__builtin_memmove((R+28),(R+4),4);
}
B4cb257:{NFSU2_TR(0x4cb257);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4cb25d:{NFSU2_TR(0x4cb25d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4cb25f:{NFSU2_TR(0x4cb25f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cb261:{NFSU2_TR(0x4cb261);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb267:{NFSU2_TR(0x4cb267);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb26d:{NFSU2_TR(0x4cb26d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb273:{NFSU2_TR(0x4cb273);
if(r1(R+518)){{goto L4cb2ad;}}
}
B4cb275:L4cb275:{c.instructions+=10;NFSU2_TR(0x4cb275);
__builtin_memmove((R+0),gp(0x8364ec),4);
}
B4cb27a:{NFSU2_TR(0x4cb27a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4cb27d:{NFSU2_TR(0x4cb27d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x836248ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4cb284:{NFSU2_TR(0x4cb284);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4cb28a:{NFSU2_TR(0x4cb28a);
__builtin_memmove(gp(0x870768),(R+12),1);
}
B4cb290:{NFSU2_TR(0x4cb290);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x874f7cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb296:{NFSU2_TR(0x4cb296);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cb299:{NFSU2_TR(0x4cb299);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb29e:{NFSU2_TR(0x4cb29e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb29f:{NFSU2_TR(0x4cb29f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb2a4ull));
TAIL_STATIC(0x537950u,537);
}
B4cb2a4:L4cb2a4:{c.instructions+=2;NFSU2_TR(0x4cb2a4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4cb2a7:{NFSU2_TR(0x4cb2a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4cb2ad:L4cb2ad:{c.instructions+=5;NFSU2_TR(0x4cb2ad);
w4(R+4,u32(0x874c40ull));
}
B4cb2b2:{NFSU2_TR(0x4cb2b2);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4cb2b4:{NFSU2_TR(0x4cb2b4);
w4(R+24,u32(0x836240ull));
}
B4cb2b9:{NFSU2_TR(0x4cb2b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb2bd:{NFSU2_TR(0x4cb2bd);
__builtin_memmove((R+4),(R+4),4);
}
B4cb2c0:L4cb2c0:{c.instructions+=2;NFSU2_TR(0x4cb2c0);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4cb2c7:{NFSU2_TR(0x4cb2c7);
if(r1(R+518)){{goto L4cb329;}}
}
B4cb2c9:L4cb2c9:{c.instructions+=1;NFSU2_TR(0x4cb2c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb2ceull));
TAIL_STATIC(0x5b8720u,5b8);
}
B4cb2ce:L4cb2ce:{c.instructions+=2;NFSU2_TR(0x4cb2ce);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4cb2d1:{NFSU2_TR(0x4cb2d1);
if(r1(R+518)){{goto L4cb2ee;}}
}
B4cb2d3:L4cb2d3:{c.instructions+=2;NFSU2_TR(0x4cb2d3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4cb2d4:{NFSU2_TR(0x4cb2d4);
if(r1(R+518)){{goto L4cb2da;}}
}
B4cb2d6:L4cb2d6:{c.instructions+=2;NFSU2_TR(0x4cb2d6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cb2d8:{NFSU2_TR(0x4cb2d8);
{goto L4cb2f3;}
}
B4cb2da:L4cb2da:{c.instructions+=5;NFSU2_TR(0x4cb2da);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cb2e0:{NFSU2_TR(0x4cb2e0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4cb2e1:{NFSU2_TR(0x4cb2e1);
w4(R+0,u32(0x1ull));
}
B4cb2e6:{NFSU2_TR(0x4cb2e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb2ec:{NFSU2_TR(0x4cb2ec);
{goto L4cb2f3;}
}
B4cb2ee:L4cb2ee:{c.instructions+=1;NFSU2_TR(0x4cb2ee);
w4(R+0,u32(0x2ull));
}
B4cb2f3:L4cb2f3:{c.instructions+=10;NFSU2_TR(0x4cb2f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835e1cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4cb2fa:{NFSU2_TR(0x4cb2fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4cb2fc:{NFSU2_TR(0x4cb2fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835b80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4cb303:{NFSU2_TR(0x4cb303);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb306:{NFSU2_TR(0x4cb306);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb309:{NFSU2_TR(0x4cb309);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cb30c:{NFSU2_TR(0x4cb30c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cb30f:{NFSU2_TR(0x4cb30f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb310:{NFSU2_TR(0x4cb310);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb311:{NFSU2_TR(0x4cb311);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb316ull));
TAIL_STATIC(0x537a10u,537);
}
B4cb316:L4cb316:{c.instructions+=3;NFSU2_TR(0x4cb316);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb318:{NFSU2_TR(0x4cb318);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb319:{NFSU2_TR(0x4cb319);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb31eull));
TAIL_STATIC(0x50c900u,50c);
}
B4cb31e:L4cb31e:{c.instructions+=4;NFSU2_TR(0x4cb31e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cb322:{NFSU2_TR(0x4cb322);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4cb325:{NFSU2_TR(0x4cb325);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B4cb326:{NFSU2_TR(0x4cb326);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B4cb329:L4cb329:{c.instructions+=5;NFSU2_TR(0x4cb329);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x370ull))));
}
B4cb32f:{NFSU2_TR(0x4cb32f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4cb330:{NFSU2_TR(0x4cb330);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8760e0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8760e0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4cb336:{NFSU2_TR(0x4cb336);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb33a:{NFSU2_TR(0x4cb33a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cb2c0u);}goto L4cb2c0;}}
}
B4cb33c:L4cb33c:{c.instructions+=4;NFSU2_TR(0x4cb33c);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4cb340:{NFSU2_TR(0x4cb340);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cb342:{NFSU2_TR(0x4cb342);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb348:{NFSU2_TR(0x4cb348);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cb352;}}
}
B4cb34a:L4cb34a:{c.instructions+=2;NFSU2_TR(0x4cb34a);
u8 U[8];
__builtin_memmove((U+0),gp(0x8364ec),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+20)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4cb350:{NFSU2_TR(0x4cb350);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4cb384;}}
}
B4cb352:L4cb352:{c.instructions+=4;NFSU2_TR(0x4cb352);
s4(0x8364ec,u32(0xffffffffull));
}
B4cb35c:{NFSU2_TR(0x4cb35c);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4cb362:{NFSU2_TR(0x4cb362);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cb364:{NFSU2_TR(0x4cb364);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cb384;}}
}
B4cb366:L4cb366:{c.instructions+=7;NFSU2_TR(0x4cb366);
__builtin_memmove((R+0),gp(0x7f68b8),4);
}
B4cb36b:{NFSU2_TR(0x4cb36b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb36d:{NFSU2_TR(0x4cb36d);
s4(0x8364ec,u32(0x0ull));
}
B4cb377:{NFSU2_TR(0x4cb377);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cb37a:{NFSU2_TR(0x4cb37a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb37b:{NFSU2_TR(0x4cb37b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb37c:{NFSU2_TR(0x4cb37c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb381ull));
TAIL_STATIC(0x537980u,537);
}
B4cb381:L4cb381:{c.instructions+=1;NFSU2_TR(0x4cb381);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4cb384:L4cb384:{c.instructions+=7;NFSU2_TR(0x4cb384);
__builtin_memmove((R+8),gp(0x8364ec),4);
}
B4cb38a:{NFSU2_TR(0x4cb38a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x835b80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4cb391:{NFSU2_TR(0x4cb391);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cb394:{NFSU2_TR(0x4cb394);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cb397:{NFSU2_TR(0x4cb397);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb398:{NFSU2_TR(0x4cb398);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb399:{NFSU2_TR(0x4cb399);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb39eull));
TAIL_STATIC(0x52cea0u,52c);
}
B4cb39e:L4cb39e:{c.instructions+=3;NFSU2_TR(0x4cb39e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4cb3a1:{NFSU2_TR(0x4cb3a1);
u8 U[4];
w4(U+0,u32(0x795c84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb3a6:{NFSU2_TR(0x4cb3a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb3abull));
TAIL_STATIC(0x505450u,505);
}
B4cb3ab:L4cb3ab:{c.instructions+=3;NFSU2_TR(0x4cb3ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb3ac:{NFSU2_TR(0x4cb3ac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb3ad:{NFSU2_TR(0x4cb3ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb3b2ull));
TAIL_STATIC(0x537a10u,537);
}
B4cb3b2:L4cb3b2:{c.instructions+=7;NFSU2_TR(0x4cb3b2);
__builtin_memmove((R+4),gp(0x8364ec),4);
}
B4cb3b8:{NFSU2_TR(0x4cb3b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4cb3bb:{NFSU2_TR(0x4cb3bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x836240ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B4cb3c2:{NFSU2_TR(0x4cb3c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x837b60ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4cb3c9:{NFSU2_TR(0x4cb3c9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb3ca:{NFSU2_TR(0x4cb3ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb3cb:{NFSU2_TR(0x4cb3cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb3d0ull));
TAIL_STATIC(0x50c900u,50c);
}
B4cb3d0:L4cb3d0:{c.instructions+=4;NFSU2_TR(0x4cb3d0);
__builtin_memmove((R+0),gp(0x870764),4);
}
B4cb3d5:{NFSU2_TR(0x4cb3d5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4cb3d8:{NFSU2_TR(0x4cb3d8);
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
B4cb3db:{NFSU2_TR(0x4cb3db);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4cb46d;}}
}
B4cb3e1:L4cb3e1:{c.instructions+=2;NFSU2_TR(0x4cb3e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B4cb3e8:{NFSU2_TR(0x4cb3e8);
{goto L4cb3f0;}
}
B4cb3f0:L4cb3f0:{c.instructions+=6;NFSU2_TR(0x4cb3f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x835b80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cb3f6:{NFSU2_TR(0x4cb3f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cb3f9:{NFSU2_TR(0x4cb3f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4cb3fc:{NFSU2_TR(0x4cb3fc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb3fe:{NFSU2_TR(0x4cb3fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb3ff:{NFSU2_TR(0x4cb3ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb404ull));
TAIL_STATIC(0x505450u,505);
}
B4cb404:L4cb404:{c.instructions+=4;NFSU2_TR(0x4cb404);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cb407:{NFSU2_TR(0x4cb407);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb408:{NFSU2_TR(0x4cb408);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb409:{NFSU2_TR(0x4cb409);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb40eull));
TAIL_STATIC(0x51cda0u,51c);
}
B4cb40e:L4cb40e:{c.instructions+=6;NFSU2_TR(0x4cb40e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x835e1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cb414:{NFSU2_TR(0x4cb414);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cb417:{NFSU2_TR(0x4cb417);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cb41a:{NFSU2_TR(0x4cb41a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb41b:{NFSU2_TR(0x4cb41b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb41c:{NFSU2_TR(0x4cb41c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb421ull));
TAIL_STATIC(0x537a10u,537);
}
B4cb421:L4cb421:{c.instructions+=3;NFSU2_TR(0x4cb421);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb426:{NFSU2_TR(0x4cb426);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb427:{NFSU2_TR(0x4cb427);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb42cull));
TAIL_STATIC(0x537be0u,537);
}
B4cb42c:L4cb42c:{c.instructions+=4;NFSU2_TR(0x4cb42c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4cb42f:{NFSU2_TR(0x4cb42f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb431:{NFSU2_TR(0x4cb431);
u8 U[4];
w4(U+0,u32(0x795c78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb436:{NFSU2_TR(0x4cb436);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb43bull));
TAIL_STATIC(0x505450u,505);
}
B4cb43b:L4cb43b:{c.instructions+=4;NFSU2_TR(0x4cb43b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x835b80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cb441:{NFSU2_TR(0x4cb441);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cb444:{NFSU2_TR(0x4cb444);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb445:{NFSU2_TR(0x4cb445);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb44aull));
TAIL_STATIC(0x52b030u,52b);
}
B4cb44a:L4cb44a:{c.instructions+=3;NFSU2_TR(0x4cb44a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb44c:{NFSU2_TR(0x4cb44c);
u8 U[4];
w4(U+0,u32(0x795c78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb451:{NFSU2_TR(0x4cb451);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb456ull));
TAIL_STATIC(0x505450u,505);
}
B4cb456:L4cb456:{c.instructions+=4;NFSU2_TR(0x4cb456);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x835e1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cb45c:{NFSU2_TR(0x4cb45c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cb45f:{NFSU2_TR(0x4cb45f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb460:{NFSU2_TR(0x4cb460);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb465ull));
TAIL_STATIC(0x52b030u,52b);
}
B4cb465:L4cb465:{c.instructions+=3;NFSU2_TR(0x4cb465);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B4cb468:{NFSU2_TR(0x4cb468);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x18ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x18ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4cb46b:{NFSU2_TR(0x4cb46b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cb3f0u);}goto L4cb3f0;}}
}
B4cb46d:L4cb46d:{c.instructions+=6;NFSU2_TR(0x4cb46d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cb46e:{NFSU2_TR(0x4cb46e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cb46f:{NFSU2_TR(0x4cb46f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4cb470:{NFSU2_TR(0x4cb470);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4cb471:{NFSU2_TR(0x4cb471);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cb472:{NFSU2_TR(0x4cb472);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cb480:L4cb480:{c.instructions+=2;NFSU2_TR(0x4cb480);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb481:{NFSU2_TR(0x4cb481);
w4(R+24,u32(0x7f68b8ull));
}
B4cb486:L4cb486:{c.instructions+=3;NFSU2_TR(0x4cb486);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4cb488:{NFSU2_TR(0x4cb488);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb489:{NFSU2_TR(0x4cb489);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb48eull));
TAIL_STATIC(0x51bd10u,51b);
}
B4cb48e:L4cb48e:{c.instructions+=3;NFSU2_TR(0x4cb48e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cb491:{NFSU2_TR(0x4cb491);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cb493:{NFSU2_TR(0x4cb493);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cb4a2;}}
}
B4cb495:L4cb495:{c.instructions+=3;NFSU2_TR(0x4cb495);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B4cb498:{NFSU2_TR(0x4cb498);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x7f68c4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7f68c4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7f68c4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4cb49e:{NFSU2_TR(0x4cb49e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cb486u);}goto L4cb486;}}
}
B4cb4a0:L4cb4a0:{c.instructions+=2;NFSU2_TR(0x4cb4a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cb4a1:{NFSU2_TR(0x4cb4a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cb4a2:L4cb4a2:{c.instructions+=3;NFSU2_TR(0x4cb4a2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb4a4:{NFSU2_TR(0x4cb4a4);
__builtin_memmove((R+4),(R+0),4);
}
B4cb4a6:{NFSU2_TR(0x4cb4a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb4abull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cb250u);}goto L4cb250;}
}
B4cb4ab:L4cb4ab:{c.instructions+=2;NFSU2_TR(0x4cb4ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cb4ac:{NFSU2_TR(0x4cb4ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cb4b0:L4cb4b0:{c.instructions+=9;NFSU2_TR(0x4cb4b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B4cb4b3:{NFSU2_TR(0x4cb4b3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb4b4:{NFSU2_TR(0x4cb4b4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb4b5:{NFSU2_TR(0x4cb4b5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb4b6:{NFSU2_TR(0x4cb4b6);
__builtin_memmove((R+24),(R+4),4);
}
B4cb4b8:{NFSU2_TR(0x4cb4b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cb4be:{NFSU2_TR(0x4cb4be);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb4bf:{NFSU2_TR(0x4cb4bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb4c0:{NFSU2_TR(0x4cb4c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb4c5ull));
TAIL_STATIC(0x4acca0u,4ac);
}
B4cb4c5:L4cb4c5:{c.instructions+=7;NFSU2_TR(0x4cb4c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4cb4c9:{NFSU2_TR(0x4cb4c9);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb4ce:{NFSU2_TR(0x4cb4ce);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4cb4d2:{NFSU2_TR(0x4cb4d2);
u8 U[4];
w4(U+0,u32(0x795c9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb4d7:{NFSU2_TR(0x4cb4d7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb4d8:{NFSU2_TR(0x4cb4d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb4db:{NFSU2_TR(0x4cb4db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb4e0ull));
TAIL_STATIC(0x43dda0u,43d);
}
B4cb4e0:L4cb4e0:{c.instructions+=8;NFSU2_TR(0x4cb4e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cb4e6:{NFSU2_TR(0x4cb4e6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb4e7:{NFSU2_TR(0x4cb4e7);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4cb4eb:{NFSU2_TR(0x4cb4eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb4ec:{NFSU2_TR(0x4cb4ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4cb4f0:{NFSU2_TR(0x4cb4f0);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb4f2:{NFSU2_TR(0x4cb4f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb4f3:{NFSU2_TR(0x4cb4f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb4f8ull));
TAIL_STATIC(0x50c960u,50c);
}
B4cb4f8:L4cb4f8:{c.instructions+=4;NFSU2_TR(0x4cb4f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4cb4fb:{NFSU2_TR(0x4cb4fb);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4cb4ff:{NFSU2_TR(0x4cb4ff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb500:{NFSU2_TR(0x4cb500);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb505ull));
TAIL_STATIC(0x505450u,505);
}
B4cb505:L4cb505:{c.instructions+=3;NFSU2_TR(0x4cb505);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb506:{NFSU2_TR(0x4cb506);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb507:{NFSU2_TR(0x4cb507);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb50cull));
TAIL_STATIC(0x5379c0u,537);
}
B4cb50c:L4cb50c:{c.instructions+=7;NFSU2_TR(0x4cb50c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb50f:{NFSU2_TR(0x4cb50f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
w4(U+4,u32(0xc1000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cb516:{NFSU2_TR(0x4cb516);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cb51c:{NFSU2_TR(0x4cb51c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B4cb51f:{NFSU2_TR(0x4cb51f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb520:{NFSU2_TR(0x4cb520);
__builtin_memmove((R+4),(R+24),4);
}
B4cb522:{NFSU2_TR(0x4cb522);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb527ull));
TAIL_STATIC(0x4acca0u,4ac);
}
B4cb527:L4cb527:{c.instructions+=6;NFSU2_TR(0x4cb527);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4cb52b:{NFSU2_TR(0x4cb52b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb52e:{NFSU2_TR(0x4cb52e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cb534:{NFSU2_TR(0x4cb534);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb535:{NFSU2_TR(0x4cb535);
__builtin_memmove((R+4),(R+24),4);
}
B4cb537:{NFSU2_TR(0x4cb537);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb53cull));
TAIL_STATIC(0x4acca0u,4ac);
}
B4cb53c:L4cb53c:{c.instructions+=32;NFSU2_TR(0x4cb53c);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4cb540:{NFSU2_TR(0x4cb540);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb543:{NFSU2_TR(0x4cb543);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cb546:{NFSU2_TR(0x4cb546);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cb549:{NFSU2_TR(0x4cb549);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4cb54c:{NFSU2_TR(0x4cb54c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4cb54e:{NFSU2_TR(0x4cb54e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb551:{NFSU2_TR(0x4cb551);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4cb553:{NFSU2_TR(0x4cb553);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb556:{NFSU2_TR(0x4cb556);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cb559:{NFSU2_TR(0x4cb559);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cb55c:{NFSU2_TR(0x4cb55c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4cb55f:{NFSU2_TR(0x4cb55f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4cb561:{NFSU2_TR(0x4cb561);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb564:{NFSU2_TR(0x4cb564);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4cb566:{NFSU2_TR(0x4cb566);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb569:{NFSU2_TR(0x4cb569);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cb56c:{NFSU2_TR(0x4cb56c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cb56f:{NFSU2_TR(0x4cb56f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4cb572:{NFSU2_TR(0x4cb572);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4cb574:{NFSU2_TR(0x4cb574);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb577:{NFSU2_TR(0x4cb577);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4cb579:{NFSU2_TR(0x4cb579);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb57c:{NFSU2_TR(0x4cb57c);
{u32 ea_=u32(r4(R+24)+u32(304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4cb582:{NFSU2_TR(0x4cb582);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4cb588:{NFSU2_TR(0x4cb588);
__builtin_memmove((R+4),(R+28),4);
}
B4cb58a:{NFSU2_TR(0x4cb58a);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4cb590:{NFSU2_TR(0x4cb590);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4cb596:{NFSU2_TR(0x4cb596);
{u32 ea_=u32(r4(R+24)+u32(288u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4cb59c:{NFSU2_TR(0x4cb59c);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4cb5a2:{NFSU2_TR(0x4cb5a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4cb5a4:{NFSU2_TR(0x4cb5a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb5a7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4cb5a7:L4cb5a7:{c.instructions+=3;NFSU2_TR(0x4cb5a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4cb5aa:{NFSU2_TR(0x4cb5aa);
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
B4cb5ac:{NFSU2_TR(0x4cb5ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cb5b5;}}
}
B4cb5ae:L4cb5ae:{c.instructions+=3;NFSU2_TR(0x4cb5ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4cb5b0:{NFSU2_TR(0x4cb5b0);
__builtin_memmove((R+4),(R+12),4);
}
B4cb5b2:{NFSU2_TR(0x4cb5b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb5b5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4cb5b5:L4cb5b5:{c.instructions+=3;NFSU2_TR(0x4cb5b5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4cb5b8:{NFSU2_TR(0x4cb5b8);
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
B4cb5ba:{NFSU2_TR(0x4cb5ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cb5c4;}}
}
B4cb5bc:L4cb5bc:{c.instructions+=3;NFSU2_TR(0x4cb5bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4cb5bf:{NFSU2_TR(0x4cb5bf);
__builtin_memmove((R+4),(R+20),4);
}
B4cb5c1:{NFSU2_TR(0x4cb5c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb5c4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4cb5c4:L4cb5c4:{c.instructions+=3;NFSU2_TR(0x4cb5c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cb5ca:{NFSU2_TR(0x4cb5ca);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
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
B4cb5d0:{NFSU2_TR(0x4cb5d0);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4cb5fe;}}
}
B4cb5d2:L4cb5d2:{c.instructions+=3;NFSU2_TR(0x4cb5d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4cb5d4:{NFSU2_TR(0x4cb5d4);
__builtin_memmove((R+4),(R+28),4);
}
B4cb5d6:{NFSU2_TR(0x4cb5d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb5d9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4cb5d9:L4cb5d9:{c.instructions+=3;NFSU2_TR(0x4cb5d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4cb5db:{NFSU2_TR(0x4cb5db);
__builtin_memmove((R+4),(R+28),4);
}
B4cb5dd:{NFSU2_TR(0x4cb5dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb5e0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4cb5e0:L4cb5e0:{c.instructions+=3;NFSU2_TR(0x4cb5e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4cb5e2:{NFSU2_TR(0x4cb5e2);
__builtin_memmove((R+4),(R+12),4);
}
B4cb5e4:{NFSU2_TR(0x4cb5e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb5e7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4cb5e7:L4cb5e7:{c.instructions+=3;NFSU2_TR(0x4cb5e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4cb5e9:{NFSU2_TR(0x4cb5e9);
__builtin_memmove((R+4),(R+12),4);
}
B4cb5eb:{NFSU2_TR(0x4cb5eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb5eeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4cb5ee:L4cb5ee:{c.instructions+=3;NFSU2_TR(0x4cb5ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4cb5f1:{NFSU2_TR(0x4cb5f1);
__builtin_memmove((R+4),(R+20),4);
}
B4cb5f3:{NFSU2_TR(0x4cb5f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb5f6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4cb5f6:L4cb5f6:{c.instructions+=3;NFSU2_TR(0x4cb5f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4cb5f9:{NFSU2_TR(0x4cb5f9);
__builtin_memmove((R+4),(R+20),4);
}
B4cb5fb:{NFSU2_TR(0x4cb5fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb5feull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4cb5fe:L4cb5fe:{c.instructions+=3;NFSU2_TR(0x4cb5fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4cb600:{NFSU2_TR(0x4cb600);
__builtin_memmove((R+4),(R+28),4);
}
B4cb602:{NFSU2_TR(0x4cb602);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb605ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4cb605:L4cb605:{c.instructions+=5;NFSU2_TR(0x4cb605);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cb608:{NFSU2_TR(0x4cb608);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb60a:{NFSU2_TR(0x4cb60a);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb60f:{NFSU2_TR(0x4cb60f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb610:{NFSU2_TR(0x4cb610);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb615ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4cb615:L4cb615:{c.instructions+=4;NFSU2_TR(0x4cb615);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4cb617:{NFSU2_TR(0x4cb617);
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
B4cb61a:{NFSU2_TR(0x4cb61a);
__builtin_memmove((R+4),(R+12),4);
}
B4cb61c:{NFSU2_TR(0x4cb61c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb61full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4cb61f:L4cb61f:{c.instructions+=3;NFSU2_TR(0x4cb61f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4cb622:{NFSU2_TR(0x4cb622);
__builtin_memmove((R+4),(R+20),4);
}
B4cb624:{NFSU2_TR(0x4cb624);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb627ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4cb627:L4cb627:{c.instructions+=15;NFSU2_TR(0x4cb627);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cb62d:{NFSU2_TR(0x4cb62d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cb633:{NFSU2_TR(0x4cb633);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B4cb634:{NFSU2_TR(0x4cb634);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb63a:{NFSU2_TR(0x4cb63a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb63d:{NFSU2_TR(0x4cb63d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cb643:{NFSU2_TR(0x4cb643);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cb644:{NFSU2_TR(0x4cb644);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb647:{NFSU2_TR(0x4cb647);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cb64d:{NFSU2_TR(0x4cb64d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cb64e:{NFSU2_TR(0x4cb64e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4cb64f:{NFSU2_TR(0x4cb64f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4cb650:{NFSU2_TR(0x4cb650);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4cb651:{NFSU2_TR(0x4cb651);
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
B4cb654:{NFSU2_TR(0x4cb654);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cb660:L4cb660:{c.instructions+=3;NFSU2_TR(0x4cb660);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cb663:{NFSU2_TR(0x4cb663);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cb665:{NFSU2_TR(0x4cb665);
if(r1(R+518)){{goto L4cb66c;}}
}
B4cb667:L4cb667:{c.instructions+=2;NFSU2_TR(0x4cb667);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4cb66a:{NFSU2_TR(0x4cb66a);
{goto L4cb66e;}
}
B4cb66c:L4cb66c:{c.instructions+=1;NFSU2_TR(0x4cb66c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cb66e:L4cb66e:{c.instructions+=6;NFSU2_TR(0x4cb66e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb66f:{NFSU2_TR(0x4cb66f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb670:{NFSU2_TR(0x4cb670);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4cb674:{NFSU2_TR(0x4cb674);
w4(R+24,u32(0x1ull));
}
B4cb679:{NFSU2_TR(0x4cb679);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4cb67b:{NFSU2_TR(0x4cb67b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4cb6a9;}}
}
B4cb67d:L4cb67d:{c.instructions+=1;NFSU2_TR(0x4cb67d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cb680:L4cb680:{c.instructions+=2;NFSU2_TR(0x4cb680);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cb682:{NFSU2_TR(0x4cb682);
if(r1(R+518)){{goto L4cb689;}}
}
B4cb684:L4cb684:{c.instructions+=2;NFSU2_TR(0x4cb684);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cb687:{NFSU2_TR(0x4cb687);
{goto L4cb68b;}
}
B4cb689:L4cb689:{c.instructions+=1;NFSU2_TR(0x4cb689);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4cb68b:L4cb68b:{c.instructions+=2;NFSU2_TR(0x4cb68b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cb68d:{NFSU2_TR(0x4cb68d);
if(r1(R+518)){{goto L4cb6a7;}}
}
B4cb68f:L4cb68f:{c.instructions+=3;NFSU2_TR(0x4cb68f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cb692:{NFSU2_TR(0x4cb692);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cb694:{NFSU2_TR(0x4cb694);
if(r1(R+518)){{goto L4cb69b;}}
}
B4cb696:L4cb696:{c.instructions+=2;NFSU2_TR(0x4cb696);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4cb699:{NFSU2_TR(0x4cb699);
{goto L4cb69d;}
}
B4cb69b:L4cb69b:{c.instructions+=1;NFSU2_TR(0x4cb69b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cb69d:L4cb69d:{c.instructions+=3;NFSU2_TR(0x4cb69d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4cb69e:{NFSU2_TR(0x4cb69e);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B4cb6a0:{NFSU2_TR(0x4cb6a0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cb680u);}goto L4cb680;}}
}
B4cb6a2:L4cb6a2:{c.instructions+=3;NFSU2_TR(0x4cb6a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cb6a3:{NFSU2_TR(0x4cb6a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cb6a4:{NFSU2_TR(0x4cb6a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cb6a7:L4cb6a7:{c.instructions+=1;NFSU2_TR(0x4cb6a7);
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
B4cb6a9:L4cb6a9:{c.instructions+=3;NFSU2_TR(0x4cb6a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cb6aa:{NFSU2_TR(0x4cb6aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cb6ab:{NFSU2_TR(0x4cb6ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cb6b0:L4cb6b0:{c.instructions+=12;NFSU2_TR(0x4cb6b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb6b1:{NFSU2_TR(0x4cb6b1);
__builtin_memmove((R+20),(R+16),4);
}
B4cb6b3:{NFSU2_TR(0x4cb6b3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B4cb6b6:{NFSU2_TR(0x4cb6b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B4cb6b9:{NFSU2_TR(0x4cb6b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cb6bc:{NFSU2_TR(0x4cb6bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cb6be:{NFSU2_TR(0x4cb6be);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cb6c1:{NFSU2_TR(0x4cb6c1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb6c2:{NFSU2_TR(0x4cb6c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb6c3:{NFSU2_TR(0x4cb6c3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb6c4:{NFSU2_TR(0x4cb6c4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb6c8:{NFSU2_TR(0x4cb6c8);
if(r1(R+518)){{goto L4cb6cf;}}
}
B4cb6ca:L4cb6ca:{c.instructions+=2;NFSU2_TR(0x4cb6ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cb6cd:{NFSU2_TR(0x4cb6cd);
{goto L4cb6d1;}
}
B4cb6cf:L4cb6cf:{c.instructions+=1;NFSU2_TR(0x4cb6cf);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4cb6d1:L4cb6d1:{c.instructions+=3;NFSU2_TR(0x4cb6d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cb6d4:{NFSU2_TR(0x4cb6d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cb6d6:{NFSU2_TR(0x4cb6d6);
if(r1(R+518)){{goto L4cb6dd;}}
}
B4cb6d8:L4cb6d8:{c.instructions+=2;NFSU2_TR(0x4cb6d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cb6db:{NFSU2_TR(0x4cb6db);
{goto L4cb6df;}
}
B4cb6dd:L4cb6dd:{c.instructions+=1;NFSU2_TR(0x4cb6dd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4cb6df:L4cb6df:{c.instructions+=1;NFSU2_TR(0x4cb6df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4cb6e2:L4cb6e2:{c.instructions+=2;NFSU2_TR(0x4cb6e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cb6e4:{NFSU2_TR(0x4cb6e4);
if(r1(R+518)){{goto L4cb6eb;}}
}
B4cb6e6:L4cb6e6:{c.instructions+=2;NFSU2_TR(0x4cb6e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4cb6e9:{NFSU2_TR(0x4cb6e9);
{goto L4cb6ed;}
}
B4cb6eb:L4cb6eb:{c.instructions+=1;NFSU2_TR(0x4cb6eb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cb6ed:L4cb6ed:{c.instructions+=2;NFSU2_TR(0x4cb6ed);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cb6ef:{NFSU2_TR(0x4cb6ef);
if(r1(R+518)){{goto L4cb7b3;}}
}
B4cb6f5:L4cb6f5:{c.instructions+=3;NFSU2_TR(0x4cb6f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x29ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4cb6f8:{NFSU2_TR(0x4cb6f8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cb6fa:{NFSU2_TR(0x4cb6fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cb737;}}
}
B4cb6fc:L4cb6fc:{c.instructions+=16;NFSU2_TR(0x4cb6fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cb6ff:{NFSU2_TR(0x4cb6ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cb702:{NFSU2_TR(0x4cb702);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cb705:{NFSU2_TR(0x4cb705);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb709:{NFSU2_TR(0x4cb709);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4cb70d:{NFSU2_TR(0x4cb70d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb70e:{NFSU2_TR(0x4cb70e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb712:{NFSU2_TR(0x4cb712);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cb715:{NFSU2_TR(0x4cb715);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb719:{NFSU2_TR(0x4cb719);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4cb71d:{NFSU2_TR(0x4cb71d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb71e:{NFSU2_TR(0x4cb71e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb722:{NFSU2_TR(0x4cb722);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cb725:{NFSU2_TR(0x4cb725);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb726:{NFSU2_TR(0x4cb726);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb727:{NFSU2_TR(0x4cb727);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb72cull));
TAIL_STATIC(0x50cd00u,50c);
}
B4cb72c:L4cb72c:{c.instructions+=3;NFSU2_TR(0x4cb72c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4cb72f:{NFSU2_TR(0x4cb72f);
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
B4cb731:{NFSU2_TR(0x4cb731);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cb79d;}}
}
B4cb733:L4cb733:{c.instructions+=1;NFSU2_TR(0x4cb733);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cb737:L4cb737:{c.instructions+=3;NFSU2_TR(0x4cb737);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x29ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4cb73a:{NFSU2_TR(0x4cb73a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cb73c:{NFSU2_TR(0x4cb73c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cb779;}}
}
B4cb73e:L4cb73e:{c.instructions+=16;NFSU2_TR(0x4cb73e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cb741:{NFSU2_TR(0x4cb741);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cb744:{NFSU2_TR(0x4cb744);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cb747:{NFSU2_TR(0x4cb747);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb74b:{NFSU2_TR(0x4cb74b);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4cb74f:{NFSU2_TR(0x4cb74f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb750:{NFSU2_TR(0x4cb750);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb754:{NFSU2_TR(0x4cb754);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cb757:{NFSU2_TR(0x4cb757);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb75b:{NFSU2_TR(0x4cb75b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4cb75f:{NFSU2_TR(0x4cb75f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb760:{NFSU2_TR(0x4cb760);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb764:{NFSU2_TR(0x4cb764);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cb767:{NFSU2_TR(0x4cb767);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb768:{NFSU2_TR(0x4cb768);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb769:{NFSU2_TR(0x4cb769);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb76eull));
TAIL_STATIC(0x50cd00u,50c);
}
B4cb76e:L4cb76e:{c.instructions+=3;NFSU2_TR(0x4cb76e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4cb771:{NFSU2_TR(0x4cb771);
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
B4cb773:{NFSU2_TR(0x4cb773);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cb7a8;}}
}
B4cb775:L4cb775:{c.instructions+=1;NFSU2_TR(0x4cb775);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cb779:L4cb779:{c.instructions+=3;NFSU2_TR(0x4cb779);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4cb77c:{NFSU2_TR(0x4cb77c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cb77e:{NFSU2_TR(0x4cb77e);
if(r1(R+518)){{goto L4cb785;}}
}
B4cb780:L4cb780:{c.instructions+=2;NFSU2_TR(0x4cb780);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
}
B4cb783:{NFSU2_TR(0x4cb783);
{goto L4cb787;}
}
B4cb785:L4cb785:{c.instructions+=1;NFSU2_TR(0x4cb785);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4cb787:L4cb787:{c.instructions+=3;NFSU2_TR(0x4cb787);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4cb78a:{NFSU2_TR(0x4cb78a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cb78c:{NFSU2_TR(0x4cb78c);
if(r1(R+518)){{goto L4cb796;}}
}
B4cb78e:L4cb78e:{c.instructions+=2;NFSU2_TR(0x4cb78e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B4cb791:{NFSU2_TR(0x4cb791);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cb6e2u);}goto L4cb6e2;}
}
B4cb796:L4cb796:{c.instructions+=2;NFSU2_TR(0x4cb796);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4cb798:{NFSU2_TR(0x4cb798);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cb6e2u);}goto L4cb6e2;}
}
B4cb79d:L4cb79d:{c.instructions+=7;NFSU2_TR(0x4cb79d);
__builtin_memmove((R+0),(R+24),4);
}
B4cb79f:{NFSU2_TR(0x4cb79f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cb7a0:{NFSU2_TR(0x4cb7a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cb7a1:{NFSU2_TR(0x4cb7a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4cb7a2:{NFSU2_TR(0x4cb7a2);
__builtin_memmove((R+16),(R+20),4);
}
B4cb7a4:{NFSU2_TR(0x4cb7a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4cb7a5:{NFSU2_TR(0x4cb7a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cb7a8:L4cb7a8:{c.instructions+=7;NFSU2_TR(0x4cb7a8);
__builtin_memmove((R+0),(R+28),4);
}
B4cb7aa:{NFSU2_TR(0x4cb7aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cb7ab:{NFSU2_TR(0x4cb7ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cb7ac:{NFSU2_TR(0x4cb7ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4cb7ad:{NFSU2_TR(0x4cb7ad);
__builtin_memmove((R+16),(R+20),4);
}
B4cb7af:{NFSU2_TR(0x4cb7af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4cb7b0:{NFSU2_TR(0x4cb7b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cb7b3:L4cb7b3:{c.instructions+=7;NFSU2_TR(0x4cb7b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cb7b4:{NFSU2_TR(0x4cb7b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cb7b5:{NFSU2_TR(0x4cb7b5);
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
B4cb7b7:{NFSU2_TR(0x4cb7b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4cb7b8:{NFSU2_TR(0x4cb7b8);
__builtin_memmove((R+16),(R+20),4);
}
B4cb7ba:{NFSU2_TR(0x4cb7ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4cb7bb:{NFSU2_TR(0x4cb7bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cb7c0:L4cb7c0:{c.instructions+=9;NFSU2_TR(0x4cb7c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb7c1:{NFSU2_TR(0x4cb7c1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb7c2:{NFSU2_TR(0x4cb7c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4cb7c5:{NFSU2_TR(0x4cb7c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cb7c7:{NFSU2_TR(0x4cb7c7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb7c8:{NFSU2_TR(0x4cb7c8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb7c9:{NFSU2_TR(0x4cb7c9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb7ca:{NFSU2_TR(0x4cb7ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb7ce:{NFSU2_TR(0x4cb7ce);
if(r1(R+518)){{goto L4cb7d5;}}
}
B4cb7d0:L4cb7d0:{c.instructions+=2;NFSU2_TR(0x4cb7d0);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
}
B4cb7d3:{NFSU2_TR(0x4cb7d3);
{goto L4cb7d7;}
}
B4cb7d5:L4cb7d5:{c.instructions+=1;NFSU2_TR(0x4cb7d5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4cb7d7:L4cb7d7:{c.instructions+=3;NFSU2_TR(0x4cb7d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4cb7da:{NFSU2_TR(0x4cb7da);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cb7dc:{NFSU2_TR(0x4cb7dc);
if(r1(R+518)){{goto L4cb7e3;}}
}
B4cb7de:L4cb7de:{c.instructions+=2;NFSU2_TR(0x4cb7de);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
}
B4cb7e1:{NFSU2_TR(0x4cb7e1);
{goto L4cb7e5;}
}
B4cb7e3:L4cb7e3:{c.instructions+=1;NFSU2_TR(0x4cb7e3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4cb7e5:L4cb7e5:{c.instructions+=2;NFSU2_TR(0x4cb7e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4cb7e8:{NFSU2_TR(0x4cb7e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4cb7eb:L4cb7eb:{c.instructions+=2;NFSU2_TR(0x4cb7eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cb7ed:{NFSU2_TR(0x4cb7ed);
if(r1(R+518)){{goto L4cb7f4;}}
}
B4cb7ef:L4cb7ef:{c.instructions+=2;NFSU2_TR(0x4cb7ef);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B4cb7f2:{NFSU2_TR(0x4cb7f2);
{goto L4cb7f6;}
}
B4cb7f4:L4cb7f4:{c.instructions+=1;NFSU2_TR(0x4cb7f4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4cb7f6:L4cb7f6:{c.instructions+=2;NFSU2_TR(0x4cb7f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cb7f8:{NFSU2_TR(0x4cb7f8);
if(r1(R+518)){{goto L4cb7ff;}}
}
B4cb7fa:L4cb7fa:{c.instructions+=2;NFSU2_TR(0x4cb7fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4cb7fd:{NFSU2_TR(0x4cb7fd);
{goto L4cb801;}
}
B4cb7ff:L4cb7ff:{c.instructions+=1;NFSU2_TR(0x4cb7ff);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cb801:L4cb801:{c.instructions+=2;NFSU2_TR(0x4cb801);
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
B4cb803:{NFSU2_TR(0x4cb803);
if(r1(R+518)){{goto L4cb858;}}
}
B4cb805:L4cb805:{c.instructions+=4;NFSU2_TR(0x4cb805);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4cb807:{NFSU2_TR(0x4cb807);
u8 U[4];
w4(U+0,u32(0x45d9c800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb80c:{NFSU2_TR(0x4cb80c);
__builtin_memmove((R+4),(R+24),4);
}
B4cb80e:{NFSU2_TR(0x4cb80e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb811ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4cb811:L4cb811:{c.instructions+=3;NFSU2_TR(0x4cb811);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4cb813:{NFSU2_TR(0x4cb813);
__builtin_memmove((R+4),(R+24),4);
}
B4cb815:{NFSU2_TR(0x4cb815);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb818ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4cb818:L4cb818:{c.instructions+=3;NFSU2_TR(0x4cb818);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4cb81a:{NFSU2_TR(0x4cb81a);
__builtin_memmove((R+4),(R+24),4);
}
B4cb81c:{NFSU2_TR(0x4cb81c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb81full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4cb81f:L4cb81f:{c.instructions+=4;NFSU2_TR(0x4cb81f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4cb821:{NFSU2_TR(0x4cb821);
u8 U[4];
w4(U+0,u32(0x45d9c800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb826:{NFSU2_TR(0x4cb826);
__builtin_memmove((R+4),(R+12),4);
}
B4cb828:{NFSU2_TR(0x4cb828);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb82bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4cb82b:L4cb82b:{c.instructions+=3;NFSU2_TR(0x4cb82b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4cb82d:{NFSU2_TR(0x4cb82d);
__builtin_memmove((R+4),(R+12),4);
}
B4cb82f:{NFSU2_TR(0x4cb82f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb832ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4cb832:L4cb832:{c.instructions+=3;NFSU2_TR(0x4cb832);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4cb834:{NFSU2_TR(0x4cb834);
__builtin_memmove((R+4),(R+12),4);
}
B4cb836:{NFSU2_TR(0x4cb836);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb839ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4cb839:L4cb839:{c.instructions+=4;NFSU2_TR(0x4cb839);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4cb83b:{NFSU2_TR(0x4cb83b);
u8 U[4];
w4(U+0,u32(0x45d9c800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb840:{NFSU2_TR(0x4cb840);
__builtin_memmove((R+4),(R+28),4);
}
B4cb842:{NFSU2_TR(0x4cb842);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb845ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4cb845:L4cb845:{c.instructions+=3;NFSU2_TR(0x4cb845);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4cb847:{NFSU2_TR(0x4cb847);
__builtin_memmove((R+4),(R+28),4);
}
B4cb849:{NFSU2_TR(0x4cb849);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb84cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4cb84c:L4cb84c:{c.instructions+=3;NFSU2_TR(0x4cb84c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4cb84e:{NFSU2_TR(0x4cb84e);
__builtin_memmove((R+4),(R+28),4);
}
B4cb850:{NFSU2_TR(0x4cb850);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb853ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4cb853:L4cb853:{c.instructions+=2;NFSU2_TR(0x4cb853);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4cb856:{NFSU2_TR(0x4cb856);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cb7ebu);}goto L4cb7eb;}
}
B4cb858:L4cb858:{c.instructions+=2;NFSU2_TR(0x4cb858);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+20))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4cb85b:{NFSU2_TR(0x4cb85b);
if(r1(R+518)){{goto L4cb87f;}}
}
B4cb85d:L4cb85d:{c.instructions+=1;NFSU2_TR(0x4cb85d);
__builtin_memmove((R+4),(R+4),4);
}
B4cb860:L4cb860:{c.instructions+=8;NFSU2_TR(0x4cb860);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4cb863:{NFSU2_TR(0x4cb863);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4cb865:{NFSU2_TR(0x4cb865);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cb868:{NFSU2_TR(0x4cb868);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4cb86a:{NFSU2_TR(0x4cb86a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb86d:{NFSU2_TR(0x4cb86d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cb870:{NFSU2_TR(0x4cb870);
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
B4cb872:{NFSU2_TR(0x4cb872);
if(r1(R+518)){{goto L4cb87a;}}
}
B4cb874:L4cb874:{c.instructions+=3;NFSU2_TR(0x4cb874);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4cb876:{NFSU2_TR(0x4cb876);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb878:{NFSU2_TR(0x4cb878);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb87aull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4cb87a:L4cb87a:{c.instructions+=2;NFSU2_TR(0x4cb87a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+20))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4cb87d:{NFSU2_TR(0x4cb87d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cb860u);}goto L4cb860;}}
}
B4cb87f:L4cb87f:{c.instructions+=9;NFSU2_TR(0x4cb87f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cb883:{NFSU2_TR(0x4cb883);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cb886:{NFSU2_TR(0x4cb886);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cb887:{NFSU2_TR(0x4cb887);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
}
B4cb88a:{NFSU2_TR(0x4cb88a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cb88c:{NFSU2_TR(0x4cb88c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cb88d:{NFSU2_TR(0x4cb88d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4cb88e:{NFSU2_TR(0x4cb88e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4cb88f:{NFSU2_TR(0x4cb88f);
if(r1(R+518)){{goto L4cb8bf;}}
}
B4cb891:L4cb891:{c.instructions+=10;NFSU2_TR(0x4cb891);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4cb895:{NFSU2_TR(0x4cb895);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
}
B4cb898:{NFSU2_TR(0x4cb898);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4cb89a:{NFSU2_TR(0x4cb89a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4cb89c:{NFSU2_TR(0x4cb89c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cb89f:{NFSU2_TR(0x4cb89f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4cb8a1:{NFSU2_TR(0x4cb8a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb8a4:{NFSU2_TR(0x4cb8a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cb8a7:{NFSU2_TR(0x4cb8a7);
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
B4cb8a9:{NFSU2_TR(0x4cb8a9);
if(r1(R+518)){{goto L4cb8b1;}}
}
B4cb8ab:L4cb8ab:{c.instructions+=3;NFSU2_TR(0x4cb8ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4cb8ad:{NFSU2_TR(0x4cb8ad);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb8af:{NFSU2_TR(0x4cb8af);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb8b1ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4cb8b1:L4cb8b1:{c.instructions+=5;NFSU2_TR(0x4cb8b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4cb8b5:{NFSU2_TR(0x4cb8b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cb8b8:{NFSU2_TR(0x4cb8b8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
}
B4cb8bb:{NFSU2_TR(0x4cb8bb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cb8bd:{NFSU2_TR(0x4cb8bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cb891u);}goto L4cb891;}}
}
B4cb8bf:L4cb8bf:{c.instructions+=5;NFSU2_TR(0x4cb8bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4cb8c3:{NFSU2_TR(0x4cb8c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cb8c6:{NFSU2_TR(0x4cb8c6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
}
B4cb8c9:{NFSU2_TR(0x4cb8c9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cb8cb:{NFSU2_TR(0x4cb8cb);
if(r1(R+518)){{goto L4cb8fe;}}
}
B4cb8cd:L4cb8cd:{c.instructions+=1;NFSU2_TR(0x4cb8cd);
__builtin_memmove((R+4),(R+4),4);
}
B4cb8d0:L4cb8d0:{c.instructions+=10;NFSU2_TR(0x4cb8d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4cb8d4:{NFSU2_TR(0x4cb8d4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
}
B4cb8d7:{NFSU2_TR(0x4cb8d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4cb8d9:{NFSU2_TR(0x4cb8d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4cb8db:{NFSU2_TR(0x4cb8db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cb8de:{NFSU2_TR(0x4cb8de);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4cb8e0:{NFSU2_TR(0x4cb8e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cb8e3:{NFSU2_TR(0x4cb8e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cb8e6:{NFSU2_TR(0x4cb8e6);
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
B4cb8e8:{NFSU2_TR(0x4cb8e8);
if(r1(R+518)){{goto L4cb8f0;}}
}
B4cb8ea:L4cb8ea:{c.instructions+=3;NFSU2_TR(0x4cb8ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4cb8ec:{NFSU2_TR(0x4cb8ec);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb8ee:{NFSU2_TR(0x4cb8ee);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb8f0ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4cb8f0:L4cb8f0:{c.instructions+=5;NFSU2_TR(0x4cb8f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4cb8f4:{NFSU2_TR(0x4cb8f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cb8f7:{NFSU2_TR(0x4cb8f7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
}
B4cb8fa:{NFSU2_TR(0x4cb8fa);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cb8fc:{NFSU2_TR(0x4cb8fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cb8d0u);}goto L4cb8d0;}}
}
B4cb8fe:L4cb8fe:{c.instructions+=3;NFSU2_TR(0x4cb8fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4cb902:{NFSU2_TR(0x4cb902);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cb905:{NFSU2_TR(0x4cb905);
TAIL_STATIC(0x4accf0u,4ac);
}
B4cb910:L4cb910:{c.instructions+=6;NFSU2_TR(0x4cb910);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cb913:{NFSU2_TR(0x4cb913);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cb915:{NFSU2_TR(0x4cb915);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb916:{NFSU2_TR(0x4cb916);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb917:{NFSU2_TR(0x4cb917);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb918:{NFSU2_TR(0x4cb918);
if(r1(R+518)){{goto L4cb91f;}}
}
B4cb91a:L4cb91a:{c.instructions+=2;NFSU2_TR(0x4cb91a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cb91d:{NFSU2_TR(0x4cb91d);
{goto L4cb921;}
}
B4cb91f:L4cb91f:{c.instructions+=1;NFSU2_TR(0x4cb91f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4cb921:L4cb921:{c.instructions+=4;NFSU2_TR(0x4cb921);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cb924:{NFSU2_TR(0x4cb924);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cb926:{NFSU2_TR(0x4cb926);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4cb929:{NFSU2_TR(0x4cb929);
if(r1(R+518)){{goto L4cb930;}}
}
B4cb92b:L4cb92b:{c.instructions+=2;NFSU2_TR(0x4cb92b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cb92e:{NFSU2_TR(0x4cb92e);
{goto L4cb932;}
}
B4cb930:L4cb930:{c.instructions+=1;NFSU2_TR(0x4cb930);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4cb932:L4cb932:{c.instructions+=2;NFSU2_TR(0x4cb932);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cb934:{NFSU2_TR(0x4cb934);
if(r1(R+518)){{goto L4cb93b;}}
}
B4cb936:L4cb936:{c.instructions+=2;NFSU2_TR(0x4cb936);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4cb939:{NFSU2_TR(0x4cb939);
{goto L4cb93d;}
}
B4cb93b:L4cb93b:{c.instructions+=1;NFSU2_TR(0x4cb93b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cb93d:L4cb93d:{c.instructions+=2;NFSU2_TR(0x4cb93d);
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
B4cb93f:{NFSU2_TR(0x4cb93f);
if(r1(R+518)){{goto L4cb969;}}
}
B4cb941:L4cb941:{c.instructions+=3;NFSU2_TR(0x4cb941);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4cb943:{NFSU2_TR(0x4cb943);
__builtin_memmove((R+4),(R+24),4);
}
B4cb945:{NFSU2_TR(0x4cb945);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb948ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4cb948:L4cb948:{c.instructions+=3;NFSU2_TR(0x4cb948);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4cb94a:{NFSU2_TR(0x4cb94a);
__builtin_memmove((R+4),(R+28),4);
}
B4cb94c:{NFSU2_TR(0x4cb94c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cb94full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4cb94f:L4cb94f:{c.instructions+=3;NFSU2_TR(0x4cb94f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cb952:{NFSU2_TR(0x4cb952);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cb954:{NFSU2_TR(0x4cb954);
if(r1(R+518)){{goto L4cb95b;}}
}
B4cb956:L4cb956:{c.instructions+=2;NFSU2_TR(0x4cb956);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cb959:{NFSU2_TR(0x4cb959);
{goto L4cb95d;}
}
B4cb95b:L4cb95b:{c.instructions+=1;NFSU2_TR(0x4cb95b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4cb95d:L4cb95d:{c.instructions+=3;NFSU2_TR(0x4cb95d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4cb960:{NFSU2_TR(0x4cb960);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cb962:{NFSU2_TR(0x4cb962);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cb930u);}goto L4cb930;}}
}
B4cb964:L4cb964:{c.instructions+=2;NFSU2_TR(0x4cb964);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B4cb967:{NFSU2_TR(0x4cb967);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cb932u);}goto L4cb932;}
}
B4cb969:L4cb969:{c.instructions+=4;NFSU2_TR(0x4cb969);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cb96a:{NFSU2_TR(0x4cb96a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cb96b:{NFSU2_TR(0x4cb96b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4cb96c:{NFSU2_TR(0x4cb96c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cb970:L4cb970:{c.instructions+=7;NFSU2_TR(0x4cb970);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cb973:{NFSU2_TR(0x4cb973);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cb975:{NFSU2_TR(0x4cb975);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb976:{NFSU2_TR(0x4cb976);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb977:{NFSU2_TR(0x4cb977);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb978:{NFSU2_TR(0x4cb978);
w4(R+0,u32(0x1ull));
}
B4cb97d:{NFSU2_TR(0x4cb97d);
if(r1(R+518)){{goto L4cb984;}}
}
B4cb97f:L4cb97f:{c.instructions+=2;NFSU2_TR(0x4cb97f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cb982:{NFSU2_TR(0x4cb982);
{goto L4cb986;}
}
B4cb984:L4cb984:{c.instructions+=1;NFSU2_TR(0x4cb984);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4cb986:L4cb986:{c.instructions+=4;NFSU2_TR(0x4cb986);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cb989:{NFSU2_TR(0x4cb989);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4cb98b:{NFSU2_TR(0x4cb98b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cb98d:{NFSU2_TR(0x4cb98d);
if(r1(R+518)){{goto L4cb994;}}
}
B4cb98f:L4cb98f:{c.instructions+=2;NFSU2_TR(0x4cb98f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cb992:{NFSU2_TR(0x4cb992);
{goto L4cb996;}
}
B4cb994:L4cb994:{c.instructions+=1;NFSU2_TR(0x4cb994);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4cb996:L4cb996:{c.instructions+=2;NFSU2_TR(0x4cb996);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4cb99a:{NFSU2_TR(0x4cb99a);
__builtin_memmove((R+12),(R+12),4);
}
B4cb9a0:L4cb9a0:{c.instructions+=2;NFSU2_TR(0x4cb9a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cb9a2:{NFSU2_TR(0x4cb9a2);
if(r1(R+518)){{goto L4cb9a9;}}
}
B4cb9a4:L4cb9a4:{c.instructions+=2;NFSU2_TR(0x4cb9a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cb9a7:{NFSU2_TR(0x4cb9a7);
{goto L4cb9ab;}
}
B4cb9a9:L4cb9a9:{c.instructions+=1;NFSU2_TR(0x4cb9a9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4cb9ab:L4cb9ab:{c.instructions+=2;NFSU2_TR(0x4cb9ab);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cb9ad:{NFSU2_TR(0x4cb9ad);
if(r1(R+518)){{goto L4cb9d6;}}
}
B4cb9af:L4cb9af:{c.instructions+=2;NFSU2_TR(0x4cb9af);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B4cb9b1:{NFSU2_TR(0x4cb9b1);
if(r1(R+518)){{goto L4cb9d8;}}
}
B4cb9b3:L4cb9b3:{c.instructions+=2;NFSU2_TR(0x4cb9b3);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4cb9b5:{NFSU2_TR(0x4cb9b5);
if(r1(R+518)){{goto L4cb9d8;}}
}
B4cb9b7:L4cb9b7:{c.instructions+=3;NFSU2_TR(0x4cb9b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cb9ba:{NFSU2_TR(0x4cb9ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cb9bc:{NFSU2_TR(0x4cb9bc);
if(r1(R+518)){{goto L4cb9c3;}}
}
B4cb9be:L4cb9be:{c.instructions+=2;NFSU2_TR(0x4cb9be);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cb9c1:{NFSU2_TR(0x4cb9c1);
{goto L4cb9c5;}
}
B4cb9c3:L4cb9c3:{c.instructions+=1;NFSU2_TR(0x4cb9c3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4cb9c5:L4cb9c5:{c.instructions+=4;NFSU2_TR(0x4cb9c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cb9c8:{NFSU2_TR(0x4cb9c8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4cb9c9:{NFSU2_TR(0x4cb9c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cb9cb:{NFSU2_TR(0x4cb9cb);
if(r1(R+518)){{goto L4cb9d2;}}
}
B4cb9cd:L4cb9cd:{c.instructions+=2;NFSU2_TR(0x4cb9cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4cb9d0:{NFSU2_TR(0x4cb9d0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cb9a0u);}goto L4cb9a0;}
}
B4cb9d2:L4cb9d2:{c.instructions+=2;NFSU2_TR(0x4cb9d2);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4cb9d4:{NFSU2_TR(0x4cb9d4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cb9a0u);}goto L4cb9a0;}
}
B4cb9d6:L4cb9d6:{c.instructions+=1;NFSU2_TR(0x4cb9d6);
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
B4cb9d8:L4cb9d8:{c.instructions+=4;NFSU2_TR(0x4cb9d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cb9d9:{NFSU2_TR(0x4cb9d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cb9da:{NFSU2_TR(0x4cb9da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4cb9db:{NFSU2_TR(0x4cb9db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cb9e0:L4cb9e0:{c.instructions+=7;NFSU2_TR(0x4cb9e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cb9e4:{NFSU2_TR(0x4cb9e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cb9e9:{NFSU2_TR(0x4cb9e9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb9ea:{NFSU2_TR(0x4cb9ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb9eb:{NFSU2_TR(0x4cb9eb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cb9ec:{NFSU2_TR(0x4cb9ec);
__builtin_memmove((R+12),(R+4),4);
}
B4cb9ee:{NFSU2_TR(0x4cb9ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cba40;}}
}
B4cb9f0:L4cb9f0:{c.instructions+=4;NFSU2_TR(0x4cb9f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cb9f3:{NFSU2_TR(0x4cb9f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cb9f5:{NFSU2_TR(0x4cb9f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cb9f8:{NFSU2_TR(0x4cb9f8);
if(r1(R+518)){{goto L4cb9ff;}}
}
B4cb9fa:L4cb9fa:{c.instructions+=2;NFSU2_TR(0x4cb9fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cb9fd:{NFSU2_TR(0x4cb9fd);
{goto L4cba01;}
}
B4cb9ff:L4cb9ff:{c.instructions+=1;NFSU2_TR(0x4cb9ff);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4cba01:L4cba01:{c.instructions+=2;NFSU2_TR(0x4cba01);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cba03:{NFSU2_TR(0x4cba03);
if(r1(R+518)){{goto L4cba0a;}}
}
B4cba05:L4cba05:{c.instructions+=2;NFSU2_TR(0x4cba05);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4cba08:{NFSU2_TR(0x4cba08);
{goto L4cba0c;}
}
B4cba0a:L4cba0a:{c.instructions+=1;NFSU2_TR(0x4cba0a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cba0c:L4cba0c:{c.instructions+=2;NFSU2_TR(0x4cba0c);
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
B4cba0e:{NFSU2_TR(0x4cba0e);
if(r1(R+518)){{goto L4cbaa3;}}
}
B4cba14:L4cba14:{c.instructions+=2;NFSU2_TR(0x4cba14);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4cba17:{NFSU2_TR(0x4cba17);
if(r1(R+518)){{goto L4cba25;}}
}
B4cba19:L4cba19:{c.instructions+=3;NFSU2_TR(0x4cba19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4cba1c:{NFSU2_TR(0x4cba1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cba1e:{NFSU2_TR(0x4cba1e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cb9ffu);}goto L4cb9ff;}}
}
B4cba20:L4cba20:{c.instructions+=2;NFSU2_TR(0x4cba20);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B4cba23:{NFSU2_TR(0x4cba23);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cba01u);}goto L4cba01;}
}
B4cba25:L4cba25:{c.instructions+=3;NFSU2_TR(0x4cba25);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cba26:{NFSU2_TR(0x4cba26);
__builtin_memmove((R+4),(R+12),4);
}
B4cba28:{NFSU2_TR(0x4cba28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cba2dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cb970u);}goto L4cb970;}
}
B4cba2d:L4cba2d:{c.instructions+=1;NFSU2_TR(0x4cba2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cba30:L4cba30:{c.instructions+=3;NFSU2_TR(0x4cba30);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4cba31:{NFSU2_TR(0x4cba31);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cba32:{NFSU2_TR(0x4cba32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cba37ull));
TAIL_STATIC(0x43be60u,43b);
}
B4cba37:L4cba37:{c.instructions+=2;NFSU2_TR(0x4cba37);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cba39:{NFSU2_TR(0x4cba39);
if(r1(R+518)){{goto L4cba85;}}
}
B4cba3b:L4cba3b:{c.instructions+=2;NFSU2_TR(0x4cba3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cba3e:{NFSU2_TR(0x4cba3e);
{goto L4cba87;}
}
B4cba40:L4cba40:{c.instructions+=2;NFSU2_TR(0x4cba40);
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
B4cba45:{NFSU2_TR(0x4cba45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cbaa3;}}
}
B4cba47:L4cba47:{c.instructions+=4;NFSU2_TR(0x4cba47);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cba4a:{NFSU2_TR(0x4cba4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cba4c:{NFSU2_TR(0x4cba4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cba4f:{NFSU2_TR(0x4cba4f);
if(r1(R+518)){{goto L4cba56;}}
}
B4cba51:L4cba51:{c.instructions+=2;NFSU2_TR(0x4cba51);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cba54:{NFSU2_TR(0x4cba54);
{goto L4cba58;}
}
B4cba56:L4cba56:{c.instructions+=1;NFSU2_TR(0x4cba56);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4cba58:L4cba58:{c.instructions+=2;NFSU2_TR(0x4cba58);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cba5a:{NFSU2_TR(0x4cba5a);
if(r1(R+518)){{goto L4cba61;}}
}
B4cba5c:L4cba5c:{c.instructions+=2;NFSU2_TR(0x4cba5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4cba5f:{NFSU2_TR(0x4cba5f);
{goto L4cba63;}
}
B4cba61:L4cba61:{c.instructions+=1;NFSU2_TR(0x4cba61);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cba63:L4cba63:{c.instructions+=2;NFSU2_TR(0x4cba63);
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
B4cba65:{NFSU2_TR(0x4cba65);
if(r1(R+518)){{goto L4cbaa3;}}
}
B4cba67:L4cba67:{c.instructions+=2;NFSU2_TR(0x4cba67);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4cba6a:{NFSU2_TR(0x4cba6a);
if(r1(R+518)){{goto L4cba78;}}
}
B4cba6c:L4cba6c:{c.instructions+=3;NFSU2_TR(0x4cba6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4cba6f:{NFSU2_TR(0x4cba6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cba71:{NFSU2_TR(0x4cba71);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cba56u);}goto L4cba56;}}
}
B4cba73:L4cba73:{c.instructions+=2;NFSU2_TR(0x4cba73);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B4cba76:{NFSU2_TR(0x4cba76);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cba58u);}goto L4cba58;}
}
B4cba78:L4cba78:{c.instructions+=3;NFSU2_TR(0x4cba78);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cba79:{NFSU2_TR(0x4cba79);
__builtin_memmove((R+4),(R+12),4);
}
B4cba7b:{NFSU2_TR(0x4cba7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cba80ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cb970u);}goto L4cb970;}
}
B4cba80:L4cba80:{c.instructions+=2;NFSU2_TR(0x4cba80);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cba83:{NFSU2_TR(0x4cba83);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cba30u);}goto L4cba30;}
}
B4cba85:L4cba85:{c.instructions+=1;NFSU2_TR(0x4cba85);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4cba87:L4cba87:{c.instructions+=3;NFSU2_TR(0x4cba87);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4cba8a:{NFSU2_TR(0x4cba8a);
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
B4cba8c:{NFSU2_TR(0x4cba8c);
if(r1(R+518)){{goto L4cbaa3;}}
}
B4cba8e:L4cba8e:{c.instructions+=5;NFSU2_TR(0x4cba8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cba91:{NFSU2_TR(0x4cba91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4cba93:{NFSU2_TR(0x4cba93);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cba94:{NFSU2_TR(0x4cba94);
__builtin_memmove((R+4),(R+28),4);
}
B4cba96:{NFSU2_TR(0x4cba96);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cba99ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4cba99:L4cba99:{c.instructions+=4;NFSU2_TR(0x4cba99);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cba9c:{NFSU2_TR(0x4cba9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4cba9e:{NFSU2_TR(0x4cba9e);
__builtin_memmove((R+4),(R+24),4);
}
B4cbaa0:{NFSU2_TR(0x4cbaa0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbaa3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4cbaa3:L4cbaa3:{c.instructions+=4;NFSU2_TR(0x4cbaa3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cbaa4:{NFSU2_TR(0x4cbaa4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cbaa5:{NFSU2_TR(0x4cbaa5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4cbaa6:{NFSU2_TR(0x4cbaa6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cbab0:L4cbab0:{c.instructions+=3;NFSU2_TR(0x4cbab0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbab1:{NFSU2_TR(0x4cbab1);
__builtin_memmove((R+24),(R+4),4);
}
B4cbab3:{NFSU2_TR(0x4cbab3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbab8ull));
TAIL_STATIC(0x440ec0u,440);
}
B4cbab8:L4cbab8:{c.instructions+=2;NFSU2_TR(0x4cbab8);
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
B4cbaba:{NFSU2_TR(0x4cbaba);
if(r1(R+518)){{goto L4cbad3;}}
}
B4cbabc:L4cbabc:{c.instructions+=9;NFSU2_TR(0x4cbabc);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cbac0:{NFSU2_TR(0x4cbac0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cbac3:{NFSU2_TR(0x4cbac3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4cbac5:{NFSU2_TR(0x4cbac5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4cbac7:{NFSU2_TR(0x4cbac7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cbaca:{NFSU2_TR(0x4cbaca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cbacd:{NFSU2_TR(0x4cbacd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4cbacf:{NFSU2_TR(0x4cbacf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cbad0:{NFSU2_TR(0x4cbad0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cbad3:L4cbad3:{c.instructions+=8;NFSU2_TR(0x4cbad3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4cbad5:{NFSU2_TR(0x4cbad5);
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
B4cbad7:{NFSU2_TR(0x4cbad7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4cbad9:{NFSU2_TR(0x4cbad9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cbadc:{NFSU2_TR(0x4cbadc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cbadf:{NFSU2_TR(0x4cbadf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4cbae1:{NFSU2_TR(0x4cbae1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cbae2:{NFSU2_TR(0x4cbae2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cbaf0:L4cbaf0:{c.instructions+=16;NFSU2_TR(0x4cbaf0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbaf2:{NFSU2_TR(0x4cbaf2);
u8 U[4];
w4(U+0,u32(0x772bbbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbaf7:{NFSU2_TR(0x4cbaf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cbafd:{NFSU2_TR(0x4cbafd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbafe:{NFSU2_TR(0x4cbafe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cbb05:{NFSU2_TR(0x4cbb05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbb06:{NFSU2_TR(0x4cbb06);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbb07:{NFSU2_TR(0x4cbb07);
__builtin_memmove((R+24),(R+4),4);
}
B4cbb09:{NFSU2_TR(0x4cbb09);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cbb0d:{NFSU2_TR(0x4cbb0d);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbb12:{NFSU2_TR(0x4cbb12);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbb14:{NFSU2_TR(0x4cbb14);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbb16:{NFSU2_TR(0x4cbb16);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4cbb1c:{NFSU2_TR(0x4cbb1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbb1d:{NFSU2_TR(0x4cbb1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cbb25:{NFSU2_TR(0x4cbb25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbb2aull));
TAIL_STATIC(0x75c401u,75c);
}
B4cbb2a:L4cbb2a:{c.instructions+=7;NFSU2_TR(0x4cbb2a);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbb2f:{NFSU2_TR(0x4cbb2f);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbb31:{NFSU2_TR(0x4cbb31);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbb33:{NFSU2_TR(0x4cbb33);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x30ull))));
}
B4cbb36:{NFSU2_TR(0x4cbb36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbb37:{NFSU2_TR(0x4cbb37);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cbb3f:{NFSU2_TR(0x4cbb3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbb44ull));
TAIL_STATIC(0x75c401u,75c);
}
B4cbb44:L4cbb44:{c.instructions+=5;NFSU2_TR(0x4cbb44);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cbb48:{NFSU2_TR(0x4cbb48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cbb49:{NFSU2_TR(0x4cbb49);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cbb50:{NFSU2_TR(0x4cbb50);
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
B4cbb53:{NFSU2_TR(0x4cbb53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cbb60:L4cbb60:{c.instructions+=3;NFSU2_TR(0x4cbb60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbb61:{NFSU2_TR(0x4cbb61);
__builtin_memmove((R+24),(R+4),4);
}
B4cbb63:{NFSU2_TR(0x4cbb63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbb68ull));
TAIL_STATIC(0x531610u,531);
}
B4cbb68:L4cbb68:{c.instructions+=2;NFSU2_TR(0x4cbb68);
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
B4cbb6d:{NFSU2_TR(0x4cbb6d);
if(r1(R+518)){{goto L4cbb78;}}
}
B4cbb6f:L4cbb6f:{c.instructions+=2;NFSU2_TR(0x4cbb6f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbb70:{NFSU2_TR(0x4cbb70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbb75ull));
TAIL_STATIC(0x575630u,575);
}
B4cbb75:L4cbb75:{c.instructions+=1;NFSU2_TR(0x4cbb75);
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
B4cbb78:L4cbb78:{c.instructions+=3;NFSU2_TR(0x4cbb78);
__builtin_memmove((R+0),(R+24),4);
}
B4cbb7a:{NFSU2_TR(0x4cbb7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cbb7b:{NFSU2_TR(0x4cbb7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cbb80:L4cbb80:{c.instructions+=3;NFSU2_TR(0x4cbb80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbb81:{NFSU2_TR(0x4cbb81);
__builtin_memmove((R+24),(R+4),4);
}
B4cbb83:{NFSU2_TR(0x4cbb83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbb88ull));
TAIL_STATIC(0x531620u,531);
}
B4cbb88:L4cbb88:{c.instructions+=2;NFSU2_TR(0x4cbb88);
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
B4cbb8d:{NFSU2_TR(0x4cbb8d);
if(r1(R+518)){{goto L4cbb98;}}
}
B4cbb8f:L4cbb8f:{c.instructions+=2;NFSU2_TR(0x4cbb8f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbb90:{NFSU2_TR(0x4cbb90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbb95ull));
TAIL_STATIC(0x575630u,575);
}
B4cbb95:L4cbb95:{c.instructions+=1;NFSU2_TR(0x4cbb95);
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
B4cbb98:L4cbb98:{c.instructions+=3;NFSU2_TR(0x4cbb98);
__builtin_memmove((R+0),(R+24),4);
}
B4cbb9a:{NFSU2_TR(0x4cbb9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cbb9b:{NFSU2_TR(0x4cbb9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cbba0:L4cbba0:{c.instructions+=13;NFSU2_TR(0x4cbba0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbba2:{NFSU2_TR(0x4cbba2);
u8 U[4];
w4(U+0,u32(0x77414bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbba7:{NFSU2_TR(0x4cbba7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cbbad:{NFSU2_TR(0x4cbbad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbbae:{NFSU2_TR(0x4cbbae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cbbb5:{NFSU2_TR(0x4cbbb5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbbb6:{NFSU2_TR(0x4cbbb6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbbb7:{NFSU2_TR(0x4cbbb7);
__builtin_memmove((R+24),(R+4),4);
}
B4cbbb9:{NFSU2_TR(0x4cbbb9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cbbbd:{NFSU2_TR(0x4cbbbd);
u8 U[4];
w4(U+0,u32(0x795cb4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4cbbc3:{NFSU2_TR(0x4cbbc3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cbbc6:{NFSU2_TR(0x4cbbc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cbbce:{NFSU2_TR(0x4cbbce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbbd3ull));
TAIL_STATIC(0x4358e0u,435);
}
B4cbbd3:L4cbbd3:{c.instructions+=3;NFSU2_TR(0x4cbbd3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cbbd6:{NFSU2_TR(0x4cbbd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cbbde:{NFSU2_TR(0x4cbbde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbbe3ull));
TAIL_STATIC(0x4358e0u,435);
}
B4cbbe3:L4cbbe3:{c.instructions+=5;NFSU2_TR(0x4cbbe3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cbbe7:{NFSU2_TR(0x4cbbe7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cbbe8:{NFSU2_TR(0x4cbbe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cbbef:{NFSU2_TR(0x4cbbef);
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
B4cbbf2:{NFSU2_TR(0x4cbbf2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cbc00:L4cbc00:{c.instructions+=3;NFSU2_TR(0x4cbc00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbc01:{NFSU2_TR(0x4cbc01);
__builtin_memmove((R+24),(R+4),4);
}
B4cbc03:{NFSU2_TR(0x4cbc03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbc08ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cbba0u);}goto L4cbba0;}
}
B4cbc08:L4cbc08:{c.instructions+=2;NFSU2_TR(0x4cbc08);
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
B4cbc0d:{NFSU2_TR(0x4cbc0d);
if(r1(R+518)){{goto L4cbc18;}}
}
B4cbc0f:L4cbc0f:{c.instructions+=2;NFSU2_TR(0x4cbc0f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbc10:{NFSU2_TR(0x4cbc10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbc15ull));
TAIL_STATIC(0x575630u,575);
}
B4cbc15:L4cbc15:{c.instructions+=1;NFSU2_TR(0x4cbc15);
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
B4cbc18:L4cbc18:{c.instructions+=3;NFSU2_TR(0x4cbc18);
__builtin_memmove((R+0),(R+24),4);
}
B4cbc1a:{NFSU2_TR(0x4cbc1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cbc1b:{NFSU2_TR(0x4cbc1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cbc20:L4cbc20:{c.instructions+=3;NFSU2_TR(0x4cbc20);
u8 U[4];
w4(U+0,u32(0x795cbcull));
s4(u32(r4(R+4)),r4(U+0));
}
B4cbc26:{NFSU2_TR(0x4cbc26);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B4cbc29:{NFSU2_TR(0x4cbc29);
TAIL_STATIC(0x4358e0u,435);
}
B4cbc30:L4cbc30:{c.instructions+=13;NFSU2_TR(0x4cbc30);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbc32:{NFSU2_TR(0x4cbc32);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbc37:{NFSU2_TR(0x4cbc37);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cbc3d:{NFSU2_TR(0x4cbc3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbc3e:{NFSU2_TR(0x4cbc3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cbc45:{NFSU2_TR(0x4cbc45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbc46:{NFSU2_TR(0x4cbc46);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbc47:{NFSU2_TR(0x4cbc47);
__builtin_memmove((R+24),(R+4),4);
}
B4cbc49:{NFSU2_TR(0x4cbc49);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cbc4d:{NFSU2_TR(0x4cbc4d);
u8 U[4];
w4(U+0,u32(0x795cdcull));
s4(u32(r4(R+24)),r4(U+0));
}
B4cbc53:{NFSU2_TR(0x4cbc53);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cbc56:{NFSU2_TR(0x4cbc56);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cbc5e:{NFSU2_TR(0x4cbc5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbc63ull));
TAIL_STATIC(0x4358e0u,435);
}
B4cbc63:L4cbc63:{c.instructions+=3;NFSU2_TR(0x4cbc63);
__builtin_memmove((R+4),(R+24),4);
}
B4cbc65:{NFSU2_TR(0x4cbc65);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cbc6d:{NFSU2_TR(0x4cbc6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbc72ull));
TAIL_STATIC(0x510d40u,510);
}
B4cbc72:L4cbc72:{c.instructions+=5;NFSU2_TR(0x4cbc72);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cbc76:{NFSU2_TR(0x4cbc76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cbc77:{NFSU2_TR(0x4cbc77);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cbc7e:{NFSU2_TR(0x4cbc7e);
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
B4cbc81:{NFSU2_TR(0x4cbc81);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cbc90:L4cbc90:{c.instructions+=3;NFSU2_TR(0x4cbc90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbc91:{NFSU2_TR(0x4cbc91);
__builtin_memmove((R+24),(R+4),4);
}
B4cbc93:{NFSU2_TR(0x4cbc93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbc98ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cbc30u);}goto L4cbc30;}
}
B4cbc98:L4cbc98:{c.instructions+=2;NFSU2_TR(0x4cbc98);
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
B4cbc9d:{NFSU2_TR(0x4cbc9d);
if(r1(R+518)){{goto L4cbca8;}}
}
B4cbc9f:L4cbc9f:{c.instructions+=2;NFSU2_TR(0x4cbc9f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbca0:{NFSU2_TR(0x4cbca0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbca5ull));
TAIL_STATIC(0x575630u,575);
}
B4cbca5:L4cbca5:{c.instructions+=1;NFSU2_TR(0x4cbca5);
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
B4cbca8:L4cbca8:{c.instructions+=3;NFSU2_TR(0x4cbca8);
__builtin_memmove((R+0),(R+24),4);
}
B4cbcaa:{NFSU2_TR(0x4cbcaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cbcab:{NFSU2_TR(0x4cbcab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cbcb0:L4cbcb0:{c.instructions+=17;NFSU2_TR(0x4cbcb0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbcb2:{NFSU2_TR(0x4cbcb2);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbcb7:{NFSU2_TR(0x4cbcb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cbcbd:{NFSU2_TR(0x4cbcbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbcbe:{NFSU2_TR(0x4cbcbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cbcc5:{NFSU2_TR(0x4cbcc5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbcc6:{NFSU2_TR(0x4cbcc6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbcc7:{NFSU2_TR(0x4cbcc7);
__builtin_memmove((R+24),(R+4),4);
}
B4cbcc9:{NFSU2_TR(0x4cbcc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cbccd:{NFSU2_TR(0x4cbccd);
u8 U[4];
w4(U+0,u32(0x795cf0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4cbcd3:{NFSU2_TR(0x4cbcd3);
w4(R+0,u32(0x78f544ull));
}
B4cbcd8:{NFSU2_TR(0x4cbcd8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cbcdb:{NFSU2_TR(0x4cbcdb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cbce3:{NFSU2_TR(0x4cbce3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cbce9:{NFSU2_TR(0x4cbce9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cbcef:{NFSU2_TR(0x4cbcef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cbcf5:{NFSU2_TR(0x4cbcf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbcfaull));
TAIL_STATIC(0x479100u,479);
}
B4cbcfa:L4cbcfa:{c.instructions+=3;NFSU2_TR(0x4cbcfa);
__builtin_memmove((R+4),(R+24),4);
}
B4cbcfc:{NFSU2_TR(0x4cbcfc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cbd04:{NFSU2_TR(0x4cbd04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbd09ull));
TAIL_STATIC(0x510d40u,510);
}
B4cbd09:L4cbd09:{c.instructions+=5;NFSU2_TR(0x4cbd09);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cbd0d:{NFSU2_TR(0x4cbd0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cbd0e:{NFSU2_TR(0x4cbd0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cbd15:{NFSU2_TR(0x4cbd15);
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
B4cbd18:{NFSU2_TR(0x4cbd18);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cbd20:L4cbd20:{c.instructions+=13;NFSU2_TR(0x4cbd20);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbd22:{NFSU2_TR(0x4cbd22);
u8 U[4];
w4(U+0,u32(0x77419dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbd27:{NFSU2_TR(0x4cbd27);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cbd2d:{NFSU2_TR(0x4cbd2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbd2e:{NFSU2_TR(0x4cbd2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cbd35:{NFSU2_TR(0x4cbd35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbd36:{NFSU2_TR(0x4cbd36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbd37:{NFSU2_TR(0x4cbd37);
__builtin_memmove((R+24),(R+4),4);
}
B4cbd39:{NFSU2_TR(0x4cbd39);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cbd3d:{NFSU2_TR(0x4cbd3d);
u8 U[4];
w4(U+0,u32(0x795d00ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4cbd43:{NFSU2_TR(0x4cbd43);
w4(R+4,u32(0x8637d0ull));
}
B4cbd48:{NFSU2_TR(0x4cbd48);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cbd50:{NFSU2_TR(0x4cbd50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbd55ull));
TAIL_STATIC(0x53d8c0u,53d);
}
B4cbd55:L4cbd55:{c.instructions+=7;NFSU2_TR(0x4cbd55);
w4(R+0,u32(0x78f544ull));
}
B4cbd5a:{NFSU2_TR(0x4cbd5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cbd5d:{NFSU2_TR(0x4cbd5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cbd63:{NFSU2_TR(0x4cbd63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cbd69:{NFSU2_TR(0x4cbd69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cbd6f:{NFSU2_TR(0x4cbd6f);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cbd74:{NFSU2_TR(0x4cbd74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbd79ull));
TAIL_STATIC(0x479100u,479);
}
B4cbd79:L4cbd79:{c.instructions+=3;NFSU2_TR(0x4cbd79);
__builtin_memmove((R+4),(R+24),4);
}
B4cbd7b:{NFSU2_TR(0x4cbd7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cbd83:{NFSU2_TR(0x4cbd83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbd88ull));
TAIL_STATIC(0x510d40u,510);
}
B4cbd88:L4cbd88:{c.instructions+=5;NFSU2_TR(0x4cbd88);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cbd8c:{NFSU2_TR(0x4cbd8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cbd8d:{NFSU2_TR(0x4cbd8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cbd94:{NFSU2_TR(0x4cbd94);
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
B4cbd97:{NFSU2_TR(0x4cbd97);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cbda0:L4cbda0:{c.instructions+=10;NFSU2_TR(0x4cbda0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbda1:{NFSU2_TR(0x4cbda1);
__builtin_memmove((R+20),(R+16),4);
}
B4cbda3:{NFSU2_TR(0x4cbda3);
__builtin_memmove((R+0),gp(0x862838),4);
}
B4cbda8:{NFSU2_TR(0x4cbda8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f4328ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B4cbdaf:{NFSU2_TR(0x4cbdaf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbdb0:{NFSU2_TR(0x4cbdb0);
__builtin_memmove((R+24),(R+4),4);
}
B4cbdb2:{NFSU2_TR(0x4cbdb2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cbdb4:{NFSU2_TR(0x4cbdb4);
w4(R+4,u32(0x7f42c8ull));
}
B4cbdb9:{NFSU2_TR(0x4cbdb9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbdba:{NFSU2_TR(0x4cbdba);
__builtin_memmove((R+12),(R+12),4);
}
B4cbdc0:L4cbdc0:{c.instructions+=2;NFSU2_TR(0x4cbdc0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cbdc2:{NFSU2_TR(0x4cbdc2);
if(r1(R+518)){{goto L4cbde4;}}
}
B4cbdc4:L4cbdc4:{c.instructions+=4;NFSU2_TR(0x4cbdc4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4cbdc5:{NFSU2_TR(0x4cbdc5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B4cbdc8:{NFSU2_TR(0x4cbdc8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4cbdcb:{NFSU2_TR(0x4cbdcb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cbdc0u);}goto L4cbdc0;}}
}
B4cbdcd:L4cbdcd:{c.instructions+=1;NFSU2_TR(0x4cbdcd);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B4cbdd0:L4cbdd0:{c.instructions+=3;NFSU2_TR(0x4cbdd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cbdd3:{NFSU2_TR(0x4cbdd3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cbdd6:{NFSU2_TR(0x4cbdd6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cbde8;}}
}
B4cbdd8:L4cbdd8:{c.instructions+=2;NFSU2_TR(0x4cbdd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4cbddb:{NFSU2_TR(0x4cbddb);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L4cbde0;}}
}
B4cbddd:L4cbddd:{c.instructions+=1;NFSU2_TR(0x4cbddd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cbde0:L4cbde0:{c.instructions+=2;NFSU2_TR(0x4cbde0);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbde2:{NFSU2_TR(0x4cbde2);
{goto L4cbdf2;}
}
B4cbde4:L4cbde4:{c.instructions+=2;NFSU2_TR(0x4cbde4);
__builtin_memmove((R+28),(R+0),4);
}
B4cbde6:{NFSU2_TR(0x4cbde6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cbdd0u);}goto L4cbdd0;}
}
B4cbde8:L4cbde8:{c.instructions+=2;NFSU2_TR(0x4cbde8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cbdeb:{NFSU2_TR(0x4cbdeb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cbdfa;}}
}
B4cbded:L4cbded:{c.instructions+=2;NFSU2_TR(0x4cbded);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B4cbdf0:{NFSU2_TR(0x4cbdf0);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbdf2:L4cbdf2:{c.instructions+=1;NFSU2_TR(0x4cbdf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbdf7ull));
TAIL_STATIC(0x50d180u,50d);
}
B4cbdf7:L4cbdf7:{c.instructions+=1;NFSU2_TR(0x4cbdf7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cbdfa:L4cbdfa:{c.instructions+=7;NFSU2_TR(0x4cbdfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cbdfd:{NFSU2_TR(0x4cbdfd);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B4cbdfe:{NFSU2_TR(0x4cbdfe);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4cbdff:{NFSU2_TR(0x4cbdff);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x4cbdff);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x4cbdff);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B4cbe01:{NFSU2_TR(0x4cbe01);
__builtin_memmove((R+4),(R+24),4);
}
B4cbe03:{NFSU2_TR(0x4cbe03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cbe06:{NFSU2_TR(0x4cbe06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbe0bull));
TAIL_STATIC(0x4b09e0u,4b0);
}
B4cbe0b:L4cbe0b:{c.instructions+=8;NFSU2_TR(0x4cbe0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cbe0e:{NFSU2_TR(0x4cbe0e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B4cbe11:{NFSU2_TR(0x4cbe11);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7f42d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cbe17:{NFSU2_TR(0x4cbe17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cbe1a:{NFSU2_TR(0x4cbe1a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbe1b:{NFSU2_TR(0x4cbe1b);
u8 U[4];
w4(U+0,u32(0x42faad5aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbe20:{NFSU2_TR(0x4cbe20);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbe21:{NFSU2_TR(0x4cbe21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbe26ull));
TAIL_STATIC(0x537a10u,537);
}
B4cbe26:L4cbe26:{c.instructions+=3;NFSU2_TR(0x4cbe26);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4cbe29:{NFSU2_TR(0x4cbe29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbe2a:{NFSU2_TR(0x4cbe2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbe2full));
TAIL_STATIC(0x50c900u,50c);
}
B4cbe2f:L4cbe2f:{c.instructions+=3;NFSU2_TR(0x4cbe2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cbe32:{NFSU2_TR(0x4cbe32);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbe33:{NFSU2_TR(0x4cbe33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbe38ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4cbe38:L4cbe38:{c.instructions+=5;NFSU2_TR(0x4cbe38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cbe3b:{NFSU2_TR(0x4cbe3b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4cbe3e:{NFSU2_TR(0x4cbe3e);
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
B4cbe40:{NFSU2_TR(0x4cbe40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cbe41:{NFSU2_TR(0x4cbe41);
if(r1(R+518)){{goto L4cbe6a;}}
}
B4cbe43:L4cbe43:{c.instructions+=3;NFSU2_TR(0x4cbe43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbe44:{NFSU2_TR(0x4cbe44);
__builtin_memmove((R+4),(R+24),4);
}
B4cbe46:{NFSU2_TR(0x4cbe46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbe4bull));
TAIL_STATIC(0x4967f0u,496);
}
B4cbe4b:L4cbe4b:{c.instructions+=5;NFSU2_TR(0x4cbe4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cbe4e:{NFSU2_TR(0x4cbe4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cbe51:{NFSU2_TR(0x4cbe51);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cbe54:{NFSU2_TR(0x4cbe54);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbe55:{NFSU2_TR(0x4cbe55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbe5aull));
TAIL_STATIC(0x496760u,496);
}
B4cbe5a:L4cbe5a:{c.instructions+=2;NFSU2_TR(0x4cbe5a);
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
B4cbe5c:{NFSU2_TR(0x4cbe5c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cbe6a;}}
}
B4cbe5e:L4cbe5e:{c.instructions+=3;NFSU2_TR(0x4cbe5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cbe61:{NFSU2_TR(0x4cbe61);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbe62:{NFSU2_TR(0x4cbe62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbe67ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4cbe67:L4cbe67:{c.instructions+=1;NFSU2_TR(0x4cbe67);
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
B4cbe6a:L4cbe6a:{c.instructions+=3;NFSU2_TR(0x4cbe6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cbe6b:{NFSU2_TR(0x4cbe6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4cbe6c:{NFSU2_TR(0x4cbe6c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cbe70:L4cbe70:{c.instructions+=6;NFSU2_TR(0x4cbe70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbe71:{NFSU2_TR(0x4cbe71);
__builtin_memmove((R+24),(R+4),4);
}
B4cbe73:{NFSU2_TR(0x4cbe73);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cbe77:{NFSU2_TR(0x4cbe77);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cbe7a:{NFSU2_TR(0x4cbe7a);
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4cbe7d:{NFSU2_TR(0x4cbe7d);
if(r1(R+518)){{goto L4cbeab;}}
}
B4cbe7f:L4cbe7f:{c.instructions+=2;NFSU2_TR(0x4cbe7f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4cbe80:{NFSU2_TR(0x4cbe80);
if(r1(R+518)){{goto L4cbe95;}}
}
B4cbe82:L4cbe82:{c.instructions+=2;NFSU2_TR(0x4cbe82);
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
B4cbe83:{NFSU2_TR(0x4cbe83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cbed1;}}
}
B4cbe85:L4cbe85:{c.instructions+=4;NFSU2_TR(0x4cbe85);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cbe88:{NFSU2_TR(0x4cbe88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cbe8b:{NFSU2_TR(0x4cbe8b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbe8c:{NFSU2_TR(0x4cbe8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbe91ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cbda0u);}goto L4cbda0;}
}
B4cbe91:L4cbe91:{c.instructions+=2;NFSU2_TR(0x4cbe91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cbe92:{NFSU2_TR(0x4cbe92);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cbe95:L4cbe95:{c.instructions+=4;NFSU2_TR(0x4cbe95);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cbe98:{NFSU2_TR(0x4cbe98);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbe99:{NFSU2_TR(0x4cbe99);
__builtin_memmove((R+4),(R+24),4);
}
B4cbe9b:{NFSU2_TR(0x4cbe9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbea0ull));
TAIL_STATIC(0x4b0e70u,4b0);
}
B4cbea0:L4cbea0:{c.instructions+=2;NFSU2_TR(0x4cbea0);
__builtin_memmove((R+4),(R+24),4);
}
B4cbea2:{NFSU2_TR(0x4cbea2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbea7ull));
TAIL_STATIC(0x4b0ef0u,4b0);
}
B4cbea7:L4cbea7:{c.instructions+=2;NFSU2_TR(0x4cbea7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cbea8:{NFSU2_TR(0x4cbea8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cbeab:L4cbeab:{c.instructions+=5;NFSU2_TR(0x4cbeab);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cbeae:{NFSU2_TR(0x4cbeae);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cbeb1:{NFSU2_TR(0x4cbeb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cbeb4:{NFSU2_TR(0x4cbeb4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbeb5:{NFSU2_TR(0x4cbeb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbebaull));
TAIL_STATIC(0x4964d0u,496);
}
B4cbeba:L4cbeba:{c.instructions+=3;NFSU2_TR(0x4cbeba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cbebd:{NFSU2_TR(0x4cbebd);
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
B4cbebf:{NFSU2_TR(0x4cbebf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cbed1;}}
}
B4cbec1:L4cbec1:{c.instructions+=3;NFSU2_TR(0x4cbec1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cbec4:{NFSU2_TR(0x4cbec4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbec5:{NFSU2_TR(0x4cbec5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbecaull));
TAIL_STATIC(0x4967f0u,496);
}
B4cbeca:L4cbeca:{c.instructions+=2;NFSU2_TR(0x4cbeca);
__builtin_memmove((R+4),(R+24),4);
}
B4cbecc:{NFSU2_TR(0x4cbecc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbed1ull));
TAIL_STATIC(0x4b10c0u,4b1);
}
B4cbed1:L4cbed1:{c.instructions+=2;NFSU2_TR(0x4cbed1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cbed2:{NFSU2_TR(0x4cbed2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cbee0:L4cbee0:{c.instructions+=12;NFSU2_TR(0x4cbee0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbee1:{NFSU2_TR(0x4cbee1);
__builtin_memmove((R+20),(R+16),4);
}
B4cbee3:{NFSU2_TR(0x4cbee3);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4cbee6:{NFSU2_TR(0x4cbee6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbee7:{NFSU2_TR(0x4cbee7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbee8:{NFSU2_TR(0x4cbee8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbee9:{NFSU2_TR(0x4cbee9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4cbeec:{NFSU2_TR(0x4cbeec);
__builtin_memmove((R+28),(R+4),4);
}
B4cbeee:{NFSU2_TR(0x4cbeee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbeef:{NFSU2_TR(0x4cbeef);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cbef2:{NFSU2_TR(0x4cbef2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbef3:{NFSU2_TR(0x4cbef3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbef8ull));
TAIL_STATIC(0x50cd70u,50c);
}
B4cbef8:L4cbef8:{c.instructions+=6;NFSU2_TR(0x4cbef8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4cbefb:{NFSU2_TR(0x4cbefb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4cbefe:{NFSU2_TR(0x4cbefe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4cbf01:{NFSU2_TR(0x4cbf01);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cbf03:{NFSU2_TR(0x4cbf03);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cbf07:{NFSU2_TR(0x4cbf07);
if(r1(R+518)){{goto L4cbf61;}}
}
B4cbf09:L4cbf09:{c.instructions+=1;NFSU2_TR(0x4cbf09);
__builtin_memmove((R+16),(R+16),4);
}
B4cbf10:L4cbf10:{c.instructions+=3;NFSU2_TR(0x4cbf10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cbf13:{NFSU2_TR(0x4cbf13);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbf14:{NFSU2_TR(0x4cbf14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbf19ull));
TAIL_STATIC(0x52d100u,52d);
}
B4cbf19:L4cbf19:{c.instructions+=3;NFSU2_TR(0x4cbf19);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cbf1c:{NFSU2_TR(0x4cbf1c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cbf1e:{NFSU2_TR(0x4cbf1e);
if(r1(R+518)){{goto L4cbf29;}}
}
B4cbf20:L4cbf20:{c.instructions+=3;NFSU2_TR(0x4cbf20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cbf23:{NFSU2_TR(0x4cbf23);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbf24:{NFSU2_TR(0x4cbf24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbf29ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cbe70u);}goto L4cbe70;}
}
B4cbf29:L4cbf29:{c.instructions+=7;NFSU2_TR(0x4cbf29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cbf2c:{NFSU2_TR(0x4cbf2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cbf2f:{NFSU2_TR(0x4cbf2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cbf32:{NFSU2_TR(0x4cbf32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbf33:{NFSU2_TR(0x4cbf33);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbf34:{NFSU2_TR(0x4cbf34);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbf35:{NFSU2_TR(0x4cbf35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbf3aull));
TAIL_STATIC(0x52d020u,52d);
}
B4cbf3a:L4cbf3a:{c.instructions+=3;NFSU2_TR(0x4cbf3a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4cbf3d:{NFSU2_TR(0x4cbf3d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cbf3f:{NFSU2_TR(0x4cbf3f);
if(r1(R+518)){{goto L4cbf54;}}
}
B4cbf41:L4cbf41:{c.instructions+=2;NFSU2_TR(0x4cbf41);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+24))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4cbf43:{NFSU2_TR(0x4cbf43);
if(r1(R+518)){{goto L4cbf50;}}
}
B4cbf45:L4cbf45:{c.instructions+=4;NFSU2_TR(0x4cbf45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cbf48:{NFSU2_TR(0x4cbf48);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbf49:{NFSU2_TR(0x4cbf49);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+28)),r4(U+0));
}
B4cbf4b:{NFSU2_TR(0x4cbf4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbf50ull));
TAIL_STATIC(0x4b1170u,4b1);
}
B4cbf50:L4cbf50:{c.instructions+=1;NFSU2_TR(0x4cbf50);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cbf54:L4cbf54:{c.instructions+=3;NFSU2_TR(0x4cbf54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4cbf56:{NFSU2_TR(0x4cbf56);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cbf58:{NFSU2_TR(0x4cbf58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cbf10u);}goto L4cbf10;}}
}
B4cbf5a:L4cbf5a:{c.instructions+=3;NFSU2_TR(0x4cbf5a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4cbf5d:{NFSU2_TR(0x4cbf5d);
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
B4cbf5f:{NFSU2_TR(0x4cbf5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cbf77;}}
}
B4cbf61:L4cbf61:{c.instructions+=4;NFSU2_TR(0x4cbf61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4cbf64:{NFSU2_TR(0x4cbf64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cbf67:{NFSU2_TR(0x4cbf67);
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
B4cbf69:{NFSU2_TR(0x4cbf69);
if(r1(R+518)){{goto L4cbf70;}}
}
B4cbf6b:L4cbf6b:{c.instructions+=1;NFSU2_TR(0x4cbf6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbf70ull));
TAIL_STATIC(0x496b20u,496);
}
B4cbf70:L4cbf70:{c.instructions+=1;NFSU2_TR(0x4cbf70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cbf77:L4cbf77:{c.instructions+=6;NFSU2_TR(0x4cbf77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cbf78:{NFSU2_TR(0x4cbf78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cbf79:{NFSU2_TR(0x4cbf79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4cbf7a:{NFSU2_TR(0x4cbf7a);
__builtin_memmove((R+16),(R+20),4);
}
B4cbf7c:{NFSU2_TR(0x4cbf7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4cbf7d:{NFSU2_TR(0x4cbf7d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cbf80:L4cbf80:{c.instructions+=8;NFSU2_TR(0x4cbf80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B4cbf83:{NFSU2_TR(0x4cbf83);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbf84:{NFSU2_TR(0x4cbf84);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbf85:{NFSU2_TR(0x4cbf85);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbf86:{NFSU2_TR(0x4cbf86);
__builtin_memmove((R+24),(R+4),4);
}
B4cbf88:{NFSU2_TR(0x4cbf88);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbf8a:{NFSU2_TR(0x4cbf8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cbf8e:{NFSU2_TR(0x4cbf8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbf93ull));
TAIL_STATIC(0x575620u,575);
}
B4cbf93:L4cbf93:{c.instructions+=4;NFSU2_TR(0x4cbf93);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4cbf95:{NFSU2_TR(0x4cbf95);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cbf98:{NFSU2_TR(0x4cbf98);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cbf9a:{NFSU2_TR(0x4cbf9a);
if(r1(R+518)){{goto L4cbfcf;}}
}
B4cbf9c:L4cbf9c:{c.instructions+=14;NFSU2_TR(0x4cbf9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cbf9f:{NFSU2_TR(0x4cbf9f);
u8 U[4];
w4(U+0,u32(0x79b9d4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4cbfa5:{NFSU2_TR(0x4cbfa5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4cbfa7:{NFSU2_TR(0x4cbfa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cbfaa:{NFSU2_TR(0x4cbfaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cbfad:{NFSU2_TR(0x4cbfad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cbfb0:{NFSU2_TR(0x4cbfb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cbfb3:{NFSU2_TR(0x4cbfb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cbfb6:{NFSU2_TR(0x4cbfb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cbfb9:{NFSU2_TR(0x4cbfb9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cbfbd:{NFSU2_TR(0x4cbfbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0x78f228ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cbfc4:{NFSU2_TR(0x4cbfc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
w4(U+4,u32(0x78f21cull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cbfcb:{NFSU2_TR(0x4cbfcb);
__builtin_memmove((R+28),(R+0),4);
}
B4cbfcd:{NFSU2_TR(0x4cbfcd);
{goto L4cbfd1;}
}
B4cbfcf:L4cbfcf:{c.instructions+=1;NFSU2_TR(0x4cbfcf);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4cbfd1:L4cbfd1:{c.instructions+=4;NFSU2_TR(0x4cbfd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cbfd4:{NFSU2_TR(0x4cbfd4);
u8 U[4];
w4(U+0,u32(0xc8e97c9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbfd9:{NFSU2_TR(0x4cbfd9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbfda:{NFSU2_TR(0x4cbfda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbfdfull));
TAIL_STATIC(0x537a10u,537);
}
B4cbfdf:L4cbfdf:{c.instructions+=3;NFSU2_TR(0x4cbfdf);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cbfe1:{NFSU2_TR(0x4cbfe1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cbfe5:{NFSU2_TR(0x4cbfe5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cbfeaull));
TAIL_STATIC(0x575620u,575);
}
B4cbfea:L4cbfea:{c.instructions+=3;NFSU2_TR(0x4cbfea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4cbfed:{NFSU2_TR(0x4cbfed);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cbfef:{NFSU2_TR(0x4cbfef);
if(r1(R+518)){TAIL_STATIC(0x4cc003u,4cc);}
}
B4cbff1:L4cbff1:{c.instructions+=4;NFSU2_TR(0x4cbff1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cbff5:{NFSU2_TR(0x4cbff5);
u8 U[4];
w4(U+0,u32(0x790c2cull));
s4(u32(r4(R+0)),r4(U+0));
}
B4cbffb:{NFSU2_TR(0x4cbffb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cbffe:{NFSU2_TR(0x4cbffe);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
TAIL_STATIC(0x4cc001u,4cc);
}
XIT:NFSU2_TR_EXIT(0x4cb,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
