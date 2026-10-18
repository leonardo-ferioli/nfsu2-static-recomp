#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_6c1(u8* __restrict R,Cpu& c);
u32 body_6ca(u8* __restrict R,Cpu& c);
u32 body_6cc(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6cb,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6cb,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6cb(u8* __restrict R,Cpu& c);
u32 page_6cb(Cpu& c){return body_6cb(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6cb(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6cb002:goto L6cb002;
case 0x6cb005:c.instructions+=3;goto B6cb005;
case 0x6cb008:c.instructions+=2;goto B6cb008;
case 0x6cb00b:c.instructions+=1;goto B6cb00b;
case 0x6cb011:goto L6cb011;
case 0x6cb014:c.instructions+=7;goto B6cb014;
case 0x6cb016:c.instructions+=6;goto B6cb016;
case 0x6cb019:c.instructions+=5;goto B6cb019;
case 0x6cb01c:c.instructions+=4;goto B6cb01c;
case 0x6cb01f:c.instructions+=3;goto B6cb01f;
case 0x6cb022:c.instructions+=2;goto B6cb022;
case 0x6cb025:c.instructions+=1;goto B6cb025;
case 0x6cb02b:goto L6cb02b;
case 0x6cb02e:c.instructions+=1;goto B6cb02e;
case 0x6cb030:goto L6cb030;
case 0x6cb036:c.instructions+=1;goto B6cb036;
case 0x6cb03c:goto L6cb03c;
case 0x6cb03f:c.instructions+=3;goto B6cb03f;
case 0x6cb041:c.instructions+=2;goto B6cb041;
case 0x6cb044:c.instructions+=1;goto B6cb044;
case 0x6cb046:goto L6cb046;
case 0x6cb049:c.instructions+=2;goto B6cb049;
case 0x6cb04c:c.instructions+=1;goto B6cb04c;
case 0x6cb04e:goto L6cb04e;
case 0x6cb051:goto L6cb051;
case 0x6cb052:c.instructions+=1;goto B6cb052;
case 0x6cb057:goto L6cb057;
case 0x6cb059:c.instructions+=1;goto B6cb059;
case 0x6cb05f:goto L6cb05f;
case 0x6cb063:c.instructions+=1;goto B6cb063;
case 0x6cb069:goto L6cb069;
case 0x6cb06c:c.instructions+=1;goto B6cb06c;
case 0x6cb06e:goto L6cb06e;
case 0x6cb070:c.instructions+=3;goto B6cb070;
case 0x6cb071:c.instructions+=2;goto B6cb071;
case 0x6cb073:c.instructions+=1;goto B6cb073;
case 0x6cb078:goto L6cb078;
case 0x6cb07a:c.instructions+=1;goto B6cb07a;
case 0x6cb080:goto L6cb080;
case 0x6cb081:c.instructions+=2;goto B6cb081;
case 0x6cb083:c.instructions+=1;goto B6cb083;
case 0x6cb088:goto L6cb088;
case 0x6cb08a:c.instructions+=1;goto B6cb08a;
case 0x6cb090:goto L6cb090;
case 0x6cb093:c.instructions+=23;goto B6cb093;
case 0x6cb094:c.instructions+=22;goto B6cb094;
case 0x6cb095:c.instructions+=21;goto B6cb095;
case 0x6cb096:c.instructions+=20;goto B6cb096;
case 0x6cb099:c.instructions+=19;goto B6cb099;
case 0x6cb09a:c.instructions+=18;goto B6cb09a;
case 0x6cb09d:c.instructions+=17;goto B6cb09d;
case 0x6cb0a0:c.instructions+=16;goto B6cb0a0;
case 0x6cb0a3:c.instructions+=15;goto B6cb0a3;
case 0x6cb0a6:c.instructions+=14;goto B6cb0a6;
case 0x6cb0a7:c.instructions+=13;goto B6cb0a7;
case 0x6cb0ad:c.instructions+=12;goto B6cb0ad;
case 0x6cb0ae:c.instructions+=11;goto B6cb0ae;
case 0x6cb0b4:c.instructions+=10;goto B6cb0b4;
case 0x6cb0b5:c.instructions+=9;goto B6cb0b5;
case 0x6cb0b8:c.instructions+=8;goto B6cb0b8;
case 0x6cb0b9:c.instructions+=7;goto B6cb0b9;
case 0x6cb0bc:c.instructions+=6;goto B6cb0bc;
case 0x6cb0bf:c.instructions+=5;goto B6cb0bf;
case 0x6cb0c2:c.instructions+=4;goto B6cb0c2;
case 0x6cb0c4:c.instructions+=3;goto B6cb0c4;
case 0x6cb0c6:c.instructions+=2;goto B6cb0c6;
case 0x6cb0c8:c.instructions+=1;goto B6cb0c8;
case 0x6cb0cd:goto L6cb0cd;
case 0x6cb0cf:c.instructions+=1;goto B6cb0cf;
case 0x6cb0d5:goto L6cb0d5;
case 0x6cb0d8:c.instructions+=1;goto B6cb0d8;
case 0x6cb0da:goto L6cb0da;
case 0x6cb0db:c.instructions+=3;goto B6cb0db;
case 0x6cb0dc:c.instructions+=2;goto B6cb0dc;
case 0x6cb0de:c.instructions+=1;goto B6cb0de;
case 0x6cb0e3:goto L6cb0e3;
case 0x6cb0e5:c.instructions+=1;goto B6cb0e5;
case 0x6cb0eb:goto L6cb0eb;
case 0x6cb0ec:c.instructions+=2;goto B6cb0ec;
case 0x6cb0ee:c.instructions+=1;goto B6cb0ee;
case 0x6cb0f3:goto L6cb0f3;
case 0x6cb0f5:c.instructions+=1;goto B6cb0f5;
case 0x6cb0fb:goto L6cb0fb;
case 0x6cb0fe:c.instructions+=19;goto B6cb0fe;
case 0x6cb0ff:c.instructions+=18;goto B6cb0ff;
case 0x6cb100:c.instructions+=17;goto B6cb100;
case 0x6cb101:c.instructions+=16;goto B6cb101;
case 0x6cb104:c.instructions+=15;goto B6cb104;
case 0x6cb107:c.instructions+=14;goto B6cb107;
case 0x6cb10a:c.instructions+=13;goto B6cb10a;
case 0x6cb10d:c.instructions+=12;goto B6cb10d;
case 0x6cb10e:c.instructions+=11;goto B6cb10e;
case 0x6cb114:c.instructions+=10;goto B6cb114;
case 0x6cb115:c.instructions+=9;goto B6cb115;
case 0x6cb11b:c.instructions+=8;goto B6cb11b;
case 0x6cb11c:c.instructions+=7;goto B6cb11c;
case 0x6cb11f:c.instructions+=6;goto B6cb11f;
case 0x6cb120:c.instructions+=5;goto B6cb120;
case 0x6cb123:c.instructions+=4;goto B6cb123;
case 0x6cb124:c.instructions+=3;goto B6cb124;
case 0x6cb126:c.instructions+=2;goto B6cb126;
case 0x6cb128:c.instructions+=1;goto B6cb128;
case 0x6cb12d:goto L6cb12d;
case 0x6cb12f:c.instructions+=1;goto B6cb12f;
case 0x6cb135:goto L6cb135;
case 0x6cb138:c.instructions+=1;goto B6cb138;
case 0x6cb13e:goto L6cb13e;
case 0x6cb141:c.instructions+=3;goto B6cb141;
case 0x6cb144:c.instructions+=2;goto B6cb144;
case 0x6cb14b:c.instructions+=1;goto B6cb14b;
case 0x6cb151:goto L6cb151;
case 0x6cb153:c.instructions+=2;goto B6cb153;
case 0x6cb155:c.instructions+=1;goto B6cb155;
case 0x6cb157:goto L6cb157;
case 0x6cb15e:c.instructions+=2;goto B6cb15e;
case 0x6cb165:c.instructions+=1;goto B6cb165;
case 0x6cb167:goto L6cb167;
case 0x6cb16a:goto L6cb16a;
case 0x6cb16b:c.instructions+=2;goto B6cb16b;
case 0x6cb16e:c.instructions+=1;goto B6cb16e;
case 0x6cb170:goto L6cb170;
case 0x6cb173:c.instructions+=1;goto B6cb173;
case 0x6cb179:goto L6cb179;
case 0x6cb17b:c.instructions+=1;goto B6cb17b;
case 0x6cb180:goto L6cb180;
case 0x6cb182:c.instructions+=1;goto B6cb182;
case 0x6cb184:goto L6cb184;
case 0x6cb186:c.instructions+=1;goto B6cb186;
case 0x6cb18b:goto L6cb18b;
case 0x6cb18d:c.instructions+=1;goto B6cb18d;
case 0x6cb18f:goto L6cb18f;
case 0x6cb191:goto L6cb191;
case 0x6cb193:c.instructions+=2;goto B6cb193;
case 0x6cb196:c.instructions+=1;goto B6cb196;
case 0x6cb19c:goto L6cb19c;
case 0x6cb19f:c.instructions+=9;goto B6cb19f;
case 0x6cb1a0:c.instructions+=8;goto B6cb1a0;
case 0x6cb1a1:c.instructions+=7;goto B6cb1a1;
case 0x6cb1a4:c.instructions+=6;goto B6cb1a4;
case 0x6cb1a9:c.instructions+=5;goto B6cb1a9;
case 0x6cb1aa:c.instructions+=4;goto B6cb1aa;
case 0x6cb1af:c.instructions+=3;goto B6cb1af;
case 0x6cb1b0:c.instructions+=2;goto B6cb1b0;
case 0x6cb1b2:c.instructions+=1;goto B6cb1b2;
case 0x6cb1b7:goto L6cb1b7;
case 0x6cb1b9:c.instructions+=3;goto B6cb1b9;
case 0x6cb1bc:c.instructions+=2;goto B6cb1bc;
case 0x6cb1be:c.instructions+=1;goto B6cb1be;
case 0x6cb1c4:goto L6cb1c4;
case 0x6cb1c5:c.instructions+=1;goto B6cb1c5;
case 0x6cb1ca:goto L6cb1ca;
case 0x6cb1cc:c.instructions+=2;goto B6cb1cc;
case 0x6cb1ce:c.instructions+=1;goto B6cb1ce;
case 0x6cb1d4:goto L6cb1d4;
case 0x6cb1d7:c.instructions+=3;goto B6cb1d7;
case 0x6cb1d9:c.instructions+=2;goto B6cb1d9;
case 0x6cb1dc:c.instructions+=1;goto B6cb1dc;
case 0x6cb1e2:goto L6cb1e2;
case 0x6cb1e4:goto L6cb1e4;
case 0x6cb1e7:c.instructions+=2;goto B6cb1e7;
case 0x6cb1ea:c.instructions+=1;goto B6cb1ea;
case 0x6cb1f0:goto L6cb1f0;
case 0x6cb1f2:goto L6cb1f2;
case 0x6cb1f5:c.instructions+=6;goto B6cb1f5;
case 0x6cb1f8:c.instructions+=5;goto B6cb1f8;
case 0x6cb1fb:c.instructions+=4;goto B6cb1fb;
case 0x6cb1fd:c.instructions+=3;goto B6cb1fd;
case 0x6cb1ff:c.instructions+=2;goto B6cb1ff;
case 0x6cb202:c.instructions+=1;goto B6cb202;
case 0x6cb208:goto L6cb208;
case 0x6cb20a:goto L6cb20a;
case 0x6cb20c:c.instructions+=1;goto B6cb20c;
case 0x6cb20f:goto L6cb20f;
case 0x6cb211:goto L6cb211;
case 0x6cb214:c.instructions+=2;goto B6cb214;
case 0x6cb215:c.instructions+=1;goto B6cb215;
case 0x6cb21a:goto L6cb21a;
case 0x6cb21c:c.instructions+=1;goto B6cb21c;
case 0x6cb222:goto L6cb222;
case 0x6cb225:c.instructions+=1;goto B6cb225;
case 0x6cb227:goto L6cb227;
case 0x6cb22a:c.instructions+=4;goto B6cb22a;
case 0x6cb22d:c.instructions+=3;goto B6cb22d;
case 0x6cb230:c.instructions+=2;goto B6cb230;
case 0x6cb233:c.instructions+=1;goto B6cb233;
case 0x6cb235:goto L6cb235;
case 0x6cb236:c.instructions+=1;goto B6cb236;
case 0x6cb23b:goto L6cb23b;
case 0x6cb23d:c.instructions+=1;goto B6cb23d;
case 0x6cb23f:goto L6cb23f;
case 0x6cb242:c.instructions+=5;goto B6cb242;
case 0x6cb243:c.instructions+=4;goto B6cb243;
case 0x6cb246:c.instructions+=3;goto B6cb246;
case 0x6cb249:c.instructions+=2;goto B6cb249;
case 0x6cb24c:c.instructions+=1;goto B6cb24c;
case 0x6cb24e:goto L6cb24e;
case 0x6cb24f:c.instructions+=2;goto B6cb24f;
case 0x6cb251:c.instructions+=1;goto B6cb251;
case 0x6cb256:goto L6cb256;
case 0x6cb258:c.instructions+=1;goto B6cb258;
case 0x6cb25e:goto L6cb25e;
case 0x6cb261:c.instructions+=2;goto B6cb261;
case 0x6cb264:c.instructions+=1;goto B6cb264;
case 0x6cb267:goto L6cb267;
case 0x6cb268:c.instructions+=17;goto B6cb268;
case 0x6cb269:c.instructions+=16;goto B6cb269;
case 0x6cb26a:c.instructions+=15;goto B6cb26a;
case 0x6cb26d:c.instructions+=14;goto B6cb26d;
case 0x6cb270:c.instructions+=13;goto B6cb270;
case 0x6cb273:c.instructions+=12;goto B6cb273;
case 0x6cb275:c.instructions+=11;goto B6cb275;
case 0x6cb276:c.instructions+=10;goto B6cb276;
case 0x6cb27c:c.instructions+=9;goto B6cb27c;
case 0x6cb27d:c.instructions+=8;goto B6cb27d;
case 0x6cb283:c.instructions+=7;goto B6cb283;
case 0x6cb284:c.instructions+=6;goto B6cb284;
case 0x6cb287:c.instructions+=5;goto B6cb287;
case 0x6cb288:c.instructions+=4;goto B6cb288;
case 0x6cb28b:c.instructions+=3;goto B6cb28b;
case 0x6cb28d:c.instructions+=2;goto B6cb28d;
case 0x6cb28f:c.instructions+=1;goto B6cb28f;
case 0x6cb294:goto L6cb294;
case 0x6cb296:c.instructions+=1;goto B6cb296;
case 0x6cb29c:goto L6cb29c;
case 0x6cb29f:goto L6cb29f;
case 0x6cb2a2:c.instructions+=1;goto B6cb2a2;
case 0x6cb2a7:goto L6cb2a7;
case 0x6cb2ad:c.instructions+=1;goto B6cb2ad;
case 0x6cb2af:goto L6cb2af;
case 0x6cb2b5:c.instructions+=1;goto B6cb2b5;
case 0x6cb2b7:goto L6cb2b7;
case 0x6cb2bd:c.instructions+=1;goto B6cb2bd;
case 0x6cb2bf:goto L6cb2bf;
case 0x6cb2c2:c.instructions+=1;goto B6cb2c2;
case 0x6cb2c4:goto L6cb2c4;
case 0x6cb2c7:c.instructions+=1;goto B6cb2c7;
case 0x6cb2c9:goto L6cb2c9;
case 0x6cb2cb:c.instructions+=2;goto B6cb2cb;
case 0x6cb2ce:c.instructions+=1;goto B6cb2ce;
case 0x6cb2d0:goto L6cb2d0;
case 0x6cb2d3:c.instructions+=10;goto B6cb2d3;
case 0x6cb2d6:c.instructions+=9;goto B6cb2d6;
case 0x6cb2d9:c.instructions+=8;goto B6cb2d9;
case 0x6cb2dc:c.instructions+=7;goto B6cb2dc;
case 0x6cb2df:c.instructions+=6;goto B6cb2df;
case 0x6cb2e2:c.instructions+=5;goto B6cb2e2;
case 0x6cb2e5:c.instructions+=4;goto B6cb2e5;
case 0x6cb2e6:c.instructions+=3;goto B6cb2e6;
case 0x6cb2e9:c.instructions+=2;goto B6cb2e9;
case 0x6cb2ec:c.instructions+=1;goto B6cb2ec;
case 0x6cb2ee:goto L6cb2ee;
case 0x6cb2f0:c.instructions+=2;goto B6cb2f0;
case 0x6cb2f1:c.instructions+=1;goto B6cb2f1;
case 0x6cb2f6:goto L6cb2f6;
case 0x6cb2f8:c.instructions+=1;goto B6cb2f8;
case 0x6cb2fe:goto L6cb2fe;
case 0x6cb301:c.instructions+=1;goto B6cb301;
case 0x6cb306:goto L6cb306;
case 0x6cb309:c.instructions+=1;goto B6cb309;
case 0x6cb30b:goto L6cb30b;
case 0x6cb30e:c.instructions+=2;goto B6cb30e;
case 0x6cb311:c.instructions+=1;goto B6cb311;
case 0x6cb313:goto L6cb313;
case 0x6cb315:goto L6cb315;
case 0x6cb318:c.instructions+=22;goto B6cb318;
case 0x6cb31b:c.instructions+=21;goto B6cb31b;
case 0x6cb31e:c.instructions+=20;goto B6cb31e;
case 0x6cb31f:c.instructions+=19;goto B6cb31f;
case 0x6cb321:c.instructions+=18;goto B6cb321;
case 0x6cb324:c.instructions+=17;goto B6cb324;
case 0x6cb327:c.instructions+=16;goto B6cb327;
case 0x6cb32a:c.instructions+=15;goto B6cb32a;
case 0x6cb32d:c.instructions+=14;goto B6cb32d;
case 0x6cb330:c.instructions+=13;goto B6cb330;
case 0x6cb331:c.instructions+=12;goto B6cb331;
case 0x6cb337:c.instructions+=11;goto B6cb337;
case 0x6cb338:c.instructions+=10;goto B6cb338;
case 0x6cb33e:c.instructions+=9;goto B6cb33e;
case 0x6cb33f:c.instructions+=8;goto B6cb33f;
case 0x6cb342:c.instructions+=7;goto B6cb342;
case 0x6cb343:c.instructions+=6;goto B6cb343;
case 0x6cb346:c.instructions+=5;goto B6cb346;
case 0x6cb349:c.instructions+=4;goto B6cb349;
case 0x6cb34b:c.instructions+=3;goto B6cb34b;
case 0x6cb34d:c.instructions+=2;goto B6cb34d;
case 0x6cb34f:c.instructions+=1;goto B6cb34f;
case 0x6cb354:goto L6cb354;
case 0x6cb356:c.instructions+=1;goto B6cb356;
case 0x6cb35c:goto L6cb35c;
case 0x6cb35f:c.instructions+=1;goto B6cb35f;
case 0x6cb361:goto L6cb361;
case 0x6cb368:c.instructions+=3;goto B6cb368;
case 0x6cb36a:c.instructions+=2;goto B6cb36a;
case 0x6cb36b:c.instructions+=1;goto B6cb36b;
case 0x6cb36d:goto L6cb36d;
case 0x6cb370:c.instructions+=5;goto B6cb370;
case 0x6cb375:c.instructions+=4;goto B6cb375;
case 0x6cb378:c.instructions+=3;goto B6cb378;
case 0x6cb37d:c.instructions+=2;goto B6cb37d;
case 0x6cb37f:c.instructions+=1;goto B6cb37f;
case 0x6cb384:goto L6cb384;
case 0x6cb386:c.instructions+=1;goto B6cb386;
case 0x6cb38c:goto L6cb38c;
case 0x6cb38f:c.instructions+=3;goto B6cb38f;
case 0x6cb394:c.instructions+=2;goto B6cb394;
case 0x6cb396:c.instructions+=1;goto B6cb396;
case 0x6cb398:goto L6cb398;
case 0x6cb39d:goto L6cb39d;
case 0x6cb39f:c.instructions+=1;goto B6cb39f;
case 0x6cb3a5:goto L6cb3a5;
case 0x6cb3a8:c.instructions+=2;goto B6cb3a8;
case 0x6cb3ab:c.instructions+=1;goto B6cb3ab;
case 0x6cb3ae:goto L6cb3ae;
case 0x6cb3b1:c.instructions+=19;goto B6cb3b1;
case 0x6cb3b2:c.instructions+=18;goto B6cb3b2;
case 0x6cb3b3:c.instructions+=17;goto B6cb3b3;
case 0x6cb3b4:c.instructions+=16;goto B6cb3b4;
case 0x6cb3b7:c.instructions+=15;goto B6cb3b7;
case 0x6cb3ba:c.instructions+=14;goto B6cb3ba;
case 0x6cb3bd:c.instructions+=13;goto B6cb3bd;
case 0x6cb3c0:c.instructions+=12;goto B6cb3c0;
case 0x6cb3c1:c.instructions+=11;goto B6cb3c1;
case 0x6cb3c7:c.instructions+=10;goto B6cb3c7;
case 0x6cb3c8:c.instructions+=9;goto B6cb3c8;
case 0x6cb3ce:c.instructions+=8;goto B6cb3ce;
case 0x6cb3cf:c.instructions+=7;goto B6cb3cf;
case 0x6cb3d2:c.instructions+=6;goto B6cb3d2;
case 0x6cb3d3:c.instructions+=5;goto B6cb3d3;
case 0x6cb3d6:c.instructions+=4;goto B6cb3d6;
case 0x6cb3d8:c.instructions+=3;goto B6cb3d8;
case 0x6cb3da:c.instructions+=2;goto B6cb3da;
case 0x6cb3dc:c.instructions+=1;goto B6cb3dc;
case 0x6cb3e1:goto L6cb3e1;
case 0x6cb3e3:c.instructions+=1;goto B6cb3e3;
case 0x6cb3e9:goto L6cb3e9;
case 0x6cb3ec:c.instructions+=1;goto B6cb3ec;
case 0x6cb3f2:goto L6cb3f2;
case 0x6cb3f3:c.instructions+=8;goto B6cb3f3;
case 0x6cb3f5:c.instructions+=7;goto B6cb3f5;
case 0x6cb3f6:c.instructions+=6;goto B6cb3f6;
case 0x6cb3f9:c.instructions+=5;goto B6cb3f9;
case 0x6cb3fa:c.instructions+=4;goto B6cb3fa;
case 0x6cb3fb:c.instructions+=3;goto B6cb3fb;
case 0x6cb401:c.instructions+=2;goto B6cb401;
case 0x6cb403:c.instructions+=1;goto B6cb403;
case 0x6cb408:goto L6cb408;
case 0x6cb40b:c.instructions+=2;goto B6cb40b;
case 0x6cb40e:c.instructions+=1;goto B6cb40e;
case 0x6cb414:goto L6cb414;
case 0x6cb416:c.instructions+=1;goto B6cb416;
case 0x6cb41b:goto L6cb41b;
case 0x6cb41d:c.instructions+=1;goto B6cb41d;
case 0x6cb41f:goto L6cb41f;
case 0x6cb421:c.instructions+=1;goto B6cb421;
case 0x6cb426:goto L6cb426;
case 0x6cb429:c.instructions+=1;goto B6cb429;
case 0x6cb42b:goto L6cb42b;
case 0x6cb42e:goto L6cb42e;
case 0x6cb431:c.instructions+=1;goto B6cb431;
case 0x6cb437:goto L6cb437;
case 0x6cb43e:c.instructions+=5;goto B6cb43e;
case 0x6cb441:c.instructions+=4;goto B6cb441;
case 0x6cb442:c.instructions+=3;goto B6cb442;
case 0x6cb444:c.instructions+=2;goto B6cb444;
case 0x6cb445:c.instructions+=1;goto B6cb445;
case 0x6cb447:goto L6cb447;
case 0x6cb44c:c.instructions+=1;goto B6cb44c;
case 0x6cb44e:goto L6cb44e;
case 0x6cb453:goto L6cb453;
case 0x6cb458:goto L6cb458;
case 0x6cb45a:c.instructions+=3;goto B6cb45a;
case 0x6cb45d:c.instructions+=2;goto B6cb45d;
case 0x6cb460:c.instructions+=1;goto B6cb460;
case 0x6cb466:goto L6cb466;
case 0x6cb467:c.instructions+=1;goto B6cb467;
case 0x6cb46c:goto L6cb46c;
case 0x6cb46e:c.instructions+=2;goto B6cb46e;
case 0x6cb470:c.instructions+=1;goto B6cb470;
case 0x6cb476:goto L6cb476;
case 0x6cb479:c.instructions+=6;goto B6cb479;
case 0x6cb47c:c.instructions+=5;goto B6cb47c;
case 0x6cb47f:c.instructions+=4;goto B6cb47f;
case 0x6cb481:c.instructions+=3;goto B6cb481;
case 0x6cb482:c.instructions+=2;goto B6cb482;
case 0x6cb484:c.instructions+=1;goto B6cb484;
case 0x6cb489:goto L6cb489;
case 0x6cb48b:c.instructions+=1;goto B6cb48b;
case 0x6cb491:goto L6cb491;
case 0x6cb494:c.instructions+=1;goto B6cb494;
case 0x6cb499:goto L6cb499;
case 0x6cb49f:c.instructions+=1;goto B6cb49f;
case 0x6cb4a5:goto L6cb4a5;
case 0x6cb4a8:c.instructions+=1;goto B6cb4a8;
case 0x6cb4ae:goto L6cb4ae;
case 0x6cb4b1:c.instructions+=12;goto B6cb4b1;
case 0x6cb4b4:c.instructions+=11;goto B6cb4b4;
case 0x6cb4b6:c.instructions+=10;goto B6cb4b6;
case 0x6cb4b9:c.instructions+=9;goto B6cb4b9;
case 0x6cb4bc:c.instructions+=8;goto B6cb4bc;
case 0x6cb4bf:c.instructions+=7;goto B6cb4bf;
case 0x6cb4c2:c.instructions+=6;goto B6cb4c2;
case 0x6cb4c5:c.instructions+=5;goto B6cb4c5;
case 0x6cb4c8:c.instructions+=4;goto B6cb4c8;
case 0x6cb4cb:c.instructions+=3;goto B6cb4cb;
case 0x6cb4ce:c.instructions+=2;goto B6cb4ce;
case 0x6cb4d1:c.instructions+=1;goto B6cb4d1;
case 0x6cb4d7:goto L6cb4d7;
case 0x6cb4da:c.instructions+=1;goto B6cb4da;
case 0x6cb4e0:goto L6cb4e0;
case 0x6cb4e3:c.instructions+=1;goto B6cb4e3;
case 0x6cb4e9:goto L6cb4e9;
case 0x6cb4ec:c.instructions+=1;goto B6cb4ec;
case 0x6cb4f2:goto L6cb4f2;
case 0x6cb4f5:c.instructions+=1;goto B6cb4f5;
case 0x6cb4fb:goto L6cb4fb;
case 0x6cb4fe:c.instructions+=1;goto B6cb4fe;
case 0x6cb504:goto L6cb504;
case 0x6cb507:c.instructions+=5;goto B6cb507;
case 0x6cb50a:c.instructions+=4;goto B6cb50a;
case 0x6cb50d:c.instructions+=3;goto B6cb50d;
case 0x6cb514:c.instructions+=2;goto B6cb514;
case 0x6cb517:c.instructions+=1;goto B6cb517;
case 0x6cb519:goto L6cb519;
case 0x6cb51c:c.instructions+=1;goto B6cb51c;
case 0x6cb51f:goto L6cb51f;
case 0x6cb522:c.instructions+=2;goto B6cb522;
case 0x6cb524:c.instructions+=1;goto B6cb524;
case 0x6cb526:goto L6cb526;
case 0x6cb529:c.instructions+=5;goto B6cb529;
case 0x6cb52c:c.instructions+=4;goto B6cb52c;
case 0x6cb52f:c.instructions+=3;goto B6cb52f;
case 0x6cb532:c.instructions+=2;goto B6cb532;
case 0x6cb535:c.instructions+=1;goto B6cb535;
case 0x6cb538:goto L6cb538;
case 0x6cb53b:c.instructions+=9;goto B6cb53b;
case 0x6cb53d:c.instructions+=8;goto B6cb53d;
case 0x6cb540:c.instructions+=7;goto B6cb540;
case 0x6cb543:c.instructions+=6;goto B6cb543;
case 0x6cb545:c.instructions+=5;goto B6cb545;
case 0x6cb548:c.instructions+=4;goto B6cb548;
case 0x6cb54b:c.instructions+=3;goto B6cb54b;
case 0x6cb54e:c.instructions+=2;goto B6cb54e;
case 0x6cb551:c.instructions+=1;goto B6cb551;
case 0x6cb553:goto L6cb553;
case 0x6cb556:c.instructions+=2;goto B6cb556;
case 0x6cb559:c.instructions+=1;goto B6cb559;
case 0x6cb55b:goto L6cb55b;
case 0x6cb55e:c.instructions+=2;goto B6cb55e;
case 0x6cb561:c.instructions+=1;goto B6cb561;
case 0x6cb563:goto L6cb563;
case 0x6cb566:c.instructions+=2;goto B6cb566;
case 0x6cb569:c.instructions+=1;goto B6cb569;
case 0x6cb56b:goto L6cb56b;
case 0x6cb56e:c.instructions+=2;goto B6cb56e;
case 0x6cb571:c.instructions+=1;goto B6cb571;
case 0x6cb573:goto L6cb573;
case 0x6cb576:goto L6cb576;
case 0x6cb57a:c.instructions+=3;goto B6cb57a;
case 0x6cb57e:c.instructions+=2;goto B6cb57e;
case 0x6cb581:c.instructions+=1;goto B6cb581;
case 0x6cb583:goto L6cb583;
case 0x6cb586:c.instructions+=4;goto B6cb586;
case 0x6cb588:c.instructions+=3;goto B6cb588;
case 0x6cb58b:c.instructions+=2;goto B6cb58b;
case 0x6cb590:c.instructions+=1;goto B6cb590;
case 0x6cb596:goto L6cb596;
case 0x6cb599:c.instructions+=1;goto B6cb599;
case 0x6cb59b:goto L6cb59b;
case 0x6cb59e:c.instructions+=1;goto B6cb59e;
case 0x6cb5a4:goto L6cb5a4;
case 0x6cb5a7:c.instructions+=3;goto B6cb5a7;
case 0x6cb5aa:c.instructions+=2;goto B6cb5aa;
case 0x6cb5ad:c.instructions+=1;goto B6cb5ad;
case 0x6cb5b0:goto L6cb5b0;
case 0x6cb5b3:c.instructions+=16;goto B6cb5b3;
case 0x6cb5b6:c.instructions+=15;goto B6cb5b6;
case 0x6cb5b9:c.instructions+=14;goto B6cb5b9;
case 0x6cb5bb:c.instructions+=13;goto B6cb5bb;
case 0x6cb5be:c.instructions+=12;goto B6cb5be;
case 0x6cb5c2:c.instructions+=11;goto B6cb5c2;
case 0x6cb5c4:c.instructions+=10;goto B6cb5c4;
case 0x6cb5c7:c.instructions+=9;goto B6cb5c7;
case 0x6cb5ca:c.instructions+=8;goto B6cb5ca;
case 0x6cb5cc:c.instructions+=7;goto B6cb5cc;
case 0x6cb5cf:c.instructions+=6;goto B6cb5cf;
case 0x6cb5d2:c.instructions+=5;goto B6cb5d2;
case 0x6cb5d4:c.instructions+=4;goto B6cb5d4;
case 0x6cb5d5:c.instructions+=3;goto B6cb5d5;
case 0x6cb5d8:c.instructions+=2;goto B6cb5d8;
case 0x6cb5db:c.instructions+=1;goto B6cb5db;
case 0x6cb5dd:goto L6cb5dd;
case 0x6cb5e2:goto L6cb5e2;
case 0x6cb5e4:c.instructions+=1;goto B6cb5e4;
case 0x6cb5e9:goto L6cb5e9;
case 0x6cb5eb:c.instructions+=1;goto B6cb5eb;
case 0x6cb5ed:goto L6cb5ed;
case 0x6cb5ef:c.instructions+=1;goto B6cb5ef;
case 0x6cb5f4:goto L6cb5f4;
case 0x6cb5f7:c.instructions+=1;goto B6cb5f7;
case 0x6cb5f9:goto L6cb5f9;
case 0x6cb5fc:goto L6cb5fc;
case 0x6cb5ff:c.instructions+=1;goto B6cb5ff;
case 0x6cb605:goto L6cb605;
case 0x6cb608:c.instructions+=8;goto B6cb608;
case 0x6cb60b:c.instructions+=7;goto B6cb60b;
case 0x6cb60c:c.instructions+=6;goto B6cb60c;
case 0x6cb60f:c.instructions+=5;goto B6cb60f;
case 0x6cb614:c.instructions+=4;goto B6cb614;
case 0x6cb617:c.instructions+=3;goto B6cb617;
case 0x6cb61c:c.instructions+=2;goto B6cb61c;
case 0x6cb61d:c.instructions+=1;goto B6cb61d;
case 0x6cb622:goto L6cb622;
case 0x6cb624:c.instructions+=1;goto B6cb624;
case 0x6cb62a:goto L6cb62a;
case 0x6cb62d:c.instructions+=2;goto B6cb62d;
case 0x6cb62e:c.instructions+=1;goto B6cb62e;
case 0x6cb633:goto L6cb633;
case 0x6cb635:c.instructions+=1;goto B6cb635;
case 0x6cb63b:goto L6cb63b;
case 0x6cb63e:c.instructions+=2;goto B6cb63e;
case 0x6cb640:c.instructions+=1;goto B6cb640;
case 0x6cb645:goto L6cb645;
case 0x6cb647:c.instructions+=1;goto B6cb647;
case 0x6cb64d:goto L6cb64d;
case 0x6cb650:c.instructions+=4;goto B6cb650;
case 0x6cb653:c.instructions+=3;goto B6cb653;
case 0x6cb656:c.instructions+=2;goto B6cb656;
case 0x6cb659:c.instructions+=1;goto B6cb659;
case 0x6cb65b:goto L6cb65b;
case 0x6cb65e:c.instructions+=6;goto B6cb65e;
case 0x6cb661:c.instructions+=5;goto B6cb661;
case 0x6cb664:c.instructions+=4;goto B6cb664;
case 0x6cb666:c.instructions+=3;goto B6cb666;
case 0x6cb669:c.instructions+=2;goto B6cb669;
case 0x6cb66b:c.instructions+=1;goto B6cb66b;
case 0x6cb66e:goto L6cb66e;
case 0x6cb670:goto L6cb670;
case 0x6cb672:c.instructions+=1;goto B6cb672;
case 0x6cb674:goto L6cb674;
case 0x6cb677:c.instructions+=6;goto B6cb677;
case 0x6cb67a:c.instructions+=5;goto B6cb67a;
case 0x6cb67d:c.instructions+=4;goto B6cb67d;
case 0x6cb680:c.instructions+=3;goto B6cb680;
case 0x6cb682:c.instructions+=2;goto B6cb682;
case 0x6cb684:c.instructions+=1;goto B6cb684;
case 0x6cb687:goto L6cb687;
case 0x6cb689:goto L6cb689;
case 0x6cb68b:c.instructions+=1;goto B6cb68b;
case 0x6cb68e:goto L6cb68e;
case 0x6cb692:c.instructions+=2;goto B6cb692;
case 0x6cb695:c.instructions+=1;goto B6cb695;
case 0x6cb697:goto L6cb697;
case 0x6cb699:goto L6cb699;
case 0x6cb69f:goto L6cb69f;
case 0x6cb6a2:c.instructions+=1;goto B6cb6a2;
case 0x6cb6a5:goto L6cb6a5;
case 0x6cb6a6:c.instructions+=8;goto B6cb6a6;
case 0x6cb6a8:c.instructions+=7;goto B6cb6a8;
case 0x6cb6a9:c.instructions+=6;goto B6cb6a9;
case 0x6cb6ac:c.instructions+=5;goto B6cb6ac;
case 0x6cb6af:c.instructions+=4;goto B6cb6af;
case 0x6cb6b1:c.instructions+=3;goto B6cb6b1;
case 0x6cb6b3:c.instructions+=2;goto B6cb6b3;
case 0x6cb6b9:c.instructions+=1;goto B6cb6b9;
case 0x6cb6be:goto L6cb6be;
case 0x6cb6c1:c.instructions+=9;goto B6cb6c1;
case 0x6cb6c3:c.instructions+=8;goto B6cb6c3;
case 0x6cb6c6:c.instructions+=7;goto B6cb6c6;
case 0x6cb6c9:c.instructions+=6;goto B6cb6c9;
case 0x6cb6cc:c.instructions+=5;goto B6cb6cc;
case 0x6cb6ce:c.instructions+=4;goto B6cb6ce;
case 0x6cb6d1:c.instructions+=3;goto B6cb6d1;
case 0x6cb6d4:c.instructions+=2;goto B6cb6d4;
case 0x6cb6d7:c.instructions+=1;goto B6cb6d7;
case 0x6cb6dd:goto L6cb6dd;
case 0x6cb6e0:c.instructions+=11;goto B6cb6e0;
case 0x6cb6e3:c.instructions+=10;goto B6cb6e3;
case 0x6cb6e6:c.instructions+=9;goto B6cb6e6;
case 0x6cb6e9:c.instructions+=8;goto B6cb6e9;
case 0x6cb6ec:c.instructions+=7;goto B6cb6ec;
case 0x6cb6ef:c.instructions+=6;goto B6cb6ef;
case 0x6cb6f2:c.instructions+=5;goto B6cb6f2;
case 0x6cb6f5:c.instructions+=4;goto B6cb6f5;
case 0x6cb6f6:c.instructions+=3;goto B6cb6f6;
case 0x6cb6f9:c.instructions+=2;goto B6cb6f9;
case 0x6cb6fc:c.instructions+=1;goto B6cb6fc;
case 0x6cb701:goto L6cb701;
case 0x6cb703:c.instructions+=1;goto B6cb703;
case 0x6cb709:goto L6cb709;
case 0x6cb70c:c.instructions+=2;goto B6cb70c;
case 0x6cb70f:c.instructions+=1;goto B6cb70f;
case 0x6cb714:goto L6cb714;
case 0x6cb716:c.instructions+=2;goto B6cb716;
case 0x6cb719:c.instructions+=1;goto B6cb719;
case 0x6cb71f:goto L6cb71f;
case 0x6cb721:c.instructions+=19;goto B6cb721;
case 0x6cb724:c.instructions+=18;goto B6cb724;
case 0x6cb727:c.instructions+=17;goto B6cb727;
case 0x6cb72a:c.instructions+=16;goto B6cb72a;
case 0x6cb72d:c.instructions+=15;goto B6cb72d;
case 0x6cb730:c.instructions+=14;goto B6cb730;
case 0x6cb733:c.instructions+=13;goto B6cb733;
case 0x6cb735:c.instructions+=12;goto B6cb735;
case 0x6cb738:c.instructions+=11;goto B6cb738;
case 0x6cb73b:c.instructions+=10;goto B6cb73b;
case 0x6cb73e:c.instructions+=9;goto B6cb73e;
case 0x6cb741:c.instructions+=8;goto B6cb741;
case 0x6cb744:c.instructions+=7;goto B6cb744;
case 0x6cb747:c.instructions+=6;goto B6cb747;
case 0x6cb74a:c.instructions+=5;goto B6cb74a;
case 0x6cb74d:c.instructions+=4;goto B6cb74d;
case 0x6cb750:c.instructions+=3;goto B6cb750;
case 0x6cb753:c.instructions+=2;goto B6cb753;
case 0x6cb756:c.instructions+=1;goto B6cb756;
case 0x6cb758:goto L6cb758;
case 0x6cb75b:c.instructions+=3;goto B6cb75b;
case 0x6cb75e:c.instructions+=2;goto B6cb75e;
case 0x6cb761:c.instructions+=1;goto B6cb761;
case 0x6cb763:goto L6cb763;
case 0x6cb766:c.instructions+=4;goto B6cb766;
case 0x6cb769:c.instructions+=3;goto B6cb769;
case 0x6cb76c:c.instructions+=2;goto B6cb76c;
case 0x6cb76f:c.instructions+=1;goto B6cb76f;
case 0x6cb772:goto L6cb772;
case 0x6cb775:c.instructions+=4;goto B6cb775;
case 0x6cb778:c.instructions+=3;goto B6cb778;
case 0x6cb77c:c.instructions+=2;goto B6cb77c;
case 0x6cb77f:c.instructions+=1;goto B6cb77f;
case 0x6cb785:goto L6cb785;
case 0x6cb788:c.instructions+=5;goto B6cb788;
case 0x6cb78b:c.instructions+=4;goto B6cb78b;
case 0x6cb78d:c.instructions+=3;goto B6cb78d;
case 0x6cb790:c.instructions+=2;goto B6cb790;
case 0x6cb793:c.instructions+=1;goto B6cb793;
case 0x6cb795:goto L6cb795;
case 0x6cb798:c.instructions+=2;goto B6cb798;
case 0x6cb79b:c.instructions+=1;goto B6cb79b;
case 0x6cb7a1:goto L6cb7a1;
case 0x6cb7a6:goto L6cb7a6;
case 0x6cb7ab:c.instructions+=2;goto B6cb7ab;
case 0x6cb7b0:c.instructions+=1;goto B6cb7b0;
case 0x6cb7b2:goto L6cb7b2;
case 0x6cb7b7:c.instructions+=1;goto B6cb7b7;
case 0x6cb7b9:goto L6cb7b9;
case 0x6cb7be:goto L6cb7be;
case 0x6cb7c3:c.instructions+=1;goto B6cb7c3;
case 0x6cb7c5:goto L6cb7c5;
case 0x6cb7c7:c.instructions+=1;goto B6cb7c7;
case 0x6cb7c9:goto L6cb7c9;
case 0x6cb7cb:c.instructions+=1;goto B6cb7cb;
case 0x6cb7d0:goto L6cb7d0;
case 0x6cb7d3:c.instructions+=1;goto B6cb7d3;
case 0x6cb7d5:goto L6cb7d5;
case 0x6cb7d8:goto L6cb7d8;
case 0x6cb7da:c.instructions+=1;goto B6cb7da;
case 0x6cb7df:goto L6cb7df;
case 0x6cb7e1:c.instructions+=1;goto B6cb7e1;
case 0x6cb7e3:goto L6cb7e3;
case 0x6cb7e8:goto L6cb7e8;
case 0x6cb7ed:c.instructions+=1;goto B6cb7ed;
case 0x6cb7ef:goto L6cb7ef;
case 0x6cb7f4:c.instructions+=1;goto B6cb7f4;
case 0x6cb7f9:goto L6cb7f9;
case 0x6cb7fc:c.instructions+=2;goto B6cb7fc;
case 0x6cb7fd:c.instructions+=1;goto B6cb7fd;
case 0x6cb802:goto L6cb802;
case 0x6cb805:c.instructions+=2;goto B6cb805;
case 0x6cb80a:c.instructions+=1;goto B6cb80a;
case 0x6cb80c:goto L6cb80c;
case 0x6cb80e:c.instructions+=1;goto B6cb80e;
case 0x6cb810:goto L6cb810;
case 0x6cb815:goto L6cb815;
case 0x6cb818:c.instructions+=2;goto B6cb818;
case 0x6cb81a:c.instructions+=1;goto B6cb81a;
case 0x6cb81f:goto L6cb81f;
case 0x6cb821:c.instructions+=1;goto B6cb821;
case 0x6cb823:goto L6cb823;
case 0x6cb826:goto L6cb826;
case 0x6cb828:c.instructions+=1;goto B6cb828;
case 0x6cb82d:goto L6cb82d;
case 0x6cb832:c.instructions+=1;goto B6cb832;
case 0x6cb834:goto L6cb834;
case 0x6cb839:c.instructions+=1;goto B6cb839;
case 0x6cb83b:goto L6cb83b;
case 0x6cb83e:c.instructions+=2;goto B6cb83e;
case 0x6cb841:c.instructions+=1;goto B6cb841;
case 0x6cb843:goto L6cb843;
case 0x6cb845:goto L6cb845;
case 0x6cb846:c.instructions+=4;goto B6cb846;
case 0x6cb847:c.instructions+=3;goto B6cb847;
case 0x6cb848:c.instructions+=2;goto B6cb848;
case 0x6cb849:c.instructions+=1;goto B6cb849;
case 0x6cb84c:goto L6cb84c;
case 0x6cb84e:c.instructions+=15;goto B6cb84e;
case 0x6cb84f:c.instructions+=14;goto B6cb84f;
case 0x6cb851:c.instructions+=13;goto B6cb851;
case 0x6cb854:c.instructions+=12;goto B6cb854;
case 0x6cb857:c.instructions+=11;goto B6cb857;
case 0x6cb858:c.instructions+=10;goto B6cb858;
case 0x6cb85b:c.instructions+=9;goto B6cb85b;
case 0x6cb85e:c.instructions+=8;goto B6cb85e;
case 0x6cb860:c.instructions+=7;goto B6cb860;
case 0x6cb863:c.instructions+=6;goto B6cb863;
case 0x6cb866:c.instructions+=5;goto B6cb866;
case 0x6cb869:c.instructions+=4;goto B6cb869;
case 0x6cb86c:c.instructions+=3;goto B6cb86c;
case 0x6cb86f:c.instructions+=2;goto B6cb86f;
case 0x6cb872:c.instructions+=1;goto B6cb872;
case 0x6cb874:goto L6cb874;
case 0x6cb876:c.instructions+=1;goto B6cb876;
case 0x6cb87b:goto L6cb87b;
case 0x6cb87f:c.instructions+=4;goto B6cb87f;
case 0x6cb883:c.instructions+=3;goto B6cb883;
case 0x6cb884:c.instructions+=2;goto B6cb884;
case 0x6cb885:c.instructions+=1;goto B6cb885;
case 0x6cb887:goto L6cb887;
case 0x6cb88a:c.instructions+=1;goto B6cb88a;
case 0x6cb88d:goto L6cb88d;
case 0x6cb88f:c.instructions+=4;goto B6cb88f;
case 0x6cb892:c.instructions+=3;goto B6cb892;
case 0x6cb898:c.instructions+=2;goto B6cb898;
case 0x6cb89b:c.instructions+=1;goto B6cb89b;
case 0x6cb89d:goto L6cb89d;
case 0x6cb8a0:c.instructions+=2;goto B6cb8a0;
case 0x6cb8a3:c.instructions+=1;goto B6cb8a3;
case 0x6cb8a5:goto L6cb8a5;
case 0x6cb8a8:c.instructions+=1;goto B6cb8a8;
case 0x6cb8ae:goto L6cb8ae;
case 0x6cb8b1:c.instructions+=4;goto B6cb8b1;
case 0x6cb8b4:c.instructions+=3;goto B6cb8b4;
case 0x6cb8b7:c.instructions+=2;goto B6cb8b7;
case 0x6cb8ba:c.instructions+=1;goto B6cb8ba;
case 0x6cb8bc:goto L6cb8bc;
case 0x6cb8bf:goto L6cb8bf;
case 0x6cb8c2:c.instructions+=4;goto B6cb8c2;
case 0x6cb8c5:c.instructions+=3;goto B6cb8c5;
case 0x6cb8c7:c.instructions+=2;goto B6cb8c7;
case 0x6cb8ca:c.instructions+=1;goto B6cb8ca;
case 0x6cb8d0:goto L6cb8d0;
case 0x6cb8d3:c.instructions+=3;goto B6cb8d3;
case 0x6cb8d7:c.instructions+=2;goto B6cb8d7;
case 0x6cb8d9:c.instructions+=1;goto B6cb8d9;
case 0x6cb8db:goto L6cb8db;
case 0x6cb8de:c.instructions+=1;goto B6cb8de;
case 0x6cb8e1:goto L6cb8e1;
case 0x6cb8e4:c.instructions+=6;goto B6cb8e4;
case 0x6cb8e6:c.instructions+=5;goto B6cb8e6;
case 0x6cb8e9:c.instructions+=4;goto B6cb8e9;
case 0x6cb8ec:c.instructions+=3;goto B6cb8ec;
case 0x6cb8ef:c.instructions+=2;goto B6cb8ef;
case 0x6cb8f2:c.instructions+=1;goto B6cb8f2;
case 0x6cb8f8:goto L6cb8f8;
case 0x6cb8fb:c.instructions+=1;goto B6cb8fb;
case 0x6cb901:goto L6cb901;
case 0x6cb905:c.instructions+=1;goto B6cb905;
case 0x6cb907:goto L6cb907;
case 0x6cb90a:c.instructions+=4;goto B6cb90a;
case 0x6cb910:c.instructions+=3;goto B6cb910;
case 0x6cb914:c.instructions+=2;goto B6cb914;
case 0x6cb917:c.instructions+=1;goto B6cb917;
case 0x6cb919:goto L6cb919;
case 0x6cb91c:c.instructions+=1;goto B6cb91c;
case 0x6cb91f:goto L6cb91f;
case 0x6cb925:goto L6cb925;
case 0x6cb928:c.instructions+=4;goto B6cb928;
case 0x6cb92b:c.instructions+=3;goto B6cb92b;
case 0x6cb92f:c.instructions+=2;goto B6cb92f;
case 0x6cb932:c.instructions+=1;goto B6cb932;
case 0x6cb934:goto L6cb934;
case 0x6cb93a:c.instructions+=4;goto B6cb93a;
case 0x6cb93c:c.instructions+=3;goto B6cb93c;
case 0x6cb93f:c.instructions+=2;goto B6cb93f;
case 0x6cb942:c.instructions+=1;goto B6cb942;
case 0x6cb948:goto L6cb948;
case 0x6cb94b:c.instructions+=4;goto B6cb94b;
case 0x6cb94d:c.instructions+=3;goto B6cb94d;
case 0x6cb951:c.instructions+=2;goto B6cb951;
case 0x6cb953:c.instructions+=1;goto B6cb953;
case 0x6cb959:goto L6cb959;
case 0x6cb95d:c.instructions+=2;goto B6cb95d;
case 0x6cb95f:c.instructions+=1;goto B6cb95f;
case 0x6cb961:goto L6cb961;
case 0x6cb964:c.instructions+=4;goto B6cb964;
case 0x6cb96a:c.instructions+=3;goto B6cb96a;
case 0x6cb96d:c.instructions+=2;goto B6cb96d;
case 0x6cb970:c.instructions+=1;goto B6cb970;
case 0x6cb973:goto L6cb973;
case 0x6cb975:c.instructions+=5;goto B6cb975;
case 0x6cb978:c.instructions+=4;goto B6cb978;
case 0x6cb97b:c.instructions+=3;goto B6cb97b;
case 0x6cb97e:c.instructions+=2;goto B6cb97e;
case 0x6cb981:c.instructions+=1;goto B6cb981;
case 0x6cb983:goto L6cb983;
case 0x6cb986:c.instructions+=2;goto B6cb986;
case 0x6cb989:c.instructions+=1;goto B6cb989;
case 0x6cb98f:goto L6cb98f;
case 0x6cb992:c.instructions+=4;goto B6cb992;
case 0x6cb995:c.instructions+=3;goto B6cb995;
case 0x6cb998:c.instructions+=2;goto B6cb998;
case 0x6cb99b:c.instructions+=1;goto B6cb99b;
case 0x6cb99d:goto L6cb99d;
case 0x6cb9a1:c.instructions+=2;goto B6cb9a1;
case 0x6cb9a3:c.instructions+=1;goto B6cb9a3;
case 0x6cb9a5:goto L6cb9a5;
case 0x6cb9a8:c.instructions+=3;goto B6cb9a8;
case 0x6cb9aa:c.instructions+=2;goto B6cb9aa;
case 0x6cb9ad:c.instructions+=1;goto B6cb9ad;
case 0x6cb9b0:goto L6cb9b0;
case 0x6cb9b3:c.instructions+=2;goto B6cb9b3;
case 0x6cb9b5:c.instructions+=1;goto B6cb9b5;
case 0x6cb9b7:goto L6cb9b7;
case 0x6cb9ba:c.instructions+=3;goto B6cb9ba;
case 0x6cb9bd:c.instructions+=2;goto B6cb9bd;
case 0x6cb9c0:c.instructions+=1;goto B6cb9c0;
case 0x6cb9c2:goto L6cb9c2;
case 0x6cb9c5:c.instructions+=1;goto B6cb9c5;
case 0x6cb9cb:goto L6cb9cb;
case 0x6cb9ce:c.instructions+=1;goto B6cb9ce;
case 0x6cb9d0:goto L6cb9d0;
case 0x6cb9d2:c.instructions+=2;goto B6cb9d2;
case 0x6cb9d4:c.instructions+=1;goto B6cb9d4;
case 0x6cb9d6:goto L6cb9d6;
case 0x6cb9d8:c.instructions+=1;goto B6cb9d8;
case 0x6cb9db:goto L6cb9db;
case 0x6cb9de:c.instructions+=10;goto B6cb9de;
case 0x6cb9e1:c.instructions+=9;goto B6cb9e1;
case 0x6cb9e4:c.instructions+=8;goto B6cb9e4;
case 0x6cb9e6:c.instructions+=7;goto B6cb9e6;
case 0x6cb9e8:c.instructions+=6;goto B6cb9e8;
case 0x6cb9eb:c.instructions+=5;goto B6cb9eb;
case 0x6cb9ee:c.instructions+=4;goto B6cb9ee;
case 0x6cb9ef:c.instructions+=3;goto B6cb9ef;
case 0x6cb9f2:c.instructions+=2;goto B6cb9f2;
case 0x6cb9f5:c.instructions+=1;goto B6cb9f5;
case 0x6cb9f7:goto L6cb9f7;
case 0x6cb9fa:c.instructions+=1;goto B6cb9fa;
case 0x6cb9fd:goto L6cb9fd;
case 0x6cba01:c.instructions+=1;goto B6cba01;
case 0x6cba07:goto L6cba07;
case 0x6cba0a:c.instructions+=5;goto B6cba0a;
case 0x6cba0d:c.instructions+=4;goto B6cba0d;
case 0x6cba10:c.instructions+=3;goto B6cba10;
case 0x6cba12:c.instructions+=2;goto B6cba12;
case 0x6cba15:c.instructions+=1;goto B6cba15;
case 0x6cba17:goto L6cba17;
case 0x6cba19:goto L6cba19;
case 0x6cba1c:goto L6cba1c;
case 0x6cba1e:c.instructions+=1;goto B6cba1e;
case 0x6cba20:goto L6cba20;
case 0x6cba23:c.instructions+=5;goto B6cba23;
case 0x6cba26:c.instructions+=4;goto B6cba26;
case 0x6cba29:c.instructions+=3;goto B6cba29;
case 0x6cba2b:c.instructions+=2;goto B6cba2b;
case 0x6cba2d:c.instructions+=1;goto B6cba2d;
case 0x6cba30:goto L6cba30;
case 0x6cba33:c.instructions+=2;goto B6cba33;
case 0x6cba37:c.instructions+=1;goto B6cba37;
case 0x6cba3a:goto L6cba3a;
case 0x6cba3d:c.instructions+=3;goto B6cba3d;
case 0x6cba40:c.instructions+=2;goto B6cba40;
case 0x6cba42:c.instructions+=1;goto B6cba42;
case 0x6cba44:goto L6cba44;
case 0x6cba47:c.instructions+=4;goto B6cba47;
case 0x6cba4a:c.instructions+=3;goto B6cba4a;
case 0x6cba4e:c.instructions+=2;goto B6cba4e;
case 0x6cba51:c.instructions+=1;goto B6cba51;
case 0x6cba53:goto L6cba53;
case 0x6cba55:goto L6cba55;
case 0x6cba57:c.instructions+=3;goto B6cba57;
case 0x6cba5a:c.instructions+=2;goto B6cba5a;
case 0x6cba5e:c.instructions+=1;goto B6cba5e;
case 0x6cba61:goto L6cba61;
case 0x6cba64:c.instructions+=2;goto B6cba64;
case 0x6cba67:c.instructions+=1;goto B6cba67;
case 0x6cba69:goto L6cba69;
case 0x6cba6b:c.instructions+=5;goto B6cba6b;
case 0x6cba6e:c.instructions+=4;goto B6cba6e;
case 0x6cba70:c.instructions+=3;goto B6cba70;
case 0x6cba73:c.instructions+=2;goto B6cba73;
case 0x6cba75:c.instructions+=1;goto B6cba75;
case 0x6cba78:goto L6cba78;
case 0x6cba7a:goto L6cba7a;
case 0x6cba7c:c.instructions+=2;goto B6cba7c;
case 0x6cba7f:c.instructions+=1;goto B6cba7f;
case 0x6cba82:goto L6cba82;
case 0x6cba84:goto L6cba84;
case 0x6cba86:c.instructions+=4;goto B6cba86;
case 0x6cba89:c.instructions+=3;goto B6cba89;
case 0x6cba8b:c.instructions+=2;goto B6cba8b;
case 0x6cba8e:c.instructions+=1;goto B6cba8e;
case 0x6cba90:goto L6cba90;
case 0x6cba93:c.instructions+=2;goto B6cba93;
case 0x6cba95:c.instructions+=1;goto B6cba95;
case 0x6cba97:goto L6cba97;
case 0x6cba9a:c.instructions+=2;goto B6cba9a;
case 0x6cba9c:c.instructions+=1;goto B6cba9c;
case 0x6cba9e:goto L6cba9e;
case 0x6cbaa0:goto L6cbaa0;
case 0x6cbaa1:c.instructions+=1;goto B6cbaa1;
case 0x6cbaa2:goto L6cbaa2;
case 0x6cbaa3:c.instructions+=2;goto B6cbaa3;
case 0x6cbaa4:c.instructions+=1;goto B6cbaa4;
case 0x6cbaa7:goto L6cbaa7;
case 0x6cbaa9:c.instructions+=11;goto B6cbaa9;
case 0x6cbaaa:c.instructions+=10;goto B6cbaaa;
case 0x6cbaac:c.instructions+=9;goto B6cbaac;
case 0x6cbaaf:c.instructions+=8;goto B6cbaaf;
case 0x6cbab0:c.instructions+=7;goto B6cbab0;
case 0x6cbab3:c.instructions+=6;goto B6cbab3;
case 0x6cbab4:c.instructions+=5;goto B6cbab4;
case 0x6cbab6:c.instructions+=4;goto B6cbab6;
case 0x6cbabc:c.instructions+=3;goto B6cbabc;
case 0x6cbabf:c.instructions+=2;goto B6cbabf;
case 0x6cbac2:c.instructions+=1;goto B6cbac2;
case 0x6cbac8:goto L6cbac8;
case 0x6cbacb:c.instructions+=6;goto B6cbacb;
case 0x6cbacd:c.instructions+=5;goto B6cbacd;
case 0x6cbacf:c.instructions+=4;goto B6cbacf;
case 0x6cbad1:c.instructions+=3;goto B6cbad1;
case 0x6cbad3:c.instructions+=2;goto B6cbad3;
case 0x6cbad6:c.instructions+=1;goto B6cbad6;
case 0x6cbadc:goto L6cbadc;
case 0x6cbae0:c.instructions+=4;goto B6cbae0;
case 0x6cbae1:c.instructions+=3;goto B6cbae1;
case 0x6cbae4:c.instructions+=2;goto B6cbae4;
case 0x6cbae7:c.instructions+=1;goto B6cbae7;
case 0x6cbae9:goto L6cbae9;
case 0x6cbaec:c.instructions+=1;goto B6cbaec;
case 0x6cbaef:goto L6cbaef;
case 0x6cbaf2:c.instructions+=9;goto B6cbaf2;
case 0x6cbaf5:c.instructions+=8;goto B6cbaf5;
case 0x6cbaf8:c.instructions+=7;goto B6cbaf8;
case 0x6cbafb:c.instructions+=6;goto B6cbafb;
case 0x6cbafe:c.instructions+=5;goto B6cbafe;
case 0x6cbb01:c.instructions+=4;goto B6cbb01;
case 0x6cbb04:c.instructions+=3;goto B6cbb04;
case 0x6cbb07:c.instructions+=2;goto B6cbb07;
case 0x6cbb0a:c.instructions+=1;goto B6cbb0a;
case 0x6cbb10:goto L6cbb10;
case 0x6cbb12:c.instructions+=4;goto B6cbb12;
case 0x6cbb15:c.instructions+=3;goto B6cbb15;
case 0x6cbb18:c.instructions+=2;goto B6cbb18;
case 0x6cbb1a:c.instructions+=1;goto B6cbb1a;
case 0x6cbb1c:goto L6cbb1c;
case 0x6cbb1e:c.instructions+=1;goto B6cbb1e;
case 0x6cbb21:goto L6cbb21;
case 0x6cbb24:c.instructions+=9;goto B6cbb24;
case 0x6cbb27:c.instructions+=8;goto B6cbb27;
case 0x6cbb2a:c.instructions+=7;goto B6cbb2a;
case 0x6cbb2d:c.instructions+=6;goto B6cbb2d;
case 0x6cbb30:c.instructions+=5;goto B6cbb30;
case 0x6cbb33:c.instructions+=4;goto B6cbb33;
case 0x6cbb36:c.instructions+=3;goto B6cbb36;
case 0x6cbb3c:c.instructions+=2;goto B6cbb3c;
case 0x6cbb3f:c.instructions+=1;goto B6cbb3f;
case 0x6cbb41:goto L6cbb41;
case 0x6cbb44:goto L6cbb44;
case 0x6cbb48:c.instructions+=1;goto B6cbb48;
case 0x6cbb4a:goto L6cbb4a;
case 0x6cbb4d:goto L6cbb4d;
case 0x6cbb50:c.instructions+=2;goto B6cbb50;
case 0x6cbb52:c.instructions+=1;goto B6cbb52;
case 0x6cbb54:goto L6cbb54;
case 0x6cbb57:c.instructions+=1;goto B6cbb57;
case 0x6cbb59:goto L6cbb59;
case 0x6cbb5c:goto L6cbb5c;
case 0x6cbb5f:c.instructions+=2;goto B6cbb5f;
case 0x6cbb62:c.instructions+=1;goto B6cbb62;
case 0x6cbb64:goto L6cbb64;
case 0x6cbb67:goto L6cbb67;
case 0x6cbb6a:c.instructions+=2;goto B6cbb6a;
case 0x6cbb6d:c.instructions+=1;goto B6cbb6d;
case 0x6cbb6f:goto L6cbb6f;
case 0x6cbb72:c.instructions+=1;goto B6cbb72;
case 0x6cbb78:goto L6cbb78;
case 0x6cbb7b:c.instructions+=2;goto B6cbb7b;
case 0x6cbb7d:c.instructions+=1;goto B6cbb7d;
case 0x6cbb83:goto L6cbb83;
case 0x6cbb86:c.instructions+=2;goto B6cbb86;
case 0x6cbb88:c.instructions+=1;goto B6cbb88;
case 0x6cbb8a:goto L6cbb8a;
case 0x6cbb8d:c.instructions+=1;goto B6cbb8d;
case 0x6cbb90:goto L6cbb90;
case 0x6cbb93:c.instructions+=7;goto B6cbb93;
case 0x6cbb96:c.instructions+=6;goto B6cbb96;
case 0x6cbb99:c.instructions+=5;goto B6cbb99;
case 0x6cbb9c:c.instructions+=4;goto B6cbb9c;
case 0x6cbb9f:c.instructions+=3;goto B6cbb9f;
case 0x6cbba2:c.instructions+=2;goto B6cbba2;
case 0x6cbba5:c.instructions+=1;goto B6cbba5;
case 0x6cbba7:goto L6cbba7;
case 0x6cbbaa:goto L6cbbaa;
case 0x6cbbad:c.instructions+=2;goto B6cbbad;
case 0x6cbbb0:c.instructions+=1;goto B6cbbb0;
case 0x6cbbb2:goto L6cbbb2;
case 0x6cbbb5:c.instructions+=1;goto B6cbbb5;
case 0x6cbbbb:goto L6cbbbb;
case 0x6cbbbd:c.instructions+=3;goto B6cbbbd;
case 0x6cbbc3:c.instructions+=2;goto B6cbbc3;
case 0x6cbbc6:c.instructions+=1;goto B6cbbc6;
case 0x6cbbc8:goto L6cbbc8;
case 0x6cbbcc:c.instructions+=2;goto B6cbbcc;
case 0x6cbbcf:c.instructions+=1;goto B6cbbcf;
case 0x6cbbd1:goto L6cbbd1;
case 0x6cbbd4:c.instructions+=4;goto B6cbbd4;
case 0x6cbbd7:c.instructions+=3;goto B6cbbd7;
case 0x6cbbd9:c.instructions+=2;goto B6cbbd9;
case 0x6cbbdb:c.instructions+=1;goto B6cbbdb;
case 0x6cbbdd:goto L6cbbdd;
case 0x6cbbe0:c.instructions+=3;goto B6cbbe0;
case 0x6cbbe3:c.instructions+=2;goto B6cbbe3;
case 0x6cbbe5:c.instructions+=1;goto B6cbbe5;
case 0x6cbbe8:goto L6cbbe8;
case 0x6cbbea:c.instructions+=1;goto B6cbbea;
case 0x6cbbec:goto L6cbbec;
case 0x6cbbed:c.instructions+=3;goto B6cbbed;
case 0x6cbbf0:c.instructions+=2;goto B6cbbf0;
case 0x6cbbf2:c.instructions+=1;goto B6cbbf2;
case 0x6cbbf4:goto L6cbbf4;
case 0x6cbbf6:c.instructions+=1;goto B6cbbf6;
case 0x6cbbf8:goto L6cbbf8;
case 0x6cbbfb:c.instructions+=2;goto B6cbbfb;
case 0x6cbbfe:c.instructions+=1;goto B6cbbfe;
case 0x6cbc00:goto L6cbc00;
case 0x6cbc03:c.instructions+=2;goto B6cbc03;
case 0x6cbc05:c.instructions+=1;goto B6cbc05;
case 0x6cbc07:goto L6cbc07;
case 0x6cbc0a:c.instructions+=2;goto B6cbc0a;
case 0x6cbc0c:c.instructions+=1;goto B6cbc0c;
case 0x6cbc0e:goto L6cbc0e;
case 0x6cbc11:goto L6cbc11;
case 0x6cbc13:c.instructions+=2;goto B6cbc13;
case 0x6cbc15:c.instructions+=1;goto B6cbc15;
case 0x6cbc17:goto L6cbc17;
case 0x6cbc19:c.instructions+=1;goto B6cbc19;
case 0x6cbc1c:goto L6cbc1c;
case 0x6cbc1f:c.instructions+=5;goto B6cbc1f;
case 0x6cbc22:c.instructions+=4;goto B6cbc22;
case 0x6cbc25:c.instructions+=3;goto B6cbc25;
case 0x6cbc28:c.instructions+=2;goto B6cbc28;
case 0x6cbc2b:c.instructions+=1;goto B6cbc2b;
case 0x6cbc2d:goto L6cbc2d;
case 0x6cbc30:goto L6cbc30;
case 0x6cbc31:c.instructions+=3;goto B6cbc31;
case 0x6cbc34:c.instructions+=2;goto B6cbc34;
case 0x6cbc37:c.instructions+=1;goto B6cbc37;
case 0x6cbc39:goto L6cbc39;
case 0x6cbc3b:goto L6cbc3b;
case 0x6cbc3e:goto L6cbc3e;
case 0x6cbc41:c.instructions+=6;goto B6cbc41;
case 0x6cbc43:c.instructions+=5;goto B6cbc43;
case 0x6cbc46:c.instructions+=4;goto B6cbc46;
case 0x6cbc49:c.instructions+=3;goto B6cbc49;
case 0x6cbc4c:c.instructions+=2;goto B6cbc4c;
case 0x6cbc4f:c.instructions+=1;goto B6cbc4f;
case 0x6cbc55:goto L6cbc55;
case 0x6cbc58:c.instructions+=1;goto B6cbc58;
case 0x6cbc59:goto L6cbc59;
case 0x6cbc5b:c.instructions+=2;goto B6cbc5b;
case 0x6cbc5d:c.instructions+=1;goto B6cbc5d;
case 0x6cbc5f:goto L6cbc5f;
case 0x6cbc62:c.instructions+=2;goto B6cbc62;
case 0x6cbc66:c.instructions+=1;goto B6cbc66;
case 0x6cbc68:goto L6cbc68;
case 0x6cbc69:c.instructions+=2;goto B6cbc69;
case 0x6cbc6b:c.instructions+=1;goto B6cbc6b;
case 0x6cbc6d:goto L6cbc6d;
case 0x6cbc6f:c.instructions+=1;goto B6cbc6f;
case 0x6cbc70:goto L6cbc70;
case 0x6cbc71:c.instructions+=3;goto B6cbc71;
case 0x6cbc72:c.instructions+=2;goto B6cbc72;
case 0x6cbc73:c.instructions+=1;goto B6cbc73;
case 0x6cbc76:goto L6cbc76;
case 0x6cbc78:c.instructions+=1;goto B6cbc78;
case 0x6cbc7a:goto L6cbc7a;
case 0x6cbc7c:c.instructions+=9;goto B6cbc7c;
case 0x6cbc7d:c.instructions+=8;goto B6cbc7d;
case 0x6cbc7f:c.instructions+=7;goto B6cbc7f;
case 0x6cbc82:c.instructions+=6;goto B6cbc82;
case 0x6cbc83:c.instructions+=5;goto B6cbc83;
case 0x6cbc84:c.instructions+=4;goto B6cbc84;
case 0x6cbc85:c.instructions+=3;goto B6cbc85;
case 0x6cbc87:c.instructions+=2;goto B6cbc87;
case 0x6cbc89:c.instructions+=1;goto B6cbc89;
case 0x6cbc8e:goto L6cbc8e;
case 0x6cbc90:c.instructions+=2;goto B6cbc90;
case 0x6cbc92:c.instructions+=1;goto B6cbc92;
case 0x6cbc94:goto L6cbc94;
case 0x6cbc96:c.instructions+=1;goto B6cbc96;
case 0x6cbc9b:goto L6cbc9b;
case 0x6cbc9e:c.instructions+=1;goto B6cbc9e;
case 0x6cbca0:goto L6cbca0;
case 0x6cbca3:goto L6cbca3;
case 0x6cbca6:c.instructions+=1;goto B6cbca6;
case 0x6cbca8:goto L6cbca8;
case 0x6cbcad:c.instructions+=1;goto B6cbcad;
case 0x6cbcb2:goto L6cbcb2;
case 0x6cbcb5:c.instructions+=3;goto B6cbcb5;
case 0x6cbcb7:c.instructions+=2;goto B6cbcb7;
case 0x6cbcba:c.instructions+=1;goto B6cbcba;
case 0x6cbcbc:goto L6cbcbc;
case 0x6cbcc2:c.instructions+=2;goto B6cbcc2;
case 0x6cbcc5:c.instructions+=1;goto B6cbcc5;
case 0x6cbcc8:goto L6cbcc8;
case 0x6cbcca:c.instructions+=5;goto B6cbcca;
case 0x6cbccd:c.instructions+=4;goto B6cbccd;
case 0x6cbcd0:c.instructions+=3;goto B6cbcd0;
case 0x6cbcd3:c.instructions+=2;goto B6cbcd3;
case 0x6cbcd7:c.instructions+=1;goto B6cbcd7;
case 0x6cbcd9:goto L6cbcd9;
case 0x6cbcdc:goto L6cbcdc;
case 0x6cbcdf:c.instructions+=2;goto B6cbcdf;
case 0x6cbce0:c.instructions+=1;goto B6cbce0;
case 0x6cbce2:goto L6cbce2;
case 0x6cbce4:goto L6cbce4;
case 0x6cbce7:c.instructions+=11;goto B6cbce7;
case 0x6cbceb:c.instructions+=10;goto B6cbceb;
case 0x6cbcee:c.instructions+=9;goto B6cbcee;
case 0x6cbcef:c.instructions+=8;goto B6cbcef;
case 0x6cbcf2:c.instructions+=7;goto B6cbcf2;
case 0x6cbcf3:c.instructions+=6;goto B6cbcf3;
case 0x6cbcf9:c.instructions+=5;goto B6cbcf9;
case 0x6cbcfb:c.instructions+=4;goto B6cbcfb;
case 0x6cbd00:c.instructions+=3;goto B6cbd00;
case 0x6cbd03:c.instructions+=2;goto B6cbd03;
case 0x6cbd04:c.instructions+=1;goto B6cbd04;
case 0x6cbd09:goto L6cbd09;
case 0x6cbd0b:c.instructions+=2;goto B6cbd0b;
case 0x6cbd0d:c.instructions+=1;goto B6cbd0d;
case 0x6cbd13:goto L6cbd13;
case 0x6cbd19:c.instructions+=2;goto B6cbd19;
case 0x6cbd1c:c.instructions+=1;goto B6cbd1c;
case 0x6cbd21:goto L6cbd21;
case 0x6cbd23:c.instructions+=2;goto B6cbd23;
case 0x6cbd25:c.instructions+=1;goto B6cbd25;
case 0x6cbd2b:goto L6cbd2b;
case 0x6cbd2e:c.instructions+=2;goto B6cbd2e;
case 0x6cbd31:c.instructions+=1;goto B6cbd31;
case 0x6cbd33:goto L6cbd33;
case 0x6cbd35:c.instructions+=3;goto B6cbd35;
case 0x6cbd38:c.instructions+=2;goto B6cbd38;
case 0x6cbd3b:c.instructions+=1;goto B6cbd3b;
case 0x6cbd3d:goto L6cbd3d;
case 0x6cbd43:c.instructions+=8;goto B6cbd43;
case 0x6cbd46:c.instructions+=7;goto B6cbd46;
case 0x6cbd49:c.instructions+=6;goto B6cbd49;
case 0x6cbd4c:c.instructions+=5;goto B6cbd4c;
case 0x6cbd4f:c.instructions+=4;goto B6cbd4f;
case 0x6cbd52:c.instructions+=3;goto B6cbd52;
case 0x6cbd55:c.instructions+=2;goto B6cbd55;
case 0x6cbd59:c.instructions+=1;goto B6cbd59;
case 0x6cbd5b:goto L6cbd5b;
case 0x6cbd5e:c.instructions+=13;goto B6cbd5e;
case 0x6cbd62:c.instructions+=12;goto B6cbd62;
case 0x6cbd65:c.instructions+=11;goto B6cbd65;
case 0x6cbd69:c.instructions+=10;goto B6cbd69;
case 0x6cbd6c:c.instructions+=9;goto B6cbd6c;
case 0x6cbd6f:c.instructions+=8;goto B6cbd6f;
case 0x6cbd72:c.instructions+=7;goto B6cbd72;
case 0x6cbd75:c.instructions+=6;goto B6cbd75;
case 0x6cbd77:c.instructions+=5;goto B6cbd77;
case 0x6cbd7a:c.instructions+=4;goto B6cbd7a;
case 0x6cbd7d:c.instructions+=3;goto B6cbd7d;
case 0x6cbd7f:c.instructions+=2;goto B6cbd7f;
case 0x6cbd82:c.instructions+=1;goto B6cbd82;
case 0x6cbd84:goto L6cbd84;
case 0x6cbd8a:c.instructions+=6;goto B6cbd8a;
case 0x6cbd8d:c.instructions+=5;goto B6cbd8d;
case 0x6cbd90:c.instructions+=4;goto B6cbd90;
case 0x6cbd93:c.instructions+=3;goto B6cbd93;
case 0x6cbd96:c.instructions+=2;goto B6cbd96;
case 0x6cbd99:c.instructions+=1;goto B6cbd99;
case 0x6cbd9c:goto L6cbd9c;
case 0x6cbd9f:goto L6cbd9f;
case 0x6cbda0:c.instructions+=2;goto B6cbda0;
case 0x6cbda3:c.instructions+=1;goto B6cbda3;
case 0x6cbda5:goto L6cbda5;
case 0x6cbda8:c.instructions+=3;goto B6cbda8;
case 0x6cbdab:c.instructions+=2;goto B6cbdab;
case 0x6cbdae:c.instructions+=1;goto B6cbdae;
case 0x6cbdb0:goto L6cbdb0;
case 0x6cbdb3:c.instructions+=2;goto B6cbdb3;
case 0x6cbdb5:c.instructions+=1;goto B6cbdb5;
case 0x6cbdba:goto L6cbdba;
case 0x6cbdbc:c.instructions+=2;goto B6cbdbc;
case 0x6cbdbe:c.instructions+=1;goto B6cbdbe;
case 0x6cbdc0:goto L6cbdc0;
case 0x6cbdc3:c.instructions+=1;goto B6cbdc3;
case 0x6cbdc5:goto L6cbdc5;
case 0x6cbdc8:c.instructions+=1;goto B6cbdc8;
case 0x6cbdca:goto L6cbdca;
case 0x6cbdcd:c.instructions+=2;goto B6cbdcd;
case 0x6cbdcf:c.instructions+=1;goto B6cbdcf;
case 0x6cbdd4:goto L6cbdd4;
case 0x6cbdd6:c.instructions+=5;goto B6cbdd6;
case 0x6cbdd7:c.instructions+=4;goto B6cbdd7;
case 0x6cbdd8:c.instructions+=3;goto B6cbdd8;
case 0x6cbdd9:c.instructions+=2;goto B6cbdd9;
case 0x6cbdda:c.instructions+=1;goto B6cbdda;
case 0x6cbddd:goto L6cbddd;
case 0x6cbddf:c.instructions+=5;goto B6cbddf;
case 0x6cbde0:c.instructions+=4;goto B6cbde0;
case 0x6cbde2:c.instructions+=3;goto B6cbde2;
case 0x6cbde5:c.instructions+=2;goto B6cbde5;
case 0x6cbde6:c.instructions+=1;goto B6cbde6;
case 0x6cbde9:goto L6cbde9;
case 0x6cbdeb:c.instructions+=5;goto B6cbdeb;
case 0x6cbdec:c.instructions+=4;goto B6cbdec;
case 0x6cbdee:c.instructions+=3;goto B6cbdee;
case 0x6cbdef:c.instructions+=2;goto B6cbdef;
case 0x6cbdf2:c.instructions+=1;goto B6cbdf2;
case 0x6cbdf4:goto L6cbdf4;
case 0x6cbdf7:c.instructions+=2;goto B6cbdf7;
case 0x6cbdf8:c.instructions+=1;goto B6cbdf8;
case 0x6cbdfa:goto L6cbdfa;
case 0x6cbdfd:c.instructions+=1;goto B6cbdfd;
case 0x6cbdff:goto L6cbdff;
case 0x6cbe00:c.instructions+=2;goto B6cbe00;
case 0x6cbe01:c.instructions+=1;goto B6cbe01;
case 0x6cbe03:goto L6cbe03;
case 0x6cbe04:c.instructions+=1;goto B6cbe04;
case 0x6cbe06:goto L6cbe06;
case 0x6cbe07:c.instructions+=2;goto B6cbe07;
case 0x6cbe08:c.instructions+=1;goto B6cbe08;
case 0x6cbe0a:goto L6cbe0a;
case 0x6cbe0d:c.instructions+=1;goto B6cbe0d;
case 0x6cbe0f:goto L6cbe0f;
case 0x6cbe12:goto L6cbe12;
case 0x6cbe14:c.instructions+=1;goto B6cbe14;
case 0x6cbe16:goto L6cbe16;
case 0x6cbe18:c.instructions+=1;goto B6cbe18;
case 0x6cbe1a:goto L6cbe1a;
case 0x6cbe1d:c.instructions+=2;goto B6cbe1d;
case 0x6cbe21:c.instructions+=1;goto B6cbe21;
case 0x6cbe23:goto L6cbe23;
case 0x6cbe26:c.instructions+=1;goto B6cbe26;
case 0x6cbe2b:goto L6cbe2b;
case 0x6cbe2f:c.instructions+=1;goto B6cbe2f;
case 0x6cbe31:goto L6cbe31;
case 0x6cbe32:c.instructions+=2;goto B6cbe32;
case 0x6cbe35:c.instructions+=1;goto B6cbe35;
case 0x6cbe3a:goto L6cbe3a;
case 0x6cbe3d:c.instructions+=2;goto B6cbe3d;
case 0x6cbe3f:c.instructions+=1;goto B6cbe3f;
case 0x6cbe44:goto L6cbe44;
case 0x6cbe46:c.instructions+=1;goto B6cbe46;
case 0x6cbe47:goto L6cbe47;
case 0x6cbe48:c.instructions+=2;goto B6cbe48;
case 0x6cbe49:c.instructions+=1;goto B6cbe49;
case 0x6cbe4c:goto L6cbe4c;
case 0x6cbe4e:c.instructions+=7;goto B6cbe4e;
case 0x6cbe4f:c.instructions+=6;goto B6cbe4f;
case 0x6cbe51:c.instructions+=5;goto B6cbe51;
case 0x6cbe54:c.instructions+=4;goto B6cbe54;
case 0x6cbe55:c.instructions+=3;goto B6cbe55;
case 0x6cbe57:c.instructions+=2;goto B6cbe57;
case 0x6cbe5a:c.instructions+=1;goto B6cbe5a;
case 0x6cbe5c:goto L6cbe5c;
case 0x6cbe5f:c.instructions+=3;goto B6cbe5f;
case 0x6cbe60:c.instructions+=2;goto B6cbe60;
case 0x6cbe63:c.instructions+=1;goto B6cbe63;
case 0x6cbe64:goto L6cbe64;
case 0x6cbe67:c.instructions+=2;goto B6cbe67;
case 0x6cbe68:c.instructions+=1;goto B6cbe68;
case 0x6cbe6e:goto L6cbe6e;
case 0x6cbe71:c.instructions+=1;goto B6cbe71;
case 0x6cbe73:goto L6cbe73;
case 0x6cbe76:c.instructions+=3;goto B6cbe76;
case 0x6cbe79:c.instructions+=2;goto B6cbe79;
case 0x6cbe7c:c.instructions+=1;goto B6cbe7c;
case 0x6cbe7e:goto L6cbe7e;
case 0x6cbe7f:c.instructions+=1;goto B6cbe7f;
case 0x6cbe81:goto L6cbe81;
case 0x6cbe86:c.instructions+=1;goto B6cbe86;
case 0x6cbe8b:goto L6cbe8b;
case 0x6cbe8d:c.instructions+=1;goto B6cbe8d;
case 0x6cbe92:goto L6cbe92;
case 0x6cbe94:c.instructions+=10;goto B6cbe94;
case 0x6cbe97:c.instructions+=9;goto B6cbe97;
case 0x6cbe98:c.instructions+=8;goto B6cbe98;
case 0x6cbe99:c.instructions+=7;goto B6cbe99;
case 0x6cbe9a:c.instructions+=6;goto B6cbe9a;
case 0x6cbe9b:c.instructions+=5;goto B6cbe9b;
case 0x6cbe9e:c.instructions+=4;goto B6cbe9e;
case 0x6cbea0:c.instructions+=3;goto B6cbea0;
case 0x6cbea2:c.instructions+=2;goto B6cbea2;
case 0x6cbea3:c.instructions+=1;goto B6cbea3;
case 0x6cbea5:goto L6cbea5;
case 0x6cbea6:c.instructions+=1;goto B6cbea6;
case 0x6cbea8:goto L6cbea8;
case 0x6cbea9:c.instructions+=1;goto B6cbea9;
case 0x6cbeab:goto L6cbeab;
case 0x6cbeac:c.instructions+=1;goto B6cbeac;
case 0x6cbeae:goto L6cbeae;
case 0x6cbeb4:c.instructions+=1;goto B6cbeb4;
case 0x6cbeb6:goto L6cbeb6;
case 0x6cbeb9:c.instructions+=6;goto B6cbeb9;
case 0x6cbebc:c.instructions+=5;goto B6cbebc;
case 0x6cbebe:c.instructions+=4;goto B6cbebe;
case 0x6cbec1:c.instructions+=3;goto B6cbec1;
case 0x6cbec3:c.instructions+=2;goto B6cbec3;
case 0x6cbec7:c.instructions+=1;goto B6cbec7;
case 0x6cbec9:goto L6cbec9;
case 0x6cbecf:c.instructions+=1;goto B6cbecf;
case 0x6cbed1:goto L6cbed1;
case 0x6cbed5:goto L6cbed5;
case 0x6cbed8:c.instructions+=2;goto B6cbed8;
case 0x6cbedb:c.instructions+=1;goto B6cbedb;
case 0x6cbee1:goto L6cbee1;
case 0x6cbee8:goto L6cbee8;
case 0x6cbeee:c.instructions+=1;goto B6cbeee;
case 0x6cbef3:goto L6cbef3;
case 0x6cbef9:c.instructions+=1;goto B6cbef9;
case 0x6cbefe:goto L6cbefe;
case 0x6cbf02:c.instructions+=1;goto B6cbf02;
case 0x6cbf07:goto L6cbf07;
case 0x6cbf0d:c.instructions+=1;goto B6cbf0d;
case 0x6cbf12:goto L6cbf12;
case 0x6cbf18:c.instructions+=1;goto B6cbf18;
case 0x6cbf1d:goto L6cbf1d;
case 0x6cbf23:c.instructions+=1;goto B6cbf23;
case 0x6cbf25:goto L6cbf25;
case 0x6cbf2b:c.instructions+=1;goto B6cbf2b;
case 0x6cbf2d:goto L6cbf2d;
case 0x6cbf33:c.instructions+=1;goto B6cbf33;
case 0x6cbf35:goto L6cbf35;
case 0x6cbf3b:c.instructions+=1;goto B6cbf3b;
case 0x6cbf3d:goto L6cbf3d;
case 0x6cbf40:c.instructions+=2;goto B6cbf40;
case 0x6cbf45:c.instructions+=1;goto B6cbf45;
case 0x6cbf47:goto L6cbf47;
case 0x6cbf4d:c.instructions+=1;goto B6cbf4d;
case 0x6cbf4f:goto L6cbf4f;
case 0x6cbf54:c.instructions+=1;goto B6cbf54;
case 0x6cbf56:goto L6cbf56;
case 0x6cbf5c:c.instructions+=1;goto B6cbf5c;
case 0x6cbf5e:goto L6cbf5e;
case 0x6cbf61:c.instructions+=4;goto B6cbf61;
case 0x6cbf64:c.instructions+=3;goto B6cbf64;
case 0x6cbf68:c.instructions+=2;goto B6cbf68;
case 0x6cbf6c:c.instructions+=1;goto B6cbf6c;
case 0x6cbf6e:goto L6cbf6e;
case 0x6cbf74:c.instructions+=1;goto B6cbf74;
case 0x6cbf76:goto L6cbf76;
case 0x6cbf7c:c.instructions+=1;goto B6cbf7c;
case 0x6cbf7e:goto L6cbf7e;
case 0x6cbf84:c.instructions+=1;goto B6cbf84;
case 0x6cbf86:goto L6cbf86;
case 0x6cbf8c:c.instructions+=1;goto B6cbf8c;
case 0x6cbf8e:goto L6cbf8e;
case 0x6cbf94:c.instructions+=1;goto B6cbf94;
case 0x6cbf96:goto L6cbf96;
case 0x6cbf9c:c.instructions+=1;goto B6cbf9c;
case 0x6cbf9e:goto L6cbf9e;
case 0x6cbfa2:goto L6cbfa2;
case 0x6cbfa6:c.instructions+=11;goto B6cbfa6;
case 0x6cbfa9:c.instructions+=10;goto B6cbfa9;
case 0x6cbfad:c.instructions+=9;goto B6cbfad;
case 0x6cbfb1:c.instructions+=8;goto B6cbfb1;
case 0x6cbfb2:c.instructions+=7;goto B6cbfb2;
case 0x6cbfb6:c.instructions+=6;goto B6cbfb6;
case 0x6cbfb8:c.instructions+=5;goto B6cbfb8;
case 0x6cbfbb:c.instructions+=4;goto B6cbfbb;
case 0x6cbfbf:c.instructions+=3;goto B6cbfbf;
case 0x6cbfc2:c.instructions+=2;goto B6cbfc2;
case 0x6cbfc3:c.instructions+=1;goto B6cbfc3;
case 0x6cbfc8:goto L6cbfc8;
case 0x6cbfca:c.instructions+=1;goto B6cbfca;
case 0x6cbfcf:goto L6cbfcf;
case 0x6cbfd1:c.instructions+=10;goto B6cbfd1;
case 0x6cbfd4:c.instructions+=9;goto B6cbfd4;
case 0x6cbfd5:c.instructions+=8;goto B6cbfd5;
case 0x6cbfd6:c.instructions+=7;goto B6cbfd6;
case 0x6cbfd7:c.instructions+=6;goto B6cbfd7;
case 0x6cbfd8:c.instructions+=5;goto B6cbfd8;
case 0x6cbfd9:c.instructions+=4;goto B6cbfd9;
case 0x6cbfdf:c.instructions+=3;goto B6cbfdf;
case 0x6cbfe3:c.instructions+=2;goto B6cbfe3;
case 0x6cbfe9:c.instructions+=1;goto B6cbfe9;
case 0x6cbfee:goto L6cbfee;
case 0x6cbff2:c.instructions+=5;goto B6cbff2;
case 0x6cbff6:c.instructions+=4;goto B6cbff6;
case 0x6cbff8:c.instructions+=3;goto B6cbff8;
case 0x6cbffc:c.instructions+=2;goto B6cbffc;
case 0x6cbfff:c.instructions+=1;goto B6cbfff;
default:missing_instruction(c.pc);}
B6cb002:L6cb002:{c.instructions+=4;NFSU2_TR(0x6cb002);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb005:{NFSU2_TR(0x6cb005);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb008:{NFSU2_TR(0x6cb008);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb00b:{NFSU2_TR(0x6cb00b);
if(r1(R+518)){{goto L6cb7a6;}}
}
B6cb011:L6cb011:{c.instructions+=8;NFSU2_TR(0x6cb011);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb014:{NFSU2_TR(0x6cb014);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cb016:{NFSU2_TR(0x6cb016);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cb019:{NFSU2_TR(0x6cb019);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6cb01c:{NFSU2_TR(0x6cb01c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb01f:{NFSU2_TR(0x6cb01f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb022:{NFSU2_TR(0x6cb022);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb025:{NFSU2_TR(0x6cb025);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cb499;}}
}
B6cb02b:L6cb02b:{c.instructions+=2;NFSU2_TR(0x6cb02b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb02e:{NFSU2_TR(0x6cb02e);
if(r1(R+518)){{goto L6cb03c;}}
}
B6cb030:L6cb030:{c.instructions+=2;NFSU2_TR(0x6cb030);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11200000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cb036:{NFSU2_TR(0x6cb036);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cb2fe;}}
}
B6cb03c:L6cb03c:{c.instructions+=4;NFSU2_TR(0x6cb03c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb03f:{NFSU2_TR(0x6cb03f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cb041:{NFSU2_TR(0x6cb041);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb044:{NFSU2_TR(0x6cb044);
if(r1(R+518)){{goto L6cb051;}}
}
B6cb046:L6cb046:{c.instructions+=3;NFSU2_TR(0x6cb046);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb049:{NFSU2_TR(0x6cb049);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb04c:{NFSU2_TR(0x6cb04c);
if(r1(R+518)){{goto L6cb051;}}
}
B6cb04e:L6cb04e:{c.instructions+=1;NFSU2_TR(0x6cb04e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb051:L6cb051:{c.instructions+=2;NFSU2_TR(0x6cb051);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb052:{NFSU2_TR(0x6cb052);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cb057ull));
TAIL_STATIC(0x6caa73u,6ca);
}
B6cb057:L6cb057:{c.instructions+=2;NFSU2_TR(0x6cb057);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cb059:{NFSU2_TR(0x6cb059);
if(r1(R+518)){{goto L6cb235;}}
}
B6cb05f:L6cb05f:{c.instructions+=2;NFSU2_TR(0x6cb05f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb063:{NFSU2_TR(0x6cb063);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cb7b2;}}
}
B6cb069:L6cb069:{c.instructions+=2;NFSU2_TR(0x6cb069);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb06c:{NFSU2_TR(0x6cb06c);
if(r1(R+518)){{goto L6cb090;}}
}
B6cb06e:L6cb06e:{c.instructions+=4;NFSU2_TR(0x6cb06e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb070:{NFSU2_TR(0x6cb070);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb071:{NFSU2_TR(0x6cb071);
__builtin_memmove((R+4),(R+28),4);
}
B6cb073:{NFSU2_TR(0x6cb073);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cb078ull));
TAIL_STATIC(0x6caadfu,6ca);
}
B6cb078:L6cb078:{c.instructions+=2;NFSU2_TR(0x6cb078);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6cb07a:{NFSU2_TR(0x6cb07a);
if(r1(R+518)){{goto L6cb82d;}}
}
B6cb080:L6cb080:{c.instructions+=3;NFSU2_TR(0x6cb080);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb081:{NFSU2_TR(0x6cb081);
__builtin_memmove((R+4),(R+28),4);
}
B6cb083:{NFSU2_TR(0x6cb083);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cb088ull));
TAIL_STATIC(0x699b26u,699);
}
B6cb088:L6cb088:{c.instructions+=2;NFSU2_TR(0x6cb088);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6cb08a:{NFSU2_TR(0x6cb08a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cb845;}}
}
B6cb090:L6cb090:{c.instructions+=24;NFSU2_TR(0x6cb090);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb093:{NFSU2_TR(0x6cb093);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb094:{NFSU2_TR(0x6cb094);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb095:{NFSU2_TR(0x6cb095);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb096:{NFSU2_TR(0x6cb096);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cb099:{NFSU2_TR(0x6cb099);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6cb09a:{NFSU2_TR(0x6cb09a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cb09d:{NFSU2_TR(0x6cb09d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb0a0:{NFSU2_TR(0x6cb0a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb0a3:{NFSU2_TR(0x6cb0a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cb0a6:{NFSU2_TR(0x6cb0a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb0a7:{NFSU2_TR(0x6cb0a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdc8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cb0ad:{NFSU2_TR(0x6cb0ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb0ae:{NFSU2_TR(0x6cb0ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbc8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cb0b4:{NFSU2_TR(0x6cb0b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb0b5:{NFSU2_TR(0x6cb0b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cb0b8:{NFSU2_TR(0x6cb0b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb0b9:{NFSU2_TR(0x6cb0b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb0bc:{NFSU2_TR(0x6cb0bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb0bf:{NFSU2_TR(0x6cb0bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb0c2:{NFSU2_TR(0x6cb0c2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb0c4:{NFSU2_TR(0x6cb0c4);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6cb0c6:{NFSU2_TR(0x6cb0c6);
__builtin_memmove((R+4),(R+28),4);
}
B6cb0c8:{NFSU2_TR(0x6cb0c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cb0cdull));
TAIL_STATIC(0x6cafc7u,6ca);
}
B6cb0cd:L6cb0cd:{c.instructions+=2;NFSU2_TR(0x6cb0cd);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6cb0cf:{NFSU2_TR(0x6cb0cf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cb845;}}
}
B6cb0d5:L6cb0d5:{c.instructions+=2;NFSU2_TR(0x6cb0d5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb0d8:{NFSU2_TR(0x6cb0d8);
if(r1(R+518)){{goto L6cb0fb;}}
}
B6cb0da:L6cb0da:{c.instructions+=4;NFSU2_TR(0x6cb0da);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb0db:{NFSU2_TR(0x6cb0db);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb0dc:{NFSU2_TR(0x6cb0dc);
__builtin_memmove((R+4),(R+28),4);
}
B6cb0de:{NFSU2_TR(0x6cb0de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cb0e3ull));
TAIL_STATIC(0x6caadfu,6ca);
}
B6cb0e3:L6cb0e3:{c.instructions+=2;NFSU2_TR(0x6cb0e3);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6cb0e5:{NFSU2_TR(0x6cb0e5);
if(r1(R+518)){{goto L6cb82d;}}
}
B6cb0eb:L6cb0eb:{c.instructions+=3;NFSU2_TR(0x6cb0eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb0ec:{NFSU2_TR(0x6cb0ec);
__builtin_memmove((R+4),(R+28),4);
}
B6cb0ee:{NFSU2_TR(0x6cb0ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cb0f3ull));
TAIL_STATIC(0x699b26u,699);
}
B6cb0f3:L6cb0f3:{c.instructions+=2;NFSU2_TR(0x6cb0f3);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6cb0f5:{NFSU2_TR(0x6cb0f5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cb845;}}
}
B6cb0fb:L6cb0fb:{c.instructions+=20;NFSU2_TR(0x6cb0fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb0fe:{NFSU2_TR(0x6cb0fe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb0ff:{NFSU2_TR(0x6cb0ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb100:{NFSU2_TR(0x6cb100);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb101:{NFSU2_TR(0x6cb101);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cb104:{NFSU2_TR(0x6cb104);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb107:{NFSU2_TR(0x6cb107);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cb10a:{NFSU2_TR(0x6cb10a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cb10d:{NFSU2_TR(0x6cb10d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb10e:{NFSU2_TR(0x6cb10e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9c8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cb114:{NFSU2_TR(0x6cb114);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb115:{NFSU2_TR(0x6cb115);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff7c8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cb11b:{NFSU2_TR(0x6cb11b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb11c:{NFSU2_TR(0x6cb11c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cb11f:{NFSU2_TR(0x6cb11f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb120:{NFSU2_TR(0x6cb120);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb123:{NFSU2_TR(0x6cb123);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb124:{NFSU2_TR(0x6cb124);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6cb126:{NFSU2_TR(0x6cb126);
__builtin_memmove((R+4),(R+28),4);
}
B6cb128:{NFSU2_TR(0x6cb128);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cb12dull));
TAIL_STATIC(0x6cafc7u,6ca);
}
B6cb12d:L6cb12d:{c.instructions+=2;NFSU2_TR(0x6cb12d);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6cb12f:{NFSU2_TR(0x6cb12f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cb845;}}
}
B6cb135:L6cb135:{c.instructions+=2;NFSU2_TR(0x6cb135);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb138:{NFSU2_TR(0x6cb138);
if(r1(R+518)){{goto L6cb227;}}
}
B6cb13e:L6cb13e:{c.instructions+=4;NFSU2_TR(0x6cb13e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb141:{NFSU2_TR(0x6cb141);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb144:{NFSU2_TR(0x6cb144);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cb14b:{NFSU2_TR(0x6cb14b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cb7b9;}}
}
B6cb151:L6cb151:{c.instructions+=3;NFSU2_TR(0x6cb151);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6cb153:{NFSU2_TR(0x6cb153);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cb155:{NFSU2_TR(0x6cb155);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cb179;}}
}
B6cb157:L6cb157:{c.instructions+=3;NFSU2_TR(0x6cb157);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffff9c8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6cb15e:{NFSU2_TR(0x6cb15e);
u8 U[24];
w4(U+0,u32(u32(u32(0xfffffdc8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+4))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6cb165:{NFSU2_TR(0x6cb165);
if(r1(R+518)){{goto L6cb16a;}}
}
B6cb167:L6cb167:{c.instructions+=1;NFSU2_TR(0x6cb167);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb16a:L6cb16a:{c.instructions+=3;NFSU2_TR(0x6cb16a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6cb16b:{NFSU2_TR(0x6cb16b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6cb16e:{NFSU2_TR(0x6cb16e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cb157u);}goto L6cb157;}}
}
B6cb170:L6cb170:{c.instructions+=2;NFSU2_TR(0x6cb170);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb173:{NFSU2_TR(0x6cb173);
if(r1(R+518)){{goto L6cb7b9;}}
}
B6cb179:L6cb179:{c.instructions+=2;NFSU2_TR(0x6cb179);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb17b:{NFSU2_TR(0x6cb17b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cb180ull));
TAIL_STATIC(0x699317u,699);
}
B6cb180:L6cb180:{c.instructions+=2;NFSU2_TR(0x6cb180);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cb182:{NFSU2_TR(0x6cb182);
if(r1(R+518)){{goto L6cb18f;}}
}
B6cb184:L6cb184:{c.instructions+=2;NFSU2_TR(0x6cb184);
__builtin_memmove((R+4),(R+0),4);
}
B6cb186:{NFSU2_TR(0x6cb186);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cb18bull));
TAIL_STATIC(0x698e7du,698);
}
B6cb18b:L6cb18b:{c.instructions+=2;NFSU2_TR(0x6cb18b);
__builtin_memmove((R+28),(R+0),4);
}
B6cb18d:{NFSU2_TR(0x6cb18d);
{goto L6cb191;}
}
B6cb18f:L6cb18f:{c.instructions+=1;NFSU2_TR(0x6cb18f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6cb191:L6cb191:{c.instructions+=3;NFSU2_TR(0x6cb191);
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
B6cb193:{NFSU2_TR(0x6cb193);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb196:{NFSU2_TR(0x6cb196);
if(r1(R+518)){{goto L6cb82d;}}
}
B6cb19c:L6cb19c:{c.instructions+=10;NFSU2_TR(0x6cb19c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb19f:{NFSU2_TR(0x6cb19f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb1a0:{NFSU2_TR(0x6cb1a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb1a1:{NFSU2_TR(0x6cb1a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6cb1a4:{NFSU2_TR(0x6cb1a4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6cb1a9:{NFSU2_TR(0x6cb1a9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb1aa:{NFSU2_TR(0x6cb1aa);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x73400000ull))));
}
B6cb1af:{NFSU2_TR(0x6cb1af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb1b0:{NFSU2_TR(0x6cb1b0);
__builtin_memmove((R+4),(R+28),4);
}
B6cb1b2:{NFSU2_TR(0x6cb1b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cb1b7ull));
TAIL_STATIC(0x699362u,699);
}
B6cb1b7:L6cb1b7:{c.instructions+=4;NFSU2_TR(0x6cb1b7);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6cb1b9:{NFSU2_TR(0x6cb1b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb1bc:{NFSU2_TR(0x6cb1bc);
__builtin_memmove((R+4),(R+28),4);
}
B6cb1be:{NFSU2_TR(0x6cb1be);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cb7c9;}}
}
B6cb1c4:L6cb1c4:{c.instructions+=2;NFSU2_TR(0x6cb1c4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb1c5:{NFSU2_TR(0x6cb1c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cb1caull));
TAIL_STATIC(0x698eb3u,698);
}
B6cb1ca:L6cb1ca:{c.instructions+=3;NFSU2_TR(0x6cb1ca);
__builtin_memmove((R+12),(R+0),4);
}
B6cb1cc:{NFSU2_TR(0x6cb1cc);
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
B6cb1ce:{NFSU2_TR(0x6cb1ce);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cb7c5;}}
}
B6cb1d4:L6cb1d4:{c.instructions+=4;NFSU2_TR(0x6cb1d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb1d7:{NFSU2_TR(0x6cb1d7);
__builtin_memmove((R+0),(R+28),4);
}
B6cb1d9:{NFSU2_TR(0x6cb1d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cb1dc:{NFSU2_TR(0x6cb1dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9c8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6cb1e2:L6cb1e2:{c.instructions+=1;NFSU2_TR(0x6cb1e2);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6cb1e4;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cb1e2u);}goto L6cb1e2;}
}
B6cb1e4:L6cb1e4:{c.instructions+=3;NFSU2_TR(0x6cb1e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb1e7:{NFSU2_TR(0x6cb1e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cb1ea:{NFSU2_TR(0x6cb1ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbc8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6cb1f0:L6cb1f0:{c.instructions+=1;NFSU2_TR(0x6cb1f0);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6cb1f2;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cb1f0u);}goto L6cb1f0;}
}
B6cb1f2:L6cb1f2:{c.instructions+=7;NFSU2_TR(0x6cb1f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb1f5:{NFSU2_TR(0x6cb1f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cb1f8:{NFSU2_TR(0x6cb1f8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6cb1fb:{NFSU2_TR(0x6cb1fb);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B6cb1fd:{NFSU2_TR(0x6cb1fd);
__builtin_memmove((R+8),(R+4),4);
}
B6cb1ff:{NFSU2_TR(0x6cb1ff);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6cb202:{NFSU2_TR(0x6cb202);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff7c8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6cb208:L6cb208:{c.instructions+=1;NFSU2_TR(0x6cb208);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6cb20a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cb208u);}goto L6cb208;}
}
B6cb20a:L6cb20a:{c.instructions+=2;NFSU2_TR(0x6cb20a);
__builtin_memmove((R+4),(R+8),4);
}
B6cb20c:{NFSU2_TR(0x6cb20c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6cb20f:L6cb20f:{c.instructions+=1;NFSU2_TR(0x6cb20f);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6cb211;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cb20fu);}goto L6cb20f;}
}
B6cb211:L6cb211:{c.instructions+=3;NFSU2_TR(0x6cb211);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb214:{NFSU2_TR(0x6cb214);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb215:{NFSU2_TR(0x6cb215);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cb21aull));
TAIL_STATIC(0x699b26u,699);
}
B6cb21a:L6cb21a:{c.instructions+=2;NFSU2_TR(0x6cb21a);
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
B6cb21c:{NFSU2_TR(0x6cb21c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cb845;}}
}
B6cb222:L6cb222:{c.instructions+=2;NFSU2_TR(0x6cb222);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cb225:{NFSU2_TR(0x6cb225);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6cb227:L6cb227:{c.instructions+=5;NFSU2_TR(0x6cb227);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb22a:{NFSU2_TR(0x6cb22a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb22d:{NFSU2_TR(0x6cb22d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb230:{NFSU2_TR(0x6cb230);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb233:{NFSU2_TR(0x6cb233);
{goto L6cb29f;}
}
B6cb235:L6cb235:{c.instructions+=2;NFSU2_TR(0x6cb235);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb236:{NFSU2_TR(0x6cb236);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cb23bull));
TAIL_STATIC(0x6caaa9u,6ca);
}
B6cb23b:L6cb23b:{c.instructions+=2;NFSU2_TR(0x6cb23b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cb23d:{NFSU2_TR(0x6cb23d);
if(r1(R+518)){{goto L6cb2a7;}}
}
B6cb23f:L6cb23f:{c.instructions+=6;NFSU2_TR(0x6cb23f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb242:{NFSU2_TR(0x6cb242);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6cb243:{NFSU2_TR(0x6cb243);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb246:{NFSU2_TR(0x6cb246);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb249:{NFSU2_TR(0x6cb249);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb24c:{NFSU2_TR(0x6cb24c);
if(r1(R+518)){{goto L6cb267;}}
}
B6cb24e:L6cb24e:{c.instructions+=3;NFSU2_TR(0x6cb24e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb24f:{NFSU2_TR(0x6cb24f);
__builtin_memmove((R+4),(R+28),4);
}
B6cb251:{NFSU2_TR(0x6cb251);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cb256ull));
TAIL_STATIC(0x699d92u,699);
}
B6cb256:L6cb256:{c.instructions+=2;NFSU2_TR(0x6cb256);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6cb258:{NFSU2_TR(0x6cb258);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cb845;}}
}
B6cb25e:L6cb25e:{c.instructions+=3;NFSU2_TR(0x6cb25e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb261:{NFSU2_TR(0x6cb261);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb264:{NFSU2_TR(0x6cb264);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb267:L6cb267:{c.instructions+=18;NFSU2_TR(0x6cb267);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb268:{NFSU2_TR(0x6cb268);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb269:{NFSU2_TR(0x6cb269);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb26a:{NFSU2_TR(0x6cb26a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cb26d:{NFSU2_TR(0x6cb26d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cb270:{NFSU2_TR(0x6cb270);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cb273:{NFSU2_TR(0x6cb273);
__builtin_memmove((R+4),(R+28),4);
}
B6cb275:{NFSU2_TR(0x6cb275);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb276:{NFSU2_TR(0x6cb276);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdc8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cb27c:{NFSU2_TR(0x6cb27c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb27d:{NFSU2_TR(0x6cb27d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbc8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cb283:{NFSU2_TR(0x6cb283);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb284:{NFSU2_TR(0x6cb284);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cb287:{NFSU2_TR(0x6cb287);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb288:{NFSU2_TR(0x6cb288);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb28b:{NFSU2_TR(0x6cb28b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb28d:{NFSU2_TR(0x6cb28d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6cb28f:{NFSU2_TR(0x6cb28f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cb294ull));
TAIL_STATIC(0x6cafc7u,6ca);
}
B6cb294:L6cb294:{c.instructions+=2;NFSU2_TR(0x6cb294);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6cb296:{NFSU2_TR(0x6cb296);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cb845;}}
}
B6cb29c:L6cb29c:{c.instructions+=1;NFSU2_TR(0x6cb29c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb29f:L6cb29f:{c.instructions+=2;NFSU2_TR(0x6cb29f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb2a2:{NFSU2_TR(0x6cb2a2);
{goto L6cb795;}
}
B6cb2a7:L6cb2a7:{c.instructions+=2;NFSU2_TR(0x6cb2a7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cb2ad:{NFSU2_TR(0x6cb2ad);
if(r1(R+518)){{goto L6cb315;}}
}
B6cb2af:L6cb2af:{c.instructions+=2;NFSU2_TR(0x6cb2af);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x74100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cb2b5:{NFSU2_TR(0x6cb2b5);
if(r1(R+518)){{goto L6cb315;}}
}
B6cb2b7:L6cb2b7:{c.instructions+=2;NFSU2_TR(0x6cb2b7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11200000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cb2bd:{NFSU2_TR(0x6cb2bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cb306;}}
}
B6cb2bf:L6cb2bf:{c.instructions+=2;NFSU2_TR(0x6cb2bf);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb2c2:{NFSU2_TR(0x6cb2c2);
if(r1(R+518)){{goto L6cb2fe;}}
}
B6cb2c4:L6cb2c4:{c.instructions+=2;NFSU2_TR(0x6cb2c4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb2c7:{NFSU2_TR(0x6cb2c7);
if(r1(R+518)){{goto L6cb2fe;}}
}
B6cb2c9:L6cb2c9:{c.instructions+=3;NFSU2_TR(0x6cb2c9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6cb2cb:{NFSU2_TR(0x6cb2cb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb2ce:{NFSU2_TR(0x6cb2ce);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cb2ee;}}
}
B6cb2d0:L6cb2d0:{c.instructions+=11;NFSU2_TR(0x6cb2d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb2d3:{NFSU2_TR(0x6cb2d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cb2d6:{NFSU2_TR(0x6cb2d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cb2d9:{NFSU2_TR(0x6cb2d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cb2dc:{NFSU2_TR(0x6cb2dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cb2df:{NFSU2_TR(0x6cb2df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb2e2:{NFSU2_TR(0x6cb2e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cb2e5:{NFSU2_TR(0x6cb2e5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6cb2e6:{NFSU2_TR(0x6cb2e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6cb2e9:{NFSU2_TR(0x6cb2e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb2ec:{NFSU2_TR(0x6cb2ec);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cb2d0u);}goto L6cb2d0;}}
}
B6cb2ee:L6cb2ee:{c.instructions+=3;NFSU2_TR(0x6cb2ee);
__builtin_memmove((R+4),(R+28),4);
}
B6cb2f0:{NFSU2_TR(0x6cb2f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb2f1:{NFSU2_TR(0x6cb2f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cb2f6ull));
TAIL_STATIC(0x699d92u,699);
}
B6cb2f6:L6cb2f6:{c.instructions+=2;NFSU2_TR(0x6cb2f6);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6cb2f8:{NFSU2_TR(0x6cb2f8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cb845;}}
}
B6cb2fe:L6cb2fe:{c.instructions+=2;NFSU2_TR(0x6cb2fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cb301:{NFSU2_TR(0x6cb301);
{goto L6cb795;}
}
B6cb306:L6cb306:{c.instructions+=2;NFSU2_TR(0x6cb306);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb309:{NFSU2_TR(0x6cb309);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cb2feu);}goto L6cb2fe;}}
}
B6cb30b:L6cb30b:{c.instructions+=3;NFSU2_TR(0x6cb30b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb30e:{NFSU2_TR(0x6cb30e);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb311:{NFSU2_TR(0x6cb311);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cb2feu);}goto L6cb2fe;}}
}
B6cb313:L6cb313:{c.instructions+=1;NFSU2_TR(0x6cb313);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cb2eeu);}goto L6cb2ee;}
}
B6cb315:L6cb315:{c.instructions+=23;NFSU2_TR(0x6cb315);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cb318:{NFSU2_TR(0x6cb318);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb31b:{NFSU2_TR(0x6cb31b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cb31e:{NFSU2_TR(0x6cb31e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6cb31f:{NFSU2_TR(0x6cb31f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb321:{NFSU2_TR(0x6cb321);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cb324:{NFSU2_TR(0x6cb324);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb327:{NFSU2_TR(0x6cb327);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cb32a:{NFSU2_TR(0x6cb32a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb32d:{NFSU2_TR(0x6cb32d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cb330:{NFSU2_TR(0x6cb330);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb331:{NFSU2_TR(0x6cb331);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdc8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cb337:{NFSU2_TR(0x6cb337);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb338:{NFSU2_TR(0x6cb338);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbc8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cb33e:{NFSU2_TR(0x6cb33e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb33f:{NFSU2_TR(0x6cb33f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cb342:{NFSU2_TR(0x6cb342);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb343:{NFSU2_TR(0x6cb343);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb346:{NFSU2_TR(0x6cb346);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb349:{NFSU2_TR(0x6cb349);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb34b:{NFSU2_TR(0x6cb34b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6cb34d:{NFSU2_TR(0x6cb34d);
__builtin_memmove((R+4),(R+28),4);
}
B6cb34f:{NFSU2_TR(0x6cb34f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cb354ull));
TAIL_STATIC(0x6cafc7u,6ca);
}
B6cb354:L6cb354:{c.instructions+=2;NFSU2_TR(0x6cb354);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6cb356:{NFSU2_TR(0x6cb356);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cb845;}}
}
B6cb35c:L6cb35c:{c.instructions+=2;NFSU2_TR(0x6cb35c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb35f:{NFSU2_TR(0x6cb35f);
if(r1(R+518)){{goto L6cb3ae;}}
}
B6cb361:L6cb361:{c.instructions+=4;NFSU2_TR(0x6cb361);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x11100000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb368:{NFSU2_TR(0x6cb368);
__builtin_memmove((R+4),(R+28),4);
}
B6cb36a:{NFSU2_TR(0x6cb36a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb36b:{NFSU2_TR(0x6cb36b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cb398;}}
}
B6cb36d:L6cb36d:{c.instructions+=6;NFSU2_TR(0x6cb36d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb370:{NFSU2_TR(0x6cb370);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6cb375:{NFSU2_TR(0x6cb375);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb378:{NFSU2_TR(0x6cb378);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x74200000ull))));
}
B6cb37d:{NFSU2_TR(0x6cb37d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6cb37f:{NFSU2_TR(0x6cb37f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cb384ull));
TAIL_STATIC(0x699d92u,699);
}
B6cb384:L6cb384:{c.instructions+=2;NFSU2_TR(0x6cb384);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6cb386:{NFSU2_TR(0x6cb386);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cb845;}}
}
B6cb38c:L6cb38c:{c.instructions+=4;NFSU2_TR(0x6cb38c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb38f:{NFSU2_TR(0x6cb38f);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x11100000ull))));
}
B6cb394:{NFSU2_TR(0x6cb394);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6cb396:{NFSU2_TR(0x6cb396);
{goto L6cb3a5;}
}
B6cb398:L6cb398:{c.instructions+=1;NFSU2_TR(0x6cb398);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cb39dull));
TAIL_STATIC(0x699d92u,699);
}
B6cb39d:L6cb39d:{c.instructions+=2;NFSU2_TR(0x6cb39d);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6cb39f:{NFSU2_TR(0x6cb39f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cb845;}}
}
B6cb3a5:L6cb3a5:{c.instructions+=3;NFSU2_TR(0x6cb3a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb3a8:{NFSU2_TR(0x6cb3a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb3ab:{NFSU2_TR(0x6cb3ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb3ae:L6cb3ae:{c.instructions+=20;NFSU2_TR(0x6cb3ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb3b1:{NFSU2_TR(0x6cb3b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb3b2:{NFSU2_TR(0x6cb3b2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb3b3:{NFSU2_TR(0x6cb3b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb3b4:{NFSU2_TR(0x6cb3b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cb3b7:{NFSU2_TR(0x6cb3b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb3ba:{NFSU2_TR(0x6cb3ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cb3bd:{NFSU2_TR(0x6cb3bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cb3c0:{NFSU2_TR(0x6cb3c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb3c1:{NFSU2_TR(0x6cb3c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdc8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cb3c7:{NFSU2_TR(0x6cb3c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb3c8:{NFSU2_TR(0x6cb3c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbc8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cb3ce:{NFSU2_TR(0x6cb3ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb3cf:{NFSU2_TR(0x6cb3cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cb3d2:{NFSU2_TR(0x6cb3d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb3d3:{NFSU2_TR(0x6cb3d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb3d6:{NFSU2_TR(0x6cb3d6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb3d8:{NFSU2_TR(0x6cb3d8);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6cb3da:{NFSU2_TR(0x6cb3da);
__builtin_memmove((R+4),(R+28),4);
}
B6cb3dc:{NFSU2_TR(0x6cb3dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cb3e1ull));
TAIL_STATIC(0x6cafc7u,6ca);
}
B6cb3e1:L6cb3e1:{c.instructions+=2;NFSU2_TR(0x6cb3e1);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6cb3e3:{NFSU2_TR(0x6cb3e3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cb845;}}
}
B6cb3e9:L6cb3e9:{c.instructions+=2;NFSU2_TR(0x6cb3e9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb3ec:{NFSU2_TR(0x6cb3ec);
if(r1(R+518)){{goto L6cb491;}}
}
B6cb3f2:L6cb3f2:{c.instructions+=9;NFSU2_TR(0x6cb3f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb3f3:{NFSU2_TR(0x6cb3f3);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6cb3f5:{NFSU2_TR(0x6cb3f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb3f6:{NFSU2_TR(0x6cb3f6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6cb3f9:{NFSU2_TR(0x6cb3f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb3fa:{NFSU2_TR(0x6cb3fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb3fb:{NFSU2_TR(0x6cb3fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cb401:{NFSU2_TR(0x6cb401);
__builtin_memmove((R+4),(R+28),4);
}
B6cb403:{NFSU2_TR(0x6cb403);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cb408ull));
TAIL_STATIC(0x699c39u,699);
}
B6cb408:L6cb408:{c.instructions+=3;NFSU2_TR(0x6cb408);
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
B6cb40b:{NFSU2_TR(0x6cb40b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb40e:{NFSU2_TR(0x6cb40e);
if(r1(R+518)){{goto L6cb82d;}}
}
B6cb414:L6cb414:{c.instructions+=2;NFSU2_TR(0x6cb414);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb416:{NFSU2_TR(0x6cb416);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cb41bull));
TAIL_STATIC(0x699317u,699);
}
B6cb41b:L6cb41b:{c.instructions+=2;NFSU2_TR(0x6cb41b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cb41d:{NFSU2_TR(0x6cb41d);
if(r1(R+518)){{goto L6cb42b;}}
}
B6cb41f:L6cb41f:{c.instructions+=2;NFSU2_TR(0x6cb41f);
__builtin_memmove((R+4),(R+0),4);
}
B6cb421:{NFSU2_TR(0x6cb421);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cb426ull));
TAIL_STATIC(0x698e7du,698);
}
B6cb426:L6cb426:{c.instructions+=2;NFSU2_TR(0x6cb426);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb429:{NFSU2_TR(0x6cb429);
{goto L6cb42e;}
}
B6cb42b:L6cb42b:{c.instructions+=1;NFSU2_TR(0x6cb42b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb42e:L6cb42e:{c.instructions+=2;NFSU2_TR(0x6cb42e);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
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
B6cb431:{NFSU2_TR(0x6cb431);
if(r1(R+518)){{goto L6cb82d;}}
}
B6cb437:L6cb437:{c.instructions+=6;NFSU2_TR(0x6cb437);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x11100000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb43e:{NFSU2_TR(0x6cb43e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb441:{NFSU2_TR(0x6cb441);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb442:{NFSU2_TR(0x6cb442);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb444:{NFSU2_TR(0x6cb444);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb445:{NFSU2_TR(0x6cb445);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cb44e;}}
}
B6cb447:L6cb447:{c.instructions+=2;NFSU2_TR(0x6cb447);
u8 U[4];
w4(U+0,u32(0x74b00001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb44c:{NFSU2_TR(0x6cb44c);
{goto L6cb453;}
}
B6cb44e:L6cb44e:{c.instructions+=1;NFSU2_TR(0x6cb44e);
u8 U[4];
w4(U+0,u32(0x74a00001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb453:L6cb453:{c.instructions+=1;NFSU2_TR(0x6cb453);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cb458ull));
TAIL_STATIC(0x699362u,699);
}
B6cb458:L6cb458:{c.instructions+=4;NFSU2_TR(0x6cb458);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6cb45a:{NFSU2_TR(0x6cb45a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb45d:{NFSU2_TR(0x6cb45d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb460:{NFSU2_TR(0x6cb460);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cb7c9;}}
}
B6cb466:L6cb466:{c.instructions+=2;NFSU2_TR(0x6cb466);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb467:{NFSU2_TR(0x6cb467);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cb46cull));
TAIL_STATIC(0x698eb3u,698);
}
B6cb46c:L6cb46c:{c.instructions+=3;NFSU2_TR(0x6cb46c);
__builtin_memmove((R+12),(R+0),4);
}
B6cb46e:{NFSU2_TR(0x6cb46e);
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
B6cb470:{NFSU2_TR(0x6cb470);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cb7d5;}}
}
B6cb476:L6cb476:{c.instructions+=7;NFSU2_TR(0x6cb476);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb479:{NFSU2_TR(0x6cb479);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb47c:{NFSU2_TR(0x6cb47c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cb47f:{NFSU2_TR(0x6cb47f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6cb481:{NFSU2_TR(0x6cb481);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb482:{NFSU2_TR(0x6cb482);
__builtin_memmove((R+4),(R+28),4);
}
B6cb484:{NFSU2_TR(0x6cb484);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cb489ull));
TAIL_STATIC(0x699b26u,699);
}
B6cb489:L6cb489:{c.instructions+=2;NFSU2_TR(0x6cb489);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6cb48b:{NFSU2_TR(0x6cb48b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cb845;}}
}
B6cb491:L6cb491:{c.instructions+=2;NFSU2_TR(0x6cb491);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb494:{NFSU2_TR(0x6cb494);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cb29fu);}goto L6cb29f;}
}
B6cb499:L6cb499:{c.instructions+=2;NFSU2_TR(0x6cb499);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20700000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cb49f:{NFSU2_TR(0x6cb49f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cb83b;}}
}
B6cb4a5:L6cb4a5:{c.instructions+=2;NFSU2_TR(0x6cb4a5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb4a8:{NFSU2_TR(0x6cb4a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cb2feu);}goto L6cb2fe;}}
}
B6cb4ae:L6cb4ae:{c.instructions+=13;NFSU2_TR(0x6cb4ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb4b1:{NFSU2_TR(0x6cb4b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb4b4:{NFSU2_TR(0x6cb4b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6cb4b6:{NFSU2_TR(0x6cb4b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6cb4b9:{NFSU2_TR(0x6cb4b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb4bc:{NFSU2_TR(0x6cb4bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cb4bf:{NFSU2_TR(0x6cb4bf);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6cb4c2:{NFSU2_TR(0x6cb4c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6cb4c5:{NFSU2_TR(0x6cb4c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6cb4c8:{NFSU2_TR(0x6cb4c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb4cb:{NFSU2_TR(0x6cb4cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb4ce:{NFSU2_TR(0x6cb4ce);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb4d1:{NFSU2_TR(0x6cb4d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cb7e3;}}
}
B6cb4d7:L6cb4d7:{c.instructions+=2;NFSU2_TR(0x6cb4d7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb4da:{NFSU2_TR(0x6cb4da);
if(r1(R+518)){{goto L6cb834;}}
}
B6cb4e0:L6cb4e0:{c.instructions+=2;NFSU2_TR(0x6cb4e0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb4e3:{NFSU2_TR(0x6cb4e3);
if(r1(R+518)){{goto L6cb834;}}
}
B6cb4e9:L6cb4e9:{c.instructions+=2;NFSU2_TR(0x6cb4e9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb4ec:{NFSU2_TR(0x6cb4ec);
if(r1(R+518)){{goto L6cb834;}}
}
B6cb4f2:L6cb4f2:{c.instructions+=2;NFSU2_TR(0x6cb4f2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb4f5:{NFSU2_TR(0x6cb4f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cb83b;}}
}
B6cb4fb:L6cb4fb:{c.instructions+=2;NFSU2_TR(0x6cb4fb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb4fe:{NFSU2_TR(0x6cb4fe);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cb2feu);}goto L6cb2fe;}}
}
B6cb504:L6cb504:{c.instructions+=6;NFSU2_TR(0x6cb504);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb507:{NFSU2_TR(0x6cb507);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cb50a:{NFSU2_TR(0x6cb50a);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb50d:{NFSU2_TR(0x6cb50d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cb514:{NFSU2_TR(0x6cb514);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb517:{NFSU2_TR(0x6cb517);
if(r1(R+518)){{goto L6cb51f;}}
}
B6cb519:L6cb519:{c.instructions+=2;NFSU2_TR(0x6cb519);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb51c:{NFSU2_TR(0x6cb51c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb51f:L6cb51f:{c.instructions+=3;NFSU2_TR(0x6cb51f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb522:{NFSU2_TR(0x6cb522);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cb524:{NFSU2_TR(0x6cb524);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cb583;}}
}
B6cb526:L6cb526:{c.instructions+=6;NFSU2_TR(0x6cb526);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cb529:{NFSU2_TR(0x6cb529);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb52c:{NFSU2_TR(0x6cb52c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cb52f:{NFSU2_TR(0x6cb52f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6cb532:{NFSU2_TR(0x6cb532);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb535:{NFSU2_TR(0x6cb535);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb538:L6cb538:{c.instructions+=10;NFSU2_TR(0x6cb538);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb53b:{NFSU2_TR(0x6cb53b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6cb53d:{NFSU2_TR(0x6cb53d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb540:{NFSU2_TR(0x6cb540);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cb543:{NFSU2_TR(0x6cb543);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6cb545:{NFSU2_TR(0x6cb545);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6cb548:{NFSU2_TR(0x6cb548);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cb54b:{NFSU2_TR(0x6cb54b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cb54e:{NFSU2_TR(0x6cb54e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb551:{NFSU2_TR(0x6cb551);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cb573;}}
}
B6cb553:L6cb553:{c.instructions+=3;NFSU2_TR(0x6cb553);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cb556:{NFSU2_TR(0x6cb556);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb559:{NFSU2_TR(0x6cb559);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cb573;}}
}
B6cb55b:L6cb55b:{c.instructions+=3;NFSU2_TR(0x6cb55b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cb55e:{NFSU2_TR(0x6cb55e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb561:{NFSU2_TR(0x6cb561);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cb573;}}
}
B6cb563:L6cb563:{c.instructions+=3;NFSU2_TR(0x6cb563);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cb566:{NFSU2_TR(0x6cb566);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb569:{NFSU2_TR(0x6cb569);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cb573;}}
}
B6cb56b:L6cb56b:{c.instructions+=3;NFSU2_TR(0x6cb56b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb56e:{NFSU2_TR(0x6cb56e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb571:{NFSU2_TR(0x6cb571);
if(r1(R+518)){{goto L6cb576;}}
}
B6cb573:L6cb573:{c.instructions+=1;NFSU2_TR(0x6cb573);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb576:L6cb576:{c.instructions+=4;NFSU2_TR(0x6cb576);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cb57a:{NFSU2_TR(0x6cb57a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cb57e:{NFSU2_TR(0x6cb57e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cb581:{NFSU2_TR(0x6cb581);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cb538u);}goto L6cb538;}}
}
B6cb583:L6cb583:{c.instructions+=5;NFSU2_TR(0x6cb583);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb586:{NFSU2_TR(0x6cb586);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cb588:{NFSU2_TR(0x6cb588);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6cb58b:{NFSU2_TR(0x6cb58b);
w1(R+512,u8((r4(R+0))<(u32(0x80ull))));
}
B6cb590:{NFSU2_TR(0x6cb590);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6cb7ef;}}
}
B6cb596:L6cb596:{c.instructions+=2;NFSU2_TR(0x6cb596);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb599:{NFSU2_TR(0x6cb599);
if(r1(R+518)){{goto L6cb5e2;}}
}
B6cb59b:L6cb59b:{c.instructions+=2;NFSU2_TR(0x6cb59b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb59e:{NFSU2_TR(0x6cb59e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cb785;}}
}
B6cb5a4:L6cb5a4:{c.instructions+=4;NFSU2_TR(0x6cb5a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb5a7:{NFSU2_TR(0x6cb5a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6cb5aa:{NFSU2_TR(0x6cb5aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb5ad:{NFSU2_TR(0x6cb5ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb5b0:L6cb5b0:{c.instructions+=17;NFSU2_TR(0x6cb5b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb5b3:{NFSU2_TR(0x6cb5b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cb5b6:{NFSU2_TR(0x6cb5b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6cb5b9:{NFSU2_TR(0x6cb5b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6cb5bb:{NFSU2_TR(0x6cb5bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cb5be:{NFSU2_TR(0x6cb5be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cb5c2:{NFSU2_TR(0x6cb5c2);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B6cb5c4:{NFSU2_TR(0x6cb5c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6cb5c7:{NFSU2_TR(0x6cb5c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb5ca:{NFSU2_TR(0x6cb5ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6cb5cc:{NFSU2_TR(0x6cb5cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6cb5cf:{NFSU2_TR(0x6cb5cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cb5d2:{NFSU2_TR(0x6cb5d2);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B6cb5d4:{NFSU2_TR(0x6cb5d4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6cb5d5:{NFSU2_TR(0x6cb5d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6cb5d8:{NFSU2_TR(0x6cb5d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6cb5db:{NFSU2_TR(0x6cb5db);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cb5b0u);}goto L6cb5b0;}}
}
B6cb5dd:L6cb5dd:{c.instructions+=1;NFSU2_TR(0x6cb5dd);
{goto L6cb785;}
}
B6cb5e2:L6cb5e2:{c.instructions+=2;NFSU2_TR(0x6cb5e2);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb5e4:{NFSU2_TR(0x6cb5e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cb5e9ull));
TAIL_STATIC(0x699317u,699);
}
B6cb5e9:L6cb5e9:{c.instructions+=2;NFSU2_TR(0x6cb5e9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cb5eb:{NFSU2_TR(0x6cb5eb);
if(r1(R+518)){{goto L6cb5f9;}}
}
B6cb5ed:L6cb5ed:{c.instructions+=2;NFSU2_TR(0x6cb5ed);
__builtin_memmove((R+4),(R+0),4);
}
B6cb5ef:{NFSU2_TR(0x6cb5ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cb5f4ull));
TAIL_STATIC(0x698e7du,698);
}
B6cb5f4:L6cb5f4:{c.instructions+=2;NFSU2_TR(0x6cb5f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb5f7:{NFSU2_TR(0x6cb5f7);
{goto L6cb5fc;}
}
B6cb5f9:L6cb5f9:{c.instructions+=1;NFSU2_TR(0x6cb5f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb5fc:L6cb5fc:{c.instructions+=2;NFSU2_TR(0x6cb5fc);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B6cb5ff:{NFSU2_TR(0x6cb5ff);
if(r1(R+518)){{goto L6cb82d;}}
}
B6cb605:L6cb605:{c.instructions+=9;NFSU2_TR(0x6cb605);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb608:{NFSU2_TR(0x6cb608);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb60b:{NFSU2_TR(0x6cb60b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb60c:{NFSU2_TR(0x6cb60c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cb60f:{NFSU2_TR(0x6cb60f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6cb614:{NFSU2_TR(0x6cb614);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cb617:{NFSU2_TR(0x6cb617);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10000000ull))));
}
B6cb61c:{NFSU2_TR(0x6cb61c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb61d:{NFSU2_TR(0x6cb61d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cb622ull));
TAIL_STATIC(0x699362u,699);
}
B6cb622:L6cb622:{c.instructions+=2;NFSU2_TR(0x6cb622);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6cb624:{NFSU2_TR(0x6cb624);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cb80c;}}
}
B6cb62a:L6cb62a:{c.instructions+=3;NFSU2_TR(0x6cb62a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb62d:{NFSU2_TR(0x6cb62d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb62e:{NFSU2_TR(0x6cb62e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cb633ull));
TAIL_STATIC(0x698eb3u,698);
}
B6cb633:L6cb633:{c.instructions+=2;NFSU2_TR(0x6cb633);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6cb635:{NFSU2_TR(0x6cb635);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cb80c;}}
}
B6cb63b:L6cb63b:{c.instructions+=3;NFSU2_TR(0x6cb63b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cb63e:{NFSU2_TR(0x6cb63e);
__builtin_memmove((R+4),(R+28),4);
}
B6cb640:{NFSU2_TR(0x6cb640);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cb645ull));
TAIL_STATIC(0x699b26u,699);
}
B6cb645:L6cb645:{c.instructions+=2;NFSU2_TR(0x6cb645);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6cb647:{NFSU2_TR(0x6cb647);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cb80c;}}
}
B6cb64d:L6cb64d:{c.instructions+=5;NFSU2_TR(0x6cb64d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb650:{NFSU2_TR(0x6cb650);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb653:{NFSU2_TR(0x6cb653);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb656:{NFSU2_TR(0x6cb656);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cb659:{NFSU2_TR(0x6cb659);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cb674;}}
}
B6cb65b:L6cb65b:{c.instructions+=7;NFSU2_TR(0x6cb65b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb65e:{NFSU2_TR(0x6cb65e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cb661:{NFSU2_TR(0x6cb661);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cb664:{NFSU2_TR(0x6cb664);
__builtin_memmove((R+4),(R+0),4);
}
B6cb666:{NFSU2_TR(0x6cb666);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6cb669:{NFSU2_TR(0x6cb669);
__builtin_memmove((R+8),(R+4),4);
}
B6cb66b:{NFSU2_TR(0x6cb66b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6cb66e:L6cb66e:{c.instructions+=1;NFSU2_TR(0x6cb66e);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6cb670;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cb66eu);}goto L6cb66e;}
}
B6cb670:L6cb670:{c.instructions+=2;NFSU2_TR(0x6cb670);
__builtin_memmove((R+4),(R+8),4);
}
B6cb672:{NFSU2_TR(0x6cb672);
{goto L6cb68e;}
}
B6cb674:L6cb674:{c.instructions+=7;NFSU2_TR(0x6cb674);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb677:{NFSU2_TR(0x6cb677);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb67a:{NFSU2_TR(0x6cb67a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cb67d:{NFSU2_TR(0x6cb67d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6cb680:{NFSU2_TR(0x6cb680);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B6cb682:{NFSU2_TR(0x6cb682);
__builtin_memmove((R+0),(R+4),4);
}
B6cb684:{NFSU2_TR(0x6cb684);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6cb687:L6cb687:{c.instructions+=1;NFSU2_TR(0x6cb687);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6cb689;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cb687u);}goto L6cb687;}
}
B6cb689:L6cb689:{c.instructions+=2;NFSU2_TR(0x6cb689);
__builtin_memmove((R+4),(R+0),4);
}
B6cb68b:{NFSU2_TR(0x6cb68b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb68e:L6cb68e:{c.instructions+=3;NFSU2_TR(0x6cb68e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cb692:{NFSU2_TR(0x6cb692);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6cb695:{NFSU2_TR(0x6cb695);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cb697:L6cb697:{c.instructions+=1;NFSU2_TR(0x6cb697);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6cb699;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cb697u);}goto L6cb697;}
}
B6cb699:L6cb699:{c.instructions+=1;NFSU2_TR(0x6cb699);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cb785;}}
}
B6cb69f:L6cb69f:{c.instructions+=2;NFSU2_TR(0x6cb69f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6cb6a2:{NFSU2_TR(0x6cb6a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb6a5:L6cb6a5:{c.instructions+=9;NFSU2_TR(0x6cb6a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb6a6:{NFSU2_TR(0x6cb6a6);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6cb6a8:{NFSU2_TR(0x6cb6a8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb6a9:{NFSU2_TR(0x6cb6a9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6cb6ac:{NFSU2_TR(0x6cb6ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb6af:{NFSU2_TR(0x6cb6af);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb6b1:{NFSU2_TR(0x6cb6b1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb6b3:{NFSU2_TR(0x6cb6b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cb6b9:{NFSU2_TR(0x6cb6b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cb6beull));
TAIL_STATIC(0x699c39u,699);
}
B6cb6be:L6cb6be:{c.instructions+=10;NFSU2_TR(0x6cb6be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cb6c1:{NFSU2_TR(0x6cb6c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6cb6c3:{NFSU2_TR(0x6cb6c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B6cb6c6:{NFSU2_TR(0x6cb6c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb6c9:{NFSU2_TR(0x6cb6c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6cb6cc:{NFSU2_TR(0x6cb6cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cb6ce:{NFSU2_TR(0x6cb6ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6cb6d1:{NFSU2_TR(0x6cb6d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6cb6d4:{NFSU2_TR(0x6cb6d4);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B6cb6d7:{NFSU2_TR(0x6cb6d7);
if(r1(R+518)){{goto L6cb810;}}
}
B6cb6dd:L6cb6dd:{c.instructions+=12;NFSU2_TR(0x6cb6dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cb6e0:{NFSU2_TR(0x6cb6e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cb6e3:{NFSU2_TR(0x6cb6e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb6e6:{NFSU2_TR(0x6cb6e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb6e9:{NFSU2_TR(0x6cb6e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6cb6ec:{NFSU2_TR(0x6cb6ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6cb6ef:{NFSU2_TR(0x6cb6ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6cb6f2:{NFSU2_TR(0x6cb6f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6cb6f5:{NFSU2_TR(0x6cb6f5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb6f6:{NFSU2_TR(0x6cb6f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb6f9:{NFSU2_TR(0x6cb6f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb6fc:{NFSU2_TR(0x6cb6fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cb701ull));
TAIL_STATIC(0x699765u,699);
}
B6cb701:L6cb701:{c.instructions+=2;NFSU2_TR(0x6cb701);
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
B6cb703:{NFSU2_TR(0x6cb703);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cb823;}}
}
B6cb709:L6cb709:{c.instructions+=3;NFSU2_TR(0x6cb709);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cb70c:{NFSU2_TR(0x6cb70c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb70f:{NFSU2_TR(0x6cb70f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cb714ull));
TAIL_STATIC(0x699821u,699);
}
B6cb714:L6cb714:{c.instructions+=3;NFSU2_TR(0x6cb714);
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
B6cb716:{NFSU2_TR(0x6cb716);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb719:{NFSU2_TR(0x6cb719);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cb826;}}
}
B6cb71f:L6cb71f:{c.instructions+=20;NFSU2_TR(0x6cb71f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cb721:{NFSU2_TR(0x6cb721);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6cb724:{NFSU2_TR(0x6cb724);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb727:{NFSU2_TR(0x6cb727);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cb72a:{NFSU2_TR(0x6cb72a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cb72d:{NFSU2_TR(0x6cb72d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cb730:{NFSU2_TR(0x6cb730);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6cb733:{NFSU2_TR(0x6cb733);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6cb735:{NFSU2_TR(0x6cb735);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb738:{NFSU2_TR(0x6cb738);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B6cb73b:{NFSU2_TR(0x6cb73b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cb73e:{NFSU2_TR(0x6cb73e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cb741:{NFSU2_TR(0x6cb741);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6cb744:{NFSU2_TR(0x6cb744);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb747:{NFSU2_TR(0x6cb747);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cb74a:{NFSU2_TR(0x6cb74a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6cb74d:{NFSU2_TR(0x6cb74d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cb750:{NFSU2_TR(0x6cb750);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6cb753:{NFSU2_TR(0x6cb753);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb756:{NFSU2_TR(0x6cb756);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cb763;}}
}
B6cb758:L6cb758:{c.instructions+=4;NFSU2_TR(0x6cb758);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb75b:{NFSU2_TR(0x6cb75b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb75e:{NFSU2_TR(0x6cb75e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6cb761:{NFSU2_TR(0x6cb761);
{goto L6cb772;}
}
B6cb763:L6cb763:{c.instructions+=5;NFSU2_TR(0x6cb763);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb766:{NFSU2_TR(0x6cb766);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cb769:{NFSU2_TR(0x6cb769);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb76c:{NFSU2_TR(0x6cb76c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cb76f:{NFSU2_TR(0x6cb76f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6cb772:L6cb772:{c.instructions+=5;NFSU2_TR(0x6cb772);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cb775:{NFSU2_TR(0x6cb775);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb778:{NFSU2_TR(0x6cb778);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cb77c:{NFSU2_TR(0x6cb77c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6cb77f:{NFSU2_TR(0x6cb77f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cb6a5u);}goto L6cb6a5;}}
}
B6cb785:L6cb785:{c.instructions+=6;NFSU2_TR(0x6cb785);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb788:{NFSU2_TR(0x6cb788);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb78b:{NFSU2_TR(0x6cb78b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+4))));
s4(u32(r4(R+0)),r4(U+0));
}
B6cb78d:{NFSU2_TR(0x6cb78d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cb790:{NFSU2_TR(0x6cb790);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cb793:{NFSU2_TR(0x6cb793);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6cb795:L6cb795:{c.instructions+=3;NFSU2_TR(0x6cb795);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb798:{NFSU2_TR(0x6cb798);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6cb79b:{NFSU2_TR(0x6cb79b);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6cb843;}}
}
B6cb7a1:L6cb7a1:{c.instructions+=1;NFSU2_TR(0x6cb7a1);
TAIL_STATIC(0x6cafedu,6ca);
}
B6cb7a6:L6cb7a6:{c.instructions+=3;NFSU2_TR(0x6cb7a6);
u8 U[4];
w4(U+0,u32(0x7bf300ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb7ab:{NFSU2_TR(0x6cb7ab);
u8 U[4];
w4(U+0,u32(0x12dfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb7b0:{NFSU2_TR(0x6cb7b0);
{goto L6cb7f9;}
}
B6cb7b2:L6cb7b2:{c.instructions+=2;NFSU2_TR(0x6cb7b2);
u8 U[4];
w4(U+0,u32(0x7bf2ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb7b7:{NFSU2_TR(0x6cb7b7);
{goto L6cb7e8;}
}
B6cb7b9:L6cb7b9:{c.instructions+=1;NFSU2_TR(0x6cb7b9);
u8 U[4];
w4(U+0,u32(0x7bf2acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb7be:L6cb7be:{c.instructions+=2;NFSU2_TR(0x6cb7be);
u8 U[4];
w4(U+0,u32(0x12e1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb7c3:{NFSU2_TR(0x6cb7c3);
{goto L6cb7f9;}
}
B6cb7c5:L6cb7c5:{c.instructions+=2;NFSU2_TR(0x6cb7c5);
__builtin_memmove((R+4),(R+28),4);
}
B6cb7c7:{NFSU2_TR(0x6cb7c7);
{goto L6cb7d8;}
}
B6cb7c9:L6cb7c9:{c.instructions+=2;NFSU2_TR(0x6cb7c9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb7cb:{NFSU2_TR(0x6cb7cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cb7d0ull));
TAIL_STATIC(0x6739efu,673);
}
B6cb7d0:L6cb7d0:{c.instructions+=2;NFSU2_TR(0x6cb7d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb7d3:{NFSU2_TR(0x6cb7d3);
{goto L6cb845;}
}
B6cb7d5:L6cb7d5:{c.instructions+=1;NFSU2_TR(0x6cb7d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb7d8:L6cb7d8:{c.instructions+=2;NFSU2_TR(0x6cb7d8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb7da:{NFSU2_TR(0x6cb7da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cb7dfull));
TAIL_STATIC(0x6739efu,673);
}
B6cb7df:L6cb7df:{c.instructions+=2;NFSU2_TR(0x6cb7df);
__builtin_memmove((R+0),(R+12),4);
}
B6cb7e1:{NFSU2_TR(0x6cb7e1);
{goto L6cb845;}
}
B6cb7e3:L6cb7e3:{c.instructions+=1;NFSU2_TR(0x6cb7e3);
u8 U[4];
w4(U+0,u32(0x7bf270ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb7e8:L6cb7e8:{c.instructions+=2;NFSU2_TR(0x6cb7e8);
u8 U[4];
w4(U+0,u32(0x12e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb7ed:{NFSU2_TR(0x6cb7ed);
{goto L6cb7f9;}
}
B6cb7ef:L6cb7ef:{c.instructions+=2;NFSU2_TR(0x6cb7ef);
u8 U[4];
w4(U+0,u32(0x7bf250ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb7f4:{NFSU2_TR(0x6cb7f4);
u8 U[4];
w4(U+0,u32(0x1194ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb7f9:L6cb7f9:{c.instructions+=3;NFSU2_TR(0x6cb7f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cb7fc:{NFSU2_TR(0x6cb7fc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb7fd:{NFSU2_TR(0x6cb7fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cb802ull));
TAIL_STATIC(0x69e936u,69e);
}
B6cb802:L6cb802:{c.instructions+=3;NFSU2_TR(0x6cb802);
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
B6cb805:{NFSU2_TR(0x6cb805);
w4(R+0,u32(0x80004005ull));
}
B6cb80a:{NFSU2_TR(0x6cb80a);
{goto L6cb845;}
}
B6cb80c:L6cb80c:{c.instructions+=2;NFSU2_TR(0x6cb80c);
__builtin_memmove((R+24),(R+0),4);
}
B6cb80e:{NFSU2_TR(0x6cb80e);
{goto L6cb815;}
}
B6cb810:L6cb810:{c.instructions+=1;NFSU2_TR(0x6cb810);
w4(R+24,u32(0x8007000eull));
}
B6cb815:L6cb815:{c.instructions+=3;NFSU2_TR(0x6cb815);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb818:{NFSU2_TR(0x6cb818);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb81a:{NFSU2_TR(0x6cb81a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cb81full));
TAIL_STATIC(0x6739efu,673);
}
B6cb81f:L6cb81f:{c.instructions+=2;NFSU2_TR(0x6cb81f);
__builtin_memmove((R+0),(R+24),4);
}
B6cb821:{NFSU2_TR(0x6cb821);
{goto L6cb845;}
}
B6cb823:L6cb823:{c.instructions+=1;NFSU2_TR(0x6cb823);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb826:L6cb826:{c.instructions+=2;NFSU2_TR(0x6cb826);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb828:{NFSU2_TR(0x6cb828);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cb82dull));
TAIL_STATIC(0x6739efu,673);
}
B6cb82d:L6cb82d:{c.instructions+=2;NFSU2_TR(0x6cb82d);
w4(R+0,u32(0x8007000eull));
}
B6cb832:{NFSU2_TR(0x6cb832);
{goto L6cb845;}
}
B6cb834:L6cb834:{c.instructions+=2;NFSU2_TR(0x6cb834);
u8 U[4];
w4(U+0,u32(0x7bf228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb839:{NFSU2_TR(0x6cb839);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cb7beu);}goto L6cb7be;}
}
B6cb83b:L6cb83b:{c.instructions+=3;NFSU2_TR(0x6cb83b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb83e:{NFSU2_TR(0x6cb83e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb841:{NFSU2_TR(0x6cb841);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6cb843:L6cb843:{c.instructions+=1;NFSU2_TR(0x6cb843);
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
B6cb845:L6cb845:{c.instructions+=5;NFSU2_TR(0x6cb845);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cb846:{NFSU2_TR(0x6cb846);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6cb847:{NFSU2_TR(0x6cb847);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6cb848:{NFSU2_TR(0x6cb848);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6cb849:{NFSU2_TR(0x6cb849);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6cb84c:L6cb84c:{c.instructions+=16;NFSU2_TR(0x6cb84c);
__builtin_memmove((R+28),(R+28),4);
}
B6cb84e:{NFSU2_TR(0x6cb84e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb84f:{NFSU2_TR(0x6cb84f);
__builtin_memmove((R+20),(R+16),4);
}
B6cb851:{NFSU2_TR(0x6cb851);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B6cb854:{NFSU2_TR(0x6cb854);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cb857:{NFSU2_TR(0x6cb857);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb858:{NFSU2_TR(0x6cb858);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cb85b:{NFSU2_TR(0x6cb85b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb85e:{NFSU2_TR(0x6cb85e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cb860:{NFSU2_TR(0x6cb860);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cb863:{NFSU2_TR(0x6cb863);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cb866:{NFSU2_TR(0x6cb866);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb869:{NFSU2_TR(0x6cb869);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cb86c:{NFSU2_TR(0x6cb86c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb86f:{NFSU2_TR(0x6cb86f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb872:{NFSU2_TR(0x6cb872);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cb87b;}}
}
B6cb874:L6cb874:{c.instructions+=2;NFSU2_TR(0x6cb874);
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
B6cb876:{NFSU2_TR(0x6cb876);
{goto L6cbaa2;}
}
B6cb87b:L6cb87b:{c.instructions+=5;NFSU2_TR(0x6cb87b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cb87f:{NFSU2_TR(0x6cb87f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb883:{NFSU2_TR(0x6cb883);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb884:{NFSU2_TR(0x6cb884);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cb885:{NFSU2_TR(0x6cb885);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cb8bf;}}
}
B6cb887:L6cb887:{c.instructions+=2;NFSU2_TR(0x6cb887);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cb88a:{NFSU2_TR(0x6cb88a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cb88d:L6cb88d:{c.instructions+=5;NFSU2_TR(0x6cb88d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cb88f:{NFSU2_TR(0x6cb88f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cb892:{NFSU2_TR(0x6cb892);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cb898:{NFSU2_TR(0x6cb898);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb89b:{NFSU2_TR(0x6cb89b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cb8ae;}}
}
B6cb89d:L6cb89d:{c.instructions+=3;NFSU2_TR(0x6cb89d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb8a0:{NFSU2_TR(0x6cb8a0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb8a3:{NFSU2_TR(0x6cb8a3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cb8ae;}}
}
B6cb8a5:L6cb8a5:{c.instructions+=2;NFSU2_TR(0x6cb8a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6cb8a8:{NFSU2_TR(0x6cb8a8);
if(r1(R+512)){{goto L6cba9e;}}
}
B6cb8ae:L6cb8ae:{c.instructions+=5;NFSU2_TR(0x6cb8ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cb8b1:{NFSU2_TR(0x6cb8b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb8b4:{NFSU2_TR(0x6cb8b4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6cb8b7:{NFSU2_TR(0x6cb8b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6cb8ba:{NFSU2_TR(0x6cb8ba);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cb88du);}goto L6cb88d;}}
}
B6cb8bc:L6cb8bc:{c.instructions+=1;NFSU2_TR(0x6cb8bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cb8bf:L6cb8bf:{c.instructions+=5;NFSU2_TR(0x6cb8bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cb8c2:{NFSU2_TR(0x6cb8c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cb8c5:{NFSU2_TR(0x6cb8c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6cb8c7:{NFSU2_TR(0x6cb8c7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb8ca:{NFSU2_TR(0x6cb8ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cba9e;}}
}
B6cb8d0:L6cb8d0:{c.instructions+=4;NFSU2_TR(0x6cb8d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cb8d3:{NFSU2_TR(0x6cb8d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cb8d7:{NFSU2_TR(0x6cb8d7);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cb8d9:{NFSU2_TR(0x6cb8d9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cb934;}}
}
B6cb8db:L6cb8db:{c.instructions+=2;NFSU2_TR(0x6cb8db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cb8de:{NFSU2_TR(0x6cb8de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb8e1:L6cb8e1:{c.instructions+=7;NFSU2_TR(0x6cb8e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cb8e4:{NFSU2_TR(0x6cb8e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6cb8e6:{NFSU2_TR(0x6cb8e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cb8e9:{NFSU2_TR(0x6cb8e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6cb8ec:{NFSU2_TR(0x6cb8ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cb8ef:{NFSU2_TR(0x6cb8ef);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb8f2:{NFSU2_TR(0x6cb8f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cba9e;}}
}
B6cb8f8:L6cb8f8:{c.instructions+=2;NFSU2_TR(0x6cb8f8);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb8fb:{NFSU2_TR(0x6cb8fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cba9e;}}
}
B6cb901:L6cb901:{c.instructions+=2;NFSU2_TR(0x6cb901);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb905:{NFSU2_TR(0x6cb905);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cb919;}}
}
B6cb907:L6cb907:{c.instructions+=5;NFSU2_TR(0x6cb907);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cb90a:{NFSU2_TR(0x6cb90a);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfffffull))));
}
B6cb910:{NFSU2_TR(0x6cb910);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
w8(U+8,u64(s64(s32(r4(R+12)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+12,u32(r8(U+24)));
}
B6cb914:{NFSU2_TR(0x6cb914);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb917:{NFSU2_TR(0x6cb917);
{goto L6cb91f;}
}
B6cb919:L6cb919:{c.instructions+=2;NFSU2_TR(0x6cb919);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cb91c:{NFSU2_TR(0x6cb91c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb91f:L6cb91f:{c.instructions+=1;NFSU2_TR(0x6cb91f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cba9e;}}
}
B6cb925:L6cb925:{c.instructions+=5;NFSU2_TR(0x6cb925);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cb928:{NFSU2_TR(0x6cb928);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cb92b:{NFSU2_TR(0x6cb92b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cb92f:{NFSU2_TR(0x6cb92f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6cb932:{NFSU2_TR(0x6cb932);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cb8e1u);}goto L6cb8e1;}}
}
B6cb934:L6cb934:{c.instructions+=5;NFSU2_TR(0x6cb934);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B6cb93a:{NFSU2_TR(0x6cb93a);
__builtin_memmove((R+8),(R+28),4);
}
B6cb93c:{NFSU2_TR(0x6cb93c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb93f:{NFSU2_TR(0x6cb93f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb942:{NFSU2_TR(0x6cb942);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cba9e;}}
}
B6cb948:L6cb948:{c.instructions+=5;NFSU2_TR(0x6cb948);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cb94b:{NFSU2_TR(0x6cb94b);
__builtin_memmove((R+12),(R+8),4);
}
B6cb94d:{NFSU2_TR(0x6cb94d);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+12)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+12,u32(r8(U+24)));
}
B6cb951:{NFSU2_TR(0x6cb951);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cb953:{NFSU2_TR(0x6cb953);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6cba9e;}}
}
B6cb959:L6cb959:{c.instructions+=3;NFSU2_TR(0x6cb959);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cb95d:{NFSU2_TR(0x6cb95d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cb95f:{NFSU2_TR(0x6cb95f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cb99d;}}
}
B6cb961:L6cb961:{c.instructions+=5;NFSU2_TR(0x6cb961);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cb964:{NFSU2_TR(0x6cb964);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb96a:{NFSU2_TR(0x6cb96a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb96d:{NFSU2_TR(0x6cb96d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb970:{NFSU2_TR(0x6cb970);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb973:L6cb973:{c.instructions+=6;NFSU2_TR(0x6cb973);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6cb975:{NFSU2_TR(0x6cb975);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cb978:{NFSU2_TR(0x6cb978);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6cb97b:{NFSU2_TR(0x6cb97b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cb97e:{NFSU2_TR(0x6cb97e);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb981:{NFSU2_TR(0x6cb981);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cb98f;}}
}
B6cb983:L6cb983:{c.instructions+=3;NFSU2_TR(0x6cb983);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cb986:{NFSU2_TR(0x6cb986);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb989:{NFSU2_TR(0x6cb989);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6cba9e;}}
}
B6cb98f:L6cb98f:{c.instructions+=5;NFSU2_TR(0x6cb98f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cb992:{NFSU2_TR(0x6cb992);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cb995:{NFSU2_TR(0x6cb995);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6cb998:{NFSU2_TR(0x6cb998);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B6cb99b:{NFSU2_TR(0x6cb99b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cb973u);}goto L6cb973;}}
}
B6cb99d:L6cb99d:{c.instructions+=3;NFSU2_TR(0x6cb99d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cb9a1:{NFSU2_TR(0x6cb9a1);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cb9a3:{NFSU2_TR(0x6cb9a3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cb9c2;}}
}
B6cb9a5:L6cb9a5:{c.instructions+=4;NFSU2_TR(0x6cb9a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb9a8:{NFSU2_TR(0x6cb9a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6cb9aa:{NFSU2_TR(0x6cb9aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cb9ad:{NFSU2_TR(0x6cb9ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb9b0:L6cb9b0:{c.instructions+=3;NFSU2_TR(0x6cb9b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cb9b3:{NFSU2_TR(0x6cb9b3);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6cb9b5:{NFSU2_TR(0x6cb9b5);
if(r1(R+518)){{goto L6cb9c2;}}
}
B6cb9b7:L6cb9b7:{c.instructions+=4;NFSU2_TR(0x6cb9b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cb9ba:{NFSU2_TR(0x6cb9ba);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6cb9bd:{NFSU2_TR(0x6cb9bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B6cb9c0:{NFSU2_TR(0x6cb9c0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cb9b0u);}goto L6cb9b0;}}
}
B6cb9c2:L6cb9c2:{c.instructions+=2;NFSU2_TR(0x6cb9c2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cb9c5:{NFSU2_TR(0x6cb9c5);
if(r1(R+518)){{goto L6cba9e;}}
}
B6cb9cb:L6cb9cb:{c.instructions+=2;NFSU2_TR(0x6cb9cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B6cb9ce:{NFSU2_TR(0x6cb9ce);
if(r1(R+512)){{goto L6cb9fd;}}
}
B6cb9d0:L6cb9d0:{c.instructions+=3;NFSU2_TR(0x6cb9d0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6cb9d2:{NFSU2_TR(0x6cb9d2);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cb9d4:{NFSU2_TR(0x6cb9d4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cb9fd;}}
}
B6cb9d6:L6cb9d6:{c.instructions+=2;NFSU2_TR(0x6cb9d6);
__builtin_memmove((R+24),(R+8),4);
}
B6cb9d8:{NFSU2_TR(0x6cb9d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6cb9db:L6cb9db:{c.instructions+=11;NFSU2_TR(0x6cb9db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb9de:{NFSU2_TR(0x6cb9de);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6cb9e1:{NFSU2_TR(0x6cb9e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6cb9e4:{NFSU2_TR(0x6cb9e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6cb9e6:{NFSU2_TR(0x6cb9e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6cb9e8:{NFSU2_TR(0x6cb9e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cb9eb:{NFSU2_TR(0x6cb9eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6cb9ee:{NFSU2_TR(0x6cb9ee);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6cb9ef:{NFSU2_TR(0x6cb9ef);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6cb9f2:{NFSU2_TR(0x6cb9f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6cb9f5:{NFSU2_TR(0x6cb9f5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cb9dbu);}goto L6cb9db;}}
}
B6cb9f7:L6cb9f7:{c.instructions+=2;NFSU2_TR(0x6cb9f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cb9fa:{NFSU2_TR(0x6cb9fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cb9fd:L6cb9fd:{c.instructions+=2;NFSU2_TR(0x6cb9fd);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x1ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cba01:{NFSU2_TR(0x6cba01);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cba90;}}
}
B6cba07:L6cba07:{c.instructions+=6;NFSU2_TR(0x6cba07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cba0a:{NFSU2_TR(0x6cba0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cba0d:{NFSU2_TR(0x6cba0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6cba10:{NFSU2_TR(0x6cba10);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B6cba12:{NFSU2_TR(0x6cba12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cba15:{NFSU2_TR(0x6cba15);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6cba90;}}
}
B6cba17:L6cba17:{c.instructions+=1;NFSU2_TR(0x6cba17);
{goto L6cba1c;}
}
B6cba19:L6cba19:{c.instructions+=1;NFSU2_TR(0x6cba19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cba1c:L6cba1c:{c.instructions+=2;NFSU2_TR(0x6cba1c);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cba1e:{NFSU2_TR(0x6cba1e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cba69;}}
}
B6cba20:L6cba20:{c.instructions+=6;NFSU2_TR(0x6cba20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cba23:{NFSU2_TR(0x6cba23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cba26:{NFSU2_TR(0x6cba26);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cba29:{NFSU2_TR(0x6cba29);
__builtin_memmove((R+28),(R+12),4);
}
B6cba2b:{NFSU2_TR(0x6cba2b);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B6cba2d:{NFSU2_TR(0x6cba2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cba30:L6cba30:{c.instructions+=3;NFSU2_TR(0x6cba30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cba33:{NFSU2_TR(0x6cba33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cba37:{NFSU2_TR(0x6cba37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cba3a:L6cba3a:{c.instructions+=4;NFSU2_TR(0x6cba3a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6cba3d:{NFSU2_TR(0x6cba3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cba40:{NFSU2_TR(0x6cba40);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6cba42:{NFSU2_TR(0x6cba42);
if(r1(R+518)){{goto L6cba55;}}
}
B6cba44:L6cba44:{c.instructions+=5;NFSU2_TR(0x6cba44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cba47:{NFSU2_TR(0x6cba47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cba4a:{NFSU2_TR(0x6cba4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cba4e:{NFSU2_TR(0x6cba4e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B6cba51:{NFSU2_TR(0x6cba51);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cba3au);}goto L6cba3a;}}
}
B6cba53:L6cba53:{c.instructions+=1;NFSU2_TR(0x6cba53);
{goto L6cba61;}
}
B6cba55:L6cba55:{c.instructions+=4;NFSU2_TR(0x6cba55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6cba57:{NFSU2_TR(0x6cba57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cba5a:{NFSU2_TR(0x6cba5a);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6cba5e:{NFSU2_TR(0x6cba5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cba61:L6cba61:{c.instructions+=3;NFSU2_TR(0x6cba61);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6cba64:{NFSU2_TR(0x6cba64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cba67:{NFSU2_TR(0x6cba67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cba30u);}goto L6cba30;}}
}
B6cba69:L6cba69:{c.instructions+=6;NFSU2_TR(0x6cba69);
__builtin_memmove((R+4),(R+8),4);
}
B6cba6b:{NFSU2_TR(0x6cba6b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6cba6e:{NFSU2_TR(0x6cba6e);
__builtin_memmove((R+8),(R+4),4);
}
B6cba70:{NFSU2_TR(0x6cba70);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6cba73:{NFSU2_TR(0x6cba73);
__builtin_memmove((R+28),(R+12),4);
}
B6cba75:{NFSU2_TR(0x6cba75);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6cba78:L6cba78:{c.instructions+=1;NFSU2_TR(0x6cba78);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6cba7a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cba78u);}goto L6cba78;}
}
B6cba7a:L6cba7a:{c.instructions+=3;NFSU2_TR(0x6cba7a);
__builtin_memmove((R+4),(R+8),4);
}
B6cba7c:{NFSU2_TR(0x6cba7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cba7f:{NFSU2_TR(0x6cba7f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6cba82:L6cba82:{c.instructions+=1;NFSU2_TR(0x6cba82);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6cba84;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cba82u);}goto L6cba82;}
}
B6cba84:L6cba84:{c.instructions+=5;NFSU2_TR(0x6cba84);
__builtin_memmove((R+4),(R+8),4);
}
B6cba86:{NFSU2_TR(0x6cba86);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6cba89:{NFSU2_TR(0x6cba89);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B6cba8b:{NFSU2_TR(0x6cba8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6cba8e:{NFSU2_TR(0x6cba8e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cba19u);}goto L6cba19;}}
}
B6cba90:L6cba90:{c.instructions+=3;NFSU2_TR(0x6cba90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cba93:{NFSU2_TR(0x6cba93);
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
B6cba95:{NFSU2_TR(0x6cba95);
if(r1(R+518)){{goto L6cbaa0;}}
}
B6cba97:L6cba97:{c.instructions+=3;NFSU2_TR(0x6cba97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cba9a:{NFSU2_TR(0x6cba9a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6cba9c:{NFSU2_TR(0x6cba9c);
{goto L6cbaa0;}
}
B6cba9e:L6cba9e:{c.instructions+=1;NFSU2_TR(0x6cba9e);
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
B6cbaa0:L6cbaa0:{c.instructions+=2;NFSU2_TR(0x6cbaa0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cbaa1:{NFSU2_TR(0x6cbaa1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6cbaa2:L6cbaa2:{c.instructions+=3;NFSU2_TR(0x6cbaa2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6cbaa3:{NFSU2_TR(0x6cbaa3);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6cbaa4:{NFSU2_TR(0x6cbaa4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6cbaa7:L6cbaa7:{c.instructions+=12;NFSU2_TR(0x6cbaa7);
__builtin_memmove((R+28),(R+28),4);
}
B6cbaa9:{NFSU2_TR(0x6cbaa9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cbaaa:{NFSU2_TR(0x6cbaaa);
__builtin_memmove((R+20),(R+16),4);
}
B6cbaac:{NFSU2_TR(0x6cbaac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B6cbaaf:{NFSU2_TR(0x6cbaaf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cbab0:{NFSU2_TR(0x6cbab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cbab3:{NFSU2_TR(0x6cbab3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cbab4:{NFSU2_TR(0x6cbab4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6cbab6:{NFSU2_TR(0x6cbab6);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B6cbabc:{NFSU2_TR(0x6cbabc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cbabf:{NFSU2_TR(0x6cbabf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cbac2:{NFSU2_TR(0x6cbac2);
if(r1(R+518)){{goto L6cbc6d;}}
}
B6cbac8:L6cbac8:{c.instructions+=7;NFSU2_TR(0x6cbac8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cbacb:{NFSU2_TR(0x6cbacb);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6cbacd:{NFSU2_TR(0x6cbacd);
u8 U[56];
w8(U+0,u64(r4(R+24)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6cbacd);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6cbacd);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6cbacf:{NFSU2_TR(0x6cbacf);
__builtin_memmove((R+8),(R+0),4);
}
B6cbad1:{NFSU2_TR(0x6cbad1);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cbad3:{NFSU2_TR(0x6cbad3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cbad6:{NFSU2_TR(0x6cbad6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cbc59;}}
}
B6cbadc:L6cbadc:{c.instructions+=5;NFSU2_TR(0x6cbadc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cbae0:{NFSU2_TR(0x6cbae0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cbae1:{NFSU2_TR(0x6cbae1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cbae4:{NFSU2_TR(0x6cbae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cbae7:{NFSU2_TR(0x6cbae7);
{goto L6cbaef;}
}
B6cbae9:L6cbae9:{c.instructions+=2;NFSU2_TR(0x6cbae9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cbaec:{NFSU2_TR(0x6cbaec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cbaef:L6cbaef:{c.instructions+=10;NFSU2_TR(0x6cbaef);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cbaf2:{NFSU2_TR(0x6cbaf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cbaf5:{NFSU2_TR(0x6cbaf5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6cbaf8:{NFSU2_TR(0x6cbaf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cbafb:{NFSU2_TR(0x6cbafb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6cbafe:{NFSU2_TR(0x6cbafe);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cbb01:{NFSU2_TR(0x6cbb01);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cbb04:{NFSU2_TR(0x6cbb04);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cbb07:{NFSU2_TR(0x6cbb07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cbb0a:{NFSU2_TR(0x6cbb0a);
if(r1(R+518)){{goto L6cbc3b;}}
}
B6cbb10:L6cbb10:{c.instructions+=5;NFSU2_TR(0x6cbb10);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cbb12:{NFSU2_TR(0x6cbb12);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cbb15:{NFSU2_TR(0x6cbb15);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6cbb18:{NFSU2_TR(0x6cbb18);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6cbb1a:{NFSU2_TR(0x6cbb1a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cbb6f;}}
}
B6cbb1c:L6cbb1c:{c.instructions+=2;NFSU2_TR(0x6cbb1c);
__builtin_memmove((R+4),(R+0),4);
}
B6cbb1e:{NFSU2_TR(0x6cbb1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cbb21:L6cbb21:{c.instructions+=10;NFSU2_TR(0x6cbb21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cbb24:{NFSU2_TR(0x6cbb24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cbb27:{NFSU2_TR(0x6cbb27);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cbb2a:{NFSU2_TR(0x6cbb2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cbb2d:{NFSU2_TR(0x6cbb2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cbb30:{NFSU2_TR(0x6cbb30);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6cbb33:{NFSU2_TR(0x6cbb33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cbb36:{NFSU2_TR(0x6cbb36);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cbb3c:{NFSU2_TR(0x6cbb3c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cbb3f:{NFSU2_TR(0x6cbb3f);
if(r1(R+518)){{goto L6cbb44;}}
}
B6cbb41:L6cbb41:{c.instructions+=1;NFSU2_TR(0x6cbb41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B6cbb44:L6cbb44:{c.instructions+=2;NFSU2_TR(0x6cbb44);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cbb48:{NFSU2_TR(0x6cbb48);
if(r1(R+518)){{goto L6cbb4d;}}
}
B6cbb4a:L6cbb4a:{c.instructions+=1;NFSU2_TR(0x6cbb4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B6cbb4d:L6cbb4d:{c.instructions+=3;NFSU2_TR(0x6cbb4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cbb50:{NFSU2_TR(0x6cbb50);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cbb52:{NFSU2_TR(0x6cbb52);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cbb5c;}}
}
B6cbb54:L6cbb54:{c.instructions+=2;NFSU2_TR(0x6cbb54);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6cbb57:{NFSU2_TR(0x6cbb57);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6cbb5c;}}
}
B6cbb59:L6cbb59:{c.instructions+=1;NFSU2_TR(0x6cbb59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B6cbb5c:L6cbb5c:{c.instructions+=3;NFSU2_TR(0x6cbb5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cbb5f:{NFSU2_TR(0x6cbb5f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cbb62:{NFSU2_TR(0x6cbb62);
if(r1(R+518)){{goto L6cbb67;}}
}
B6cbb64:L6cbb64:{c.instructions+=1;NFSU2_TR(0x6cbb64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B6cbb67:L6cbb67:{c.instructions+=3;NFSU2_TR(0x6cbb67);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6cbb6a:{NFSU2_TR(0x6cbb6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cbb6d:{NFSU2_TR(0x6cbb6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cbb21u);}goto L6cbb21;}}
}
B6cbb6f:L6cbb6f:{c.instructions+=2;NFSU2_TR(0x6cbb6f);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6cbb72:{NFSU2_TR(0x6cbb72);
if(r1(R+518)){{goto L6cbc3e;}}
}
B6cbb78:L6cbb78:{c.instructions+=3;NFSU2_TR(0x6cbb78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cbb7b:{NFSU2_TR(0x6cbb7b);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6cbb7d:{NFSU2_TR(0x6cbb7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cbc3b;}}
}
B6cbb83:L6cbb83:{c.instructions+=3;NFSU2_TR(0x6cbb83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cbb86:{NFSU2_TR(0x6cbb86);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cbb88:{NFSU2_TR(0x6cbb88);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cbbb2;}}
}
B6cbb8a:L6cbb8a:{c.instructions+=2;NFSU2_TR(0x6cbb8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cbb8d:{NFSU2_TR(0x6cbb8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cbb90:L6cbb90:{c.instructions+=8;NFSU2_TR(0x6cbb90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cbb93:{NFSU2_TR(0x6cbb93);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cbb96:{NFSU2_TR(0x6cbb96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cbb99:{NFSU2_TR(0x6cbb99);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6cbb9c:{NFSU2_TR(0x6cbb9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cbb9f:{NFSU2_TR(0x6cbb9f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6cbba2:{NFSU2_TR(0x6cbba2);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cbba5:{NFSU2_TR(0x6cbba5);
if(r1(R+518)){{goto L6cbbaa;}}
}
B6cbba7:L6cbba7:{c.instructions+=1;NFSU2_TR(0x6cbba7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B6cbbaa:L6cbbaa:{c.instructions+=3;NFSU2_TR(0x6cbbaa);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6cbbad:{NFSU2_TR(0x6cbbad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cbbb0:{NFSU2_TR(0x6cbbb0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cbb90u);}goto L6cbb90;}}
}
B6cbbb2:L6cbbb2:{c.instructions+=2;NFSU2_TR(0x6cbbb2);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6cbbb5:{NFSU2_TR(0x6cbbb5);
if(r1(R+518)){{goto L6cbc3e;}}
}
B6cbbbb:L6cbbbb:{c.instructions+=4;NFSU2_TR(0x6cbbbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6cbbbd:{NFSU2_TR(0x6cbbbd);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffull))));
}
B6cbbc3:{NFSU2_TR(0x6cbbc3);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cbbc6:{NFSU2_TR(0x6cbbc6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cbc3b;}}
}
B6cbbc8:L6cbbc8:{c.instructions+=3;NFSU2_TR(0x6cbbc8);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B6cbbcc:{NFSU2_TR(0x6cbbcc);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cbbcf:{NFSU2_TR(0x6cbbcf);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6cbc3b;}}
}
B6cbbd1:L6cbbd1:{c.instructions+=5;NFSU2_TR(0x6cbbd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cbbd4:{NFSU2_TR(0x6cbbd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cbbd7:{NFSU2_TR(0x6cbbd7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6cbbd9:{NFSU2_TR(0x6cbbd9);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cbbdb:{NFSU2_TR(0x6cbbdb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cbbf4;}}
}
B6cbbdd:L6cbbdd:{c.instructions+=4;NFSU2_TR(0x6cbbdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cbbe0:{NFSU2_TR(0x6cbbe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cbbe3:{NFSU2_TR(0x6cbbe3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6cbbe5:{NFSU2_TR(0x6cbbe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cbbe8:L6cbbe8:{c.instructions+=2;NFSU2_TR(0x6cbbe8);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6cbbea:{NFSU2_TR(0x6cbbea);
if(r1(R+518)){{goto L6cbbf4;}}
}
B6cbbec:L6cbbec:{c.instructions+=4;NFSU2_TR(0x6cbbec);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6cbbed:{NFSU2_TR(0x6cbbed);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6cbbf0:{NFSU2_TR(0x6cbbf0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B6cbbf2:{NFSU2_TR(0x6cbbf2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cbbe8u);}goto L6cbbe8;}}
}
B6cbbf4:L6cbbf4:{c.instructions+=2;NFSU2_TR(0x6cbbf4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cbbf6:{NFSU2_TR(0x6cbbf6);
if(r1(R+518)){{goto L6cbc3b;}}
}
B6cbbf8:L6cbbf8:{c.instructions+=3;NFSU2_TR(0x6cbbf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cbbfb:{NFSU2_TR(0x6cbbfb);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cbbfe:{NFSU2_TR(0x6cbbfe);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cbc3e;}}
}
B6cbc00:L6cbc00:{c.instructions+=3;NFSU2_TR(0x6cbc00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cbc03:{NFSU2_TR(0x6cbc03);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cbc05:{NFSU2_TR(0x6cbc05);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cbc0e;}}
}
B6cbc07:L6cbc07:{c.instructions+=3;NFSU2_TR(0x6cbc07);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6cbc0a:{NFSU2_TR(0x6cbc0a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cbc0c:{NFSU2_TR(0x6cbc0c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cbc11;}}
}
B6cbc0e:L6cbc0e:{c.instructions+=1;NFSU2_TR(0x6cbc0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B6cbc11:L6cbc11:{c.instructions+=3;NFSU2_TR(0x6cbc11);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6cbc13:{NFSU2_TR(0x6cbc13);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cbc15:{NFSU2_TR(0x6cbc15);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cbc3e;}}
}
B6cbc17:L6cbc17:{c.instructions+=2;NFSU2_TR(0x6cbc17);
__builtin_memmove((R+8),(R+24),4);
}
B6cbc19:{NFSU2_TR(0x6cbc19);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6cbc1c:L6cbc1c:{c.instructions+=6;NFSU2_TR(0x6cbc1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cbc1f:{NFSU2_TR(0x6cbc1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cbc22:{NFSU2_TR(0x6cbc22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cbc25:{NFSU2_TR(0x6cbc25);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6cbc28:{NFSU2_TR(0x6cbc28);
u8 U[20];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+4))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6cbc2b:{NFSU2_TR(0x6cbc2b);
if(r1(R+518)){{goto L6cbc30;}}
}
B6cbc2d:L6cbc2d:{c.instructions+=1;NFSU2_TR(0x6cbc2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B6cbc30:L6cbc30:{c.instructions+=4;NFSU2_TR(0x6cbc30);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6cbc31:{NFSU2_TR(0x6cbc31);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6cbc34:{NFSU2_TR(0x6cbc34);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6cbc37:{NFSU2_TR(0x6cbc37);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cbc1cu);}goto L6cbc1c;}}
}
B6cbc39:L6cbc39:{c.instructions+=1;NFSU2_TR(0x6cbc39);
{goto L6cbc3e;}
}
B6cbc3b:L6cbc3b:{c.instructions+=1;NFSU2_TR(0x6cbc3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B6cbc3e:L6cbc3e:{c.instructions+=7;NFSU2_TR(0x6cbc3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cbc41:{NFSU2_TR(0x6cbc41);
__builtin_memmove((R+0),(R+24),4);
}
B6cbc43:{NFSU2_TR(0x6cbc43);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6cbc46:{NFSU2_TR(0x6cbc46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cbc49:{NFSU2_TR(0x6cbc49);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6cbc4c:{NFSU2_TR(0x6cbc4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cbc4f:{NFSU2_TR(0x6cbc4f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cbae9u);}goto L6cbae9;}}
}
B6cbc55:L6cbc55:{c.instructions+=2;NFSU2_TR(0x6cbc55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cbc58:{NFSU2_TR(0x6cbc58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cbc59:L6cbc59:{c.instructions+=3;NFSU2_TR(0x6cbc59);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6cbc5b:{NFSU2_TR(0x6cbc5b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cbc5d:{NFSU2_TR(0x6cbc5d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cbc6d;}}
}
B6cbc5f:L6cbc5f:{c.instructions+=3;NFSU2_TR(0x6cbc5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cbc62:{NFSU2_TR(0x6cbc62);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6cbc66:{NFSU2_TR(0x6cbc66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cbc76;}}
}
B6cbc68:L6cbc68:{c.instructions+=3;NFSU2_TR(0x6cbc68);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6cbc69:{NFSU2_TR(0x6cbc69);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6cbc6b:{NFSU2_TR(0x6cbc6b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cbc5fu);}goto L6cbc5f;}}
}
B6cbc6d:L6cbc6d:{c.instructions+=2;NFSU2_TR(0x6cbc6d);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6cbc6f:{NFSU2_TR(0x6cbc6f);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6cbc70:L6cbc70:{c.instructions+=4;NFSU2_TR(0x6cbc70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6cbc71:{NFSU2_TR(0x6cbc71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6cbc72:{NFSU2_TR(0x6cbc72);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6cbc73:{NFSU2_TR(0x6cbc73);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6cbc76:L6cbc76:{c.instructions+=2;NFSU2_TR(0x6cbc76);
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
B6cbc78:{NFSU2_TR(0x6cbc78);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cbc70u);}goto L6cbc70;}
}
B6cbc7a:L6cbc7a:{c.instructions+=10;NFSU2_TR(0x6cbc7a);
__builtin_memmove((R+28),(R+28),4);
}
B6cbc7c:{NFSU2_TR(0x6cbc7c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cbc7d:{NFSU2_TR(0x6cbc7d);
__builtin_memmove((R+20),(R+16),4);
}
B6cbc7f:{NFSU2_TR(0x6cbc7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6cbc82:{NFSU2_TR(0x6cbc82);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cbc83:{NFSU2_TR(0x6cbc83);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cbc84:{NFSU2_TR(0x6cbc84);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cbc85:{NFSU2_TR(0x6cbc85);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cbc87:{NFSU2_TR(0x6cbc87);
__builtin_memmove((R+24),(R+4),4);
}
B6cbc89:{NFSU2_TR(0x6cbc89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cbc8eull));
TAIL_STATIC(0x699317u,699);
}
B6cbc8e:L6cbc8e:{c.instructions+=3;NFSU2_TR(0x6cbc8e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6cbc90:{NFSU2_TR(0x6cbc90);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cbc92:{NFSU2_TR(0x6cbc92);
if(r1(R+518)){{goto L6cbca0;}}
}
B6cbc94:L6cbc94:{c.instructions+=2;NFSU2_TR(0x6cbc94);
__builtin_memmove((R+4),(R+0),4);
}
B6cbc96:{NFSU2_TR(0x6cbc96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cbc9bull));
TAIL_STATIC(0x698e7du,698);
}
B6cbc9b:L6cbc9b:{c.instructions+=2;NFSU2_TR(0x6cbc9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cbc9e:{NFSU2_TR(0x6cbc9e);
{goto L6cbca3;}
}
B6cbca0:L6cbca0:{c.instructions+=1;NFSU2_TR(0x6cbca0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cbca3:L6cbca3:{c.instructions+=2;NFSU2_TR(0x6cbca3);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6cbca6:{NFSU2_TR(0x6cbca6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cbcb2;}}
}
B6cbca8:L6cbca8:{c.instructions+=2;NFSU2_TR(0x6cbca8);
w4(R+28,u32(0x8007000eull));
}
B6cbcad:{NFSU2_TR(0x6cbcad);
{goto L6cbdd4;}
}
B6cbcb2:L6cbcb2:{c.instructions+=4;NFSU2_TR(0x6cbcb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cbcb5:{NFSU2_TR(0x6cbcb5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cbcb7:{NFSU2_TR(0x6cbcb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cbcba:{NFSU2_TR(0x6cbcba);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cbce4;}}
}
B6cbcbc:L6cbcbc:{c.instructions+=3;NFSU2_TR(0x6cbcbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cbcc2:{NFSU2_TR(0x6cbcc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cbcc5:{NFSU2_TR(0x6cbcc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cbcc8:L6cbcc8:{c.instructions+=6;NFSU2_TR(0x6cbcc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6cbcca:{NFSU2_TR(0x6cbcca);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6cbccd:{NFSU2_TR(0x6cbccd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cbcd0:{NFSU2_TR(0x6cbcd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cbcd3:{NFSU2_TR(0x6cbcd3);
u8 U[20];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6cbcd7:{NFSU2_TR(0x6cbcd7);
if(r1(R+518)){{goto L6cbcdc;}}
}
B6cbcd9:L6cbcd9:{c.instructions+=1;NFSU2_TR(0x6cbcd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cbcdc:L6cbcdc:{c.instructions+=3;NFSU2_TR(0x6cbcdc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6cbcdf:{NFSU2_TR(0x6cbcdf);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6cbce0:{NFSU2_TR(0x6cbce0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cbcc8u);}goto L6cbcc8;}}
}
B6cbce2:L6cbce2:{c.instructions+=1;NFSU2_TR(0x6cbce2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6cbce4:L6cbce4:{c.instructions+=12;NFSU2_TR(0x6cbce4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cbce7:{NFSU2_TR(0x6cbce7);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B6cbceb:{NFSU2_TR(0x6cbceb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cbcee:{NFSU2_TR(0x6cbcee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cbcef:{NFSU2_TR(0x6cbcef);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cbcf2:{NFSU2_TR(0x6cbcf2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cbcf3:{NFSU2_TR(0x6cbcf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cbcf9:{NFSU2_TR(0x6cbcf9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cbcfb:{NFSU2_TR(0x6cbcfb);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6cbd00:{NFSU2_TR(0x6cbd00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))|u32(r4(U+4))));
}
B6cbd03:{NFSU2_TR(0x6cbd03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cbd04:{NFSU2_TR(0x6cbd04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cbd09ull));
TAIL_STATIC(0x699362u,699);
}
B6cbd09:L6cbd09:{c.instructions+=3;NFSU2_TR(0x6cbd09);
__builtin_memmove((R+28),(R+0),4);
}
B6cbd0b:{NFSU2_TR(0x6cbd0b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6cbd0d:{NFSU2_TR(0x6cbd0d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cbdc5;}}
}
B6cbd13:L6cbd13:{c.instructions+=3;NFSU2_TR(0x6cbd13);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cbd19:{NFSU2_TR(0x6cbd19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cbd1c:{NFSU2_TR(0x6cbd1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cbd21ull));
TAIL_STATIC(0x698eb3u,698);
}
B6cbd21:L6cbd21:{c.instructions+=3;NFSU2_TR(0x6cbd21);
__builtin_memmove((R+28),(R+0),4);
}
B6cbd23:{NFSU2_TR(0x6cbd23);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6cbd25:{NFSU2_TR(0x6cbd25);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cbdc5;}}
}
B6cbd2b:L6cbd2b:{c.instructions+=3;NFSU2_TR(0x6cbd2b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cbd2e:{NFSU2_TR(0x6cbd2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cbd31:{NFSU2_TR(0x6cbd31);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cbdb0;}}
}
B6cbd33:L6cbd33:{c.instructions+=4;NFSU2_TR(0x6cbd33);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6cbd35:{NFSU2_TR(0x6cbd35);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cbd38:{NFSU2_TR(0x6cbd38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cbd3b:{NFSU2_TR(0x6cbd3b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cbda5;}}
}
B6cbd3d:L6cbd3d:{c.instructions+=9;NFSU2_TR(0x6cbd3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cbd43:{NFSU2_TR(0x6cbd43);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cbd46:{NFSU2_TR(0x6cbd46);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6cbd49:{NFSU2_TR(0x6cbd49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cbd4c:{NFSU2_TR(0x6cbd4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6cbd4f:{NFSU2_TR(0x6cbd4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cbd52:{NFSU2_TR(0x6cbd52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cbd55:{NFSU2_TR(0x6cbd55);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6cbd59:{NFSU2_TR(0x6cbd59);
if(r1(R+518)){{goto L6cbd9f;}}
}
B6cbd5b:L6cbd5b:{c.instructions+=14;NFSU2_TR(0x6cbd5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cbd5e:{NFSU2_TR(0x6cbd5e);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B6cbd62:{NFSU2_TR(0x6cbd62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cbd65:{NFSU2_TR(0x6cbd65);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w8(U+8,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
}
B6cbd69:{NFSU2_TR(0x6cbd69);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cbd6c:{NFSU2_TR(0x6cbd6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B6cbd6f:{NFSU2_TR(0x6cbd6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cbd72:{NFSU2_TR(0x6cbd72);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cbd75:{NFSU2_TR(0x6cbd75);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6cbd77:{NFSU2_TR(0x6cbd77);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cbd7a:{NFSU2_TR(0x6cbd7a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6cbd7d:{NFSU2_TR(0x6cbd7d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6cbd7f:{NFSU2_TR(0x6cbd7f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cbd82:{NFSU2_TR(0x6cbd82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cbd9c;}}
}
B6cbd84:L6cbd84:{c.instructions+=7;NFSU2_TR(0x6cbd84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cbd8a:{NFSU2_TR(0x6cbd8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cbd8d:{NFSU2_TR(0x6cbd8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cbd90:{NFSU2_TR(0x6cbd90);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cbd93:{NFSU2_TR(0x6cbd93);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cbd96:{NFSU2_TR(0x6cbd96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cbd99:{NFSU2_TR(0x6cbd99);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6cbd9c:L6cbd9c:{c.instructions+=1;NFSU2_TR(0x6cbd9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cbd9f:L6cbd9f:{c.instructions+=3;NFSU2_TR(0x6cbd9f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6cbda0:{NFSU2_TR(0x6cbda0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6cbda3:{NFSU2_TR(0x6cbda3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cbd3du);}goto L6cbd3d;}}
}
B6cbda5:L6cbda5:{c.instructions+=4;NFSU2_TR(0x6cbda5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cbda8:{NFSU2_TR(0x6cbda8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cbdab:{NFSU2_TR(0x6cbdab);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6cbdae:{NFSU2_TR(0x6cbdae);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cbd33u);}goto L6cbd33;}}
}
B6cbdb0:L6cbdb0:{c.instructions+=3;NFSU2_TR(0x6cbdb0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cbdb3:{NFSU2_TR(0x6cbdb3);
__builtin_memmove((R+4),(R+24),4);
}
B6cbdb5:{NFSU2_TR(0x6cbdb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cbdbaull));
TAIL_STATIC(0x699b26u,699);
}
B6cbdba:L6cbdba:{c.instructions+=3;NFSU2_TR(0x6cbdba);
__builtin_memmove((R+28),(R+0),4);
}
B6cbdbc:{NFSU2_TR(0x6cbdbc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6cbdbe:{NFSU2_TR(0x6cbdbe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6cbdc5;}}
}
B6cbdc0:L6cbdc0:{c.instructions+=2;NFSU2_TR(0x6cbdc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cbdc3:{NFSU2_TR(0x6cbdc3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6cbdc5:L6cbdc5:{c.instructions+=2;NFSU2_TR(0x6cbdc5);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6cbdc8:{NFSU2_TR(0x6cbdc8);
if(r1(R+518)){{goto L6cbdd4;}}
}
B6cbdca:L6cbdca:{c.instructions+=3;NFSU2_TR(0x6cbdca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cbdcd:{NFSU2_TR(0x6cbdcd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cbdcf:{NFSU2_TR(0x6cbdcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cbdd4ull));
TAIL_STATIC(0x6739efu,673);
}
B6cbdd4:L6cbdd4:{c.instructions+=6;NFSU2_TR(0x6cbdd4);
__builtin_memmove((R+0),(R+28),4);
}
B6cbdd6:{NFSU2_TR(0x6cbdd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cbdd7:{NFSU2_TR(0x6cbdd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6cbdd8:{NFSU2_TR(0x6cbdd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6cbdd9:{NFSU2_TR(0x6cbdd9);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6cbdda:{NFSU2_TR(0x6cbdda);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6cbddd:L6cbddd:{c.instructions+=6;NFSU2_TR(0x6cbddd);
__builtin_memmove((R+28),(R+28),4);
}
B6cbddf:{NFSU2_TR(0x6cbddf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cbde0:{NFSU2_TR(0x6cbde0);
__builtin_memmove((R+20),(R+16),4);
}
B6cbde2:{NFSU2_TR(0x6cbde2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cbde5:{NFSU2_TR(0x6cbde5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6cbde6:{NFSU2_TR(0x6cbde6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6cbde9:L6cbde9:{c.instructions+=6;NFSU2_TR(0x6cbde9);
__builtin_memmove((R+28),(R+28),4);
}
B6cbdeb:{NFSU2_TR(0x6cbdeb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cbdec:{NFSU2_TR(0x6cbdec);
__builtin_memmove((R+20),(R+16),4);
}
B6cbdee:{NFSU2_TR(0x6cbdee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cbdef:{NFSU2_TR(0x6cbdef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cbdf2:{NFSU2_TR(0x6cbdf2);
{goto L6cbe12;}
}
B6cbdf4:L6cbdf4:{c.instructions+=3;NFSU2_TR(0x6cbdf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cbdf7:{NFSU2_TR(0x6cbdf7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6cbdf8:{NFSU2_TR(0x6cbdf8);
if(r1(R+518)){{goto L6cbe31;}}
}
B6cbdfa:L6cbdfa:{c.instructions+=2;NFSU2_TR(0x6cbdfa);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6cbdfd:{NFSU2_TR(0x6cbdfd);
if(r1(R+518)){{goto L6cbe0f;}}
}
B6cbdff:L6cbdff:{c.instructions+=3;NFSU2_TR(0x6cbdff);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6cbe00:{NFSU2_TR(0x6cbe00);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6cbe01:{NFSU2_TR(0x6cbe01);
if(r1(R+518)){{goto L6cbe23;}}
}
B6cbe03:L6cbe03:{c.instructions+=2;NFSU2_TR(0x6cbe03);
u8 U[6];
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6cbe04:{NFSU2_TR(0x6cbe04);
if(r1(R+518)){{goto L6cbe1a;}}
}
B6cbe06:L6cbe06:{c.instructions+=3;NFSU2_TR(0x6cbe06);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6cbe07:{NFSU2_TR(0x6cbe07);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6cbe08:{NFSU2_TR(0x6cbe08);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cbe16;}}
}
B6cbe0a:L6cbe0a:{c.instructions+=2;NFSU2_TR(0x6cbe0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cbe0d:{NFSU2_TR(0x6cbe0d);
{goto L6cbe12;}
}
B6cbe0f:L6cbe0f:{c.instructions+=1;NFSU2_TR(0x6cbe0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cbe12:L6cbe12:{c.instructions+=2;NFSU2_TR(0x6cbe12);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cbe14:{NFSU2_TR(0x6cbe14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cbdf4u);}goto L6cbdf4;}}
}
B6cbe16:L6cbe16:{c.instructions+=2;NFSU2_TR(0x6cbe16);
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
B6cbe18:{NFSU2_TR(0x6cbe18);
{goto L6cbe47;}
}
B6cbe1a:L6cbe1a:{c.instructions+=3;NFSU2_TR(0x6cbe1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cbe1d:{NFSU2_TR(0x6cbe1d);
u8 U[40];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w8(U+16,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+0,u32(r8(U+32)));
w8(U+8,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B6cbe21:{NFSU2_TR(0x6cbe21);
{goto L6cbe47;}
}
B6cbe23:L6cbe23:{c.instructions+=2;NFSU2_TR(0x6cbe23);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cbe26:{NFSU2_TR(0x6cbe26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cbe2bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cbde9u);}goto L6cbde9;}
}
B6cbe2b:L6cbe2b:{c.instructions+=2;NFSU2_TR(0x6cbe2b);
u8 U[40];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w8(U+16,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+0,u32(r8(U+32)));
w8(U+8,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B6cbe2f:{NFSU2_TR(0x6cbe2f);
{goto L6cbe47;}
}
B6cbe31:L6cbe31:{c.instructions+=3;NFSU2_TR(0x6cbe31);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cbe32:{NFSU2_TR(0x6cbe32);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cbe35:{NFSU2_TR(0x6cbe35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cbe3aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cbde9u);}goto L6cbde9;}
}
B6cbe3a:L6cbe3a:{c.instructions+=3;NFSU2_TR(0x6cbe3a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cbe3d:{NFSU2_TR(0x6cbe3d);
__builtin_memmove((R+28),(R+0),4);
}
B6cbe3f:{NFSU2_TR(0x6cbe3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cbe44ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cbde9u);}goto L6cbde9;}
}
B6cbe44:L6cbe44:{c.instructions+=2;NFSU2_TR(0x6cbe44);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6cbe46:{NFSU2_TR(0x6cbe46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cbe47:L6cbe47:{c.instructions+=3;NFSU2_TR(0x6cbe47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6cbe48:{NFSU2_TR(0x6cbe48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6cbe49:{NFSU2_TR(0x6cbe49);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6cbe4c:L6cbe4c:{c.instructions+=8;NFSU2_TR(0x6cbe4c);
__builtin_memmove((R+28),(R+28),4);
}
B6cbe4e:{NFSU2_TR(0x6cbe4e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cbe4f:{NFSU2_TR(0x6cbe4f);
__builtin_memmove((R+20),(R+16),4);
}
B6cbe51:{NFSU2_TR(0x6cbe51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6cbe54:{NFSU2_TR(0x6cbe54);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cbe55:{NFSU2_TR(0x6cbe55);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6cbe57:{NFSU2_TR(0x6cbe57);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cbe5a:{NFSU2_TR(0x6cbe5a);
if(r1(R+518)){{goto L6cbe8b;}}
}
B6cbe5c:L6cbe5c:{c.instructions+=4;NFSU2_TR(0x6cbe5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cbe5f:{NFSU2_TR(0x6cbe5f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cbe60:{NFSU2_TR(0x6cbe60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cbe63:{NFSU2_TR(0x6cbe63);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cbe64:L6cbe64:{c.instructions+=3;NFSU2_TR(0x6cbe64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cbe67:{NFSU2_TR(0x6cbe67);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6cbe68:{NFSU2_TR(0x6cbe68);
if(r1(R+518)){{goto L6cbfcf;}}
}
B6cbe6e:L6cbe6e:{c.instructions+=2;NFSU2_TR(0x6cbe6e);
w1(R+512,u8((r4(R+0))<(u32(0x7ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6cbe71:{NFSU2_TR(0x6cbe71);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cbe7e;}}
}
B6cbe73:L6cbe73:{c.instructions+=4;NFSU2_TR(0x6cbe73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cbe76:{NFSU2_TR(0x6cbe76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cbe79:{NFSU2_TR(0x6cbe79);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6cbe7c:{NFSU2_TR(0x6cbe7c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cbe64u);}goto L6cbe64;}
}
B6cbe7e:L6cbe7e:{c.instructions+=2;NFSU2_TR(0x6cbe7e);
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
B6cbe7f:{NFSU2_TR(0x6cbe7f);
if(r1(R+518)){{goto L6cbe92;}}
}
B6cbe81:L6cbe81:{c.instructions+=2;NFSU2_TR(0x6cbe81);
w4(R+0,u32(0x80004005ull));
}
B6cbe86:{NFSU2_TR(0x6cbe86);
TAIL_STATIC(0x6cc0cau,6cc);
}
B6cbe8b:L6cbe8b:{c.instructions+=2;NFSU2_TR(0x6cbe8b);
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
B6cbe8d:{NFSU2_TR(0x6cbe8d);
TAIL_STATIC(0x6cc0ccu,6cc);
}
B6cbe92:L6cbe92:{c.instructions+=11;NFSU2_TR(0x6cbe92);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6cbe94:{NFSU2_TR(0x6cbe94);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cbe97:{NFSU2_TR(0x6cbe97);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6cbe98:{NFSU2_TR(0x6cbe98);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6cbe99:{NFSU2_TR(0x6cbe99);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6cbe9a:{NFSU2_TR(0x6cbe9a);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6cbe9b:{NFSU2_TR(0x6cbe9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cbe9e:{NFSU2_TR(0x6cbe9e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6cbea0:{NFSU2_TR(0x6cbea0);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cbea2:{NFSU2_TR(0x6cbea2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cbea3:{NFSU2_TR(0x6cbea3);
if(r1(R+518)){{goto L6cbed1;}}
}
B6cbea5:L6cbea5:{c.instructions+=2;NFSU2_TR(0x6cbea5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6cbea6:{NFSU2_TR(0x6cbea6);
if(r1(R+518)){{goto L6cbec9;}}
}
B6cbea8:L6cbea8:{c.instructions+=2;NFSU2_TR(0x6cbea8);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6cbea9:{NFSU2_TR(0x6cbea9);
if(r1(R+518)){{goto L6cbeb6;}}
}
B6cbeab:L6cbeab:{c.instructions+=2;NFSU2_TR(0x6cbeab);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6cbeac:{NFSU2_TR(0x6cbeac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cbed5;}}
}
B6cbeae:L6cbeae:{c.instructions+=2;NFSU2_TR(0x6cbeae);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w2(U+4,u16(0x4ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6cbeb4:{NFSU2_TR(0x6cbeb4);
{goto L6cbed5;}
}
B6cbeb6:L6cbeb6:{c.instructions+=7;NFSU2_TR(0x6cbeb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cbeb9:{NFSU2_TR(0x6cbeb9);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B6cbebc:{NFSU2_TR(0x6cbebc);
w1(R+0,u8(~u32(r1(R+0))));
}
B6cbebe:{NFSU2_TR(0x6cbebe);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B6cbec1:{NFSU2_TR(0x6cbec1);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
}
B6cbec3:{NFSU2_TR(0x6cbec3);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6cbec7:{NFSU2_TR(0x6cbec7);
{goto L6cbed5;}
}
B6cbec9:L6cbec9:{c.instructions+=2;NFSU2_TR(0x6cbec9);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6cbecf:{NFSU2_TR(0x6cbecf);
{goto L6cbed5;}
}
B6cbed1:L6cbed1:{c.instructions+=1;NFSU2_TR(0x6cbed1);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6cbed5:L6cbed5:{c.instructions+=3;NFSU2_TR(0x6cbed5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cbed8:{NFSU2_TR(0x6cbed8);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x1cull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1cull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6cbedb:{NFSU2_TR(0x6cbedb);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6cbf9e;}}
}
B6cbee1:L6cbee1:{c.instructions+=1;NFSU2_TR(0x6cbee1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x6cc0d1ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6cbee8:L6cbee8:{c.instructions+=2;NFSU2_TR(0x6cbee8);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff2ull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6cbeee:{NFSU2_TR(0x6cbeee);
{goto L6cbfa2;}
}
B6cbef3:L6cbef3:{c.instructions+=2;NFSU2_TR(0x6cbef3);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff2ull))));
w2(U+4,u16(0x3ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6cbef9:{NFSU2_TR(0x6cbef9);
{goto L6cbfa2;}
}
B6cbefe:L6cbefe:{c.instructions+=2;NFSU2_TR(0x6cbefe);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff2ull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6cbf02:{NFSU2_TR(0x6cbf02);
{goto L6cbfa2;}
}
B6cbf07:L6cbf07:{c.instructions+=2;NFSU2_TR(0x6cbf07);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff2ull))));
w2(U+4,u16(0x4ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6cbf0d:{NFSU2_TR(0x6cbf0d);
{goto L6cbfa2;}
}
B6cbf12:L6cbf12:{c.instructions+=2;NFSU2_TR(0x6cbf12);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff2ull))));
w2(U+4,u16(0x5ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6cbf18:{NFSU2_TR(0x6cbf18);
{goto L6cbfa2;}
}
B6cbf1d:L6cbf1d:{c.instructions+=2;NFSU2_TR(0x6cbf1d);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff2ull))));
w2(U+4,u16(0x6ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6cbf23:{NFSU2_TR(0x6cbf23);
{goto L6cbfa2;}
}
B6cbf25:L6cbf25:{c.instructions+=2;NFSU2_TR(0x6cbf25);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff2ull))));
w2(U+4,u16(0x7ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6cbf2b:{NFSU2_TR(0x6cbf2b);
{goto L6cbfa2;}
}
B6cbf2d:L6cbf2d:{c.instructions+=2;NFSU2_TR(0x6cbf2d);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff2ull))));
w2(U+4,u16(0x8ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6cbf33:{NFSU2_TR(0x6cbf33);
{goto L6cbfa2;}
}
B6cbf35:L6cbf35:{c.instructions+=2;NFSU2_TR(0x6cbf35);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff2ull))));
w2(U+4,u16(0x9ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6cbf3b:{NFSU2_TR(0x6cbf3b);
{goto L6cbfa2;}
}
B6cbf3d:L6cbf3d:{c.instructions+=3;NFSU2_TR(0x6cbf3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cbf40:{NFSU2_TR(0x6cbf40);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cbf45:{NFSU2_TR(0x6cbf45);
if(r1(R+518)){{goto L6cbf4f;}}
}
B6cbf47:L6cbf47:{c.instructions+=2;NFSU2_TR(0x6cbf47);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff2ull))));
w2(U+4,u16(0xcull));
s2(u32(r4(U+0)),r2(U+4));
}
B6cbf4d:{NFSU2_TR(0x6cbf4d);
{goto L6cbfa2;}
}
B6cbf4f:L6cbf4f:{c.instructions+=2;NFSU2_TR(0x6cbf4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cbf54:{NFSU2_TR(0x6cbf54);
if(r1(R+518)){{goto L6cbf5e;}}
}
B6cbf56:L6cbf56:{c.instructions+=2;NFSU2_TR(0x6cbf56);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff2ull))));
w2(U+4,u16(0xdull));
s2(u32(r4(U+0)),r2(U+4));
}
B6cbf5c:{NFSU2_TR(0x6cbf5c);
{goto L6cbfa2;}
}
B6cbf5e:L6cbf5e:{c.instructions+=5;NFSU2_TR(0x6cbf5e);
u8 U[4];
w4(U+0,u32(u32(u32(0x16ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B6cbf61:{NFSU2_TR(0x6cbf61);
w2(R+0,u16(u32(r2(R+0))&u32(r2(R+28))));
}
B6cbf64:{NFSU2_TR(0x6cbf64);
w2(R+0,u16(u32(r2(R+0))|u32(u16(0xcull))));
}
B6cbf68:{NFSU2_TR(0x6cbf68);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff2ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6cbf6c:{NFSU2_TR(0x6cbf6c);
{goto L6cbfa2;}
}
B6cbf6e:L6cbf6e:{c.instructions+=2;NFSU2_TR(0x6cbf6e);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff2ull))));
w2(U+4,u16(0xbull));
s2(u32(r4(U+0)),r2(U+4));
}
B6cbf74:{NFSU2_TR(0x6cbf74);
{goto L6cbfa2;}
}
B6cbf76:L6cbf76:{c.instructions+=2;NFSU2_TR(0x6cbf76);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff2ull))));
w2(U+4,u16(0xeull));
s2(u32(r4(U+0)),r2(U+4));
}
B6cbf7c:{NFSU2_TR(0x6cbf7c);
{goto L6cbfa2;}
}
B6cbf7e:L6cbf7e:{c.instructions+=2;NFSU2_TR(0x6cbf7e);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff2ull))));
w2(U+4,u16(0xfull));
s2(u32(r4(U+0)),r2(U+4));
}
B6cbf84:{NFSU2_TR(0x6cbf84);
{goto L6cbfa2;}
}
B6cbf86:L6cbf86:{c.instructions+=2;NFSU2_TR(0x6cbf86);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff2ull))));
w2(U+4,u16(0x10ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6cbf8c:{NFSU2_TR(0x6cbf8c);
{goto L6cbfa2;}
}
B6cbf8e:L6cbf8e:{c.instructions+=2;NFSU2_TR(0x6cbf8e);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff2ull))));
w2(U+4,u16(0x11ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6cbf94:{NFSU2_TR(0x6cbf94);
{goto L6cbfa2;}
}
B6cbf96:L6cbf96:{c.instructions+=2;NFSU2_TR(0x6cbf96);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff2ull))));
w2(U+4,u16(0x12ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6cbf9c:{NFSU2_TR(0x6cbf9c);
{goto L6cbfa2;}
}
B6cbf9e:L6cbf9e:{c.instructions+=1;NFSU2_TR(0x6cbf9e);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff2ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6cbfa2:L6cbfa2:{c.instructions+=12;NFSU2_TR(0x6cbfa2);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6cbfa6:{NFSU2_TR(0x6cbfa6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cbfa9:{NFSU2_TR(0x6cbfa9);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6cbfad:{NFSU2_TR(0x6cbfad);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6cbfb1:{NFSU2_TR(0x6cbfb1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cbfb2:{NFSU2_TR(0x6cbfb2);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff6ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6cbfb6:{NFSU2_TR(0x6cbfb6);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cbfb8:{NFSU2_TR(0x6cbfb8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cbfbb:{NFSU2_TR(0x6cbfbb);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6cbfbf:{NFSU2_TR(0x6cbfbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cbfc2:{NFSU2_TR(0x6cbfc2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cbfc3:{NFSU2_TR(0x6cbfc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cbfc8ull));
TAIL_STATIC(0x6c140eu,6c1);
}
B6cbfc8:L6cbfc8:{c.instructions+=2;NFSU2_TR(0x6cbfc8);
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
B6cbfca:{NFSU2_TR(0x6cbfca);
TAIL_STATIC(0x6cc0c6u,6cc);
}
B6cbfcf:L6cbfcf:{c.instructions+=11;NFSU2_TR(0x6cbfcf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6cbfd1:{NFSU2_TR(0x6cbfd1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cbfd4:{NFSU2_TR(0x6cbfd4);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6cbfd5:{NFSU2_TR(0x6cbfd5);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6cbfd6:{NFSU2_TR(0x6cbfd6);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6cbfd7:{NFSU2_TR(0x6cbfd7);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6cbfd8:{NFSU2_TR(0x6cbfd8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cbfd9:{NFSU2_TR(0x6cbfd9);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w2(U+4,u16(0x5ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6cbfdf:{NFSU2_TR(0x6cbfdf);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff2ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6cbfe3:{NFSU2_TR(0x6cbfe3);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B6cbfe9:{NFSU2_TR(0x6cbfe9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cbfeeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cbde9u);}goto L6cbde9;}
}
B6cbfee:L6cbfee:{c.instructions+=6;NFSU2_TR(0x6cbfee);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff6ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6cbff2:{NFSU2_TR(0x6cbff2);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6cbff6:{NFSU2_TR(0x6cbff6);
__builtin_memmove((R+0),(R+24),4);
}
B6cbff8:{NFSU2_TR(0x6cbff8);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B6cbffc:{NFSU2_TR(0x6cbffc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cbfff:{NFSU2_TR(0x6cbfff);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
TAIL_STATIC(0x6cc001u,6cc);
}
XIT:NFSU2_TR_EXIT(0x6cb,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
